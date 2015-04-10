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
#ifndef LIBBSP_ARM_tms570_PBIST.H
#define LIBBSP_ARM_tms570_PBIST.H

#include <bsp/utility.h>

typedef struct{
  uint32_t DNW[88];           /*Reserved DO NOT WRITE*/
  uint32_t RAMT;              /*RAM Configuration Register*/
  uint32_t DLR;               /*Datalogger Register*/
  uint8_t reserved1 [24];
  uint32_t PACT;              /*PBIST Activate/ROM Clock Enable Register*/
  uint32_t PBISTID;           /*PBIST ID Register*/
  uint32_t OVER;              /*Override Register*/
  uint8_t reserved2 [4];
  uint32_t FSRF0;             /*Fail Status Fail Register 0*/
  uint8_t reserved3 [4];
  uint32_t FSRC0;             /*Fail Status Count Register 0*/
  uint32_t FSRC1;             /*Fail Status Count Register 1*/
  uint32_t FSRA0;             /*Fail Status Address 0 Register*/
  uint32_t FSRA1;             /*Fail Status Address 1 Register*/
  uint32_t FSRDL0;            /*Fail Status Data Register 0*/
  uint8_t reserved4 [4];
  uint32_t FSRDL1;            /*Fail Status Data Register 1*/
  uint8_t reserved5 [12];
  uint32_t ROM;               /*ROM Mask Register*/
  uint32_t ALGO;              /*ROM Algorithm Mask Register*/
  uint32_t RINFOL;            /*RAM Info Mask Lower Register*/
  uint32_t RINFOUL;           /*RAM Info Mask Lower Register*/
} PBIST_struct;

/*----------------------tms570_PBIST_DNW----------------------*/
/* field: Reserved - Do not write */
#define tms570_PBIST_DNW_Reserved(val) BSP_FLD32(val,0, 31)
#define tms570_PBIST_DNW_Reserved_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_PBIST_DNW_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_PBIST_RAMT---------------------*/
/* field: RGS - Ram Group Select. Refer Table 2-5 for information on the RGS value for each memory. */
#define tms570_PBIST_RAMT_RGS(val) BSP_FLD32(val,24, 31)
#define tms570_PBIST_RAMT_RGS_GET(reg) BSP_FLD32GET(reg,24, 31)
#define tms570_PBIST_RAMT_RGS_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: RDS - Return Data Select. Refer Table 2-5 for information on the RDS values for each memory. */
#define tms570_PBIST_RAMT_RDS(val) BSP_FLD32(val,16, 23)
#define tms570_PBIST_RAMT_RDS_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_PBIST_RAMT_RDS_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: DWR - Data Width Register */
#define tms570_PBIST_RAMT_DWR(val) BSP_FLD32(val,8, 15)
#define tms570_PBIST_RAMT_DWR_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_PBIST_RAMT_DWR_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: SMS - Sense Margin Select Register */
#define tms570_PBIST_RAMT_SMS(val) BSP_FLD32(val,6, 7)
#define tms570_PBIST_RAMT_SMS_GET(reg) BSP_FLD32GET(reg,6, 7)
#define tms570_PBIST_RAMT_SMS_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: PLS - Pipeline Latency Select */
#define tms570_PBIST_RAMT_PLS(val) BSP_FLD32(val,2, 5)
#define tms570_PBIST_RAMT_PLS_GET(reg) BSP_FLD32GET(reg,2, 5)
#define tms570_PBIST_RAMT_PLS_SET(reg,val) BSP_FLD32SET(reg, val,2, 5)

/* field: RLS - RAM Latency Select */
#define tms570_PBIST_RAMT_RLS(val) BSP_FLD32(val,0, 1)
#define tms570_PBIST_RAMT_RLS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_PBIST_RAMT_RLS_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*----------------------tms570_PBIST_DLR----------------------*/
/* field: DLR4 - Config access: setting this bit allows the host processor to configure the PBIST controller registers */
#define tms570_PBIST_DLR_DLR4 BSP_FLD32(4)

/* field: DLR2 - ROM-based testing: setting this bit enables the PBIST controller to execute test algorithms that are */
#define tms570_PBIST_DLR_DLR2 BSP_FLD32(2)


/*---------------------tms570_PBIST_PACT---------------------*/
/* field: PACT1 - PBIST Activate */
#define tms570_PBIST_PACT_PACT1 BSP_FLD32(1)

/* field: PACT0 - ROM Clock Enable Register */
#define tms570_PBIST_PACT_PACT0 BSP_FLD32(0)


