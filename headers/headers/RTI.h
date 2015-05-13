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
#ifndef LIBBSP_ARM_tms570_RTI
#define LIBBSP_ARM_tms570_RTI

#include <bsp/utility.h>

typedef struct{
  uint32_t RTIGCTRL;          /*RTI Global Control Register*/
  uint32_t RTITBCTRL;         /*RTI Timebase Control Register*/
  uint32_t RTICAPCTRL;        /*RTI Capture Control Register*/
  uint32_t RTICOMPCTRL;       /*RTI Compare Control Register*/
  uint32_t RTIFRC0;           /*RTI Free Running Counter 0 Register*/
  uint32_t RTIUC0;            /*RTI Up Counter 0 Register*/
  uint32_t RTICPUC0;          /*RTI Compare Up Counter 0 Register*/
  uint8_t reserved1 [4];
  uint32_t RTICAFRC0;         /*RTI Capture Free Running Counter 0 Register*/
  uint32_t RTICAUC0;          /*RTI Capture Up Counter 0 Register*/
  uint8_t reserved2 [8];
  uint32_t RTIFRC1;           /*RTI Free Running Counter 1 Register*/
  uint32_t RTIUC1;            /*RTI Up Counter 1 Register*/
  uint32_t RTICPUC1;          /*RTI Compare Up Counter 1 Register*/
  uint8_t reserved3 [4];
  uint32_t RTICAFRC1;         /*RTI Capture Free Running Counter 1 Register*/
  uint32_t RTICAUC1;          /*RTI Capture Up Counter 1 Register*/
  uint8_t reserved4 [8];
  uint32_t RTICOMP0;          /*RTI Compare 0 Register*/
  uint32_t RTIUDCP0;          /*RTI Update Compare 0 Register*/
  uint32_t RTICOMP1;          /*RTI Compare 1 Register*/
  uint32_t RTIUDCP1;          /*RTI Update Compare 1 Register*/
  uint32_t RTICOMP2;          /*RTI Compare 2 Register*/
  uint32_t RTIUDCP2;          /*RTIUDCP2*/
  uint32_t RTICOMP3;          /*RTI Compare 3 Register*/
  uint32_t RTIUDCP3;          /*RTI Update Compare 3 Register*/
  uint32_t RTITBLCOMP;        /*RTI Timebase Low Compare Register*/
  uint32_t RTITBHCOMP;        /*RTI Timebase High Compare Register*/
  uint8_t reserved5 [8];
  uint32_t RTISETINTENA;      /*RTI Set Interrupt Enable Register*/
  uint32_t RTICLEARINTENA;    /*RTI Clear Interrupt Enable Register*/
  uint32_t RTIINTFLAG;        /*RTI Interrupt Flag Register*/
  uint8_t reserved6 [4];
  uint32_t RTIDWDCTRL;        /*Digital Watchdog Control Register*/
  uint32_t RTIDWDPRLD;        /*Digital Watchdog Preload Register*/
  uint32_t RTIWDSTATUS;       /*Watchdog Status Register*/
  uint32_t RTIWDKEY;          /*RTI Watchdog Key Register*/
  uint32_t RTIDWDCNTR;        /*RTI Digital Watchdog Down Counter Register*/
  uint32_t RTIWWDRXNCTRL;     /*Digital Windowed Watchdog Reaction Control Register*/
  uint32_t RTIWWDSIZECTRL;    /*Digital Windowed Watchdog Window Size Control Register*/
  uint32_t RTIINTCLRENABLE;   /*RTI Compare Interrupt Clear Enable Register*/
  uint32_t RTICOMP0CLR;       /*RTI Compare 0 Clear Register*/
  uint32_t RTICOMP1CLR;       /*RTI Compare 1 Clear Register*/
  uint32_t RTICOMP2CLR;       /*RTI Compare 2 Clear Register*/
  uint32_t RTICOMP3CLR;       /*RTI Compare 3 Clear Register*/
} tms570_rti_t;

/*----------------------TMS570_RTIGCTRL----------------------*/
/* field: NTUSEL - Select NTU signal. */
#define TMS570_RTIGCTRL_NTUSEL(val) BSP_FLD32(val,16, 19)
#define TMS570_RTIGCTRL_NTUSEL_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_RTIGCTRL_NTUSEL_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: COS - Continue on suspend. */
#define TMS570_RTIGCTRL_COS BSP_FLD32(15)

