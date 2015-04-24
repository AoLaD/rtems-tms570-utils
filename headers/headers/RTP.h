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
#ifndef LIBBSP_ARM_tms570_RTP.H
#define LIBBSP_ARM_tms570_RTP.H

#include <bsp/utility.h>

typedef struct{
  uint32_t RTPGLBCTRL;        /*RTP Global Control Register*/
  uint32_t RTPTRENA;          /*RTP Trace Enable Register*/
  uint32_t RTPGSR;            /*RTP Global Status Register*/
  uint32_t RTPRAM1REG[2];     /*RTP RAM 1 Trace Region Register*/
  uint32_t RTPRAM2REG[2];     /*RTP RAM 2 Trace Region Register*/
  uint8_t reserved1 [8];
  uint32_t RTPPERREG[2];      /*RTP Peripheral Trace Region Register*/
  uint32_t RTPDDMW;           /*RTP Direct Data Mode Write Register*/
  uint8_t reserved2 [4];
  uint32_t RTPPC0;            /*RTP Pin Control 0 Register*/
  uint32_t RTPPC1;            /*RTP Pin Control 1 Register*/
  uint32_t RTPPC2;            /*RTP Pin Control 2 Register*/
  uint32_t RTPPC3;            /*RTP Pin Control 3 Register*/
  uint32_t RTPPC4;            /*RTP Pin Control 4 Register*/
  uint32_t RTPPC5;            /*RTP Pin Control 5 Register*/
  uint32_t RTPPC6;            /*RTP Pin Control 6 Register*/
  uint32_t RTPPC7;            /*RTP Pin Control 7 Register*/
  uint32_t RTPPC8;            /*RTP Pin Control 8 Register*/
} RTP_struct;

/*-------------------tms570_RTP_RTPGLBCTRL-------------------*/
/* field: TEST - By setting the bit, the FIFO RAM will be mapped into the SYSTEM Peripheral frame starting at */
#define tms570_RTP_RTPGLBCTRL_TEST BSP_FLD32(24)

/* field: PRESCALER - The prescaler divides HCLK down to the desired RTPCLK frequency. */
#define tms570_RTP_RTPGLBCTRL_PRESCALER(val) BSP_FLD32(val,16, 18)
#define tms570_RTP_RTPGLBCTRL_PRESCALER_GET(reg) BSP_FLD32GET(reg,16, 18)
#define tms570_RTP_RTPGLBCTRL_PRESCALER_SET(reg,val) BSP_FLD32SET(reg, val,16, 18)

/* field: DDM_WIDTH - Direct data mode word size width. */
#define tms570_RTP_RTPGLBCTRL_DDM_WIDTH(val) BSP_FLD32(val,12, 13)
#define tms570_RTP_RTPGLBCTRL_DDM_WIDTH_GET(reg) BSP_FLD32GET(reg,12, 13)
#define tms570_RTP_RTPGLBCTRL_DDM_WIDTH_SET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: DDM_RW -  */
#define tms570_RTP_RTPGLBCTRL_DDM_RW BSP_FLD32(11)

/* field: TM_DDM - Trace Mode or Direct Data Mode */
#define tms570_RTP_RTPGLBCTRL_TM_DDM BSP_FLD32(10)

/* field: PW - Port width. This bit field configures the RTP to the desired port width. */
#define tms570_RTP_RTPGLBCTRL_PW(val) BSP_FLD32(val,8, 9)
#define tms570_RTP_RTPGLBCTRL_PW_GET(reg) BSP_FLD32GET(reg,8, 9)
#define tms570_RTP_RTPGLBCTRL_PW_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: RESET - This bit resets the state machine and the registers to their reset value. */
#define tms570_RTP_RTPGLBCTRL_RESET BSP_FLD32(7)

/* field: CONTCLK - Continuous RTPCLK enable. */
#define tms570_RTP_RTPGLBCTRL_CONTCLK BSP_FLD32(6)

/* field: HOVF - Halt on overflow. */
#define tms570_RTP_RTPGLBCTRL_HOVF BSP_FLD32(5)

/* field: INV_RGN - Trace inside or outside of defined trace regions. */
#define tms570_RTP_RTPGLBCTRL_INV_RGN BSP_FLD32(4)

/* field: ON/OFF - ON/Off switch. */
#define tms570_RTP_RTPGLBCTRL_ON/OFF(val) BSP_FLD32(val,0, 3)
#define tms570_RTP_RTPGLBCTRL_ON/OFF_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_RTP_RTPGLBCTRL_ON/OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*--------------------tms570_RTP_RTPTRENA--------------------*/
/* field: ENA4 - Enable tracing for peripherals. */
#define tms570_RTP_RTPTRENA_ENA4 BSP_FLD32(24)

