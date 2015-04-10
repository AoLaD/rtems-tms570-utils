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
#ifndef LIBBSP_ARM_tms570_ADC.H
#define LIBBSP_ARM_tms570_ADC.H

#include <bsp/utility.h>

typedef struct{
  uint32_t ADRSTCR;           /*ADC Reset Control Register*/
  uint32_t ADOPMODECR;        /*ADC Operating Mode Control Register*/
  uint32_t ADCLOCKCR;         /*ADC Clock Control Register*/
  uint32_t ADCALCR;           /*ADC Calibration Mode Control Register*/
  uint32_t ADEVMODECR;        /*ADC Event Group Operating Mode Control Register*/
  uint32_t ADG1MODECR;        /*ADC Group1 Operating Mode Control Register*/
  uint32_t ADG2MODECR;        /*ADC Group2 Operating Mode Control Register*/
  uint32_t ADEVSRC;           /*ADC Trigger Source Select Register*/
  uint32_t ADG1SRC;           /*ADC Group1 Trigger Source Select Register*/
  uint32_t ADG2SRC;           /*ADC Group2 Trigger Source Select Register*/
  uint32_t ADEVINTENA;        /*ADC Event Interrupt Enable Control Register*/
  uint32_t ADG1INTENA;        /*ADC Group1 Interrupt Enable Control Register*/
  uint32_t ADG2INTENA;        /*ADC Group2 Interrupt Enable Control Register*/
  uint32_t ADEVINTFLG;        /*ADC Event Group Interrupt Flag Register*/
  uint32_t ADG1INTFLG;        /*ADC Group1 Interrupt Flag Register*/
  uint32_t ADG2INTFLG;        /*ADC Group2 Interrupt Flag Register*/
  uint32_t ADEVTHRINTCR;      /*ADC Event Group Threshold Interrupt Control Register*/
  uint32_t ADG1THRINTCR;      /*ADC Group1 Threshold Interrupt Control Register*/
  uint32_t ADG2THRINTCR;      /*ADC Group2 Threshold Interrupt Control Register*/
  uint32_t ADEVDMACR;         /*ADC Event Group DMA Control Register*/
  uint32_t ADG1DMACR;         /*ADC Group1 DMA Control Register*/
  uint32_t ADG2DMACR;         /*ADC Group2 DMA Control Register*/
  uint32_t ADBNDCR;           /*ADC Results Memory Configuration Register*/
  uint32_t ADBNDEND;          /*ADC Results Memory Size Configuration Register*/
  uint32_t ADEVSAMP;          /*ADC Event Group Sampling Time Configuration Register*/
  uint32_t ADG1SAMP;          /*ADC Group1 Sampling Time Configuration Register()*/
  uint32_t ADG2SAMP;          /*ADC Group2 Sampling Time Configuration Register*/
  uint32_t ADEVSR;            /*ADC Event Group Status Register*/
  uint32_t ADG1SR;            /*ADC Group1 Status Register*/
  uint32_t ADG2SR;            /*ADC Group2 Status Register*/
  uint32_t ADEVSEL;           /*ADC Event Group Channel Select Register*/
  uint32_t ADG1SEL;           /*ADC Group1 Channel Select Register*/
  uint32_t ADG2SEL;           /*ADC Group2 Channel Select Register*/
  uint32_t ADCALR;            /*ADC Calibration and Error Offset Correction Register*/
  uint32_t ADSMSTATE;         /*ADC State Machine Status Register*/
  uint32_t ADLASTCONV;        /*ADC Channel Last Conversion Value Register*/
  uint32_t ADEVBUFFER[8];     /*ADC Event Group Results FIFO Register*/
  uint32_t ADG1BUFFER[8];     /*ADC Group1 Results FIFO Register*/
  uint32_t ADG2BUFFER[8];     /*ADC Group2 Results FIFO Register*/
  uint32_t ADEVEMUBUFFER;     /*ADC Event Group Results Emulation FIFO Register*/
  uint32_t ADG1EMUBUFFER;     /*ADC Group1 Results Emulation FIFO Register*/
  uint32_t ADG2EMUBUFFER;     /*ADC Group2 Results Emulation FIFO Register*/
  uint32_t ADEVTDIR;          /*ADC ADEVT Pin Direction Control Register*/
  uint32_t ADEVTOUT;          /*ADC ADEVT Pin Output Value Control Register*/
  uint32_t ADEVTIN;           /*ADC ADEVT Pin Input Value Register*/
  uint32_t ADEVTSET;          /*ADC ADEVT Pin Set Register*/
  uint32_t ADEVTCLR;          /*ADC ADEVT Pin Clear Register*/
  uint32_t ADEVTPDR;          /*ADC ADEVT Pin Open Drain Enable Register*/
  uint32_t ADEVTPDIS;         /*ADC ADEVT Pin Pull Control Disable Register*/
  uint32_t ADEVTPSEL;         /*ADC ADEVT Pin Pull Control Select Register*/
  uint32_t ADEVSAMPDISEN;     /*ADC Event Group Sample Cap Discharge Control Register*/
  uint32_t ADG1SAMPDISEN;     /*ADC Group1 Sample Cap Discharge Control Register*/
  uint32_t ADG2SAMPDISEN;     /*ADC Group2 Sample Cap Discharge Control Register*/
  uint32_t ADMAGINT0CR;       /*ADC Magnitude Compare Interrupt Control Register 0*/
  uint32_t ADMAG0MASK;        /*ADC Magnitude Compare Mask Register 0*/
  uint32_t ADMAGINT1CR;       /*ADC Magnitude Compare Interrupt Control Register 1*/
  uint32_t ADMAG1MASK;        /*ADC Magnitude Compare Mask Register 1*/
  uint32_t ADMAGINT2CR;       /*ADC Magnitude Compare Interrupt Control Register 2*/
  uint32_t ADMAG2MASK;        /*ADC Magnitude Compare Mask Register 2*/
  uint8_t reserved1 [24];
  uint32_t ADMAGINTENASET;    /*ADC Magnitude Compare Interrupt Enable Set Register*/
  uint32_t ADMAGINTENACLR;    /*ADC Magnitude Compare Interrupt Enable Clear Register*/
  uint32_t ADMAGINTFLG;       /*ADC Magnitude Compare Interrupt Flag Register*/
  uint32_t ADMAGINTOFF;       /*ADC Magnitude Compare Interrupt Offset Register*/
  uint32_t ADEVFIFORESETCR;   /*ADC Event Group FIFO Reset Control Register*/
  uint32_t ADG1FIFORESETCR;   /*ADC Group1 FIFO Reset Control Register*/
  uint32_t ADG2FIFORESETCR;   /*ADC Group2 FIFO Reset Control Register*/
  uint32_t ADEVRAMWRADDR;     /*ADC Event Group RAM Write Address Register*/
  uint32_t ADG1RAMWRADDR;     /*ADC Group1 RAM Write Address Register*/
  uint32_t ADG2RAMWRADDR;     /*ADC Group2 RAM Write Address Register*/
  uint32_t ADPARCR;           /*ADC Parity Control Register*/
  uint32_t ADPARADDR;         /*ADC Parity Error Address Register*/
  uint32_t ADPWRUPDLYCTRL;    /*ADC Power-Up Delay Control Register*/
} ADC_struct;