/* field: CNT1EN - Counter 1 enable. This bit starts and stops counter block 1 (RTIUC1 and RTIFRC1). */
#define TMS570_RTIGCTRL_CNT1EN BSP_FLD32(1)

/* field: CNT0EN - Counter 0 enable. This bit starts and stops counter block 0 (RTIUC0 and RTIFRC0). */
#define TMS570_RTIGCTRL_CNT0EN BSP_FLD32(0)


/*----------------------TMS570_RTITBCTRL----------------------*/
/* field: INC - Increment free running counter 0. */
#define TMS570_RTITBCTRL_INC BSP_FLD32(1)

/* field: TBEXT - Timebase external. */
#define TMS570_RTITBCTRL_TBEXT BSP_FLD32(0)


/*---------------------TMS570_RTICAPCTRL---------------------*/
/* field: CAPCNTR1 - Capture counter 1. */
#define TMS570_RTICAPCTRL_CAPCNTR1 BSP_FLD32(1)

/* field: CAPCNTR0 - Capture counter 0. */
#define TMS570_RTICAPCTRL_CAPCNTR0 BSP_FLD32(0)


/*---------------------TMS570_RTICOMPCTRL---------------------*/
/* field: COMPSEL3 - Compare select 3. */
#define TMS570_RTICOMPCTRL_COMPSEL3 BSP_FLD32(12)

/* field: COMPSEL2 - Compare select 2. */
#define TMS570_RTICOMPCTRL_COMPSEL2 BSP_FLD32(8)

/* field: COMPSEL1 - Compare select 1. */
#define TMS570_RTICOMPCTRL_COMPSEL1 BSP_FLD32(4)

/* field: COMPSEL0 - Compare select 0. */
#define TMS570_RTICOMPCTRL_COMPSEL0 BSP_FLD32(0)


/*-----------------------TMS570_RTIFRC0-----------------------*/
/* field: FRC0 - FRC0 */
#define TMS570_RTIFRC0_FRC0(val) BSP_FLD32(val,0, 31)
#define TMS570_RTIFRC0_FRC0_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTIFRC0_FRC0_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_RTIUC0-----------------------*/
/* field: UC0 - Up counter 0. */
#define TMS570_RTIUC0_UC0(val) BSP_FLD32(val,0, 31)
#define TMS570_RTIUC0_UC0_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTIUC0_UC0_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTICPUC0----------------------*/
/* field: CPUC0 - Compare up counter 0. This register holds the value that is compared with the up counter 0. */
#define TMS570_RTICPUC0_CPUC0(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICPUC0_CPUC0_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICPUC0_CPUC0_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTICAFRC0----------------------*/
/* field: CAFRC0 - Capture free running counter 0. */
#define TMS570_RTICAFRC0_CAFRC0(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICAFRC0_CAFRC0_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICAFRC0_CAFRC0_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTICAUC0----------------------*/
/* field: CAUC0 - Capture up counter 0. */
#define TMS570_RTICAUC0_CAUC0(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICAUC0_CAUC0_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICAUC0_CAUC0_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_RTIFRC1-----------------------*/
/* field: FRC1 - Free running counter 1. */
#define TMS570_RTIFRC1_FRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_RTIFRC1_FRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTIFRC1_FRC1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_RTIUC1-----------------------*/
/* field: UC1 - Up counter 1. */
#define TMS570_RTIUC1_UC1(val) BSP_FLD32(val,0, 31)
#define TMS570_RTIUC1_UC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTIUC1_UC1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTICPUC1----------------------*/
/* field: CPUC1 - Compare up counter 1. */
#define TMS570_RTICPUC1_CPUC1(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICPUC1_CPUC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICPUC1_CPUC1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTICAFRC1----------------------*/
/* field: CAFRC1 - Capture free running counter 1. */
#define TMS570_RTICAFRC1_CAFRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICAFRC1_CAFRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICAFRC1_CAFRC1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTICAUC1----------------------*/
/* field: CAUC1 - Capture up counter 1. */
#define TMS570_RTICAUC1_CAUC1(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICAUC1_CAUC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICAUC1_CAUC1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTICOMP0----------------------*/
/* field: COMP0 - compare control logic. */
#define TMS570_RTICOMP0_COMP0(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICOMP0_COMP0_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICOMP0_COMP0_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTIUDCP0----------------------*/
/* field: UDCP0 - Update compare 0. */
#define TMS570_RTIUDCP0_UDCP0(val) BSP_FLD32(val,0, 31)
#define TMS570_RTIUDCP0_UDCP0_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTIUDCP0_UDCP0_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTICOMP1----------------------*/
/* field: COMP1 - Compare 1. */
#define TMS570_RTICOMP1_COMP1(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICOMP1_COMP1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICOMP1_COMP1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTIUDCP1----------------------*/
/* field: UDCP1 - Update compare 1. */
#define TMS570_RTIUDCP1_UDCP1(val) BSP_FLD32(val,0, 31)
#define TMS570_RTIUDCP1_UDCP1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTIUDCP1_UDCP1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTICOMP2----------------------*/
/* field: COMP2 - Compare 2. */
#define TMS570_RTICOMP2_COMP2(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICOMP2_COMP2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICOMP2_COMP2_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTIUDCP2----------------------*/
/* field: UDCP2 - Update compare 2. */
#define TMS570_RTIUDCP2_UDCP2(val) BSP_FLD32(val,0, 31)
#define TMS570_RTIUDCP2_UDCP2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTIUDCP2_UDCP2_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTICOMP3----------------------*/
/* field: COMP3 - Compare 3. */
#define TMS570_RTICOMP3_COMP3(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICOMP3_COMP3_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICOMP3_COMP3_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_RTIUDCP3----------------------*/
/* field: UDCP3 - Update compare 3. */
#define TMS570_RTIUDCP3_UDCP3(val) BSP_FLD32(val,0, 31)
#define TMS570_RTIUDCP3_UDCP3_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTIUDCP3_UDCP3_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_RTITBLCOMP---------------------*/
/* field: TBLCOMP - Timebase low compare value. */
#define TMS570_RTITBLCOMP_TBLCOMP(val) BSP_FLD32(val,0, 31)
#define TMS570_RTITBLCOMP_TBLCOMP_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTITBLCOMP_TBLCOMP_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_RTITBHCOMP---------------------*/
/* field: TBHCOMP - Timebase high compare value. */
#define TMS570_RTITBHCOMP_TBHCOMP(val) BSP_FLD32(val,0, 31)
#define TMS570_RTITBHCOMP_TBHCOMP_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTITBHCOMP_TBHCOMP_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_RTISETINTENA--------------------*/
/* field: SETOVL1INT - Set free running counter 1 overflow interrupt. */
#define TMS570_RTISETINTENA_SETOVL1INT BSP_FLD32(18)

