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
#ifndef LIBBSP_ARM_tms570_LIN.H
#define LIBBSP_ARM_tms570_LIN.H

#include <bsp/utility.h>

typedef struct{
  uint32_t SCIGCR0;           /*SCI Global Control Register 0*/
  uint32_t SCIGCR1;           /*SCI Global Control Register 1*/
  uint32_t SCIGCR2;           /*SCI Global Control Register 2*/
  uint32_t SCISETINT;         /*SCI Set Interrupt Register*/
  uint32_t SCICLEARINT;       /*SCI Clear Interrupt Register*/
  uint32_t SCISETINTLVL;      /*SCI Set Interrupt Level Register*/
  uint32_t SCICLEARINTLVL;    /*SCI Clear Interrupt Level Register*/
  uint32_t SCIFLR;            /*SCI Flags Register*/
  uint32_t SCIINTVECT0;       /*SCI Interrupt Vector Offset 0*/
  uint32_t SCIINTVECT1;       /*SCI Interrupt Vector Offset 1*/
  uint32_t SCIFORMAT;         /*SCI Format Control Register*/
  uint32_t BRS;               /*Baud Rate Selection Register*/
  uint32_t SCIED;             /*Receiver Emulation Data Buffer*/
  uint32_t SCIRD;             /*Receiver Data Buffer*/
  uint32_t SCITD;             /*Transmit Data Buffer*/
  uint32_t SCIPIO0;           /*SCI Pin I/O Control Register 0*/
  uint32_t SCIPIO1;           /*SCI Pin I/O Control Register 1*/
  uint32_t SCIPIO2;           /*SCI Pin I/O Control Register 2*/
  uint32_t SCIPIO3;           /*SCI Pin I/O Control Register 3*/
  uint32_t SCIPIO4;           /*SCI Pin I/O Control Register 4*/
  uint32_t SCIPIO5;           /*SCI Pin I/O Control Register 5*/
  uint32_t SCIPIO6;           /*SCI Pin I/O Control Register 6*/
  uint32_t SCIPIO7;           /*SCI Pin I/O Control Register 7*/
  uint32_t SCIPIO8;           /*SCI Pin I/O Control Register 8*/
  uint32_t LINCOMPARE;        /*LIN Compare Register*/
  uint32_t LINRD0;            /*LIN Receive Buffer 0 Register*/
  uint32_t LINRD1;            /*LIN Receive Buffer 1 Register*/
  uint32_t LINMASK;           /*LIN Mask Register*/
  uint32_t LINID;             /*LIN Identification Register*/
  uint32_t LINTD0;            /*LIN Transmit Buffer 0*/
  uint32_t LINTD1;            /*LIN Transmit Buffer 1*/
  uint32_t MBRS;              /*Maximum Baud Rate Selection Register*/
  uint8_t reserved1 [16];
  uint32_t IODFTCTRL;         /*Input/Output Error Enable Register*/
} LIN_struct;

/*---------------------tms570_LIN_SCIGCR0---------------------*/
/* field: Reserved - Read returns 0. Writes have no effect. */
#define tms570_LIN_SCIGCR0_Reserved(val) BSP_FLD32(val,1, 31)
#define tms570_LIN_SCIGCR0_Reserved_GET(reg) BSP_FLD32GET(reg,1, 31)
#define tms570_LIN_SCIGCR0_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,1, 31)

/* field: RESET - This bit resets the SCI module. */
#define tms570_LIN_SCIGCR0_RESET BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR1---------------------*/
/* field: TXENA - Transmit enable. */
#define tms570_LIN_SCIGCR1_TXENA BSP_FLD32(25)

/* field: RXENA - Receive enable. RXENA allows or prevents the transfer of data from SCIRXSHF to SCIRD. */
#define tms570_LIN_SCIGCR1_RXENA BSP_FLD32(24)

/* field: CONT - Continue on suspend. */
#define tms570_LIN_SCIGCR1_CONT BSP_FLD32(17)

