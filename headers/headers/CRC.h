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
#ifndef LIBBSP_ARM_tms570_CRC
#define LIBBSP_ARM_tms570_CRC

#include <bsp/utility.h>

typedef struct{
  uint32_t CRC_CTRL0;         /*CRC Global Control Register*/
  uint8_t reserved1 [4];
  uint32_t CRC_CTRL1;         /*CRC Global Control Register 1*/
  uint8_t reserved2 [4];
  uint32_t CRC_CTRL2;         /*CRC Global Control Register 2*/
  uint8_t reserved3 [4];
  uint32_t CRC_INTS;          /*CRC Interrupt Enable Set Register*/
  uint8_t reserved4 [4];
  uint32_t CRC_INTR;          /*CRC Interrupt Enable Reset Register*/
  uint8_t reserved5 [4];
  uint32_t CRC_STATUS;        /*CRC Interrupt Status Register*/
  uint8_t reserved6 [4];
  uint32_t CRC_INT_OFFS_ET_REG;/*CRC Interrupt Offset Register*/
  uint8_t reserved7 [4];
  uint32_t CRC_BUSY;          /*CRC Busy Register*/
  uint8_t reserved8 [4];
  uint32_t CRC_PCOUNT_REG1;   /*CRC Channel 1 Pattern Counter Preload Register*/
  uint32_t CRC_SCOUNT_REG1;   /*CRC Channel 1 Sector Counter Preload Register*/
  uint32_t CRC_CURSEC_REG1;   /*CRC Channel 1 Current Sector Register*/
  uint32_t CRC_WDTOPLD1;      /*CRC Channel 1 Watchdog Timeout Preload Register*/
  uint32_t CRC_BCTOPLD1;      /*CRC Channel 1 Block Complete Timeout Preload Register*/
  uint8_t reserved9 [12];
  uint32_t PSA_SIGREGL1;      /*Channel 1 PSA Signature Low Register*/
  uint32_t PSA_SIGREGH1;      /*Channel 1 PSA Signature High Register*/
  uint32_t CRC_REGL1;         /*Channel 1 CRC Value Low Register*/
  uint32_t CRC_REGH1;         /*Channel 1 CRC Value High Register*/
  uint32_t PSA_SECSIGREGL1;   /*Channel 1 PSA Sector Signature Low Register*/
  uint32_t PSA_SECSIGREGH1;   /*Channel 1 PSA Sector Signature High Register*/
  uint32_t RAW_DATAREGL1;     /*Channel 1 Raw Data Low Register*/
  uint32_t RAW_DATAREGH1;     /*Channel 1 Raw Data High Register*/
  uint32_t CRC_PCOUNT_REG2;   /*CRC Channel 2 Pattern Counter Preload Register*/
  uint32_t CRC_SCOUNT_REG2;   /*CRC Channel 2 Sector Counter Preload Register*/
  uint32_t CRC_CURSEC_REG2;   /*CRC Current Sector Register 2*/
  uint32_t CRC_WDTOPLD2;      /*CRC Channel 2 Watchdog Timeout Preload Register A*/
  uint32_t CRC_BCTOPLD2;      /*CRC Channel 2 Block Complete Timeout Preload Register B*/
  uint8_t reserved10 [12];
  uint32_t PSA_SIGREGL2;      /*Channel 2 PSA Signature Low Register*/
  uint32_t PSA_SIGREGH2;      /*Channel 2 PSA Signature High Register*/
  uint32_t CRC_REGL2;         /*Channel 2 CRC Value Low Register*/
  uint32_t CRC_REGH2;         /*Channel 2 CRC Value High Register*/
  uint32_t PSA_SECSIGREGL2;   /*Channel 2 PSA Sector Signature Low Register*/
  uint32_t PSA_SECSIGREGH2;   /*Channel 2 PSA Sector Signature High Register*/
  uint32_t RAW_DATAREGL2;     /*Channel 2 Raw Data Low Register*/
  uint32_t RAW_DATAREGH2;     /*Channel 2 Raw Data High Register*/
  uint8_t reserved11 [128];
  uint32_t CRC_BUS_SEL;       /*Data Bus Selection Register*/
} tms570_crc_t;

