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
#ifndef LIBBSP_ARM_tms570_DCAN.H
#define LIBBSP_ARM_tms570_DCAN.H

#include <bsp/utility.h>

typedef struct{
  uint32_t DCAN CTL;          /*CAN Control Register*/
  uint32_t DCAN ES;           /*Error and Status Register*/
  uint32_t DCAN ERRC;         /*Error Counter Register*/
  uint32_t DCAN BTR;          /*Bit Timing Register*/
  uint32_t DCAN INT;          /*Interrupt Register*/
  uint32_t DCAN TEST;         /*Test Register*/
  uint8_t reserved1 [4];
  uint32_t DCAN PERR;         /*Parity Error Code Register*/
  uint8_t reserved2 [96];
  uint32_t DCAN ABOTR;        /*Auto-Bus-On Time Register*/
  uint32_t DCAN TXRQX;        /*Transmission Request X Register*/
  uint32_t DCAN TXRQ12;       /*Transmission Request 12 Register*/
  uint32_t DCAN TXRQ34;       /*Transmission Request 34 Register*/
  uint32_t DCAN TXRQ56;       /*Transmission Request 56 Register*/
  uint32_t DCAN TXRQ78;       /*Transmission Request 78 Register*/
  uint32_t DCAN NWDATX;       /*New Data X Register*/
  uint32_t DCAN NWDAT12;      /*New Data 12 Register*/
  uint32_t DCAN NWDAT34;      /*New Data 34 Register*/
  uint32_t DCAN NWDAT56;      /*New Data 56 Register*/
  uint32_t DCAN NWDAT78;      /*New Data 78 Register*/
  uint32_t DCAN INTPNDX;      /*Interrupt Pending X Register*/
  uint32_t DCAN INTPND12;     /*Interrupt Pending 12 Register*/
  uint32_t DCAN INTPND34;     /*Interrupt Pending 34 Register*/
  uint32_t DCAN INTPND56;     /*Interrupt Pending 56 Register*/
  uint32_t DCAN INTPND78;     /*Interrupt Pending 78 Register*/
  uint32_t DCAN MSGVALX;      /*Message Valid X Register*/
  uint32_t DCAN MSGVAL12;     /*Message Valid 12 Register*/
  uint32_t DCAN MSGVAL34;     /*Message Valid 34 Register*/
  uint32_t DCAN MSGVAL56;     /*Message Valid 56 Register*/
  uint32_t DCAN MSGVAL78;     /*Message Valid 78 Register*/
  uint8_t reserved3 [4];
  uint32_t DCAN INTMUX12;     /*Interrupt Multiplexer 12 Register*/
  uint32_t DCAN INTMUX34;     /*Interrupt Multiplexer 34 Register*/
  uint32_t DCAN INTMUX56;     /*Interrupt Multiplexer 56 Register*/
  uint32_t DCAN INTMUX78;     /*Interrupt Multiplexer 78 Register*/
  uint8_t reserved4 [24];
  uint32_t DCAN IF1CMD;       /*IF1 Command Register*/
  uint32_t DCAN IF1MSK;       /*IF1 Mask Register*/
  uint32_t DCAN IF1ARB;       /*IF1 Arbitration Register*/
  uint32_t DCAN IF1MCTL;      /*IF1 Message Control Register*/
  uint32_t DCAN IF1DATA;      /*IF1 Data A Register*/
  uint32_t DCAN IF1DATB;      /*IF1 Data B Register*/
  uint8_t reserved5 [8];
  uint32_t DCAN IF2CMD;       /*IF2 Command Register*/
  uint32_t DCAN IF2MSK;       /*IF2 Mask Register*/
  uint32_t DCAN IF2ARB;       /*IF2 Arbitration Register*/
  uint32_t DCAN IF2MCTL;      /*IF2 Message Control Register*/
  uint32_t DCAN IF2DATA;      /*IF2 Data A Register*/
  uint32_t DCAN IF2DATB;      /*IF2 Data B Register*/
  uint8_t reserved6 [8];
  uint32_t DCAN IF3OBS;       /*IF3 Observation Register*/
  uint32_t DCAN IF3MSK;       /*IF3 Mask Register*/
  uint32_t DCAN IF3ARB;       /*IF3 Arbitration Register*/
  uint32_t DCAN IF3MCTL;      /*IF3 Message Control Register*/
  uint32_t DCAN IF3DATA;      /*IF3 Data A Register*/
  uint32_t DCAN IF3DATB;      /*IF3 Data B Register*/
  uint8_t reserved7 [8];
  uint32_t DCAN IF3UPD12;     /*IF3 Update Enable 12 Register*/
  uint32_t DCAN IF3UPD34;     /*IF3 Update Enable 34 Register*/
  uint32_t DCAN IF3UPD56;     /*IF3 Update Enable 56 Register*/
  uint32_t DCAN IF3UPD78;     /*IF3 Update Enable 78 Register*/
  uint8_t reserved8 [112];
  uint32_t DCAN TIOC;         /*CAN TX IO Control Register*/
  uint32_t DCAN RIOC;         /*CAN RX IO Control Register*/
} DCAN_struct;

/*--------------------tms570_DCAN_DCAN CTL--------------------*/
/* field: WUBA - Automatic wake up on bus activity when in local power down mode */
#define tms570_DCAN_DCAN CTL_WUBA BSP_FLD32(25)

/* field: PDR - Request for local low power down mode */
#define tms570_DCAN_DCAN CTL_PDR BSP_FLD32(24)

/* field: DE3 - Enable DMA request line for IF3 */
#define tms570_DCAN_DCAN CTL_DE3 BSP_FLD32(20)

/* field: DE2 - Enable DMA request line for IF2 */
#define tms570_DCAN_DCAN CTL_DE2 BSP_FLD32(19)

/* field: DE1 - Enable DMA request line for IF1 */
#define tms570_DCAN_DCAN CTL_DE1 BSP_FLD32(18)

/* field: IE1 - Interrupt line 1 Enable */
#define tms570_DCAN_DCAN CTL_IE1 BSP_FLD32(17)

/* field: InitDbg - Internal Init state while debug access */
#define tms570_DCAN_DCAN CTL_InitDbg BSP_FLD32(1)

/* field: SWR - SW Reset Enable */
#define tms570_DCAN_DCAN CTL_SWR BSP_FLD32(15)

/* field: PMD - Parity on/off */
#define tms570_DCAN_DCAN CTL_PMD(val) BSP_FLD32(val,10, 13)
#define tms570_DCAN_DCAN CTL_PMD_GET(reg) BSP_FLD32GET(reg,10, 13)
#define tms570_DCAN_DCAN CTL_PMD_SET(reg,val) BSP_FLD32SET(reg, val,10, 13)

/* field: ABO - Auto-Bus-On Enable */
#define tms570_DCAN_DCAN CTL_ABO BSP_FLD32(9)

/* field: IDS - Interruption Debug Support Enable */
#define tms570_DCAN_DCAN CTL_IDS BSP_FLD32(8)

/* field: Test - Test Mode Enable */
#define tms570_DCAN_DCAN CTL_Test BSP_FLD32(7)

/* field: CCE - Configuration Change Enable */
#define tms570_DCAN_DCAN CTL_CCE BSP_FLD32(6)

