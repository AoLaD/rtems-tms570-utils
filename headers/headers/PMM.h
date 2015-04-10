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
#ifndef LIBBSP_ARM_tms570_PMM.H
#define LIBBSP_ARM_tms570_PMM.H

#include <bsp/utility.h>

typedef struct{
  uint32_t LOGICPDPWRCTRL0;   /*Logic Power Domain Control Register 0*/
  uint8_t reserved1 [12];
  uint32_t MEMPDPWRCTRL0;     /*Memory Power Domain Control Register 0*/
  uint8_t reserved2 [12];
  uint32_t PDCLKDIS;          /*Power Domain Clock Disable Register*/
  uint32_t PDCLKDISSET;       /*Power Domain Clock Disable Set Register*/
  uint32_t PDCLKDISCLR;       /*Power Domain Clock Disable Clear Register*/
  uint8_t reserved3 [20];
  uint32_t LOGICPDPWRSTAT0;   /*Logic Power Domain PD2 Power Status Register*/
  uint32_t LOGICPDPWRSTAT1;   /*Logic Power Domain PD3 Power Status Register*/
  uint32_t LOGICPDPWRSTAT2;   /*Logic Power Domain PD4 Power Status Register*/
  uint32_t LOGICPDPWRSTAT3;   /*Logic Power Domain PD5 Power Status Register*/
  uint8_t reserved4 [48];
  uint32_t MEMPDPWRSTAT0;     /*Memory Power Domain RAM_PD1 Power Status Register*/
  uint32_t MEMPDPWRSTAT1;     /*Memory Power Domain RAM_PD2 Power Status Register*/
  uint32_t MEMPDPWRSTAT2;     /*Memory Power Domain RAM_PD3 Power Status Register*/
  uint8_t reserved5 [20];
  uint32_t GLOBALCTRL1;       /*Global Control Register 1*/
  uint8_t reserved6 [4];
  uint32_t GLOBALSTAT;        /*Global Status Register*/
  uint32_t PRCKEYREG;         /*PSCON Diagnostic Compare Key Register*/
  uint32_t LPDDCSTAT1;        /*LogicPD PSCON Diagnostic Compare Status Register 1*/
  uint32_t LPDDCSTAT2;        /*LogicPD PSCON Diagnostic Compare Status Register 2*/
  uint32_t MPDDCSTAT1;        /*Memory PD PSCON Diagnostic Compare Status Register 1*/
  uint32_t MPDDCSTAT2;        /*Memory PD PSCON Diagnostic Compare Status Register 2*/
  uint32_t ISODIAGSTAT;       /*Isolation Diagnostic Status Register*/
} PMM_struct;

/*-----------------tms570_PMM_LOGICPDPWRCTRL0-----------------*/
/* field: LOGICPDON0 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define tms570_PMM_LOGICPDPWRCTRL0_LOGICPDON0(val) BSP_FLD32(val,24, 27)
#define tms570_PMM_LOGICPDPWRCTRL0_LOGICPDON0_GET(reg) BSP_FLD32GET(reg,24, 27)
#define tms570_PMM_LOGICPDPWRCTRL0_LOGICPDON0_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: LOGICPDON1 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define tms570_PMM_LOGICPDPWRCTRL0_LOGICPDON1(val) BSP_FLD32(val,16, 19)
#define tms570_PMM_LOGICPDPWRCTRL0_LOGICPDON1_GET(reg) BSP_FLD32GET(reg,16, 19)
#define tms570_PMM_LOGICPDPWRCTRL0_LOGICPDON1_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: LOGICPDON2 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define tms570_PMM_LOGICPDPWRCTRL0_LOGICPDON2(val) BSP_FLD32(val,8, 11)
#define tms570_PMM_LOGICPDPWRCTRL0_LOGICPDON2_GET(reg) BSP_FLD32GET(reg,8, 11)
#define tms570_PMM_LOGICPDPWRCTRL0_LOGICPDON2_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)

/* field: LOGICPDON3 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define tms570_PMM_LOGICPDPWRCTRL0_LOGICPDON3(val) BSP_FLD32(val,0, 3)
#define tms570_PMM_LOGICPDPWRCTRL0_LOGICPDON3_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_PMM_LOGICPDPWRCTRL0_LOGICPDON3_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*------------------tms570_PMM_MEMPDPWRCTRL0------------------*/
/* field: MEMPDON0 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define tms570_PMM_MEMPDPWRCTRL0_MEMPDON0(val) BSP_FLD32(val,24, 27)
#define tms570_PMM_MEMPDPWRCTRL0_MEMPDON0_GET(reg) BSP_FLD32GET(reg,24, 27)
#define tms570_PMM_MEMPDPWRCTRL0_MEMPDON0_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: MEMPDON1 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define tms570_PMM_MEMPDPWRCTRL0_MEMPDON1(val) BSP_FLD32(val,16, 19)
#define tms570_PMM_MEMPDPWRCTRL0_MEMPDON1_GET(reg) BSP_FLD32GET(reg,16, 19)
#define tms570_PMM_MEMPDPWRCTRL0_MEMPDON1_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: MEMPDON2 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define tms570_PMM_MEMPDPWRCTRL0_MEMPDON2(val) BSP_FLD32(val,8, 11)
#define tms570_PMM_MEMPDPWRCTRL0_MEMPDON2_GET(reg) BSP_FLD32GET(reg,8, 11)
#define tms570_PMM_MEMPDPWRCTRL0_MEMPDON2_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)


/*--------------------tms570_PMM_PDCLKDIS--------------------*/
/* field: PDCLK_DIS[3] - Read in User and Privileged Mode returns the current value of PDCLK_DIS[3]. */
#define tms570_PMM_PDCLKDIS_PDCLK_DIS[3] BSP_FLD32(3)

