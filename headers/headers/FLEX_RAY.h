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
#ifndef LIBBSP_ARM_tms570_FLEX.H
#define LIBBSP_ARM_tms570_FLEX.H

#include <bsp/utility.h>

typedef struct{
  uint32_t GSN0;              /*Global Static Number 0*/
  uint32_t GSN1;              /*Global Static Number 1*/
  uint8_t reserved1 [8];
  uint32_t GCS;               /*Global Control Set*/
  uint32_t GCR;               /*Global Control Reset*/
  uint32_t TSCB;              /*Transfer Status Current Buffer*/
  uint32_t LTBCC;             /*Last Transferred Buffer to Communication Controller*/
  uint32_t LTBSM;             /*Last Transferred Buffer to System Memory*/
  uint32_t TBA;               /*Transfer Base Address*/
  uint32_t NTBA;              /*Next Transfer Base Address*/
  uint32_t BAMS;              /*Base Address of Mirrored Status*/
  uint32_t SAMP;              /*Start Address of Memory Protection*/
  uint32_t EAMP;              /*End Address of Memory Protection*/
  uint8_t reserved2 [8];
  uint32_t TSMO1;             /*Transfer to System Memory Occurred 1*/
  uint32_t TSMO2;             /*Transfer to System Memory Occurred 2*/
  uint32_t TSMO3;             /*Transfer to System Memory Occurred 3*/
  uint32_t TSMO4;             /*Transfer to System Memory Occurred 4*/
  uint32_t TCCO1;             /*Transfer to Communication Controller Occurred 1*/
  uint32_t TCCO2;             /*Transfer to Communication Controller Occurred 2*/
  uint32_t TCCO3;             /*Transfer to Communication Controller Occurred 3*/
  uint32_t TCCO4;             /*Transfer to Communication Controller Occurred 4*/
  uint32_t TOOFF;             /*Transfer Occurred Offset*/
  uint8_t reserved3 [12];
  uint32_t PEADR;             /*Parity Error Address*/
  uint32_t TEIF;              /*Transfer Error Interrupt*/
  uint32_t TEIRES;            /*Transfer Error Interrupt Enable Set*/
  uint32_t TEIRER;            /*Transfer Error Interrupt Enable Reset*/
  uint32_t TTSMS1;            /*Trigger Transfer to System Memory Set 1*/
  uint32_t TTSMR1;            /*Trigger Transfer to System Memory Reset 1*/
  uint32_t TTSMS2;            /*Trigger Transfer to System Memory Set 2*/
  uint32_t TTSMR2;            /*Trigger Transfer to System Memory Reset 2*/
  uint32_t TTSMS3;            /*Trigger Transfer to System Memory Set 3*/
  uint32_t TTSMR3;            /*Trigger Transfer to System Memory Reset 3*/
  uint32_t TTSMS4;            /*Trigger Transfer to System Memory Set 4*/
  uint32_t TTSMR4;            /*Trigger Transfer to System Memory Reset 4*/
  uint32_t TTCCS1;            /*Trigger Transfer to Communication Controller Set 1*/
  uint32_t TTCCR1;            /*Trigger Transfer to Communication Controller Reset 1*/
  uint32_t TTCCS2;            /*Trigger Transfer to Communication Controller Set 2*/
  uint32_t TTCCR2;            /*Trigger Transfer to Communication Controller Reset 2*/
  uint32_t TTCCS3;            /*Trigger Transfer to Communication Controller Set 3*/
  uint32_t TTCCR3;            /*Trigger Transfer to Communication Controller Reset 3*/
  uint32_t TTCCS4;            /*Trigger Transfer to Communication Controller Set 4*/
  uint32_t TTCCR4;            /*Trigger Transfer to Communication Controller Reset 4*/
  uint32_t ETESMS1;           /*Enable Transfer on Event to System Memory Set 1*/
  uint32_t ETESMR1;           /*Enable Transfer on Event to System Memory Reset 1*/
  uint32_t ETESMS2;           /*Enable Transfer on Event to System Memory Set 2*/
  uint32_t ETESMR2;           /*Enable Transfer on Event to System Memory Reset 2*/
  uint32_t ETESMS3;           /*Enable Transfer on Event to System Memory Set 3*/
  uint32_t ETESMR3;           /*Enable Transfer on Event to System Memory Reset 3*/
  uint32_t ETESMS4;           /*Enable Transfer on Event to System Memory Set 4*/
  uint32_t ETESMR4;           /*Enable Transfer on Event to System Memory Reset 4*/
  uint32_t CESMS1;            /*Clear on Event to System Memory Set 1*/
  uint32_t CESMR1;            /*Clear on Event to System Memory Reset 1*/
  uint32_t CESMS2;            /*Clear on Event to System Memory Set 2*/
  uint32_t CESMR2;            /*Clear on Event to System Memory Reset 2*/
  uint32_t CESMS3;            /*Clear on Event to System Memory Set 3*/
  uint32_t CESMR3;            /*Clear on Event to System Memory Reset 3*/
  uint32_t CESMS4;            /*Clear on Event to System Memory Set 4*/
  uint32_t CESMR4;            /*Clear on Event to System Memory Reset 4*/
  uint32_t TSMIES1;           /*Transfer to System Memory Interrupt Enable Set 1*/
  uint32_t TSMIER1;           /*Transfer to System Memory Interrupt Enable Reset 1*/
  uint32_t TSMIES2;           /*Transfer to System Memory Interrupt Enable Set 2*/
  uint32_t TSMIER2;           /*Transfer to System Memory Interrupt Enable Reset 2*/
  uint32_t TSMIES3;           /*Transfer to System Memory Interrupt Enable Set 3*/
  uint32_t TSMIER3;           /*Transfer to System Memory Interrupt Enable Reset 3*/
  uint32_t TSMIES4;           /*Transfer to System Memory Interrupt Enable Set 4*/
  uint32_t TSMIER4;           /*Transfer to System Memory Interrupt Enable Reset 4*/
  uint32_t TCCIES1;           /*Transfer to Communication Controller Interrupt Enable Set 1*/
  uint32_t TCCIER1;           /*Transfer to Communication Controller Interrupt Enable Reset 1*/
  uint32_t TCCIES2;           /*Transfer to Communication Controller Interrupt Enable Set 2*/
  uint32_t TCCIER2;           /*Transfer to Communication Controller Interrupt Enable Reset 2*/
  uint32_t TCCIES3;           /*Transfer to Communication Controller Interrupt Enable Set 3*/
  uint32_t TCCIER3;           /*Transfer to Communication Controller Interrupt Enable Reset 3*/
  uint32_t TCCIES4;           /*Transfer to Communication Controller Interrupt Enable Set 4*/
  uint32_t TCCIER4;           /*Transfer to Communication Controller Interrupt Enable Reset 4*/
} FLEX_struct;

