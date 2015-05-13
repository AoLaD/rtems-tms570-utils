/*
 * Copyright (c) 2014-2015, Premysl Houdek <kom541000@gmail.com>
 *
 * Czech Technical University in Prague
 * Zikova 1903/4
 * 166 36 Praha 6
 * Czech Republic
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those
 * of the authors and should not be interpreted as representing official policies,
 * either expressed or implied, of the FreeBSD Project.
*/
#ifndef LIBBSP_ARM_tms570_PMM
#define LIBBSP_ARM_tms570_PMM

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
} tms570_pmm_t;

/*-------------------TMS570_LOGICPDPWRCTRL0-------------------*/
/* field: LOGICPDON0 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define TMS570_LOGICPDPWRCTRL0_LOGICPDON0(val) BSP_FLD32(val,24, 27)
#define TMS570_LOGICPDPWRCTRL0_LOGICPDON0_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_LOGICPDPWRCTRL0_LOGICPDON0_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: LOGICPDON1 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define TMS570_LOGICPDPWRCTRL0_LOGICPDON1(val) BSP_FLD32(val,16, 19)
#define TMS570_LOGICPDPWRCTRL0_LOGICPDON1_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_LOGICPDPWRCTRL0_LOGICPDON1_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: LOGICPDON2 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define TMS570_LOGICPDPWRCTRL0_LOGICPDON2(val) BSP_FLD32(val,8, 11)
#define TMS570_LOGICPDPWRCTRL0_LOGICPDON2_GET(reg) BSP_FLD32GET(reg,8, 11)
#define TMS570_LOGICPDPWRCTRL0_LOGICPDON2_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)

/* field: LOGICPDON3 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define TMS570_LOGICPDPWRCTRL0_LOGICPDON3(val) BSP_FLD32(val,0, 3)
#define TMS570_LOGICPDPWRCTRL0_LOGICPDON3_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_LOGICPDPWRCTRL0_LOGICPDON3_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*--------------------TMS570_MEMPDPWRCTRL0--------------------*/
/* field: MEMPDON0 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define TMS570_MEMPDPWRCTRL0_MEMPDON0(val) BSP_FLD32(val,24, 27)
#define TMS570_MEMPDPWRCTRL0_MEMPDON0_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_MEMPDPWRCTRL0_MEMPDON0_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: MEMPDON1 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define TMS570_MEMPDPWRCTRL0_MEMPDON1(val) BSP_FLD32(val,16, 19)
#define TMS570_MEMPDPWRCTRL0_MEMPDON1_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_MEMPDPWRCTRL0_MEMPDON1_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: MEMPDON2 - Read in User and Privileged Mode. Write in Privileged Mode only. */
#define TMS570_MEMPDPWRCTRL0_MEMPDON2(val) BSP_FLD32(val,8, 11)
#define TMS570_MEMPDPWRCTRL0_MEMPDON2_GET(reg) BSP_FLD32GET(reg,8, 11)
#define TMS570_MEMPDPWRCTRL0_MEMPDON2_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)


/*----------------------TMS570_PDCLKDIS----------------------*/
/* field: PDCLK_DIS_3 - Read in User and Privileged Mode returns the current value of PDCLK_DIS[3]. */
#define TMS570_PDCLKDIS_PDCLK_DIS_3 BSP_FLD32(3)

/* field: PDCLK_DIS_2 - Read in User and Privileged Mode returns the current value of PDCLK_DIS[2]. */
#define TMS570_PDCLKDIS_PDCLK_DIS_2 BSP_FLD32(2)

/* field: PDCLK_DIS_1 - ead in User and Privileged Mode returns the current value of PDCLK_DIS[1]. */
#define TMS570_PDCLKDIS_PDCLK_DIS_1 BSP_FLD32(1)

/* field: PDCLK_DIS_0 - Read in User and Privileged Mode returns the current value of PDCLK_DIS[0]. */
#define TMS570_PDCLKDIS_PDCLK_DIS_0 BSP_FLD32(0)


/*---------------------TMS570_PDCLKDISSET---------------------*/
/* field: PDCLK_DISSET_3 - Read in User and Privileged Mode returns the current value of PDCLK_DISSET[3]. */
#define TMS570_PDCLKDISSET_PDCLK_DISSET_3 BSP_FLD32(3)

/* field: PDCLK_DISSET_2 - Privileged Mode only. */
#define TMS570_PDCLKDISSET_PDCLK_DISSET_2 BSP_FLD32(2)