/* field: DAR - Disable Automatic Retransmission */
#define tms570_DCAN_DCAN CTL_DAR BSP_FLD32(5)

/* field: EIE - Error Interrupt Enable */
#define tms570_DCAN_DCAN CTL_EIE BSP_FLD32(3)

/* field: SIE - Status Change Interrupt Enable */
#define tms570_DCAN_DCAN CTL_SIE BSP_FLD32(2)

/* field: IE0 - Interrupt line 0 Enable */
#define tms570_DCAN_DCAN CTL_IE0 BSP_FLD32(1)

/* field: Init - Initialization */
#define tms570_DCAN_DCAN CTL_Init BSP_FLD32(0)


/*--------------------tms570_DCAN_DCAN ES--------------------*/
/* field: PDA - Local power down mode acknowledge */
#define tms570_DCAN_DCAN ES_PDA BSP_FLD32(10)

/* field: WakeUp_Pnd - Wake Up Pending */
#define tms570_DCAN_DCAN ES_WakeUp_Pnd BSP_FLD32(9)

/* field: PER - Parity Error Detected */
#define tms570_DCAN_DCAN ES_PER BSP_FLD32(8)

/* field: BOff - Bus-Off State */
#define tms570_DCAN_DCAN ES_BOff BSP_FLD32(7)

/* field: EWarn - Warning State */
#define tms570_DCAN_DCAN ES_EWarn BSP_FLD32(6)

/* field: EPass - Error Passive State */
#define tms570_DCAN_DCAN ES_EPass BSP_FLD32(5)

/* field: RxOK - Received a message successfully */
#define tms570_DCAN_DCAN ES_RxOK BSP_FLD32(4)

/* field: TxOK - Transmitted a message successfully */
#define tms570_DCAN_DCAN ES_TxOK BSP_FLD32(3)

/* field: LEC - Last Error Code */
#define tms570_DCAN_DCAN ES_LEC(val) BSP_FLD32(val,0, 2)
#define tms570_DCAN_DCAN ES_LEC_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_DCAN_DCAN ES_LEC_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-------------------tms570_DCAN_DCAN ERRC-------------------*/
/* field: RP - Receive Error Passive */
#define tms570_DCAN_DCAN ERRC_RP BSP_FLD32(15)

/* field: REC - Receive Error Counter. Actual state of the Receive Error Counter. (values from 0 to 255). */
#define tms570_DCAN_DCAN ERRC_REC(val) BSP_FLD32(val,8, 14)
#define tms570_DCAN_DCAN ERRC_REC_GET(reg) BSP_FLD32GET(reg,8, 14)
#define tms570_DCAN_DCAN ERRC_REC_SET(reg,val) BSP_FLD32SET(reg, val,8, 14)

/* field: TEC - Transmit Error Counter. Actual state of the Transmit Error Counter. (values from 0 to 255). */
#define tms570_DCAN_DCAN ERRC_TEC(val) BSP_FLD32(val,0, 7)
#define tms570_DCAN_DCAN ERRC_TEC_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_DCAN_DCAN ERRC_TEC_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*--------------------tms570_DCAN_DCAN BTR--------------------*/
/* field: BRPE - Baud Rate Prescaler Extension. */
#define tms570_DCAN_DCAN BTR_BRPE(val) BSP_FLD32(val,16, 19)
#define tms570_DCAN_DCAN BTR_BRPE_GET(reg) BSP_FLD32GET(reg,16, 19)
#define tms570_DCAN_DCAN BTR_BRPE_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: TSeg2 - Time segment after the sample point */
#define tms570_DCAN_DCAN BTR_TSeg2(val) BSP_FLD32(val,12, 14)
#define tms570_DCAN_DCAN BTR_TSeg2_GET(reg) BSP_FLD32GET(reg,12, 14)
#define tms570_DCAN_DCAN BTR_TSeg2_SET(reg,val) BSP_FLD32SET(reg, val,12, 14)

/* field: TSeg1 - Time segment before the sample point */
#define tms570_DCAN_DCAN BTR_TSeg1(val) BSP_FLD32(val,8, 11)
#define tms570_DCAN_DCAN BTR_TSeg1_GET(reg) BSP_FLD32GET(reg,8, 11)
#define tms570_DCAN_DCAN BTR_TSeg1_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)

/* field: SJW - Synchronization Jump Width */
#define tms570_DCAN_DCAN BTR_SJW(val) BSP_FLD32(val,6, 7)
#define tms570_DCAN_DCAN BTR_SJW_GET(reg) BSP_FLD32GET(reg,6, 7)
#define tms570_DCAN_DCAN BTR_SJW_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: BRP - Baud Rate Prescaler */
#define tms570_DCAN_DCAN BTR_BRP(val) BSP_FLD32(val,0, 5)
#define tms570_DCAN_DCAN BTR_BRP_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DCAN_DCAN BTR_BRP_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*--------------------tms570_DCAN_DCAN INT--------------------*/
/* field: Int1ID - Interrupt 1 Identifier (indicates the message object with the highest pending interrupt) */
#define tms570_DCAN_DCAN INT_Int1ID(val) BSP_FLD32(val,16, 23)
#define tms570_DCAN_DCAN INT_Int1ID_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_DCAN_DCAN INT_Int1ID_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: Int0ID - Interrupt Identifier (the number here indicates the source of the interrupt) */
#define tms570_DCAN_DCAN INT_Int0ID(val) BSP_FLD32(val,0, 15)
#define tms570_DCAN_DCAN INT_Int0ID_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DCAN_DCAN INT_Int0ID_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_DCAN_DCAN TEST-------------------*/
/* field: RDA - RAM Direct Access Enable */
#define tms570_DCAN_DCAN TEST_RDA BSP_FLD32(9)

/* field: EXL - External Loop Back Mode */
#define tms570_DCAN_DCAN TEST_EXL BSP_FLD32(8)

/* field: Rx - Receive Pin. Monitors the actual value of the CAN_RX pin. */
#define tms570_DCAN_DCAN TEST_Rx BSP_FLD32(7)

/* field: Tx - Control of CAN_TX pin */
#define tms570_DCAN_DCAN TEST_Tx(val) BSP_FLD32(val,5, 6)
#define tms570_DCAN_DCAN TEST_Tx_GET(reg) BSP_FLD32GET(reg,5, 6)
#define tms570_DCAN_DCAN TEST_Tx_SET(reg,val) BSP_FLD32SET(reg, val,5, 6)

/* field: LBack - Loop Back Mode */
#define tms570_DCAN_DCAN TEST_LBack BSP_FLD32(4)

/* field: Silent - Silent Mode */
#define tms570_DCAN_DCAN TEST_Silent BSP_FLD32(3)


