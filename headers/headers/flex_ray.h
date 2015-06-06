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
#ifndef LIBBSP_ARM_tms570_FLEX_RAY
#define LIBBSP_ARM_tms570_FLEX_RAY

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
} tms570_flex_ray_t;


/*--------------------TMS570_FLEX_RAYGSN0--------------------*/
/* field: Data_A - Data_A(15-0) */
#define TMS570_FLEX_RAY_GSN0_Data_A(val) BSP_FLD32(val,16, 31)
#define TMS570_FLEX_RAY_GSN0_Data_A_GET(reg) BSP_FLD32GET(reg,16, 31)
#define TMS570_FLEX_RAY_GSN0_Data_A_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: Data_B - (complement of Data_A(15-0)) */
#define TMS570_FLEX_RAY_GSN0_Data_B(val) BSP_FLD32(val,0, 15)
#define TMS570_FLEX_RAY_GSN0_Data_B_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_FLEX_RAY_GSN0_Data_B_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------TMS570_FLEX_RAYGSN1--------------------*/
/* field: Data_C - Data_C(15-0) */
#define TMS570_FLEX_RAY_GSN1_Data_C(val) BSP_FLD32(val,16, 31)
#define TMS570_FLEX_RAY_GSN1_Data_C_GET(reg) BSP_FLD32GET(reg,16, 31)
#define TMS570_FLEX_RAY_GSN1_Data_C_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: Data_D - (complement of Data_C(15-0)) */
#define TMS570_FLEX_RAY_GSN1_Data_D(val) BSP_FLD32(val,0, 15)
#define TMS570_FLEX_RAY_GSN1_Data_D_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_FLEX_RAY_GSN1_Data_D_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------TMS570_FLEX_RAYGCS---------------------*/
/* field: ENDVBM - Endianness Correction on VBusp Master */
#define TMS570_FLEX_RAY_GCS_ENDVBM BSP_FLD32(31)

/* field: ENDVBS - Endianness correction on VBusp Slave */
#define TMS570_FLEX_RAY_GCS_ENDVBS BSP_FLD32(30)

/* field: ENDRx - Endianness Correction for No (header or payload) Data Sink Access */
#define TMS570_FLEX_RAY_GCS_ENDRx(val) BSP_FLD32(val,28, 29)
#define TMS570_FLEX_RAY_GCS_ENDRx_GET(reg) BSP_FLD32GET(reg,28, 29)
#define TMS570_FLEX_RAY_GCS_ENDRx_SET(reg,val) BSP_FLD32SET(reg, val,28, 29)

/* field: ENDHx - Endianness Correction for Header */
#define TMS570_FLEX_RAY_GCS_ENDHx(val) BSP_FLD32(val,26, 27)
#define TMS570_FLEX_RAY_GCS_ENDHx_GET(reg) BSP_FLD32GET(reg,26, 27)
#define TMS570_FLEX_RAY_GCS_ENDHx_SET(reg,val) BSP_FLD32SET(reg, val,26, 27)

/* field: ENDPx - Endianness Correction for Payload */
#define TMS570_FLEX_RAY_GCS_ENDPx(val) BSP_FLD32(val,24, 25)
#define TMS570_FLEX_RAY_GCS_ENDPx_GET(reg) BSP_FLD32GET(reg,24, 25)
#define TMS570_FLEX_RAY_GCS_ENDPx_SET(reg,val) BSP_FLD32SET(reg, val,24, 25)

/* field: PRIO - Transfer Priority */
#define TMS570_FLEX_RAY_GCS_PRIO BSP_FLD32(21)

/* field: PEFT - Parity for Test */
#define TMS570_FLEX_RAY_GCS_PEFT BSP_FLD32(20)

/* field: PELx - Parity Lock */
#define TMS570_FLEX_RAY_GCS_PELx(val) BSP_FLD32(val,16, 19)
#define TMS570_FLEX_RAY_GCS_PELx_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_FLEX_RAY_GCS_PELx_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: CETESM - Clear ETESM Register */
#define TMS570_FLEX_RAY_GCS_CETESM BSP_FLD32(14)

