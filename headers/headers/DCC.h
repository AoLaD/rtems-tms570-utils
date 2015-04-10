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
#ifndef LIBBSP_ARM_tms570_DCC.H
#define LIBBSP_ARM_tms570_DCC.H

#include <bsp/utility.h>

typedef struct{
  uint32_t DCCGCTRL;          /*DCC Global Control Register*/
  uint32_t DCCREV;            /*DCC Revision Id Register*/
  uint32_t DCCCNT0SEED;       /*DCC Counter0 Seed Register*/
  uint32_t DCCVALID0SEED;     /*DCC Valid0 Seed Register*/
  uint32_t DCCCNT1SEED;       /*DCC Counter1 Seed Register*/
  uint32_t DCCSTAT;           /*DCC Status Register*/
  uint32_t DCCDCNT0;          /*DCC Counter0 Value Register*/
  uint32_t DCCVALID0;         /*DCC Valid0 Value Register*/
  uint32_t DCCDCNT1;          /*DCC Counter1 Value Register*/
  uint32_t DCCCNT1CLKSRC;     /*DCC Counter1 Clock Source Selection Register*/
  uint32_t DCCCNT0CLKSRC;     /*DCC Counter0 Clock Source Selection Register*/
} DCC_struct;

/*--------------------tms570_DCC_DCCGCTRL--------------------*/
/* field: DONE_INT_ENA - Done Interrupt Enable. */
#define tms570_DCC_DCCGCTRL_DONE_INT_ENA(val) BSP_FLD32(val,12, 15)
#define tms570_DCC_DCCGCTRL_DONE_INT_ENA_GET(reg) BSP_FLD32GET(reg,12, 15)
#define tms570_DCC_DCCGCTRL_DONE_INT_ENA_SET(reg,val) BSP_FLD32SET(reg, val,12, 15)

/* field: SINGLE_SHOT - Single-Shot Mode Enable. */
#define tms570_DCC_DCCGCTRL_SINGLE_SHOT(val) BSP_FLD32(val,8, 11)
#define tms570_DCC_DCCGCTRL_SINGLE_SHOT_GET(reg) BSP_FLD32GET(reg,8, 11)
#define tms570_DCC_DCCGCTRL_SINGLE_SHOT_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)

/* field: ERR_ENA - Error Interrupt Enable. */
#define tms570_DCC_DCCGCTRL_ERR_ENA(val) BSP_FLD32(val,4, 7)
#define tms570_DCC_DCCGCTRL_ERR_ENA_GET(reg) BSP_FLD32GET(reg,4, 7)
#define tms570_DCC_DCCGCTRL_ERR_ENA_SET(reg,val) BSP_FLD32SET(reg, val,4, 7)

/* field: DCC_ENA - DCC Enable. */
#define tms570_DCC_DCCGCTRL_DCC_ENA(val) BSP_FLD32(val,0, 3)
#define tms570_DCC_DCCGCTRL_DCC_ENA_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_DCC_DCCGCTRL_DCC_ENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------tms570_DCC_DCCREV---------------------*/
/* field: SCHEME - Reads return 01, writes have no effect. */
#define tms570_DCC_DCCREV_SCHEME(val) BSP_FLD32(val,30, 31)
#define tms570_DCC_DCCREV_SCHEME_GET(reg) BSP_FLD32GET(reg,30, 31)
#define tms570_DCC_DCCREV_SCHEME_SET(reg,val) BSP_FLD32SET(reg, val,30, 31)

/* field: FUNC - Functional release number. Reads return 0x000, writes have no effect. */
#define tms570_DCC_DCCREV_FUNC(val) BSP_FLD32(val,16, 27)
#define tms570_DCC_DCCREV_FUNC_GET(reg) BSP_FLD32GET(reg,16, 27)
#define tms570_DCC_DCCREV_FUNC_SET(reg,val) BSP_FLD32SET(reg, val,16, 27)

/* field: RTL - Design release number. Reads return 0x00, writes have no effect. */
#define tms570_DCC_DCCREV_RTL(val) BSP_FLD32(val,11, 15)
#define tms570_DCC_DCCREV_RTL_GET(reg) BSP_FLD32GET(reg,11, 15)
#define tms570_DCC_DCCREV_RTL_SET(reg,val) BSP_FLD32SET(reg, val,11, 15)