/*-------------------tms570_DCAN_DCAN PERR-------------------*/
/* field: Word_Number - Word number where parity error has been detected */
#define tms570_DCAN_DCAN PERR_Word_Number(val) BSP_FLD32(val,8, 10)
#define tms570_DCAN_DCAN PERR_Word_Number_GET(reg) BSP_FLD32GET(reg,8, 10)
#define tms570_DCAN_DCAN PERR_Word_Number_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: Message_Number -  */
#define tms570_DCAN_DCAN PERR_Message_Number(val) BSP_FLD32(val,0, 7)
#define tms570_DCAN_DCAN PERR_Message_Number_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_DCAN_DCAN PERR_Message_Number_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-------------------tms570_DCAN_DCAN ABOTR-------------------*/
/* field: ABO_Time - Number of VBUS clock cycles before a Bus-Off recovery sequence is */
#define tms570_DCAN_DCAN ABOTR_ABO_Time(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN ABOTR_ABO_Time_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN ABOTR_ABO_Time_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_DCAN_DCAN TXRQX-------------------*/
/* field: TxRqstReg8 - TxRqstReg8 */
#define tms570_DCAN_DCAN TXRQX_TxRqstReg8(val) BSP_FLD32(val,14, 15)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg8_GET(reg) BSP_FLD32GET(reg,14, 15)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg8_SET(reg,val) BSP_FLD32SET(reg, val,14, 15)

/* field: TxRqstReg7 - TxRqstReg8 */
#define tms570_DCAN_DCAN TXRQX_TxRqstReg7(val) BSP_FLD32(val,12, 13)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg7_GET(reg) BSP_FLD32GET(reg,12, 13)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg7_SET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: TxRqstReg6 - TxRqstReg8 */
#define tms570_DCAN_DCAN TXRQX_TxRqstReg6(val) BSP_FLD32(val,10, 11)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg6_GET(reg) BSP_FLD32GET(reg,10, 11)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg6_SET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: TxRqstReg5 - TxRqstReg8 */
#define tms570_DCAN_DCAN TXRQX_TxRqstReg5(val) BSP_FLD32(val,8, 9)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg5_GET(reg) BSP_FLD32GET(reg,8, 9)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg5_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: TxRqstReg4 - TxRqstReg8 */
#define tms570_DCAN_DCAN TXRQX_TxRqstReg4(val) BSP_FLD32(val,6, 7)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg4_GET(reg) BSP_FLD32GET(reg,6, 7)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg4_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: TxRqstReg3 - TxRqstReg8 */
#define tms570_DCAN_DCAN TXRQX_TxRqstReg3(val) BSP_FLD32(val,4, 5)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg3_GET(reg) BSP_FLD32GET(reg,4, 5)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg3_SET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: TxRqstReg2 - TxRqstReg8 */
#define tms570_DCAN_DCAN TXRQX_TxRqstReg2(val) BSP_FLD32(val,2, 3)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg2_GET(reg) BSP_FLD32GET(reg,2, 3)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg2_SET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: TxRqstReg1 - TxRqstReg8 */
#define tms570_DCAN_DCAN TXRQX_TxRqstReg1(val) BSP_FLD32(val,0, 1)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg1_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_DCAN_DCAN TXRQX_TxRqstReg1_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*------------------tms570_DCAN_DCAN TXRQ12------------------*/
/* field: TxRqs1To32 - Transmission Request Bits (for all message objects) */
#define tms570_DCAN_DCAN TXRQ12_TxRqs1To32(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN TXRQ12_TxRqs1To32_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN TXRQ12_TxRqs1To32_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_DCAN_DCAN TXRQ34------------------*/
/* field: TxRqs33To64 - Transmission Request Bits (for all message objects) */
#define tms570_DCAN_DCAN TXRQ34_TxRqs33To64(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN TXRQ34_TxRqs33To64_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN TXRQ34_TxRqs33To64_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_DCAN_DCAN TXRQ56------------------*/
/* field: TxRqs65To96 - Transmission Request Bits (for all message objects) */
#define tms570_DCAN_DCAN TXRQ56_TxRqs65To96(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN TXRQ56_TxRqs65To96_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN TXRQ56_TxRqs65To96_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_DCAN_DCAN TXRQ78------------------*/
/* field: TxRqs97To128 - Transmission Request Bits (for all message objects) */
#define tms570_DCAN_DCAN TXRQ78_TxRqs97To128(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN TXRQ78_TxRqs97To128_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN TXRQ78_TxRqs97To128_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_DCAN_DCAN NWDATX------------------*/
/* field: NewDatReg8 - TxRqstReg8 */
#define tms570_DCAN_DCAN NWDATX_NewDatReg8(val) BSP_FLD32(val,14, 15)
#define tms570_DCAN_DCAN NWDATX_NewDatReg8_GET(reg) BSP_FLD32GET(reg,14, 15)
#define tms570_DCAN_DCAN NWDATX_NewDatReg8_SET(reg,val) BSP_FLD32SET(reg, val,14, 15)

/* field: NewDatReg7 - TxRqstReg8 */
#define tms570_DCAN_DCAN NWDATX_NewDatReg7(val) BSP_FLD32(val,12, 13)
#define tms570_DCAN_DCAN NWDATX_NewDatReg7_GET(reg) BSP_FLD32GET(reg,12, 13)
#define tms570_DCAN_DCAN NWDATX_NewDatReg7_SET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: NewDatReg6 - TxRqstReg8 */
#define tms570_DCAN_DCAN NWDATX_NewDatReg6(val) BSP_FLD32(val,10, 11)
#define tms570_DCAN_DCAN NWDATX_NewDatReg6_GET(reg) BSP_FLD32GET(reg,10, 11)
#define tms570_DCAN_DCAN NWDATX_NewDatReg6_SET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: NewDatReg5 - TxRqstReg8 */
#define tms570_DCAN_DCAN NWDATX_NewDatReg5(val) BSP_FLD32(val,8, 9)
#define tms570_DCAN_DCAN NWDATX_NewDatReg5_GET(reg) BSP_FLD32GET(reg,8, 9)
#define tms570_DCAN_DCAN NWDATX_NewDatReg5_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: NewDatReg4 - TxRqstReg8 */
#define tms570_DCAN_DCAN NWDATX_NewDatReg4(val) BSP_FLD32(val,6, 7)
#define tms570_DCAN_DCAN NWDATX_NewDatReg4_GET(reg) BSP_FLD32GET(reg,6, 7)
#define tms570_DCAN_DCAN NWDATX_NewDatReg4_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: NewDatReg3 - TxRqstReg8 */
#define tms570_DCAN_DCAN NWDATX_NewDatReg3(val) BSP_FLD32(val,4, 5)
#define tms570_DCAN_DCAN NWDATX_NewDatReg3_GET(reg) BSP_FLD32GET(reg,4, 5)
#define tms570_DCAN_DCAN NWDATX_NewDatReg3_SET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: NewDatReg2 - TxRqstReg8 */
#define tms570_DCAN_DCAN NWDATX_NewDatReg2(val) BSP_FLD32(val,2, 3)
#define tms570_DCAN_DCAN NWDATX_NewDatReg2_GET(reg) BSP_FLD32GET(reg,2, 3)
#define tms570_DCAN_DCAN NWDATX_NewDatReg2_SET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: NewDatReg1 - TxRqstReg8 */
#define tms570_DCAN_DCAN NWDATX_NewDatReg1(val) BSP_FLD32(val,0, 1)
#define tms570_DCAN_DCAN NWDATX_NewDatReg1_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_DCAN_DCAN NWDATX_NewDatReg1_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*------------------tms570_DCAN_DCAN NWDAT12------------------*/
/* field: NewDat1To32 - New Data Bits (for all message objects) */
#define tms570_DCAN_DCAN NWDAT12_NewDat1To32(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN NWDAT12_NewDat1To32_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN NWDAT12_NewDat1To32_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_DCAN_DCAN NWDAT34------------------*/
/* field: NewDat33To64 - New Data Bits (for all message objects) */
#define tms570_DCAN_DCAN NWDAT34_NewDat33To64(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN NWDAT34_NewDat33To64_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN NWDAT34_NewDat33To64_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_DCAN_DCAN NWDAT56------------------*/
/* field: NewDat65To96 - New Data Bits (for all message objects) */
#define tms570_DCAN_DCAN NWDAT56_NewDat65To96(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN NWDAT56_NewDat65To96_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN NWDAT56_NewDat65To96_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_DCAN_DCAN NWDAT78------------------*/
/* field: NewDat97To128 - New Data Bits (for all message objects) */
#define tms570_DCAN_DCAN NWDAT78_NewDat97To128(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN NWDAT78_NewDat97To128_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN NWDAT78_NewDat97To128_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_DCAN_DCAN INTPNDX------------------*/
/* field: IntPndReg8 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Interrupt Pending X Register will be set. */
#define tms570_DCAN_DCAN INTPNDX_IntPndReg8(val) BSP_FLD32(val,14, 15)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg8_GET(reg) BSP_FLD32GET(reg,14, 15)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg8_SET(reg,val) BSP_FLD32SET(reg, val,14, 15)

