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
#ifndef LIBBSP_ARM_tms570_STC.H
#define LIBBSP_ARM_tms570_STC.H

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
} STC_struct;

/*---------------------tms570_STC_STCGCR0---------------------*/
/* field: INTCOUNT - Number of intervals of self-test run */
#define tms570_STC_STCGCR0_INTCOUNT(val) BSP_FLD32(val,16, 31)
#define tms570_STC_STCGCR0_INTCOUNT_GET(reg) BSP_FLD32GET(reg,16, 31)
#define tms570_STC_STCGCR0_INTCOUNT_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: RS_CNT - Restart or Continue */
#define tms570_STC_STCGCR0_RS_CNT BSP_FLD32(0)


/*---------------------tms570_STC_STCGCR1---------------------*/
/* field: STC_ENA - Self-test run enable key */
#define tms570_STC_STCGCR1_STC_ENA(val) BSP_FLD32(val,0, 3)
#define tms570_STC_STCGCR1_STC_ENA_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_STC_STCGCR1_STC_ENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------tms570_STC_STCTPR---------------------*/
/* field: RTOD - Self-test timeout count preload */
#define tms570_STC_STCTPR_RTOD(val) BSP_FLD32(val,0, 31)
#define tms570_STC_STCTPR_RTOD_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_STC_STCTPR_RTOD_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_STC_STC_CADDR--------------------*/
/* field: ADDR - Current ROM Address */
#define tms570_STC_STC_CADDR_ADDR(val) BSP_FLD32(val,0, 31)
#define tms570_STC_STC_CADDR_ADDR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_STC_STC_CADDR_ADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_STC_STCCICR---------------------*/
/* field: N - Interval Number */
#define tms570_STC_STCCICR_N(val) BSP_FLD32(val,0, 15)
#define tms570_STC_STCCICR_N_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_STC_STCCICR_N_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_STC_STCGSTAT--------------------*/
/* field: TEST_FAIL - Test Fail */
#define tms570_STC_STCGSTAT_TEST_FAIL BSP_FLD32(1)

/* field: TEST_DONE - Test Done */
#define tms570_STC_STCGSTAT_TEST_DONE BSP_FLD32(0)


/*--------------------tms570_STC_STCFSTAT--------------------*/
/* field: TO_ERR - Timeout Error */
#define tms570_STC_STCFSTAT_TO_ERR BSP_FLD32(2)

/* field: CPU2_FAIL - CPU2 failure info */
#define tms570_STC_STCFSTAT_CPU2_FAIL BSP_FLD32(1)

/* field: CPU1_FAIL - CPU1 failure info */
#define tms570_STC_STCFSTAT_CPU1_FAIL BSP_FLD32(0)


/*------------------tms570_STC_CPU1_CURMISR3------------------*/
/* field: MISR - MISR data from CPU1 */
#define tms570_STC_CPU1_CURMISR3_MISR(val) BSP_FLD32(val,0, 31)
#define tms570_STC_CPU1_CURMISR3_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_STC_CPU1_CURMISR3_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_STC_CPU1_CURMISR2------------------*/
/* field: MISR - MISR data from CPU1 */
#define tms570_STC_CPU1_CURMISR2_MISR(val) BSP_FLD32(val,0, 31)
#define tms570_STC_CPU1_CURMISR2_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_STC_CPU1_CURMISR2_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_STC_CPU1_CURMISR1------------------*/
/* field: MISR - MISR data from CPU1 */
#define tms570_STC_CPU1_CURMISR1_MISR(val) BSP_FLD32(val,0, 31)
#define tms570_STC_CPU1_CURMISR1_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_STC_CPU1_CURMISR1_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_STC_CPU1_CURMISR0------------------*/
/* field: MISR - MISR data from CPU1 */
#define tms570_STC_CPU1_CURMISR0_MISR(val) BSP_FLD32(val,0, 31)
#define tms570_STC_CPU1_CURMISR0_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_STC_CPU1_CURMISR0_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_STC_CPU2_CURMISR3------------------*/
/* field: MISR - MISR data from CPU2 */
#define tms570_STC_CPU2_CURMISR3_MISR(val) BSP_FLD32(val,0, 31)
#define tms570_STC_CPU2_CURMISR3_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_STC_CPU2_CURMISR3_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_STC_CPU2_CURMISR2------------------*/
/* field: MISR - MISR data from CPU2 */
#define tms570_STC_CPU2_CURMISR2_MISR(val) BSP_FLD32(val,0, 31)
#define tms570_STC_CPU2_CURMISR2_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_STC_CPU2_CURMISR2_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_STC_CPU2_CURMISR1------------------*/
/* field: MISR - MISR data from CPU2 */
#define tms570_STC_CPU2_CURMISR1_MISR(val) BSP_FLD32(val,0, 31)
#define tms570_STC_CPU2_CURMISR1_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_STC_CPU2_CURMISR1_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_STC_CPU2_CURMISR0------------------*/
/* field: MISR - MISR data from CPU2 */
#define tms570_STC_CPU2_CURMISR0_MISR(val) BSP_FLD32(val,0, 31)
#define tms570_STC_CPU2_CURMISR0_MISR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_STC_CPU2_CURMISR0_MISR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_STC_STCSCSCR--------------------*/
/* field: FAULT_INS - Enable / Disable fault insertion. */
#define tms570_STC_STCSCSCR_FAULT_INS BSP_FLD32(4)

/* field: SELF_CHECK_KEY - Signature compare logic self-check enable key */
#define tms570_STC_STCSCSCR_SELF_CHECK_KEY(val) BSP_FLD32(val,0, 3)
#define tms570_STC_STCSCSCR_SELF_CHECK_KEY_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_STC_STCSCSCR_SELF_CHECK_KEY_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)



#endif /* LIBBSP_ARM_tms570_STC.H */
