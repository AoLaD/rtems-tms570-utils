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
#ifndef LIBBSP_ARM_tms570_DMM.H
#define LIBBSP_ARM_tms570_DMM.H

#include <bsp/utility.h>

typedef struct{
  uint32_t DMMGLBCTRL;        /*DMM Global Control Register*/
  uint32_t DMMINTSET;         /*DMM Interrupt Set Register*/
  uint32_t DMMINTCLR;         /*DMM Interrupt Clear Register*/
  uint32_t DMMINTLVL;         /*DMM Interrupt Level Register*/
  uint32_t DMMINTFLG;         /*DMM Interrupt Flag Register*/
  uint32_t DMMOFF1;           /*DMM Interrupt Offset 1 Register*/
  uint32_t DMMOFF2;           /*DMM Interrupt Offset 2 Register*/
  uint32_t DMMDDMDEST;        /*DMM Direct Data Mode Destination Register*/
  uint32_t DMMDDMBL;          /*DMM Direct Data Mode Blocksize Register*/
  uint32_t DMMDDMPT;          /*DMM Direct Data Mode Pointer Register*/
  uint32_t DMMINTPT;          /*DMM Direct Data Mode Interrupt Pointer Register*/
  uint32_t DMMDEST0REG1;      /*DMM Destination 0 Region 1*/
  uint32_t DMMDEST0BL1;       /*DMM Destination 0 Blocksize 1*/
  uint32_t DMMDEST0REG2;      /*DMM Destination 0 Region 2*/
  uint32_t DMMDEST0BL2;       /*DMM Destination 0 Blocksize 2*/
  uint32_t DMMDEST1REG1;      /*DMM Destination 1 Region 1*/
  uint32_t DMMDEST1BL1;       /*DMM Destination 1 Blocksize 1*/
  uint32_t DMMDEST1REG2;      /*DMM Destination 1 Region 2*/
  uint32_t DMMDEST1BL2;       /*DMM Destination 1 Blocksize 2*/
  uint32_t DMMDEST2REG1;      /*DMM Destination 2 Region 1*/
  uint32_t DMMDEST2BL1;       /*DMM Destination 2 Blocksize 1*/
  uint32_t DMMDEST2REG2;      /*DMM Destination 2 Region 2*/
  uint32_t DMMDEST2BL2;       /*DMM Destination 2 Blocksize 2*/
  uint32_t DMMDEST3REG1;      /*DMM Destination 3 Region 1*/
  uint32_t DMMDEST3BL1;       /*DMM Destination 3 Blocksize 1*/
  uint32_t DMMDEST3REG2;      /*DMM Destination 3 Region 2*/
  uint32_t DMMDEST3BL2;       /*DMM Destination 3 Blocksize 2*/
  uint32_t DMMPC0;            /*DMM Pin Control 0*/
  uint32_t DMMPC1;            /*DMM Pin Control 1*/
  uint32_t DMMPC2;            /*DMM Pin Control 2*/
  uint32_t DMMPC3;            /*DMM Pin Control 3*/
  uint32_t DMMPC4;            /*DMM Pin Control 4*/
  uint32_t DMMPC5;            /*DMM Pin Control 5*/
  uint32_t DMMPC6;            /*DMM Pin Control 6*/
  uint32_t DMMPC7;            /*DMM Pin Control 7*/
  uint32_t DMMPC8;            /*DMM Pin Control 8*/
} DMM_struct;

/*-------------------tms570_DMM_DMMGLBCTRL-------------------*/
/* field: BUSY - Busy indicator. */
#define tms570_DMM_DMMGLBCTRL_BUSY BSP_FLD32(24)

/* field: CONTCLK - Continuous DMMCLK input. */
#define tms570_DMM_DMMGLBCTRL_CONTCLK BSP_FLD32(18)

/* field: COS - Continue on suspend. Influences behavior of module while in debug mode. */
#define tms570_DMM_DMMGLBCTRL_COS BSP_FLD32(17)

/* field: RESET - Reset. */
#define tms570_DMM_DMMGLBCTRL_RESET BSP_FLD32(16)

