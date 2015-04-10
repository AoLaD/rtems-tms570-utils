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
#ifndef LIBBSP_ARM_tms570_N2HET.H
#define LIBBSP_ARM_tms570_N2HET.H

#include <bsp/utility.h>

typedef struct{
  uint32_t HETGCR;            /*Global Configuration Register*/
  uint32_t HETPFR;            /*Prescale Factor Register*/
  uint32_t HETADDR;           /*NHET Current Address Register*/
  uint32_t HETOFF1;           /*Offset Index Priority Level 1 Register*/
  uint32_t HETOFF2;           /*Offset Index Priority Level 2 Register*/
  uint32_t HETINTENAS;        /*Interrupt Enable Set Register*/
  uint32_t HETINTENAC;        /*Interrupt Enable Clear Register*/
  uint32_t HETEXC1;           /*Exception Control Register 1*/
  uint32_t HETEXC2;           /*Exception Control Register 2*/
  uint32_t HETPRY;            /*Interrupt Priority Register*/
  uint32_t HETFLG;            /*Interrupt Flag Register*/
  uint32_t HETAND;            /*AND Share Control Register*/
  uint8_t reserved1 [4];
  uint32_t HETHRSH;           /*HR Share Control Register*/
  uint32_t HETXOR;            /*HR XOR-Share Control Register*/
  uint32_t HETREQENS;         /*Request Enable Set Register*/
  uint32_t HETREQENC;         /*Request Enable Clear Register*/
  uint32_t HETREQDS;          /*Request Destination Select Register*/
  uint8_t reserved2 [4];
  uint32_t HETDIR;            /*NHET Direction Register*/
  uint32_t HETDIN;            /*NHET Data Input Register*/
  uint32_t HETDOUT;           /*NHET Data Output Register*/
  uint32_t HETDSET;           /*NHET Data Set Register*/
  uint32_t HETDCLR;           /*NHET Data Clear Register*/
  uint32_t HETPDR;            /*NHET Open Drain Register*/
  uint32_t HETPULDIS;         /*NHET Pull Disable Register*/
  uint32_t HETPSL;            /*NHET Pull Select Register*/
  uint8_t reserved3 [8];
  uint32_t HETPCR;            /*Parity Control Register*/
  uint32_t HETPAR;            /*Parity Address Register*/
  uint32_t HETPPR;            /*Parity Pin Register*/
  uint32_t HETSFPRLD;         /*Suppression Filter Preload Register*/
  uint32_t HETSFENA;          /*Suppression Filter Enable Register*/
  uint8_t reserved4 [4];
  uint32_t HETLBPSEL;         /*Loop Back Pair Select Register*/
  uint32_t HETLBPDIR;         /*Loop Back Pair Direction Register*/
  uint32_t HETPINDIS;         /*NHET Pin Disable Register*/
} N2HET_struct;

/*--------------------tms570_N2HET_HETGCR--------------------*/
/* field: HET_PIN_ENA - Enables the output buffers of the pin structures depending on the value of nDIS and DIR. */
#define tms570_N2HET_HETGCR_HET_PIN_ENA BSP_FLD32(24)

/* field: MP - Master Priority */
#define tms570_N2HET_HETGCR_MP(val) BSP_FLD32(val,21, 22)
#define tms570_N2HET_HETGCR_MP_GET(reg) BSP_FLD32GET(reg,21, 22)
#define tms570_N2HET_HETGCR_MP_SET(reg,val) BSP_FLD32SET(reg, val,21, 22)

/* field: PPF - Protect Program Fields */
#define tms570_N2HET_HETGCR_PPF BSP_FLD32(18)

/* field: IS - Ignore Suspend */
#define tms570_N2HET_HETGCR_IS BSP_FLD32(17)

/* field: CMS - Clk_master/slave */
#define tms570_N2HET_HETGCR_CMS BSP_FLD32(16)