/* field: PDCLK_DIS[2] - Read in User and Privileged Mode returns the current value of PDCLK_DIS[2]. */
#define tms570_PMM_PDCLKDIS_PDCLK_DIS[2] BSP_FLD32(2)

/* field: PDCLK_DIS[1] - ead in User and Privileged Mode returns the current value of PDCLK_DIS[1]. */
#define tms570_PMM_PDCLKDIS_PDCLK_DIS[1] BSP_FLD32(1)

/* field: PDCLK_DIS[0] - Read in User and Privileged Mode returns the current value of PDCLK_DIS[0]. */
#define tms570_PMM_PDCLKDIS_PDCLK_DIS[0] BSP_FLD32(0)


/*-------------------tms570_PMM_PDCLKDISSET-------------------*/
/* field: PDCLK_DISSET[3] - Read in User and Privileged Mode returns the current value of PDCLK_DISSET[3]. */
#define tms570_PMM_PDCLKDISSET_PDCLK_DISSET[3] BSP_FLD32(3)

/* field: PDCLK_DISSET[2] - Privileged Mode only. */
#define tms570_PMM_PDCLKDISSET_PDCLK_DISSET[2] BSP_FLD32(2)

/* field: PDCLK_DISSET[1] - Read in User and Privileged Mode returns the current value of PDCLK_DISSET[1]. */
#define tms570_PMM_PDCLKDISSET_PDCLK_DISSET[1] BSP_FLD32(1)

/* field: PDCLK_DISSET[0] - Read in User and Privileged Mode returns the current value of PDCLK_DISSET[0]. */
#define tms570_PMM_PDCLKDISSET_PDCLK_DISSET[0] BSP_FLD32(0)


/*-------------------tms570_PMM_PDCLKDISCLR-------------------*/
/* field: PDCLK_DISCLR[3] - PDCLK_DISCLR[3] */
#define tms570_PMM_PDCLKDISCLR_PDCLK_DISCLR[3] BSP_FLD32(3)

/* field: PDCLK_DISCLR[2] - Read in User and Privileged Mode returns the current value of PDCLK_DIS[2]. */
#define tms570_PMM_PDCLKDISCLR_PDCLK_DISCLR[2] BSP_FLD32(2)

/* field: PDCLK_DISCLR[1] - Read in User and Privileged Mode returns the current value of PDCLK_DIS[1]. */
#define tms570_PMM_PDCLKDISCLR_PDCLK_DISCLR[1] BSP_FLD32(1)

/* field: PDCLK_DISCLR[0] - Read in User and Privileged Mode returns the current value of PDCLK_DIS[0]. */
#define tms570_PMM_PDCLKDISCLR_PDCLK_DISCLR[0] BSP_FLD32(0)


/*-----------------tms570_PMM_LOGICPDPWRSTAT0-----------------*/
/* field: LOGIC_IN_TRANS0 - Logic in transition status for power domain PD2. */
#define tms570_PMM_LOGICPDPWRSTAT0_LOGIC_IN_TRANS0 BSP_FLD32(24)