/* field: DDM_WIDTH - Packet Width in direct data mode. */
#define tms570_DMM_DMMGLBCTRL_DDM_WIDTH(val) BSP_FLD32(val,9, 10)
#define tms570_DMM_DMMGLBCTRL_DDM_WIDTH_GET(reg) BSP_FLD32GET(reg,9, 10)
#define tms570_DMM_DMMGLBCTRL_DDM_WIDTH_SET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: TM_DMM - Packet Format. */
#define tms570_DMM_DMMGLBCTRL_TM_DMM BSP_FLD32(8)

/* field: ON/OFF - Switch module on or off */
#define tms570_DMM_DMMGLBCTRL_ON/OFF(val) BSP_FLD32(val,0, 3)
#define tms570_DMM_DMMGLBCTRL_ON/OFF_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_DMM_DMMGLBCTRL_ON/OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*--------------------tms570_DMM_DMMINTSET--------------------*/
/* field: PROG_BUFF - Programmable Buffer Interrupt Set. */
#define tms570_DMM_DMMINTSET_PROG_BUFF BSP_FLD32(17)

/* field: EO_BUFF - EO_BUFF */
#define tms570_DMM_DMMINTSET_EO_BUFF BSP_FLD32(16)

/* field: DEST3REG2 - Destination 3 Region 2 Interrupt Set. */
#define tms570_DMM_DMMINTSET_DEST3REG2 BSP_FLD32(15)

/* field: DEST3REG1 - Destination 3 Region 1 Interrupt Set. */
#define tms570_DMM_DMMINTSET_DEST3REG1 BSP_FLD32(14)

/* field: DEST2REG2 - Destination 2 Region 2 Interrupt Set. */
#define tms570_DMM_DMMINTSET_DEST2REG2 BSP_FLD32(13)

/* field: DEST2REG1 - Destination 2 Region 1 Interrupt Set. */
#define tms570_DMM_DMMINTSET_DEST2REG1 BSP_FLD32(12)

/* field: DEST1REG2 - Destination 1 Region 2 Interrupt Set. */
#define tms570_DMM_DMMINTSET_DEST1REG2 BSP_FLD32(11)

/* field: DEST1REG1 - DEST1REG1 */
#define tms570_DMM_DMMINTSET_DEST1REG1 BSP_FLD32(10)

/* field: DEST0REG2 - Destination 0 Region 2 Interrupt Set. */
#define tms570_DMM_DMMINTSET_DEST0REG2 BSP_FLD32(9)

/* field: DEST0REG1 - Destination 0 Region 1 Interrupt Set. */
#define tms570_DMM_DMMINTSET_DEST0REG1 BSP_FLD32(8)

/* field: BUSERROR - Bus Error Response for errors generated when doing internal bus transfers. */
#define tms570_DMM_DMMINTSET_BUSERROR BSP_FLD32(7)

/* field: BUFF_OVF - Buffer Overflow. */
#define tms570_DMM_DMMINTSET_BUFF_OVF BSP_FLD32(6)

/* field: SRC_OVF - Source Overflow. */
#define tms570_DMM_DMMINTSET_SRC_OVF BSP_FLD32(5)

/* field: DEST3_ERR - Destination 3 Error. */
#define tms570_DMM_DMMINTSET_DEST3_ERR BSP_FLD32(4)

/* field: DEST2_ERR - Destination 2 Error Interrupt Set. */
#define tms570_DMM_DMMINTSET_DEST2_ERR BSP_FLD32(3)

/* field: DEST1_ERR - Destination 1 Error Interrupt Set. */
#define tms570_DMM_DMMINTSET_DEST1_ERR BSP_FLD32(2)

/* field: DEST0_ERR - Destination 0 Error Interrupt Set. */
#define tms570_DMM_DMMINTSET_DEST0_ERR BSP_FLD32(1)

/* field: PACKET_ERR_INT - Packet Error. */
#define tms570_DMM_DMMINTSET_PACKET_ERR_INT BSP_FLD32(0)


/*--------------------tms570_DMM_DMMINTCLR--------------------*/
/* field: PROG_BUFF - Programmable Buffer Interrupt Set. */
#define tms570_DMM_DMMINTCLR_PROG_BUFF BSP_FLD32(17)