/*--------------------tms570_N2HET_HETPFR--------------------*/
/* field: LRPFC - oop Resolution Pre-scale Factor Code */
#define tms570_N2HET_HETPFR_LRPFC(val) BSP_FLD32(val,8, 10)
#define tms570_N2HET_HETPFR_LRPFC_GET(reg) BSP_FLD32GET(reg,8, 10)
#define tms570_N2HET_HETPFR_LRPFC_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: HRPFC - High Resolution Pre-scale Factor Code */
#define tms570_N2HET_HETPFR_HRPFC(val) BSP_FLD32(val,0, 5)
#define tms570_N2HET_HETPFR_HRPFC_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_N2HET_HETPFR_HRPFC_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*--------------------tms570_N2HET_HETADDR--------------------*/
/* field: HETADDR - N2HET Current Address */
#define tms570_N2HET_HETADDR_HETADDR(val) BSP_FLD32(val,0, 8)
#define tms570_N2HET_HETADDR_HETADDR_GET(reg) BSP_FLD32GET(reg,0, 8)
#define tms570_N2HET_HETADDR_HETADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*--------------------tms570_N2HET_HETOFF1--------------------*/
/* field: OFFSET1 - HETOFF1[5:0] indexes the currently pending high-priority interrupt. */
#define tms570_N2HET_HETOFF1_OFFSET1(val) BSP_FLD32(val,0, 5)
#define tms570_N2HET_HETOFF1_OFFSET1_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_N2HET_HETOFF1_OFFSET1_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*--------------------tms570_N2HET_HETOFF2--------------------*/
/* field: OFFSET2 - HETOFF2[5:0] indexes the currently pending low-priority interrupt. */
#define tms570_N2HET_HETOFF2_OFFSET2(val) BSP_FLD32(val,0, 5)
#define tms570_N2HET_HETOFF2_OFFSET2_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_N2HET_HETOFF2_OFFSET2_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*------------------tms570_N2HET_HETINTENAS------------------*/
/* field: HETINTENAS - Interrupt Enable Set bits. HETINTENAS is readable and writable in any operation mode. */
#define tms570_N2HET_HETINTENAS_HETINTENAS(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETINTENAS_HETINTENAS_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETINTENAS_HETINTENAS_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_N2HET_HETINTENAC------------------*/
/* field: HETINTENAC - Interrupt Enable Clear bits. HETINTENAC is readable and writable in any operation mode. */
#define tms570_N2HET_HETINTENAC_HETINTENAC(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETINTENAC_HETINTENAC_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETINTENAC_HETINTENAC_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_N2HET_HETEXC1--------------------*/
/* field: APCNT_OVRFL_ENA - APCNT Overflow Enable */
#define tms570_N2HET_HETEXC1_APCNT_OVRFL_ENA BSP_FLD32(24)

/* field: APCNT_UNRFL_ENA - APCNT Underflow Enable */
#define tms570_N2HET_HETEXC1_APCNT_UNRFL_ENA BSP_FLD32(16)

/* field: PRGM_OVRFL_ENA - Program Overflow Enable */
#define tms570_N2HET_HETEXC1_PRGM_OVRFL_ENA BSP_FLD32(8)

/* field: APCNT_OVRFL_PRY - APCNT Overflow Exception Interrupt Priority */
#define tms570_N2HET_HETEXC1_APCNT_OVRFL_PRY BSP_FLD32(2)

/* field: APCNT_UNRFL_PRY - APCNT Underflow Exception Interrupt Priority */
#define tms570_N2HET_HETEXC1_APCNT_UNRFL_PRY BSP_FLD32(1)

/* field: PRGM_OVRFL_PRY - ProgramOverflow Exception Interrupt Priority */
#define tms570_N2HET_HETEXC1_PRGM_OVRFL_PRY BSP_FLD32(0)


/*--------------------tms570_N2HET_HETEXC2--------------------*/
/* field: DEBUG_STATUS_FLAG - Debug Status Flag. */
#define tms570_N2HET_HETEXC2_DEBUG_STATUS_FLAG BSP_FLD32(8)

/* field: APCNT_OVRFL_FLAG - APCNT Overflow Flag */
#define tms570_N2HET_HETEXC2_APCNT_OVRFL_FLAG BSP_FLD32(2)

/* field: APCNT_UNDFL_FLAG - APCNT Underflow Flag */
#define tms570_N2HET_HETEXC2_APCNT_UNDFL_FLAG BSP_FLD32(1)

/* field: PRGM_OVERFL_FLAG - Program Overflow Flag */
#define tms570_N2HET_HETEXC2_PRGM_OVERFL_FLAG BSP_FLD32(0)


