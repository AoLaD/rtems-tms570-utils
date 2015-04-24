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
#ifndef LIBBSP_ARM_tms570_ESM.H
#define LIBBSP_ARM_tms570_ESM.H

#include <bsp/utility.h>

typedef struct{
  uint32_t ESMEEPAPR1;        /*ESM Enable ERROR Pin Action/Response Register 1*/
  uint32_t ESMDEPAPR1;        /*ESM Disable ERROR Pin Action/Response Register 1*/
  uint32_t ESMIESR1;          /*ESM Interrupt Enable Set/Status Register 1*/
  uint32_t ESMIECR1;          /*ESM Interrupt Enable Clear/Status Register 1*/
  uint32_t ESMILSR1;          /*Interrupt Level Set/Status Register 1*/
  uint32_t ESMILCR1;          /*Interrupt Level Clear/Status Register 1*/
  uint32_t ESMSR1;            /*ESM Status Register 1*/
  uint32_t ESMSR2;            /*ESM Status Register 2*/
  uint32_t ESMSR3;            /*ESM Status Register 3*/
  uint32_t ESMEPSR;           /*ESM ERROR Pin Status Register*/
  uint32_t ESMIOFFHR;         /*ESM Interrupt Offset High Register*/
  uint32_t ESMIOFFLR;         /*ESM Interrupt Offset Low Register*/
  uint32_t ESMLTCR;           /*ESM Low-Time Counter Register*/
  uint32_t ESMLTCPR;          /*ESM Low-Time Counter Preload Register*/
  uint32_t ESMEKR;            /*ESM Error Key Register*/
  uint32_t ESMSSR2;           /*ESM Status Shadow Register 2*/
  uint32_t ESMIEPSR4;         /*ESM Influence ERROR Pin Set/Status Register 4*/
  uint32_t ESMIEPCR4;         /*ESM Influence ERROR Pin Clear/Status Register 4*/
  uint32_t ESMIESR4;          /*ESM Interrupt Enable Set/Status Register 4*/
  uint32_t ESMIECR4;          /*ESM Interrupt Enable Clear/Status Register 4*/
  uint32_t ESMILSR4;          /*Interrupt Level Set/Status Register 4*/
  uint32_t ESMILCR4;          /*Interrupt Level Clear/Status Register 4*/
  uint32_t ESMSR4;            /*ESM Status Register 4*/
} ESM_struct;

/*-------------------tms570_ESM_ESMEEPAPR1-------------------*/
/* field: IEPSET - Enable ERROR Pin Action/Response on Group 1. */
#define tms570_ESM_ESMEEPAPR1_IEPSET(val) BSP_FLD32(val,0, 31)
#define tms570_ESM_ESMEEPAPR1_IEPSET_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_ESM_ESMEEPAPR1_IEPSET_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_ESM_ESMDEPAPR1-------------------*/
/* field: IEPCLR - Disable ERROR Pin Action/Response on Group 1. */
#define tms570_ESM_ESMDEPAPR1_IEPCLR(val) BSP_FLD32(val,0, 31)
#define tms570_ESM_ESMDEPAPR1_IEPCLR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_ESM_ESMDEPAPR1_IEPCLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_ESM_ESMIESR1--------------------*/
/* field: INTENSET - Set interrupt Enable */
#define tms570_ESM_ESMIESR1_INTENSET(val) BSP_FLD32(val,0, 31)
#define tms570_ESM_ESMIESR1_INTENSET_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_ESM_ESMIESR1_INTENSET_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_ESM_ESMIECR1--------------------*/
/* field: INTENCLR - Clear Interrupt Enable */
#define tms570_ESM_ESMIECR1_INTENCLR(val) BSP_FLD32(val,0, 31)
#define tms570_ESM_ESMIECR1_INTENCLR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_ESM_ESMIECR1_INTENCLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_ESM_ESMILSR1--------------------*/
/* field: INTLVLSET - Set Interrupt Priority */
#define tms570_ESM_ESMILSR1_INTLVLSET(val) BSP_FLD32(val,0, 31)
#define tms570_ESM_ESMILSR1_INTLVLSET_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_ESM_ESMILSR1_INTLVLSET_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_ESM_ESMILCR1--------------------*/
/* field: INTLVLCLR - Clear Interrupt Priority. */
#define tms570_ESM_ESMILCR1_INTLVLCLR(val) BSP_FLD32(val,0, 31)
#define tms570_ESM_ESMILCR1_INTLVLCLR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_ESM_ESMILCR1_INTLVLCLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_ESM_ESMSR1---------------------*/
/* field: ESF - Error Status Flag. Provides status information on a pending error. */
#define tms570_ESM_ESMSR1_ESF(val) BSP_FLD32(val,0, 31)
#define tms570_ESM_ESMSR1_ESF_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_ESM_ESMSR1_ESF_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_ESM_ESMSR2---------------------*/
/* field: ESF - Error Status Flag. Provides status information on a pending error. */
#define tms570_ESM_ESMSR2_ESF(val) BSP_FLD32(val,0, 31)
#define tms570_ESM_ESMSR2_ESF_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_ESM_ESMSR2_ESF_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_ESM_ESMSR3---------------------*/
/* field: ESF - Error Status Flag. Provides status information on a pending error. */
#define tms570_ESM_ESMSR3_ESF(val) BSP_FLD32(val,0, 31)
#define tms570_ESM_ESMSR3_ESF_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_ESM_ESMSR3_ESF_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_ESM_ESMEPSR---------------------*/
/* field: EPSF - ERROR Pin Status Flag. Provides status information for the ERROR Pin. */
#define tms570_ESM_ESMEPSR_EPSF BSP_FLD32(0)


