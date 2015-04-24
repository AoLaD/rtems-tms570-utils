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
#ifndef LIBBSP_ARM_tms570_IOMM.H
#define LIBBSP_ARM_tms570_IOMM.H

#include <bsp/utility.h>

typedef struct{
  uint32_t REVISION_REG;      /*Revision Register*/
  uint8_t reserved1 [28];
  uint32_t ENDIAN_REG;        /*Device Endianness Register*/
  uint8_t reserved2 [20];
  uint32_t KICK_REG0;         /*Kicker Register 0*/
  uint32_t KICK_REG1;         /*Kicker Register 1*/
  uint8_t reserved3 [160];
  uint32_t ERR_RAW_STATUS_REG;/*Error Raw Status / Set Register*/
  uint32_t ERR_ENABLED_STATUS_REG;/*Error Enabled Status / Clear Register*/
  uint32_t ERR_ENABLE_REG;    /*Error Signaling Enable Register*/
  uint32_t ERR_ENABLE_CLR_REG;/*Error Signaling Enable Clear Register*/
  uint8_t reserved4 [4];
  uint32_t FAULT_ADDRESS_REG; /*Fault Address Register*/
  uint32_t FAULT_STATUS_REG;  /*Fault Status Register*/
  uint32_t FAULT_CLEAR_REG;   /*Fault Clear Register*/
  uint8_t reserved5 [16];
  uint32_t PINMMR[32];        /*Pin Multiplexing Control Registers*/
} IOMM_struct;

/*------------------tms570_IOMM_REVISION_REG------------------*/
/* field: REV_SCHEME - Revision Scheme */
#define tms570_IOMM_REVISION_REG_REV_SCHEME(val) BSP_FLD32(val,30, 31)
#define tms570_IOMM_REVISION_REG_REV_SCHEME_GET(reg) BSP_FLD32GET(reg,30, 31)
#define tms570_IOMM_REVISION_REG_REV_SCHEME_SET(reg,val) BSP_FLD32SET(reg, val,30, 31)

/* field: REV_MODULE - Module Id */
#define tms570_IOMM_REVISION_REG_REV_MODULE(val) BSP_FLD32(val,16, 27)
#define tms570_IOMM_REVISION_REG_REV_MODULE_GET(reg) BSP_FLD32GET(reg,16, 27)
#define tms570_IOMM_REVISION_REG_REV_MODULE_SET(reg,val) BSP_FLD32SET(reg, val,16, 27)

/* field: REV_RTL - RTL Revision */
#define tms570_IOMM_REVISION_REG_REV_RTL(val) BSP_FLD32(val,11, 15)
#define tms570_IOMM_REVISION_REG_REV_RTL_GET(reg) BSP_FLD32GET(reg,11, 15)
#define tms570_IOMM_REVISION_REG_REV_RTL_SET(reg,val) BSP_FLD32SET(reg, val,11, 15)

/* field: REV_MAJOR - Major Revision */
#define tms570_IOMM_REVISION_REG_REV_MAJOR(val) BSP_FLD32(val,8, 10)
#define tms570_IOMM_REVISION_REG_REV_MAJOR_GET(reg) BSP_FLD32GET(reg,8, 10)
#define tms570_IOMM_REVISION_REG_REV_MAJOR_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: REV_CUSTOM - REV CUSTOM 0 Custom Revision */
#define tms570_IOMM_REVISION_REG_REV_CUSTOM(val) BSP_FLD32(val,6, 7)
#define tms570_IOMM_REVISION_REG_REV_CUSTOM_GET(reg) BSP_FLD32GET(reg,6, 7)
#define tms570_IOMM_REVISION_REG_REV_CUSTOM_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: REV_MINOR - Minor Revision */
#define tms570_IOMM_REVISION_REG_REV_MINOR(val) BSP_FLD32(val,0, 5)
#define tms570_IOMM_REVISION_REG_REV_MINOR_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_IOMM_REVISION_REG_REV_MINOR_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------tms570_IOMM_ENDIAN_REG-------------------*/
/* field: ENDIAN - Device endianness */
#define tms570_IOMM_ENDIAN_REG_ENDIAN BSP_FLD32(0)


/*-------------------tms570_IOMM_KICK_REG0-------------------*/
/* field: KICK0 - Kicker 0 Register. */
#define tms570_IOMM_KICK_REG0_KICK0(val) BSP_FLD32(val,0, 31)
#define tms570_IOMM_KICK_REG0_KICK0_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_IOMM_KICK_REG0_KICK0_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_IOMM_KICK_REG1-------------------*/
/* field: KICK1 - Kicker 1 Register. */
#define tms570_IOMM_KICK_REG1_KICK1(val) BSP_FLD32(val,0, 31)
#define tms570_IOMM_KICK_REG1_KICK1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_IOMM_KICK_REG1_KICK1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------tms570_IOMM_ERR_RAW_STATUS_REG---------------*/
/* field: ADDR_ERR - Addressing Error Status and Error Signaling Enable. */
#define tms570_IOMM_ERR_RAW_STATUS_REG_ADDR_ERR BSP_FLD32(1)

/* field: PROT_ERR - register inside the IOMM is written in the CPU's user mode of operation. */
#define tms570_IOMM_ERR_RAW_STATUS_REG_PROT_ERR BSP_FLD32(0)


