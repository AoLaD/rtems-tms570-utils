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
#ifndef LIBBSP_ARM_tms570_I2C
#define LIBBSP_ARM_tms570_I2C

#include <bsp/utility.h>

typedef struct{
  uint32_t I2COAR;            /*I2C Own Address Manager*/
  uint32_t I2CIMR;            /*I2C Interupt Mask Register*/
  uint32_t I2CSTR;            /*I2C Status Register*/
  uint32_t I2CCKL;            /*I2C Clock Divider Low Register*/
  uint32_t I2CCKH;            /*I2C Clock Control High Register*/
  uint32_t I2CCNT;            /*I2C Data Count Register*/
  uint32_t I2CDRR;            /*I2C Data Receive Register*/
  uint32_t I2CSAR;            /*I2C Slave Address Register*/
  uint32_t I2CDXR;            /*I2C Data Transmit Register*/
  uint32_t I2CMDR;            /*I2C Mode Register*/
  uint32_t I2CIVR;            /*I2C Interrupt Vector Register*/
  uint32_t I2CEMDR;           /*I2C Extended Mode Register*/
  uint32_t I2CPSC;            /*I2C Prescale Register*/
  uint32_t I2CPID1;           /*I2C Peripheral ID Register 1*/
  uint32_t I2CPID2;           /*I2C Peripheral ID Register 2*/
  uint32_t I2CDMACR;          /*I2C DMA Control Register*/
  uint8_t reserved1 [8];
  uint32_t I2CPFNC;           /*I2C Pin Function Register*/
  uint32_t I2CPDIR;           /*I2C Pin Direction Register*/
  uint32_t I2CDIN;            /*I2C Data Input Register*/
  uint32_t I2CDOUT;           /*I2C Data Output Register*/
  uint32_t I2CDSET;           /*I2C Data Set Register*/
  uint32_t I2CDCLR;           /*I2C Data Clear Register*/
  uint32_t I2CPDR;            /*I2C Pin Open Drain Register*/
  uint32_t I2CPDIS;           /*I2C Pull Disable Register*/
  uint32_t I2CPSEL;           /*I2C Pull Select Register*/
  uint32_t I2CSRS;            /*I2C Pins Slew Rate Select Register*/
} tms570_i2c_t;

/*-----------------------TMS570_I2COAR-----------------------*/
/* field: OA - Own address */
#define TMS570_I2COAR_OA(val) BSP_FLD32(val,0, 9)
#define TMS570_I2COAR_OA_GET(reg) BSP_FLD32GET(reg,0, 9)
#define TMS570_I2COAR_OA_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)


/*-----------------------TMS570_I2CIMR-----------------------*/
/* field: AASEN - Address As Slave Interrupt Enable */
#define TMS570_I2CIMR_AASEN BSP_FLD32(6)

/* field: SCDEN - Stop Condition Interrupt Enable */
#define TMS570_I2CIMR_SCDEN BSP_FLD32(5)

/* field: TXRDYEN - Transmit Data Ready Interrupt Enable */
#define TMS570_I2CIMR_TXRDYEN BSP_FLD32(4)

/* field: RXRDYEN - Receive Data Ready Interrupt Enable */
#define TMS570_I2CIMR_RXRDYEN BSP_FLD32(3)

/* field: ARDYEN - Register Access Ready Interrupt Enable */
#define TMS570_I2CIMR_ARDYEN BSP_FLD32(2)

/* field: NACKEN - No Acknowledgement Interrupt Enable */
#define TMS570_I2CIMR_NACKEN BSP_FLD32(1)

/* field: ALEN - Arbitration Lost Interrupt Enable */
#define TMS570_I2CIMR_ALEN BSP_FLD32(0)


/*-----------------------TMS570_I2CSTR-----------------------*/
/* field: SDIR - Slave direction */
#define TMS570_I2CSTR_SDIR BSP_FLD32(14)

/* field: NACKSNT - No acknowledge sent */
#define TMS570_I2CSTR_NACKSNT BSP_FLD32(13)

/* field: BB - Bus busy */
#define TMS570_I2CSTR_BB BSP_FLD32(12)

/* field: RSFULL - Receiver shift full */
#define TMS570_I2CSTR_RSFULL BSP_FLD32(11)

/* field: XSMT - XSMT */
#define TMS570_I2CSTR_XSMT BSP_FLD32(10)

/* field: AAS - Address as slave */
#define TMS570_I2CSTR_AAS BSP_FLD32(9)

/* field: AD0 - Address zero status */
#define TMS570_I2CSTR_AD0 BSP_FLD32(8)

/* field: SCD - SCD */
#define TMS570_I2CSTR_SCD BSP_FLD32(5)

