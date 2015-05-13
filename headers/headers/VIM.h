/*
 * Copyright (c) 2014-2015, Premysl Houdek <kom541000@gmail.com>
 *
 * Czech Technical University in Prague
 * Zikova 1903/4
 * 166 36 Praha 6
 * Czech Republic
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those
 * of the authors and should not be interpreted as representing official policies,
 * either expressed or implied, of the FreeBSD Project.
*/
#ifndef LIBBSP_ARM_tms570_VIM
#define LIBBSP_ARM_tms570_VIM

#include <bsp/utility.h>

typedef struct{
  uint32_t PARFLG;            /*Interrupt Vector Table Parity Flag Register*/
  uint32_t PARCTL;            /*Interrupt Vector Table Parity Control Register*/
  uint32_t ADDERR;            /*Address Parity Error Register*/
  uint32_t FBPARERR;          /*Fall-Back Address Parity Error Register*/
  uint8_t reserved1 [4];
  uint32_t IRQINDEX;          /*IRQ Index Offset Vector Register*/
  uint32_t FIQINDEX;          /*FIQ Index Offset Vector Register*/
  uint8_t reserved2 [8];
  uint32_t FIRQPR0;           /*FIQ/IRQ Program Control Register 0*/
  uint32_t FIRQPR1;           /*FIQ/IRQ Program Control Register 1*/
  uint32_t FIRQPR2;           /*FIQ/IRQ Program Control Register 2*/
  uint8_t reserved3 [4];
  uint32_t INTREQ0;           /*Pending Interrupt Read Location Register 0*/
  uint32_t INTREQ1;           /*Pending Interrupt Read Location Register 1*/
  uint32_t INTREQ2;           /*Pending Interrupt Read Location Register 2*/
  uint8_t reserved4 [4];
  uint32_t REQENASET0;        /*Interrupt Enable Set Register 0*/
  uint32_t REQENASET1;        /*Interrupt Enable Set Register 1*/
  uint32_t REQENASET2;        /*Interrupt Enable Set Register 2*/
  uint8_t reserved5 [4];
  uint32_t REQENACLR0;        /*Interrupt Enable Clear Register 0*/
  uint32_t REQENACLR1;        /*Interrupt Enable Clear Register 1*/
  uint32_t REQENACLR2;        /*Interrupt Enable Clear Register 2*/
  uint8_t reserved6 [4];
  uint32_t WAKEENASET0;       /*Wake-Up Enable Set Register 0*/
  uint32_t WAKEENASET1;       /*Wake-Up Enable Set Register 1*/
  uint32_t WAKEENASET2;       /*Wake-Up Enable Set Register 2*/
  uint8_t reserved7 [4];
  uint32_t WAKEENACLR0;       /*Wake-Up Enable Clear Registers 0*/
  uint32_t WAKEENACLR1;       /*Wake-Up Enable Clear Registers 1*/
  uint32_t WAKEENACLR2;       /*Wake-Up Enable Clear Registers 2*/
  uint8_t reserved8 [4];
  uint32_t IRQVECREG;         /*IRQ Interrupt Vector Register*/
  uint32_t FIQVECREG;         /*FIQ Interrupt Vector Register*/
  uint32_t CAPEVT;            /*Capture Event Register*/
  uint8_t reserved9 [4];
  uint32_t CHANCTRL[24];      /*VIM Interrupt Control Register*/
} tms570_vim_t;

/*-----------------------TMS570_PARFLG-----------------------*/
/* field: PARFLG - The PARFLG indicates that a parity error has been found and that theInterrupt Vector Table is */
#define TMS570_PARFLG_PARFLG BSP_FLD32(0)


/*-----------------------TMS570_PARCTL-----------------------*/
/* field: TEST - This bit maps the parity bits into the Interrupt Vector Table frame to make them accessible by the */
#define TMS570_PARCTL_TEST BSP_FLD32(8)