/* field: PDCLK_DISSET_1 - Read in User and Privileged Mode returns the current value of PDCLK_DISSET[1]. */
#define TMS570_PDCLKDISSET_PDCLK_DISSET_1 BSP_FLD32(1)

/* field: PDCLK_DISSET_0 - Read in User and Privileged Mode returns the current value of PDCLK_DISSET[0]. */
#define TMS570_PDCLKDISSET_PDCLK_DISSET_0 BSP_FLD32(0)


/*---------------------TMS570_PDCLKDISCLR---------------------*/
/* field: PDCLK_DISCLR_3 - PDCLK_DISCLR[3] */
#define TMS570_PDCLKDISCLR_PDCLK_DISCLR_3 BSP_FLD32(3)

/* field: PDCLK_DISCLR_2 - Read in User and Privileged Mode returns the current value of PDCLK_DIS[2]. */
#define TMS570_PDCLKDISCLR_PDCLK_DISCLR_2 BSP_FLD32(2)

/* field: PDCLK_DISCLR_1 - Read in User and Privileged Mode returns the current value of PDCLK_DIS[1]. */
#define TMS570_PDCLKDISCLR_PDCLK_DISCLR_1 BSP_FLD32(1)

/* field: PDCLK_DISCLR_0 - Read in User and Privileged Mode returns the current value of PDCLK_DIS[0]. */
#define TMS570_PDCLKDISCLR_PDCLK_DISCLR_0 BSP_FLD32(0)


/*-------------------TMS570_LOGICPDPWRSTAT0-------------------*/
/* field: LOGIC_IN_TRANS0 - Logic in transition status for power domain PD2. */
#define TMS570_LOGICPDPWRSTAT0_LOGIC_IN_TRANS0 BSP_FLD32(24)

/* field: MEM_IN_TRANS0 - Memory in transition status for power domain PD2. */
#define TMS570_LOGICPDPWRSTAT0_MEM_IN_TRANS0 BSP_FLD32(16)

/* field: DOMAIN_ON0 - Current state of power domain PD2. */
#define TMS570_LOGICPDPWRSTAT0_DOMAIN_ON0 BSP_FLD32(8)

/* field: LOGICPDPWR_STAT0 - Logic power domain PD2 power state. */
#define TMS570_LOGICPDPWRSTAT0_LOGICPDPWR_STAT0(val) BSP_FLD32(val,0, 1)
#define TMS570_LOGICPDPWRSTAT0_LOGICPDPWR_STAT0_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_LOGICPDPWRSTAT0_LOGICPDPWR_STAT0_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*-------------------TMS570_LOGICPDPWRSTAT1-------------------*/
/* field: LOGIC_IN_TRANS1 - Logic in transition status for power domain PD3. */
#define TMS570_LOGICPDPWRSTAT1_LOGIC_IN_TRANS1 BSP_FLD32(24)

/* field: MEM_IN_TRANS1 - Memory in transition status for power domain PD3. */
#define TMS570_LOGICPDPWRSTAT1_MEM_IN_TRANS1 BSP_FLD32(16)

/* field: DOMAIN_ON1 - Current state of power domain PD3. */
#define TMS570_LOGICPDPWRSTAT1_DOMAIN_ON1 BSP_FLD32(8)

/* field: LOGICPDPWR_STAT1 - Logic power domain PD3 power state. */
#define TMS570_LOGICPDPWRSTAT1_LOGICPDPWR_STAT1(val) BSP_FLD32(val,0, 1)
#define TMS570_LOGICPDPWRSTAT1_LOGICPDPWR_STAT1_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_LOGICPDPWRSTAT1_LOGICPDPWR_STAT1_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*-------------------TMS570_LOGICPDPWRSTAT2-------------------*/
/* field: LOGIC_IN_TRANS2 - Logic in transition status for power domain PD4. */
#define TMS570_LOGICPDPWRSTAT2_LOGIC_IN_TRANS2 BSP_FLD32(24)

/* field: MEM_IN_TRANS2 - Memory in transition status for power domain PD4. */
#define TMS570_LOGICPDPWRSTAT2_MEM_IN_TRANS2 BSP_FLD32(16)

/* field: DOMAIN_ON2 - Current state of power domain PD4. */
#define TMS570_LOGICPDPWRSTAT2_DOMAIN_ON2 BSP_FLD32(8)