/* field: SETOVL0INT - Set free running counter 0 overflow interrupt. */
#define TMS570_RTISETINTENA_SETOVL0INT BSP_FLD32(17)

/* field: SETTBINT - Set timebase interrupt. */
#define TMS570_RTISETINTENA_SETTBINT BSP_FLD32(16)

/* field: SETDMA3 - Set compare DMA request 3. */
#define TMS570_RTISETINTENA_SETDMA3 BSP_FLD32(11)

/* field: SETDMA2 - Set compare DMA request 2. */
#define TMS570_RTISETINTENA_SETDMA2 BSP_FLD32(10)

/* field: SETDMA1 - Set compare DMA request 1. */
#define TMS570_RTISETINTENA_SETDMA1 BSP_FLD32(9)

/* field: SETDMA0 - Set compare DMA request 0. */
#define TMS570_RTISETINTENA_SETDMA0 BSP_FLD32(8)

/* field: SETINT3 - Set compare interrupt 3. */
#define TMS570_RTISETINTENA_SETINT3 BSP_FLD32(3)

/* field: SETINT2 - Set compare interrupt 2. */
#define TMS570_RTISETINTENA_SETINT2 BSP_FLD32(2)

/* field: SETINT1 - Set compare interrupt 1. */
#define TMS570_RTISETINTENA_SETINT1 BSP_FLD32(1)

/* field: SETINT0 - Set compare interrupt 0. */
#define TMS570_RTISETINTENA_SETINT0 BSP_FLD32(0)


/*-------------------TMS570_RTICLEARINTENA-------------------*/
/* field: CLEAROVL1INT - Clear free running counter 1 overflow interrupt. */
#define TMS570_RTICLEARINTENA_CLEAROVL1INT BSP_FLD32(18)

/* field: CLEAROVL0INT - Clear free running counter 0 overflow interrupt. */
#define TMS570_RTICLEARINTENA_CLEAROVL0INT BSP_FLD32(17)