/* field: LOOP_BACK - Loopback bit. The self-checking option for the SCI can be selected with this bit. */
#define tms570_LIN_SCIGCR1_LOOP_BACK BSP_FLD32(16)

/* field: POWERDOWN - If the POWERDOWN bit is set while the receiver is actively receiving data and the wake-up */
#define tms570_LIN_SCIGCR1_POWERDOWN BSP_FLD32(9)

/* field: SLEEP - SCI sleep. In a multiprocessor configuration, this bit controls the receive sleep function. */
#define tms570_LIN_SCIGCR1_SLEEP BSP_FLD32(8)

/* field: SWnRST - Software reset (active low). This bit is effective in LIN and SCI modes. */
#define tms570_LIN_SCIGCR1_SWnRST BSP_FLD32(7)

/* field: CLOCK - CLOCK */
#define tms570_LIN_SCIGCR1_CLOCK BSP_FLD32(5)

/* field: STOP - SCI number of stop bits per frame. */
#define tms570_LIN_SCIGCR1_STOP BSP_FLD32(4)

/* field: PARITY - SCI parity odd/even selection. If the PARITY ENA bit is set, PARITY designates odd or even parity. */
#define tms570_LIN_SCIGCR1_PARITY BSP_FLD32(3)

/* field: PARITY_ENA - Parity enable. This bit enables or disables the parity function. */
#define tms570_LIN_SCIGCR1_PARITY_ENA BSP_FLD32(2)

/* field: TIMING_MODE - SCI timing mode bit. */
#define tms570_LIN_SCIGCR1_TIMING_MODE BSP_FLD32(1)

/* field: COMM_MODE - SCI communication mode bit. */
#define tms570_LIN_SCIGCR1_COMM_MODE BSP_FLD32(0)


/*---------------------tms570_LIN_SCIGCR2---------------------*/
/* field: CC - Compare checksum. LIN mode only. */
#define tms570_LIN_SCIGCR2_CC BSP_FLD32(17)

/* field: SC - Send checksum byte. This bit is effective in LIN mode only. */
#define tms570_LIN_SCIGCR2_SC BSP_FLD32(16)

/* field: GEN_WU - Generate wakeup signal. This bit is effective in LIN mode only. */
#define tms570_LIN_SCIGCR2_GEN_WU BSP_FLD32(8)

/* field: POWERDOWN - Power down. This bit is effective in LIN or SCI mode. */
#define tms570_LIN_SCIGCR2_POWERDOWN BSP_FLD32(0)


/*--------------------tms570_LIN_SCISETINT--------------------*/
/* field: SET_FE_INT -  */
#define tms570_LIN_SCISETINT_SET_FE_INT BSP_FLD32(26)

/* field: SET_OE_INT - SET OE INT */
#define tms570_LIN_SCISETINT_SET_OE_INT BSP_FLD32(25)

/* field: SET_PE_INT - Set parity interrupt. */
#define tms570_LIN_SCISETINT_SET_PE_INT BSP_FLD32(24)

/* field: SET_RX_DMA_ALL - SET RX DMA ALL */
#define tms570_LIN_SCISETINT_SET_RX_DMA_ALL BSP_FLD32(18)

/* field: SET_RX_DMA - SET RX DMA */
#define tms570_LIN_SCISETINT_SET_RX_DMA BSP_FLD32(17)

/* field: SET_TX_DMA - Set transmit DMA. To enable DMA requests for the transmitter, this bit must be set. */
#define tms570_LIN_SCISETINT_SET_TX_DMA BSP_FLD32(16)

/* field: SET_RX_INT - SET RX INT */
#define tms570_LIN_SCISETINT_SET_RX_INT BSP_FLD32(9)

/* field: SET_TX_INT - Set transmitter interrupt. */
#define tms570_LIN_SCISETINT_SET_TX_INT BSP_FLD32(8)

/* field: SET_WAKEUP_INT - Set wakeup interrupt. */
#define tms570_LIN_SCISETINT_SET_WAKEUP_INT BSP_FLD32(1)