/*-------------tms570_IOMM_ERR_ENABLED_STATUS_REG-------------*/
/* field: ENABLED_ADDR_ERR - Addressing Error Signaling Enable Status and Status Clear */
#define tms570_IOMM_ERR_ENABLED_STATUS_REG_ENABLED_ADDR_ERR BSP_FLD32(1)

/* field: ENABLED_PROT_ERR - Protection Error Signaling Enable Status and Status Clear */
#define tms570_IOMM_ERR_ENABLED_STATUS_REG_ENABLED_PROT_ERR BSP_FLD32(0)


/*-----------------tms570_IOMM_ERR_ENABLE_REG-----------------*/
/* field: ADDR_ERR_EN - Addressing Error Signaling Enable */
#define tms570_IOMM_ERR_ENABLE_REG_ADDR_ERR_EN BSP_FLD32(1)

/* field: PROT_ERR_EN - Protection ErrorSignaling Enable */
#define tms570_IOMM_ERR_ENABLE_REG_PROT_ERR_EN BSP_FLD32(0)


/*---------------tms570_IOMM_ERR_ENABLE_CLR_REG---------------*/
/* field: ADDR_ERR_EN_CLR - Addressing Error Signaling Enable Clear */
#define tms570_IOMM_ERR_ENABLE_CLR_REG_ADDR_ERR_EN_CLR BSP_FLD32(1)

/* field: PROT_ERR_EN_CLR - Protection Error Signaling Enable Clear */
#define tms570_IOMM_ERR_ENABLE_CLR_REG_PROT_ERR_EN_CLR BSP_FLD32(0)


/*---------------tms570_IOMM_FAULT_ADDRESS_REG---------------*/
/* field: FAULT_ADDR - Fault Address. */
#define tms570_IOMM_FAULT_ADDRESS_REG_FAULT_ADDR(val) BSP_FLD32(val,0, 31)
#define tms570_IOMM_FAULT_ADDRESS_REG_FAULT_ADDR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_IOMM_FAULT_ADDRESS_REG_FAULT_ADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------tms570_IOMM_FAULT_STATUS_REG----------------*/
/* field: FAULT_ID - Faulting Transaction ID */
#define tms570_IOMM_FAULT_STATUS_REG_FAULT_ID(val) BSP_FLD32(val,24, 27)
#define tms570_IOMM_FAULT_STATUS_REG_FAULT_ID_GET(reg) BSP_FLD32GET(reg,24, 27)
#define tms570_IOMM_FAULT_STATUS_REG_FAULT_ID_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: FAULT_MSTID - ID of Master that initiated the faulting transaction */
#define tms570_IOMM_FAULT_STATUS_REG_FAULT_MSTID(val) BSP_FLD32(val,16, 23)
#define tms570_IOMM_FAULT_STATUS_REG_FAULT_MSTID_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_IOMM_FAULT_STATUS_REG_FAULT_MSTID_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: FAULT_PRIVID - Faulting Privilege ID */
#define tms570_IOMM_FAULT_STATUS_REG_FAULT_PRIVID(val) BSP_FLD32(val,9, 12)
#define tms570_IOMM_FAULT_STATUS_REG_FAULT_PRIVID_GET(reg) BSP_FLD32GET(reg,9, 12)
#define tms570_IOMM_FAULT_STATUS_REG_FAULT_PRIVID_SET(reg,val) BSP_FLD32SET(reg, val,9, 12)

/* field: FAULT_TYPE - Type of fault detected */
#define tms570_IOMM_FAULT_STATUS_REG_FAULT_TYPE(val) BSP_FLD32(val,0, 5)
#define tms570_IOMM_FAULT_STATUS_REG_FAULT_TYPE_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_IOMM_FAULT_STATUS_REG_FAULT_TYPE_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*----------------tms570_IOMM_FAULT_CLEAR_REG----------------*/
/* field: FAULT_CLEAR - Fault Clear */
#define tms570_IOMM_FAULT_CLEAR_REG_FAULT_CLEAR BSP_FLD32(0)


/*---------------------tms570_IOMM_PINMMR---------------------*/
/* field: PINMMRx24To31 - Each of these byte-fields control the functionality on a given ball/pin. */
#define tms570_IOMM_PINMMR_PINMMRx24To31(val) BSP_FLD32(val,24, 31)
#define tms570_IOMM_PINMMR_PINMMRx24To31_GET(reg) BSP_FLD32GET(reg,24, 31)
#define tms570_IOMM_PINMMR_PINMMRx24To31_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: PINMMRx16To23 - Each of these byte-fields control the functionality on a given ball/pin. */
#define tms570_IOMM_PINMMR_PINMMRx16To23(val) BSP_FLD32(val,16, 23)
#define tms570_IOMM_PINMMR_PINMMRx16To23_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_IOMM_PINMMR_PINMMRx16To23_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: PINMMRx8To16 - Each of these byte-fields control the functionality on a given ball/pin. */
#define tms570_IOMM_PINMMR_PINMMRx8To16(val) BSP_FLD32(val,8, 15)
#define tms570_IOMM_PINMMR_PINMMRx8To16_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_IOMM_PINMMR_PINMMRx8To16_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: PINMMRx0To7 - Each of these byte-fields control the functionality on a given ball/pin. */
#define tms570_IOMM_PINMMR_PINMMRx0To7(val) BSP_FLD32(val,0, 7)
#define tms570_IOMM_PINMMR_PINMMRx0To7_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_IOMM_PINMMR_PINMMRx0To7_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)



#endif /* LIBBSP_ARM_tms570_IOMM.H */
