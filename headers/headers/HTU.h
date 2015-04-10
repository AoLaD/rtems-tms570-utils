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
#ifndef LIBBSP_ARM_tms570_HTU.H
#define LIBBSP_ARM_tms570_HTU.H

#include <bsp/utility.h>

typedef struct{
  uint32_t HTU GC;            /*Global Control Register*/
  uint32_t HTU CPENA;         /*Control Packet Enable Register*/
  uint32_t HTU BUSY0;         /*Control Packet Busy Register 0*/
  uint32_t HTU BUSY1;         /*Control Packet Busy Register 1*/
  uint32_t HTU BUSY2;         /*Control Packet Busy Register 2*/
  uint32_t HTU BUSY3;         /*Control Packet Busy Register 3*/
  uint32_t HTU ACPE;          /*Active Control Packet and Error Register*/
  uint8_t reserved1 [4];
  uint32_t HTU RLBECTRL;      /*Request Lost and Bus Error Control Register*/
  uint32_t HTU BFINTS;        /*Buffer Full Interrupt Enable Set Register*/
  uint32_t HTU BFINTC;        /*Buffer Full Interrupt Enable Clear Register*/
  uint8_t reserved2 [8];
  uint32_t HTU INTOFF0;       /*Interrupt Offset Register 0*/
  uint32_t HTU INTOFF1;       /*Interrupt Offset Register 1*/
  uint32_t HTU BIM;           /*Buffer Initialization Mode Register*/
  uint32_t HTU RLOSTFL;       /*Request Lost Flag Register*/
  uint32_t HTU BFINTFL;       /*Buffer Full Interrupt Flag Register*/
  uint32_t HTU BERINTFL;      /*BER Interrupt Flag Register*/
  uint32_t HTU MP1S;          /*Memory Protection 1 Start Address Register*/
  uint32_t HTU MP1E;          /*Memory Protection 1 End Address Register*/
  uint32_t HTU DCTRL;         /*Debug Control Register*/
  uint32_t HTU WPR;           /*Watch Point Register*/
  uint32_t HTU WMR;           /*Watch Mask Register*/
  uint32_t HTU ID;            /*Module Identification Register*/
  uint32_t HTU PCR;           /*Parity Control Register*/
  uint32_t HTU PAR;           /*Parity Address Register*/
  uint8_t reserved3 [4];
  uint32_t HTU MPCS;          /*Memory Protection Control and Status Register*/
  uint32_t HTU MP0S;          /*Memory Protection 0 Start Address Register*/
  uint32_t HTU MP0E;          /*Memory Protection 0 End Address Register*/
} HTU_struct;

/*---------------------tms570_HTU_HTU GC---------------------*/
/* field: VBUSHOLD - Hold the VBUS bus */
#define tms570_HTU_HTU GC_VBUSHOLD BSP_FLD32(24)

/* field: HTUEN - Transfer Unit Enable Bit */
#define tms570_HTU_HTU GC_HTUEN BSP_FLD32(16)

/* field: DEBM - Debug Mode */
#define tms570_HTU_HTU GC_DEBM BSP_FLD32(8)

/* field: HTURES - HTU Software Reset Request */
#define tms570_HTU_HTU GC_HTURES BSP_FLD32(0)


/*--------------------tms570_HTU_HTU CPENA--------------------*/
/* field: CPENA - CP Enable Bits */
#define tms570_HTU_HTU CPENA_CPENA(val) BSP_FLD32(val,0, 15)
#define tms570_HTU_HTU CPENA_CPENA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_HTU_HTU CPENA_CPENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_HTU_HTU BUSY0--------------------*/
/* field: BUSY0A - Busy Flag for CP A of DCP 0 */
#define tms570_HTU_HTU BUSY0_BUSY0A BSP_FLD32(24)

/* field: BUSY0B - Busy Flag for CP B of DCP 0 */
#define tms570_HTU_HTU BUSY0_BUSY0B BSP_FLD32(16)

/* field: BUSY1A - Busy Flag for CP A of DCP 1 */
#define tms570_HTU_HTU BUSY0_BUSY1A BSP_FLD32(8)

/* field: BUSY1B - Busy Flag for CP B of DCP 1 */
#define tms570_HTU_HTU BUSY0_BUSY1B BSP_FLD32(0)