/* field: CTTCC - Clear TTCC Register */
#define TMS570_FLEX_RAY_GCS_CTTCC BSP_FLD32(13)

/* field: CTTSM - Clear TTSM Register */
#define TMS570_FLEX_RAY_GCS_CTTSM BSP_FLD32(12)

/* field: ETSM - Enable Transfer Status Mirrored */
#define TMS570_FLEX_RAY_GCS_ETSM BSP_FLD32(8)

/* field: SILE - Status Interrupt Line Enable */
#define TMS570_FLEX_RAY_GCS_SILE BSP_FLD32(5)

/* field: EILE - Error Interrupt Line Enable */
#define TMS570_FLEX_RAY_GCS_EILE BSP_FLD32(4)

/* field: TUH - Transfer Unit Halted */
#define TMS570_FLEX_RAY_GCS_TUH BSP_FLD32(1)

/* field: TUE - Transfer Unit Enabled */
#define TMS570_FLEX_RAY_GCS_TUE BSP_FLD32(0)


/*---------------------TMS570_FLEX_RAYGCR---------------------*/
/* field: ENDVBM - Endianness Correction on VBusp Master */
#define TMS570_FLEX_RAY_GCR_ENDVBM BSP_FLD32(31)

/* field: ENDVBS - Endianness correction on VBusp Slave */
#define TMS570_FLEX_RAY_GCR_ENDVBS BSP_FLD32(30)

/* field: ENDRx - Endianness Correction for No (header or payload) Data Sink Access */
#define TMS570_FLEX_RAY_GCR_ENDRx(val) BSP_FLD32(val,28, 29)
#define TMS570_FLEX_RAY_GCR_ENDRx_GET(reg) BSP_FLD32GET(reg,28, 29)
#define TMS570_FLEX_RAY_GCR_ENDRx_SET(reg,val) BSP_FLD32SET(reg, val,28, 29)

/* field: ENDHx - Endianness Correction for Header */
#define TMS570_FLEX_RAY_GCR_ENDHx(val) BSP_FLD32(val,26, 27)
#define TMS570_FLEX_RAY_GCR_ENDHx_GET(reg) BSP_FLD32GET(reg,26, 27)
#define TMS570_FLEX_RAY_GCR_ENDHx_SET(reg,val) BSP_FLD32SET(reg, val,26, 27)

/* field: ENDPx - Endianness Correction for Payload */
#define TMS570_FLEX_RAY_GCR_ENDPx(val) BSP_FLD32(val,24, 25)
#define TMS570_FLEX_RAY_GCR_ENDPx_GET(reg) BSP_FLD32GET(reg,24, 25)
#define TMS570_FLEX_RAY_GCR_ENDPx_SET(reg,val) BSP_FLD32SET(reg, val,24, 25)

/* field: PRIO - Transfer Priority */
#define TMS570_FLEX_RAY_GCR_PRIO BSP_FLD32(21)

/* field: PEFT - Parity for Test */
#define TMS570_FLEX_RAY_GCR_PEFT BSP_FLD32(20)

/* field: PELx - Parity Lock */
#define TMS570_FLEX_RAY_GCR_PELx(val) BSP_FLD32(val,16, 19)
#define TMS570_FLEX_RAY_GCR_PELx_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_FLEX_RAY_GCR_PELx_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: CETESM - Clear ETESM Register */
#define TMS570_FLEX_RAY_GCR_CETESM BSP_FLD32(14)

/* field: CTTCC - Clear TTCC Register */
#define TMS570_FLEX_RAY_GCR_CTTCC BSP_FLD32(13)

/* field: CTTSM - Clear TTSM Register */
#define TMS570_FLEX_RAY_GCR_CTTSM BSP_FLD32(12)

/* field: ETSM - Enable Transfer Status Mirrored */
#define TMS570_FLEX_RAY_GCR_ETSM BSP_FLD32(8)

/* field: SILE - Status Interrupt Line Enable */
#define TMS570_FLEX_RAY_GCR_SILE BSP_FLD32(5)

/* field: EILE - Error Interrupt Line Enable */
#define TMS570_FLEX_RAY_GCR_EILE BSP_FLD32(4)