/* field: MEM_IN_TRANS0 - Memory in transition status for power domain PD2. */
#define tms570_PMM_LOGICPDPWRSTAT0_MEM_IN_TRANS0 BSP_FLD32(16)

/* field: DOMAIN_ON0 - Current state of power domain PD2. */
#define tms570_PMM_LOGICPDPWRSTAT0_DOMAIN_ON0 BSP_FLD32(8)

/* field: LOGICPDPWR_STAT0 - Logic power domain PD2 power state. */
#define tms570_PMM_LOGICPDPWRSTAT0_LOGICPDPWR_STAT0(val) BSP_FLD32(val,0, 1)
#define tms570_PMM_LOGICPDPWRSTAT0_LOGICPDPWR_STAT0_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_PMM_LOGICPDPWRSTAT0_LOGICPDPWR_STAT0_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*-----------------tms570_PMM_LOGICPDPWRSTAT1-----------------*/
/* field: LOGIC_IN_TRANS1 - Logic in transition status for power domain PD3. */
#define tms570_PMM_LOGICPDPWRSTAT1_LOGIC_IN_TRANS1 BSP_FLD32(24)

/* field: MEM_IN_TRANS1 - Memory in transition status for power domain PD3. */
#define tms570_PMM_LOGICPDPWRSTAT1_MEM_IN_TRANS1 BSP_FLD32(16)

/* field: DOMAIN_ON1 - Current state of power domain PD3. */
#define tms570_PMM_LOGICPDPWRSTAT1_DOMAIN_ON1 BSP_FLD32(8)

/* field: LOGICPDPWR_STAT1 - Logic power domain PD3 power state. */
#define tms570_PMM_LOGICPDPWRSTAT1_LOGICPDPWR_STAT1(val) BSP_FLD32(val,0, 1)
#define tms570_PMM_LOGICPDPWRSTAT1_LOGICPDPWR_STAT1_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_PMM_LOGICPDPWRSTAT1_LOGICPDPWR_STAT1_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*-----------------tms570_PMM_LOGICPDPWRSTAT2-----------------*/
/* field: LOGIC_IN_TRANS2 - Logic in transition status for power domain PD4. */
#define tms570_PMM_LOGICPDPWRSTAT2_LOGIC_IN_TRANS2 BSP_FLD32(24)

/* field: MEM_IN_TRANS2 - Memory in transition status for power domain PD4. */
#define tms570_PMM_LOGICPDPWRSTAT2_MEM_IN_TRANS2 BSP_FLD32(16)

/* field: DOMAIN_ON2 - Current state of power domain PD4. */
#define tms570_PMM_LOGICPDPWRSTAT2_DOMAIN_ON2 BSP_FLD32(8)

/* field: LOGICPDPWR_STAT2 - Logic power domain PD4 power state. */
#define tms570_PMM_LOGICPDPWRSTAT2_LOGICPDPWR_STAT2(val) BSP_FLD32(val,0, 1)
#define tms570_PMM_LOGICPDPWRSTAT2_LOGICPDPWR_STAT2_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_PMM_LOGICPDPWRSTAT2_LOGICPDPWR_STAT2_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*-----------------tms570_PMM_LOGICPDPWRSTAT3-----------------*/
/* field: LOGIC_IN_TRANS3 - Logic in transition status for power domain PD5. */
#define tms570_PMM_LOGICPDPWRSTAT3_LOGIC_IN_TRANS3 BSP_FLD32(24)

/* field: MEM_IN_TRANS3 - Memory in transition status for power domain PD5. */
#define tms570_PMM_LOGICPDPWRSTAT3_MEM_IN_TRANS3 BSP_FLD32(16)

/* field: DOMAIN_ON3 - Current state of power domain PD5. */
#define tms570_PMM_LOGICPDPWRSTAT3_DOMAIN_ON3 BSP_FLD32(8)

/* field: LOGICPDPWR_STAT3 - Logic power domain PD5 power state. */
#define tms570_PMM_LOGICPDPWRSTAT3_LOGICPDPWR_STAT3(val) BSP_FLD32(val,0, 1)
#define tms570_PMM_LOGICPDPWRSTAT3_LOGICPDPWR_STAT3_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_PMM_LOGICPDPWRSTAT3_LOGICPDPWR_STAT3_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*------------------tms570_PMM_MEMPDPWRSTAT0------------------*/
/* field: LOGIC_IN_TRANS0 - Logic in transition status for power domain RAM_PD1. */
#define tms570_PMM_MEMPDPWRSTAT0_LOGIC_IN_TRANS0 BSP_FLD32(24)