/* field: ENA2 - Enable tracing for RAM block 2. */
#define tms570_RTP_RTPTRENA_ENA2 BSP_FLD32(8)

/* field: ENA1 -  */
#define tms570_RTP_RTPTRENA_ENA1 BSP_FLD32(0)


/*---------------------tms570_RTP_RTPGSR---------------------*/
/* field: EMPTYSER - Serializer empty. This bit determines if there is data left in the serializer. */
#define tms570_RTP_RTPGSR_EMPTYSER BSP_FLD32(12)

/* field: EMPTYPER - Peripheral FIFO empty. This bit determines if there are entries left in the FIFO. */
#define tms570_RTP_RTPGSR_EMPTYPER BSP_FLD32(11)

/* field: EMPTY2 - RAM block 2 FIFO empty. This bit determines if there are entries left in the FIFO. */
#define tms570_RTP_RTPGSR_EMPTY2 BSP_FLD32(9)

/* field: EMPTY1 - RAM block 1 FIFO empty. This bit determines if there are entries left in the FIFO. */
#define tms570_RTP_RTPGSR_EMPTY1 BSP_FLD32(8)

/* field: OVFPER - Overflow peripheral FIFO. */
#define tms570_RTP_RTPGSR_OVFPER BSP_FLD32(3)

/* field: OVF2 - Overflow RAM block 2 FIFO. */
#define tms570_RTP_RTPGSR_OVF2 BSP_FLD32(1)

/* field: OVF1 - Overflow RAM block 1 FIFO. */
#define tms570_RTP_RTPGSR_OVF1 BSP_FLD32(0)


/*-------------------tms570_RTP_RTPRAM1REG-------------------*/
/* field: CPU_DMA - CPU and/or other master access. */
#define tms570_RTP_RTPRAM1REG_CPU_DMA(val) BSP_FLD32(val,29, 30)
#define tms570_RTP_RTPRAM1REG_CPU_DMA_GET(reg) BSP_FLD32GET(reg,29, 30)
#define tms570_RTP_RTPRAM1REG_CPU_DMA_SET(reg,val) BSP_FLD32SET(reg, val,29, 30)

/* field: RW - Read/Write. */
#define tms570_RTP_RTPRAM1REG_RW BSP_FLD32(28)

/* field: BLOCKSIZE - These bits define the length of the trace region. */
#define tms570_RTP_RTPRAM1REG_BLOCKSIZE(val) BSP_FLD32(val,24, 27)
#define tms570_RTP_RTPRAM1REG_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,24, 27)
#define tms570_RTP_RTPRAM1REG_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: STARTADDR - These bits define the starting address of the address region that should be traced. */
#define tms570_RTP_RTPRAM1REG_STARTADDR(val) BSP_FLD32(val,0, 17)
#define tms570_RTP_RTPRAM1REG_STARTADDR_GET(reg) BSP_FLD32GET(reg,0, 17)
#define tms570_RTP_RTPRAM1REG_STARTADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 17)


/*-------------------tms570_RTP_RTPRAM2REG-------------------*/
/* field: CPU_DMA - CPU and/or other master access. */
#define tms570_RTP_RTPRAM2REG_CPU_DMA(val) BSP_FLD32(val,29, 30)
#define tms570_RTP_RTPRAM2REG_CPU_DMA_GET(reg) BSP_FLD32GET(reg,29, 30)
#define tms570_RTP_RTPRAM2REG_CPU_DMA_SET(reg,val) BSP_FLD32SET(reg, val,29, 30)

/* field: RW - Read/Write. */
#define tms570_RTP_RTPRAM2REG_RW BSP_FLD32(28)

/* field: BLOCKSIZE - These bits define the length of the trace region. */
#define tms570_RTP_RTPRAM2REG_BLOCKSIZE(val) BSP_FLD32(val,24, 27)
#define tms570_RTP_RTPRAM2REG_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,24, 27)
#define tms570_RTP_RTPRAM2REG_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: STARTADDR - These bits define the starting address of the address region that should be traced. */
#define tms570_RTP_RTPRAM2REG_STARTADDR(val) BSP_FLD32(val,0, 23)
#define tms570_RTP_RTPRAM2REG_STARTADDR_GET(reg) BSP_FLD32GET(reg,0, 23)
#define tms570_RTP_RTPRAM2REG_STARTADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*--------------------tms570_RTP_RTPPERREG--------------------*/
/* field: CPU_DMA - CPU and/or other master access. */
#define tms570_RTP_RTPPERREG_CPU_DMA(val) BSP_FLD32(val,29, 30)
#define tms570_RTP_RTPPERREG_CPU_DMA_GET(reg) BSP_FLD32GET(reg,29, 30)
#define tms570_RTP_RTPPERREG_CPU_DMA_SET(reg,val) BSP_FLD32SET(reg, val,29, 30)