/* field: SET_BRKDT_INT - Set breakdetect interrupt. */
#define tms570_LIN_SCISETINT_SET_BRKDT_INT BSP_FLD32(0)


/*-------------------tms570_LIN_SCICLEARINT-------------------*/
/* field: CLR_FE_INT - Clear framing-error interrupt. This bit disables the framing-error interrupt when set. */
#define tms570_LIN_SCICLEARINT_CLR_FE_INT BSP_FLD32(26)

/* field: CLR_CE_INT - Clear overrun-error interrupt. This bit disables the SCI overrun error interrupt when set. */
#define tms570_LIN_SCICLEARINT_CLR_CE_INT BSP_FLD32(25)

/* field: CLR_PE_INT - Clear parity interrupt. This bit disables the parity error interrupt when set. */
#define tms570_LIN_SCICLEARINT_CLR_PE_INT BSP_FLD32(24)

/* field: CLR_RX_DMA_ALL - Clear receive DMA all. This bit clears the receive DMA request for address frames when set. */
#define tms570_LIN_SCICLEARINT_CLR_RX_DMA_ALL BSP_FLD32(18)

/* field: CLR_RX_DMA - Clear receive DMA request. This bit disables the receive DMA request when set. */
#define tms570_LIN_SCICLEARINT_CLR_RX_DMA BSP_FLD32(17)

/* field: CLR_TX_DMA - CLR TX DMA */
#define tms570_LIN_SCICLEARINT_CLR_TX_DMA BSP_FLD32(16)

/* field: CLR_RX_INT - Clear receiver interrupt. This bit disables the receiver interrupt when set. */
#define tms570_LIN_SCICLEARINT_CLR_RX_INT BSP_FLD32(9)

/* field: CLR_TX_INT - Clear transmitter interrupt. This bit disables the transmitter interrupt when set. */
#define tms570_LIN_SCICLEARINT_CLR_TX_INT BSP_FLD32(8)

/* field: CLR_WAKEUP_INT - Clear wakeup interrupt. This bit disables the wakeup interrupt when set. */
#define tms570_LIN_SCICLEARINT_CLR_WAKEUP_INT BSP_FLD32(1)

/* field: CLR_BRKDT_INT - Clear breakdetect interrupt. This bit disables the break-detect interrupt when set. */
#define tms570_LIN_SCICLEARINT_CLR_BRKDT_INT BSP_FLD32(0)


/*------------------tms570_LIN_SCISETINTLVL------------------*/
/* field: SET_FE_INT_LVL - Set framing-error interrupt level. */
#define tms570_LIN_SCISETINTLVL_SET_FE_INT_LVL BSP_FLD32(26)

/* field: SET_CE_INT_LVL - Set overrun-error interrupt level. */
#define tms570_LIN_SCISETINTLVL_SET_CE_INT_LVL BSP_FLD32(25)

/* field: SET_PE_INT_LVL - Set parity error interrupt level. */
#define tms570_LIN_SCISETINTLVL_SET_PE_INT_LVL BSP_FLD32(24)

/* field: SET_RX_DMA_ALL_LVL - Set receive DMA all interrupt levels. */
#define tms570_LIN_SCISETINTLVL_SET_RX_DMA_ALL_LVL BSP_FLD32(18)

/* field: SET_RX_INT_LVL - Set receiver interrupt level. */
#define tms570_LIN_SCISETINTLVL_SET_RX_INT_LVL BSP_FLD32(9)

/* field: SET_TX_INT_LVL - Set transmitter interrupt level. */
#define tms570_LIN_SCISETINTLVL_SET_TX_INT_LVL BSP_FLD32(8)

/* field: SET_WAKEUP_INT_LVL - Set wakeup interrupt level. */
#define tms570_LIN_SCISETINTLVL_SET_WAKEUP_INT_LVL BSP_FLD32(1)

/* field: SET_BRKDT_INT_LVL - SET BRKDT INT LVL */
#define tms570_LIN_SCISETINTLVL_SET_BRKDT_INT_LVL BSP_FLD32(0)