/* field: TUH - Transfer Unit Halted */
#define TMS570_FLEX_RAY_GCR_TUH BSP_FLD32(1)

/* field: TUE - Transfer Unit Enabled */
#define TMS570_FLEX_RAY_GCR_TUE BSP_FLD32(0)


/*--------------------TMS570_FLEX_RAYTSCB--------------------*/
/* field: TSMS - Transfer State Machine Status */
#define TMS570_FLEX_RAY_TSCB_TSMS(val) BSP_FLD32(val,16, 20)
#define TMS570_FLEX_RAY_TSCB_TSMS_GET(reg) BSP_FLD32GET(reg,16, 20)
#define TMS570_FLEX_RAY_TSCB_TSMS_SET(reg,val) BSP_FLD32SET(reg, val,16, 20)

/* field: STUH - Status of Transfer Unit State Machine for Halt Detection */
#define TMS570_FLEX_RAY_TSCB_STUH BSP_FLD32(12)

/* field: IDLE - Detects Transfer State Machine State IDLE */
#define TMS570_FLEX_RAY_TSCB_IDLE BSP_FLD32(8)

/* field: BN - Buffer Number */
#define TMS570_FLEX_RAY_TSCB_BN(val) BSP_FLD32(val,0, 6)
#define TMS570_FLEX_RAY_TSCB_BN_GET(reg) BSP_FLD32GET(reg,0, 6)
#define TMS570_FLEX_RAY_TSCB_BN_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)


/*--------------------TMS570_FLEX_RAYLTBCC--------------------*/
/* field: BN - Buffer number. */
#define TMS570_FLEX_RAY_LTBCC_BN(val) BSP_FLD32(val,0, 6)
#define TMS570_FLEX_RAY_LTBCC_BN_GET(reg) BSP_FLD32GET(reg,0, 6)
#define TMS570_FLEX_RAY_LTBCC_BN_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)


/*--------------------TMS570_FLEX_RAYLTBSM--------------------*/
/* field: BN - Buffer number. */
#define TMS570_FLEX_RAY_LTBSM_BN(val) BSP_FLD32(val,0, 6)
#define TMS570_FLEX_RAY_LTBSM_BN_GET(reg) BSP_FLD32GET(reg,0, 6)
#define TMS570_FLEX_RAY_LTBSM_BN_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)


/*---------------------TMS570_FLEX_RAYTBA---------------------*/
/* field: TBA - Transfer Base Address. */
#define TMS570_FLEX_RAY_TBA_TBA(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TBA_TBA_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TBA_TBA_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYNTBA--------------------*/
/* field: nTBA - nTBA(31-0) */
#define TMS570_FLEX_RAY_NTBA_nTBA(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_NTBA_nTBA_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_NTBA_nTBA_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYBAMS--------------------*/
/* field: BAMS - Base Address of Mirrored Status32-bit base pointer, 2 LSB are not significant (32-bit */
#define TMS570_FLEX_RAY_BAMS_BAMS(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_BAMS_BAMS_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_BAMS_BAMS_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYSAMP--------------------*/
/* field: SAMP - Start Address Memory Protection. */
#define TMS570_FLEX_RAY_SAMP_SAMP(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_SAMP_SAMP_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_SAMP_SAMP_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYEAMP--------------------*/
/* field: EAMP - End Address Memory Protection. */
#define TMS570_FLEX_RAY_EAMP_EAMP(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_EAMP_EAMP_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_EAMP_EAMP_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYTSMO1--------------------*/
/* field: TSMO1 - Transfer to System Memory Occurred Register 1. */
#define TMS570_FLEX_RAY_TSMO1_TSMO1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TSMO1_TSMO1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TSMO1_TSMO1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYTSMO2--------------------*/
/* field: TSMO1 - Transfer to System Memory Occurred Register 1. */
#define TMS570_FLEX_RAY_TSMO2_TSMO1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TSMO2_TSMO1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TSMO2_TSMO1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYTSMO3--------------------*/
/* field: TSMO1 - Transfer to System Memory Occurred Register 1. */
#define TMS570_FLEX_RAY_TSMO3_TSMO1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TSMO3_TSMO1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TSMO3_TSMO1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYTSMO4--------------------*/
/* field: TSMO1 - Transfer to System Memory Occurred Register 1. */
#define TMS570_FLEX_RAY_TSMO4_TSMO1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TSMO4_TSMO1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TSMO4_TSMO1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYTCCO1--------------------*/
/* field: TCCO1 - Transfer to Communication Controller Occurred Register 1. */
#define TMS570_FLEX_RAY_TCCO1_TCCO1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TCCO1_TCCO1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TCCO1_TCCO1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYTCCO2--------------------*/
/* field: TCCO1 - Transfer to Communication Controller Occurred Register 1. */
#define TMS570_FLEX_RAY_TCCO2_TCCO1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TCCO2_TCCO1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TCCO2_TCCO1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYTCCO3--------------------*/
/* field: TCCO1 - Transfer to Communication Controller Occurred Register 1. */
#define TMS570_FLEX_RAY_TCCO3_TCCO1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TCCO3_TCCO1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TCCO3_TCCO1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYTCCO4--------------------*/
/* field: TCCO1 - Transfer to Communication Controller Occurred Register 1. */
#define TMS570_FLEX_RAY_TCCO4_TCCO1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TCCO4_TCCO1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TCCO4_TCCO1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_FLEX_RAYTOOFF--------------------*/
/* field: TDIR - Transfer Direction. */
#define TMS570_FLEX_RAY_TOOFF_TDIR BSP_FLD32(8)