/* field: IntPndReg7 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Interrupt Pending X Register will be set. */
#define tms570_DCAN_DCAN INTPNDX_IntPndReg7(val) BSP_FLD32(val,12, 13)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg7_GET(reg) BSP_FLD32GET(reg,12, 13)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg7_SET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: IntPndReg6 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Interrupt Pending X Register will be set. */
#define tms570_DCAN_DCAN INTPNDX_IntPndReg6(val) BSP_FLD32(val,10, 11)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg6_GET(reg) BSP_FLD32GET(reg,10, 11)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg6_SET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: IntPndReg5 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Interrupt Pending X Register will be set. */
#define tms570_DCAN_DCAN INTPNDX_IntPndReg5(val) BSP_FLD32(val,8, 9)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg5_GET(reg) BSP_FLD32GET(reg,8, 9)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg5_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: IntPndReg4 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Interrupt Pending X Register will be set. */
#define tms570_DCAN_DCAN INTPNDX_IntPndReg4(val) BSP_FLD32(val,6, 7)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg4_GET(reg) BSP_FLD32GET(reg,6, 7)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg4_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: IntPndReg3 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Interrupt Pending X Register will be set. */
#define tms570_DCAN_DCAN INTPNDX_IntPndReg3(val) BSP_FLD32(val,4, 5)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg3_GET(reg) BSP_FLD32GET(reg,4, 5)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg3_SET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: IntPndReg2 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Interrupt Pending X Register will be set. */
#define tms570_DCAN_DCAN INTPNDX_IntPndReg2(val) BSP_FLD32(val,2, 3)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg2_GET(reg) BSP_FLD32GET(reg,2, 3)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg2_SET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: IntPndReg1 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Interrupt Pending X Register will be set. */
#define tms570_DCAN_DCAN INTPNDX_IntPndReg1(val) BSP_FLD32(val,0, 1)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg1_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_DCAN_DCAN INTPNDX_IntPndReg1_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*-----------------tms570_DCAN_DCAN INTPND12-----------------*/
/* field: IntPnd1To32 - Interrupt Pending Bits (for all message objects) */
#define tms570_DCAN_DCAN INTPND12_IntPnd1To32(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN INTPND12_IntPnd1To32_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN INTPND12_IntPnd1To32_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN INTPND34-----------------*/
/* field: IntPnd33To64 - Interrupt Pending Bits (for all message objects) */
#define tms570_DCAN_DCAN INTPND34_IntPnd33To64(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN INTPND34_IntPnd33To64_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN INTPND34_IntPnd33To64_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN INTPND56-----------------*/
/* field: IntPnd65To96 - Interrupt Pending Bits (for all message objects) */
#define tms570_DCAN_DCAN INTPND56_IntPnd65To96(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN INTPND56_IntPnd65To96_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN INTPND56_IntPnd65To96_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN INTPND78-----------------*/
/* field: IntPnd97To128 - Interrupt Pending Bits (for all message objects) */
#define tms570_DCAN_DCAN INTPND78_IntPnd97To128(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN INTPND78_IntPnd97To128_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN INTPND78_IntPnd97To128_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_DCAN_DCAN MSGVALX------------------*/
/* field: MsgValReg8 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Message Valid X Register will be set. */
#define tms570_DCAN_DCAN MSGVALX_MsgValReg8(val) BSP_FLD32(val,14, 15)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg8_GET(reg) BSP_FLD32GET(reg,14, 15)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg8_SET(reg,val) BSP_FLD32SET(reg, val,14, 15)

/* field: MsgValReg7 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Message Valid X Register will be set. */
#define tms570_DCAN_DCAN MSGVALX_MsgValReg7(val) BSP_FLD32(val,12, 13)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg7_GET(reg) BSP_FLD32GET(reg,12, 13)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg7_SET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: MsgValReg6 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Message Valid X Register will be set. */
#define tms570_DCAN_DCAN MSGVALX_MsgValReg6(val) BSP_FLD32(val,10, 11)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg6_GET(reg) BSP_FLD32GET(reg,10, 11)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg6_SET(reg,val) BSP_FLD32SET(reg, val,10, 11)

/* field: MsgValReg5 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Message Valid X Register will be set. */
#define tms570_DCAN_DCAN MSGVALX_MsgValReg5(val) BSP_FLD32(val,8, 9)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg5_GET(reg) BSP_FLD32GET(reg,8, 9)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg5_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: MsgValReg4 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Message Valid X Register will be set. */
#define tms570_DCAN_DCAN MSGVALX_MsgValReg4(val) BSP_FLD32(val,6, 7)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg4_GET(reg) BSP_FLD32GET(reg,6, 7)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg4_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: MsgValReg3 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Message Valid X Register will be set. */
#define tms570_DCAN_DCAN MSGVALX_MsgValReg3(val) BSP_FLD32(val,4, 5)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg3_GET(reg) BSP_FLD32GET(reg,4, 5)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg3_SET(reg,val) BSP_FLD32SET(reg, val,4, 5)

