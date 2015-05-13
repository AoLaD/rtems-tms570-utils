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
#ifndef LIBBSP_ARM_tms570_STC
#define LIBBSP_ARM_tms570_STC

#include <bsp/utility.h>

typedef struct{
  uint32_t STCGCR0;           /*STC Global Control Register 0*/
  uint32_t STCGCR1;           /*STCGlobal Control Register 1*/
  uint32_t STCTPR;            /*Self-Test Run Timeout Counter Preload Register*/
  uint32_t STC_CADDR;         /*STC Current ROM Address Register*/
  uint32_t STCCICR;           /*STC Current Interval Count Register*/
  uint32_t STCGSTAT;          /*Self-Test Global Status Register*/
  uint32_t STCFSTAT;          /*Self-Test Fail Status Register*/
  uint32_t CPU1_CURMISR3;     /*CPU1 Current MISR Register 3*/
  uint32_t CPU1_CURMISR2;     /*CPU1 Current MISR Register 2*/
  uint32_t CPU1_CURMISR1;     /*CPU1 Current MISR Register 1*/
  uint32_t CPU1_CURMISR0;     /*CPU1 Current MISR Register 0*/
  uint32_t CPU2_CURMISR3;     /*CPU2 Current MISR Register 3*/
  uint32_t CPU2_CURMISR2;     /*CPU2 Current MISR Register 2*/
  uint32_t CPU2_CURMISR1;     /*CPU2 Current MISR Register 1*/
  uint32_t CPU2_CURMISR0;     /*CPU2 Current MISR Register 0*/
  uint32_t STCSCSCR;          /*Signature Compare Self-Check Register*/
} tms570_stc_t;

/*-----------------------TMS570_STCGCR0-----------------------*/
/* field: INTCOUNT - Number of intervals of self-test run */
#define TMS570_STCGCR0_INTCOUNT(val) BSP_FLD32(val,16, 31)
#define TMS570_STCGCR0_INTCOUNT_GET(reg) BSP_FLD32GET(reg,16, 31)
#define TMS570_STCGCR0_INTCOUNT_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: RS_CNT - Restart or Continue */
#define TMS570_STCGCR0_RS_CNT BSP_FLD32(0)


/*-----------------------TMS570_STCGCR1-----------------------*/
/* field: STC_ENA - Self-test run enable key */
#define TMS570_STCGCR1_STC_ENA(val) BSP_FLD32(val,0, 3)
#define TMS570_STCGCR1_STC_ENA_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_STCGCR1_STC_ENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-----------------------TMS570_STCTPR-----------------------*/
/* field: RTOD - Self-test timeout count preload */
#define TMS570_STCTPR_RTOD(val) BSP_FLD32(val,0, 31)
#define TMS570_STCTPR_RTOD_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_STCTPR_RTOD_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_STC_CADDR----------------------*/
/* field: ADDR - Current ROM Address */
#define TMS570_STC_CADDR_ADDR(val) BSP_FLD32(val,0, 31)
#define TMS570_STC_CADDR_ADDR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_STC_CADDR_ADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_STCCICR-----------------------*/
/* field: N - Interval Number */
#define TMS570_STCCICR_N(val) BSP_FLD32(val,0, 15)
#define TMS570_STCCICR_N_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_STCCICR_N_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*----------------------TMS570_STCGSTAT----------------------*/
/* field: TEST_FAIL - Test Fail */
#define TMS570_STCGSTAT_TEST_FAIL BSP_FLD32(1)

/* field: TEST_DONE - Test Done */
#define TMS570_STCGSTAT_TEST_DONE BSP_FLD32(0)


/*----------------------TMS570_STCFSTAT----------------------*/
/* field: TO_ERR - Timeout Error */
#define TMS570_STCFSTAT_TO_ERR BSP_FLD32(2)

/* field: CPU2_FAIL - CPU2 failure info */
#define TMS570_STCFSTAT_CPU2_FAIL BSP_FLD32(1)

/* field: CPU1_FAIL - CPU1 failure info */
#define TMS570_STCFSTAT_CPU1_FAIL BSP_FLD32(0)


/*--------------------TMS570_CPU1_CURMISR3--------------------*/
/* field: MISR - MISR data from CPU1 */
#define TMS570_CPU1_CURMISR3_MISR(val) BSP_FLD32(val,0, 31)
#define TMS570_CPU1_CURMISR3_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CPU1_CURMISR3_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_CPU1_CURMISR2--------------------*/
/* field: MISR - MISR data from CPU1 */
#define TMS570_CPU1_CURMISR2_MISR(val) BSP_FLD32(val,0, 31)
#define TMS570_CPU1_CURMISR2_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CPU1_CURMISR2_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_CPU1_CURMISR1--------------------*/
/* field: MISR - MISR data from CPU1 */
#define TMS570_CPU1_CURMISR1_MISR(val) BSP_FLD32(val,0, 31)
#define TMS570_CPU1_CURMISR1_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CPU1_CURMISR1_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_CPU1_CURMISR0--------------------*/
/* field: MISR - MISR data from CPU1 */
#define TMS570_CPU1_CURMISR0_MISR(val) BSP_FLD32(val,0, 31)
#define TMS570_CPU1_CURMISR0_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CPU1_CURMISR0_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_CPU2_CURMISR3--------------------*/
/* field: MISR - MISR data from CPU2 */
#define TMS570_CPU2_CURMISR3_MISR(val) BSP_FLD32(val,0, 31)
#define TMS570_CPU2_CURMISR3_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CPU2_CURMISR3_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_CPU2_CURMISR2--------------------*/
/* field: MISR - MISR data from CPU2 */
#define TMS570_CPU2_CURMISR2_MISR(val) BSP_FLD32(val,0, 31)
#define TMS570_CPU2_CURMISR2_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CPU2_CURMISR2_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_CPU2_CURMISR1--------------------*/
/* field: MISR - MISR data from CPU2 */
#define TMS570_CPU2_CURMISR1_MISR(val) BSP_FLD32(val,0, 31)
#define TMS570_CPU2_CURMISR1_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CPU2_CURMISR1_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_CPU2_CURMISR0--------------------*/
/* field: MISR - MISR data from CPU2 */
#define TMS570_CPU2_CURMISR0_MISR(val) BSP_FLD32(val,0, 31)
#define TMS570_CPU2_CURMISR0_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_CPU2_CURMISR0_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_STCSCSCR----------------------*/
/* field: FAULT_INS - Enable / Disable fault insertion. */
#define TMS570_STCSCSCR_FAULT_INS BSP_FLD32(4)

/* field: SELF_CHECK_KEY - Signature compare logic self-check enable key */
#define TMS570_STCSCSCR_SELF_CHECK_KEY(val) BSP_FLD32(val,0, 3)
#define TMS570_STCSCSCR_SELF_CHECK_KEY_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_STCSCSCR_SELF_CHECK_KEY_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)



#endif /* LIBBSP_ARM_tms570_STC */