/*----------------------TMS570_CRC_CTRL0----------------------*/
/* field: CH2_PSA_SWREST - Channel 2 PSA Software Reset. When set, the PSA Signature Register is reset to all zero. */
#define TMS570_CRC_CTRL0_CH2_PSA_SWREST BSP_FLD32(8)

/* field: CH1_PSA_SWREST - Channel 1 PSA Software Reset. When set, the PSA Signature Register is reset to all zero. */
#define TMS570_CRC_CTRL0_CH1_PSA_SWREST BSP_FLD32(0)


/*----------------------TMS570_CRC_CTRL1----------------------*/
/* field: PWDN - Power Down. */
#define TMS570_CRC_CTRL1_PWDN BSP_FLD32(0)


/*----------------------TMS570_CRC_CTRL2----------------------*/
/* field: CH2_MODE - Channel 2 Mode Selection */
#define TMS570_CRC_CTRL2_CH2_MODE(val) BSP_FLD32(val,8, 9)
#define TMS570_CRC_CTRL2_CH2_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_CRC_CTRL2_CH2_MODE_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: CH1_TRACEEN - Channel 1 Data Trace Enable. When set, the channel is put into data trace mode. */
#define TMS570_CRC_CTRL2_CH1_TRACEEN BSP_FLD32(4)

/* field: CH1_MODE - Channel 1 Mode Selection */
#define TMS570_CRC_CTRL2_CH1_MODE(val) BSP_FLD32(val,0, 1)
#define TMS570_CRC_CTRL2_CH1_MODE_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_CRC_CTRL2_CH1_MODE_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*----------------------TMS570_CRC_INTS----------------------*/
/* field: CH2_TIMEOUTENS - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_INTS_CH2_TIMEOUTENS BSP_FLD32(12)

/* field: CH2_UNDERENS - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_INTS_CH2_UNDERENS BSP_FLD32(11)

/* field: CH2_OVERENS - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_INTS_CH2_OVERENS BSP_FLD32(10)

/* field: CH2_CRCFAILENS - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_INTS_CH2_CRCFAILENS BSP_FLD32(9)

/* field: CH2_CCITENS - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_INTS_CH2_CCITENS BSP_FLD32(8)

/* field: CH1_TIMEOUTENS - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_INTS_CH1_TIMEOUTENS BSP_FLD32(4)

/* field: CH1_UNDERENS - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_INTS_CH1_UNDERENS BSP_FLD32(3)

/* field: CH1_OVERENS - CH1_OVERENS Channel 1 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_INTS_CH1_OVERENS BSP_FLD32(2)

/* field: CH1_CRCFAILENS - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_INTS_CH1_CRCFAILENS BSP_FLD32(1)

/* field: CH1_CCITENS - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_INTS_CH1_CCITENS BSP_FLD32(0)


/*----------------------TMS570_CRC_INTR----------------------*/
/* field: CH2_TIMEOUTENR - Channel 2 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_INTR_CH2_TIMEOUTENR BSP_FLD32(12)

/* field: CH2_UNDERENR - Channel 2 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_INTR_CH2_UNDERENR BSP_FLD32(11)

/* field: CH2_OVERENR - Channel 2 Overrun Interrupt Enable Bit. */
#define TMS570_CRC_INTR_CH2_OVERENR BSP_FLD32(10)

/* field: CH2_CRCFAILENR - Channel 2 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_INTR_CH2_CRCFAILENR BSP_FLD32(9)

/* field: CH2_CCITENR - Channel 2 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_INTR_CH2_CCITENR BSP_FLD32(8)

/* field: CH1_TIMEOUTENR - Channel 1 Timeout Interrupt Enable Bit. */
#define TMS570_CRC_INTR_CH1_TIMEOUTENR BSP_FLD32(4)

/* field: CH1_UNDERENR - interrupt. Writing a zero has no effect. */
#define TMS570_CRC_INTR_CH1_UNDERENR BSP_FLD32(3)