/*-----------------tms570_LIN_SCICLEARINTLVL-----------------*/
/* field: CLR_FE_INT_LVL - Clear framing-error interrupt. */
#define tms570_LIN_SCICLEARINTLVL_CLR_FE_INT_LVL BSP_FLD32(26)

/* field: CLR_CE_INT_LVL - CLR CE INT LVL */
#define tms570_LIN_SCICLEARINTLVL_CLR_CE_INT_LVL BSP_FLD32(25)

/* field: CLR_CE_INT_LVL - CLR CE INT LVL */
#define tms570_LIN_SCICLEARINTLVL_CLR_CE_INT_LVL BSP_FLD32(25)

/* field: CLR_PE_INT_LVL -  */
#define tms570_LIN_SCICLEARINTLVL_CLR_PE_INT_LVL BSP_FLD32(24)

/* field: CLR_RX_DMA_ALL_LVL - Clear receive DMA interrupt level. */
#define tms570_LIN_SCICLEARINTLVL_CLR_RX_DMA_ALL_LVL BSP_FLD32(18)

/* field: CLR_RX_INT_LVL - Clear receiver interrupt. */
#define tms570_LIN_SCICLEARINTLVL_CLR_RX_INT_LVL BSP_FLD32(9)

/* field: 8 - CLR TX INT LVL Clear transmitter interrupt. */
#define tms570_LIN_SCICLEARINTLVL_8 BSP_FLD32(8)

/* field: CLR_WAKEUP_INT_LVL - Clear wakeup interrupt. */
#define tms570_LIN_SCICLEARINTLVL_CLR_WAKEUP_INT_LVL BSP_FLD32(1)

/* field: CLR_BRKDT_INT_LVL - Clear breakdetect interrupt. */
#define tms570_LIN_SCICLEARINTLVL_CLR_BRKDT_INT_LVL BSP_FLD32(0)


/*---------------------tms570_LIN_SCIFLR---------------------*/
/* field: FE - Framing error flag. This bit is effective in LIN or SCI-compatible mode. */
#define tms570_LIN_SCIFLR_FE BSP_FLD32(26)

/* field: OE - Overrun error flag. */
#define tms570_LIN_SCIFLR_OE BSP_FLD32(25)

/* field: PE - Parity error flag. This bit is set when a parity error is detected in the received data. */
#define tms570_LIN_SCIFLR_PE BSP_FLD32(24)

/* field: RXWAKE - Receiver wakeup detect flag. */
#define tms570_LIN_SCIFLR_RXWAKE BSP_FLD32(12)

/* field: TX_EMPTY - Transmitter empty flag. */
#define tms570_LIN_SCIFLR_TX_EMPTY BSP_FLD32(11)

/* field: TXWAKE - Transmitter wakeup method select. */
#define tms570_LIN_SCIFLR_TXWAKE BSP_FLD32(10)

/* field: RXRDY - Receiver ready flag. */
#define tms570_LIN_SCIFLR_RXRDY BSP_FLD32(9)

/* field: TXRDY - Transmitter buffer register ready flag. */
#define tms570_LIN_SCIFLR_TXRDY BSP_FLD32(8)

/* field: BUSY - Bus busy flag. TThis bit indicates whether the receiver is in the process of receiving a frame. */
#define tms570_LIN_SCIFLR_BUSY BSP_FLD32(3)

/* field: IDLE - SCI receiver in idle state. */
#define tms570_LIN_SCIFLR_IDLE BSP_FLD32(2)

/* field: WAKEUP - Wakeup flag. */
#define tms570_LIN_SCIFLR_WAKEUP BSP_FLD32(1)

/* field: BRKDT - SCI break-detect flag. This bit is set when the SCI detects a break condition on the LINRX pin. */
#define tms570_LIN_SCIFLR_BRKDT BSP_FLD32(0)