/* field: LOGICPDPWR_STAT2 - Logic power domain PD4 power state. */
#define TMS570_LOGICPDPWRSTAT2_LOGICPDPWR_STAT2(val) BSP_FLD32(val,0, 1)
#define TMS570_LOGICPDPWRSTAT2_LOGICPDPWR_STAT2_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_LOGICPDPWRSTAT2_LOGICPDPWR_STAT2_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*-------------------TMS570_LOGICPDPWRSTAT3-------------------*/
/* field: LOGIC_IN_TRANS3 - Logic in transition status for power domain PD5. */
#define TMS570_LOGICPDPWRSTAT3_LOGIC_IN_TRANS3 BSP_FLD32(24)

/* field: MEM_IN_TRANS3 - Memory in transition status for power domain PD5. */
#define TMS570_LOGICPDPWRSTAT3_MEM_IN_TRANS3 BSP_FLD32(16)

/* field: DOMAIN_ON3 - Current state of power domain PD5. */
#define TMS570_LOGICPDPWRSTAT3_DOMAIN_ON3 BSP_FLD32(8)

/* field: LOGICPDPWR_STAT3 - Logic power domain PD5 power state. */
#define TMS570_LOGICPDPWRSTAT3_LOGICPDPWR_STAT3(val) BSP_FLD32(val,0, 1)
#define TMS570_LOGICPDPWRSTAT3_LOGICPDPWR_STAT3_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_LOGICPDPWRSTAT3_LOGICPDPWR_STAT3_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*--------------------TMS570_MEMPDPWRSTAT0--------------------*/
/* field: LOGIC_IN_TRANS0 - Logic in transition status for power domain RAM_PD1. */
#define TMS570_MEMPDPWRSTAT0_LOGIC_IN_TRANS0 BSP_FLD32(24)

/* field: MEM_IN_TRANS0 - Memory in transition status for power domain RAM_PD1. */
#define TMS570_MEMPDPWRSTAT0_MEM_IN_TRANS0 BSP_FLD32(16)

/* field: DOMAIN_ON0 - Current state of power domain RAM_PD1. */
#define TMS570_MEMPDPWRSTAT0_DOMAIN_ON0 BSP_FLD32(8)

/* field: MEMPDPWR_STAT0 - Memory power domain RAM_PD1 power state. */
#define TMS570_MEMPDPWRSTAT0_MEMPDPWR_STAT0(val) BSP_FLD32(val,0, 1)
#define TMS570_MEMPDPWRSTAT0_MEMPDPWR_STAT0_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_MEMPDPWRSTAT0_MEMPDPWR_STAT0_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*--------------------TMS570_MEMPDPWRSTAT1--------------------*/
/* field: LOGIC_IN_TRANS1 - Logic in transition status for power domain RAM_PD2. */
#define TMS570_MEMPDPWRSTAT1_LOGIC_IN_TRANS1 BSP_FLD32(24)

/* field: MEM_IN_TRANS1 - Memory in transition status for power domain RAM_PD2. */
#define TMS570_MEMPDPWRSTAT1_MEM_IN_TRANS1 BSP_FLD32(16)

/* field: DOMAIN_ON1 - Current state of power domain RAM_PD2. */
#define TMS570_MEMPDPWRSTAT1_DOMAIN_ON1 BSP_FLD32(8)

/* field: MEMPDPWR_STAT1 - Memory power domain RAM_PD2power state. */
#define TMS570_MEMPDPWRSTAT1_MEMPDPWR_STAT1(val) BSP_FLD32(val,0, 1)
#define TMS570_MEMPDPWRSTAT1_MEMPDPWR_STAT1_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_MEMPDPWRSTAT1_MEMPDPWR_STAT1_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*--------------------TMS570_MEMPDPWRSTAT2--------------------*/
/* field: LOGIC_IN_TRANS2 - Logic in transition status for power domain RAM_PD3. */
#define TMS570_MEMPDPWRSTAT2_LOGIC_IN_TRANS2 BSP_FLD32(24)

/* field: MEM_IN_TRANS2 - Memory in transition status for power domain RAM_PD3. */
#define TMS570_MEMPDPWRSTAT2_MEM_IN_TRANS2 BSP_FLD32(16)

/* field: DOMAIN_ON2 - Current state of power domain RAM_PD3. */
#define TMS570_MEMPDPWRSTAT2_DOMAIN_ON2 BSP_FLD32(8)