/* field: MsgValReg2 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Message Valid X Register will be set. */
#define tms570_DCAN_DCAN MSGVALX_MsgValReg2(val) BSP_FLD32(val,2, 3)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg2_GET(reg) BSP_FLD32GET(reg,2, 3)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg2_SET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: MsgValReg1 - If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the Message Valid X Register will be set. */
#define tms570_DCAN_DCAN MSGVALX_MsgValReg1(val) BSP_FLD32(val,0, 1)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg1_GET(reg) BSP_FLD32GET(reg,0, 1)
#define tms570_DCAN_DCAN MSGVALX_MsgValReg1_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*-----------------tms570_DCAN_DCAN MSGVAL12-----------------*/
/* field: MsgVal1To32 - Message Valid Bits (for all message objects) */
#define tms570_DCAN_DCAN MSGVAL12_MsgVal1To32(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN MSGVAL12_MsgVal1To32_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN MSGVAL12_MsgVal1To32_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN MSGVAL34-----------------*/
/* field: MsgVal33To64 - Message Valid Bits (for all message objects) */
#define tms570_DCAN_DCAN MSGVAL34_MsgVal33To64(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN MSGVAL34_MsgVal33To64_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN MSGVAL34_MsgVal33To64_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN MSGVAL56-----------------*/
/* field: MsgVal65To96 - Message Valid Bits (for all message objects) */
#define tms570_DCAN_DCAN MSGVAL56_MsgVal65To96(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN MSGVAL56_MsgVal65To96_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN MSGVAL56_MsgVal65To96_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN MSGVAL78-----------------*/
/* field: MsgVal97To128 - Message Valid Bits (for all message objects) */
#define tms570_DCAN_DCAN MSGVAL78_MsgVal97To128(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN MSGVAL78_MsgVal97To128_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN MSGVAL78_MsgVal97To128_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN INTMUX12-----------------*/
/* field: IntMux1To32 - Multiplexes IntPnd value to either DCAN0INT or DCAN1INT interrupt lines. */
#define tms570_DCAN_DCAN INTMUX12_IntMux1To32(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN INTMUX12_IntMux1To32_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN INTMUX12_IntMux1To32_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN INTMUX34-----------------*/
/* field: IntMux33To64 - Multiplexes IntPnd value to either DCAN0INT or DCAN1INT interrupt lines. */
#define tms570_DCAN_DCAN INTMUX34_IntMux33To64(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN INTMUX34_IntMux33To64_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN INTMUX34_IntMux33To64_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN INTMUX56-----------------*/
/* field: IntMux65To96 - Multiplexes IntPnd value to either DCAN0INT or DCAN1INT interrupt lines. */
#define tms570_DCAN_DCAN INTMUX56_IntMux65To96(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN INTMUX56_IntMux65To96_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN INTMUX56_IntMux65To96_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN INTMUX78-----------------*/
/* field: IntMux97To128 - Multiplexes IntPnd value to either DCAN0INT or DCAN1INT interrupt lines. */
#define tms570_DCAN_DCAN INTMUX78_IntMux97To128(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN INTMUX78_IntMux97To128_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN INTMUX78_IntMux97To128_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_DCAN_DCAN IF1CMD------------------*/
/* field: WR/RD - Write/Read */
#define tms570_DCAN_DCAN IF1CMD_WR/RD BSP_FLD32(23)

/* field: Mask - Access Mask bits */
#define tms570_DCAN_DCAN IF1CMD_Mask BSP_FLD32(22)

/* field: Arb - Access Arbitration bits */
#define tms570_DCAN_DCAN IF1CMD_Arb BSP_FLD32(21)

/* field: Control - Access Control bits */
#define tms570_DCAN_DCAN IF1CMD_Control BSP_FLD32(20)

/* field: ClrIntPnd - Clear Interrupt Pending bit */
#define tms570_DCAN_DCAN IF1CMD_ClrIntPnd BSP_FLD32(19)

/* field: TxRqst/NewDat - Access Transmission Request bit */
#define tms570_DCAN_DCAN IF1CMD_TxRqst/NewDat BSP_FLD32(18)

/* field: Data_A - Access Data Bytes 0-3 */
#define tms570_DCAN_DCAN IF1CMD_Data_A BSP_FLD32(17)

/* field: Data_B - Access Data Bytes 4-7 */
#define tms570_DCAN_DCAN IF1CMD_Data_B BSP_FLD32(16)

/* field: Busy - Busy flag */
#define tms570_DCAN_DCAN IF1CMD_Busy BSP_FLD32(15)

/* field: DMA_Active - Activation of DMA feature for subsequent internal IF1/IF2 update */
#define tms570_DCAN_DCAN IF1CMD_DMA_Active BSP_FLD32(14)

/* field: Message_Number - Number of message object in Message RAM that is used for data transfer */
#define tms570_DCAN_DCAN IF1CMD_Message_Number(val) BSP_FLD32(val,0, 7)
#define tms570_DCAN_DCAN IF1CMD_Message_Number_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_DCAN_DCAN IF1CMD_Message_Number_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*------------------tms570_DCAN_DCAN IF1MSK------------------*/
/* field: MXtd - Mask Extended Identifier */
#define tms570_DCAN_DCAN IF1MSK_MXtd BSP_FLD32(31)

/* field: MDir - Mask Message Direction */
#define tms570_DCAN_DCAN IF1MSK_MDir BSP_FLD32(30)

/* field: Msk - Identifier Mask */
#define tms570_DCAN_DCAN IF1MSK_Msk(val) BSP_FLD32(val,0, 28)
#define tms570_DCAN_DCAN IF1MSK_Msk_GET(reg) BSP_FLD32GET(reg,0, 28)
#define tms570_DCAN_DCAN IF1MSK_Msk_SET(reg,val) BSP_FLD32SET(reg, val,0, 28)


/*------------------tms570_DCAN_DCAN IF1ARB------------------*/
/* field: MsgVal - Message Valid */
#define tms570_DCAN_DCAN IF1ARB_MsgVal BSP_FLD32(31)

/* field: Xtd - Extended Identifier */
#define tms570_DCAN_DCAN IF1ARB_Xtd BSP_FLD32(30)

/* field: Dir - Message direction */
#define tms570_DCAN_DCAN IF1ARB_Dir BSP_FLD32(29)

/* field: ID - Message Identifier */
#define tms570_DCAN_DCAN IF1ARB_ID(val) BSP_FLD32(val,0, 28)
#define tms570_DCAN_DCAN IF1ARB_ID_GET(reg) BSP_FLD32GET(reg,0, 28)
#define tms570_DCAN_DCAN IF1ARB_ID_SET(reg,val) BSP_FLD32SET(reg, val,0, 28)


/*------------------tms570_DCAN_DCAN IF1MCTL------------------*/
/* field: NewDat - New Data */
#define tms570_DCAN_DCAN IF1MCTL_NewDat BSP_FLD32(15)

/* field: MsgLst - Message Lost (only valid for message objects with direction = receive) */
#define tms570_DCAN_DCAN IF1MCTL_MsgLst BSP_FLD32(14)

/* field: IntPnd - Interrupt Pending */
#define tms570_DCAN_DCAN IF1MCTL_IntPnd BSP_FLD32(13)

/* field: UMask - Use Acceptance Mask */
#define tms570_DCAN_DCAN IF1MCTL_UMask BSP_FLD32(12)

/* field: TxIE - Transmit Interrupt Enable */
#define tms570_DCAN_DCAN IF1MCTL_TxIE BSP_FLD32(11)

/* field: RxIE - Receive Interrupt Enable */
#define tms570_DCAN_DCAN IF1MCTL_RxIE BSP_FLD32(10)

/* field: RmtEn - Remote Enable */
#define tms570_DCAN_DCAN IF1MCTL_RmtEn BSP_FLD32(9)

/* field: TxRqst - Transmit Request */
#define tms570_DCAN_DCAN IF1MCTL_TxRqst BSP_FLD32(8)

/* field: EoB - Data Frame has 0-8 data bits */
#define tms570_DCAN_DCAN IF1MCTL_EoB BSP_FLD32(7)