/* field: CH1_OVERENR - CH1_OVERENR */
#define TMS570_CRC_INTR_CH1_OVERENR BSP_FLD32(2)

/* field: CH1_CRCFAILENR - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_INTR_CH1_CRCFAILENR BSP_FLD32(1)

/* field: CH1_CCITENR - Channel 1 Compression Complete Interrupt Enable Bit. */
#define TMS570_CRC_INTR_CH1_CCITENR BSP_FLD32(0)


/*---------------------TMS570_CRC_STATUS---------------------*/
/* field: CH2_TIMEOUT - Channel 2 CRC Timeout Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_STATUS_CH2_TIMEOUT BSP_FLD32(12)

/* field: CH2_UNDER - Channel 2 CRC Underrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_STATUS_CH2_UNDER BSP_FLD32(11)

/* field: CH2_OVER - Channel 2 CRC Overrun Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_STATUS_CH2_OVER BSP_FLD32(10)

/* field: CH2_CRCFAIL - Channel 2 CRC Compare Fail Status Flag. This bit is cleared by writing a '1' to it only. */
#define TMS570_CRC_STATUS_CH2_CRCFAIL BSP_FLD32(9)

/* field: CH2_CCIT - Channel 2 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_STATUS_CH2_CCIT BSP_FLD32(8)

/* field: CH1_TIMEOUT - Writing a zero has no effect. Reading from this bit gives the status (interrupt enable/disable). */
#define TMS570_CRC_STATUS_CH1_TIMEOUT BSP_FLD32(4)

/* field: CH1_UNDER - Channel 1 Underrun Interrupt Enable Bit. */
#define TMS570_CRC_STATUS_CH1_UNDER BSP_FLD32(3)

/* field: CH1_OVER - Channel 1 Overrun Interrupt Enable Bit. Writing a one to this bit disable the overrun interrupt. */
#define TMS570_CRC_STATUS_CH1_OVER BSP_FLD32(2)

/* field: CH1_CRCFAIL - Channel 1 CRC Fail Interrupt Enable Bit. */
#define TMS570_CRC_STATUS_CH1_CRCFAIL BSP_FLD32(1)

/* field: CH1_CCIT - Channel 1 CRC Pattern Compression Complete Status Flag. */
#define TMS570_CRC_STATUS_CH1_CCIT BSP_FLD32(0)


/*-----------------TMS570_CRC_INT_OFFS_ET_REG-----------------*/
/* field: OFSTREG - CRC Interrupt Offset. This register indicates the highest priority pending interrupt vector address. */
#define TMS570_CRC_INT_OFFS_ET_REG_OFSTREG(val) BSP_FLD32(val,0, 7)
#define TMS570_CRC_INT_OFFS_ET_REG_OFSTREG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_CRC_INT_OFFS_ET_REG_OFSTREG_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_CRC_BUSY----------------------*/
/* field: CH2_BUSY - CH2_BUSY. */
#define TMS570_CRC_BUSY_CH2_BUSY BSP_FLD32(8)

/* field: CH1_BUSY - CH1_BUSY. */
#define TMS570_CRC_BUSY_CH1_BUSY BSP_FLD32(0)


/*-------------------TMS570_CRC_PCOUNT_REG1-------------------*/
/* field: CRC_PAT_COUNT1 - Channel 1 Pattern Counter Preload Register. */
#define TMS570_CRC_PCOUNT_REG1_CRC_PAT_COUNT1(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_PCOUNT_REG1_CRC_PAT_COUNT1_SET(reg,val) BSP_FLD32SET(reg, val,0, 19)