/* field: MAJOR - Major revision number. Reads return 0x2, writes have no effect. */
#define tms570_DCC_DCCREV_MAJOR(val) BSP_FLD32(val,8, 10)
#define tms570_DCC_DCCREV_MAJOR_GET(reg) BSP_FLD32GET(reg,8, 10)
#define tms570_DCC_DCCREV_MAJOR_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: CUSTOM - Custom version number. Reads return 0x0, writes have no effect. */
#define tms570_DCC_DCCREV_CUSTOM(val) BSP_FLD32(val,6, 7)
#define tms570_DCC_DCCREV_CUSTOM_GET(reg) BSP_FLD32GET(reg,6, 7)
#define tms570_DCC_DCCREV_CUSTOM_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: MINOR - Minor revision number. Reads return 0x4, writes have no effect. */
#define tms570_DCC_DCCREV_MINOR(val) BSP_FLD32(val,0, 5)
#define tms570_DCC_DCCREV_MINOR_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DCC_DCCREV_MINOR_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------tms570_DCC_DCCCNT0SEED-------------------*/
/* field: COUNT0_SEED - Seed value for DCC Counter0. */
#define tms570_DCC_DCCCNT0SEED_COUNT0_SEED(val) BSP_FLD32(val,0, 19)
#define tms570_DCC_DCCCNT0SEED_COUNT0_SEED_GET(reg) BSP_FLD32GET(reg,0, 19)
#define tms570_DCC_DCCCNT0SEED_COUNT0_SEED_SET(reg,val) BSP_FLD32SET(reg, val,0, 19)


/*------------------tms570_DCC_DCCVALID0SEED------------------*/
/* field: VALID0_SEED - XXX */
#define tms570_DCC_DCCVALID0SEED_VALID0_SEED(val) BSP_FLD32(val,0, 15)
#define tms570_DCC_DCCVALID0SEED_VALID0_SEED_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DCC_DCCVALID0SEED_VALID0_SEED_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_DCC_DCCCNT1SEED-------------------*/
/* field: COUNT1_SEED - Seed value for DCC Counter1. */
#define tms570_DCC_DCCCNT1SEED_COUNT1_SEED(val) BSP_FLD32(val,0, 19)
#define tms570_DCC_DCCCNT1SEED_COUNT1_SEED_GET(reg) BSP_FLD32GET(reg,0, 19)
#define tms570_DCC_DCCCNT1SEED_COUNT1_SEED_SET(reg,val) BSP_FLD32SET(reg, val,0, 19)


/*---------------------tms570_DCC_DCCSTAT---------------------*/
/* field: DONE_FLG - Single-Shot Sequence Done flag. */
#define tms570_DCC_DCCSTAT_DONE_FLG BSP_FLD32(1)

/* field: ERR_FLG - Error flag. Indicates that a DCC error has occurred. */
#define tms570_DCC_DCCSTAT_ERR_FLG BSP_FLD32(0)


/*--------------------tms570_DCC_DCCDCNT0--------------------*/
/* field: COUNT0 - Current value of DCC Counter0. */
#define tms570_DCC_DCCDCNT0_COUNT0(val) BSP_FLD32(val,0, 19)
#define tms570_DCC_DCCDCNT0_COUNT0_GET(reg) BSP_FLD32GET(reg,0, 19)
#define tms570_DCC_DCCDCNT0_COUNT0_SET(reg,val) BSP_FLD32SET(reg, val,0, 19)


/*--------------------tms570_DCC_DCCVALID0--------------------*/
/* field: VALID0 - Current value for DCC Valid0. */
#define tms570_DCC_DCCVALID0_VALID0(val) BSP_FLD32(val,0, 15)
#define tms570_DCC_DCCVALID0_VALID0_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DCC_DCCVALID0_VALID0_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_DCC_DCCDCNT1--------------------*/
/* field: COUNT1 - Current value for DCC Counter1. */
#define tms570_DCC_DCCDCNT1_COUNT1(val) BSP_FLD32(val,0, 19)
#define tms570_DCC_DCCDCNT1_COUNT1_GET(reg) BSP_FLD32GET(reg,0, 19)
#define tms570_DCC_DCCDCNT1_COUNT1_SET(reg,val) BSP_FLD32SET(reg, val,0, 19)


/*------------------tms570_DCC_DCCCNT1CLKSRC------------------*/
/* field: KEY - Key to enable clock source selection for Counter1. */
#define tms570_DCC_DCCCNT1CLKSRC_KEY(val) BSP_FLD32(val,12, 15)
#define tms570_DCC_DCCCNT1CLKSRC_KEY_GET(reg) BSP_FLD32GET(reg,12, 15)
#define tms570_DCC_DCCCNT1CLKSRC_KEY_SET(reg,val) BSP_FLD32SET(reg, val,12, 15)

/* field: CNT1_CLKSRC - Clock Source for Counter1 when KEY is programmed to be 0xA. */
#define tms570_DCC_DCCCNT1CLKSRC_CNT1_CLKSRC(val) BSP_FLD32(val,0, 3)
#define tms570_DCC_DCCCNT1CLKSRC_CNT1_CLKSRC_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_DCC_DCCCNT1CLKSRC_CNT1_CLKSRC_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*------------------tms570_DCC_DCCCNT0CLKSRC------------------*/
/* field: CNT0_CLKSRC - Clock Source for Counter0 */
#define tms570_DCC_DCCCNT0CLKSRC_CNT0_CLKSRC(val) BSP_FLD32(val,0, 3)
#define tms570_DCC_DCCCNT0CLKSRC_CNT0_CLKSRC_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_DCC_DCCCNT0CLKSRC_CNT0_CLKSRC_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)



#endif /* LIBBSP_ARM_tms570_DCC.H */