/*---------------------tms570_ADC_ADRSTCR---------------------*/
/* field: RESET - This bit is used to reset the ADC internal state machines and control/status registers. */
#define tms570_ADC_ADRSTCR_RESET BSP_FLD32(0)


/*-------------------tms570_ADC_ADOPMODECR-------------------*/
/* field: 10/12_BIT - This bit controls the resolution of the ADC core. */
#define tms570_ADC_ADOPMODECR_10/12_BIT BSP_FLD32(31)


/*--------------------tms570_ADC_ADCLOCKCR--------------------*/
/* field: PS - ADC Clock Prescaler. These bits define the prescaler value for the ADC core clock (ADCLK). */
#define tms570_ADC_ADCLOCKCR_PS(val) BSP_FLD32(val,0, 4)
#define tms570_ADC_ADCLOCKCR_PS_GET(reg) BSP_FLD32GET(reg,0, 4)
#define tms570_ADC_ADCLOCKCR_PS_SET(reg,val) BSP_FLD32SET(reg, val,0, 4)


/*---------------------tms570_ADC_ADCALCR---------------------*/
/* field: SELF_TEST - ADC Self Test Enable. */
#define tms570_ADC_ADCALCR_SELF_TEST BSP_FLD32(24)

/* field: CAL_ST - ADC Calibration Conversion Start. */
#define tms570_ADC_ADCALCR_CAL_ST BSP_FLD32(16)

/* field: BRIDGE_EN - Bridge Enable. */
#define tms570_ADC_ADCALCR_BRIDGE_EN BSP_FLD32(9)

/* field: HILO - ADC Self Test mode and Calibration Mode Reference Source Selection. */
#define tms570_ADC_ADCALCR_HILO BSP_FLD32(8)

/* field: CAL_EN - ADC Calibration Enable. */
#define tms570_ADC_ADCALCR_CAL_EN BSP_FLD32(0)


/*-------------------tms570_ADC_ADEVMODECR-------------------*/
/* field: No_Reset_on_ChnSel - No Event Group Results Memory Reset on New Channel Select. */
#define tms570_ADC_ADEVMODECR_No_Reset_on_ChnSel BSP_FLD32(16)

/* field: EV_DATA_FMT - Event Group Read Data Format. */
#define tms570_ADC_ADEVMODECR_EV_DATA_FMT(val) BSP_FLD32(val,8, 9)
#define tms570_ADC_ADEVMODECR_EV_DATA_FMT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define tms570_ADC_ADEVMODECR_EV_DATA_FMT_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)


/*-------------------tms570_ADC_ADG1MODECR-------------------*/
/* field: No_Reset_on_ChnSel - No Group1 Results Memory Reset on New Channel Select. */
#define tms570_ADC_ADG1MODECR_No_Reset_on_ChnSel BSP_FLD32(16)

/* field: G1_DATA_FMT - Group1 Read Data Format. */
#define tms570_ADC_ADG1MODECR_G1_DATA_FMT(val) BSP_FLD32(val,8, 9)
#define tms570_ADC_ADG1MODECR_G1_DATA_FMT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define tms570_ADC_ADG1MODECR_G1_DATA_FMT_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)


/*-------------------tms570_ADC_ADG2MODECR-------------------*/
/* field: No_Reset_on_ChnSel - No Group2 Results Memory Reset on New Channel Select. */
#define tms570_ADC_ADG2MODECR_No_Reset_on_ChnSel BSP_FLD32(16)

/* field: G2_DATA_FMT - Group2 Read Data Format. */
#define tms570_ADC_ADG2MODECR_G2_DATA_FMT(val) BSP_FLD32(val,8, 9)
#define tms570_ADC_ADG2MODECR_G2_DATA_FMT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define tms570_ADC_ADG2MODECR_G2_DATA_FMT_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)


/*---------------------tms570_ADC_ADEVSRC---------------------*/
/* field: EV_EDG_BOTH - rising and falling edge detected on the selected trigger source. */
#define tms570_ADC_ADEVSRC_EV_EDG_BOTH BSP_FLD32(4)

/* field: EV_EDG_SEL - Event Group Trigger Edge Polarity Select. */
#define tms570_ADC_ADEVSRC_EV_EDG_SEL BSP_FLD32(3)

/* field: EV_SRC - Event Group Trigger Source. */
#define tms570_ADC_ADEVSRC_EV_SRC(val) BSP_FLD32(val,0, 2)
#define tms570_ADC_ADEVSRC_EV_SRC_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_ADC_ADEVSRC_EV_SRC_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*---------------------tms570_ADC_ADG1SRC---------------------*/
/* field: GI_EDG_BOTH - Group1 Trigger Edge Polarity Select. */
#define tms570_ADC_ADG1SRC_GI_EDG_BOTH BSP_FLD32(4)

/* field: G1_EDG_SEL - Group1 Trigger Edge Polarity Select. */
#define tms570_ADC_ADG1SRC_G1_EDG_SEL BSP_FLD32(3)

/* field: G1_SRC - Group1 Trigger Source. */
#define tms570_ADC_ADG1SRC_G1_SRC(val) BSP_FLD32(val,0, 2)
#define tms570_ADC_ADG1SRC_G1_SRC_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_ADC_ADG1SRC_G1_SRC_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*---------------------tms570_ADC_ADG2SRC---------------------*/
/* field: G2_EDG_BOTH - Group2 Trigger Edge Polarity Select. */
#define tms570_ADC_ADG2SRC_G2_EDG_BOTH BSP_FLD32(4)

/* field: G2_EDG_SEL - Group2 Trigger Edge Polarity Select. */
#define tms570_ADC_ADG2SRC_G2_EDG_SEL BSP_FLD32(3)

/* field: G2_SRC - Group2 Trigger Source. */
#define tms570_ADC_ADG2SRC_G2_SRC(val) BSP_FLD32(val,0, 2)
#define tms570_ADC_ADG2SRC_G2_SRC_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_ADC_ADG2SRC_G2_SRC_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-------------------tms570_ADC_ADEVINTENA-------------------*/
/* field: EV_END_INT_EN - Event Group Conversion End Interrupt Enable. Please refer to Section 19.5. */
#define tms570_ADC_ADEVINTENA_EV_END_INT_EN BSP_FLD32(3)

/* field: EV_OVR_INT_EN - write a new conversion result to the Event Group results memory which is already full. */
#define tms570_ADC_ADEVINTENA_EV_OVR_INT_EN BSP_FLD32(1)

/* field: EV_THR_INT_EN - Event Group Threshold Interrupt Enable. */
#define tms570_ADC_ADEVINTENA_EV_THR_INT_EN BSP_FLD32(0)


/*-------------------tms570_ADC_ADG1INTENA-------------------*/
/* field: G1_END_INT_EN - Group1 Conversion End Interrupt Enable. Please refer to Section 19.5. */
#define tms570_ADC_ADG1INTENA_G1_END_INT_EN BSP_FLD32(3)