/*-------------------TMS570_CRC_SCOUNT_REG1-------------------*/
/* field: CRC_SEC_COUNT1 - Channel 1 Sector Counter Preload Register. */
#define TMS570_CRC_SCOUNT_REG1_CRC_SEC_COUNT1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_SCOUNT_REG1_CRC_SEC_COUNT1_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------TMS570_CRC_CURSEC_REG1-------------------*/
/* field: CRC_CURSEC1 - Channel 1 Current Sector ID Register. */
#define TMS570_CRC_CURSEC_REG1_CRC_CURSEC1(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CURSEC_REG1_CRC_CURSEC1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CURSEC_REG1_CRC_CURSEC1_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------TMS570_CRC_WDTOPLD1--------------------*/
/* field: CRC_WDTOPLD1 - CRC_WDTOPLD1 */
#define TMS570_CRC_WDTOPLD1_CRC_WDTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_WDTOPLD1_CRC_WDTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_WDTOPLD1_CRC_WDTOPLD1_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*--------------------TMS570_CRC_BCTOPLD1--------------------*/
/* field: CRC_BCTOPLD1 - Channel 1 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_BCTOPLD1_CRC_BCTOPLD1(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_BCTOPLD1_CRC_BCTOPLD1_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_BCTOPLD1_CRC_BCTOPLD1_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*--------------------TMS570_PSA_SIGREGL1--------------------*/
/* field: PSASIG1 - Channel 1 PSA Signature Low Register. */
#define TMS570_PSA_SIGREGL1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_PSA_SIGREGL1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PSA_SIGREGL1_PSASIG1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_PSA_SIGREGH1--------------------*/
/* field: PSASIG1 - register. */
#define TMS570_PSA_SIGREGH1_PSASIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_PSA_SIGREGH1_PSASIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PSA_SIGREGH1_PSASIG1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_CRC_REGL1----------------------*/
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_REGL1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_REGL1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_REGL1_CRC1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_CRC_REGH1----------------------*/
/* field: CRC1 - Channel 1 CRC Value Low Register. */
#define TMS570_CRC_REGH1_CRC1(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_REGH1_CRC1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_REGH1_CRC1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_PSA_SECSIGREGL1-------------------*/
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature Low Register. */
#define TMS570_PSA_SECSIGREGL1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_PSA_SECSIGREGL1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PSA_SECSIGREGL1_PSASECSIG1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_PSA_SECSIGREGH1-------------------*/
/* field: PSASECSIG1 - Channel 1 PSA Sector Signature High Register. */
#define TMS570_PSA_SECSIGREGH1_PSASECSIG1(val) BSP_FLD32(val,0, 31)
#define TMS570_PSA_SECSIGREGH1_PSASECSIG1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PSA_SECSIGREGH1_PSASECSIG1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_RAW_DATAREGL1--------------------*/
/* field: RAW_DATA1 - hannel 1 Raw Data Low Register.This register contains bits 31:0 of the uncompressed raw data. */
#define TMS570_RAW_DATAREGL1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_RAW_DATAREGL1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RAW_DATAREGL1_RAW_DATA1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_RAW_DATAREGH1--------------------*/
/* field: RAW_DATA1 - Channel 1 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data. */
#define TMS570_RAW_DATAREGH1_RAW_DATA1(val) BSP_FLD32(val,0, 31)
#define TMS570_RAW_DATAREGH1_RAW_DATA1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RAW_DATAREGH1_RAW_DATA1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_CRC_PCOUNT_REG2-------------------*/
/* field: CRC_PAT_COUNT2 - Channel 2 Pattern Counter Preload Register. */
#define TMS570_CRC_PCOUNT_REG2_CRC_PAT_COUNT2(val) BSP_FLD32(val,0, 19)
#define TMS570_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 19)
#define TMS570_CRC_PCOUNT_REG2_CRC_PAT_COUNT2_SET(reg,val) BSP_FLD32SET(reg, val,0, 19)


