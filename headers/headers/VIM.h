/*
 * Copyright (c) 2014 Premysl Houdek <kom541000@gmail.com>
 *
 * Google Summer of Code 2014 at
 * Czech Technical University in Prague
 * Zikova 1903/4
 * 166 36 Praha 6
 * Czech Republic
 *
 * Based on LPC24xx and LPC1768 BSP
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rtems.org/license/LICENSE.
 */
#ifndef LIBBSP_ARM_tms570_VIM.H
#define LIBBSP_ARM_tms570_VIM.H

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
} VIM_struct;

/*---------------------tms570_VIM_PARFLG---------------------*/
/* field: PARFLG - The PARFLG indicates that a parity error has been found and that theInterrupt Vector Table is */
#define tms570_VIM_PARFLG_PARFLG BSP_FLD32(0)


/*---------------------tms570_VIM_PARCTL---------------------*/
/* field: TEST - This bit maps the parity bits into the Interrupt Vector Table frame to make them accessible by the */
#define tms570_VIM_PARCTL_TEST BSP_FLD32(8)

/* field: PARENA - VIM parity enable. */
#define tms570_VIM_PARCTL_PARENA(val) BSP_FLD32(val,0, 3)
#define tms570_VIM_PARCTL_PARENA_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_VIM_PARCTL_PARENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------tms570_VIM_ADDERR---------------------*/
/* field: Interrupt_Vector_Table - Interrupt Vector Table offset. */
#define tms570_VIM_ADDERR_Interrupt_Vector_Table(val) BSP_FLD32(val,9, 31)
#define tms570_VIM_ADDERR_Interrupt_Vector_Table_GET(reg) BSP_FLD32GET(reg,9, 31)
#define tms570_VIM_ADDERR_Interrupt_Vector_Table_SET(reg,val) BSP_FLD32SET(reg, val,9, 31)

/* field: ADDERR - Address parity error register. */
#define tms570_VIM_ADDERR_ADDERR(val) BSP_FLD32(val,2, 8)
#define tms570_VIM_ADDERR_ADDERR_GET(reg) BSP_FLD32GET(reg,2, 8)
#define tms570_VIM_ADDERR_ADDERR_SET(reg,val) BSP_FLD32SET(reg, val,2, 8)

/* field: Word_offset - Word offset. Reads are always 0; writes have no effect. */
#define tms570_VIM_ADDERR_Word_offset(val) BSP_FLD32(val,0, 1)
#define tms570_VIM_ADDERR_Word_offset_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_VIM_ADDERR_Word_offset_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*--------------------tms570_VIM_FBPARERR--------------------*/
/* field: FBPARERR - Fall back address parity error. */
#define tms570_VIM_FBPARERR_FBPARERR(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_FBPARERR_FBPARERR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_FBPARERR_FBPARERR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_VIM_IRQINDEX--------------------*/
/* field: IRQINDEX - IRQ index vector. */
#define tms570_VIM_IRQINDEX_IRQINDEX(val) BSP_FLD32(val,0, 7)
#define tms570_VIM_IRQINDEX_IRQINDEX_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_VIM_IRQINDEX_IRQINDEX_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*--------------------tms570_VIM_FIQINDEX--------------------*/
/* field: FIQINDEX - FIQ index offset vector. */
#define tms570_VIM_FIQINDEX_FIQINDEX(val) BSP_FLD32(val,0, 7)
#define tms570_VIM_FIQINDEX_FIQINDEX_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_VIM_FIQINDEX_FIQINDEX_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------tms570_VIM_FIRQPR0---------------------*/
/* field: FIRQPR2To31 - FIQ/IRQ program control bits. */
#define tms570_VIM_FIRQPR0_FIRQPR2To31(val) BSP_FLD32(val,2, 31)
#define tms570_VIM_FIRQPR0_FIRQPR2To31_GET(reg) BSP_FLD32GET(reg,2, 31)
#define tms570_VIM_FIRQPR0_FIRQPR2To31_SET(reg,val) BSP_FLD32SET(reg, val,2, 31)