/*----------------------tms570_FLEX_GSN0----------------------*/
/* field: Data_A(15-0) - Data_A(15-0) */
#define tms570_FLEX_GSN0_Data_A(15-0)(val) BSP_FLD32(val,16, 31)
#define tms570_FLEX_GSN0_Data_A(15-0)_GET(reg) BSP_FLD32GET(reg,16, 31)
#define tms570_FLEX_GSN0_Data_A(15-0)_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: Data_B(15-0) - (complement of Data_A(15-0)) */
#define tms570_FLEX_GSN0_Data_B(15-0)(val) BSP_FLD32(val,0, 15)
#define tms570_FLEX_GSN0_Data_B(15-0)_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_FLEX_GSN0_Data_B(15-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*----------------------tms570_FLEX_GSN1----------------------*/
/* field: Data_C(15-0) - Data_C(15-0) */
#define tms570_FLEX_GSN1_Data_C(15-0)(val) BSP_FLD32(val,16, 31)
#define tms570_FLEX_GSN1_Data_C(15-0)_GET(reg) BSP_FLD32GET(reg,16, 31)
#define tms570_FLEX_GSN1_Data_C(15-0)_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: Data_D(15-0) - (complement of Data_C(15-0)) */
#define tms570_FLEX_GSN1_Data_D(15-0)(val) BSP_FLD32(val,0, 15)
#define tms570_FLEX_GSN1_Data_D(15-0)_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_FLEX_GSN1_Data_D(15-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*----------------------tms570_FLEX_GCS----------------------*/
/* field: ENDVBM - Endianness Correction on VBusp Master */
#define tms570_FLEX_GCS_ENDVBM BSP_FLD32(31)

/* field: ENDVBS - Endianness correction on VBusp Slave */
#define tms570_FLEX_GCS_ENDVBS BSP_FLD32(30)

/* field: ENDRx - Endianness Correction for No (header or payload) Data Sink Access */
#define tms570_FLEX_GCS_ENDRx(val) BSP_FLD32(val,28, 29)
#define tms570_FLEX_GCS_ENDRx_GET(reg) BSP_FLD32GET(reg,28, 29)
#define tms570_FLEX_GCS_ENDRx_SET(reg,val) BSP_FLD32SET(reg, val,28, 29)