/*--------------------tms570_PBIST_PBISTID--------------------*/
/* field: PBIST_ID - This is a unique ID assigned to each PBIST controller in a device with multiple PBIST controllers. */
#define tms570_PBIST_PBISTID_PBIST_ID(val) BSP_FLD32(val,0, 7)
#define tms570_PBIST_PBISTID_PBIST_ID_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_PBIST_PBISTID_PBIST_ID_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------tms570_PBIST_OVER---------------------*/
/* field: OVER0 - RINFO Override Bit */
#define tms570_PBIST_OVER_OVER0 BSP_FLD32(0)


/*---------------------tms570_PBIST_FSRF0---------------------*/
/* field: FSRF0 - Fail Status 0. */
#define tms570_PBIST_FSRF0_FSRF0 BSP_FLD32(0)


/*---------------------tms570_PBIST_FSRC0---------------------*/
/* field: FSRC0 - Fail Status Count 0. Indicates the number of failures on port 0. */
#define tms570_PBIST_FSRC0_FSRC0(val) BSP_FLD32(val,0, 7)
#define tms570_PBIST_FSRC0_FSRC0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_PBIST_FSRC0_FSRC0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------tms570_PBIST_FSRC1---------------------*/
/* field: FSRC1 - Fail Status Count 1. Indicates the number of failures on port 1. */
#define tms570_PBIST_FSRC1_FSRC1(val) BSP_FLD32(val,0, 7)
#define tms570_PBIST_FSRC1_FSRC1_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_PBIST_FSRC1_FSRC1_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------tms570_PBIST_FSRA0---------------------*/
/* field: FSRA0 - Fail Status Address 0. Contains the address of the first failure. */
#define tms570_PBIST_FSRA0_FSRA0(val) BSP_FLD32(val,0, 15)
#define tms570_PBIST_FSRA0_FSRA0_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_PBIST_FSRA0_FSRA0_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_PBIST_FSRA1---------------------*/
/* field: FSRA1 - Fail Status Address 1. Contains the address of the first failure. */
#define tms570_PBIST_FSRA1_FSRA1(val) BSP_FLD32(val,0, 15)
#define tms570_PBIST_FSRA1_FSRA1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_PBIST_FSRA1_FSRA1_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_PBIST_FSRDL0--------------------*/
/* field: FSRDL1 - Failure data on port 1 */
#define tms570_PBIST_FSRDL0_FSRDL1(val) BSP_FLD32(val,0, 31)
#define tms570_PBIST_FSRDL0_FSRDL1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_PBIST_FSRDL0_FSRDL1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_PBIST_FSRDL1--------------------*/
/* field: FSRDL1 - Failure data on port 1 */
#define tms570_PBIST_FSRDL1_FSRDL1(val) BSP_FLD32(val,0, 31)
#define tms570_PBIST_FSRDL1_FSRDL1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_PBIST_FSRDL1_FSRDL1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------tms570_PBIST_ROM----------------------*/
/* field: ROM - ROM Mask */
#define tms570_PBIST_ROM_ROM(val) BSP_FLD32(val,0, 1)
#define tms570_PBIST_ROM_ROM_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_PBIST_ROM_ROM_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*---------------------tms570_PBIST_ALGO---------------------*/
/* field: ROM_ALG_MASK - Each bit corresponds to a specific algorithm */
#define tms570_PBIST_ALGO_ROM_ALG_MASK(val) BSP_FLD32(val,0, 31)
#define tms570_PBIST_ALGO_ROM_ALG_MASK_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_PBIST_ALGO_ROM_ALG_MASK_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_PBIST_RINFOL--------------------*/
/* field: RAM_ALG_MASK_LOW - Each bit corresponds to a specific algorithm */
#define tms570_PBIST_RINFOL_RAM_ALG_MASK_LOW(val) BSP_FLD32(val,0, 31)
#define tms570_PBIST_RINFOL_RAM_ALG_MASK_LOW_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_PBIST_RINFOL_RAM_ALG_MASK_LOW_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_PBIST_RINFOUL--------------------*/
/* field: RAM_ALG_MASK_UP - Each bit corresponds to a specific algorithm */
#define tms570_PBIST_RINFOUL_RAM_ALG_MASK_UP(val) BSP_FLD32(val,0, 31)
#define tms570_PBIST_RINFOUL_RAM_ALG_MASK_UP_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_PBIST_RINFOUL_RAM_ALG_MASK_UP_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)



#endif /* LIBBSP_ARM_tms570_PBIST.H */