/* field: EO_BUFF - End of Buffer Interrupt Set. */
#define tms570_DMM_DMMINTCLR_EO_BUFF BSP_FLD32(16)

/* field: DEST3REG2 - was accessed at the startaddress of Destination 3 Region 2. */
#define tms570_DMM_DMMINTCLR_DEST3REG2 BSP_FLD32(15)

/* field: DEST3REG1 - Destination 3 Region 1 Interrupt Set. */
#define tms570_DMM_DMMINTCLR_DEST3REG1 BSP_FLD32(14)

/* field: DEST2REG2 - Destination 2 Region 2 Interrupt Set. */
#define tms570_DMM_DMMINTCLR_DEST2REG2 BSP_FLD32(13)

/* field: DEST2REG1 - Destination 2 Region 1 Interrupt Set. */
#define tms570_DMM_DMMINTCLR_DEST2REG1 BSP_FLD32(12)

/* field: DEST1REG2 - Destination 1 Region 2 Interrupt Set. */
#define tms570_DMM_DMMINTCLR_DEST1REG2 BSP_FLD32(11)

/* field: DEST1REG1 - Destination 1 Region 1 Interrupt Set. */
#define tms570_DMM_DMMINTCLR_DEST1REG1 BSP_FLD32(10)

/* field: DEST0REG2 - Destination 0 Region 2 Interrupt Set. */
#define tms570_DMM_DMMINTCLR_DEST0REG2 BSP_FLD32(9)

/* field: DEST0REG1 - Destination 0 Region 1 Interrupt Set. */
#define tms570_DMM_DMMINTCLR_DEST0REG1 BSP_FLD32(8)

/* field: BUSERROR - Bus Error Response for errors generated when doing internal bus transfers. */
#define tms570_DMM_DMMINTCLR_BUSERROR BSP_FLD32(7)

/* field: BUFF_OVF - Buffer Overflow. */
#define tms570_DMM_DMMINTCLR_BUFF_OVF BSP_FLD32(6)

/* field: SRC_OVF - Source Overflow. */
#define tms570_DMM_DMMINTCLR_SRC_OVF BSP_FLD32(5)

/* field: DEST3_ERR - Destination 3 Error. */
#define tms570_DMM_DMMINTCLR_DEST3_ERR BSP_FLD32(4)

/* field: DEST2_ERR - Destination 2 Error Interrupt Set. */
#define tms570_DMM_DMMINTCLR_DEST2_ERR BSP_FLD32(3)

/* field: DEST1_ERR - Destination 1 Error Interrupt Set. */
#define tms570_DMM_DMMINTCLR_DEST1_ERR BSP_FLD32(2)

/* field: DEST0_ERR - Destination 0 Error Interrupt Set. */
#define tms570_DMM_DMMINTCLR_DEST0_ERR BSP_FLD32(1)

/* field: PACKET_ERR_INT - Packet Error. */
#define tms570_DMM_DMMINTCLR_PACKET_ERR_INT BSP_FLD32(0)


/*--------------------tms570_DMM_DMMINTLVL--------------------*/
/* field: PROG_BUFF - Programmable Buffer Interrupt Level */
#define tms570_DMM_DMMINTLVL_PROG_BUFF BSP_FLD32(17)

/* field: EO_BUFF - End of Buffer Interrupt Level */
#define tms570_DMM_DMMINTLVL_EO_BUFF BSP_FLD32(16)

/* field: DEST3REG2 - Destination 3 Region 2 Interrupt Level */
#define tms570_DMM_DMMINTLVL_DEST3REG2 BSP_FLD32(15)

/* field: DEST3REG1 - Destination 3 Region 1 Interrupt Level */
#define tms570_DMM_DMMINTLVL_DEST3REG1 BSP_FLD32(14)

/* field: DEST2REG2 - Destination 2 Region 2 Interrupt Level */
#define tms570_DMM_DMMINTLVL_DEST2REG2 BSP_FLD32(13)

/* field: DEST2REG1 - Destination 2 Region 1 Interrupt Level */
#define tms570_DMM_DMMINTLVL_DEST2REG1 BSP_FLD32(12)

