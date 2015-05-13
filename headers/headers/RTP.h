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
#ifndef LIBBSP_ARM_tms570_RTP
#define LIBBSP_ARM_tms570_RTP

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
} tms570_rtp_t;

/*---------------------TMS570_RTPGLBCTRL---------------------*/
/* field: TEST - By setting the bit, the FIFO RAM will be mapped into the SYSTEM Peripheral frame starting at */
#define TMS570_RTPGLBCTRL_TEST BSP_FLD32(24)

/* field: PRESCALER - The prescaler divides HCLK down to the desired RTPCLK frequency. */
#define TMS570_RTPGLBCTRL_PRESCALER(val) BSP_FLD32(val,16, 18)
#define TMS570_RTPGLBCTRL_PRESCALER_GET(reg) BSP_FLD32GET(reg,16, 18)
#define TMS570_RTPGLBCTRL_PRESCALER_SET(reg,val) BSP_FLD32SET(reg, val,16, 18)

/* field: DDM_WIDTH - Direct data mode word size width. */
#define TMS570_RTPGLBCTRL_DDM_WIDTH(val) BSP_FLD32(val,12, 13)
#define TMS570_RTPGLBCTRL_DDM_WIDTH_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_RTPGLBCTRL_DDM_WIDTH_SET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: DDM_RW -  */
#define TMS570_RTPGLBCTRL_DDM_RW BSP_FLD32(11)

/* field: TM_DDM - Trace Mode or Direct Data Mode */
#define TMS570_RTPGLBCTRL_TM_DDM BSP_FLD32(10)

/* field: PW - Port width. This bit field configures the RTP to the desired port width. */
#define TMS570_RTPGLBCTRL_PW(val) BSP_FLD32(val,8, 9)
#define TMS570_RTPGLBCTRL_PW_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_RTPGLBCTRL_PW_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: RESET - This bit resets the state machine and the registers to their reset value. */
#define TMS570_RTPGLBCTRL_RESET BSP_FLD32(7)

/* field: CONTCLK - Continuous RTPCLK enable. */
#define TMS570_RTPGLBCTRL_CONTCLK BSP_FLD32(6)

/* field: HOVF - Halt on overflow. */
#define TMS570_RTPGLBCTRL_HOVF BSP_FLD32(5)

/* field: INV_RGN - Trace inside or outside of defined trace regions. */
#define TMS570_RTPGLBCTRL_INV_RGN BSP_FLD32(4)

/* field: ON_OFF - ON/Off switch. */
#define TMS570_RTPGLBCTRL_ON_OFF(val) BSP_FLD32(val,0, 3)
#define TMS570_RTPGLBCTRL_ON_OFF_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_RTPGLBCTRL_ON_OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*----------------------TMS570_RTPTRENA----------------------*/
/* field: ENA4 - Enable tracing for peripherals. */
#define TMS570_RTPTRENA_ENA4 BSP_FLD32(24)

/* field: ENA2 - Enable tracing for RAM block 2. */
#define TMS570_RTPTRENA_ENA2 BSP_FLD32(8)

/* field: ENA1 -  */
#define TMS570_RTPTRENA_ENA1 BSP_FLD32(0)


/*-----------------------TMS570_RTPGSR-----------------------*/
/* field: EMPTYSER - Serializer empty. This bit determines if there is data left in the serializer. */
#define TMS570_RTPGSR_EMPTYSER BSP_FLD32(12)

/* field: EMPTYPER - Peripheral FIFO empty. This bit determines if there are entries left in the FIFO. */
#define TMS570_RTPGSR_EMPTYPER BSP_FLD32(11)

/* field: EMPTY2 - RAM block 2 FIFO empty. This bit determines if there are entries left in the FIFO. */
#define TMS570_RTPGSR_EMPTY2 BSP_FLD32(9)

/* field: EMPTY1 - RAM block 1 FIFO empty. This bit determines if there are entries left in the FIFO. */
#define TMS570_RTPGSR_EMPTY1 BSP_FLD32(8)