/* field: MEMPDPWR_STAT2 - Memory power domain RAM_PD3 power state. */
#define TMS570_MEMPDPWRSTAT2_MEMPDPWR_STAT2(val) BSP_FLD32(val,0, 1)
#define TMS570_MEMPDPWRSTAT2_MEMPDPWR_STAT2_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_MEMPDPWRSTAT2_MEMPDPWR_STAT2_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*---------------------TMS570_GLOBALCTRL1---------------------*/
/* field: PMCTRL_PWRDN - PMC/PSCON Power Down */
#define TMS570_GLOBALCTRL1_PMCTRL_PWRDN BSP_FLD32(8)

/* field: AUTO_CLK_WAKE_ENA - Automatic Clock Enable on Wake Up */
#define TMS570_GLOBALCTRL1_AUTO_CLK_WAKE_ENA BSP_FLD32(0)


/*---------------------TMS570_GLOBALSTAT---------------------*/
/* field: PMCTRL_IDLE - State of PMC and all PSCONs. */
#define TMS570_GLOBALSTAT_PMCTRL_IDLE BSP_FLD32(0)


/*----------------------TMS570_PRCKEYREG----------------------*/
/* field: MKEY - Diagnostic PSCON Mode Key. The mode key is applied to all individual PSCON compare units. */
#define TMS570_PRCKEYREG_MKEY(val) BSP_FLD32(val,0, 3)
#define TMS570_PRCKEYREG_MKEY_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_PRCKEYREG_MKEY_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------TMS570_LPDDCSTAT1---------------------*/
/* field: LCMPE - Logic Power Domain Compare Error */
#define TMS570_LPDDCSTAT1_LCMPE(val) BSP_FLD32(val,16, 19)
#define TMS570_LPDDCSTAT1_LCMPE_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_LPDDCSTAT1_LCMPE_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: LSTC - Logic Power Domain Self-test Complete */
#define TMS570_LPDDCSTAT1_LSTC(val) BSP_FLD32(val,0, 3)
#define TMS570_LPDDCSTAT1_LSTC_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_LPDDCSTAT1_LSTC_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------TMS570_LPDDCSTAT2---------------------*/
/* field: LSTET - Logic Power Domain Self-test Error Type */
#define TMS570_LPDDCSTAT2_LSTET(val) BSP_FLD32(val,16, 19)
#define TMS570_LPDDCSTAT2_LSTET_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_LPDDCSTAT2_LSTET_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: LSTE - Logic Power Domain Self-test Error */
#define TMS570_LPDDCSTAT2_LSTE(val) BSP_FLD32(val,0, 3)
#define TMS570_LPDDCSTAT2_LSTE_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_LPDDCSTAT2_LSTE_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------TMS570_MPDDCSTAT1---------------------*/
/* field: MCMPE - Memory Power Domain Compare Error */
#define TMS570_MPDDCSTAT1_MCMPE(val) BSP_FLD32(val,16, 18)
#define TMS570_MPDDCSTAT1_MCMPE_GET(reg) BSP_FLD32GET(reg,16, 18)
#define TMS570_MPDDCSTAT1_MCMPE_SET(reg,val) BSP_FLD32SET(reg, val,16, 18)

/* field: MSTC - Memory Power Domain Self-test Complete */
#define TMS570_MPDDCSTAT1_MSTC(val) BSP_FLD32(val,0, 2)
#define TMS570_MPDDCSTAT1_MSTC_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_MPDDCSTAT1_MSTC_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*---------------------TMS570_MPDDCSTAT2---------------------*/
/* field: MSTET - Memory Power Domain Self-test Error Type */
#define TMS570_MPDDCSTAT2_MSTET(val) BSP_FLD32(val,16, 18)
#define TMS570_MPDDCSTAT2_MSTET_GET(reg) BSP_FLD32GET(reg,16, 18)
#define TMS570_MPDDCSTAT2_MSTET_SET(reg,val) BSP_FLD32SET(reg, val,16, 18)

/* field: MSTE - Memory Power Domain Self-test Error */
#define TMS570_MPDDCSTAT2_MSTE(val) BSP_FLD32(val,0, 2)
#define TMS570_MPDDCSTAT2_MSTE_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_MPDDCSTAT2_MSTE_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*---------------------TMS570_ISODIAGSTAT---------------------*/
/* field: ISO_DIAG - Isolation Diagnostic */
#define TMS570_ISODIAGSTAT_ISO_DIAG(val) BSP_FLD32(val,0, 3)
#define TMS570_ISODIAGSTAT_ISO_DIAG_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_ISODIAGSTAT_ISO_DIAG_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)



#endif /* LIBBSP_ARM_tms570_PMM */