/* field: OFF - Offset Vector */
#define TMS570_FLEX_RAY_TOOFF_OFF(val) BSP_FLD32(val,0, 7)
#define TMS570_FLEX_RAY_TOOFF_OFF_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_FLEX_RAY_TOOFF_OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*--------------------TMS570_FLEX_RAYPEADR--------------------*/
/* field: ADR - Address of failing TCR location. */
#define TMS570_FLEX_RAY_PEADR_ADR(val) BSP_FLD32(val,0, 8)
#define TMS570_FLEX_RAY_PEADR_ADR_GET(reg) BSP_FLD32GET(reg,0, 8)
#define TMS570_FLEX_RAY_PEADR_ADR_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*--------------------TMS570_FLEX_RAYTEIF--------------------*/
/* field: MPV - Memory Protection Violation. */
#define TMS570_FLEX_RAY_TEIF_MPV BSP_FLD32(17)

/* field: PE - Parity Error. The flag signals a parity error to the host. */
#define TMS570_FLEX_RAY_TEIF_PE BSP_FLD32(16)

/* field: RSTAT - Status of VBUS on read transfers. */
#define TMS570_FLEX_RAY_TEIF_RSTAT(val) BSP_FLD32(val,8, 10)
#define TMS570_FLEX_RAY_TEIF_RSTAT_GET(reg) BSP_FLD32GET(reg,8, 10)
#define TMS570_FLEX_RAY_TEIF_RSTAT_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: WSTAT - Status of VBUS on write transfers. */
#define TMS570_FLEX_RAY_TEIF_WSTAT(val) BSP_FLD32(val,4, 6)
#define TMS570_FLEX_RAY_TEIF_WSTAT_GET(reg) BSP_FLD32GET(reg,4, 6)
#define TMS570_FLEX_RAY_TEIF_WSTAT_SET(reg,val) BSP_FLD32SET(reg, val,4, 6)

/* field: TNR - Transfer Not Ready. */
#define TMS570_FLEX_RAY_TEIF_TNR BSP_FLD32(1)

/* field: FAC - Forbidden Access. */
#define TMS570_FLEX_RAY_TEIF_FAC BSP_FLD32(0)