/* field: DEST1REG2 - Destination 1 Region 2 Interrupt Level */
#define tms570_DMM_DMMINTLVL_DEST1REG2 BSP_FLD32(11)

/* field: DEST1REG1 - Destination 1 Region 1 Interrupt Level */
#define tms570_DMM_DMMINTLVL_DEST1REG1 BSP_FLD32(10)

/* field: DEST0REG2 - Destination 0 Region 2 Interrupt Level */
#define tms570_DMM_DMMINTLVL_DEST0REG2 BSP_FLD32(9)

/* field: DEST0REG1 - Destination 0 Region 1 Interrupt Level */
#define tms570_DMM_DMMINTLVL_DEST0REG1 BSP_FLD32(8)

/* field: BUSERROR - BMM Bus Error Response */
#define tms570_DMM_DMMINTLVL_BUSERROR BSP_FLD32(7)

/* field: BUFF_OVF - Write Buffer Overflow Interrupt Level */
#define tms570_DMM_DMMINTLVL_BUFF_OVF BSP_FLD32(6)

/* field: SRC_OVF - Source Overflow Interrupt Level */
#define tms570_DMM_DMMINTLVL_SRC_OVF BSP_FLD32(5)

/* field: DEST3_ERR - Destination 3 Error Interrupt Level */
#define tms570_DMM_DMMINTLVL_DEST3_ERR BSP_FLD32(4)

/* field: DEST2_ERR - Destination 2 Error Interrupt Level */
#define tms570_DMM_DMMINTLVL_DEST2_ERR BSP_FLD32(3)

/* field: DEST1_ERR - Destination 1 Error Interrupt Level */
#define tms570_DMM_DMMINTLVL_DEST1_ERR BSP_FLD32(2)

/* field: DEST0_ERR - Destination 0 Error Interrupt Level */
#define tms570_DMM_DMMINTLVL_DEST0_ERR BSP_FLD32(1)

/* field: PACKET_ERR_INT - Packet Error Interrupt Level */
#define tms570_DMM_DMMINTLVL_PACKET_ERR_INT BSP_FLD32(0)


/*--------------------tms570_DMM_DMMINTFLG--------------------*/
/* field: PROG_BUFF - Programmable Buffer Interrupt Flag */
#define tms570_DMM_DMMINTFLG_PROG_BUFF BSP_FLD32(17)

/* field: EO_BUFF - End of Buffer Interrupt Flag */
#define tms570_DMM_DMMINTFLG_EO_BUFF BSP_FLD32(16)

/* field: DEST3REG2 - Destination 3 Region 2 Interrupt Flag */
#define tms570_DMM_DMMINTFLG_DEST3REG2 BSP_FLD32(15)

/* field: DEST3REG1 - Destination 3 Region 1 Interrupt Flag */
#define tms570_DMM_DMMINTFLG_DEST3REG1 BSP_FLD32(14)

/* field: DEST2REG2 - Destination 2 Region 2 Interrupt Flag */
#define tms570_DMM_DMMINTFLG_DEST2REG2 BSP_FLD32(13)

/* field: DEST2REG1 - Destination 2 Region 1 Interrupt Flag */
#define tms570_DMM_DMMINTFLG_DEST2REG1 BSP_FLD32(12)

/* field: DEST1REG2 - Destination 1 Region 2 Interrupt Flag */
#define tms570_DMM_DMMINTFLG_DEST1REG2 BSP_FLD32(11)

/* field: DEST1REG1 - Destination 1 Region 1 Interrupt Flag */
#define tms570_DMM_DMMINTFLG_DEST1REG1 BSP_FLD32(10)

/* field: DEST0REG2 - Destination 0 Region 2 Interrupt Flag */
#define tms570_DMM_DMMINTFLG_DEST0REG2 BSP_FLD32(9)

/* field: DEST0REG1 - Destination 0 Region 1 Interrupt Flag */
#define tms570_DMM_DMMINTFLG_DEST0REG1 BSP_FLD32(8)

/* field: BUSERROR - BMM Bus Error Response. */
#define tms570_DMM_DMMINTFLG_BUSERROR BSP_FLD32(7)