/* field: ENDHx - Endianness Correction for Header */
#define tms570_FLEX_GCS_ENDHx(val) BSP_FLD32(val,26, 27)
#define tms570_FLEX_GCS_ENDHx_GET(reg) BSP_FLD32GET(reg,26, 27)
#define tms570_FLEX_GCS_ENDHx_SET(reg,val) BSP_FLD32SET(reg, val,26, 27)

/* field: ENDPx - Endianness Correction for Payload */
#define tms570_FLEX_GCS_ENDPx(val) BSP_FLD32(val,24, 25)
#define tms570_FLEX_GCS_ENDPx_GET(reg) BSP_FLD32GET(reg,24, 25)
#define tms570_FLEX_GCS_ENDPx_SET(reg,val) BSP_FLD32SET(reg, val,24, 25)

/* field: PRIO - Transfer Priority */
#define tms570_FLEX_GCS_PRIO BSP_FLD32(21)

/* field: PEFT - Parity for Test */
#define tms570_FLEX_GCS_PEFT BSP_FLD32(20)

/* field: PELx - Parity Lock */
#define tms570_FLEX_GCS_PELx(val) BSP_FLD32(val,16, 19)
#define tms570_FLEX_GCS_PELx_GET(reg) BSP_FLD32GET(reg,16, 19)
#define tms570_FLEX_GCS_PELx_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: CETESM - Clear ETESM Register */
#define tms570_FLEX_GCS_CETESM BSP_FLD32(14)

/* field: CTTCC - Clear TTCC Register */
#define tms570_FLEX_GCS_CTTCC BSP_FLD32(13)

/* field: CTTSM - Clear TTSM Register */
#define tms570_FLEX_GCS_CTTSM BSP_FLD32(12)

/* field: ETSM - Enable Transfer Status Mirrored */
#define tms570_FLEX_GCS_ETSM BSP_FLD32(8)

/* field: SILE - Status Interrupt Line Enable */
#define tms570_FLEX_GCS_SILE BSP_FLD32(5)

/* field: EILE - Error Interrupt Line Enable */
#define tms570_FLEX_GCS_EILE BSP_FLD32(4)

/* field: TUH - Transfer Unit Halted */
#define tms570_FLEX_GCS_TUH BSP_FLD32(1)

/* field: TUE - Transfer Unit Enabled */
#define tms570_FLEX_GCS_TUE BSP_FLD32(0)


/*----------------------tms570_FLEX_GCR----------------------*/
/* field: ENDVBM - Endianness Correction on VBusp Master */
#define tms570_FLEX_GCR_ENDVBM BSP_FLD32(31)

/* field: ENDVBS - Endianness correction on VBusp Slave */
#define tms570_FLEX_GCR_ENDVBS BSP_FLD32(30)

/* field: ENDRx - Endianness Correction for No (header or payload) Data Sink Access */
#define tms570_FLEX_GCR_ENDRx(val) BSP_FLD32(val,28, 29)
#define tms570_FLEX_GCR_ENDRx_GET(reg) BSP_FLD32GET(reg,28, 29)
#define tms570_FLEX_GCR_ENDRx_SET(reg,val) BSP_FLD32SET(reg, val,28, 29)

/* field: ENDHx - Endianness Correction for Header */
#define tms570_FLEX_GCR_ENDHx(val) BSP_FLD32(val,26, 27)
#define tms570_FLEX_GCR_ENDHx_GET(reg) BSP_FLD32GET(reg,26, 27)
#define tms570_FLEX_GCR_ENDHx_SET(reg,val) BSP_FLD32SET(reg, val,26, 27)

/* field: ENDPx - Endianness Correction for Payload */
#define tms570_FLEX_GCR_ENDPx(val) BSP_FLD32(val,24, 25)
#define tms570_FLEX_GCR_ENDPx_GET(reg) BSP_FLD32GET(reg,24, 25)
#define tms570_FLEX_GCR_ENDPx_SET(reg,val) BSP_FLD32SET(reg, val,24, 25)

/* field: PRIO - Transfer Priority */
#define tms570_FLEX_GCR_PRIO BSP_FLD32(21)

/* field: PEFT - Parity for Test */
#define tms570_FLEX_GCR_PEFT BSP_FLD32(20)

/* field: PELx - Parity Lock */
#define tms570_FLEX_GCR_PELx(val) BSP_FLD32(val,16, 19)
#define tms570_FLEX_GCR_PELx_GET(reg) BSP_FLD32GET(reg,16, 19)
#define tms570_FLEX_GCR_PELx_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: CETESM - Clear ETESM Register */
#define tms570_FLEX_GCR_CETESM BSP_FLD32(14)