/* field: PARENA - VIM parity enable. */
#define TMS570_PARCTL_PARENA(val) BSP_FLD32(val,0, 3)
#define TMS570_PARCTL_PARENA_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_PARCTL_PARENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-----------------------TMS570_ADDERR-----------------------*/
/* field: Interrupt_Vector_Table - Interrupt Vector Table offset. */
#define TMS570_ADDERR_Interrupt_Vector_Table(val) BSP_FLD32(val,9, 31)
#define TMS570_ADDERR_Interrupt_Vector_Table_GET(reg) BSP_FLD32GET(reg,9, 31)
#define TMS570_ADDERR_Interrupt_Vector_Table_SET(reg,val) BSP_FLD32SET(reg, val,9, 31)

/* field: ADDERR - Address parity error register. */
#define TMS570_ADDERR_ADDERR(val) BSP_FLD32(val,2, 8)
#define TMS570_ADDERR_ADDERR_GET(reg) BSP_FLD32GET(reg,2, 8)
#define TMS570_ADDERR_ADDERR_SET(reg,val) BSP_FLD32SET(reg, val,2, 8)

/* field: Word_offset - Word offset. Reads are always 0; writes have no effect. */
#define TMS570_ADDERR_Word_offset(val) BSP_FLD32(val,0, 1)
#define TMS570_ADDERR_Word_offset_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_ADDERR_Word_offset_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*----------------------TMS570_FBPARERR----------------------*/
/* field: FBPARERR - Fall back address parity error. */
#define TMS570_FBPARERR_FBPARERR(val) BSP_FLD32(val,0, 31)
#define TMS570_FBPARERR_FBPARERR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FBPARERR_FBPARERR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_IRQINDEX----------------------*/
/* field: IRQINDEX - IRQ index vector. */
#define TMS570_IRQINDEX_IRQINDEX(val) BSP_FLD32(val,0, 7)
#define TMS570_IRQINDEX_IRQINDEX_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_IRQINDEX_IRQINDEX_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_FIQINDEX----------------------*/
/* field: FIQINDEX - FIQ index offset vector. */
#define TMS570_FIQINDEX_FIQINDEX(val) BSP_FLD32(val,0, 7)
#define TMS570_FIQINDEX_FIQINDEX_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_FIQINDEX_FIQINDEX_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_FIRQPR0-----------------------*/
/* field: FIRQPR2To31 - FIQ/IRQ program control bits. */
#define TMS570_FIRQPR0_FIRQPR2To31(val) BSP_FLD32(val,2, 31)
#define TMS570_FIRQPR0_FIRQPR2To31_GET(reg) BSP_FLD32GET(reg,2, 31)
#define TMS570_FIRQPR0_FIRQPR2To31_SET(reg,val) BSP_FLD32SET(reg, val,2, 31)


/*-----------------------TMS570_FIRQPR1-----------------------*/
/* field: FIRQPR32To63 - FIQ/IRQ program control bits. */
#define TMS570_FIRQPR1_FIRQPR32To63(val) BSP_FLD32(val,0, 31)
#define TMS570_FIRQPR1_FIRQPR32To63_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FIRQPR1_FIRQPR32To63_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_FIRQPR2-----------------------*/
/* field: FIRQPR64To95 - FIQ/IRQ program control bits. */
#define TMS570_FIRQPR2_FIRQPR64To95(val) BSP_FLD32(val,0, 31)
#define TMS570_FIRQPR2_FIRQPR64To95_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FIRQPR2_FIRQPR64To95_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_INTREQ0-----------------------*/
/* field: INTREQ0To31 - Pending interrupt bits. */
#define TMS570_INTREQ0_INTREQ0To31(val) BSP_FLD32(val,0, 31)
#define TMS570_INTREQ0_INTREQ0To31_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_INTREQ0_INTREQ0To31_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_INTREQ1-----------------------*/
/* field: INTREQ32To63 - Pending interrupt bits. */
#define TMS570_INTREQ1_INTREQ32To63(val) BSP_FLD32(val,0, 31)
#define TMS570_INTREQ1_INTREQ32To63_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_INTREQ1_INTREQ32To63_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_INTREQ2-----------------------*/
/* field: INTREQ64To95 - Pending interrupt bits. */
#define TMS570_INTREQ2_INTREQ64To95(val) BSP_FLD32(val,0, 31)
#define TMS570_INTREQ2_INTREQ64To95_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_INTREQ2_INTREQ64To95_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_REQENASET0---------------------*/
/* field: REQENASET2To31 - Request enable set bits. */
#define TMS570_REQENASET0_REQENASET2To31(val) BSP_FLD32(val,2, 31)
#define TMS570_REQENASET0_REQENASET2To31_GET(reg) BSP_FLD32GET(reg,2, 31)
#define TMS570_REQENASET0_REQENASET2To31_SET(reg,val) BSP_FLD32SET(reg, val,2, 31)