/* field: BUFF_OVF - Write Buffer Overflow Interrupt Flag */
#define tms570_DMM_DMMINTFLG_BUFF_OVF BSP_FLD32(6)

/* field: SRC_OVF - Source Overflow Interrupt Flag */
#define tms570_DMM_DMMINTFLG_SRC_OVF BSP_FLD32(5)

/* field: DEST3_ERR - Destination 3 Error Interrupt Flag */
#define tms570_DMM_DMMINTFLG_DEST3_ERR BSP_FLD32(4)

/* field: DEST2_ERR - Destination 2 Error Interrupt Flag */
#define tms570_DMM_DMMINTFLG_DEST2_ERR BSP_FLD32(3)

/* field: DEST1_ERR - Destination 1 Error Interrupt Flag */
#define tms570_DMM_DMMINTFLG_DEST1_ERR BSP_FLD32(2)

/* field: DEST0_ERR - Destination 0 Error Interrupt Flag */
#define tms570_DMM_DMMINTFLG_DEST0_ERR BSP_FLD32(1)

/* field: PACKET_ERR_INT - Packet Error Interrupt Flag */
#define tms570_DMM_DMMINTFLG_PACKET_ERR_INT BSP_FLD32(0)


/*---------------------tms570_DMM_DMMOFF1---------------------*/
/* field: OFFSET - User and privilege mode (read): */
#define tms570_DMM_DMMOFF1_OFFSET(val) BSP_FLD32(val,0, 4)
#define tms570_DMM_DMMOFF1_OFFSET_GET(reg) BSP_FLD32GET(reg,0, 4)
#define tms570_DMM_DMMOFF1_OFFSET_SET(reg,val) BSP_FLD32SET(reg, val,0, 4)


/*---------------------tms570_DMM_DMMOFF2---------------------*/
/* field: OFFSET - User and privilege mode (read): */
#define tms570_DMM_DMMOFF2_OFFSET(val) BSP_FLD32(val,0, 4)
#define tms570_DMM_DMMOFF2_OFFSET_GET(reg) BSP_FLD32GET(reg,0, 4)
#define tms570_DMM_DMMOFF2_OFFSET_SET(reg,val) BSP_FLD32SET(reg, val,0, 4)


/*-------------------tms570_DMM_DMMDDMDEST-------------------*/
/* field: STARTADDR - These bits define the starting address of the buffer. */
#define tms570_DMM_DMMDDMDEST_STARTADDR(val) BSP_FLD32(val,0, 31)
#define tms570_DMM_DMMDDMDEST_STARTADDR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMM_DMMDDMDEST_STARTADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_DMM_DMMDDMBL--------------------*/
/* field: BLOCKSIZE - These bits define the size of the buffer region */
#define tms570_DMM_DMMDDMBL_BLOCKSIZE(val) BSP_FLD32(val,0, 3)
#define tms570_DMM_DMMDDMBL_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_DMM_DMMDDMBL_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*--------------------tms570_DMM_DMMDDMPT--------------------*/
/* field: POINTER - These bits hold the pointer to the next entry to be written in the buffer. */
#define tms570_DMM_DMMDDMPT_POINTER(val) BSP_FLD32(val,0, 14)
#define tms570_DMM_DMMDDMPT_POINTER_GET(reg) BSP_FLD32GET(reg,0, 14)
#define tms570_DMM_DMMDDMPT_POINTER_SET(reg,val) BSP_FLD32SET(reg, val,0, 14)


/*--------------------tms570_DMM_DMMINTPT--------------------*/
/* field: INTPT - Interrupt Pointer. When the buffer pointer (Section 30.3. */
#define tms570_DMM_DMMINTPT_INTPT(val) BSP_FLD32(val,0, 14)
#define tms570_DMM_DMMINTPT_INTPT_GET(reg) BSP_FLD32GET(reg,0, 14)
#define tms570_DMM_DMMINTPT_INTPT_SET(reg,val) BSP_FLD32SET(reg, val,0, 14)