/* field: G1_OVR_INT_EN - Group1 Memory Overrun Interrupt Enable. */
#define tms570_ADC_ADG1INTENA_G1_OVR_INT_EN BSP_FLD32(1)

/* field: G1_THR_INT_EN - Group1 Threshold Interrupt Enable. */
#define tms570_ADC_ADG1INTENA_G1_THR_INT_EN BSP_FLD32(0)


/*-------------------tms570_ADC_ADG2INTENA-------------------*/
/* field: G2_END_INT_EN - Group2 Conversion End Interrupt Enable. Please refer to Section 19.5. */
#define tms570_ADC_ADG2INTENA_G2_END_INT_EN BSP_FLD32(3)

/* field: G2_OVR_INT_EN - Group2 Memory Overrun Interrupt Enable. */
#define tms570_ADC_ADG2INTENA_G2_OVR_INT_EN BSP_FLD32(1)

/* field: G2_THR_INT_EN - Group2 Threshold Interrupt Enable. */
#define tms570_ADC_ADG2INTENA_G2_THR_INT_EN BSP_FLD32(0)


/*-------------------tms570_ADC_ADEVINTFLG-------------------*/
/* field: EV_END - Event Group Conversion End. */
#define tms570_ADC_ADEVINTFLG_EV_END BSP_FLD32(3)

/* field: EV_MEM_EMPTY - Event Group Results Memory Empty. This is a read-only bit; writes have no effect. It is not asource of an interrupt from the ADC module. */
#define tms570_ADC_ADEVINTFLG_EV_MEM_EMPTY BSP_FLD32(2)

/* field: EV_MEM_OVERRUN - Event Group Memory Overrun. This is a read-only bit; writes have no effect. */
#define tms570_ADC_ADEVINTFLG_EV_MEM_OVERRUN BSP_FLD32(1)

/* field: EV_THR_INT_FLG - Event Group Threshold Interrupt Flag. */
#define tms570_ADC_ADEVINTFLG_EV_THR_INT_FLG BSP_FLD32(0)


/*-------------------tms570_ADC_ADG1INTFLG-------------------*/
/* field: G1_END - Group1 Conversion End. */
#define tms570_ADC_ADG1INTFLG_G1_END BSP_FLD32(3)

/* field: G1_MEM_EMPTY - Group1 Results Memory Empty. This is a read-only bit; writes have no effect. */
#define tms570_ADC_ADG1INTFLG_G1_MEM_EMPTY BSP_FLD32(2)

/* field: G1_MEM_OVERRUN - Group1 Memory Overrun. This is a read-only bit; writes have no effect. */
#define tms570_ADC_ADG1INTFLG_G1_MEM_OVERRUN BSP_FLD32(1)

/* field: G1_THR_INT_FLG - Group1 Threshold Interrupt Flag. */
#define tms570_ADC_ADG1INTFLG_G1_THR_INT_FLG BSP_FLD32(0)


/*-------------------tms570_ADC_ADG2INTFLG-------------------*/
/* field: G2_END - Group2 Conversion End. */
#define tms570_ADC_ADG2INTFLG_G2_END BSP_FLD32(3)

/* field: G2_MEM_EMPTY - Group2 Results Memory Empty. This is a read-only bit; writes have no effect. */
#define tms570_ADC_ADG2INTFLG_G2_MEM_EMPTY BSP_FLD32(2)

/* field: G2_MEM_OVERRUN - Group2 Memory Overrun. This is a read-only bit; writes have no effect. */
#define tms570_ADC_ADG2INTFLG_G2_MEM_OVERRUN BSP_FLD32(1)

/* field: G2_THR_INT_FLG - Group2 Threshold Interrupt Flag. */
#define tms570_ADC_ADG2INTFLG_G2_THR_INT_FLG BSP_FLD32(0)


/*------------------tms570_ADC_ADEVTHRINTCR------------------*/
/* field: Sign_Extension - These bits always read the same as the bit 8 of this register. */
#define tms570_ADC_ADEVTHRINTCR_Sign_Extension(val) BSP_FLD32(val,9, 15)
#define tms570_ADC_ADEVTHRINTCR_Sign_Extension_GET(reg) BSP_FLD32GET(reg,9, 15)
#define tms570_ADC_ADEVTHRINTCR_Sign_Extension_SET(reg,val) BSP_FLD32SET(reg, val,9, 15)

/* field: EV_THR - Event Group Threshold Counter. */
#define tms570_ADC_ADEVTHRINTCR_EV_THR(val) BSP_FLD32(val,0, 8)
#define tms570_ADC_ADEVTHRINTCR_EV_THR_GET(reg) BSP_FLD32GET(reg,0, 8)
#define tms570_ADC_ADEVTHRINTCR_EV_THR_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*------------------tms570_ADC_ADG1THRINTCR------------------*/
/* field: Sign_Extension - These bits always read the same as the bit 8 of this register. */
#define tms570_ADC_ADG1THRINTCR_Sign_Extension(val) BSP_FLD32(val,9, 15)
#define tms570_ADC_ADG1THRINTCR_Sign_Extension_GET(reg) BSP_FLD32GET(reg,9, 15)
#define tms570_ADC_ADG1THRINTCR_Sign_Extension_SET(reg,val) BSP_FLD32SET(reg, val,9, 15)

/* field: G1_THR - Group1 Threshold Counter. */
#define tms570_ADC_ADG1THRINTCR_G1_THR(val) BSP_FLD32(val,0, 8)
#define tms570_ADC_ADG1THRINTCR_G1_THR_GET(reg) BSP_FLD32GET(reg,0, 8)
#define tms570_ADC_ADG1THRINTCR_G1_THR_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*------------------tms570_ADC_ADG2THRINTCR------------------*/
/* field: Sign_Extension - These bits always read the same as the bit 8 of this register. */
#define tms570_ADC_ADG2THRINTCR_Sign_Extension(val) BSP_FLD32(val,9, 15)
#define tms570_ADC_ADG2THRINTCR_Sign_Extension_GET(reg) BSP_FLD32GET(reg,9, 15)
#define tms570_ADC_ADG2THRINTCR_Sign_Extension_SET(reg,val) BSP_FLD32SET(reg, val,9, 15)

/* field: G2_THR - Group2 Threshold Counter. */
#define tms570_ADC_ADG2THRINTCR_G2_THR(val) BSP_FLD32(val,0, 8)
#define tms570_ADC_ADG2THRINTCR_G2_THR_GET(reg) BSP_FLD32GET(reg,0, 8)
#define tms570_ADC_ADG2THRINTCR_G2_THR_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*--------------------tms570_ADC_ADEVDMACR--------------------*/
/* field: EV_BLOCKS - Number of Event Group Result buffers to be transferred using DMA if the ADC module is */
#define tms570_ADC_ADEVDMACR_EV_BLOCKS(val) BSP_FLD32(val,16, 24)
#define tms570_ADC_ADEVDMACR_EV_BLOCKS_GET(reg) BSP_FLD32GET(reg,16, 24)
#define tms570_ADC_ADEVDMACR_EV_BLOCKS_SET(reg,val) BSP_FLD32SET(reg, val,16, 24)