/* field: CTTCC - Clear TTCC Register */
#define tms570_FLEX_GCR_CTTCC BSP_FLD32(13)

/* field: CTTSM - Clear TTSM Register */
#define tms570_FLEX_GCR_CTTSM BSP_FLD32(12)

/* field: ETSM - Enable Transfer Status Mirrored */
#define tms570_FLEX_GCR_ETSM BSP_FLD32(8)

/* field: SILE - Status Interrupt Line Enable */
#define tms570_FLEX_GCR_SILE BSP_FLD32(5)

/* field: EILE - Error Interrupt Line Enable */
#define tms570_FLEX_GCR_EILE BSP_FLD32(4)

/* field: TUH - Transfer Unit Halted */
#define tms570_FLEX_GCR_TUH BSP_FLD32(1)

/* field: TUE - Transfer Unit Enabled */
#define tms570_FLEX_GCR_TUE BSP_FLD32(0)


/*----------------------tms570_FLEX_TSCB----------------------*/
/* field: TSMS[4:0] - Transfer State Machine Status */
#define tms570_FLEX_TSCB_TSMS[4:0](val) BSP_FLD32(val,16, 20)
#define tms570_FLEX_TSCB_TSMS[4:0]_GET(reg) BSP_FLD32GET(reg,16, 20)
#define tms570_FLEX_TSCB_TSMS[4:0]_SET(reg,val) BSP_FLD32SET(reg, val,16, 20)

/* field: STUH - Status of Transfer Unit State Machine for Halt Detection */
#define tms570_FLEX_TSCB_STUH BSP_FLD32(12)

/* field: IDLE - Detects Transfer State Machine State IDLE */
#define tms570_FLEX_TSCB_IDLE BSP_FLD32(8)

/* field: BN[6:0] - Buffer Number */
#define tms570_FLEX_TSCB_BN[6:0](val) BSP_FLD32(val,0, 6)
#define tms570_FLEX_TSCB_BN[6:0]_GET(reg) BSP_FLD32GET(reg,0, 6)
#define tms570_FLEX_TSCB_BN[6:0]_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)


/*---------------------tms570_FLEX_LTBCC---------------------*/
/* field: BN[6:0] - Buffer number. */
#define tms570_FLEX_LTBCC_BN[6:0](val) BSP_FLD32(val,0, 6)
#define tms570_FLEX_LTBCC_BN[6:0]_GET(reg) BSP_FLD32GET(reg,0, 6)
#define tms570_FLEX_LTBCC_BN[6:0]_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)


/*---------------------tms570_FLEX_LTBSM---------------------*/
/* field: BN[6:0] - Buffer number. */
#define tms570_FLEX_LTBSM_BN[6:0](val) BSP_FLD32(val,0, 6)
#define tms570_FLEX_LTBSM_BN[6:0]_GET(reg) BSP_FLD32GET(reg,0, 6)
#define tms570_FLEX_LTBSM_BN[6:0]_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)