/*--------------------tms570_ESM_ESMIOFFHR--------------------*/
/* field: INTOFFH - Offset High Level Interrupt. */
#define tms570_ESM_ESMIOFFHR_INTOFFH(val) BSP_FLD32(val,0, 6)
#define tms570_ESM_ESMIOFFHR_INTOFFH_GET(reg) BSP_FLD32GET(reg,0, 6)
#define tms570_ESM_ESMIOFFHR_INTOFFH_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)


/*--------------------tms570_ESM_ESMIOFFLR--------------------*/
/* field: INTOFFL - Offset Low Level Interrupt. */
#define tms570_ESM_ESMIOFFLR_INTOFFL(val) BSP_FLD32(val,0, 6)
#define tms570_ESM_ESMIOFFLR_INTOFFL_GET(reg) BSP_FLD32GET(reg,0, 6)
#define tms570_ESM_ESMIOFFLR_INTOFFL_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)


/*---------------------tms570_ESM_ESMLTCR---------------------*/
/* field: LTC - ERROR Pin Low-Time Counter */
#define tms570_ESM_ESMLTCR_LTC(val) BSP_FLD32(val,0, 15)
#define tms570_ESM_ESMLTCR_LTC_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_ESM_ESMLTCR_LTC_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_ESM_ESMLTCPR--------------------*/
/* field: LTCP - ERROR Pin Low-Time Counter Pre-load Value */
#define tms570_ESM_ESMLTCPR_LTCP(val) BSP_FLD32(val,0, 15)
#define tms570_ESM_ESMLTCPR_LTCP_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_ESM_ESMLTCPR_LTCP_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_ESM_ESMEKR---------------------*/
/* field: EKEY - Error Key. The key to reset the ERROR pin or to force an error on the ERROR pin. */
#define tms570_ESM_ESMEKR_EKEY(val) BSP_FLD32(val,0, 3)
#define tms570_ESM_ESMEKR_EKEY_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_ESM_ESMEKR_EKEY_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------tms570_ESM_ESMSSR2---------------------*/
/* field: ESF - Error Status Flag. Shadow register for status information on pending error. */
#define tms570_ESM_ESMSSR2_ESF(val) BSP_FLD32(val,0, 31)
#define tms570_ESM_ESMSSR2_ESF_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_ESM_ESMSSR2_ESF_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_ESM_ESMIEPSR4--------------------*/
/* field: IEPSET - Set Influence on ERROR Pin */
#define tms570_ESM_ESMIEPSR4_IEPSET(val) BSP_FLD32(val,32, 63)
#define tms570_ESM_ESMIEPSR4_IEPSET_GET(reg) BSP_FLD32GET(reg,32, 63)
#define tms570_ESM_ESMIEPSR4_IEPSET_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)


/*--------------------tms570_ESM_ESMIEPCR4--------------------*/
/* field: IEPCLR - Clear Influence on ERROR Pin */
#define tms570_ESM_ESMIEPCR4_IEPCLR(val) BSP_FLD32(val,32, 63)
#define tms570_ESM_ESMIEPCR4_IEPCLR_GET(reg) BSP_FLD32GET(reg,32, 63)
#define tms570_ESM_ESMIEPCR4_IEPCLR_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)


/*--------------------tms570_ESM_ESMIESR4--------------------*/
/* field: INTENSET - Set Interrupt Enable */
#define tms570_ESM_ESMIESR4_INTENSET(val) BSP_FLD32(val,32, 63)
#define tms570_ESM_ESMIESR4_INTENSET_GET(reg) BSP_FLD32GET(reg,32, 63)
#define tms570_ESM_ESMIESR4_INTENSET_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)


/*--------------------tms570_ESM_ESMIECR4--------------------*/
/* field: INTENCLR - Clear Interrupt Enable */
#define tms570_ESM_ESMIECR4_INTENCLR(val) BSP_FLD32(val,32, 63)
#define tms570_ESM_ESMIECR4_INTENCLR_GET(reg) BSP_FLD32GET(reg,32, 63)
#define tms570_ESM_ESMIECR4_INTENCLR_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)


/*--------------------tms570_ESM_ESMILSR4--------------------*/
/* field: INTLVLSET - Set Interrupt Level */
#define tms570_ESM_ESMILSR4_INTLVLSET(val) BSP_FLD32(val,32, 63)
#define tms570_ESM_ESMILSR4_INTLVLSET_GET(reg) BSP_FLD32GET(reg,32, 63)
#define tms570_ESM_ESMILSR4_INTLVLSET_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)


/*--------------------tms570_ESM_ESMILCR4--------------------*/
/* field: INTLVLCLR - Clear Interrupt Level */
#define tms570_ESM_ESMILCR4_INTLVLCLR(val) BSP_FLD32(val,32, 63)
#define tms570_ESM_ESMILCR4_INTLVLCLR_GET(reg) BSP_FLD32GET(reg,32, 63)
#define tms570_ESM_ESMILCR4_INTLVLCLR_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)


/*---------------------tms570_ESM_ESMSR4---------------------*/
/* field: ESF - Error Status Flag. Provides status information on a pending error. */
#define tms570_ESM_ESMSR4_ESF(val) BSP_FLD32(val,32, 63)
#define tms570_ESM_ESMSR4_ESF_GET(reg) BSP_FLD32GET(reg,32, 63)
#define tms570_ESM_ESMSR4_ESF_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)



#endif /* LIBBSP_ARM_tms570_ESM.H */