/* field: DMA_EV_END - Event Group Conversion End DMA Transfer Enable. */
#define tms570_ADC_ADEVDMACR_DMA_EV_END BSP_FLD32(3)

/* field: EV_BLK_XFER - Event Group Block DMA Transfer Enable. */
#define tms570_ADC_ADEVDMACR_EV_BLK_XFER BSP_FLD32(2)

/* field: EV_DMA_EN - Event Group DMA Transfer Enable. */
#define tms570_ADC_ADEVDMACR_EV_DMA_EN BSP_FLD32(0)


/*--------------------tms570_ADC_ADG1DMACR--------------------*/
/* field: G1_BLOCKS - Number of Group1 Result buffers to be transferred using DMA if the ADC module is configured */
#define tms570_ADC_ADG1DMACR_G1_BLOCKS(val) BSP_FLD32(val,16, 24)
#define tms570_ADC_ADG1DMACR_G1_BLOCKS_GET(reg) BSP_FLD32GET(reg,16, 24)
#define tms570_ADC_ADG1DMACR_G1_BLOCKS_SET(reg,val) BSP_FLD32SET(reg, val,16, 24)

/* field: DMA_G1_END - Group1 Conversion End DMA Transfer Enable. */
#define tms570_ADC_ADG1DMACR_DMA_G1_END BSP_FLD32(3)

/* field: G1_BLK_XFER - Group1 Block DMA Transfer Enable. */
#define tms570_ADC_ADG1DMACR_G1_BLK_XFER BSP_FLD32(2)

/* field: G1_DMA_EN - Group1 DMA Transfer Enable. */
#define tms570_ADC_ADG1DMACR_G1_DMA_EN BSP_FLD32(0)


/*--------------------tms570_ADC_ADG2DMACR--------------------*/
/* field: G2_BLOCKS - Number of Group2 Result buffers to be transferred using DMA if the ADC module is configured */
#define tms570_ADC_ADG2DMACR_G2_BLOCKS(val) BSP_FLD32(val,16, 24)
#define tms570_ADC_ADG2DMACR_G2_BLOCKS_GET(reg) BSP_FLD32GET(reg,16, 24)
#define tms570_ADC_ADG2DMACR_G2_BLOCKS_SET(reg,val) BSP_FLD32SET(reg, val,16, 24)

/* field: DMA_G2_END - Group2 Conversion End DMA Transfer Enable. */
#define tms570_ADC_ADG2DMACR_DMA_G2_END BSP_FLD32(3)

/* field: G2_BLK_XFER - Group2 Block DMA Transfer Enable. */
#define tms570_ADC_ADG2DMACR_G2_BLK_XFER BSP_FLD32(2)

/* field: G2_DMA_EN - Group2 DMA Transfer Enable. */
#define tms570_ADC_ADG2DMACR_G2_DMA_EN BSP_FLD32(0)


/*---------------------tms570_ADC_ADBNDCR---------------------*/
/* field: BNDA - Buffer Boundary A. */
#define tms570_ADC_ADBNDCR_BNDA(val) BSP_FLD32(val,16, 24)
#define tms570_ADC_ADBNDCR_BNDA_GET(reg) BSP_FLD32GET(reg,16, 24)
#define tms570_ADC_ADBNDCR_BNDA_SET(reg,val) BSP_FLD32SET(reg, val,16, 24)

/* field: BNDB - Buffer Boundary B. */
#define tms570_ADC_ADBNDCR_BNDB(val) BSP_FLD32(val,0, 8)
#define tms570_ADC_ADBNDCR_BNDB_GET(reg) BSP_FLD32GET(reg,0, 8)
#define tms570_ADC_ADBNDCR_BNDB_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*--------------------tms570_ADC_ADBNDEND--------------------*/
/* field: BUF_INIT_ACTIVE - ADC Results Memory Auto-initialization Status. */
#define tms570_ADC_ADBNDEND_BUF_INIT_ACTIVE BSP_FLD32(16)

/* field: BNDEND - Buffer Boundary End. */
#define tms570_ADC_ADBNDEND_BNDEND(val) BSP_FLD32(val,0, 2)
#define tms570_ADC_ADBNDEND_BNDEND_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_ADC_ADBNDEND_BNDEND_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*--------------------tms570_ADC_ADEVSAMP--------------------*/
/* field: EV_ACQ - Event Group Acquisition Time. */
#define tms570_ADC_ADEVSAMP_EV_ACQ(val) BSP_FLD32(val,0, 11)
#define tms570_ADC_ADEVSAMP_EV_ACQ_GET(reg) BSP_FLD32GET(reg,0, 11)
#define tms570_ADC_ADEVSAMP_EV_ACQ_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*--------------------tms570_ADC_ADG1SAMP--------------------*/
/* field: G1_ACQ - Group1 Acquisition Time. These bits define the sampling window (SW) for the Group1 conversions. */
#define tms570_ADC_ADG1SAMP_G1_ACQ(val) BSP_FLD32(val,0, 11)
#define tms570_ADC_ADG1SAMP_G1_ACQ_GET(reg) BSP_FLD32GET(reg,0, 11)
#define tms570_ADC_ADG1SAMP_G1_ACQ_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*--------------------tms570_ADC_ADG2SAMP--------------------*/
/* field: G2_ACQ - Group2 Acquisition Time. These bits define the sampling window (SW) for the Group2 conversions. */
#define tms570_ADC_ADG2SAMP_G2_ACQ(val) BSP_FLD32(val,0, 11)
#define tms570_ADC_ADG2SAMP_G2_ACQ_GET(reg) BSP_FLD32GET(reg,0, 11)
#define tms570_ADC_ADG2SAMP_G2_ACQ_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*---------------------tms570_ADC_ADEVSR---------------------*/
/* field: EV_MEM_EMPTY - Event Group Results Memory Empty. */
#define tms570_ADC_ADEVSR_EV_MEM_EMPTY BSP_FLD32(3)

/* field: EV_BUSY - Event Group Conversion Busy. */
#define tms570_ADC_ADEVSR_EV_BUSY BSP_FLD32(2)

/* field: EV_STOP - Event Group Conversion Stopped. */
#define tms570_ADC_ADEVSR_EV_STOP BSP_FLD32(1)

/* field: EV_END - Event Group Conversions Ended. */
#define tms570_ADC_ADEVSR_EV_END BSP_FLD32(0)


/*---------------------tms570_ADC_ADG1SR---------------------*/
/* field: G1_MEM_EMPTY - Group1 Results Memory Empty. */
#define tms570_ADC_ADG1SR_G1_MEM_EMPTY BSP_FLD32(3)

/* field: G1_BUSY - Group1 Conversion Busy. */
#define tms570_ADC_ADG1SR_G1_BUSY BSP_FLD32(2)

/* field: G1_STOP - Group1 Conversion Stopped. */
#define tms570_ADC_ADG1SR_G1_STOP BSP_FLD32(1)

/* field: G1_END - Group1 Conversions Ended. */
#define tms570_ADC_ADG1SR_G1_END BSP_FLD32(0)


