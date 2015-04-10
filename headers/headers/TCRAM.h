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
#ifndef LIBBSP_ARM_tms570_TCRAM.H
#define LIBBSP_ARM_tms570_TCRAM.H

#include <bsp/utility.h>

typedef struct{
  uint32_t RAMCTRL;           /*TCRAM Module Control Register*/
  uint32_t RAMTHRESHOLD;      /*TCRAM Module Single-Bit Error Correction Threshold Register*/
  uint32_t RAMOCCUR;          /*TCRAM Module Single-Bit Error Occurrences Control Register*/
  uint32_t RAMINTCTRL;        /*TCRAM Module Interrupt Control Register*/
  uint32_t RAMERRSTATUS;      /*TCRAM Module Error Status Register*/
  uint32_t RAMSERRADDR;       /*TCRAM Module Single-Bit Error Address Register*/
  uint8_t reserved1 [4];
  uint32_t RAMUERRADDR;       /*TCRAM Module Uncorrectable Error Address Register*/
  uint8_t reserved2 [16];
  uint32_t RAMTEST;           /*TCRAM Module Test Mode Control Register*/
  uint8_t reserved3 [4];
  uint32_t RAMADDRDECVECT;    /*TCRAM Module Test Mode Vector Register*/
  uint32_t RAMPERADDR;        /*TCRAM Module Parity Error Address Register*/
} TCRAM_struct;

/*--------------------tms570_TCRAM_RAMCTRL--------------------*/
/* field: EMU_TRACE_DIS - Emulation Mode Trace Disable. */
#define tms570_TCRAM_RAMCTRL_EMU_TRACE_DIS BSP_FLD32(30)

/* field: ADDR_PARITY_OVERRIDE - Address Parity Override. */
#define tms570_TCRAM_RAMCTRL_ADDR_PARITY_OVERRIDE(val) BSP_FLD32(val,24, 27)
#define tms570_TCRAM_RAMCTRL_ADDR_PARITY_OVERRIDE_GET(reg) BSP_FLD32GET(reg,24, 27)
#define tms570_TCRAM_RAMCTRL_ADDR_PARITY_OVERRIDE_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: ADDR_PARITY_DISABLE - Address Parity Detect Disable. */
#define tms570_TCRAM_RAMCTRL_ADDR_PARITY_DISABLE(val) BSP_FLD32(val,16, 19)
#define tms570_TCRAM_RAMCTRL_ADDR_PARITY_DISABLE_GET(reg) BSP_FLD32GET(reg,16, 19)
#define tms570_TCRAM_RAMCTRL_ADDR_PARITY_DISABLE_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: ECC_WR_EN - ECC Memory Write Enable. */
#define tms570_TCRAM_RAMCTRL_ECC_WR_EN BSP_FLD32(8)

/* field: ECC_DETECT_EN - ECC Detect Enable. */
#define tms570_TCRAM_RAMCTRL_ECC_DETECT_EN(val) BSP_FLD32(val,0, 3)
#define tms570_TCRAM_RAMCTRL_ECC_DETECT_EN_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_TCRAM_RAMCTRL_ECC_DETECT_EN_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-----------------tms570_TCRAM_RAMTHRESHOLD-----------------*/
/* field: THRESHOLD - Single-bit Error Threshold Count. */
#define tms570_TCRAM_RAMTHRESHOLD_THRESHOLD(val) BSP_FLD32(val,0, 15)
#define tms570_TCRAM_RAMTHRESHOLD_THRESHOLD_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_TCRAM_RAMTHRESHOLD_THRESHOLD_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_TCRAM_RAMOCCUR-------------------*/
/* field: SINGLE_ERROR - Single-bit Error Correction Occurrences. */
#define tms570_TCRAM_RAMOCCUR_SINGLE_ERROR(val) BSP_FLD32(val,0, 15)
#define tms570_TCRAM_RAMOCCUR_SINGLE_ERROR_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_TCRAM_RAMOCCUR_SINGLE_ERROR_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*------------------tms570_TCRAM_RAMINTCTRL------------------*/
/* field: SERR_EN - Single-bit Error Correction Interrupt Enable. */
#define tms570_TCRAM_RAMINTCTRL_SERR_EN BSP_FLD32(0)


/*-----------------tms570_TCRAM_RAMERRSTATUS-----------------*/
/* field: WADDR_PAR_FAIL - This bit indicates a Write Address Parity Failure. */
#define tms570_TCRAM_RAMERRSTATUS_WADDR_PAR_FAIL BSP_FLD32(9)