/*---------------------TMS570_REQENASET1---------------------*/
/* field: REQENASET32To63 - Request enable set bits. */
#define TMS570_REQENASET1_REQENASET32To63(val) BSP_FLD32(val,0, 31)
#define TMS570_REQENASET1_REQENASET32To63_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_REQENASET1_REQENASET32To63_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_REQENASET2---------------------*/
/* field: REQENASET64To95 - Request enable set bits. */
#define TMS570_REQENASET2_REQENASET64To95(val) BSP_FLD32(val,0, 31)
#define TMS570_REQENASET2_REQENASET64To95_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_REQENASET2_REQENASET64To95_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_REQENACLR0---------------------*/
/* field: REQENACLR2To31 - Request enable clear bits.This vector determines whether the interrupt request channel is enabled. */
#define TMS570_REQENACLR0_REQENACLR2To31(val) BSP_FLD32(val,2, 31)
#define TMS570_REQENACLR0_REQENACLR2To31_GET(reg) BSP_FLD32GET(reg,2, 31)
#define TMS570_REQENACLR0_REQENACLR2To31_SET(reg,val) BSP_FLD32SET(reg, val,2, 31)


/*---------------------TMS570_REQENACLR1---------------------*/
/* field: REQENACLR32To63 - Request enable clear bits.This vector determines whether the interrupt request channel is enabled. */
#define TMS570_REQENACLR1_REQENACLR32To63(val) BSP_FLD32(val,0, 31)
#define TMS570_REQENACLR1_REQENACLR32To63_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_REQENACLR1_REQENACLR32To63_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_REQENACLR2---------------------*/
/* field: REQENACLR64To95 - Request enable clear bits.This vector determines whether the interrupt request channel is enabled. */
#define TMS570_REQENACLR2_REQENACLR64To95(val) BSP_FLD32(val,0, 31)
#define TMS570_REQENACLR2_REQENACLR64To95_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_REQENACLR2_REQENACLR64To95_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_WAKEENASET0---------------------*/
/* field: WAKEENASET0To31 - Wake-up enable set bits. This vector determines whether the wake-up interrupt line is enabled. */
#define TMS570_WAKEENASET0_WAKEENASET0To31(val) BSP_FLD32(val,0, 31)
#define TMS570_WAKEENASET0_WAKEENASET0To31_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_WAKEENASET0_WAKEENASET0To31_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_WAKEENASET1---------------------*/
/* field: WAKEENASET32To63 - Wake-up enable set bits. This vector determines whether the wake-up interrupt line is enabled. */
#define TMS570_WAKEENASET1_WAKEENASET32To63(val) BSP_FLD32(val,0, 31)
#define TMS570_WAKEENASET1_WAKEENASET32To63_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_WAKEENASET1_WAKEENASET32To63_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_WAKEENASET2---------------------*/
/* field: WAKEENASET64To95 - Wake-up enable set bits. This vector determines whether the wake-up interrupt line is enabled. */
#define TMS570_WAKEENASET2_WAKEENASET64To95(val) BSP_FLD32(val,0, 31)
#define TMS570_WAKEENASET2_WAKEENASET64To95_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_WAKEENASET2_WAKEENASET64To95_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_WAKEENACLR0---------------------*/
/* field: WAKEENACLR0To31 - Wake-up enable clear bits. This vector determines whether the wake-up interrupt line is enabled. */
#define TMS570_WAKEENACLR0_WAKEENACLR0To31(val) BSP_FLD32(val,0, 31)
#define TMS570_WAKEENACLR0_WAKEENACLR0To31_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_WAKEENACLR0_WAKEENACLR0To31_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_WAKEENACLR1---------------------*/
/* field: WAKEENACLR32To63 - Wake-up enable clear bits. This vector determines whether the wake-up interrupt line is enabled. */
#define TMS570_WAKEENACLR1_WAKEENACLR32To63(val) BSP_FLD32(val,0, 31)
#define TMS570_WAKEENACLR1_WAKEENACLR32To63_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_WAKEENACLR1_WAKEENACLR32To63_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_WAKEENACLR2---------------------*/
/* field: WAKEENACLR64To95 - Wake-up enable clear bits. This vector determines whether the wake-up interrupt line is enabled. */
#define TMS570_WAKEENACLR2_WAKEENACLR64To95(val) BSP_FLD32(val,0, 31)
#define TMS570_WAKEENACLR2_WAKEENACLR64To95_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_WAKEENACLR2_WAKEENACLR64To95_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_IRQVECREG----------------------*/
/* field: IRQVECREG - IRQ interrupt vector register. */
#define TMS570_IRQVECREG_IRQVECREG(val) BSP_FLD32(val,0, 31)
#define TMS570_IRQVECREG_IRQVECREG_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_IRQVECREG_IRQVECREG_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_FIQVECREG----------------------*/
/* field: FIQVECREG - FIQ interrupt vector register. */
#define TMS570_FIQVECREG_FIQVECREG(val) BSP_FLD32(val,0, 31)
#define TMS570_FIQVECREG_FIQVECREG_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FIQVECREG_FIQVECREG_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_CAPEVT-----------------------*/
/* field: CAPEVTSRC1 - Capture event source 1 mapping control. */
#define TMS570_CAPEVT_CAPEVTSRC1(val) BSP_FLD32(val,16, 22)
#define TMS570_CAPEVT_CAPEVTSRC1_GET(reg) BSP_FLD32GET(reg,16, 22)
#define TMS570_CAPEVT_CAPEVTSRC1_SET(reg,val) BSP_FLD32SET(reg, val,16, 22)