/* field: DLC - Data Length Code */
#define tms570_DCAN_DCAN IF1MCTL_DLC(val) BSP_FLD32(val,0, 3)
#define tms570_DCAN_DCAN IF1MCTL_DLC_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_DCAN_DCAN IF1MCTL_DLC_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*------------------tms570_DCAN_DCAN IF1DATA------------------*/
/* field: Data0 - Data 0 */
#define tms570_DCAN_DCAN IF1DATA_Data0(val) BSP_FLD32(val,0, 7)
#define tms570_DCAN_DCAN IF1DATA_Data0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_DCAN_DCAN IF1DATA_Data0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)

/* field: Data1 - Data 1 */
#define tms570_DCAN_DCAN IF1DATA_Data1(val) BSP_FLD32(val,8, 15)
#define tms570_DCAN_DCAN IF1DATA_Data1_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_DCAN_DCAN IF1DATA_Data1_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: Data2 - Data 2 */
#define tms570_DCAN_DCAN IF1DATA_Data2(val) BSP_FLD32(val,16, 23)
#define tms570_DCAN_DCAN IF1DATA_Data2_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_DCAN_DCAN IF1DATA_Data2_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: Data3 - Data 3 */
#define tms570_DCAN_DCAN IF1DATA_Data3(val) BSP_FLD32(val,24, 31)
#define tms570_DCAN_DCAN IF1DATA_Data3_GET(reg) BSP_FLD32GET(reg,24, 31)
#define tms570_DCAN_DCAN IF1DATA_Data3_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)


/*------------------tms570_DCAN_DCAN IF1DATB------------------*/
/* field: Data4 - Data 4 */
#define tms570_DCAN_DCAN IF1DATB_Data4(val) BSP_FLD32(val,0, 7)
#define tms570_DCAN_DCAN IF1DATB_Data4_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_DCAN_DCAN IF1DATB_Data4_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)

/* field: Data5 - Data 5 */
#define tms570_DCAN_DCAN IF1DATB_Data5(val) BSP_FLD32(val,8, 15)
#define tms570_DCAN_DCAN IF1DATB_Data5_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_DCAN_DCAN IF1DATB_Data5_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: Data6 - Data 6 */
#define tms570_DCAN_DCAN IF1DATB_Data6(val) BSP_FLD32(val,16, 23)
#define tms570_DCAN_DCAN IF1DATB_Data6_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_DCAN_DCAN IF1DATB_Data6_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: Data7 - Data 7 */
#define tms570_DCAN_DCAN IF1DATB_Data7(val) BSP_FLD32(val,24, 31)
#define tms570_DCAN_DCAN IF1DATB_Data7_GET(reg) BSP_FLD32GET(reg,24, 31)
#define tms570_DCAN_DCAN IF1DATB_Data7_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)


/*------------------tms570_DCAN_DCAN IF2CMD------------------*/
/* field: WR/RD - Write/Read */
#define tms570_DCAN_DCAN IF2CMD_WR/RD BSP_FLD32(23)

/* field: Mask - Access Mask bits */
#define tms570_DCAN_DCAN IF2CMD_Mask BSP_FLD32(22)

/* field: Arb - Access Arbitration bits */
#define tms570_DCAN_DCAN IF2CMD_Arb BSP_FLD32(21)

/* field: Control - Access Control bits */
#define tms570_DCAN_DCAN IF2CMD_Control BSP_FLD32(20)

/* field: ClrIntPnd - Clear Interrupt Pending bit */
#define tms570_DCAN_DCAN IF2CMD_ClrIntPnd BSP_FLD32(19)

/* field: TxRqst/NewDat - Access Transmission Request bit */
#define tms570_DCAN_DCAN IF2CMD_TxRqst/NewDat BSP_FLD32(18)

/* field: Data_A - Access Data Bytes 0-3 */
#define tms570_DCAN_DCAN IF2CMD_Data_A BSP_FLD32(17)

/* field: Data_B - Access Data Bytes 4-7 */
#define tms570_DCAN_DCAN IF2CMD_Data_B BSP_FLD32(16)

/* field: Busy - Busy flag */
#define tms570_DCAN_DCAN IF2CMD_Busy BSP_FLD32(15)

/* field: DMA_Active - Activation of DMA feature for subsequent internal IF1/IF2 update */
#define tms570_DCAN_DCAN IF2CMD_DMA_Active BSP_FLD32(14)

/* field: Message_Number - Number of message object in Message RAM that is used for data transfer */
#define tms570_DCAN_DCAN IF2CMD_Message_Number(val) BSP_FLD32(val,0, 7)
#define tms570_DCAN_DCAN IF2CMD_Message_Number_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_DCAN_DCAN IF2CMD_Message_Number_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*------------------tms570_DCAN_DCAN IF2MSK------------------*/
/* field: MXtd - Mask Extended Identifier */
#define tms570_DCAN_DCAN IF2MSK_MXtd BSP_FLD32(31)

/* field: MDir - Mask Message Direction */
#define tms570_DCAN_DCAN IF2MSK_MDir BSP_FLD32(30)

/* field: Msk - Identifier Mask */
#define tms570_DCAN_DCAN IF2MSK_Msk(val) BSP_FLD32(val,0, 28)
#define tms570_DCAN_DCAN IF2MSK_Msk_GET(reg) BSP_FLD32GET(reg,0, 28)
#define tms570_DCAN_DCAN IF2MSK_Msk_SET(reg,val) BSP_FLD32SET(reg, val,0, 28)


/*------------------tms570_DCAN_DCAN IF2ARB------------------*/
/* field: MsgVal - Message Valid */
#define tms570_DCAN_DCAN IF2ARB_MsgVal BSP_FLD32(31)

/* field: Xtd - Extended Identifier */
#define tms570_DCAN_DCAN IF2ARB_Xtd BSP_FLD32(30)

/* field: Dir - Message direction */
#define tms570_DCAN_DCAN IF2ARB_Dir BSP_FLD32(29)

/* field: ID - Message Identifier */
#define tms570_DCAN_DCAN IF2ARB_ID(val) BSP_FLD32(val,0, 28)
#define tms570_DCAN_DCAN IF2ARB_ID_GET(reg) BSP_FLD32GET(reg,0, 28)
#define tms570_DCAN_DCAN IF2ARB_ID_SET(reg,val) BSP_FLD32SET(reg, val,0, 28)


/*------------------tms570_DCAN_DCAN IF2MCTL------------------*/
/* field: NewDat - New Data */
#define tms570_DCAN_DCAN IF2MCTL_NewDat BSP_FLD32(15)

/* field: MsgLst - Message Lost (only valid for message objects with direction = receive) */
#define tms570_DCAN_DCAN IF2MCTL_MsgLst BSP_FLD32(14)

/* field: IntPnd - Interrupt Pending */
#define tms570_DCAN_DCAN IF2MCTL_IntPnd BSP_FLD32(13)

/* field: UMask - Use Acceptance Mask */
#define tms570_DCAN_DCAN IF2MCTL_UMask BSP_FLD32(12)

/* field: TxIE - Transmit Interrupt Enable */
#define tms570_DCAN_DCAN IF2MCTL_TxIE BSP_FLD32(11)

/* field: RxIE - Receive Interrupt Enable */
#define tms570_DCAN_DCAN IF2MCTL_RxIE BSP_FLD32(10)

/* field: RmtEn - Remote Enable */
#define tms570_DCAN_DCAN IF2MCTL_RmtEn BSP_FLD32(9)

