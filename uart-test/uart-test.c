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
".code 16\n"
" \n"
);

#include <stdint.h>
#include <stdio.h>

#define UART_BASE 0xFFF7E500U
//#define UART_BASE 0xFFF7E400U

#define UART_FLR (*(volatile uint32_t *)(UART_BASE+0x1C))
#define UART_TD (*(volatile uint32_t *)(UART_BASE+0x38))

void myPrint(const char *text)
{

    while(text[0]!=0)
    {
        while ((UART_FLR & 0x100) == 0); /* wait until busy */
	UART_TD = text[0];
	text+=1;
    };
}
int main(void){
	myPrint("HELLO WORLD");
	while(1==1);
	return 0;
}