/* field: OVFPER - Overflow peripheral FIFO. */
#define TMS570_RTPGSR_OVFPER BSP_FLD32(3)

/* field: OVF2 - Overflow RAM block 2 FIFO. */
#define TMS570_RTPGSR_OVF2 BSP_FLD32(1)

/* field: OVF1 - Overflow RAM block 1 FIFO. */
#define TMS570_RTPGSR_OVF1 BSP_FLD32(0)


/*---------------------TMS570_RTPRAM1REG---------------------*/
/* field: CPU_DMA - CPU and/or other master access. */
#define TMS570_RTPRAM1REG_CPU_DMA(val) BSP_FLD32(val,29, 30)
#define TMS570_RTPRAM1REG_CPU_DMA_GET(reg) BSP_FLD32GET(reg,29, 30)
#define TMS570_RTPRAM1REG_CPU_DMA_SET(reg,val) BSP_FLD32SET(reg, val,29, 30)

/* field: RW - Read/Write. */
#define TMS570_RTPRAM1REG_RW BSP_FLD32(28)

/* field: BLOCKSIZE - These bits define the length of the trace region. */
#define TMS570_RTPRAM1REG_BLOCKSIZE(val) BSP_FLD32(val,24, 27)
#define TMS570_RTPRAM1REG_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_RTPRAM1REG_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: STARTADDR - These bits define the starting address of the address region that should be traced. */
#define TMS570_RTPRAM1REG_STARTADDR(val) BSP_FLD32(val,0, 17)
#define TMS570_RTPRAM1REG_STARTADDR_GET(reg) BSP_FLD32GET(reg,0, 17)
#define TMS570_RTPRAM1REG_STARTADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 17)


/*---------------------TMS570_RTPRAM2REG---------------------*/
/* field: CPU_DMA - CPU and/or other master access. */
#define TMS570_RTPRAM2REG_CPU_DMA(val) BSP_FLD32(val,29, 30)
#define TMS570_RTPRAM2REG_CPU_DMA_GET(reg) BSP_FLD32GET(reg,29, 30)
#define TMS570_RTPRAM2REG_CPU_DMA_SET(reg,val) BSP_FLD32SET(reg, val,29, 30)

/* field: RW - Read/Write. */
#define TMS570_RTPRAM2REG_RW BSP_FLD32(28)

/* field: BLOCKSIZE - These bits define the length of the trace region. */
#define TMS570_RTPRAM2REG_BLOCKSIZE(val) BSP_FLD32(val,24, 27)
#define TMS570_RTPRAM2REG_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_RTPRAM2REG_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: STARTADDR - These bits define the starting address of the address region that should be traced. */
#define TMS570_RTPRAM2REG_STARTADDR(val) BSP_FLD32(val,0, 23)
#define TMS570_RTPRAM2REG_STARTADDR_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_RTPRAM2REG_STARTADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*----------------------TMS570_RTPPERREG----------------------*/
/* field: CPU_DMA - CPU and/or other master access. */
#define TMS570_RTPPERREG_CPU_DMA(val) BSP_FLD32(val,29, 30)
#define TMS570_RTPPERREG_CPU_DMA_GET(reg) BSP_FLD32GET(reg,29, 30)
#define TMS570_RTPPERREG_CPU_DMA_SET(reg,val) BSP_FLD32SET(reg, val,29, 30)

/* field: RW - Read/Write. */
#define TMS570_RTPPERREG_RW BSP_FLD32(28)

