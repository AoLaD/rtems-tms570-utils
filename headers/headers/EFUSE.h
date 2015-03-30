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
#ifndef LIBBSP_ARM_TMS570_EFUSE.H
#define LIBBSP_ARM_TMS570_EFUSE.H

typedef struct{
  ui32_t EFCBOUND;            /*EFC Boundary Control Register*/
  ui32_t reserved1 [12];
  ui32_t EFCPINS;             /*EFC Pins Register*/
  ui32_t reserved2 [12];
  ui32_t EFC_ERR_STAT;        /*EFC Error Status Register*/
  ui32_t reserved3 [8];
  ui32_t EFC_ST_CY;           /*EFC Self Test Cycles Register*/
  ui32_t EFC_ST_SIG;          /*EFC Self Test Signature Register*/
} EFUSE_struct;

--------------------TMS570_EFUSEEFCBOUND--------------------
/* field: EFC_Self_Test_Error - This bit drives the self test error signal when bit 17 (Self Test Error OE) is high. */
#define TMS570_EFUSE_EFCBOUND_EFC_Self_Test_Error BSP_FLD32(21)
/* field: EFC_Single_Bit_Error - This bit drives the single bit error signal when bit 16 (Single bit Error OE) is high. */
#define TMS570_EFUSE_EFCBOUND_EFC_Single_Bit_Error BSP_FLD32(20)
/* field: EFC_Instruction_Error - This bit drives the instruction error signal when bit 15 (Instruction Error OE) is high. */
#define TMS570_EFUSE_EFCBOUND_EFC_Instruction_Error BSP_FLD32(19)
/* field: EFC_Autoload_Error - This bit drives the Autoload Error signal when bit 14 (Autoload Error OE) is high. */
#define TMS570_EFUSE_EFCBOUND_EFC_Autoload_Error BSP_FLD32(18)
/* field: Self_Test_Error_OE - The Self Test Error Output Enable bit determines if the EFC Self Test signal comes from the */
#define TMS570_EFUSE_EFCBOUND_Self_Test_Error_OE BSP_FLD32(17)
/* field: Single_Bit_Error_OE - The single bit error output enable signal determines if the EFC Single Bit Error signal comes */
#define TMS570_EFUSE_EFCBOUND_Single_Bit_Error_OE BSP_FLD32(16)
/* field: Instruction_Error_OE - comes from the eFuse controller or from bit 19 of the boundary register. */
#define TMS570_EFUSE_EFCBOUND_Instruction_Error_OE BSP_FLD32(15)
/* field: Autoload_Error_OE - The autoload error output enable signal determines if the EFC Autoload Error signal comes */
#define TMS570_EFUSE_EFCBOUND_Autoload_Error_OE BSP_FLD32(14)
/* field: EFC_ECC_Selftest - The eFuse Controller ECC Selftest Enable bit starts the selftest of the ECC logic if the four */
#define TMS570_EFUSE_EFCBOUND_EFC_ECC_Selftest BSP_FLD32(13)
/* field: Input_Enable - The eFuse Controller ECC Selftest Enable bit starts the selftest of the ECC logic if the four */
#define TMS570_EFUSE_EFCBOUND_Input_Enable(val) BSP_FLD32(val,0, 3)
#define TMS570_EFUSE_EFCBOUND_Input_Enable_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_EFUSE_EFCBOUND_Input_Enable_GET(reg,val) BSP_FLD32SET(reg, val,0, 3)


--------------------TMS570_EFUSEEFCPINS--------------------
/* field: EFC_Selftest_Done - This bit can be polled to determine when the EFC ECC selftest is complete */
#define TMS570_EFUSE_EFCPINS_EFC_Selftest_Done BSP_FLD32(15)
/* field: EFC_Selftest_Error - This bit indicates the pass/fail status of the EFC ECC Selftest once the EFC Selftest Done */
#define TMS570_EFUSE_EFCPINS_EFC_Selftest_Error BSP_FLD32(14)
/* field: EFC_Single_Bit_Error - This bit indicates if a single bit error was corrected by the ECC logic during the autoload */
#define TMS570_EFUSE_EFCPINS_EFC_Single_Bit_Error BSP_FLD32(12)
/* field: EFC_Instruction_Error - This bit indicates an error occured during a factory test or program operation. */
#define TMS570_EFUSE_EFCPINS_EFC_Instruction_Error BSP_FLD32(11)
/* field: EFC_Autoload_Error - This bit indicates that some non-correctable error occurred during the autoload sequence */
#define TMS570_EFUSE_EFCPINS_EFC_Autoload_Error BSP_FLD32(10)

------------------TMS570_EFUSEEFC_ERR_STAT------------------
/* field: Instruc_Done - Instruction done. */
#define TMS570_EFUSE_EFC_ERR_STAT_Instruc_Done BSP_FLD32(5)
/* field: Error_Code - The error status of the last instruction executed by the eFuse Controller */
#define TMS570_EFUSE_EFC_ERR_STAT_Error_Code(val) BSP_FLD32(val,0, 4)
#define TMS570_EFUSE_EFC_ERR_STAT_Error_Code_GET(reg) BSP_FLD32GET(reg,0, 4)
#define TMS570_EFUSE_EFC_ERR_STAT_Error_Code_GET(reg,val) BSP_FLD32SET(reg, val,0, 4)


-------------------TMS570_EFUSEEFC_ST_CY-------------------
/* field: Cycles - This register is used to determine the number of cycles to run the eFuse controller ECC logic self test. */
#define TMS570_EFUSE_EFC_ST_CY_Cycles(val) BSP_FLD32(val,0, 31)
#define TMS570_EFUSE_EFC_ST_CY_Cycles_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_EFUSE_EFC_ST_CY_Cycles_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)


-------------------TMS570_EFUSEEFC_ST_SIG-------------------
/* field: Signature - This register is used to hold the expected signature for the eFuse ECC logic self test. */
#define TMS570_EFUSE_EFC_ST_SIG_Signature(val) BSP_FLD32(val,0, 31)
#define TMS570_EFUSE_EFC_ST_SIG_Signature_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_EFUSE_EFC_ST_SIG_Signature_GET(reg,val) BSP_FLD32SET(reg, val,0, 31)



#endif /* LIBBSP_ARM_TMS570_EFUSE.H */