/* field: TxRqst - Transmit Request */
#define tms570_DCAN_DCAN IF2MCTL_TxRqst BSP_FLD32(8)

/* field: EoB - Data Frame has 0-8 data bits */
#define tms570_DCAN_DCAN IF2MCTL_EoB BSP_FLD32(7)

/* field: DLC - Data Length Code */
#define tms570_DCAN_DCAN IF2MCTL_DLC(val) BSP_FLD32(val,0, 3)
#define tms570_DCAN_DCAN IF2MCTL_DLC_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_DCAN_DCAN IF2MCTL_DLC_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*------------------tms570_DCAN_DCAN IF2DATA------------------*/
/* field: Data0 - Data 0 */
#define tms570_DCAN_DCAN IF2DATA_Data0(val) BSP_FLD32(val,0, 7)
#define tms570_DCAN_DCAN IF2DATA_Data0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_DCAN_DCAN IF2DATA_Data0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)

/* field: Data1 - Data 1 */
#define tms570_DCAN_DCAN IF2DATA_Data1(val) BSP_FLD32(val,8, 15)
#define tms570_DCAN_DCAN IF2DATA_Data1_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_DCAN_DCAN IF2DATA_Data1_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: Data2 - Data 2 */
#define tms570_DCAN_DCAN IF2DATA_Data2(val) BSP_FLD32(val,16, 23)
#define tms570_DCAN_DCAN IF2DATA_Data2_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_DCAN_DCAN IF2DATA_Data2_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: Data3 - Data 3 */
#define tms570_DCAN_DCAN IF2DATA_Data3(val) BSP_FLD32(val,24, 31)
#define tms570_DCAN_DCAN IF2DATA_Data3_GET(reg) BSP_FLD32GET(reg,24, 31)
#define tms570_DCAN_DCAN IF2DATA_Data3_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)


/*------------------tms570_DCAN_DCAN IF2DATB------------------*/
/* field: Data4 - Data 4 */
#define tms570_DCAN_DCAN IF2DATB_Data4(val) BSP_FLD32(val,0, 7)
#define tms570_DCAN_DCAN IF2DATB_Data4_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_DCAN_DCAN IF2DATB_Data4_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)

/* field: Data5 - Data 5 */
#define tms570_DCAN_DCAN IF2DATB_Data5(val) BSP_FLD32(val,8, 15)
#define tms570_DCAN_DCAN IF2DATB_Data5_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_DCAN_DCAN IF2DATB_Data5_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: Data6 - Data 6 */
#define tms570_DCAN_DCAN IF2DATB_Data6(val) BSP_FLD32(val,16, 23)
#define tms570_DCAN_DCAN IF2DATB_Data6_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_DCAN_DCAN IF2DATB_Data6_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: Data7 - Data 7 */
#define tms570_DCAN_DCAN IF2DATB_Data7(val) BSP_FLD32(val,24, 31)
#define tms570_DCAN_DCAN IF2DATB_Data7_GET(reg) BSP_FLD32GET(reg,24, 31)
#define tms570_DCAN_DCAN IF2DATB_Data7_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)


/*------------------tms570_DCAN_DCAN IF3OBS------------------*/
/* field: IF3_Upd - IF3 Update Data */
#define tms570_DCAN_DCAN IF3OBS_IF3_Upd BSP_FLD32(15)

/* field: IF3_SDB - IF3 Status of Data B read access */
#define tms570_DCAN_DCAN IF3OBS_IF3_SDB BSP_FLD32(12)

/* field: IF3_SDA - IF3 Status of Data A read access */
#define tms570_DCAN_DCAN IF3OBS_IF3_SDA BSP_FLD32(11)

/* field: IF3_SC - IF3 Status of Control bits read access */
#define tms570_DCAN_DCAN IF3OBS_IF3_SC BSP_FLD32(10)

/* field: IF3_SA - IF3 Status of Arbitration data read access */
#define tms570_DCAN_DCAN IF3OBS_IF3_SA BSP_FLD32(9)

/* field: IF3_SM - IF3 Status of Mask data read access */
#define tms570_DCAN_DCAN IF3OBS_IF3_SM BSP_FLD32(8)

/* field: Data_B - Data B read observation */
#define tms570_DCAN_DCAN IF3OBS_Data_B BSP_FLD32(4)

/* field: Data_A - Data A read observation */
#define tms570_DCAN_DCAN IF3OBS_Data_A BSP_FLD32(3)

/* field: Ctrl - Ctrl read observation */
#define tms570_DCAN_DCAN IF3OBS_Ctrl BSP_FLD32(2)

/* field: Arb - Arbitration data read observation */
#define tms570_DCAN_DCAN IF3OBS_Arb BSP_FLD32(1)

/* field: Mask - Mask data read observation */
#define tms570_DCAN_DCAN IF3OBS_Mask BSP_FLD32(0)


/*------------------tms570_DCAN_DCAN IF3MSK------------------*/
/* field: MXtd - Mask Extended Identifier */
#define tms570_DCAN_DCAN IF3MSK_MXtd BSP_FLD32(31)

/* field: MDir - Mask Message Direction */
#define tms570_DCAN_DCAN IF3MSK_MDir BSP_FLD32(30)

/* field: Msk[28:0] - Identifier Mask */
#define tms570_DCAN_DCAN IF3MSK_Msk[28:0](val) BSP_FLD32(val,0, 28)
#define tms570_DCAN_DCAN IF3MSK_Msk[28:0]_GET(reg) BSP_FLD32GET(reg,0, 28)
#define tms570_DCAN_DCAN IF3MSK_Msk[28:0]_SET(reg,val) BSP_FLD32SET(reg, val,0, 28)


/*------------------tms570_DCAN_DCAN IF3ARB------------------*/
/* field: MsgVal - Message Valid */
#define tms570_DCAN_DCAN IF3ARB_MsgVal BSP_FLD32(31)

/* field: Xtd - Extended Identifier */
#define tms570_DCAN_DCAN IF3ARB_Xtd BSP_FLD32(30)

/* field: Dir - Message direction */
#define tms570_DCAN_DCAN IF3ARB_Dir BSP_FLD32(29)

/* field: ID[28:0] - Message Identifier */
#define tms570_DCAN_DCAN IF3ARB_ID[28:0](val) BSP_FLD32(val,0, 28)
#define tms570_DCAN_DCAN IF3ARB_ID[28:0]_GET(reg) BSP_FLD32GET(reg,0, 28)
#define tms570_DCAN_DCAN IF3ARB_ID[28:0]_SET(reg,val) BSP_FLD32SET(reg, val,0, 28)


/*------------------tms570_DCAN_DCAN IF3MCTL------------------*/
/* field: NewDat - New Data */
#define tms570_DCAN_DCAN IF3MCTL_NewDat BSP_FLD32(15)

/* field: MsgLst - Message Lost (only valid for message objects with direction = receive) */
#define tms570_DCAN_DCAN IF3MCTL_MsgLst BSP_FLD32(14)

/* field: IntPnd - Interrupt Pending */
#define tms570_DCAN_DCAN IF3MCTL_IntPnd BSP_FLD32(13)

/* field: UMask - Use Acceptance Mask */
#define tms570_DCAN_DCAN IF3MCTL_UMask BSP_FLD32(12)