/*---------------------tms570_VIM_FIRQPR1---------------------*/
/* field: FIRQPR32To63 - FIQ/IRQ program control bits. */
#define tms570_VIM_FIRQPR1_FIRQPR32To63(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_FIRQPR1_FIRQPR32To63_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_FIRQPR1_FIRQPR32To63_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_VIM_FIRQPR2---------------------*/
/* field: FIRQPR64To95 - FIQ/IRQ program control bits. */
#define tms570_VIM_FIRQPR2_FIRQPR64To95(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_FIRQPR2_FIRQPR64To95_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_FIRQPR2_FIRQPR64To95_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_VIM_INTREQ0---------------------*/
/* field: INTREQ0To31 - Pending interrupt bits. */
#define tms570_VIM_INTREQ0_INTREQ0To31(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_INTREQ0_INTREQ0To31_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_INTREQ0_INTREQ0To31_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_VIM_INTREQ1---------------------*/
/* field: INTREQ32To63 - Pending interrupt bits. */
#define tms570_VIM_INTREQ1_INTREQ32To63(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_INTREQ1_INTREQ32To63_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_INTREQ1_INTREQ32To63_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_VIM_INTREQ2---------------------*/
/* field: INTREQ64To95 - Pending interrupt bits. */
#define tms570_VIM_INTREQ2_INTREQ64To95(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_INTREQ2_INTREQ64To95_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_INTREQ2_INTREQ64To95_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_VIM_REQENASET0-------------------*/
/* field: REQENASET2To31 - Request enable set bits. */
#define tms570_VIM_REQENASET0_REQENASET2To31(val) BSP_FLD32(val,2, 31)
#define tms570_VIM_REQENASET0_REQENASET2To31_GET(reg) BSP_FLD32GET(reg,2, 31)
#define tms570_VIM_REQENASET0_REQENASET2To31_SET(reg,val) BSP_FLD32SET(reg, val,2, 31)


/*-------------------tms570_VIM_REQENASET1-------------------*/
/* field: REQENASET32To63 - Request enable set bits. */
#define tms570_VIM_REQENASET1_REQENASET32To63(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_REQENASET1_REQENASET32To63_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_REQENASET1_REQENASET32To63_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_VIM_REQENASET2-------------------*/
/* field: REQENASET64To95 - Request enable set bits. */
#define tms570_VIM_REQENASET2_REQENASET64To95(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_REQENASET2_REQENASET64To95_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_REQENASET2_REQENASET64To95_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_VIM_REQENACLR0-------------------*/
/* field: REQENACLR2To31 - Request enable clear bits.This vector determines whether the interrupt request channel is enabled. */
#define tms570_VIM_REQENACLR0_REQENACLR2To31(val) BSP_FLD32(val,2, 31)
#define tms570_VIM_REQENACLR0_REQENACLR2To31_GET(reg) BSP_FLD32GET(reg,2, 31)
#define tms570_VIM_REQENACLR0_REQENACLR2To31_SET(reg,val) BSP_FLD32SET(reg, val,2, 31)


/*-------------------tms570_VIM_REQENACLR1-------------------*/
/* field: REQENACLR32To63 - Request enable clear bits.This vector determines whether the interrupt request channel is enabled. */
#define tms570_VIM_REQENACLR1_REQENACLR32To63(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_REQENACLR1_REQENACLR32To63_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_REQENACLR1_REQENACLR32To63_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_VIM_REQENACLR2-------------------*/
/* field: REQENACLR64To95 - Request enable clear bits.This vector determines whether the interrupt request channel is enabled. */
#define tms570_VIM_REQENACLR2_REQENACLR64To95(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_REQENACLR2_REQENACLR64To95_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_REQENACLR2_REQENACLR64To95_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_VIM_WAKEENASET0-------------------*/
/* field: WAKEENASET0To31 - Wake-up enable set bits. This vector determines whether the wake-up interrupt line is enabled. */
#define tms570_VIM_WAKEENASET0_WAKEENASET0To31(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_WAKEENASET0_WAKEENASET0To31_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_WAKEENASET0_WAKEENASET0To31_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_VIM_WAKEENASET1-------------------*/
/* field: WAKEENASET32To63 - Wake-up enable set bits. This vector determines whether the wake-up interrupt line is enabled. */
#define tms570_VIM_WAKEENASET1_WAKEENASET32To63(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_WAKEENASET1_WAKEENASET32To63_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_WAKEENASET1_WAKEENASET32To63_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_VIM_WAKEENASET2-------------------*/
/* field: WAKEENASET64To95 - Wake-up enable set bits. This vector determines whether the wake-up interrupt line is enabled. */
#define tms570_VIM_WAKEENASET2_WAKEENASET64To95(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_WAKEENASET2_WAKEENASET64To95_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_WAKEENASET2_WAKEENASET64To95_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_VIM_WAKEENACLR0-------------------*/
/* field: WAKEENACLR0To31 - Wake-up enable clear bits. This vector determines whether the wake-up interrupt line is enabled. */
#define tms570_VIM_WAKEENACLR0_WAKEENACLR0To31(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_WAKEENACLR0_WAKEENACLR0To31_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_WAKEENACLR0_WAKEENACLR0To31_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_VIM_WAKEENACLR1-------------------*/
/* field: WAKEENACLR32To63 - Wake-up enable clear bits. This vector determines whether the wake-up interrupt line is enabled. */
#define tms570_VIM_WAKEENACLR1_WAKEENACLR32To63(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_WAKEENACLR1_WAKEENACLR32To63_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_WAKEENACLR1_WAKEENACLR32To63_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_VIM_WAKEENACLR2-------------------*/
/* field: WAKEENACLR64To95 - Wake-up enable clear bits. This vector determines whether the wake-up interrupt line is enabled. */
#define tms570_VIM_WAKEENACLR2_WAKEENACLR64To95(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_WAKEENACLR2_WAKEENACLR64To95_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_WAKEENACLR2_WAKEENACLR64To95_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_VIM_IRQVECREG--------------------*/
/* field: IRQVECREG - IRQ interrupt vector register. */
#define tms570_VIM_IRQVECREG_IRQVECREG(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_IRQVECREG_IRQVECREG_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_IRQVECREG_IRQVECREG_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_VIM_FIQVECREG--------------------*/
/* field: FIQVECREG - FIQ interrupt vector register. */
#define tms570_VIM_FIQVECREG_FIQVECREG(val) BSP_FLD32(val,0, 31)
#define tms570_VIM_FIQVECREG_FIQVECREG_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_VIM_FIQVECREG_FIQVECREG_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_VIM_CAPEVT---------------------*/
/* field: CAPEVTSRC1 - Capture event source 1 mapping control. */
#define tms570_VIM_CAPEVT_CAPEVTSRC1(val) BSP_FLD32(val,16, 22)
#define tms570_VIM_CAPEVT_CAPEVTSRC1_GET(reg) BSP_FLD32GET(reg,16, 22)
#define tms570_VIM_CAPEVT_CAPEVTSRC1_SET(reg,val) BSP_FLD32SET(reg, val,16, 22)