/*----------------------tms570_FLEX_TBA----------------------*/
/* field: TBA(31-0) - Transfer Base Address. */
#define tms570_FLEX_TBA_TBA(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TBA_TBA(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TBA_TBA(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------tms570_FLEX_NTBA----------------------*/
/* field: nTBA(31-0) - nTBA(31-0) */
#define tms570_FLEX_NTBA_nTBA(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_NTBA_nTBA(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_NTBA_nTBA(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------tms570_FLEX_BAMS----------------------*/
/* field: BAMS(31-0) - Base Address of Mirrored Status32-bit base pointer, 2 LSB are not significant (32-bit */
#define tms570_FLEX_BAMS_BAMS(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_BAMS_BAMS(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_BAMS_BAMS(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------tms570_FLEX_SAMP----------------------*/
/* field: SAMP(31-0) - Start Address Memory Protection. */
#define tms570_FLEX_SAMP_SAMP(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_SAMP_SAMP(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_SAMP_SAMP(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------tms570_FLEX_EAMP----------------------*/
/* field: EAMP(31-0) - End Address Memory Protection. */
#define tms570_FLEX_EAMP_EAMP(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_EAMP_EAMP(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_EAMP_EAMP(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TSMO1---------------------*/
/* field: TSMO1(31-0) - Transfer to System Memory Occurred Register 1. */
#define tms570_FLEX_TSMO1_TSMO1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TSMO1_TSMO1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TSMO1_TSMO1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TSMO2---------------------*/
/* field: TSMO1(31-0) - Transfer to System Memory Occurred Register 1. */
#define tms570_FLEX_TSMO2_TSMO1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TSMO2_TSMO1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TSMO2_TSMO1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TSMO3---------------------*/
/* field: TSMO1(31-0) - Transfer to System Memory Occurred Register 1. */
#define tms570_FLEX_TSMO3_TSMO1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TSMO3_TSMO1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TSMO3_TSMO1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TSMO4---------------------*/
/* field: TSMO1(31-0) - Transfer to System Memory Occurred Register 1. */
#define tms570_FLEX_TSMO4_TSMO1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TSMO4_TSMO1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TSMO4_TSMO1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TCCO1---------------------*/
/* field: TCCO1(31-0) - Transfer to Communication Controller Occurred Register 1. */
#define tms570_FLEX_TCCO1_TCCO1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TCCO1_TCCO1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TCCO1_TCCO1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TCCO2---------------------*/
/* field: TCCO1(31-0) - Transfer to Communication Controller Occurred Register 1. */
#define tms570_FLEX_TCCO2_TCCO1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TCCO2_TCCO1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TCCO2_TCCO1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TCCO3---------------------*/
/* field: TCCO1(31-0) - Transfer to Communication Controller Occurred Register 1. */
#define tms570_FLEX_TCCO3_TCCO1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TCCO3_TCCO1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TCCO3_TCCO1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TCCO4---------------------*/
/* field: TCCO1(31-0) - Transfer to Communication Controller Occurred Register 1. */
#define tms570_FLEX_TCCO4_TCCO1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TCCO4_TCCO1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TCCO4_TCCO1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TOOFF---------------------*/
/* field: TDIR - Transfer Direction. */
#define tms570_FLEX_TOOFF_TDIR BSP_FLD32(8)

/* field: OFF(7-0) - Offset Vector */
#define tms570_FLEX_TOOFF_OFF(7-0)(val) BSP_FLD32(val,0, 7)
#define tms570_FLEX_TOOFF_OFF(7-0)_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_FLEX_TOOFF_OFF(7-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------tms570_FLEX_PEADR---------------------*/
/* field: ADR(8-0) - Address of failing TCR location. */
#define tms570_FLEX_PEADR_ADR(8-0)(val) BSP_FLD32(val,0, 8)
#define tms570_FLEX_PEADR_ADR(8-0)_GET(reg) BSP_FLD32GET(reg,0, 8)
#define tms570_FLEX_PEADR_ADR(8-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*----------------------tms570_FLEX_TEIF----------------------*/
/* field: MPV - Memory Protection Violation. */
#define tms570_FLEX_TEIF_MPV BSP_FLD32(17)

/* field: PE - Parity Error. The flag signals a parity error to the host. */
#define tms570_FLEX_TEIF_PE BSP_FLD32(16)

/* field: RSTAT(2-0) - Status of VBUS on read transfers. */
#define tms570_FLEX_TEIF_RSTAT(2-0)(val) BSP_FLD32(val,8, 10)
#define tms570_FLEX_TEIF_RSTAT(2-0)_GET(reg) BSP_FLD32GET(reg,8, 10)
#define tms570_FLEX_TEIF_RSTAT(2-0)_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: WSTAT(2-0) - Status of VBUS on write transfers. */
#define tms570_FLEX_TEIF_WSTAT(2-0)(val) BSP_FLD32(val,4, 6)
#define tms570_FLEX_TEIF_WSTAT(2-0)_GET(reg) BSP_FLD32GET(reg,4, 6)
#define tms570_FLEX_TEIF_WSTAT(2-0)_SET(reg,val) BSP_FLD32SET(reg, val,4, 6)

/* field: TNR - Transfer Not Ready. */
#define tms570_FLEX_TEIF_TNR BSP_FLD32(1)

/* field: FAC - Forbidden Access. */
#define tms570_FLEX_TEIF_FAC BSP_FLD32(0)


/*---------------------tms570_FLEX_TEIRES---------------------*/
/* field: RSTATE(2-0) - Read Error Interrupt Generation (interrupt generation on VBUS read transfer errors). */
#define tms570_FLEX_TEIRES_RSTATE(2-0)(val) BSP_FLD32(val,8, 10)
#define tms570_FLEX_TEIRES_RSTATE(2-0)_GET(reg) BSP_FLD32GET(reg,8, 10)
#define tms570_FLEX_TEIRES_RSTATE(2-0)_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: WSTATE(2-0) - Write Error Interrupt Generation (interrupt generation on VBUS write transfer errors). */
#define tms570_FLEX_TEIRES_WSTATE(2-0)(val) BSP_FLD32(val,4, 6)
#define tms570_FLEX_TEIRES_WSTATE(2-0)_GET(reg) BSP_FLD32GET(reg,4, 6)
#define tms570_FLEX_TEIRES_WSTATE(2-0)_SET(reg,val) BSP_FLD32SET(reg, val,4, 6)