/* field: MEM_IN_TRANS0 - Memory in transition status for power domain RAM_PD1. */
#define tms570_PMM_MEMPDPWRSTAT0_MEM_IN_TRANS0 BSP_FLD32(16)

/* field: DOMAIN_ON0 - Current state of power domain RAM_PD1. */
#define tms570_PMM_MEMPDPWRSTAT0_DOMAIN_ON0 BSP_FLD32(8)

/* field: MEMPDPWR_STAT0 - Memory power domain RAM_PD1 power state. */
#define tms570_PMM_MEMPDPWRSTAT0_MEMPDPWR_STAT0(val) BSP_FLD32(val,0, 1)
#define tms570_PMM_MEMPDPWRSTAT0_MEMPDPWR_STAT0_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_PMM_MEMPDPWRSTAT0_MEMPDPWR_STAT0_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*------------------tms570_PMM_MEMPDPWRSTAT1------------------*/
/* field: LOGIC_IN_TRANS1 - Logic in transition status for power domain RAM_PD2. */
#define tms570_PMM_MEMPDPWRSTAT1_LOGIC_IN_TRANS1 BSP_FLD32(24)

/* field: MEM_IN_TRANS1 - Memory in transition status for power domain RAM_PD2. */
#define tms570_PMM_MEMPDPWRSTAT1_MEM_IN_TRANS1 BSP_FLD32(16)

/* field: DOMAIN_ON1 - Current state of power domain RAM_PD2. */
#define tms570_PMM_MEMPDPWRSTAT1_DOMAIN_ON1 BSP_FLD32(8)

/* field: MEMPDPWR_STAT1 - Memory power domain RAM_PD2power state. */
#define tms570_PMM_MEMPDPWRSTAT1_MEMPDPWR_STAT1(val) BSP_FLD32(val,0, 1)
#define tms570_PMM_MEMPDPWRSTAT1_MEMPDPWR_STAT1_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_PMM_MEMPDPWRSTAT1_MEMPDPWR_STAT1_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*------------------tms570_PMM_MEMPDPWRSTAT2------------------*/
/* field: LOGIC_IN_TRANS2 - Logic in transition status for power domain RAM_PD3. */
#define tms570_PMM_MEMPDPWRSTAT2_LOGIC_IN_TRANS2 BSP_FLD32(24)

/* field: MEM_IN_TRANS2 - Memory in transition status for power domain RAM_PD3. */
#define tms570_PMM_MEMPDPWRSTAT2_MEM_IN_TRANS2 BSP_FLD32(16)

/* field: DOMAIN_ON2 - Current state of power domain RAM_PD3. */
#define tms570_PMM_MEMPDPWRSTAT2_DOMAIN_ON2 BSP_FLD32(8)

/* field: MEMPDPWR_STAT2 - Memory power domain RAM_PD3 power state. */
#define tms570_PMM_MEMPDPWRSTAT2_MEMPDPWR_STAT2(val) BSP_FLD32(val,0, 1)
#define tms570_PMM_MEMPDPWRSTAT2_MEMPDPWR_STAT2_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_PMM_MEMPDPWRSTAT2_MEMPDPWR_STAT2_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*-------------------tms570_PMM_GLOBALCTRL1-------------------*/
/* field: PMCTRL_PWRDN - PMC/PSCON Power Down */
#define tms570_PMM_GLOBALCTRL1_PMCTRL_PWRDN BSP_FLD32(8)

/* field: AUTO_CLK_WAKE_ENA - Automatic Clock Enable on Wake Up */
#define tms570_PMM_GLOBALCTRL1_AUTO_CLK_WAKE_ENA BSP_FLD32(0)


/*-------------------tms570_PMM_GLOBALSTAT-------------------*/
/* field: PMCTRL_IDLE - State of PMC and all PSCONs. */
#define tms570_PMM_GLOBALSTAT_PMCTRL_IDLE BSP_FLD32(0)


