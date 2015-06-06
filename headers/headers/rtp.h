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
  uint32_t GLBCTRL;           /*RTP Global Control Register*/
  uint32_t TRENA;             /*RTP Trace Enable Register*/
  uint32_t GSR;               /*RTP Global Status Register*/
  uint32_t RAM1REG1;          /*RTP RAM 1 Trace Region 1 Register*/
  uint32_t RAM1REG2;          /*RTP RAM 1 Trace Region 2 Register*/
  uint32_t RAM2REG1;          /*RTP RAM 2 Trace Region 1 Register*/
  uint32_t RAM2REG2;          /*RTP RAM 2 Trace Region 2 Register*/
  uint8_t reserved1 [8];
  uint32_t PERREG1;           /*RTP Peripheral Trace Region 1 Register*/
  uint32_t PERREG2;           /*RTP Peripheral Trace Region 2 Register*/
  uint32_t DDMW;              /*RTP Direct Data Mode Write Register*/
  uint8_t reserved2 [4];
  uint32_t PC0;               /*RTP Pin Control 0 Register*/
  uint32_t PC1;               /*RTP Pin Control 1 Register*/
  uint32_t PC2;               /*RTP Pin Control 2 Register*/
  uint32_t PC3;               /*RTP Pin Control 3 Register*/
  uint32_t PC4;               /*RTP Pin Control 4 Register*/
  uint32_t PC5;               /*RTP Pin Control 5 Register*/
  uint32_t PC6;               /*RTP Pin Control 6 Register*/
  uint32_t PC7;               /*RTP Pin Control 7 Register*/
  uint32_t PC8;               /*RTP Pin Control 8 Register*/
} tms570_rtp_t;


/*---------------------TMS570_RTPGLBCTRL---------------------*/
/* field: TEST - By setting the bit, the FIFO RAM will be mapped into the SYSTEM Peripheral frame starting at */
#define TMS570_RTP_GLBCTRL_TEST BSP_FLD32(24)

/* field: PRESCALER - The prescaler divides HCLK down to the desired RTPCLK frequency. */
#define TMS570_RTP_GLBCTRL_PRESCALER(val) BSP_FLD32(val,16, 18)
#define TMS570_RTP_GLBCTRL_PRESCALER_GET(reg) BSP_FLD32GET(reg,16, 18)
#define TMS570_RTP_GLBCTRL_PRESCALER_SET(reg,val) BSP_FLD32SET(reg, val,16, 18)

/* field: DDM_WIDTH - Direct data mode word size width. */
#define TMS570_RTP_GLBCTRL_DDM_WIDTH(val) BSP_FLD32(val,12, 13)
#define TMS570_RTP_GLBCTRL_DDM_WIDTH_GET(reg) BSP_FLD32GET(reg,12, 13)
#define TMS570_RTP_GLBCTRL_DDM_WIDTH_SET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: DDM_RW -  */
#define TMS570_RTP_GLBCTRL_DDM_RW BSP_FLD32(11)

/* field: TM_DDM - Trace Mode or Direct Data Mode */
#define TMS570_RTP_GLBCTRL_TM_DDM BSP_FLD32(10)

/* field: PW - Port width. This bit field configures the RTP to the desired port width. */
#define TMS570_RTP_GLBCTRL_PW(val) BSP_FLD32(val,8, 9)
#define TMS570_RTP_GLBCTRL_PW_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_RTP_GLBCTRL_PW_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: RESET - This bit resets the state machine and the registers to their reset value. */
#define TMS570_RTP_GLBCTRL_RESET BSP_FLD32(7)

/* field: CONTCLK - Continuous RTPCLK enable. */
#define TMS570_RTP_GLBCTRL_CONTCLK BSP_FLD32(6)

/* field: HOVF - Halt on overflow. */
#define TMS570_RTP_GLBCTRL_HOVF BSP_FLD32(5)

/* field: INV_RGN - Trace inside or outside of defined trace regions. */
#define TMS570_RTP_GLBCTRL_INV_RGN BSP_FLD32(4)

/* field: ON_OFF - ON/Off switch. */
#define TMS570_RTP_GLBCTRL_ON_OFF(val) BSP_FLD32(val,0, 3)
#define TMS570_RTP_GLBCTRL_ON_OFF_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_RTP_GLBCTRL_ON_OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*----------------------TMS570_RTPTRENA----------------------*/
/* field: ENA4 - Enable tracing for peripherals. */
#define TMS570_RTP_TRENA_ENA4 BSP_FLD32(24)

/* field: ENA2 - Enable tracing for RAM block 2. */
#define TMS570_RTP_TRENA_ENA2 BSP_FLD32(8)

/* field: ENA1 -  */
#define TMS570_RTP_TRENA_ENA1 BSP_FLD32(0)


/*-----------------------TMS570_RTPGSR-----------------------*/
/* field: EMPTYSER - Serializer empty. This bit determines if there is data left in the serializer. */
#define TMS570_RTP_GSR_EMPTYSER BSP_FLD32(12)

/* field: EMPTYPER - Peripheral FIFO empty. This bit determines if there are entries left in the FIFO. */
#define TMS570_RTP_GSR_EMPTYPER BSP_FLD32(11)

/* field: EMPTY2 - RAM block 2 FIFO empty. This bit determines if there are entries left in the FIFO. */
#define TMS570_RTP_GSR_EMPTY2 BSP_FLD32(9)