/*-------------------tms570_LIN_SCIINTVECT0-------------------*/
/* field: INVECT0 - Interrupt vector offset for INT0. This register indicates the offset for interrupt line INT0. */
#define tms570_LIN_SCIINTVECT0_INVECT0(val) BSP_FLD32(val,0, 3)
#define tms570_LIN_SCIINTVECT0_INVECT0_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_LIN_SCIINTVECT0_INVECT0_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-------------------tms570_LIN_SCIINTVECT1-------------------*/
/* field: INVECT1 - Interrupt vector offset for INT1. This register indicates the offset for interrupt line INT1. */
#define tms570_LIN_SCIINTVECT1_INVECT1(val) BSP_FLD32(val,0, 3)
#define tms570_LIN_SCIINTVECT1_INVECT1_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_LIN_SCIINTVECT1_INVECT1_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*--------------------tms570_LIN_SCIFORMAT--------------------*/
/* field: CHAR - Character length control bits. These bits set the SCI character length from 1 to 8 bits. */
#define tms570_LIN_SCIFORMAT_CHAR(val) BSP_FLD32(val,0, 2)
#define tms570_LIN_SCIFORMAT_CHAR_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_LIN_SCIFORMAT_CHAR_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-----------------------tms570_LIN_BRS-----------------------*/
/* field: BAUD - SCI 24-bit baud selection. */
#define tms570_LIN_BRS_BAUD(val) BSP_FLD32(val,0, 23)
#define tms570_LIN_BRS_BAUD_GET(reg) BSP_FLD32GET(reg,0, 23)
#define tms570_LIN_BRS_BAUD_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*----------------------tms570_LIN_SCIED----------------------*/
/* field: ED - Emulator data. Reading SCIED[7:0] does not clear the RXRDY flag, unlike reading SCIRD. */
#define tms570_LIN_SCIED_ED(val) BSP_FLD32(val,0, 7)
#define tms570_LIN_SCIED_ED_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_LIN_SCIED_ED_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------tms570_LIN_SCIRD----------------------*/
/* field: RD - Receiver data. */
#define tms570_LIN_SCIRD_RD(val) BSP_FLD32(val,0, 7)
#define tms570_LIN_SCIRD_RD_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_LIN_SCIRD_RD_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------tms570_LIN_SCITD----------------------*/
/* field: TD - Transmit data. Data to be transmitted is written to the SCITD register. */
#define tms570_LIN_SCITD_TD(val) BSP_FLD32(val,0, 7)
#define tms570_LIN_SCITD_TD_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_LIN_SCITD_TD_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------tms570_LIN_SCIPIO0---------------------*/
/* field: TX_FUNC - Transfer function. This bit defines the function of pin SCITX. */
#define tms570_LIN_SCIPIO0_TX_FUNC BSP_FLD32(2)

/* field: RX_FUNC - Receive function.This bit defines the function of pin SCIRX. */
#define tms570_LIN_SCIPIO0_RX_FUNC BSP_FLD32(1)


/*---------------------tms570_LIN_SCIPIO1---------------------*/
/* field: TX_DIR - Transmit pin direction. */
#define tms570_LIN_SCIPIO1_TX_DIR BSP_FLD32(2)

/* field: RX_DIR - Receive pin direction. */
#define tms570_LIN_SCIPIO1_RX_DIR BSP_FLD32(1)


/*---------------------tms570_LIN_SCIPIO2---------------------*/
/* field: TX_IN - Transmit pin in. This bit contains the current value on the SCITX pin. */
#define tms570_LIN_SCIPIO2_TX_IN BSP_FLD32(2)

/* field: RX_IN - Receive pin in. This bit contains the current value on the SCIRX pin. */
#define tms570_LIN_SCIPIO2_RX_IN BSP_FLD32(1)


/*---------------------tms570_LIN_SCIPIO3---------------------*/
/* field: TX_OUT - Transmit pin out. */
#define tms570_LIN_SCIPIO3_TX_OUT BSP_FLD32(2)

/* field: RX_OUT - Receive pin out. */
#define tms570_LIN_SCIPIO3_RX_OUT BSP_FLD32(1)


/*---------------------tms570_LIN_SCIPIO4---------------------*/
/* field: TX_SET - Transmit pin set. */
#define tms570_LIN_SCIPIO4_TX_SET BSP_FLD32(2)