/* field: CLEARTBINT - Clear timebase interrupt. */
#define TMS570_RTICLEARINTENA_CLEARTBINT BSP_FLD32(16)

/* field: CLEARDMA3 - Clear compare DMA request 3. */
#define TMS570_RTICLEARINTENA_CLEARDMA3 BSP_FLD32(11)

/* field: CLEARDMA2 - Clear compare DMA request 2. */
#define TMS570_RTICLEARINTENA_CLEARDMA2 BSP_FLD32(10)

/* field: CLEARDMA1 - Clear compare DMA request 1. */
#define TMS570_RTICLEARINTENA_CLEARDMA1 BSP_FLD32(9)

/* field: CLEARDMA0 - Clear compare DMA request 0. */
#define TMS570_RTICLEARINTENA_CLEARDMA0 BSP_FLD32(8)

/* field: CLEARINT3 - Clear compare interrupt 3. */
#define TMS570_RTICLEARINTENA_CLEARINT3 BSP_FLD32(3)

/* field: CLEARINT2 - Clear compare interrupt 2. */
#define TMS570_RTICLEARINTENA_CLEARINT2 BSP_FLD32(2)

/* field: CLEARINT1 - Clear compare interrupt 1. */
#define TMS570_RTICLEARINTENA_CLEARINT1 BSP_FLD32(1)

/* field: CLEARINT0 - Clear compare interrupt 0. */
#define TMS570_RTICLEARINTENA_CLEARINT0 BSP_FLD32(0)


/*---------------------TMS570_RTIINTFLAG---------------------*/
/* field: OVL1INT - Free running counter 1 overflow interrupt flag. This bit determines if an interrupt is pending. */
#define TMS570_RTIINTFLAG_OVL1INT BSP_FLD32(18)

/* field: OVL0INT - Free running counter 0 overflow interrupt flag. This bit determines if an interrupt is pending. */
#define TMS570_RTIINTFLAG_OVL0INT BSP_FLD32(17)

/* field: TBINT - Timebase interrupt flag. */
#define TMS570_RTIINTFLAG_TBINT BSP_FLD32(16)

/* field: INT3 - Interrupt flag 3. These bits determine if an interrupt due to a Compare 3 match is pending. */
#define TMS570_RTIINTFLAG_INT3 BSP_FLD32(3)

/* field: INT2 - Interrupt flag 2. These bits determine if an interrupt due to a Compare 2 match is pending. */
#define TMS570_RTIINTFLAG_INT2 BSP_FLD32(2)

/* field: INT1 - Interrupt flag 1. These bits determine if an interrupt due to a Compare 1 match is pending. */
#define TMS570_RTIINTFLAG_INT1 BSP_FLD32(1)

/* field: INT0 - Interrupt flag 0. These bits determine if an interrupt due to a Compare 0 match is pending. */
#define TMS570_RTIINTFLAG_INT0 BSP_FLD32(0)


/*---------------------TMS570_RTIDWDCTRL---------------------*/
/* field: DWDCTRL - DWDCTRL Digital Watchdog Control. */
#define TMS570_RTIDWDCTRL_DWDCTRL(val) BSP_FLD32(val,0, 31)
#define TMS570_RTIDWDCTRL_DWDCTRL_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTIDWDCTRL_DWDCTRL_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_RTIDWDPRLD---------------------*/
/* field: DWDPRLD - Digital Watchdog Preload Value. */
#define TMS570_RTIDWDPRLD_DWDPRLD(val) BSP_FLD32(val,0, 15)
#define TMS570_RTIDWDPRLD_DWDPRLD_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_RTIDWDPRLD_DWDPRLD_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------TMS570_RTIWDSTATUS---------------------*/
/* field: DWWD_ST - Windowed Watchdog Status */
#define TMS570_RTIWDSTATUS_DWWD_ST BSP_FLD32(5)

/* field: END_TIME_VIOL - Windowed Watchdog End Time Violation Status. */
#define TMS570_RTIWDSTATUS_END_TIME_VIOL BSP_FLD32(4)

/* field: START_TIME_VIOL - Windowed Watchdog Start Time Violation Status. */
#define TMS570_RTIWDSTATUS_START_TIME_VIOL BSP_FLD32(3)

/* field: KEY_ST - Watchdog key status. */
#define TMS570_RTIWDSTATUS_KEY_ST BSP_FLD32(2)

/* field: DWD_ST - DWD status. */
#define TMS570_RTIWDSTATUS_DWD_ST BSP_FLD32(1)