/*--------------------tms570_HTU_HTU BUSY1--------------------*/
/* field: BUSY2A - Busy Flag for CP A of DCP 2 */
#define tms570_HTU_HTU BUSY1_BUSY2A BSP_FLD32(24)

/* field: BUSY2B - Busy Flag for CP B of DCP 2 */
#define tms570_HTU_HTU BUSY1_BUSY2B BSP_FLD32(16)

/* field: BUSY3A - Busy Flag for CP A of DCP 3 */
#define tms570_HTU_HTU BUSY1_BUSY3A BSP_FLD32(8)

/* field: BUSY3B - Busy Flag for CP B of DCP 3 */
#define tms570_HTU_HTU BUSY1_BUSY3B BSP_FLD32(0)


/*--------------------tms570_HTU_HTU BUSY2--------------------*/
/* field: BUSY4A - Busy Flag for CP A of DCP 4 */
#define tms570_HTU_HTU BUSY2_BUSY4A BSP_FLD32(24)

/* field: BUSY4B - Busy Flag for CP B of DCP 4 */
#define tms570_HTU_HTU BUSY2_BUSY4B BSP_FLD32(16)

/* field: BUSY5A - Busy Flag for CP A of DCP 5 */
#define tms570_HTU_HTU BUSY2_BUSY5A BSP_FLD32(8)

/* field: BUSY5B - Busy Flag for CP B of DCP 5 */
#define tms570_HTU_HTU BUSY2_BUSY5B BSP_FLD32(0)


/*--------------------tms570_HTU_HTU BUSY3--------------------*/
/* field: BUSY6A - Busy Flag for CP A of DCP 6 */
#define tms570_HTU_HTU BUSY3_BUSY6A BSP_FLD32(24)

/* field: BUSY6B - Busy Flag for CP B of DCP 6 */
#define tms570_HTU_HTU BUSY3_BUSY6B BSP_FLD32(16)

/* field: BUSY7A - Busy Flag for CP A of DCP 7 */
#define tms570_HTU_HTU BUSY3_BUSY7A BSP_FLD32(8)

/* field: BUSY7B - Busy Flag for CP B of DCP 7 */
#define tms570_HTU_HTU BUSY3_BUSY7B BSP_FLD32(0)


/*--------------------tms570_HTU_HTU ACPE--------------------*/
/* field: ERRF - Error Flag */
#define tms570_HTU_HTU ACPE_ERRF BSP_FLD32(31)


/*------------------tms570_HTU_HTU RLBECTRL------------------*/
/* field: BERINTENA - Bus Error Interrupt Enable Bit */
#define tms570_HTU_HTU RLBECTRL_BERINTENA BSP_FLD32(16)

/* field: CORL - Continue On Request Lost Error */
#define tms570_HTU_HTU RLBECTRL_CORL BSP_FLD32(8)

/* field: RLINTENA - Request Lost Interrupt Enable Bit */
#define tms570_HTU_HTU RLBECTRL_RLINTENA BSP_FLD32(0)


/*-------------------tms570_HTU_HTU BFINTS-------------------*/
/* field: BFINTENA - Bus Full Interrupt Enable Bits. */
#define tms570_HTU_HTU BFINTS_BFINTENA(val) BSP_FLD32(val,0, 15)
#define tms570_HTU_HTU BFINTS_BFINTENA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_HTU_HTU BFINTS_BFINTENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_HTU_HTU BFINTC-------------------*/
/* field: BFINTDIS -  */
#define tms570_HTU_HTU BFINTC_BFINTDIS(val) BSP_FLD32(val,0, 15)
#define tms570_HTU_HTU BFINTC_BFINTDIS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_HTU_HTU BFINTC_BFINTDIS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_HTU_HTU INTOFF0-------------------*/
/* field: INTTYPE0 - Interrupt Type of Interrupt Line 0. */
#define tms570_HTU_HTU INTOFF0_INTTYPE0(val) BSP_FLD32(val,8, 10)
#define tms570_HTU_HTU INTOFF0_INTTYPE0_GET(reg) BSP_FLD32GET(reg,8, 10)
#define tms570_HTU_HTU INTOFF0_INTTYPE0_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: CPOFF0 - CP Offset. */
#define tms570_HTU_HTU INTOFF0_CPOFF0(val) BSP_FLD32(val,0, 4)
#define tms570_HTU_HTU INTOFF0_CPOFF0_GET(reg) BSP_FLD32GET(reg,0, 4)
#define tms570_HTU_HTU INTOFF0_CPOFF0_SET(reg,val) BSP_FLD32SET(reg, val,0, 4)