/* field: RX_SET - Receive pin set. */
#define tms570_LIN_SCIPIO4_RX_SET BSP_FLD32(1)


/*---------------------tms570_LIN_SCIPIO5---------------------*/
/* field: TX_CLR - Transmit pin clear. */
#define tms570_LIN_SCIPIO5_TX_CLR BSP_FLD32(2)

/* field: RX_CLR - Receive pin clear. */
#define tms570_LIN_SCIPIO5_RX_CLR BSP_FLD32(1)


/*---------------------tms570_LIN_SCIPIO6---------------------*/
/* field: TX_PDR - Transmit pin open drain enable. */
#define tms570_LIN_SCIPIO6_TX_PDR BSP_FLD32(2)

/* field: RX_PDR - Receive pin open drain enable. */
#define tms570_LIN_SCIPIO6_RX_PDR BSP_FLD32(1)


/*---------------------tms570_LIN_SCIPIO7---------------------*/
/* field: TX_PD - Transmit pin pull control disable. This bit disables pull control capability on the input pin SCITX. */
#define tms570_LIN_SCIPIO7_TX_PD BSP_FLD32(2)

/* field: RX_PD - Receive pin pull control disable. This bit disables pull control capability on the input pin SCIRX. */
#define tms570_LIN_SCIPIO7_RX_PD BSP_FLD32(1)


/*---------------------tms570_LIN_SCIPIO8---------------------*/
/* field: TX_PSL - TX pin pull select. This bit selects pull type in the input pin SCITX. */
#define tms570_LIN_SCIPIO8_TX_PSL BSP_FLD32(2)

/* field: RX_PSL - RX pin pull select. This bit selects pull type in the input pin SCIRX. */
#define tms570_LIN_SCIPIO8_RX_PSL BSP_FLD32(1)