/*------------------tms570_DMM_DMMDEST0REG1------------------*/
/* field: BASEADDR - These bits define the base address of the 256kB region where the buffer is located. */
#define tms570_DMM_DMMDEST0REG1_BASEADDR(val) BSP_FLD32(val,18, 31)
#define tms570_DMM_DMMDEST0REG1_BASEADDR_GET(reg) BSP_FLD32GET(reg,18, 31)
#define tms570_DMM_DMMDEST0REG1_BASEADDR_SET(reg,val) BSP_FLD32SET(reg, val,18, 31)

/* field: BLOCKADDR - These bits define the starting address of the buffer in the 256kB page. */
#define tms570_DMM_DMMDEST0REG1_BLOCKADDR(val) BSP_FLD32(val,0, 17)
#define tms570_DMM_DMMDEST0REG1_BLOCKADDR_GET(reg) BSP_FLD32GET(reg,0, 17)
#define tms570_DMM_DMMDEST0REG1_BLOCKADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 17)


/*-------------------tms570_DMM_DMMDEST0BL1-------------------*/
/* field: BLOCKSIZE - These bits define the length of the buffer region. */
#define tms570_DMM_DMMDEST0BL1_BLOCKSIZE(val) BSP_FLD32(val,0, 3)
#define tms570_DMM_DMMDEST0BL1_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_DMM_DMMDEST0BL1_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*------------------tms570_DMM_DMMDEST0REG2------------------*/
/* field: BASEADDR - These bits define the base address of the 256kB region where the buffer is located. */
#define tms570_DMM_DMMDEST0REG2_BASEADDR(val) BSP_FLD32(val,18, 31)
#define tms570_DMM_DMMDEST0REG2_BASEADDR_GET(reg) BSP_FLD32GET(reg,18, 31)
#define tms570_DMM_DMMDEST0REG2_BASEADDR_SET(reg,val) BSP_FLD32SET(reg, val,18, 31)

/* field: BLOCKADDR - These bits define the starting address of the buffer in the 256kB page. */
#define tms570_DMM_DMMDEST0REG2_BLOCKADDR(val) BSP_FLD32(val,0, 17)
#define tms570_DMM_DMMDEST0REG2_BLOCKADDR_GET(reg) BSP_FLD32GET(reg,0, 17)
#define tms570_DMM_DMMDEST0REG2_BLOCKADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 17)


/*-------------------tms570_DMM_DMMDEST0BL2-------------------*/
/* field: BLOCKSIZE - These bits define the length of the buffer region. */
#define tms570_DMM_DMMDEST0BL2_BLOCKSIZE(val) BSP_FLD32(val,0, 3)
#define tms570_DMM_DMMDEST0BL2_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_DMM_DMMDEST0BL2_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------tms570_DMM_DMMPC0---------------------*/
/* field: ENAFUNC - Functional mode of DMMENA pin. */
#define tms570_DMM_DMMPC0_ENAFUNC BSP_FLD32(18)

/* field: DATAxFUNC - Functional mode of DMMDATA[x] pin. */
#define tms570_DMM_DMMPC0_DATAxFUNC(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC0_DATAxFUNC_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC0_DATAxFUNC_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKFUNC - Functional mode of DMMCLK pin. */
#define tms570_DMM_DMMPC0_CLKFUNC BSP_FLD32(1)

/* field: SYNCFUNC - Functional mode of DMMSYNC pin. */
#define tms570_DMM_DMMPC0_SYNCFUNC BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC1---------------------*/
/* field: ENADIR - Direction of DMMENA pin. */
#define tms570_DMM_DMMPC1_ENADIR BSP_FLD32(18)

/* field: DATAxDIR - Direction of DMMDATA[x] pin. */
#define tms570_DMM_DMMPC1_DATAxDIR(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC1_DATAxDIR_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC1_DATAxDIR_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKDIR - Direction of DMMCLK pin. */
#define tms570_DMM_DMMPC1_CLKDIR BSP_FLD32(1)

/* field: SYNCDIR - Direction of DMMSYNC pin. */
#define tms570_DMM_DMMPC1_SYNCDIR BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC2---------------------*/
/* field: ENAIN - DMMENA input. This bit reflects the state of the pin in all modes. */
#define tms570_DMM_DMMPC2_ENAIN BSP_FLD32(18)

