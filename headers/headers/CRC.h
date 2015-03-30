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
#ifndef LIBBSP_ARM_TMS570_CRC.H
#define LIBBSP_ARM_TMS570_CRC.H

typedef struct{
  ui32_t CRC_CTRL1;           /*CRC Global Control Register 1*/
  ui32_t reserved1 [4];
  ui32_t CRC_CTRL2;           /*CRC Global Control Register 2*/
  ui32_t reserved2 [4];
  ui32_t CRC_INTS;            /*CRC Interrupt Enable Set Register*/
  ui32_t reserved3 [4];
  ui32_t CRC_INTR;            /*CRC Interrupt Enable Reset Register*/
  ui32_t reserved4 [4];
  ui32_t CRC_STATUS;          /*CRC Interrupt Status Register*/
  ui32_t reserved5 [4];
  ui32_t CRC_INT_OFFS_ET_REG; /*CRC Interrupt Offset Register*/
  ui32_t reserved6 [4];
  ui32_t CRC_BUSY;            /*CRC Busy Register*/
  ui32_t reserved7 [4];
  ui32_t CRC_PCOUNT_REG1;     /*CRC Channel 1 Pattern Counter Preload Register*/
  ui32_t CRC_SCOUNT_REG1;     /*CRC Channel 1 Sector Counter Preload Register*/
  ui32_t CRC_CURSEC_REG1;     /*CRC Channel 1 Current Sector Register*/
  ui32_t CRC_WDTOPLD1;        /*CRC Channel 1 Watchdog Timeout Preload Register*/
  ui32_t CRC_BCTOPLD1;        /*CRC Channel 1 Block Complete Timeout Preload Register*/
  ui32_t reserved8 [12];
  ui32_t PSA_SIGREGL1;        /*Channel 1 PSA Signature Low Register*/
  ui32_t PSA_SIGREGH1;        /*Channel 1 PSA Signature High Register*/
  ui32_t CRC_REGL1;           /*Channel 1 CRC Value Low Register*/
  ui32_t CRC_REGH1;           /*Channel 1 CRC Value High Register*/
  ui32_t PSA_SECSIGREGL1;     /*Channel 1 PSA Sector Signature Low Register*/
  ui32_t PSA_SECSIGREGH1;     /*Channel 1 PSA Sector Signature High Register*/
  ui32_t RAW_DATAREGL1;       /*Channel 1 Raw Data Low Register*/
  ui32_t RAW_DATAREGH1;       /*Channel 1 Raw Data High Register*/
  ui32_t CRC_PCOUNT_REG2;     /*CRC Channel 2 Pattern Counter Preload Register*/
  ui32_t CRC_SCOUNT_REG2;     /*CRC Channel 2 Sector Counter Preload Register*/
  ui32_t CRC_CURSEC_REG2;     /*CRC Current Sector Register 2*/
  ui32_t CRC_WDTOPLD2;        /*CRC Channel 2 Watchdog Timeout Preload Register A*/
  ui32_t CRC_BCTOPLD2;        /*CRC Channel 2 Block Complete Timeout Preload Register B*/
  ui32_t reserved9 [12];
  ui32_t PSA_SIGREGL2;        /*Channel 2 PSA Signature Low Register*/
  ui32_t PSA_SIGREGH2;        /*Channel 2 PSA Signature High Register*/
  ui32_t CRC_REGL2;           /*Channel 2 CRC Value Low Register*/
  ui32_t CRC_REGH2;           /*Channel 2 CRC Value High Register*/
  ui32_t PSA_SECSIGREGL2;     /*Channel 2 PSA Sector Signature Low Register*/
  ui32_t PSA_SECSIGREGH2;     /*Channel 2 PSA Sector Signature High Register*/
  ui32_t RAW_DATAREGL2;       /*Channel 2 Raw Data Low Register*/
  ui32_t RAW_DATAREGH2;       /*Channel 2 Raw Data High Register*/
  ui32_t reserved10 [128];
  ui32_t CRC_BUS_SEL;         /*Data Bus Selection Register*/
} CRC_struct;