/*--------------------tms570_PMM_PRCKEYREG--------------------*/
/* field: MKEY - Diagnostic PSCON Mode Key. The mode key is applied to all individual PSCON compare units. */
#define tms570_PMM_PRCKEYREG_MKEY(val) BSP_FLD32(val,0, 3)
#define tms570_PMM_PRCKEYREG_MKEY_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_PMM_PRCKEYREG_MKEY_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-------------------tms570_PMM_LPDDCSTAT1-------------------*/
/* field: LCMPE[3-0] - Logic Power Domain Compare Error */
#define tms570_PMM_LPDDCSTAT1_LCMPE[3-0](val) BSP_FLD32(val,16, 19)
#define tms570_PMM_LPDDCSTAT1_LCMPE[3-0]_GET(reg) BSP_FLD32GET(reg,16, 19)
#define tms570_PMM_LPDDCSTAT1_LCMPE[3-0]_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: LSTC[3-0] - Logic Power Domain Self-test Complete */
#define tms570_PMM_LPDDCSTAT1_LSTC[3-0](val) BSP_FLD32(val,0, 3)
#define tms570_PMM_LPDDCSTAT1_LSTC[3-0]_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_PMM_LPDDCSTAT1_LSTC[3-0]_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-------------------tms570_PMM_LPDDCSTAT2-------------------*/
/* field: LSTET[3-0] - Logic Power Domain Self-test Error Type */
#define tms570_PMM_LPDDCSTAT2_LSTET[3-0](val) BSP_FLD32(val,16, 19)
#define tms570_PMM_LPDDCSTAT2_LSTET[3-0]_GET(reg) BSP_FLD32GET(reg,16, 19)
#define tms570_PMM_LPDDCSTAT2_LSTET[3-0]_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: LSTE[3-0] - Logic Power Domain Self-test Error */
#define tms570_PMM_LPDDCSTAT2_LSTE[3-0](val) BSP_FLD32(val,0, 3)
#define tms570_PMM_LPDDCSTAT2_LSTE[3-0]_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_PMM_LPDDCSTAT2_LSTE[3-0]_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-------------------tms570_PMM_MPDDCSTAT1-------------------*/
/* field: MCMPE[2-0] - Memory Power Domain Compare Error */
#define tms570_PMM_MPDDCSTAT1_MCMPE[2-0](val) BSP_FLD32(val,16, 18)
#define tms570_PMM_MPDDCSTAT1_MCMPE[2-0]_GET(reg) BSP_FLD32GET(reg,16, 18)
#define tms570_PMM_MPDDCSTAT1_MCMPE[2-0]_SET(reg,val) BSP_FLD32SET(reg, val,16, 18)

/* field: MSTC[2-0] - Memory Power Domain Self-test Complete */
#define tms570_PMM_MPDDCSTAT1_MSTC[2-0](val) BSP_FLD32(val,0, 2)
#define tms570_PMM_MPDDCSTAT1_MSTC[2-0]_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_PMM_MPDDCSTAT1_MSTC[2-0]_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-------------------tms570_PMM_MPDDCSTAT2-------------------*/
/* field: MSTET[2-0] - Memory Power Domain Self-test Error Type */
#define tms570_PMM_MPDDCSTAT2_MSTET[2-0](val) BSP_FLD32(val,16, 18)
#define tms570_PMM_MPDDCSTAT2_MSTET[2-0]_GET(reg) BSP_FLD32GET(reg,16, 18)
#define tms570_PMM_MPDDCSTAT2_MSTET[2-0]_SET(reg,val) BSP_FLD32SET(reg, val,16, 18)

/* field: MSTE[2-0] - Memory Power Domain Self-test Error */
#define tms570_PMM_MPDDCSTAT2_MSTE[2-0](val) BSP_FLD32(val,0, 2)
#define tms570_PMM_MPDDCSTAT2_MSTE[2-0]_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_PMM_MPDDCSTAT2_MSTE[2-0]_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-------------------tms570_PMM_ISODIAGSTAT-------------------*/
/* field: ISO_DIAG[3-0] - Isolation Diagnostic */
#define tms570_PMM_ISODIAGSTAT_ISO_DIAG[3-0](val) BSP_FLD32(val,0, 3)
#define tms570_PMM_ISODIAGSTAT_ISO_DIAG[3-0]_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_PMM_ISODIAGSTAT_ISO_DIAG[3-0]_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)



#endif /* LIBBSP_ARM_tms570_PMM.H */