/*-------------------TMS570_CRC_SCOUNT_REG2-------------------*/
/* field: CRC_SEC_COUNT2 - Channel 2 Sector Counter Preload Register. */
#define TMS570_CRC_SCOUNT_REG2_CRC_SEC_COUNT2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_SCOUNT_REG2_CRC_SEC_COUNT2_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------TMS570_CRC_CURSEC_REG2-------------------*/
/* field: CRC_CURSEC2 - Channel 2 Current Sector ID Register. */
#define TMS570_CRC_CURSEC_REG2_CRC_CURSEC2(val) BSP_FLD32(val,0, 15)
#define TMS570_CRC_CURSEC_REG2_CRC_CURSEC2_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_CRC_CURSEC_REG2_CRC_CURSEC2_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------TMS570_CRC_WDTOPLD2--------------------*/
/* field: CRC_WDTOPLD2 - Channel 2 Watchdog Timeout Counter Preload Register. */
#define TMS570_CRC_WDTOPLD2_CRC_WDTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_WDTOPLD2_CRC_WDTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_WDTOPLD2_CRC_WDTOPLD2_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*--------------------TMS570_CRC_BCTOPLD2--------------------*/
/* field: CRC_BCTOPLD2 - Channel 2 Block Complete Timeout Counter Preload Register. */
#define TMS570_CRC_BCTOPLD2_CRC_BCTOPLD2(val) BSP_FLD32(val,0, 23)
#define TMS570_CRC_BCTOPLD2_CRC_BCTOPLD2_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_CRC_BCTOPLD2_CRC_BCTOPLD2_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*--------------------TMS570_PSA_SIGREGL2--------------------*/
/* field: PSASIG2 - Channel 2 PSA Signature Low Register. */
#define TMS570_PSA_SIGREGL2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_PSA_SIGREGL2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PSA_SIGREGL2_PSASIG2_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_PSA_SIGREGH2--------------------*/
/* field: PSASIG2 - Channel 2 PSA Signature High Register. */
#define TMS570_PSA_SIGREGH2_PSASIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_PSA_SIGREGH2_PSASIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PSA_SIGREGH2_PSASIG2_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_CRC_REGL2----------------------*/
/* field: CRC2 - stored at CRC2[31:0] register. */
#define TMS570_CRC_REGL2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_REGL2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_REGL2_CRC2_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_CRC_REGH2----------------------*/
/* field: CRC2 - Channel 2 CRC Value High Register. */
#define TMS570_CRC_REGH2_CRC2(val) BSP_FLD32(val,0, 31)
#define TMS570_CRC_REGH2_CRC2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CRC_REGH2_CRC2_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_PSA_SECSIGREGL2-------------------*/
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature Low Register. */
#define TMS570_PSA_SECSIGREGL2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_PSA_SECSIGREGL2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PSA_SECSIGREGL2_PSASECSIG2_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------TMS570_PSA_SECSIGREGH2-------------------*/
/* field: PSASECSIG2 - Channel 2 PSA Sector Signature High Register. */
#define TMS570_PSA_SECSIGREGH2_PSASECSIG2(val) BSP_FLD32(val,0, 31)
#define TMS570_PSA_SECSIGREGH2_PSASECSIG2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PSA_SECSIGREGH2_PSASECSIG2_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_RAW_DATAREGL2--------------------*/
/* field: RAW_DATA2 - Channel 2 Raw Data Low Register. This register contains bits 31:0 of the uncompressed raw data.. */
#define TMS570_RAW_DATAREGL2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_RAW_DATAREGL2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RAW_DATAREGL2_RAW_DATA2_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_RAW_DATAREGH2--------------------*/
/* field: RAW_DATA2 - Channel 2 Raw Data High Register. This register contains bits 63:32 of the uncompressed raw data.. */
#define TMS570_RAW_DATAREGH2_RAW_DATA2(val) BSP_FLD32(val,0, 31)
#define TMS570_RAW_DATAREGH2_RAW_DATA2_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RAW_DATAREGH2_RAW_DATA2_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_CRC_BUS_SEL---------------------*/
/* field: MEn - Enable/disables the tracing of Peripheral Bus Master */
#define TMS570_CRC_BUS_SEL_MEn BSP_FLD32(2)

/* field: DTCMEn - Enable/disables the tracing of data TCM */
#define TMS570_CRC_BUS_SEL_DTCMEn BSP_FLD32(1)

/* field: ITCMEn - Enable/disables the tracing of instruction TCM */
#define TMS570_CRC_BUS_SEL_ITCMEn BSP_FLD32(0)



#endif /* LIBBSP_ARM_tms570_CRC */