/* field: TXRDY - Transmit data ready interrupt flag */
#define TMS570_I2CSTR_TXRDY BSP_FLD32(4)

/* field: RXRDY - Receive data ready interrupt flag */
#define TMS570_I2CSTR_RXRDY BSP_FLD32(3)

/* field: ARDY - Register access ready interrupt flag */
#define TMS570_I2CSTR_ARDY BSP_FLD32(2)

/* field: NACK - No acknowledgement interrupt */
#define TMS570_I2CSTR_NACK BSP_FLD32(1)

/* field: AL - Arbitration lost interrupt flag */
#define TMS570_I2CSTR_AL BSP_FLD32(0)


/*-----------------------TMS570_I2CCKL-----------------------*/
/* field: CLKL - Low time clock division factor */
#define TMS570_I2CCKL_CLKL(val) BSP_FLD32(val,0, 15)
#define TMS570_I2CCKL_CLKL_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_I2CCKL_CLKL_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_I2CCKH-----------------------*/
/* field: CLKH - High time clock division factor */
#define TMS570_I2CCKH_CLKH(val) BSP_FLD32(val,0, 15)
#define TMS570_I2CCKH_CLKH_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_I2CCKH_CLKH_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_I2CCNT-----------------------*/
/* field: CNT - Data counter */
#define TMS570_I2CCNT_CNT(val) BSP_FLD32(val,0, 15)
#define TMS570_I2CCNT_CNT_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_I2CCNT_CNT_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_I2CDRR-----------------------*/
/* field: DATARX - Receive data */
#define TMS570_I2CDRR_DATARX(val) BSP_FLD32(val,0, 7)
#define TMS570_I2CDRR_DATARX_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_I2CDRR_DATARX_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_I2CSAR-----------------------*/
/* field: SA - 7- or 10-bit programmable slave address */
#define TMS570_I2CSAR_SA(val) BSP_FLD32(val,0, 9)
#define TMS570_I2CSAR_SA_GET(reg) BSP_FLD32GET(reg,0, 9)
#define TMS570_I2CSAR_SA_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)


/*-----------------------TMS570_I2CDXR-----------------------*/
/* field: DATATX - Transmit data */
#define TMS570_I2CDXR_DATATX(val) BSP_FLD32(val,0, 7)
#define TMS570_I2CDXR_DATATX_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_I2CDXR_DATATX_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_I2CMDR-----------------------*/
/* field: NACKMOD - No-acknowledge (NACK) mode */
#define TMS570_I2CMDR_NACKMOD BSP_FLD32(15)

/* field: FREE - Free running bit */
#define TMS570_I2CMDR_FREE BSP_FLD32(14)

/* field: STT - Start condition */
#define TMS570_I2CMDR_STT BSP_FLD32(13)

/* field: STP - Stop condition */
#define TMS570_I2CMDR_STP BSP_FLD32(11)

/* field: MST - Master/slave mode bit */
#define TMS570_I2CMDR_MST BSP_FLD32(10)

/* field: TRX - Transmit/receive bit */
#define TMS570_I2CMDR_TRX BSP_FLD32(9)

/* field: XA - Expand address enable bit */
#define TMS570_I2CMDR_XA BSP_FLD32(8)

/* field: RM - RM */
#define TMS570_I2CMDR_RM BSP_FLD32(7)

/* field: DLB - Digital loop back enable bit */
#define TMS570_I2CMDR_DLB BSP_FLD32(6)

/* field: nIRS - I2C reset enable bit */
#define TMS570_I2CMDR_nIRS BSP_FLD32(5)

/* field: STB - Start byte mode enable bit (Master mode only) */
#define TMS570_I2CMDR_STB BSP_FLD32(4)

/* field: FDF - Free data format enable bit */
#define TMS570_I2CMDR_FDF BSP_FLD32(3)

/* field: BC - Bit count */
#define TMS570_I2CMDR_BC(val) BSP_FLD32(val,0, 2)
#define TMS570_I2CMDR_BC_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_I2CMDR_BC_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-----------------------TMS570_I2CIVR-----------------------*/
/* field: TESTMD - Reserved for internal testing. */
#define TMS570_I2CIVR_TESTMD(val) BSP_FLD32(val,8, 11)
#define TMS570_I2CIVR_TESTMD_GET(reg) BSP_FLD32GET(reg,8, 11)
#define TMS570_I2CIVR_TESTMD_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)

/* field: INTCODE - Interrupt Code Bits */
#define TMS570_I2CIVR_INTCODE(val) BSP_FLD32(val,0, 2)
#define TMS570_I2CIVR_INTCODE_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_I2CIVR_INTCODE_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-----------------------TMS570_I2CEMDR-----------------------*/
/* field: IGNACK - Ignore NACK mode */
#define TMS570_I2CEMDR_IGNACK BSP_FLD32(1)