/* field: RW - Read/Write. */
#define tms570_RTP_RTPPERREG_RW BSP_FLD32(28)

/* field: BLOCKSIZE - These bits define the length of the trace region. */
#define tms570_RTP_RTPPERREG_BLOCKSIZE(val) BSP_FLD32(val,24, 27)
#define tms570_RTP_RTPPERREG_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,24, 27)
#define tms570_RTP_RTPPERREG_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: STARTADDR - These bits define the starting address of the address region that should be traced. */
#define tms570_RTP_RTPPERREG_STARTADDR(val) BSP_FLD32(val,0, 23)
#define tms570_RTP_RTPPERREG_STARTADDR_GET(reg) BSP_FLD32GET(reg,0, 23)
#define tms570_RTP_RTPPERREG_STARTADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*---------------------tms570_RTP_RTPDDMW---------------------*/
/* field: DATA - This register must be written to in a Direct Data Mode write operation to store the data into */
#define tms570_RTP_RTPDDMW_DATA(val) BSP_FLD32(val,0, 31)
#define tms570_RTP_RTPDDMW_DATA_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_RTP_RTPDDMW_DATA_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_RTP_RTPPC0---------------------*/
/* field: ENAFUNC - Functional mode of RTPENA pin. */
#define tms570_RTP_RTPPC0_ENAFUNC BSP_FLD32(18)

/* field: CLKFUNC - Functional mode of RTPCLK pin. */
#define tms570_RTP_RTPPC0_CLKFUNC BSP_FLD32(17)

/* field: SYNCFUNC - Functional mode of RTPSYNC pin. */
#define tms570_RTP_RTPPC0_SYNCFUNC BSP_FLD32(16)

/* field: DATAFUNC - Functional mode of RTPDATA[15:0] pins. */
#define tms570_RTP_RTPPC0_DATAFUNC(val) BSP_FLD32(val,0, 15)
#define tms570_RTP_RTPPC0_DATAFUNC_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_RTP_RTPPC0_DATAFUNC_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_RTP_RTPPC1---------------------*/
/* field: ENADIR - Direction of RTPENA pin. */
#define tms570_RTP_RTPPC1_ENADIR BSP_FLD32(18)

/* field: CLKDIR - Direction of RTPCLK pin. */
#define tms570_RTP_RTPPC1_CLKDIR BSP_FLD32(17)

/* field: SYNCDIR - Direction of RTPSYNC pin. */
#define tms570_RTP_RTPPC1_SYNCDIR BSP_FLD32(16)

/* field: DATADIR - Direction of RTPDATA[15:0] pins. */
#define tms570_RTP_RTPPC1_DATADIR(val) BSP_FLD32(val,0, 15)
#define tms570_RTP_RTPPC1_DATADIR_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_RTP_RTPPC1_DATADIR_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_RTP_RTPPC2---------------------*/
/* field: ENAIN - RTPENA input. This bit reflects the state of the pin in all modes. Writes to this bit have no effect. */
#define tms570_RTP_RTPPC2_ENAIN BSP_FLD32(18)

/* field: CLKIN - RTPCLK input. This bit reflects the state of the pin in all modes. Writes to this bit have no effect. */
#define tms570_RTP_RTPPC2_CLKIN BSP_FLD32(17)

/* field: SYNCIN - RTPSYNC input. This bit reflects the state of the pin in all modes. Writes to this bit have no effect. */
#define tms570_RTP_RTPPC2_SYNCIN BSP_FLD32(16)

/* field: DATAIN - RTPDATA[15:0] input. These bits reflect the state of the pins in all modes. */
#define tms570_RTP_RTPPC2_DATAIN(val) BSP_FLD32(val,0, 15)
#define tms570_RTP_RTPPC2_DATAIN_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_RTP_RTPPC2_DATAIN_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_RTP_RTPPC3---------------------*/
/* field: ENAOUT - RTPENA output. This pin sets the output state of the RTPENA pin. */
#define tms570_RTP_RTPPC3_ENAOUT BSP_FLD32(18)

/* field: CLKOUT - RTPCLK output. This pin sets the output state of the RTPCLK pin. */
#define tms570_RTP_RTPPC3_CLKOUT BSP_FLD32(17)

/* field: SYNCOUT - RTPSYNC output. This pin sets the output state of the RTPSYNC pin. */
#define tms570_RTP_RTPPC3_SYNCOUT BSP_FLD32(16)