/* field: TxIE - Transmit Interrupt Enable */
#define tms570_DCAN_DCAN IF3MCTL_TxIE BSP_FLD32(11)

/* field: RxIE - Receive Interrupt Enable */
#define tms570_DCAN_DCAN IF3MCTL_RxIE BSP_FLD32(10)

/* field: RmtEn - Remote Enable */
#define tms570_DCAN_DCAN IF3MCTL_RmtEn BSP_FLD32(9)

/* field: TxRqst - TxRqst */
#define tms570_DCAN_DCAN IF3MCTL_TxRqst BSP_FLD32(8)

/* field: EoB - End of Block */
#define tms570_DCAN_DCAN IF3MCTL_EoB BSP_FLD32(7)

/* field: DLC[3:0] - Data Length Code */
#define tms570_DCAN_DCAN IF3MCTL_DLC[3:0](val) BSP_FLD32(val,0, 3)
#define tms570_DCAN_DCAN IF3MCTL_DLC[3:0]_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_DCAN_DCAN IF3MCTL_DLC[3:0]_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*------------------tms570_DCAN_DCAN IF3DATA------------------*/
/* field: Data0 - Data 0 */
#define tms570_DCAN_DCAN IF3DATA_Data0(val) BSP_FLD32(val,0, 7)
#define tms570_DCAN_DCAN IF3DATA_Data0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_DCAN_DCAN IF3DATA_Data0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)

/* field: Data1 - Data 1 */
#define tms570_DCAN_DCAN IF3DATA_Data1(val) BSP_FLD32(val,8, 15)
#define tms570_DCAN_DCAN IF3DATA_Data1_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_DCAN_DCAN IF3DATA_Data1_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: Data2 - Data 2 */
#define tms570_DCAN_DCAN IF3DATA_Data2(val) BSP_FLD32(val,16, 23)
#define tms570_DCAN_DCAN IF3DATA_Data2_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_DCAN_DCAN IF3DATA_Data2_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: Data3 - Data 3 */
#define tms570_DCAN_DCAN IF3DATA_Data3(val) BSP_FLD32(val,24, 31)
#define tms570_DCAN_DCAN IF3DATA_Data3_GET(reg) BSP_FLD32GET(reg,24, 31)
#define tms570_DCAN_DCAN IF3DATA_Data3_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)


/*------------------tms570_DCAN_DCAN IF3DATB------------------*/
/* field: Data4 - Data 4 */
#define tms570_DCAN_DCAN IF3DATB_Data4(val) BSP_FLD32(val,0, 7)
#define tms570_DCAN_DCAN IF3DATB_Data4_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_DCAN_DCAN IF3DATB_Data4_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)

/* field: Data5 - Data 5 */
#define tms570_DCAN_DCAN IF3DATB_Data5(val) BSP_FLD32(val,8, 15)
#define tms570_DCAN_DCAN IF3DATB_Data5_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_DCAN_DCAN IF3DATB_Data5_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: Data6 - Data 6 */
#define tms570_DCAN_DCAN IF3DATB_Data6(val) BSP_FLD32(val,16, 23)
#define tms570_DCAN_DCAN IF3DATB_Data6_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_DCAN_DCAN IF3DATB_Data6_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: Data7 - Data 7 */
#define tms570_DCAN_DCAN IF3DATB_Data7(val) BSP_FLD32(val,24, 31)
#define tms570_DCAN_DCAN IF3DATB_Data7_GET(reg) BSP_FLD32GET(reg,24, 31)
#define tms570_DCAN_DCAN IF3DATB_Data7_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)


/*-----------------tms570_DCAN_DCAN IF3UPD12-----------------*/
/* field: IF3UpdEn1To32 - IF3 Update Enabled (for all message objects) */
#define tms570_DCAN_DCAN IF3UPD12_IF3UpdEn1To32(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN IF3UPD12_IF3UpdEn1To32_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN IF3UPD12_IF3UpdEn1To32_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN IF3UPD34-----------------*/
/* field: IF3UpdEn33To64 - IF3 Update Enabled (for all message objects) */
#define tms570_DCAN_DCAN IF3UPD34_IF3UpdEn33To64(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN IF3UPD34_IF3UpdEn33To64_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN IF3UPD34_IF3UpdEn33To64_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN IF3UPD56-----------------*/
/* field: IF3UpdEn65To96 - IF3 Update Enabled (for all message objects) */
#define tms570_DCAN_DCAN IF3UPD56_IF3UpdEn65To96(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN IF3UPD56_IF3UpdEn65To96_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN IF3UPD56_IF3UpdEn65To96_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_DCAN_DCAN IF3UPD78-----------------*/
/* field: IF3UpdEn97To128 - IF3 Update Enabled (for all message objects) */
#define tms570_DCAN_DCAN IF3UPD78_IF3UpdEn97To128(val) BSP_FLD32(val,0, 31)
#define tms570_DCAN_DCAN IF3UPD78_IF3UpdEn97To128_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DCAN_DCAN IF3UPD78_IF3UpdEn97To128_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_DCAN_DCAN TIOC-------------------*/
/* field: PU - CAN_TX Pullup/Pulldown select. This bit is only active when CAN_TX is configured to be an input. */
#define tms570_DCAN_DCAN TIOC_PU BSP_FLD32(18)

/* field: PD - CAN_TX pull disable. This bit is only active when CAN_TX is configured to be an input. */
#define tms570_DCAN_DCAN TIOC_PD BSP_FLD32(17)

/* field: OD - CAN_TX open drain enable. */
#define tms570_DCAN_DCAN TIOC_OD BSP_FLD32(16)

/* field: Func - CAN_TX function. This bit changes the function of the CAN_TX pin. */
#define tms570_DCAN_DCAN TIOC_Func BSP_FLD32(3)

/* field: Dir - CAN_TX data direction. */
#define tms570_DCAN_DCAN TIOC_Dir BSP_FLD32(2)

/* field: Out - CAN_TX data out write. */
#define tms570_DCAN_DCAN TIOC_Out BSP_FLD32(1)


/*-------------------tms570_DCAN_DCAN RIOC-------------------*/
/* field: PU - CAN_RX Pullup/Pulldown select. This bit is only active when CAN_RX is configured to be an input. */
#define tms570_DCAN_DCAN RIOC_PU BSP_FLD32(18)

/* field: PD - CAN_RX pull disable. This bit is only active when CAN_RX is configured to be an input. */
#define tms570_DCAN_DCAN RIOC_PD BSP_FLD32(17)

/* field: OD - CAN_RX open drain enable. */
#define tms570_DCAN_DCAN RIOC_OD BSP_FLD32(16)

/* field: Func - CAN_RX function. This bit changes the function of the CAN_RX pin. */
#define tms570_DCAN_DCAN RIOC_Func BSP_FLD32(3)

/* field: Dir - CAN_RX data direction. */
#define tms570_DCAN_DCAN RIOC_Dir BSP_FLD32(2)

/* field: Out - CAN_RX data out write. */
#define tms570_DCAN_DCAN RIOC_Out BSP_FLD32(1)

/* field: In - CAN_RX data in. */
#define tms570_DCAN_DCAN RIOC_In BSP_FLD32(0)



#endif /* LIBBSP_ARM_tms570_DCAN.H */