/* field: CAPEVTSRC0 - the capture event source 0 of the RTI: */
#define TMS570_CAPEVT_CAPEVTSRC0(val) BSP_FLD32(val,0, 6)
#define TMS570_CAPEVT_CAPEVTSRC0_GET(reg) BSP_FLD32GET(reg,0, 6)
#define TMS570_CAPEVT_CAPEVTSRC0_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)


/*----------------------TMS570_CHANCTRL----------------------*/
/* field: CHANMAPx0 - CHANMAPx 0(6-0). Interrupt CHANx 0 mapping control. */
#define TMS570_CHANCTRL_CHANMAPx0(val) BSP_FLD32(val,24, 30)
#define TMS570_CHANCTRL_CHANMAPx0_GET(reg) BSP_FLD32GET(reg,24, 30)
#define TMS570_CHANCTRL_CHANMAPx0_SET(reg,val) BSP_FLD32SET(reg, val,24, 30)

/* field: CHANMAPx1 - CHANMAPx 1(6-0). Interrupt CHANx 1 mapping control. */
#define TMS570_CHANCTRL_CHANMAPx1(val) BSP_FLD32(val,16, 22)
#define TMS570_CHANCTRL_CHANMAPx1_GET(reg) BSP_FLD32GET(reg,16, 22)
#define TMS570_CHANCTRL_CHANMAPx1_SET(reg,val) BSP_FLD32SET(reg, val,16, 22)

/* field: CHANMAPx2 - CHANMAPx 2(6-0). Interrupt CHANx 2 mapping control. */
#define TMS570_CHANCTRL_CHANMAPx2(val) BSP_FLD32(val,8, 14)
#define TMS570_CHANCTRL_CHANMAPx2_GET(reg) BSP_FLD32GET(reg,8, 14)
#define TMS570_CHANCTRL_CHANMAPx2_SET(reg,val) BSP_FLD32SET(reg, val,8, 14)

/* field: CHANMAPx3 - CHANMAPx 3(6-0). Interrupt CHANx 3 mapping control. */
#define TMS570_CHANCTRL_CHANMAPx3(val) BSP_FLD32(val,0, 6)
#define TMS570_CHANCTRL_CHANMAPx3_GET(reg) BSP_FLD32GET(reg,0, 6)
#define TMS570_CHANCTRL_CHANMAPx3_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)



#endif /* LIBBSP_ARM_tms570_VIM */
