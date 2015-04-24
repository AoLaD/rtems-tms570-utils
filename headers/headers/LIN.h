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
#ifndef LIBBSP_ARM_tms570_LIN.H
#define LIBBSP_ARM_tms570_LIN.H

#include <bsp/utility.h>

typedef struct{
  uint32_t SCIGCR0;           /*SCI Global Control Register 0*/
  uint8_t reserved1 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved2 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved3 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved4 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved5 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved6 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved7 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved8 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved9 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved10 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved11 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved12 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved13 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved14 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved15 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved16 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved17 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved18 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved19 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved20 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved21 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved22 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved23 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved24 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved25 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved26 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved27 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved28 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved29 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved30 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved31 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint8_t reserved32 [-4];
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
} LIN_struct;

/*---------------------tms570_LIN_SCIGCR0---------------------*/
/* field: Reserved - Read returns 0. Writes have no effect. */
#define tms570_LIN_SCIGCR0_Reserved(val) BSP_FLD32(val,1, 31)
#define tms570_LIN_SCIGCR0_Reserved_GET(reg) BSP_FLD32GET(reg,1, 31)
#define tms570_LIN_SCIGCR0_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,1, 31)

/* field: RESET - This bit resets the SCI module. */
#define tms570_LIN_SCIGCR0_RESET BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)



#endif /* LIBBSP_ARM_tms570_LIN.H */