/* field: DATAxIN - DMMDATA[x] input. This bit reflects the state of the pin in all modes. */
#define tms570_DMM_DMMPC2_DATAxIN(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC2_DATAxIN_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC2_DATAxIN_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKIN - DMMCLK input. This bit reflects the state of the pin in all modes. */
#define tms570_DMM_DMMPC2_CLKIN BSP_FLD32(1)

/* field: SYNCIN - DMMSYNC input. */
#define tms570_DMM_DMMPC2_SYNCIN BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC3---------------------*/
/* field: ENAOUT - Output state of DMMENA pin. */
#define tms570_DMM_DMMPC3_ENAOUT BSP_FLD32(18)

/* field: DATAxOUT - Output state of DMMDATA[x] pin. This bit sets the pin to logic low or high level. */
#define tms570_DMM_DMMPC3_DATAxOUT(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC3_DATAxOUT_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC3_DATAxOUT_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKOUT - Output state of DMMCLK pin. */
#define tms570_DMM_DMMPC3_CLKOUT BSP_FLD32(1)

/* field: SYNCOUT - Output state of DMMSYNC pin. This bit sets the pin to logic low or high level. */
#define tms570_DMM_DMMPC3_SYNCOUT BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC4---------------------*/
/* field: ENASET - control register bit to 1 regardless of the current value in the ENAOUT bit. */
#define tms570_DMM_DMMPC4_ENASET BSP_FLD32(18)

/* field: DATAxSET - Sets output state of DMMDATA[x] pin to logic high. */
#define tms570_DMM_DMMPC4_DATAxSET(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC4_DATAxSET_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC4_DATAxSET_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKSET - Sets output state of DMMCLK pin to logic high. */
#define tms570_DMM_DMMPC4_CLKSET BSP_FLD32(1)

/* field: SYNCSET - Sets output state of DMMSYNC pin logic high. */
#define tms570_DMM_DMMPC4_SYNCSET BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC5---------------------*/
/* field: ENACLR - Sets output state of DMMENA pin to logic low. */
#define tms570_DMM_DMMPC5_ENACLR BSP_FLD32(18)

/* field: DATAxCLR - Sets output state of DMMDATA[x] pin to logic low. */
#define tms570_DMM_DMMPC5_DATAxCLR(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC5_DATAxCLR_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC5_DATAxCLR_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKCLR - Sets output state of DMMCLK pin to logic low. */
#define tms570_DMM_DMMPC5_CLKCLR BSP_FLD32(1)

/* field: SYNCCLR - Sets output state of DMMSYNC pin to logic low. */
#define tms570_DMM_DMMPC5_SYNCCLR BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC6---------------------*/
/* field: ENAPDR - Open Drain enable. */
#define tms570_DMM_DMMPC6_ENAPDR BSP_FLD32(18)

/* field: DATAxPDR - Open Drain enable. */
#define tms570_DMM_DMMPC6_DATAxPDR(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC6_DATAxPDR_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC6_DATAxPDR_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPDR - Open Drain enable. */
#define tms570_DMM_DMMPC6_CLKPDR BSP_FLD32(1)

/* field: SYNCPDR - Open Drain enable. */
#define tms570_DMM_DMMPC6_SYNCPDR BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC7---------------------*/
/* field: ENAPDIS - Pull disable. */
#define tms570_DMM_DMMPC7_ENAPDIS BSP_FLD32(18)

/* field: DATAxPDIS - Pull disable. */
#define tms570_DMM_DMMPC7_DATAxPDIS(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC7_DATAxPDIS_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC7_DATAxPDIS_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPDIS - Pull disable. */
#define tms570_DMM_DMMPC7_CLKPDIS BSP_FLD32(1)

/* field: SYNCPDIS - Pull disable. */
#define tms570_DMM_DMMPC7_SYNCPDIS BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)


/*---------------------tms570_DMM_DMMPC8---------------------*/
/* field: ENAPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define tms570_DMM_DMMPC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define tms570_DMM_DMMPC8_SYNCPSEL BSP_FLD32(0)



#endif /* LIBBSP_ARM_tms570_DMM.H */