/*-------------------tms570_HTU_HTU INTOFF1-------------------*/
/* field: INTTYPE1 - INTTYPE1 Interrupt Type of Interrupt Line 1. */
#define tms570_HTU_HTU INTOFF1_INTTYPE1(val) BSP_FLD32(val,8, 10)
#define tms570_HTU_HTU INTOFF1_INTTYPE1_GET(reg) BSP_FLD32GET(reg,8, 10)
#define tms570_HTU_HTU INTOFF1_INTTYPE1_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: CPOFF1 - CP Offset. */
#define tms570_HTU_HTU INTOFF1_CPOFF1(val) BSP_FLD32(val,0, 4)
#define tms570_HTU_HTU INTOFF1_CPOFF1_GET(reg) BSP_FLD32GET(reg,0, 4)
#define tms570_HTU_HTU INTOFF1_CPOFF1_SET(reg,val) BSP_FLD32SET(reg, val,0, 4)


/*---------------------tms570_HTU_HTU BIM---------------------*/
/* field: BIM - Buffer Initialization Mode */
#define tms570_HTU_HTU BIM_BIM(val) BSP_FLD32(val,0, 7)
#define tms570_HTU_HTU BIM_BIM_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_HTU_HTU BIM_BIM_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-------------------tms570_HTU_HTU RLOSTFL-------------------*/
/* field: CPRLFL - CP Request Lost Flags */
#define tms570_HTU_HTU RLOSTFL_CPRLFL(val) BSP_FLD32(val,0, 15)
#define tms570_HTU_HTU RLOSTFL_CPRLFL_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_HTU_HTU RLOSTFL_CPRLFL_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_HTU_HTU BFINTFL-------------------*/
/* field: BFINTFL - Buffer Full Interrupt Flags */
#define tms570_HTU_HTU BFINTFL_BFINTFL(val) BSP_FLD32(val,0, 15)
#define tms570_HTU_HTU BFINTFL_BFINTFL_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_HTU_HTU BFINTFL_BFINTFL_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*------------------tms570_HTU_HTU BERINTFL------------------*/
/* field: BERINTFL - Bus Error Interrupt Flags */
#define tms570_HTU_HTU BERINTFL_BERINTFL(val) BSP_FLD32(val,0, 15)
#define tms570_HTU_HTU BERINTFL_BERINTFL_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_HTU_HTU BERINTFL_BERINTFL_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_HTU_HTU MP1S--------------------*/
/* field: STARTADDRESS1 - he start address defines at which main memory address the region begins. */
#define tms570_HTU_HTU MP1S_STARTADDRESS1(val) BSP_FLD32(val,0, 31)
#define tms570_HTU_HTU MP1S_STARTADDRESS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_HTU_HTU MP1S_STARTADDRESS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_HTU_HTU MP1E--------------------*/
/* field: ENDADDRESS1 - The end address defines at which address the region ends. */
#define tms570_HTU_HTU MP1E_ENDADDRESS1(val) BSP_FLD32(val,0, 31)
#define tms570_HTU_HTU MP1E_ENDADDRESS1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_HTU_HTU MP1E_ENDADDRESS1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_HTU_HTU DCTRL--------------------*/
/* field: CPNUM - CP Number. These bit fields indicate the CP which should cause the watch point to match. */
#define tms570_HTU_HTU DCTRL_CPNUM(val) BSP_FLD32(val,24, 27)
#define tms570_HTU_HTU DCTRL_CPNUM_GET(reg) BSP_FLD32GET(reg,24, 27)
#define tms570_HTU_HTU DCTRL_CPNUM_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: HTUDBGS - HTU Debug Status. */
#define tms570_HTU_HTU DCTRL_HTUDBGS BSP_FLD32(16)

/* field: DBREN - Debug Request Enable */
#define tms570_HTU_HTU DCTRL_DBREN BSP_FLD32(0)