/* field: RADDR_PAR_FAIL - This bit indicates a Read Address Parity Failure. */
#define tms570_TCRAM_RAMERRSTATUS_RADDR_PAR_FAIL BSP_FLD32(8)

/* field: DERR - This bit indicates a multi-bit error detected by the Cortex-R4F SECDED logic. */
#define tms570_TCRAM_RAMERRSTATUS_DERR BSP_FLD32(5)

/* field: ADDR_COMP_LOGIC_FAIL - Address decode logic element failed. */
#define tms570_TCRAM_RAMERRSTATUS_ADDR_COMP_LOGIC_FAIL BSP_FLD32(4)

/* field: ADDR_DEC_FAIL - Address decode failed. */
#define tms570_TCRAM_RAMERRSTATUS_ADDR_DEC_FAIL BSP_FLD32(2)

/* field: SERR - Single Error Status. */
#define tms570_TCRAM_RAMERRSTATUS_SERR BSP_FLD32(0)


/*------------------tms570_TCRAM_RAMSERRADDR------------------*/
/* field: SINGLE_ERROR_ADDRESS - This register captures the bits 17-3 of the address for which the Cortex-R4F CPU */
#define tms570_TCRAM_RAMSERRADDR_SINGLE_ERROR_ADDRESS(val) BSP_FLD32(val,3, 17)
#define tms570_TCRAM_RAMSERRADDR_SINGLE_ERROR_ADDRESS_GET(reg) BSP_FLD32GET(reg,3, 17)
#define tms570_TCRAM_RAMSERRADDR_SINGLE_ERROR_ADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,3, 17)


/*------------------tms570_TCRAM_RAMUERRADDR------------------*/
/* field: UNCORRECTABLE - address parity error. */
#define tms570_TCRAM_RAMUERRADDR_UNCORRECTABLE(val) BSP_FLD32(val,3, 22)
#define tms570_TCRAM_RAMUERRADDR_UNCORRECTABLE_GET(reg) BSP_FLD32GET(reg,3, 22)
#define tms570_TCRAM_RAMUERRADDR_UNCORRECTABLE_SET(reg,val) BSP_FLD32SET(reg, val,3, 22)


/*--------------------tms570_TCRAM_RAMTEST--------------------*/
/* field: TRIGGER - Test Trigger. */
#define tms570_TCRAM_RAMTEST_TRIGGER BSP_FLD32(8)

/* field: TEST_MODE - Test Mode. This field selects either equality of inequality testing schemes. */
#define tms570_TCRAM_RAMTEST_TEST_MODE(val) BSP_FLD32(val,6, 7)
#define tms570_TCRAM_RAMTEST_TEST_MODE_GET(reg) BSP_FLD32GET(reg,6, 7)
#define tms570_TCRAM_RAMTEST_TEST_MODE_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: TEST_ENABLE - Test Enable. */
#define tms570_TCRAM_RAMTEST_TEST_ENABLE(val) BSP_FLD32(val,0, 3)
#define tms570_TCRAM_RAMTEST_TEST_ENABLE_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_TCRAM_RAMTEST_TEST_ENABLE_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*----------------tms570_TCRAM_RAMADDRDECVECT----------------*/
/* field: ECC_SELECT - ECC Select. */
#define tms570_TCRAM_RAMADDRDECVECT_ECC_SELECT BSP_FLD32(26)

/* field: RAM_CHIP_SELECT - RAM Chip Select. */
#define tms570_TCRAM_RAMADDRDECVECT_RAM_CHIP_SELECT(val) BSP_FLD32(val,0, 15)
#define tms570_TCRAM_RAMADDRDECVECT_RAM_CHIP_SELECT_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_TCRAM_RAMADDRDECVECT_RAM_CHIP_SELECT_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*------------------tms570_TCRAM_RAMPERADDR------------------*/
/* field: ADDRESS_PARITY - Parity Error Address. */
#define tms570_TCRAM_RAMPERADDR_ADDRESS_PARITY(val) BSP_FLD32(val,3, 22)
#define tms570_TCRAM_RAMPERADDR_ADDRESS_PARITY_GET(reg) BSP_FLD32GET(reg,3, 22)
#define tms570_TCRAM_RAMPERADDR_ADDRESS_PARITY_SET(reg,val) BSP_FLD32SET(reg, val,3, 22)



#endif /* LIBBSP_ARM_tms570_TCRAM.H */