/* field: TNRE - Transfer Not Ready Enable. */
#define tms570_FLEX_TEIRES_TNRE BSP_FLD32(1)

/* field: FACE - Forbidden Access Enable. */
#define tms570_FLEX_TEIRES_FACE BSP_FLD32(0)


/*---------------------tms570_FLEX_TEIRER---------------------*/
/* field: RSTATE(2-0) - Read Error Interrupt Generation (interrupt generation on VBUS read transfer errors). */
#define tms570_FLEX_TEIRER_RSTATE(2-0)(val) BSP_FLD32(val,8, 10)
#define tms570_FLEX_TEIRER_RSTATE(2-0)_GET(reg) BSP_FLD32GET(reg,8, 10)
#define tms570_FLEX_TEIRER_RSTATE(2-0)_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: WSTATE(2-0) - Write Error Interrupt Generation (interrupt generation on VBUS write transfer errors). */
#define tms570_FLEX_TEIRER_WSTATE(2-0)(val) BSP_FLD32(val,4, 6)
#define tms570_FLEX_TEIRER_WSTATE(2-0)_GET(reg) BSP_FLD32GET(reg,4, 6)
#define tms570_FLEX_TEIRER_WSTATE(2-0)_SET(reg,val) BSP_FLD32SET(reg, val,4, 6)

/* field: TNRE - Transfer Not Ready Enable. */
#define tms570_FLEX_TEIRER_TNRE BSP_FLD32(1)

/* field: FACE - Forbidden Access Enable. */
#define tms570_FLEX_TEIRER_FACE BSP_FLD32(0)