/* field: EMPTY1 - RAM block 1 FIFO empty. This bit determines if there are entries left in the FIFO. */
#define TMS570_RTP_GSR_EMPTY1 BSP_FLD32(8)

/* field: OVFPER - Overflow peripheral FIFO. */
#define TMS570_RTP_GSR_OVFPER BSP_FLD32(3)

/* field: OVF2 - Overflow RAM block 2 FIFO. */
#define TMS570_RTP_GSR_OVF2 BSP_FLD32(1)

/* field: OVF1 - Overflow RAM block 1 FIFO. */
#define TMS570_RTP_GSR_OVF1 BSP_FLD32(0)


/*---------------------TMS570_RTPRAM1REG1---------------------*/
/* field: CPU_DMA - CPU and/or other master access. */
#define TMS570_RTP_RAM1REG1_CPU_DMA(val) BSP_FLD32(val,29, 30)
#define TMS570_RTP_RAM1REG1_CPU_DMA_GET(reg) BSP_FLD32GET(reg,29, 30)
#define TMS570_RTP_RAM1REG1_CPU_DMA_SET(reg,val) BSP_FLD32SET(reg, val,29, 30)

/* field: RW - Read/Write. */
#define TMS570_RTP_RAM1REG1_RW BSP_FLD32(28)

/* field: BLOCKSIZE - These bits define the length of the trace region. */
#define TMS570_RTP_RAM1REG1_BLOCKSIZE(val) BSP_FLD32(val,24, 27)
#define TMS570_RTP_RAM1REG1_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_RTP_RAM1REG1_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: STARTADDR - These bits define the starting address of the address region that should be traced. */
#define TMS570_RTP_RAM1REG1_STARTADDR(val) BSP_FLD32(val,0, 17)
#define TMS570_RTP_RAM1REG1_STARTADDR_GET(reg) BSP_FLD32GET(reg,0, 17)
#define TMS570_RTP_RAM1REG1_STARTADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 17)


/*---------------------TMS570_RTPRAM2REG1---------------------*/
/* field: CPU_DMA - CPU and/or other master access. */
#define TMS570_RTP_RAM2REG1_CPU_DMA(val) BSP_FLD32(val,29, 30)
#define TMS570_RTP_RAM2REG1_CPU_DMA_GET(reg) BSP_FLD32GET(reg,29, 30)
#define TMS570_RTP_RAM2REG1_CPU_DMA_SET(reg,val) BSP_FLD32SET(reg, val,29, 30)

/* field: RW - Read/Write. */
#define TMS570_RTP_RAM2REG1_RW BSP_FLD32(28)

/* field: BLOCKSIZE - These bits define the length of the trace region. */
#define TMS570_RTP_RAM2REG1_BLOCKSIZE(val) BSP_FLD32(val,24, 27)
#define TMS570_RTP_RAM2REG1_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_RTP_RAM2REG1_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: STARTADDR - These bits define the starting address of the address region that should be traced. */
#define TMS570_RTP_RAM2REG1_STARTADDR(val) BSP_FLD32(val,0, 23)
#define TMS570_RTP_RAM2REG1_STARTADDR_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_RTP_RAM2REG1_STARTADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*---------------------TMS570_RTPPERREG1---------------------*/
/* field: CPU_DMA - CPU and/or other master access. */
#define TMS570_RTP_PERREG1_CPU_DMA(val) BSP_FLD32(val,29, 30)
#define TMS570_RTP_PERREG1_CPU_DMA_GET(reg) BSP_FLD32GET(reg,29, 30)
#define TMS570_RTP_PERREG1_CPU_DMA_SET(reg,val) BSP_FLD32SET(reg, val,29, 30)

/* field: RW - Read/Write. */
#define TMS570_RTP_PERREG1_RW BSP_FLD32(28)

/* field: BLOCKSIZE - These bits define the length of the trace region. */
#define TMS570_RTP_PERREG1_BLOCKSIZE(val) BSP_FLD32(val,24, 27)
#define TMS570_RTP_PERREG1_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_RTP_PERREG1_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: STARTADDR - These bits define the starting address of the address region that should be traced. */
#define TMS570_RTP_PERREG1_STARTADDR(val) BSP_FLD32(val,0, 23)
#define TMS570_RTP_PERREG1_STARTADDR_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_RTP_PERREG1_STARTADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*-----------------------TMS570_RTPDDMW-----------------------*/
/* field: DATA - This register must be written to in a Direct Data Mode write operation to store the data into */
#define TMS570_RTP_DDMW_DATA(val) BSP_FLD32(val,0, 31)
#define TMS570_RTP_DDMW_DATA_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_RTP_DDMW_DATA_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_RTPPC0-----------------------*/
/* field: ENAFUNC - Functional mode of RTPENA pin. */
#define TMS570_RTP_PC0_ENAFUNC BSP_FLD32(18)

/* field: CLKFUNC - Functional mode of RTPCLK pin. */
#define TMS570_RTP_PC0_CLKFUNC BSP_FLD32(17)

/* field: SYNCFUNC - Functional mode of RTPSYNC pin. */
#define TMS570_RTP_PC0_SYNCFUNC BSP_FLD32(16)

/* field: DATAFUNC - Functional mode of RTPDATA[15:0] pins. */
#define TMS570_RTP_PC0_DATAFUNC(val) BSP_FLD32(val,0, 15)
#define TMS570_RTP_PC0_DATAFUNC_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_RTP_PC0_DATAFUNC_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)



#endif /* LIBBSP_ARM_tms570_RTP */