/* field: BLOCKSIZE - These bits define the length of the trace region. */
#define TMS570_RTPPERREG_BLOCKSIZE(val) BSP_FLD32(val,24, 27)
#define TMS570_RTPPERREG_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_RTPPERREG_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: STARTADDR - These bits define the starting address of the address region that should be traced. */
#define TMS570_RTPPERREG_STARTADDR(val) BSP_FLD32(val,0, 23)
#define TMS570_RTPPERREG_STARTADDR_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_RTPPERREG_STARTADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*-----------------------TMS570_RTPDDMW-----------------------*/
/* field: DATA - This register must be written to in a Direct Data Mode write operation to store the data into */
#define TMS570_RTPDDMW_DATA(val) BSP_FLD32(val,0, 31)
#define TMS570_RTPDDMW_DATA_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTPDDMW_DATA_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_RTPPC0-----------------------*/
/* field: ENAFUNC - Functional mode of RTPENA pin. */
#define TMS570_RTPPC0_ENAFUNC BSP_FLD32(18)

/* field: CLKFUNC - Functional mode of RTPCLK pin. */
#define TMS570_RTPPC0_CLKFUNC BSP_FLD32(17)

/* field: SYNCFUNC - Functional mode of RTPSYNC pin. */
#define TMS570_RTPPC0_SYNCFUNC BSP_FLD32(16)

/* field: DATAFUNC - Functional mode of RTPDATA[15:0] pins. */
#define TMS570_RTPPC0_DATAFUNC(val) BSP_FLD32(val,0, 15)
#define TMS570_RTPPC0_DATAFUNC_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_RTPPC0_DATAFUNC_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_RTPPC1-----------------------*/
/* field: ENADIR - Direction of RTPENA pin. */
#define TMS570_RTPPC1_ENADIR BSP_FLD32(18)

/* field: CLKDIR - Direction of RTPCLK pin. */
#define TMS570_RTPPC1_CLKDIR BSP_FLD32(17)

/* field: SYNCDIR - Direction of RTPSYNC pin. */
#define TMS570_RTPPC1_SYNCDIR BSP_FLD32(16)

/* field: DATADIR - Direction of RTPDATA[15:0] pins. */
#define TMS570_RTPPC1_DATADIR(val) BSP_FLD32(val,0, 15)
#define TMS570_RTPPC1_DATADIR_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_RTPPC1_DATADIR_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_RTPPC2-----------------------*/
/* field: ENAIN - RTPENA input. This bit reflects the state of the pin in all modes. Writes to this bit have no effect. */
#define TMS570_RTPPC2_ENAIN BSP_FLD32(18)

/* field: CLKIN - RTPCLK input. This bit reflects the state of the pin in all modes. Writes to this bit have no effect. */
#define TMS570_RTPPC2_CLKIN BSP_FLD32(17)

/* field: SYNCIN - RTPSYNC input. This bit reflects the state of the pin in all modes. Writes to this bit have no effect. */
#define TMS570_RTPPC2_SYNCIN BSP_FLD32(16)

/* field: DATAIN - RTPDATA[15:0] input. These bits reflect the state of the pins in all modes. */
#define TMS570_RTPPC2_DATAIN(val) BSP_FLD32(val,0, 15)
#define TMS570_RTPPC2_DATAIN_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_RTPPC2_DATAIN_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_RTPPC3-----------------------*/
/* field: ENAOUT - RTPENA output. This pin sets the output state of the RTPENA pin. */
#define TMS570_RTPPC3_ENAOUT BSP_FLD32(18)

/* field: CLKOUT - RTPCLK output. This pin sets the output state of the RTPCLK pin. */
#define TMS570_RTPPC3_CLKOUT BSP_FLD32(17)

/* field: SYNCOUT - RTPSYNC output. This pin sets the output state of the RTPSYNC pin. */
#define TMS570_RTPPC3_SYNCOUT BSP_FLD32(16)

/* field: DATAOUT - RTPDATA[15:0] output. These bits set the output state of the RTPDATA[15:0] pins. */
#define TMS570_RTPPC3_DATAOUT(val) BSP_FLD32(val,0, 15)
#define TMS570_RTPPC3_DATAOUT_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_RTPPC3_DATAOUT_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_RTPPC4-----------------------*/
/* field: ENASET - Sets the output state of RTPENA pin to logic high. */
#define TMS570_RTPPC4_ENASET BSP_FLD32(18)