/*-------------------tms570_LIN_LINCOMPARE-------------------*/
/* field: SDEL - 2-bit synch delimiter compare. These bits are effective in LIN mode only. */
#define tms570_LIN_LINCOMPARE_SDEL(val) BSP_FLD32(val,8, 9)
#define tms570_LIN_LINCOMPARE_SDEL_GET(reg) BSP_FLD32GET(reg,8, 9)
#define tms570_LIN_LINCOMPARE_SDEL_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: SBREAK - Synch break extend. These bits are effective in LIN mode only. */
#define tms570_LIN_LINCOMPARE_SBREAK(val) BSP_FLD32(val,0, 2)
#define tms570_LIN_LINCOMPARE_SBREAK_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_LIN_LINCOMPARE_SBREAK_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*---------------------tms570_LIN_LINRD0---------------------*/
/* field: RD0 - Receive buffer 0. Byte 0 of the response data byte. */
#define tms570_LIN_LINRD0_RD0(val) BSP_FLD32(val,24, 31)
#define tms570_LIN_LINRD0_RD0_GET(reg) BSP_FLD32GET(reg,24, 31)
#define tms570_LIN_LINRD0_RD0_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: RD1 - Receive buffer 1. Byte 1 of the response data byte. */
#define tms570_LIN_LINRD0_RD1(val) BSP_FLD32(val,16, 23)
#define tms570_LIN_LINRD0_RD1_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_LIN_LINRD0_RD1_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: RD2 - Receive buffer 2. Byte 2 of the response data byte. */
#define tms570_LIN_LINRD0_RD2(val) BSP_FLD32(val,8, 15)
#define tms570_LIN_LINRD0_RD2_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_LIN_LINRD0_RD2_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: RD3 - Receive buffer 3. Byte 3 of the response data byte. */
#define tms570_LIN_LINRD0_RD3(val) BSP_FLD32(val,0, 7)
#define tms570_LIN_LINRD0_RD3_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_LIN_LINRD0_RD3_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------tms570_LIN_LINRD1---------------------*/
/* field: RD4 - Receive buffer 4. Byte 4 of the response data byte. */
#define tms570_LIN_LINRD1_RD4(val) BSP_FLD32(val,24, 31)
#define tms570_LIN_LINRD1_RD4_GET(reg) BSP_FLD32GET(reg,24, 31)
#define tms570_LIN_LINRD1_RD4_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: RD5 - Receive buffer 5. Byte 5 of the response data byte. */
#define tms570_LIN_LINRD1_RD5(val) BSP_FLD32(val,16, 23)
#define tms570_LIN_LINRD1_RD5_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_LIN_LINRD1_RD5_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: RD6 - Receive buffer 6. Byte 6 of the response data byte. */
#define tms570_LIN_LINRD1_RD6(val) BSP_FLD32(val,8, 15)
#define tms570_LIN_LINRD1_RD6_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_LIN_LINRD1_RD6_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: RD7 - Receive buffer 7. Byte 7 of the response data byte. */
#define tms570_LIN_LINRD1_RD7(val) BSP_FLD32(val,0, 7)
#define tms570_LIN_LINRD1_RD7_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_LIN_LINRD1_RD7_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------tms570_LIN_LINMASK---------------------*/
/* field: RX_ID_MASK - Receive ID mask. These bits are effective in LIN mode only. */
#define tms570_LIN_LINMASK_RX_ID_MASK(val) BSP_FLD32(val,16, 23)
#define tms570_LIN_LINMASK_RX_ID_MASK_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_LIN_LINMASK_RX_ID_MASK_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: TX_ID_MASK - Transmit ID mask. These bits are effective in LIN mode only. */
#define tms570_LIN_LINMASK_TX_ID_MASK(val) BSP_FLD32(val,0, 7)
#define tms570_LIN_LINMASK_TX_ID_MASK_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_LIN_LINMASK_TX_ID_MASK_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------tms570_LIN_LINID----------------------*/
/* field: RECEIVED_ID - Received identification. These bits are effective in LIN mode only. */
#define tms570_LIN_LINID_RECEIVED_ID(val) BSP_FLD32(val,16, 23)
#define tms570_LIN_LINID_RECEIVED_ID_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_LIN_LINID_RECEIVED_ID_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: ID-SLAVETASK_BYTE - ID-SlaveTask Byte. These bits are effective in LIN mode only. */
#define tms570_LIN_LINID_ID-SLAVETASK_BYTE(val) BSP_FLD32(val,8, 15)
#define tms570_LIN_LINID_ID-SLAVETASK_BYTE_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_LIN_LINID_ID-SLAVETASK_BYTE_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: ID_BYTE - ID byte. This field is effective in LIN mode only. This byte is the LIN mode message ID. */
#define tms570_LIN_LINID_ID_BYTE(val) BSP_FLD32(val,0, 7)
#define tms570_LIN_LINID_ID_BYTE_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_LIN_LINID_ID_BYTE_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------tms570_LIN_LINTD0---------------------*/
/* field: TD0 - 8-Bit transmit buffer 0. */
#define tms570_LIN_LINTD0_TD0(val) BSP_FLD32(val,24, 31)
#define tms570_LIN_LINTD0_TD0_GET(reg) BSP_FLD32GET(reg,24, 31)
#define tms570_LIN_LINTD0_TD0_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: TD1 - 8-Bit transmit buffer 1. */
#define tms570_LIN_LINTD0_TD1(val) BSP_FLD32(val,16, 23)
#define tms570_LIN_LINTD0_TD1_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_LIN_LINTD0_TD1_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: TD2 - 8-Bit transmit buffer 2. */
#define tms570_LIN_LINTD0_TD2(val) BSP_FLD32(val,8, 15)
#define tms570_LIN_LINTD0_TD2_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_LIN_LINTD0_TD2_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: TD3 - 8-Bit transmit buffer 3. */
#define tms570_LIN_LINTD0_TD3(val) BSP_FLD32(val,0, 7)
#define tms570_LIN_LINTD0_TD3_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_LIN_LINTD0_TD3_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------tms570_LIN_LINTD1---------------------*/
/* field: TD4 - 8-Bit transmit buffer 4. */
#define tms570_LIN_LINTD1_TD4(val) BSP_FLD32(val,24, 31)
#define tms570_LIN_LINTD1_TD4_GET(reg) BSP_FLD32GET(reg,24, 31)
#define tms570_LIN_LINTD1_TD4_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: TD5 - 8-Bit transmit buffer 5. */
#define tms570_LIN_LINTD1_TD5(val) BSP_FLD32(val,16, 23)
#define tms570_LIN_LINTD1_TD5_GET(reg) BSP_FLD32GET(reg,16, 23)
#define tms570_LIN_LINTD1_TD5_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: TD6 - 8-Bit transmit buffer 6. */
#define tms570_LIN_LINTD1_TD6(val) BSP_FLD32(val,8, 15)
#define tms570_LIN_LINTD1_TD6_GET(reg) BSP_FLD32GET(reg,8, 15)
#define tms570_LIN_LINTD1_TD6_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: TD7 - 8-Bit transmit buffer 7. */
#define tms570_LIN_LINTD1_TD7(val) BSP_FLD32(val,0, 7)
#define tms570_LIN_LINTD1_TD7_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_LIN_LINTD1_TD7_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------tms570_LIN_MBRS----------------------*/
/* field: MBR - Maximum baud rate prescaler. This bit is effective in LIN mode only. */
#define tms570_LIN_MBRS_MBR(val) BSP_FLD32(val,0, 12)
#define tms570_LIN_MBRS_MBR_GET(reg) BSP_FLD32GET(reg,0, 12)
#define tms570_LIN_MBRS_MBR_SET(reg,val) BSP_FLD32SET(reg, val,0, 12)