/* field: DATAOUT - RTPDATA[15:0] output. These bits set the output state of the RTPDATA[15:0] pins. */
#define tms570_RTP_RTPPC3_DATAOUT(val) BSP_FLD32(val,0, 15)
#define tms570_RTP_RTPPC3_DATAOUT_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_RTP_RTPPC3_DATAOUT_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_RTP_RTPPC4---------------------*/
/* field: ENASET - Sets the output state of RTPENA pin to logic high. */
#define tms570_RTP_RTPPC4_ENASET BSP_FLD32(18)

/* field: CLKSET - Sets the output state of RTPCLK pin to logic high. */
#define tms570_RTP_RTPPC4_CLKSET BSP_FLD32(17)

/* field: SYNCSET - Sets output state of RTPSYNC pin logic high. */
#define tms570_RTP_RTPPC4_SYNCSET BSP_FLD32(16)

/* field: DATASET - Sets output state of RTPDATA[15:0] pins to logic high. */
#define tms570_RTP_RTPPC4_DATASET(val) BSP_FLD32(val,0, 15)
#define tms570_RTP_RTPPC4_DATASET_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_RTP_RTPPC4_DATASET_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_RTP_RTPPC5---------------------*/
/* field: ENACLR - Sets the output state of RTPENA pin to logic high. */
#define tms570_RTP_RTPPC5_ENACLR BSP_FLD32(18)

/* field: CLKCLR - Sets output state of RTPCLK pin to logic low. */
#define tms570_RTP_RTPPC5_CLKCLR BSP_FLD32(17)

/* field: SYNCCLR - Sets output state of RTPSYNC pin logic low. */
#define tms570_RTP_RTPPC5_SYNCCLR BSP_FLD32(16)

/* field: DATACLR - Sets output state of RTPDATA[15:0] pins to logic low. */
#define tms570_RTP_RTPPC5_DATACLR(val) BSP_FLD32(val,0, 15)
#define tms570_RTP_RTPPC5_DATACLR_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_RTP_RTPPC5_DATACLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_RTP_RTPPC6---------------------*/
/* field: ENAPDR - RTPENA Open drain enable. */
#define tms570_RTP_RTPPC6_ENAPDR BSP_FLD32(18)

/* field: CLKPDR - CLKPDR RTPCLK Open drain enable. */
#define tms570_RTP_RTPPC6_CLKPDR BSP_FLD32(17)

/* field: SYNCPDR - RTPSYNC Open drain enable. */
#define tms570_RTP_RTPPC6_SYNCPDR BSP_FLD32(16)

/* field: DATAPDR - RTPDATA[15:0] Open drain enable. */
#define tms570_RTP_RTPPC6_DATAPDR(val) BSP_FLD32(val,0, 15)
#define tms570_RTP_RTPPC6_DATAPDR_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_RTP_RTPPC6_DATAPDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_RTP_RTPPC7---------------------*/
/* field: ENADIS - RTPENA Pull disable. */
#define tms570_RTP_RTPPC7_ENADIS BSP_FLD32(18)

/* field: CLKDIS - RTPCLK Pull disable. */
#define tms570_RTP_RTPPC7_CLKDIS BSP_FLD32(17)

/* field: SYNCDIS - RTPSYNC Pull disable. */
#define tms570_RTP_RTPPC7_SYNCDIS BSP_FLD32(16)

/* field: DATADIS - RTPDATA[15:0] Pull disable. */
#define tms570_RTP_RTPPC7_DATADIS(val) BSP_FLD32(val,0, 15)
#define tms570_RTP_RTPPC7_DATADIS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_RTP_RTPPC7_DATADIS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_RTP_RTPPC8---------------------*/
/* field: ENAPSEL - RTPENA Pull select. This bit configures pullup or pulldown functionality if RTPPC7[18]=0. */
#define tms570_RTP_RTPPC8_ENAPSEL BSP_FLD32(18)

/* field: CLKPSEL - RTPCLK Pull select. This bit configures pullup or pulldown functionality if RTPPC7[17]=0. */
#define tms570_RTP_RTPPC8_CLKPSEL BSP_FLD32(17)

/* field: SYNCPSEL - RTPSYNC Pull select. This bit configures pullup or pulldown functionality if RTPPC7[16]=0. */
#define tms570_RTP_RTPPC8_SYNCPSEL BSP_FLD32(16)

/* field: DATAPSEL - RTPDATA[15:0] Pull select. */
#define tms570_RTP_RTPPC8_DATAPSEL(val) BSP_FLD32(val,0, 15)
#define tms570_RTP_RTPPC8_DATAPSEL_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_RTP_RTPPC8_DATAPSEL_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)



#endif /* LIBBSP_ARM_tms570_RTP.H */