/*---------------------tms570_ADC_ADG2SR---------------------*/
/* field: G2_MEM_EMPTY - Group2 Results Memory Empty. */
#define tms570_ADC_ADG2SR_G2_MEM_EMPTY BSP_FLD32(3)

/* field: G2_BUSY - Group2 Conversion Busy. */
#define tms570_ADC_ADG2SR_G2_BUSY BSP_FLD32(2)

/* field: G2_STOP - Group2 Conversion Stopped. */
#define tms570_ADC_ADG2SR_G2_STOP BSP_FLD32(1)

/* field: G2_END - Group2 Conversions Ended. */
#define tms570_ADC_ADG2SR_G2_END BSP_FLD32(0)


/*---------------------tms570_ADC_ADEVSEL---------------------*/
/* field: EV_SEL - Event Group channels selected. */
#define tms570_ADC_ADEVSEL_EV_SEL(val) BSP_FLD32(val,0, 15)
#define tms570_ADC_ADEVSEL_EV_SEL_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_ADC_ADEVSEL_EV_SEL_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_ADC_ADG1SEL---------------------*/
/* field: G1_SEL - Group1 channels selected. */
#define tms570_ADC_ADG1SEL_G1_SEL(val) BSP_FLD32(val,0, 15)
#define tms570_ADC_ADG1SEL_G1_SEL_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_ADC_ADG1SEL_G1_SEL_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_ADC_ADG2SEL---------------------*/
/* field: G2_SEL - Group2 channels selected. */
#define tms570_ADC_ADG2SEL_G2_SEL(val) BSP_FLD32(val,0, 15)
#define tms570_ADC_ADG2SEL_G2_SEL_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_ADC_ADG2SEL_G2_SEL_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_ADC_ADCALR---------------------*/
/* field: ADCALR - ADC Calibration Result and Offset Error Correction Value. */
#define tms570_ADC_ADCALR_ADCALR(val) BSP_FLD32(val,0, 11)
#define tms570_ADC_ADCALR_ADCALR_GET(reg) BSP_FLD32GET(reg,0, 11)
#define tms570_ADC_ADCALR_ADCALR_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*--------------------tms570_ADC_ADSMSTATE--------------------*/
/* field: LAST_CONV - ADC Input Channel's Last Converted Value. */
#define tms570_ADC_ADSMSTATE_LAST_CONV(val) BSP_FLD32(val,0, 23)
#define tms570_ADC_ADSMSTATE_LAST_CONV_GET(reg) BSP_FLD32GET(reg,0, 23)
#define tms570_ADC_ADSMSTATE_LAST_CONV_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*-------------------tms570_ADC_ADLASTCONV-------------------*/
/* field: LAST_CONV - ADC Input Channel's Last Converted Value. */
#define tms570_ADC_ADLASTCONV_LAST_CONV(val) BSP_FLD32(val,0, 23)
#define tms570_ADC_ADLASTCONV_LAST_CONV_GET(reg) BSP_FLD32GET(reg,0, 23)
#define tms570_ADC_ADLASTCONV_LAST_CONV_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*-------------------tms570_ADC_ADEVBUFFER-------------------*/
/* field: EV_EMPTY_10bit_mode - Event Group FIFO Empty. */
#define tms570_ADC_ADEVBUFFER_EV_EMPTY_10bit_mode BSP_FLD32(15)

/* field: EV_CHID_10bit_mode - Event Group Channel Id. */
#define tms570_ADC_ADEVBUFFER_EV_CHID_10bit_mode(val) BSP_FLD32(val,10, 14)
#define tms570_ADC_ADEVBUFFER_EV_CHID_10bit_mode_GET(reg) BSP_FLD32GET(reg,10, 14)
#define tms570_ADC_ADEVBUFFER_EV_CHID_10bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,10, 14)

/* field: EV_DR_10bit_mode - Event Group Digital Conversion Result. */
#define tms570_ADC_ADEVBUFFER_EV_DR_10bit_mode(val) BSP_FLD32(val,0, 9)
#define tms570_ADC_ADEVBUFFER_EV_DR_10bit_mode_GET(reg) BSP_FLD32GET(reg,0, 9)
#define tms570_ADC_ADEVBUFFER_EV_DR_10bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)

/* field: EV_EMPTY_12bit_mode - Event Group FIFO Empty. */
#define tms570_ADC_ADEVBUFFER_EV_EMPTY_12bit_mode BSP_FLD32(31)

/* field: EV_CHID_12bit_mode - Event Group Channel Id. */
#define tms570_ADC_ADEVBUFFER_EV_CHID_12bit_mode(val) BSP_FLD32(val,16, 20)
#define tms570_ADC_ADEVBUFFER_EV_CHID_12bit_mode_GET(reg) BSP_FLD32GET(reg,16, 20)
#define tms570_ADC_ADEVBUFFER_EV_CHID_12bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,16, 20)

/* field: EV_DR_12bit_mode - Event Group Digital Conversion Result. */
#define tms570_ADC_ADEVBUFFER_EV_DR_12bit_mode(val) BSP_FLD32(val,0, 11)
#define tms570_ADC_ADEVBUFFER_EV_DR_12bit_mode_GET(reg) BSP_FLD32GET(reg,0, 11)
#define tms570_ADC_ADEVBUFFER_EV_DR_12bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*-------------------tms570_ADC_ADG1BUFFER-------------------*/
/* field: G1_EMPTY_10bit_mode - Group1 FIFO Empty. */
#define tms570_ADC_ADG1BUFFER_G1_EMPTY_10bit_mode BSP_FLD32(15)

/* field: G1_CHID_10bit_mode - Group1 Channel Id. */
#define tms570_ADC_ADG1BUFFER_G1_CHID_10bit_mode(val) BSP_FLD32(val,10, 14)
#define tms570_ADC_ADG1BUFFER_G1_CHID_10bit_mode_GET(reg) BSP_FLD32GET(reg,10, 14)
#define tms570_ADC_ADG1BUFFER_G1_CHID_10bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,10, 14)

/* field: G1_DR_10bit_mode - Group1 Digital Conversion Result. */
#define tms570_ADC_ADG1BUFFER_G1_DR_10bit_mode(val) BSP_FLD32(val,0, 9)
#define tms570_ADC_ADG1BUFFER_G1_DR_10bit_mode_GET(reg) BSP_FLD32GET(reg,0, 9)
#define tms570_ADC_ADG1BUFFER_G1_DR_10bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)

/* field: G1_EMPTY_12bit_mode - Group1 FIFO Empty. */
#define tms570_ADC_ADG1BUFFER_G1_EMPTY_12bit_mode BSP_FLD32(31)

/* field: G1_CHID_12bit_mode - Group1 Channel Id. */
#define tms570_ADC_ADG1BUFFER_G1_CHID_12bit_mode(val) BSP_FLD32(val,16, 20)
#define tms570_ADC_ADG1BUFFER_G1_CHID_12bit_mode_GET(reg) BSP_FLD32GET(reg,16, 20)
#define tms570_ADC_ADG1BUFFER_G1_CHID_12bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,16, 20)

