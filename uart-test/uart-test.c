asm(
" \n"
".code 32\n"
".global _start\n"
"_start: \n"
" 	ldr sp,init_stack_addr\n"
"	ldr r0,main_addr\n"
"	blx r0\n"
"final_loop:\n"
"	b   final_loop\n"
"init_stack_addr: \n"
"	.word bsp_section_stack_end-16\n"
"main_addr: \n"
"	.word main\n"
" \n"
".space 1024, 0 \n"
".code 16\n"
" \n"
);

#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include <sys/reent.h>
#include <reent.h>
#include <string.h>
#include "system_stub.h"
#include "tms570_pom.h"

//#define UART_BASE 0xFFF7E500U
#define UART_BASE 0xFFF7E400U

#define UART_FLR (*(volatile uint32_t *)(UART_BASE+0x1C))
#define UART_TD (*(volatile uint32_t *)(UART_BASE+0x38))

static inline
int my_printf(const char *format, ...) __attribute__ ((format (printf, 1, 2)));

#define printf my_printf

void myPrint(const char *text);

int my_vprintf(const char *format, va_list ap)
{
  char s[40];
  int ret;
  ret = vsnprintf(s, sizeof(s)-1, format, ap);
  s[sizeof(s)-1] = 0;
  myPrint(s);
  return ret;
}

static inline
int my_printf(const char *format, ...)
{
  int ret;
  va_list ap;
  va_start (ap, format);
  ret = my_vprintf(format, ap);
  va_end (ap);
  return ret;
}

void uartPutch(int ch)
{
    while ((UART_FLR & 0x100) == 0); /* wait until busy */
    UART_TD = ch;
}

void myPrint(const char *text)
{

    while(*text != 0) {
        if(*text == 0xa)
            uartPutch(0xd);
        uartPutch(*text);
        text+=1;
    };
}

int uartcon_write(int file, const char * ptr, int len)
{
  int cnt;
  unsigned char ch;
  for(cnt=0;cnt<len;cnt++,ptr++){
    ch=*ptr;
    if(ch==0xa)
      uartPutch(0xd);
    uartPutch(ch);
  }
  return cnt;
}


int mem_dump(void *buf, unsigned long start, unsigned long len, int blen)
{
  unsigned long addr=start;
  volatile unsigned char *p=buf;
  int i;

  while(len){
    printf("%08lX:",addr);
    i=len>16?16:len;
    addr+=i;
    len-=i;
    while(i>0){
      i -= blen;
      switch(blen){
        case 4:
          printf("%08lX%c",(unsigned long)*(volatile uint32_t*)p,i>0?' ':'\n');
          break;
        case 2:
          printf("%04X%c",*(volatile uint16_t*)p,i>0?' ':'\n');
          break;
        default:
          printf("%02X%c",*(volatile uint8_t*)(p),i>0?' ':'\n');
          break;
      }
      p += blen;
    }
  }
  return 0;
}


void test_sdram(void)
{
    int i;

    volatile uint8_t *p8 = (uint8_t *)0x80000000;

    volatile uint32_t *p32 = (uint32_t *)0x80000000;

    for (i = 0 ; i < 16; i++)
        p32[i] = 0x123456ff;

    for (i = 0 ; i < 16; i++)
        p8[i * 4 +3] = i;

    mem_dump((uint8_t *)0x80000000, 0x80000000, 256, 1);
}

void test_pom(void)
{
    int i;
    uint32_t vec_overlay_start = 0x08000000;
    volatile uint32_t *p32 = (uint32_t *)vec_overlay_start;
    for (i = 0 ; i < 16; i++)
        p32[i] = 0x12345600 + i;

    TMS570_POM.GLBCTRL = 0;

    for (i = 0; i < TMS570_POM_REGIONS; i++)
        TMS570_POM.REG[i].REGSIZE = TMS570_POM_REGSIZE_DISABLED;

    TMS570_POM.REG[0].PROGSTART = 0x0 & TMS570_POM_REGADDRMASK;
    TMS570_POM.REG[0].OVLSTART = vec_overlay_start & TMS570_POM_REGADDRMASK;
    TMS570_POM.REG[0].REGSIZE = TMS570_POM_REGSIZE_64B;

    TMS570_POM.GLBCTRL = TMS570_POM_GLBCTRL_ENABLE |
                         (vec_overlay_start & ~TMS570_POM_REGADDRMASK);

    p32[1] = 0xe12fff1e;

    mem_dump((uint8_t *)0x00000000, 0x00000000, 256, 1);

    printf("Probing call to address 0x00000004\n");
    ((void(*)(void))4)();
    printf("POM call really returned\n");
}

int main(void){
    myPrint("HELLO WORLD\n");
    system_stub_ops.write=uartcon_write;
    _REENT_INIT_PTR(_REENT);
    test_sdram();
    test_pom();
    while(1==1);
    return 0;
}
