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
#ifndef LIBBSP_ARM_tms570_TCR.H
#define LIBBSP_ARM_tms570_TCR.H

#include <bsp/utility.h>

typedef struct{
  uint32_t 1FCh TCR[128];     /*Transfer Configuration RAM*/
  uint32_t 3FCh TCR Parity[128];/*TCR Parity Test Mode*/
} TCR_struct;

/*--------------------tms570_TCR_1FCh TCR--------------------*/
/* field: STXR - Set Transmit Request. */
#define tms570_TCR_1FCh TCR_STXR BSP_FLD32(18)

/* field: THTSM - Transfer Header to System Memory. */
#define tms570_TCR_1FCh TCR_THTSM BSP_FLD32(17)

/* field: TPTSM - Transfer Payload to System Memory. */
#define tms570_TCR_1FCh TCR_TPTSM BSP_FLD32(16)

/* field: THTCC - Transfer Header to Communication Controller. */
#define tms570_TCR_1FCh TCR_THTCC BSP_FLD32(15)

/* field: TPTCC - Transfer Payload to Communication Controller. */
#define tms570_TCR_1FCh TCR_TPTCC BSP_FLD32(14)

/* field: TSO - Transfer Start Offset. */
#define tms570_TCR_1FCh TCR_TSO(val) BSP_FLD32(val,0, 13)
#define tms570_TCR_1FCh TCR_TSO_GET(reg) BSP_FLD32GET(reg,0, 13)
#define tms570_TCR_1FCh TCR_TSO_SET(reg,val) BSP_FLD32SET(reg, val,0, 13)


/*-----------------tms570_TCR_3FCh TCR Parity-----------------*/
/* field: PAB2 - Parity Bit for TCRx Byte 2. Parity information for byte 2 of TCRx(18-16). */
#define tms570_TCR_3FCh TCR Parity_PAB2 BSP_FLD32(16)

/* field: PAB1 - Parity Bit for TCRx Byte 1. Parity information for byte 1 of TCRx(15:8). */
#define tms570_TCR_3FCh TCR Parity_PAB1 BSP_FLD32(8)

/* field: PAB0 - Parity Bit for Byte 0. */
#define tms570_TCR_3FCh TCR Parity_PAB0 BSP_FLD32(0)



#endif /* LIBBSP_ARM_tms570_TCR.H */