/* field: G1_DR_12bit_mode - Group1 Digital Conversion Result. */
#define tms570_ADC_ADG1BUFFER_G1_DR_12bit_mode(val) BSP_FLD32(val,0, 11)
#define tms570_ADC_ADG1BUFFER_G1_DR_12bit_mode_GET(reg) BSP_FLD32GET(reg,0, 11)
#define tms570_ADC_ADG1BUFFER_G1_DR_12bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*-------------------tms570_ADC_ADG2BUFFER-------------------*/
/* field: G2_EMPTY_10bit_mode - Group2 FIFO Empty. */
#define tms570_ADC_ADG2BUFFER_G2_EMPTY_10bit_mode BSP_FLD32(15)

/* field: G2_CHID_10bit_mode - Group2 Channel Id. */
#define tms570_ADC_ADG2BUFFER_G2_CHID_10bit_mode(val) BSP_FLD32(val,10, 14)
#define tms570_ADC_ADG2BUFFER_G2_CHID_10bit_mode_GET(reg) BSP_FLD32GET(reg,10, 14)
#define tms570_ADC_ADG2BUFFER_G2_CHID_10bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,10, 14)

/* field: G2_DR_10bit_mode - Group2 Digital Conversion Result. */
#define tms570_ADC_ADG2BUFFER_G2_DR_10bit_mode(val) BSP_FLD32(val,0, 9)
#define tms570_ADC_ADG2BUFFER_G2_DR_10bit_mode_GET(reg) BSP_FLD32GET(reg,0, 9)
#define tms570_ADC_ADG2BUFFER_G2_DR_10bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)

/* field: G2_EMPTY_12bit_mode - Group2 FIFO Empty. */
#define tms570_ADC_ADG2BUFFER_G2_EMPTY_12bit_mode BSP_FLD32(31)

/* field: G2_CHID_12bit_mode - Group2 Channel Id. */
#define tms570_ADC_ADG2BUFFER_G2_CHID_12bit_mode(val) BSP_FLD32(val,16, 20)
#define tms570_ADC_ADG2BUFFER_G2_CHID_12bit_mode_GET(reg) BSP_FLD32GET(reg,16, 20)
#define tms570_ADC_ADG2BUFFER_G2_CHID_12bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,16, 20)

/* field: G2_DR_12bit_mode - Group2 Digital Conversion Result. */
#define tms570_ADC_ADG2BUFFER_G2_DR_12bit_mode(val) BSP_FLD32(val,0, 11)
#define tms570_ADC_ADG2BUFFER_G2_DR_12bit_mode_GET(reg) BSP_FLD32GET(reg,0, 11)
#define tms570_ADC_ADG2BUFFER_G2_DR_12bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*------------------tms570_ADC_ADEVEMUBUFFER------------------*/
/* field: ADEVT_DIR - ADEVT Pin Direction. */
#define tms570_ADC_ADEVEMUBUFFER_ADEVT_DIR BSP_FLD32(0)


/*------------------tms570_ADC_ADG1EMUBUFFER------------------*/
/* field: ADEVT_DIR - ADEVT Pin Direction. */
#define tms570_ADC_ADG1EMUBUFFER_ADEVT_DIR BSP_FLD32(0)


/*------------------tms570_ADC_ADG2EMUBUFFER------------------*/
/* field: ADEVT_DIR - ADEVT Pin Direction. */
#define tms570_ADC_ADG2EMUBUFFER_ADEVT_DIR BSP_FLD32(0)


/*--------------------tms570_ADC_ADEVTDIR--------------------*/
/* field: ADEVT_DIR - ADEVT Pin Direction. */
#define tms570_ADC_ADEVTDIR_ADEVT_DIR BSP_FLD32(0)


/*--------------------tms570_ADC_ADEVTOUT--------------------*/
/* field: ADEVT_OUT - ADEVT Pin Output Value. */
#define tms570_ADC_ADEVTOUT_ADEVT_OUT BSP_FLD32(0)


/*---------------------tms570_ADC_ADEVTIN---------------------*/
/* field: ADEVT_IN - ADEVT Pin Input Value. This is a read-only bit which reflects the logic level on the ADEVT pin. */
#define tms570_ADC_ADEVTIN_ADEVT_IN BSP_FLD32(0)


/*--------------------tms570_ADC_ADEVTSET--------------------*/
/* field: ADEVT_SET - ADEVT Pin Set. This bit drives the output of the ADEVT pin high. */
#define tms570_ADC_ADEVTSET_ADEVT_SET BSP_FLD32(0)


/*--------------------tms570_ADC_ADEVTCLR--------------------*/
/* field: ADEVT_CLR - ADEVT Pin Clear. A read from this bit always returns the current state of the ADEVT pin. */
#define tms570_ADC_ADEVTCLR_ADEVT_CLR BSP_FLD32(0)


/*--------------------tms570_ADC_ADEVTPDR--------------------*/
/* field: ADEVT_PDR - ADEVT Pin Open Drain Enable. */
#define tms570_ADC_ADEVTPDR_ADEVT_PDR BSP_FLD32(0)


/*--------------------tms570_ADC_ADEVTPDIS--------------------*/
/* field: ADEVT_PDIS - ADEVT Pin Pull Control Disable. */
#define tms570_ADC_ADEVTPDIS_ADEVT_PDIS BSP_FLD32(0)


/*--------------------tms570_ADC_ADEVTPSEL--------------------*/
/* field: ADEVT_PSEL - ADEVT Pin Pull Control Select. */
#define tms570_ADC_ADEVTPSEL_ADEVT_PSEL BSP_FLD32(0)


/*------------------tms570_ADC_ADEVSAMPDISEN------------------*/
/* field: EV_SAMP_DIS_CYC - Event Group sample cap discharge cycles. */
#define tms570_ADC_ADEVSAMPDISEN_EV_SAMP_DIS_CYC(val) BSP_FLD32(val,8, 15)
#define tms570_ADC_ADEVSAMPDISEN_EV_SAMP_DIS_CYC_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_ADC_ADEVSAMPDISEN_EV_SAMP_DIS_CYC_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: EV_SAMP_DIS_EN - Event Group sample cap discharge enable. */
#define tms570_ADC_ADEVSAMPDISEN_EV_SAMP_DIS_EN BSP_FLD32(0)


/*------------------tms570_ADC_ADG1SAMPDISEN------------------*/
/* field: G1_SAMP_DIS_CYC - Group1 sample cap discharge cycles. */
#define tms570_ADC_ADG1SAMPDISEN_G1_SAMP_DIS_CYC(val) BSP_FLD32(val,8, 15)
#define tms570_ADC_ADG1SAMPDISEN_G1_SAMP_DIS_CYC_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_ADC_ADG1SAMPDISEN_G1_SAMP_DIS_CYC_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: G1_SAMP_DIS_EN - Group1 sample cap discharge enable. */
#define tms570_ADC_ADG1SAMPDISEN_G1_SAMP_DIS_EN BSP_FLD32(0)