/*--------------------tms570_N2HET_HETPRY--------------------*/
/* field: HETPRY - HET Interrupt Priority Level bits */
#define tms570_N2HET_HETPRY_HETPRY(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETPRY_HETPRY_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETPRY_HETPRY_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_N2HET_HETFLG--------------------*/
/* field: HETFLAG - Interrupt Flag Register Bits */
#define tms570_N2HET_HETFLG_HETFLAG(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETFLG_HETFLAG_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETFLG_HETFLAG_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_N2HET_HETAND--------------------*/
/* field: AND_SHARE - AND Share Enable */
#define tms570_N2HET_HETAND_AND_SHARE(val) BSP_FLD32(val,0, 15)
#define tms570_N2HET_HETAND_AND_SHARE_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_N2HET_HETAND_AND_SHARE_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_N2HET_HETHRSH--------------------*/
/* field: HR_SHARE - HR Share Bits */
#define tms570_N2HET_HETHRSH_HR_SHARE(val) BSP_FLD32(val,0, 15)
#define tms570_N2HET_HETHRSH_HR_SHARE_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_N2HET_HETHRSH_HR_SHARE_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_N2HET_HETXOR--------------------*/
/* field: XOR_SHARE - XOR Share Enable */
#define tms570_N2HET_HETXOR_XOR_SHARE(val) BSP_FLD32(val,0, 15)
#define tms570_N2HET_HETXOR_XOR_SHARE_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_N2HET_HETXOR_XOR_SHARE_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_N2HET_HETREQENS-------------------*/
/* field: REQ_ENA_n - Request Enable Bits */
#define tms570_N2HET_HETREQENS_REQ_ENA_n(val) BSP_FLD32(val,0, 7)
#define tms570_N2HET_HETREQENS_REQ_ENA_n_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_N2HET_HETREQENS_REQ_ENA_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-------------------tms570_N2HET_HETREQENC-------------------*/
/* field: REQ_DIS_n - Request Disable Bits */
#define tms570_N2HET_HETREQENC_REQ_DIS_n(val) BSP_FLD32(val,0, 7)
#define tms570_N2HET_HETREQENC_REQ_DIS_n_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_N2HET_HETREQENC_REQ_DIS_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-------------------tms570_N2HET_HETREQDS-------------------*/
/* field: TDBS_n - HTU, DMA or Both Select Bits */
#define tms570_N2HET_HETREQDS_TDBS_n(val) BSP_FLD32(val,16, 23)
#define tms570_N2HET_HETREQDS_TDBS_n_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_N2HET_HETREQDS_TDBS_n_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: TDS_n - HTU or DMA Select Bits */
#define tms570_N2HET_HETREQDS_TDS_n(val) BSP_FLD32(val,0, 7)
#define tms570_N2HET_HETREQDS_TDS_n_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_N2HET_HETREQDS_TDS_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*--------------------tms570_N2HET_HETDIR--------------------*/
/* field: HETDIR_n - Data direction of NHET pins */
#define tms570_N2HET_HETDIR_HETDIR_n(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETDIR_HETDIR_n_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETDIR_HETDIR_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_N2HET_HETDIN--------------------*/
/* field: HETDIN_n - Data input. This bit displays the logic state of the pin. */
#define tms570_N2HET_HETDIN_HETDIN_n(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETDIN_HETDIN_n_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETDIN_HETDIN_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_N2HET_HETDOUT--------------------*/
/* field: HETDOUT_n - Data out write. Writes to this bit will only take effect when the pin is configured as an output. */
#define tms570_N2HET_HETDOUT_HETDOUT_n(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETDOUT_HETDOUT_n_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETDOUT_HETDOUT_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_N2HET_HETDSET--------------------*/
/* field: HETDSET_n - This register allows bits of HETDOUT to be set while avoiding the pitfalls of a readmodify- write */
#define tms570_N2HET_HETDSET_HETDSET_n(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETDSET_HETDSET_n_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETDSET_HETDSET_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_N2HET_HETDCLR--------------------*/
/* field: HETDCLR_n - This register allows bits of HETDOUT to be cleared while avoiding the pitfalls of a read-modifywrite */
#define tms570_N2HET_HETDCLR_HETDCLR_n(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETDCLR_HETDCLR_n_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETDCLR_HETDCLR_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_N2HET_HETPDR--------------------*/
/* field: HETPDR_n - Open drain control for HET[n] pins */
#define tms570_N2HET_HETPDR_HETPDR_n(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETPDR_HETPDR_n_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETPDR_HETPDR_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_N2HET_HETPULDIS-------------------*/
/* field: HETPULDIS_n - Pull disable for N2HET pins */
#define tms570_N2HET_HETPULDIS_HETPULDIS_n(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETPULDIS_HETPULDIS_n_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETPULDIS_HETPULDIS_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_N2HET_HETPSL--------------------*/
/* field: HETPSL_n - Pull select for NHET pins */
#define tms570_N2HET_HETPSL_HETPSL_n(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETPSL_HETPSL_n_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETPSL_HETPSL_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_N2HET_HETPCR--------------------*/
/* field: TEST - Test Bit. */
#define tms570_N2HET_HETPCR_TEST BSP_FLD32(8)