/* field: CLKSET - Sets the output state of RTPCLK pin to logic high. */
#define TMS570_RTPPC4_CLKSET BSP_FLD32(17)

/* field: SYNCSET - Sets output state of RTPSYNC pin logic high. */
#define TMS570_RTPPC4_SYNCSET BSP_FLD32(16)

/* field: DATASET - Sets output state of RTPDATA[15:0] pins to logic high. */
#define TMS570_RTPPC4_DATASET(val) BSP_FLD32(val,0, 15)
#define TMS570_RTPPC4_DATASET_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_RTPPC4_DATASET_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_RTPPC5-----------------------*/
/* field: ENACLR - Sets the output state of RTPENA pin to logic high. */
#define TMS570_RTPPC5_ENACLR BSP_FLD32(18)

/* field: CLKCLR - Sets output state of RTPCLK pin to logic low. */
#define TMS570_RTPPC5_CLKCLR BSP_FLD32(17)

/* field: SYNCCLR - Sets output state of RTPSYNC pin logic low. */
#define TMS570_RTPPC5_SYNCCLR BSP_FLD32(16)

/* field: DATACLR - Sets output state of RTPDATA[15:0] pins to logic low. */
#define TMS570_RTPPC5_DATACLR(val) BSP_FLD32(val,0, 15)
#define TMS570_RTPPC5_DATACLR_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_RTPPC5_DATACLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_RTPPC6-----------------------*/
/* field: ENAPDR - RTPENA Open drain enable. */
#define TMS570_RTPPC6_ENAPDR BSP_FLD32(18)

/* field: CLKPDR - CLKPDR RTPCLK Open drain enable. */
#define TMS570_RTPPC6_CLKPDR BSP_FLD32(17)

/* field: SYNCPDR - RTPSYNC Open drain enable. */
#define TMS570_RTPPC6_SYNCPDR BSP_FLD32(16)

/* field: DATAPDR - RTPDATA[15:0] Open drain enable. */
#define TMS570_RTPPC6_DATAPDR(val) BSP_FLD32(val,0, 15)
#define TMS570_RTPPC6_DATAPDR_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_RTPPC6_DATAPDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_RTPPC7-----------------------*/
/* field: ENADIS - RTPENA Pull disable. */
#define TMS570_RTPPC7_ENADIS BSP_FLD32(18)

/* field: CLKDIS - RTPCLK Pull disable. */
#define TMS570_RTPPC7_CLKDIS BSP_FLD32(17)

/* field: SYNCDIS - RTPSYNC Pull disable. */
#define TMS570_RTPPC7_SYNCDIS BSP_FLD32(16)

/* field: DATADIS - RTPDATA[15:0] Pull disable. */
#define TMS570_RTPPC7_DATADIS(val) BSP_FLD32(val,0, 15)
#define TMS570_RTPPC7_DATADIS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_RTPPC7_DATADIS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_RTPPC8-----------------------*/
/* field: ENAPSEL - RTPENA Pull select. This bit configures pullup or pulldown functionality if RTPPC7[18]=0. */
#define TMS570_RTPPC8_ENAPSEL BSP_FLD32(18)

/* field: CLKPSEL - RTPCLK Pull select. This bit configures pullup or pulldown functionality if RTPPC7[17]=0. */
#define TMS570_RTPPC8_CLKPSEL BSP_FLD32(17)

/* field: SYNCPSEL - RTPSYNC Pull select. This bit configures pullup or pulldown functionality if RTPPC7[16]=0. */
#define TMS570_RTPPC8_SYNCPSEL BSP_FLD32(16)

/* field: DATAPSEL - RTPDATA[15:0] Pull select. */
#define TMS570_RTPPC8_DATAPSEL(val) BSP_FLD32(val,0, 15)
#define TMS570_RTPPC8_DATAPSEL_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_RTPPC8_DATAPSEL_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)



#endif /* LIBBSP_ARM_tms570_RTP */