/*------------------tms570_ADC_ADG2SAMPDISEN------------------*/
/* field: G2_SAMP_DIS_CYC - for which the ADC internal sampling capacitor is allowed to discharge before sampling the input */
#define tms570_ADC_ADG2SAMPDISEN_G2_SAMP_DIS_CYC(val) BSP_FLD32(val,8, 15)
#define tms570_ADC_ADG2SAMPDISEN_G2_SAMP_DIS_CYC_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_ADC_ADG2SAMPDISEN_G2_SAMP_DIS_CYC_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: G2_SAMP_DIS_EN - Group2 sample cap discharge enable. */
#define tms570_ADC_ADG2SAMPDISEN_G2_SAMP_DIS_EN BSP_FLD32(0)


/*-------------------tms570_ADC_ADMAGINT0CR-------------------*/
/* field: MAG_CHID0 - These bits specify the channel number from 0 to 31 for which the conversion result needs to be */
#define tms570_ADC_ADMAGINT0CR_MAG_CHID0(val) BSP_FLD32(val,26, 30)
#define tms570_ADC_ADMAGINT0CR_MAG_CHID0_GET(reg) BSP_FLD32GET(reg,26, 30)
#define tms570_ADC_ADMAGINT0CR_MAG_CHID0_SET(reg,val) BSP_FLD32SET(reg, val,26, 30)

/* field: MAG_THR0 - These bits specify the 10-bit compare value which the ADC will use for the comparison with the */
#define tms570_ADC_ADMAGINT0CR_MAG_THR0(val) BSP_FLD32(val,16, 25)
#define tms570_ADC_ADMAGINT0CR_MAG_THR0_GET(reg) BSP_FLD32GET(reg,16, 25)
#define tms570_ADC_ADMAGINT0CR_MAG_THR0_SET(reg,val) BSP_FLD32SET(reg, val,16, 25)

/* field: COMP_CHID0 - These bits specify the channel number from 0 to 31 whose last conversion result is compared */
#define tms570_ADC_ADMAGINT0CR_COMP_CHID0(val) BSP_FLD32(val,8, 12)
#define tms570_ADC_ADMAGINT0CR_COMP_CHID0_GET(reg) BSP_FLD32GET(reg,8, 12)
#define tms570_ADC_ADMAGINT0CR_COMP_CHID0_SET(reg,val) BSP_FLD32SET(reg, val,8, 12)

/* field: CHN/THR_COMP0 - Channel OR Threshold comparison. */
#define tms570_ADC_ADMAGINT0CR_CHN/THR_COMP0 BSP_FLD32(1)

/* field: CMP_GE/LT0 - Greater than or equal to OR Less than comparison operator. */
#define tms570_ADC_ADMAGINT0CR_CMP_GE/LT0 BSP_FLD32(0)


/*-------------------tms570_ADC_ADMAG0MASK-------------------*/
/* field: MAG_INT0_MASK - These bits specify the mask for the comparison in order to generate the magnitude compare */
#define tms570_ADC_ADMAG0MASK_MAG_INT0_MASK(val) BSP_FLD32(val,0, 9)
#define tms570_ADC_ADMAG0MASK_MAG_INT0_MASK_GET(reg) BSP_FLD32GET(reg,0, 9)
#define tms570_ADC_ADMAG0MASK_MAG_INT0_MASK_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)


/*-------------------tms570_ADC_ADMAGINT1CR-------------------*/
/* field: MAG_CHID1 - These bits specify the channel number from 0 to 31 for which the conversion result needs to be */
#define tms570_ADC_ADMAGINT1CR_MAG_CHID1(val) BSP_FLD32(val,26, 30)
#define tms570_ADC_ADMAGINT1CR_MAG_CHID1_GET(reg) BSP_FLD32GET(reg,26, 30)
#define tms570_ADC_ADMAGINT1CR_MAG_CHID1_SET(reg,val) BSP_FLD32SET(reg, val,26, 30)

/* field: MAG_THR1 - These bits specify the 10-bit compare value which the ADC will use for the comparison with the */
#define tms570_ADC_ADMAGINT1CR_MAG_THR1(val) BSP_FLD32(val,16, 25)
#define tms570_ADC_ADMAGINT1CR_MAG_THR1_GET(reg) BSP_FLD32GET(reg,16, 25)
#define tms570_ADC_ADMAGINT1CR_MAG_THR1_SET(reg,val) BSP_FLD32SET(reg, val,16, 25)

/* field: COMP_CHID1 - These bits specify the channel number from 0 to 31 whose last conversion result is compared */
#define tms570_ADC_ADMAGINT1CR_COMP_CHID1(val) BSP_FLD32(val,8, 12)
#define tms570_ADC_ADMAGINT1CR_COMP_CHID1_GET(reg) BSP_FLD32GET(reg,8, 12)
#define tms570_ADC_ADMAGINT1CR_COMP_CHID1_SET(reg,val) BSP_FLD32SET(reg, val,8, 12)

/* field: CHN/THR_COMP1 - Channel OR Threshold comparison. */
#define tms570_ADC_ADMAGINT1CR_CHN/THR_COMP1 BSP_FLD32(1)

/* field: CMP_GE/LT1 - Greater than or equal to OR Less than comparison operator. */
#define tms570_ADC_ADMAGINT1CR_CMP_GE/LT1 BSP_FLD32(0)


/*-------------------tms570_ADC_ADMAG1MASK-------------------*/
/* field: MAG_INT1_MASK - These bits specify the mask for the comparison in order to generate the magnitude compare */
#define tms570_ADC_ADMAG1MASK_MAG_INT1_MASK(val) BSP_FLD32(val,0, 9)
#define tms570_ADC_ADMAG1MASK_MAG_INT1_MASK_GET(reg) BSP_FLD32GET(reg,0, 9)
#define tms570_ADC_ADMAG1MASK_MAG_INT1_MASK_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)


/*-------------------tms570_ADC_ADMAGINT2CR-------------------*/
/* field: MAG_CHID2 - These bits specify the channel number from 0 to 31 for which the conversion result needs to be */
#define tms570_ADC_ADMAGINT2CR_MAG_CHID2(val) BSP_FLD32(val,26, 30)
#define tms570_ADC_ADMAGINT2CR_MAG_CHID2_GET(reg) BSP_FLD32GET(reg,26, 30)
#define tms570_ADC_ADMAGINT2CR_MAG_CHID2_SET(reg,val) BSP_FLD32SET(reg, val,26, 30)

/* field: MAG_THR2 - These bits specify the 10-bit compare value which the ADC will use for the comparison with the */
#define tms570_ADC_ADMAGINT2CR_MAG_THR2(val) BSP_FLD32(val,16, 25)
#define tms570_ADC_ADMAGINT2CR_MAG_THR2_GET(reg) BSP_FLD32GET(reg,16, 25)
#define tms570_ADC_ADMAGINT2CR_MAG_THR2_SET(reg,val) BSP_FLD32SET(reg, val,16, 25)

/* field: COMP_CHID2 - These bits specify the channel number from 0 to 31 whose last conversion result is compared */
#define tms570_ADC_ADMAGINT2CR_COMP_CHID2(val) BSP_FLD32(val,8, 12)
#define tms570_ADC_ADMAGINT2CR_COMP_CHID2_GET(reg) BSP_FLD32GET(reg,8, 12)
#define tms570_ADC_ADMAGINT2CR_COMP_CHID2_SET(reg,val) BSP_FLD32SET(reg, val,8, 12)