/*---------------------tms570_FLEX_TTSMS1---------------------*/
/* field: TTSMS1(31-0) - Trigger Transfer to System Memory Set 1. */
#define tms570_FLEX_TTSMS1_TTSMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTSMS1_TTSMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTSMS1_TTSMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTSMR1---------------------*/
/* field: TTSMS1(31-0) - Trigger Transfer to System Memory Set 1. */
#define tms570_FLEX_TTSMR1_TTSMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTSMR1_TTSMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTSMR1_TTSMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTSMS2---------------------*/
/* field: TTSMS1(31-0) - Trigger Transfer to System Memory Set 1. */
#define tms570_FLEX_TTSMS2_TTSMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTSMS2_TTSMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTSMS2_TTSMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTSMR2---------------------*/
/* field: TTSMS1(31-0) - Trigger Transfer to System Memory Set 1. */
#define tms570_FLEX_TTSMR2_TTSMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTSMR2_TTSMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTSMR2_TTSMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTSMS3---------------------*/
/* field: TTSMS1(31-0) - Trigger Transfer to System Memory Set 1. */
#define tms570_FLEX_TTSMS3_TTSMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTSMS3_TTSMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTSMS3_TTSMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTSMR3---------------------*/
/* field: TTSMS1(31-0) - Trigger Transfer to System Memory Set 1. */
#define tms570_FLEX_TTSMR3_TTSMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTSMR3_TTSMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTSMR3_TTSMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTSMS4---------------------*/
/* field: TTSMS1(31-0) - Trigger Transfer to System Memory Set 1. */
#define tms570_FLEX_TTSMS4_TTSMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTSMS4_TTSMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTSMS4_TTSMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTSMR4---------------------*/
/* field: TTSMS1(31-0) - Trigger Transfer to System Memory Set 1. */
#define tms570_FLEX_TTSMR4_TTSMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTSMR4_TTSMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTSMR4_TTSMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTCCS1---------------------*/
/* field: TTCCS1(31-0) - Trigger Transfer to Communication Controller Set 1. */
#define tms570_FLEX_TTCCS1_TTCCS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTCCS1_TTCCS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTCCS1_TTCCS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTCCR1---------------------*/
/* field: TTCCS1(31-0) - Trigger Transfer to Communication Controller Set 1. */
#define tms570_FLEX_TTCCR1_TTCCS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTCCR1_TTCCS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTCCR1_TTCCS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTCCS2---------------------*/
/* field: TTCCS1(31-0) - Trigger Transfer to Communication Controller Set 1. */
#define tms570_FLEX_TTCCS2_TTCCS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTCCS2_TTCCS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTCCS2_TTCCS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTCCR2---------------------*/
/* field: TTCCS1(31-0) - Trigger Transfer to Communication Controller Set 1. */
#define tms570_FLEX_TTCCR2_TTCCS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTCCR2_TTCCS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTCCR2_TTCCS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTCCS3---------------------*/
/* field: TTCCS1(31-0) - Trigger Transfer to Communication Controller Set 1. */
#define tms570_FLEX_TTCCS3_TTCCS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTCCS3_TTCCS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTCCS3_TTCCS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTCCR3---------------------*/
/* field: TTCCS1(31-0) - Trigger Transfer to Communication Controller Set 1. */
#define tms570_FLEX_TTCCR3_TTCCS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTCCR3_TTCCS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTCCR3_TTCCS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTCCS4---------------------*/
/* field: TTCCS1(31-0) - Trigger Transfer to Communication Controller Set 1. */
#define tms570_FLEX_TTCCS4_TTCCS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTCCS4_TTCCS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTCCS4_TTCCS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_TTCCR4---------------------*/
/* field: TTCCS1(31-0) - Trigger Transfer to Communication Controller Set 1. */
#define tms570_FLEX_TTCCR4_TTCCS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TTCCR4_TTCCS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TTCCR4_TTCCS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_ETESMS1--------------------*/
/* field: ETESMS1(31-0) - Enable Transfer on Event to System Memory Set 1. */
#define tms570_FLEX_ETESMS1_ETESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_ETESMS1_ETESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_ETESMS1_ETESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_ETESMR1--------------------*/
/* field: ETESMS1(31-0) - Enable Transfer on Event to System Memory Set 1. */
#define tms570_FLEX_ETESMR1_ETESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_ETESMR1_ETESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_ETESMR1_ETESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_ETESMS2--------------------*/
/* field: ETESMS1(31-0) - Enable Transfer on Event to System Memory Set 1. */
#define tms570_FLEX_ETESMS2_ETESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_ETESMS2_ETESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_ETESMS2_ETESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_ETESMR2--------------------*/
/* field: ETESMS1(31-0) - message buffers 0 to 31. */
#define tms570_FLEX_ETESMR2_ETESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_ETESMR2_ETESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_ETESMR2_ETESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_ETESMS3--------------------*/
/* field: ETESMS1(31-0) - Enable Transfer on Event to System Memory Set 1. */
#define tms570_FLEX_ETESMS3_ETESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_ETESMS3_ETESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_ETESMS3_ETESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_ETESMR3--------------------*/
/* field: ETESMS1(31-0) - Enable Transfer on Event to System Memory Set 1. */
#define tms570_FLEX_ETESMR3_ETESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_ETESMR3_ETESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_ETESMR3_ETESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_ETESMS4--------------------*/
/* field: ETESMS1(31-0) - Enable Transfer on Event to System Memory Set 1. */
#define tms570_FLEX_ETESMS4_ETESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_ETESMS4_ETESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_ETESMS4_ETESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_ETESMR4--------------------*/
/* field: ETESMS1(31-0) - message buffers 0 to 31. */
#define tms570_FLEX_ETESMR4_ETESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_ETESMR4_ETESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_ETESMR4_ETESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_CESMS1---------------------*/
/* field: CESMS1(31-0) - Clear on Event to System Memory Set 1. */
#define tms570_FLEX_CESMS1_CESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_CESMS1_CESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_CESMS1_CESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_CESMR1---------------------*/
/* field: CESMS1(31-0) - Clear on Event to System Memory Set 1. */
#define tms570_FLEX_CESMR1_CESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_CESMR1_CESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_CESMR1_CESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_CESMS2---------------------*/
/* field: CESMS1(31-0) - Clear on Event to System Memory Set 1. */
#define tms570_FLEX_CESMS2_CESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_CESMS2_CESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_CESMS2_CESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_CESMR2---------------------*/
/* field: CESMS1(31-0) - Clear on Event to System Memory Set 1. */
#define tms570_FLEX_CESMR2_CESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_CESMR2_CESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_CESMR2_CESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_CESMS3---------------------*/
/* field: CESMS1(31-0) - Clear on Event to System Memory Set 1. */
#define tms570_FLEX_CESMS3_CESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_CESMS3_CESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_CESMS3_CESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_CESMR3---------------------*/
/* field: CESMS1(31-0) - CESMS1(31-0) */
#define tms570_FLEX_CESMR3_CESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_CESMR3_CESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_CESMR3_CESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_CESMS4---------------------*/
/* field: CESMS1(31-0) - Clear on Event to System Memory Set 1. */
#define tms570_FLEX_CESMS4_CESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_CESMS4_CESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_CESMS4_CESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_FLEX_CESMR4---------------------*/
/* field: CESMS1(31-0) - Clear on Event to System Memory Set 1. */
#define tms570_FLEX_CESMR4_CESMS1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_CESMR4_CESMS1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_CESMR4_CESMS1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TSMIES1--------------------*/
/* field: TTSMIES1(31-0) - Transfer to System Memory Interrupt Enable Set 1. */
#define tms570_FLEX_TSMIES1_TTSMIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TSMIES1_TTSMIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TSMIES1_TTSMIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TSMIER1--------------------*/
/* field: TTSMIES1(31-0) - Transfer to System Memory Interrupt Enable Set 1. */
#define tms570_FLEX_TSMIER1_TTSMIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TSMIER1_TTSMIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TSMIER1_TTSMIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TSMIES2--------------------*/
/* field: TTSMIES1(31-0) - Transfer to System Memory Interrupt Enable Set 1. */
#define tms570_FLEX_TSMIES2_TTSMIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TSMIES2_TTSMIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TSMIES2_TTSMIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TSMIER2--------------------*/
/* field: TTSMIES1(31-0) - Transfer to System Memory Interrupt Enable Set 1. */
#define tms570_FLEX_TSMIER2_TTSMIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TSMIER2_TTSMIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TSMIER2_TTSMIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TSMIES3--------------------*/
/* field: TTSMIES1(31-0) - Transfer to System Memory Interrupt Enable Set 1. */
#define tms570_FLEX_TSMIES3_TTSMIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TSMIES3_TTSMIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TSMIES3_TTSMIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TSMIER3--------------------*/
/* field: TTSMIES1(31-0) - Transfer to System Memory Interrupt Enable Set 1. */
#define tms570_FLEX_TSMIER3_TTSMIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TSMIER3_TTSMIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TSMIER3_TTSMIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TSMIES4--------------------*/
/* field: TTSMIES1(31-0) - Transfer to System Memory Interrupt Enable Set 1. */
#define tms570_FLEX_TSMIES4_TTSMIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TSMIES4_TTSMIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TSMIES4_TTSMIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TSMIER4--------------------*/
/* field: TTSMIES1(31-0) - Transfer to System Memory Interrupt Enable Set 1. */
#define tms570_FLEX_TSMIER4_TTSMIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TSMIER4_TTSMIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TSMIER4_TTSMIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TCCIES1--------------------*/
/* field: TCCIES1(31-0) - Transfer to Communication Controller Interrupt Enable Set 1. */
#define tms570_FLEX_TCCIES1_TCCIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TCCIES1_TCCIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TCCIES1_TCCIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TCCIER1--------------------*/
/* field: TCCIES1(31-0) - Transfer to Communication Controller Interrupt Enable Set 1. */
#define tms570_FLEX_TCCIER1_TCCIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TCCIER1_TCCIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TCCIER1_TCCIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TCCIES2--------------------*/
/* field: TCCIES1(31-0) - Transfer to Communication Controller Interrupt Enable Set 1. */
#define tms570_FLEX_TCCIES2_TCCIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TCCIES2_TCCIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TCCIES2_TCCIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TCCIER2--------------------*/
/* field: TCCIES1(31-0) - to message buffers 0 to 31. */
#define tms570_FLEX_TCCIER2_TCCIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TCCIER2_TCCIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TCCIER2_TCCIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TCCIES3--------------------*/
/* field: TCCIES1(31-0) - Transfer to Communication Controller Interrupt Enable Set 1. */
#define tms570_FLEX_TCCIES3_TCCIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TCCIES3_TCCIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TCCIES3_TCCIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TCCIER3--------------------*/
/* field: TCCIES1(31-0) - Transfer to Communication Controller Interrupt Enable Set 1. */
#define tms570_FLEX_TCCIER3_TCCIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TCCIER3_TCCIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TCCIER3_TCCIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TCCIES4--------------------*/
/* field: TCCIES1(31-0) - Transfer to Communication Controller Interrupt Enable Set 1. */
#define tms570_FLEX_TCCIES4_TCCIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TCCIES4_TCCIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TCCIES4_TCCIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_FLEX_TCCIER4--------------------*/
/* field: TCCIES1(31-0) - Transfer to Communication Controller Interrupt Enable Set 1. */
#define tms570_FLEX_TCCIER4_TCCIES1(31-0)(val) BSP_FLD32(val,0, 31)
#define tms570_FLEX_TCCIER4_TCCIES1(31-0)_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_FLEX_TCCIER4_TCCIES1(31-0)_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)



#endif /* LIBBSP_ARM_tms570_FLEX.H */