/* field: CAPEVTSRC0 - the capture event source 0 of the RTI: */
#define tms570_VIM_CAPEVT_CAPEVTSRC0(val) BSP_FLD32(val,0, 6)
#define tms570_VIM_CAPEVT_CAPEVTSRC0_GET(reg) BSP_FLD32GET(reg,0, 6)
#define tms570_VIM_CAPEVT_CAPEVTSRC0_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)


/*--------------------tms570_VIM_CHANCTRL--------------------*/
/* field: CHANMAPx0 - CHANMAPx 0(6-0). Interrupt CHANx 0 mapping control. */
#define tms570_VIM_CHANCTRL_CHANMAPx0(val) BSP_FLD32(val,24, 30)
#define tms570_VIM_CHANCTRL_CHANMAPx0_GET(reg) BSP_FLD32GET(reg,24, 30)
#define tms570_VIM_CHANCTRL_CHANMAPx0_SET(reg,val) BSP_FLD32SET(reg, val,24, 30)

/* field: CHANMAPx1 - CHANMAPx 1(6-0). Interrupt CHANx 1 mapping control. */
#define tms570_VIM_CHANCTRL_CHANMAPx1(val) BSP_FLD32(val,16, 22)
#define tms570_VIM_CHANCTRL_CHANMAPx1_GET(reg) BSP_FLD32GET(reg,16, 22)
#define tms570_VIM_CHANCTRL_CHANMAPx1_SET(reg,val) BSP_FLD32SET(reg, val,16, 22)

/* field: CHANMAPx2 - CHANMAPx 2(6-0). Interrupt CHANx 2 mapping control. */
#define tms570_VIM_CHANCTRL_CHANMAPx2(val) BSP_FLD32(val,8, 14)
#define tms570_VIM_CHANCTRL_CHANMAPx2_GET(reg) BSP_FLD32GET(reg,8, 14)
#define tms570_VIM_CHANCTRL_CHANMAPx2_SET(reg,val) BSP_FLD32SET(reg, val,8, 14)

/* field: CHANMAPx3 - CHANMAPx 3(6-0). Interrupt CHANx 3 mapping control. */
#define tms570_VIM_CHANCTRL_CHANMAPx3(val) BSP_FLD32(val,0, 6)
#define tms570_VIM_CHANCTRL_CHANMAPx3_GET(reg) BSP_FLD32GET(reg,0, 6)
#define tms570_VIM_CHANCTRL_CHANMAPx3_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)



#endif /* LIBBSP_ARM_tms570_VIM.H */
