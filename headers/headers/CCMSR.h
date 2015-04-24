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
#ifndef LIBBSP_ARM_tms570_CCMSR.H
#define LIBBSP_ARM_tms570_CCMSR.H

#include <bsp/utility.h>

typedef struct{
  uint32_t CCMSR;             /*CCM-R4F Status Register*/
  uint32_t CCMKEYR;           /*CCM-R4F Key Register*/
} CCMSR_struct;

/*---------------------tms570_CCMSR_CCMSR---------------------*/
/* field: CMPE - Compare Error */
#define tms570_CCMSR_CCMSR_CMPE BSP_FLD32(16)

/* field: STC - Self-test Complete */
#define tms570_CCMSR_CCMSR_STC BSP_FLD32(8)

/* field: STET - Self-test Error Type */
#define tms570_CCMSR_CCMSR_STET BSP_FLD32(1)

/* field: STE - Self-test Error */
#define tms570_CCMSR_CCMSR_STE BSP_FLD32(0)


/*--------------------tms570_CCMSR_CCMKEYR--------------------*/
/* field: MKEY - Mode Key */
#define tms570_CCMSR_CCMKEYR_MKEY(val) BSP_FLD32(val,0, 3)
#define tms570_CCMSR_CCMKEYR_MKEY_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_CCMSR_CCMKEYR_MKEY_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)



#endif /* LIBBSP_ARM_tms570_CCMSR.H */