--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL1--------------------
/* field: PWDN - Power Down. */
#define TMS570_CRC_CRC_CTRL1_PWDN(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL1_PWDN_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_CTRL2--------------------
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_CTRL2_CH2_MODE_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_CTRL2_CH1_TRACEEN_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_CTRL2_CH1_MODE_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTS---------------------
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTS_CH2_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTS_CH2_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_OVERENS(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTS_CH2_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTS_CH2_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH2_CCITENS(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTS_CH2_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTS_CH1_TIMEOUTENS_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTS_CH1_UNDERENS_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_OVERENS(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTS_CH1_OVERENS_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTS_CH1_CRCFAILENS_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTS_CH1_CCITENS(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTS_CH1_CCITENS_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------------TMS570_CRCCRC_INTR---------------------
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_INTR_CH2_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_INTR_CH2_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_OVERENR(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_INTR_CH2_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_INTR_CH2_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH2_CCITENR(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_INTR_CH2_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_INTR_CH1_TIMEOUTENR_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_INTR_CH1_UNDERENR_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_CRC_INTR_CH1_OVERENR(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_INTR_CH1_OVERENR_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_INTR_CH1_CRCFAILENR_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_CRC_INTR_CH1_CCITENR(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_INTR_CH1_CCITENR_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


--------------------TMS570_CRCCRC_STATUS--------------------
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT(val) BSP_FLD32(val,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_CRC_CRC_STATUS_CH2_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_UNDER(val) BSP_FLD32(val,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg) BSP_FLD32GET(reg,11, 12)
#define TMS570_CRC_CRC_STATUS_CH2_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,11, 12)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_OVER(val) BSP_FLD32(val,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg) BSP_FLD32GET(reg,10, 11)
#define TMS570_CRC_CRC_STATUS_CH2_OVER_GET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL(val) BSP_FLD32(val,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_CRC_CRC_STATUS_CH2_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH2_CCIT(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_STATUS_CH2_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT(val) BSP_FLD32(val,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg) BSP_FLD32GET(reg,4, 5)
#define TMS570_CRC_CRC_STATUS_CH1_TIMEOUT_GET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_UNDER(val) BSP_FLD32(val,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg) BSP_FLD32GET(reg,3, 4)
#define TMS570_CRC_CRC_STATUS_CH1_UNDER_GET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_CRC_STATUS_CH1_OVER(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_STATUS_CH1_OVER_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_STATUS_CH1_CRCFAIL_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_CRC_STATUS_CH1_CCIT(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_STATUS_CH1_CCIT_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


---------------TMS570_CRCCRC_INT_OFFS_ET_REG---------------
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg,val) BSP_FLD32SET(reg, val,0, 7)


---------------------TMS570_CRCCRC_BUSY---------------------
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH2_BUSY(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CRC_BUSY_CH2_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_CRC_BUSY_CH1_BUSY(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUSY_CH1_BUSY_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)


-----------------TMS570_CRCCRC_PCOUNT_REG1-----------------
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG1-----------------
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG1-----------------
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD1-------------------
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD1-------------------
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL1-------------------
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH1-------------------
/* field: PSASIG1 - register. */
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH1_PSASIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH1--------------------
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH1_CRC1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH1-----------------
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH1_PSASECSIG1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL1------------------
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH1------------------
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH1_RAW_DATA1_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCCRC_PCOUNT_REG2-----------------
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 19)


-----------------TMS570_CRCCRC_SCOUNT_REG2-----------------
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-----------------TMS570_CRCCRC_CURSEC_REG2-----------------
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 15)


-------------------TMS570_CRCCRC_WDTOPLD2-------------------
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCCRC_BCTOPLD2-------------------
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg,val) BSP_FLD32SET(reg, val,0, 23)


-------------------TMS570_CRCPSA_SIGREGL2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGL2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCPSA_SIGREGH2-------------------
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SIGREGH2_PSASIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGL2--------------------
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGL2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


--------------------TMS570_CRCCRC_REGH2--------------------
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_CRC_REGH2_CRC2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGL2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGL2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-----------------TMS570_CRCPSA_SECSIGREGH2-----------------
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_PSA_SECSIGREGH2_PSASECSIG2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGL2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGL2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


------------------TMS570_CRCRAW_DATAREGH2------------------
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_RAW_DATAREGH2_RAW_DATA2_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_CRCCRC_BUS_SEL-------------------
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_CRC_BUS_SEL_MEn(val) BSP_FLD32(val,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_CRC_CRC_BUS_SEL_MEn_GET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn(val) BSP_FLD32(val,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg) BSP_FLD32GET(reg,1, 2)
#define TMS570_CRC_CRC_BUS_SEL_DTCMEn_GET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CRC_BUS_SEL_ITCMEn_GET(reg,val) BSP_FLD32SET(reg, val,0, 1)



#endif /* LIBBSP_ARM_TMS570_CRC.H */