/*--------------------tms570_LIN_IODFTCTRL--------------------*/
/* field: FEN - Frame error enable. This bit is used to create a frame error. */
#define tms570_LIN_IODFTCTRL_FEN BSP_FLD32(26)

/* field: PEN - Parity error enable. This bit is used to create a parity error. */
#define tms570_LIN_IODFTCTRL_PEN BSP_FLD32(25)

/* field: BRKD_TENA - Break detect error enable. This bit is used to create a BRKDT error. */
#define tms570_LIN_IODFTCTRL_BRKD_TENA BSP_FLD32(24)

/* field: PIN_SAMPLE_MASK - Pin sample mask. */
#define tms570_LIN_IODFTCTRL_PIN_SAMPLE_MASK(val) BSP_FLD32(val,19, 20)
#define tms570_LIN_IODFTCTRL_PIN_SAMPLE_MASK_GET(reg) BSP_FLD32GET(reg,19, 20)
#define tms570_LIN_IODFTCTRL_PIN_SAMPLE_MASK_SET(reg,val) BSP_FLD32SET(reg, val,19, 20)

/* field: TX_SHIFT - Transmit shift. */
#define tms570_LIN_IODFTCTRL_TX_SHIFT(val) BSP_FLD32(val,16, 18)
#define tms570_LIN_IODFTCTRL_TX_SHIFT_GET(reg) BSP_FLD32GET(reg,16, 18)
#define tms570_LIN_IODFTCTRL_TX_SHIFT_SET(reg,val) BSP_FLD32SET(reg, val,16, 18)

/* field: IODFTENA - IODFT enable key. Write access permitted in Privilege mode only. */
#define tms570_LIN_IODFTCTRL_IODFTENA(val) BSP_FLD32(val,8, 11)
#define tms570_LIN_IODFTCTRL_IODFTENA_GET(reg) BSP_FLD32GET(reg,8, 11)
#define tms570_LIN_IODFTCTRL_IODFTENA_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)

/* field: LPBENA - Module loopback enable. Write access permitted in Privilege mode only. */
#define tms570_LIN_IODFTCTRL_LPBENA BSP_FLD32(1)

/* field: RXPENA - Module analog loopback through receive pin enable. */
#define tms570_LIN_IODFTCTRL_RXPENA BSP_FLD32(0)



#endif /* LIBBSP_ARM_tms570_LIN.H */