/* field: CHN/THR_COMP2 - Channel OR Threshold comparison. */
#define tms570_ADC_ADMAGINT2CR_CHN/THR_COMP2 BSP_FLD32(1)

/* field: CMP_GE/LT2 - Greater than or equal to OR Less than comparison operator. */
#define tms570_ADC_ADMAGINT2CR_CMP_GE/LT2 BSP_FLD32(0)


/*-------------------tms570_ADC_ADMAG2MASK-------------------*/
/* field: MAG_INT2_MASK - These bits specify the mask for the comparison in order to generate the magnitude compare */
#define tms570_ADC_ADMAG2MASK_MAG_INT2_MASK(val) BSP_FLD32(val,0, 9)
#define tms570_ADC_ADMAG2MASK_MAG_INT2_MASK_GET(reg) BSP_FLD32GET(reg,0, 9)
#define tms570_ADC_ADMAG2MASK_MAG_INT2_MASK_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)


/*-----------------tms570_ADC_ADMAGINTENASET-----------------*/
/* field: MAG_INT_ENA_SET - Each of these three bits, when set, enable the corresponding magnitude compare interrupt. */
#define tms570_ADC_ADMAGINTENASET_MAG_INT_ENA_SET(val) BSP_FLD32(val,0, 2)
#define tms570_ADC_ADMAGINTENASET_MAG_INT_ENA_SET_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_ADC_ADMAGINTENASET_MAG_INT_ENA_SET_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-----------------tms570_ADC_ADMAGINTENACLR-----------------*/
/* field: MAG_INT_ENA_CLR - Each of these three bits, when set, enable the corresponding magnitude compare interrupt. */
#define tms570_ADC_ADMAGINTENACLR_MAG_INT_ENA_CLR(val) BSP_FLD32(val,0, 2)
#define tms570_ADC_ADMAGINTENACLR_MAG_INT_ENA_CLR_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_ADC_ADMAGINTENACLR_MAG_INT_ENA_CLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-------------------tms570_ADC_ADMAGINTFLG-------------------*/
/* field: MAG_INT_FLG - Magnitude Compare Interrupt Flags. */
#define tms570_ADC_ADMAGINTFLG_MAG_INT_FLG(val) BSP_FLD32(val,0, 2)
#define tms570_ADC_ADMAGINTFLG_MAG_INT_FLG_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_ADC_ADMAGINTFLG_MAG_INT_FLG_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-------------------tms570_ADC_ADMAGINTOFF-------------------*/
/* field: MAG_INT_OFF - Magnitude Compare Interrupt Offset. */
#define tms570_ADC_ADMAGINTOFF_MAG_INT_OFF(val) BSP_FLD32(val,0, 3)
#define tms570_ADC_ADMAGINTOFF_MAG_INT_OFF_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_ADC_ADMAGINTOFF_MAG_INT_OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-----------------tms570_ADC_ADEVFIFORESETCR-----------------*/
/* field: EV_FIFO_RESET - allows the ADC module to overwrite the contents of the Event Group results memory starting from */
#define tms570_ADC_ADEVFIFORESETCR_EV_FIFO_RESET BSP_FLD32(0)


/*-----------------tms570_ADC_ADG1FIFORESETCR-----------------*/
/* field: G1_FIFO_RESET - ADC Group1 FIFO Reset. The application can set this bit in case of an overrun condition. */
#define tms570_ADC_ADG1FIFORESETCR_G1_FIFO_RESET BSP_FLD32(0)


/*-----------------tms570_ADC_ADG2FIFORESETCR-----------------*/
/* field: G2_FIFO_RESET - ADC Group2 FIFO Reset. The application can set this bit in case of an overrun condition. */
#define tms570_ADC_ADG2FIFORESETCR_G2_FIFO_RESET BSP_FLD32(0)


/*------------------tms570_ADC_ADEVRAMWRADDR------------------*/
/* field: G1_RAM_ADDR - Group1 results memory write pointer. */
#define tms570_ADC_ADEVRAMWRADDR_G1_RAM_ADDR(val) BSP_FLD32(val,0, 8)
#define tms570_ADC_ADEVRAMWRADDR_G1_RAM_ADDR_GET(reg) BSP_FLD32GET(reg,0, 8)
#define tms570_ADC_ADEVRAMWRADDR_G1_RAM_ADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*------------------tms570_ADC_ADG1RAMWRADDR------------------*/
/* field: G1_RAM_ADDR - Group1 results memory write pointer. */
#define tms570_ADC_ADG1RAMWRADDR_G1_RAM_ADDR(val) BSP_FLD32(val,0, 8)
#define tms570_ADC_ADG1RAMWRADDR_G1_RAM_ADDR_GET(reg) BSP_FLD32GET(reg,0, 8)
#define tms570_ADC_ADG1RAMWRADDR_G1_RAM_ADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*------------------tms570_ADC_ADG2RAMWRADDR------------------*/
/* field: G2_RAM_ADDR - Group2 results memory write pointer. */
#define tms570_ADC_ADG2RAMWRADDR_G2_RAM_ADDR(val) BSP_FLD32(val,0, 8)
#define tms570_ADC_ADG2RAMWRADDR_G2_RAM_ADDR_GET(reg) BSP_FLD32GET(reg,0, 8)
#define tms570_ADC_ADG2RAMWRADDR_G2_RAM_ADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*---------------------tms570_ADC_ADPARCR---------------------*/
/* field: TEST - This bit maps the parity bits into the ADC results' RAM frame so that the application can access */
#define tms570_ADC_ADPARCR_TEST BSP_FLD32(8)

/* field: PARITY_ENA - PARITY ENA */
#define tms570_ADC_ADPARCR_PARITY_ENA(val) BSP_FLD32(val,0, 3)
#define tms570_ADC_ADPARCR_PARITY_ENA_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_ADC_ADPARCR_PARITY_ENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*--------------------tms570_ADC_ADPARADDR--------------------*/
/* field: ERROR_ADDRESS - These bits hold the address of the first parity error generated in the ADC results' RAM. */
#define tms570_ADC_ADPARADDR_ERROR_ADDRESS(val) BSP_FLD32(val,2, 11)
#define tms570_ADC_ADPARADDR_ERROR_ADDRESS_GET(reg) BSP_FLD32GET(reg,2, 11)
#define tms570_ADC_ADPARADDR_ERROR_ADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,2, 11)


/*-----------------tms570_ADC_ADPWRUPDLYCTRL-----------------*/
/* field: PWRUP_DLY - This register defines the number of VCLK cycles that the ADC state machine has to wait after */
#define tms570_ADC_ADPWRUPDLYCTRL_PWRUP_DLY(val) BSP_FLD32(val,0, 9)
#define tms570_ADC_ADPWRUPDLYCTRL_PWRUP_DLY_GET(reg) BSP_FLD32GET(reg,0, 9)
#define tms570_ADC_ADPWRUPDLYCTRL_PWRUP_DLY_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)



#endif /* LIBBSP_ARM_tms570_ADC.H */