/* field: BCM - Backwards compatibility mode */
#define TMS570_I2CEMDR_BCM BSP_FLD32(0)


/*-----------------------TMS570_I2CPSC-----------------------*/
/* field: PSC - Prescale */
#define TMS570_I2CPSC_PSC(val) BSP_FLD32(val,0, 7)
#define TMS570_I2CPSC_PSC_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_I2CPSC_PSC_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_I2CPID1-----------------------*/
/* field: CLASS - Peripheral class */
#define TMS570_I2CPID1_CLASS(val) BSP_FLD32(val,8, 15)
#define TMS570_I2CPID1_CLASS_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_I2CPID1_CLASS_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: REVISION - Revision level of the I2C */
#define TMS570_I2CPID1_REVISION(val) BSP_FLD32(val,0, 7)
#define TMS570_I2CPID1_REVISION_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_I2CPID1_REVISION_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_I2CPID2-----------------------*/
/* field: TYPE - Peripheral type */
#define TMS570_I2CPID2_TYPE(val) BSP_FLD32(val,0, 7)
#define TMS570_I2CPID2_TYPE_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_I2CPID2_TYPE_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_I2CDMACR----------------------*/
/* field: TXDMAEN - Transmitter DMA enable */
#define TMS570_I2CDMACR_TXDMAEN BSP_FLD32(1)

/* field: RXDMAEN - Receive DMA enable */
#define TMS570_I2CDMACR_RXDMAEN BSP_FLD32(0)


/*-----------------------TMS570_I2CPFNC-----------------------*/
/* field: PINFUNC - SDA and SCL Pin Function */
#define TMS570_I2CPFNC_PINFUNC BSP_FLD32(0)


/*-----------------------TMS570_I2CPDIR-----------------------*/
/* field: SDADIR - SDA direction */
#define TMS570_I2CPDIR_SDADIR BSP_FLD32(1)

/* field: SCLDIR - SCL direction */
#define TMS570_I2CPDIR_SCLDIR BSP_FLD32(0)


/*-----------------------TMS570_I2CDIN-----------------------*/
/* field: SDAIN - Serial data in */
#define TMS570_I2CDIN_SDAIN BSP_FLD32(1)

/* field: SCLIN - Serial clock data in */
#define TMS570_I2CDIN_SCLIN BSP_FLD32(0)


/*-----------------------TMS570_I2CDOUT-----------------------*/
/* field: SDAOUT - SDA Data Output */
#define TMS570_I2CDOUT_SDAOUT BSP_FLD32(1)

/* field: SCLOUT - SCL Data Output */
#define TMS570_I2CDOUT_SCLOUT BSP_FLD32(0)


/*-----------------------TMS570_I2CDSET-----------------------*/
/* field: SDASET - Serial Data Set */
#define TMS570_I2CDSET_SDASET BSP_FLD32(1)

/* field: SCLSET - Serial Clock Set */
#define TMS570_I2CDSET_SCLSET BSP_FLD32(0)


/*-----------------------TMS570_I2CDCLR-----------------------*/
/* field: SDACLR - Serial Data Clear */
#define TMS570_I2CDCLR_SDACLR BSP_FLD32(1)

/* field: SCLCLR - Serial Clock Clear */
#define TMS570_I2CDCLR_SCLCLR BSP_FLD32(0)


/*-----------------------TMS570_I2CPDR-----------------------*/
/* field: SDAPDR - SDA pin open drain enable */
#define TMS570_I2CPDR_SDAPDR BSP_FLD32(1)

/* field: SCLPDR - SCL pin open drain enable */
#define TMS570_I2CPDR_SCLPDR BSP_FLD32(0)


/*-----------------------TMS570_I2CPDIS-----------------------*/
/* field: SDAPDIS - SDA pull disable */
#define TMS570_I2CPDIS_SDAPDIS BSP_FLD32(1)

/* field: SCLPDIS - SCL pull disable */
#define TMS570_I2CPDIS_SCLPDIS BSP_FLD32(0)


/*-----------------------TMS570_I2CPSEL-----------------------*/
/* field: SDAPSEL - SDA pull select */
#define TMS570_I2CPSEL_SDAPSEL BSP_FLD32(1)

/* field: SCLPSEL - SCL pull select */
#define TMS570_I2CPSEL_SCLPSEL BSP_FLD32(0)


/*-----------------------TMS570_I2CSRS-----------------------*/
/* field: SDASRS - SDA Slew Rate select */
#define TMS570_I2CSRS_SDASRS BSP_FLD32(1)

/* field: SCLSRS - SCL Slew Rate select */
#define TMS570_I2CSRS_SCLSRS BSP_FLD32(0)



#endif /* LIBBSP_ARM_tms570_I2C */