/*-------------------TMS570_FLEX_RAYTEIRES-------------------*/
/* field: RSTATE - Read Error Interrupt Generation (interrupt generation on VBUS read transfer errors). */
#define TMS570_FLEX_RAY_TEIRES_RSTATE(val) BSP_FLD32(val,8, 10)
#define TMS570_FLEX_RAY_TEIRES_RSTATE_GET(reg) BSP_FLD32GET(reg,8, 10)
#define TMS570_FLEX_RAY_TEIRES_RSTATE_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: WSTATE - Write Error Interrupt Generation (interrupt generation on VBUS write transfer errors). */
#define TMS570_FLEX_RAY_TEIRES_WSTATE(val) BSP_FLD32(val,4, 6)
#define TMS570_FLEX_RAY_TEIRES_WSTATE_GET(reg) BSP_FLD32GET(reg,4, 6)
#define TMS570_FLEX_RAY_TEIRES_WSTATE_SET(reg,val) BSP_FLD32SET(reg, val,4, 6)

/* field: TNRE - Transfer Not Ready Enable. */
#define TMS570_FLEX_RAY_TEIRES_TNRE BSP_FLD32(1)

/* field: FACE - Forbidden Access Enable. */
#define TMS570_FLEX_RAY_TEIRES_FACE BSP_FLD32(0)


/*-------------------TMS570_FLEX_RAYTEIRER-------------------*/
/* field: RSTATE - Read Error Interrupt Generation (interrupt generation on VBUS read transfer errors). */
#define TMS570_FLEX_RAY_TEIRER_RSTATE(val) BSP_FLD32(val,8, 10)
#define TMS570_FLEX_RAY_TEIRER_RSTATE_GET(reg) BSP_FLD32GET(reg,8, 10)
#define TMS570_FLEX_RAY_TEIRER_RSTATE_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: WSTATE - Write Error Interrupt Generation (interrupt generation on VBUS write transfer errors). */
#define TMS570_FLEX_RAY_TEIRER_WSTATE(val) BSP_FLD32(val,4, 6)
#define TMS570_FLEX_RAY_TEIRER_WSTATE_GET(reg) BSP_FLD32GET(reg,4, 6)
#define TMS570_FLEX_RAY_TEIRER_WSTATE_SET(reg,val) BSP_FLD32SET(reg, val,4, 6)

/* field: TNRE - Transfer Not Ready Enable. */
#define TMS570_FLEX_RAY_TEIRER_TNRE BSP_FLD32(1)

/* field: FACE - Forbidden Access Enable. */
#define TMS570_FLEX_RAY_TEIRER_FACE BSP_FLD32(0)