/* field: PARITY_ENA - Enable/disable parity checking. */
#define tms570_N2HET_HETPCR_PARITY_ENA(val) BSP_FLD32(val,0, 3)
#define tms570_N2HET_HETPCR_PARITY_ENA_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_N2HET_HETPCR_PARITY_ENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*--------------------tms570_N2HET_HETPAR--------------------*/
/* field: PAOFF - Parity Error Address Offset. */
#define tms570_N2HET_HETPAR_PAOFF(val) BSP_FLD32(val,2, 12)
#define tms570_N2HET_HETPAR_PAOFF_GET(reg) BSP_FLD32GET(reg,2, 12)
#define tms570_N2HET_HETPAR_PAOFF_SET(reg,val) BSP_FLD32SET(reg, val,2, 12)


/*--------------------tms570_N2HET_HETPPR--------------------*/
/* field: HETPPR_n - NHET Parity Pin Select Bits - Allows HET[n] pins to be configured to drive to a known state when */
#define tms570_N2HET_HETPPR_HETPPR_n(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETPPR_HETPPR_n_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETPPR_HETPPR_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_N2HET_HETSFPRLD-------------------*/
/* field: CCDIV - Counter Clock Divider */
#define tms570_N2HET_HETSFPRLD_CCDIV(val) BSP_FLD32(val,16, 17)
#define tms570_N2HET_HETSFPRLD_CCDIV_GET(reg) BSP_FLD32GET(reg,16, 17)
#define tms570_N2HET_HETSFPRLD_CCDIV_SET(reg,val) BSP_FLD32SET(reg, val,16, 17)

/* field: CPRLD - Counter Preload Value */
#define tms570_N2HET_HETSFPRLD_CPRLD(val) BSP_FLD32(val,0, 9)
#define tms570_N2HET_HETSFPRLD_CPRLD_GET(reg) BSP_FLD32GET(reg,0, 9)
#define tms570_N2HET_HETSFPRLD_CPRLD_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)


/*-------------------tms570_N2HET_HETSFENA-------------------*/
/* field: HETSFENA_n - Suppression Filter Enable Bits */
#define tms570_N2HET_HETSFENA_HETSFENA_n(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETSFENA_HETSFENA_n_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETSFENA_HETSFENA_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_N2HET_HETLBPSEL-------------------*/
/* field: LBPTYPE - Loop Back Pair Type Select Bits */
#define tms570_N2HET_HETLBPSEL_LBPTYPE(val) BSP_FLD32(val,16, 31)
#define tms570_N2HET_HETLBPSEL_LBPTYPE_GET(reg) BSP_FLD32GET(reg,16, 31)
#define tms570_N2HET_HETLBPSEL_LBPTYPE_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: LBPSEL - Loop Back Pair Select Bits */
#define tms570_N2HET_HETLBPSEL_LBPSEL(val) BSP_FLD32(val,0, 15)
#define tms570_N2HET_HETLBPSEL_LBPSEL_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_N2HET_HETLBPSEL_LBPSEL_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_N2HET_HETLBPDIR-------------------*/
/* field: LBPTSTENA - Loopback Test Enable Key */
#define tms570_N2HET_HETLBPDIR_LBPTSTENA(val) BSP_FLD32(val,16, 19)
#define tms570_N2HET_HETLBPDIR_LBPTSTENA_GET(reg) BSP_FLD32GET(reg,16, 19)
#define tms570_N2HET_HETLBPDIR_LBPTSTENA_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: LBPDIR - Loop Back Pair Direction Bits */
#define tms570_N2HET_HETLBPDIR_LBPDIR(val) BSP_FLD32(val,0, 15)
#define tms570_N2HET_HETLBPDIR_LBPDIR_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_N2HET_HETLBPDIR_LBPDIR_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_N2HET_HETPINDIS-------------------*/
/* field: HETPINDIS_n - N2HET Pin Disable Bits */
#define tms570_N2HET_HETPINDIS_HETPINDIS_n(val) BSP_FLD32(val,0, 31)
#define tms570_N2HET_HETPINDIS_HETPINDIS_n_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_N2HET_HETPINDIS_HETPINDIS_n_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)



#endif /* LIBBSP_ARM_tms570_N2HET.H */