/*----------------------TMS570_RTIWDKEY----------------------*/
/* field: WDKEY - Watchdog key. These bits provide the key sequence location. */
#define TMS570_RTIWDKEY_WDKEY(val) BSP_FLD32(val,0, 15)
#define TMS570_RTIWDKEY_WDKEY_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_RTIWDKEY_WDKEY_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------TMS570_RTIDWDCNTR---------------------*/
/* field: DWDCNTR - DWD down counter. */
#define TMS570_RTIDWDCNTR_DWDCNTR(val) BSP_FLD32(val,0, 24)
#define TMS570_RTIDWDCNTR_DWDCNTR_GET(reg) BSP_FLD32GET(reg,0, 24)
#define TMS570_RTIDWDCNTR_DWDCNTR_SET(reg,val) BSP_FLD32SET(reg, val,0, 24)


/*--------------------TMS570_RTIWWDRXNCTRL--------------------*/
/* field: WWDRXN - The DWWD reaction */
#define TMS570_RTIWWDRXNCTRL_WWDRXN(val) BSP_FLD32(val,0, 3)
#define TMS570_RTIWWDRXNCTRL_WWDRXN_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_RTIWWDRXNCTRL_WWDRXN_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-------------------TMS570_RTIWWDSIZECTRL-------------------*/
/* field: WWDSIZE - The DWWD window size */
#define TMS570_RTIWWDSIZECTRL_WWDSIZE(val) BSP_FLD32(val,0, 31)
#define TMS570_RTIWWDSIZECTRL_WWDSIZE_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTIWWDSIZECTRL_WWDSIZE_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_RTIINTCLRENABLE-------------------*/
/* field: INTCLRENABLE3 - Enables the auto-clear functionality on the compare 3 interrupt. */
#define TMS570_RTIINTCLRENABLE_INTCLRENABLE3(val) BSP_FLD32(val,24, 27)
#define TMS570_RTIINTCLRENABLE_INTCLRENABLE3_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_RTIINTCLRENABLE_INTCLRENABLE3_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: INTCLRENABLE2 - Enables the auto-clear functionality on the compare 2 interrupt. */
#define TMS570_RTIINTCLRENABLE_INTCLRENABLE2(val) BSP_FLD32(val,16, 19)
#define TMS570_RTIINTCLRENABLE_INTCLRENABLE2_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_RTIINTCLRENABLE_INTCLRENABLE2_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: INTCLRENABLE1 - Enables the auto-clear functionality on the compare 1 interrupt. */
#define TMS570_RTIINTCLRENABLE_INTCLRENABLE1(val) BSP_FLD32(val,8, 11)
#define TMS570_RTIINTCLRENABLE_INTCLRENABLE1_GET(reg) BSP_FLD32GET(reg,8, 11)
#define TMS570_RTIINTCLRENABLE_INTCLRENABLE1_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)

/* field: INTCLRENABLE0 - Enables the auto-clear functionality on the compare 0 interrupt. */
#define TMS570_RTIINTCLRENABLE_INTCLRENABLE0(val) BSP_FLD32(val,0, 3)
#define TMS570_RTIINTCLRENABLE_INTCLRENABLE0_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_RTIINTCLRENABLE_INTCLRENABLE0_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------TMS570_RTICOMP0CLR---------------------*/
/* field: CMP0CLR - Compare 0 clear. */
#define TMS570_RTICOMP0CLR_CMP0CLR(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICOMP0CLR_CMP0CLR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICOMP0CLR_CMP0CLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_RTICOMP1CLR---------------------*/
/* field: CMP0CLR - Compare 1 clear. */
#define TMS570_RTICOMP1CLR_CMP0CLR(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICOMP1CLR_CMP0CLR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICOMP1CLR_CMP0CLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_RTICOMP2CLR---------------------*/
/* field: CMP2CLR - Compare 2 clear. */
#define TMS570_RTICOMP2CLR_CMP2CLR(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICOMP2CLR_CMP2CLR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICOMP2CLR_CMP2CLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_RTICOMP3CLR---------------------*/
/* field: CMP3CLR - Compare 3 clear. */
#define TMS570_RTICOMP3CLR_CMP3CLR(val) BSP_FLD32(val,0, 31)
#define TMS570_RTICOMP3CLR_CMP3CLR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTICOMP3CLR_CMP3CLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)



#endif /* LIBBSP_ARM_tms570_RTI */