/*-------------------TMS570_FLEX_RAYTTSMS1-------------------*/
/* field: TTSMS1 - Trigger Transfer to System Memory Set 1. */
#define TMS570_FLEX_RAY_TTSMS1_TTSMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTSMS1_TTSMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTSMS1_TTSMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTSMR1-------------------*/
/* field: TTSMS1 - Trigger Transfer to System Memory Set 1. */
#define TMS570_FLEX_RAY_TTSMR1_TTSMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTSMR1_TTSMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTSMR1_TTSMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTSMS2-------------------*/
/* field: TTSMS1 - Trigger Transfer to System Memory Set 1. */
#define TMS570_FLEX_RAY_TTSMS2_TTSMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTSMS2_TTSMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTSMS2_TTSMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTSMR2-------------------*/
/* field: TTSMS1 - Trigger Transfer to System Memory Set 1. */
#define TMS570_FLEX_RAY_TTSMR2_TTSMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTSMR2_TTSMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTSMR2_TTSMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTSMS3-------------------*/
/* field: TTSMS1 - Trigger Transfer to System Memory Set 1. */
#define TMS570_FLEX_RAY_TTSMS3_TTSMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTSMS3_TTSMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTSMS3_TTSMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTSMR3-------------------*/
/* field: TTSMS1 - Trigger Transfer to System Memory Set 1. */
#define TMS570_FLEX_RAY_TTSMR3_TTSMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTSMR3_TTSMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTSMR3_TTSMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTSMS4-------------------*/
/* field: TTSMS1 - Trigger Transfer to System Memory Set 1. */
#define TMS570_FLEX_RAY_TTSMS4_TTSMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTSMS4_TTSMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTSMS4_TTSMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTSMR4-------------------*/
/* field: TTSMS1 - Trigger Transfer to System Memory Set 1. */
#define TMS570_FLEX_RAY_TTSMR4_TTSMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTSMR4_TTSMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTSMR4_TTSMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTCCS1-------------------*/
/* field: TTCCS1 - Trigger Transfer to Communication Controller Set 1. */
#define TMS570_FLEX_RAY_TTCCS1_TTCCS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTCCS1_TTCCS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTCCS1_TTCCS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTCCR1-------------------*/
/* field: TTCCS1 - Trigger Transfer to Communication Controller Set 1. */
#define TMS570_FLEX_RAY_TTCCR1_TTCCS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTCCR1_TTCCS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTCCR1_TTCCS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTCCS2-------------------*/
/* field: TTCCS1 - Trigger Transfer to Communication Controller Set 1. */
#define TMS570_FLEX_RAY_TTCCS2_TTCCS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTCCS2_TTCCS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTCCS2_TTCCS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTCCR2-------------------*/
/* field: TTCCS1 - Trigger Transfer to Communication Controller Set 1. */
#define TMS570_FLEX_RAY_TTCCR2_TTCCS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTCCR2_TTCCS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTCCR2_TTCCS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTCCS3-------------------*/
/* field: TTCCS1 - Trigger Transfer to Communication Controller Set 1. */
#define TMS570_FLEX_RAY_TTCCS3_TTCCS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTCCS3_TTCCS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTCCS3_TTCCS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTCCR3-------------------*/
/* field: TTCCS1 - Trigger Transfer to Communication Controller Set 1. */
#define TMS570_FLEX_RAY_TTCCR3_TTCCS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTCCR3_TTCCS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTCCR3_TTCCS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTCCS4-------------------*/
/* field: TTCCS1 - Trigger Transfer to Communication Controller Set 1. */
#define TMS570_FLEX_RAY_TTCCS4_TTCCS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTCCS4_TTCCS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTCCS4_TTCCS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTTCCR4-------------------*/
/* field: TTCCS1 - Trigger Transfer to Communication Controller Set 1. */
#define TMS570_FLEX_RAY_TTCCR4_TTCCS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TTCCR4_TTCCS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TTCCR4_TTCCS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYETESMS1-------------------*/
/* field: ETESMS1 - Enable Transfer on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_ETESMS1_ETESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_ETESMS1_ETESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_ETESMS1_ETESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYETESMR1-------------------*/
/* field: ETESMS1 - Enable Transfer on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_ETESMR1_ETESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_ETESMR1_ETESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_ETESMR1_ETESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYETESMS2-------------------*/
/* field: ETESMS1 - Enable Transfer on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_ETESMS2_ETESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_ETESMS2_ETESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_ETESMS2_ETESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYETESMR2-------------------*/
/* field: ETESMS1 - message buffers 0 to 31. */
#define TMS570_FLEX_RAY_ETESMR2_ETESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_ETESMR2_ETESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_ETESMR2_ETESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYETESMS3-------------------*/
/* field: ETESMS1 - Enable Transfer on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_ETESMS3_ETESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_ETESMS3_ETESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_ETESMS3_ETESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYETESMR3-------------------*/
/* field: ETESMS1 - Enable Transfer on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_ETESMR3_ETESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_ETESMR3_ETESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_ETESMR3_ETESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYETESMS4-------------------*/
/* field: ETESMS1 - Enable Transfer on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_ETESMS4_ETESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_ETESMS4_ETESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_ETESMS4_ETESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYETESMR4-------------------*/
/* field: ETESMS1 - message buffers 0 to 31. */
#define TMS570_FLEX_RAY_ETESMR4_ETESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_ETESMR4_ETESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_ETESMR4_ETESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYCESMS1-------------------*/
/* field: CESMS1 - Clear on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_CESMS1_CESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_CESMS1_CESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_CESMS1_CESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYCESMR1-------------------*/
/* field: CESMS1 - Clear on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_CESMR1_CESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_CESMR1_CESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_CESMR1_CESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYCESMS2-------------------*/
/* field: CESMS1 - Clear on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_CESMS2_CESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_CESMS2_CESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_CESMS2_CESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYCESMR2-------------------*/
/* field: CESMS1 - Clear on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_CESMR2_CESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_CESMR2_CESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_CESMR2_CESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYCESMS3-------------------*/
/* field: CESMS1 - Clear on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_CESMS3_CESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_CESMS3_CESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_CESMS3_CESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYCESMR3-------------------*/
/* field: CESMS1 - CESMS1(31-0) */
#define TMS570_FLEX_RAY_CESMR3_CESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_CESMR3_CESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_CESMR3_CESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYCESMS4-------------------*/
/* field: CESMS1 - Clear on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_CESMS4_CESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_CESMS4_CESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_CESMS4_CESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYCESMR4-------------------*/
/* field: CESMS1 - Clear on Event to System Memory Set 1. */
#define TMS570_FLEX_RAY_CESMR4_CESMS1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_CESMR4_CESMS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_CESMR4_CESMS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTSMIES1-------------------*/
/* field: TTSMIES1 - Transfer to System Memory Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TSMIES1_TTSMIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TSMIES1_TTSMIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TSMIES1_TTSMIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTSMIER1-------------------*/
/* field: TTSMIES1 - Transfer to System Memory Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TSMIER1_TTSMIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TSMIER1_TTSMIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TSMIER1_TTSMIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTSMIES2-------------------*/
/* field: TTSMIES1 - Transfer to System Memory Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TSMIES2_TTSMIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TSMIES2_TTSMIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TSMIES2_TTSMIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTSMIER2-------------------*/
/* field: TTSMIES1 - Transfer to System Memory Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TSMIER2_TTSMIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TSMIER2_TTSMIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TSMIER2_TTSMIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTSMIES3-------------------*/
/* field: TTSMIES1 - Transfer to System Memory Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TSMIES3_TTSMIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TSMIES3_TTSMIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TSMIES3_TTSMIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTSMIER3-------------------*/
/* field: TTSMIES1 - Transfer to System Memory Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TSMIER3_TTSMIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TSMIER3_TTSMIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TSMIER3_TTSMIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTSMIES4-------------------*/
/* field: TTSMIES1 - Transfer to System Memory Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TSMIES4_TTSMIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TSMIES4_TTSMIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TSMIES4_TTSMIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTSMIER4-------------------*/
/* field: TTSMIES1 - Transfer to System Memory Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TSMIER4_TTSMIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TSMIER4_TTSMIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TSMIER4_TTSMIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTCCIES1-------------------*/
/* field: TCCIES1 - Transfer to Communication Controller Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TCCIES1_TCCIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TCCIES1_TCCIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TCCIES1_TCCIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTCCIER1-------------------*/
/* field: TCCIES1 - Transfer to Communication Controller Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TCCIER1_TCCIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TCCIER1_TCCIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TCCIER1_TCCIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTCCIES2-------------------*/
/* field: TCCIES1 - Transfer to Communication Controller Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TCCIES2_TCCIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TCCIES2_TCCIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TCCIES2_TCCIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTCCIER2-------------------*/
/* field: TCCIES1 - to message buffers 0 to 31. */
#define TMS570_FLEX_RAY_TCCIER2_TCCIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TCCIER2_TCCIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TCCIER2_TCCIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTCCIES3-------------------*/
/* field: TCCIES1 - Transfer to Communication Controller Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TCCIES3_TCCIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TCCIES3_TCCIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TCCIES3_TCCIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTCCIER3-------------------*/
/* field: TCCIES1 - Transfer to Communication Controller Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TCCIER3_TCCIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TCCIER3_TCCIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TCCIER3_TCCIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTCCIES4-------------------*/
/* field: TCCIES1 - Transfer to Communication Controller Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TCCIES4_TCCIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TCCIES4_TCCIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TCCIES4_TCCIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_FLEX_RAYTCCIER4-------------------*/
/* field: TCCIES1 - Transfer to Communication Controller Interrupt Enable Set 1. */
#define TMS570_FLEX_RAY_TCCIER4_TCCIES1(val) BSP_FLD32(val,0, 31)
#define TMS570_FLEX_RAY_TCCIER4_TCCIES1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FLEX_RAY_TCCIER4_TCCIES1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)



#endif /* LIBBSP_ARM_tms570_FLEX_RAY */