/*---------------------tms570_HTU_HTU WPR---------------------*/
/* field: WP - Watch Point Register */
#define tms570_HTU_HTU WPR_WP(val) BSP_FLD32(val,0, 31)
#define tms570_HTU_HTU WPR_WP_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_HTU_HTU WPR_WP_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_HTU_HTU WMR---------------------*/
/* field: WM - Watch Mask Register */
#define tms570_HTU_HTU WMR_WM(val) BSP_FLD32(val,0, 31)
#define tms570_HTU_HTU WMR_WM_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_HTU_HTU WMR_WM_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_HTU_HTU ID---------------------*/
/* field: CLASS - Module Class */
#define tms570_HTU_HTU ID_CLASS(val) BSP_FLD32(val,16, 23)
#define tms570_HTU_HTU ID_CLASS_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_HTU_HTU ID_CLASS_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: TYPE - Subtype within a Class */
#define tms570_HTU_HTU ID_TYPE(val) BSP_FLD32(val,8, 15)
#define tms570_HTU_HTU ID_TYPE_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_HTU_HTU ID_TYPE_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: REV - Module Revision Number */
#define tms570_HTU_HTU ID_REV(val) BSP_FLD32(val,0, 7)
#define tms570_HTU_HTU ID_REV_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_HTU_HTU ID_REV_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------tms570_HTU_HTU PCR---------------------*/
/* field: COPE - Continue on Parity Error */
#define tms570_HTU_HTU PCR_COPE BSP_FLD32(16)

/* field: TEST - Test. */
#define tms570_HTU_HTU PCR_TEST BSP_FLD32(8)

/* field: PARITY_ENA - Enable/Disable Parity Checking. */
#define tms570_HTU_HTU PCR_PARITY_ENA(val) BSP_FLD32(val,0, 3)
#define tms570_HTU_HTU PCR_PARITY_ENA_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_HTU_HTU PCR_PARITY_ENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------tms570_HTU_HTU PAR---------------------*/
/* field: PEFT - Parity Error Fault Flag. */
#define tms570_HTU_HTU PAR_PEFT BSP_FLD32(16)

/* field: PAOFF - PAOFF */
#define tms570_HTU_HTU PAR_PAOFF(val) BSP_FLD32(val,0, 8)
#define tms570_HTU_HTU PAR_PAOFF_GET(reg) BSP_FLD32GET(reg,0, 8)
#define tms570_HTU_HTU PAR_PAOFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*--------------------tms570_HTU_HTU MPCS--------------------*/
/* field: CPNUM0 - Control Packet Number for single memory protection region configuration. */
#define tms570_HTU_HTU MPCS_CPNUM0(val) BSP_FLD32(val,24, 27)
#define tms570_HTU_HTU MPCS_CPNUM0_GET(reg) BSP_FLD32GET(reg,24, 27)
#define tms570_HTU_HTU MPCS_CPNUM0_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: MPEFT1 - MPEFT1 */
#define tms570_HTU_HTU MPCS_MPEFT1 BSP_FLD32(17)

/* field: MPEFT0 - Memory Protection Error Fault Flag 0. */
#define tms570_HTU_HTU MPCS_MPEFT0 BSP_FLD32(16)

/* field: CPNUM1 - Control Packet Number for single memory protection region configuration. */
#define tms570_HTU_HTU MPCS_CPNUM1(val) BSP_FLD32(val,8, 11)
#define tms570_HTU_HTU MPCS_CPNUM1_GET(reg) BSP_FLD32GET(reg,8, 11)
#define tms570_HTU_HTU MPCS_CPNUM1_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)


/*--------------------tms570_HTU_HTU MP0S--------------------*/
/* field: ISTARTADDRESS0 - The start address defines at which main memory address the region begins. */
#define tms570_HTU_HTU MP0S_ISTARTADDRESS0(val) BSP_FLD32(val,0, 31)
#define tms570_HTU_HTU MP0S_ISTARTADDRESS0_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_HTU_HTU MP0S_ISTARTADDRESS0_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_HTU_HTU MP0E--------------------*/
/* field: ENDADDRESS0 - The end address defines at which address the region ends. */
#define tms570_HTU_HTU MP0E_ENDADDRESS0(val) BSP_FLD32(val,0, 31)
#define tms570_HTU_HTU MP0E_ENDADDRESS0_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_HTU_HTU MP0E_ENDADDRESS0_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)



#endif /* LIBBSP_ARM_tms570_HTU.H */
