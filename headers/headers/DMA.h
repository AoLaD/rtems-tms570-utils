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
#ifndef LIBBSP_ARM_tms570_DMA.H
#define LIBBSP_ARM_tms570_DMA.H

#include <bsp/utility.h>

typedef struct{
  uint32_t GCTRL;             /*Global Control Register*/
  uint32_t PEND;              /*Channel Pending Register*/
  uint8_t reserved1 [4];
  uint32_t DMASTAT;           /*DMA Status Register*/
  uint8_t reserved2 [4];
  uint32_t HWCHENAS;          /*HW Channel Enable Set and Status Register*/
  uint8_t reserved3 [4];
  uint32_t HWCHENAR;          /*HW Channel Enable Reset and Status Register*/
  uint8_t reserved4 [4];
  uint32_t SWCHENAS;          /*SW Channel Enable Set and Status Register*/
  uint8_t reserved5 [4];
  uint32_t SWCHENAR;          /*SW Channel Enable Reset and Status Register*/
  uint8_t reserved6 [4];
  uint32_t CHPRIOS;           /*Channel Priority Set Register*/
  uint8_t reserved7 [4];
  uint32_t CHPRIOR;           /*Channel Priority Reset Register*/
  uint8_t reserved8 [4];
  uint32_t GCHIENAS;          /*Global Channel Interrupt Enable Set Register*/
  uint8_t reserved9 [4];
  uint32_t GCHIENAR;          /*Global Channel Interrupt Enable Reset Register*/
  uint8_t reserved10 [4];
  uint32_t DREQASI0;          /*DMA Request Assignment Register 0*/
  uint32_t DREQASI1;          /*DMA Request Assignment Register 1*/
  uint32_t DREQASI2;          /*DMA Request Assignment Register 2*/
  uint32_t DREQASI3;          /*DMA Request Assignment Register 3*/
  uint8_t reserved11 [48];
  uint32_t PAR0;              /*Port Assignment Register 0*/
  uint32_t PAR1;              /*Port Assignment Register 1*/
  uint8_t reserved12 [24];
  uint32_t FTCMAP;            /*FTC Interrupt Mapping Register*/
  uint8_t reserved13 [4];
  uint32_t LFSMAP;            /*LFS Interrupt Mapping Register*/
  uint8_t reserved14 [4];
  uint32_t HBCMAP;            /*HBC Interrupt Mapping Register*/
  uint8_t reserved15 [4];
  uint32_t BTCMAP;            /*BTC Interrupt Mapping Register*/
  uint8_t reserved16 [4];
  uint32_t BERMAP;            /*BER Interrupt Mapping Register*/
  uint8_t reserved17 [4];
  uint32_t FTCINTENAS;        /*FTC Interrupt Enable Set*/
  uint8_t reserved18 [4];
  uint32_t FTCINTENAR;        /*FTC Interrupt Enable Reset*/
  uint8_t reserved19 [4];
  uint32_t LFSINTENAS;        /*LFS Interrupt Enable Set*/
  uint8_t reserved20 [4];
  uint32_t LFSINTENAR;        /*LFS Interrupt Enable Reset*/
  uint8_t reserved21 [4];
  uint32_t HBCINTENAS;        /*HBC Interrupt Enable Set*/
  uint8_t reserved22 [4];
  uint32_t HBCINTENAR;        /*HBC Interrupt Enable Reset*/
  uint8_t reserved23 [4];
  uint32_t BTCINTENAS;        /*BTC Interrupt Enable Set*/
  uint8_t reserved24 [4];
  uint32_t BTCINTENAR;        /*BTC Interrupt Enable Reset*/
  uint8_t reserved25 [4];
  uint32_t GINTFLAG;          /*Global Interrupt Flag Register*/
  uint8_t reserved26 [4];
  uint32_t FTCFLAG;           /*FTC Interrupt Flag Register*/
  uint8_t reserved27 [4];
  uint32_t LFSFLAG;           /*LFS Interrupt Flag Register*/
  uint8_t reserved28 [4];
  uint32_t HBCFLAG;           /*HBC Interrupt Flag Register*/
  uint8_t reserved29 [4];
  uint32_t BTCFLAG;           /*BTC Interrupt Flag Register*/
  uint8_t reserved30 [4];
  uint32_t BERFLAG;           /*BER Interrupt Flag Register*/
  uint8_t reserved31 [4];
  uint32_t FTCAOFFSET;        /*FTCA Interrupt Channel Offset Register*/
  uint32_t LFSAOFFSET;        /*LFSA Interrupt Channel Offset Register*/
  uint32_t HBCAOFFSET;        /*HBCA Interrupt Channel Offset Register*/
  uint32_t BTCAOFFSET;        /*BTCA Interrupt Channel Offset Register*/
  uint32_t BERAOFFSET;        /*BERA Interrupt Channel Offset Register*/
  uint32_t FTCBOFFSET;        /*FTCB Interrupt Channel Offset Register*/
  uint32_t LFSBOFFSET;        /*LFSB Interrupt Channel Offset Register*/
  uint32_t HBCBOFFSET;        /*HBCB Interrupt Channel Offset Register*/
  uint32_t BTCBOFFSET;        /*BTCB Interrupt Channel Offset Register*/
  uint32_t BERBOFFSET;        /*BERB Interrupt Channel Offset Register*/
  uint8_t reserved32 [4];
  uint32_t PTCRL;             /*Port Control Register*/
  uint32_t RTCTRL;            /*RAM Test Control Register*/
  uint32_t DCTRL;             /*Debug Control*/
  uint32_t WPR;               /*Watch Point Register*/
  uint32_t WMR;               /*Watch Mask Register*/
  uint8_t reserved33 [12];
  uint32_t PBACSADDR;         /*Port B Active Channel Source Address Register*/
  uint32_t PBACDADDR;         /*Port B Active Channel Destination Address Register*/
  uint32_t PBACTC;            /*Port B Active Channel Transfer Count Register*/
  uint8_t reserved34 [4];
  uint32_t DMAPCR;            /*Parity Control Register*/
  uint32_t DMAPAR;            /*DMA Parity Error Address Register*/
  uint32_t DMAMPCTRL;         /*DMA Memory Protection Control Register*/
  uint32_t DMAMPST;           /*DMA Memory Protection Status Register*/
  uint32_t DMAMPROS;          /*DMA Memory Protection Region 0 Start Address Register*/
  uint32_t DMAMPROE;          /*DMA Memory Protection Region 0 End Address Register*/
  uint32_t DMAMPR1S;          /*DMA Memory Protection Region 1 Start Address Register*/
  uint32_t DMAMPR1E;          /*DMA Memory Protection Region 1 End Address Register*/
  uint32_t DMAMPR2S;          /*DMA Memory Protection Region 2 Start Address Register*/
  uint32_t DMAMPR2E;          /*DMA Memory Protection Region 2 End Address Register*/
  uint32_t DMAMPR3S;          /*DMA Memory Protection Region 3 Start Address Register*/
  uint32_t DMAMPR3E;          /*DMA Memory Protection Region 3 End Address Register*/
} DMA_struct;

/*----------------------tms570_DMA_GCTRL----------------------*/
/* field: DMA_EN - DMA enable bit. */
#define tms570_DMA_GCTRL_DMA_EN BSP_FLD32(16)

/* field: BUS_BUSY - This bit indicates status of DMA external AHB bus status. */
#define tms570_DMA_GCTRL_BUS_BUSY BSP_FLD32(14)

/* field: DEBUG_MODE - Debug Mode. */
#define tms570_DMA_GCTRL_DEBUG_MODE(val) BSP_FLD32(val,8, 9)
#define tms570_DMA_GCTRL_DEBUG_MODE_GET(reg) BSP_FLD32GET(reg,8, 9)
#define tms570_DMA_GCTRL_DEBUG_MODE_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: DMA_RES - DMA software reset */
#define tms570_DMA_GCTRL_DMA_RES BSP_FLD32(0)


/*----------------------tms570_DMA_PEND----------------------*/
/* field: PEND - Channel pending register. */
#define tms570_DMA_PEND_PEND(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_PEND_PEND_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_PEND_PEND_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_DMA_DMASTAT---------------------*/
/* field: STCH - Status of DMA channels. */
#define tms570_DMA_DMASTAT_STCH(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_DMASTAT_STCH_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_DMASTAT_STCH_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_DMA_HWCHENAS--------------------*/
/* field: HWCHENA - Hardware channel enable bit. */
#define tms570_DMA_HWCHENAS_HWCHENA(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_HWCHENAS_HWCHENA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_HWCHENAS_HWCHENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_DMA_HWCHENAR--------------------*/
/* field: HWCHDIS - HW channel disable bit. */
#define tms570_DMA_HWCHENAR_HWCHDIS(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_HWCHENAR_HWCHDIS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_HWCHENAR_HWCHDIS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_DMA_SWCHENAS--------------------*/
/* field: SWCHENA - SW channel enable bit. */
#define tms570_DMA_SWCHENAS_SWCHENA(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_SWCHENAS_SWCHENA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_SWCHENAS_SWCHENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_DMA_SWCHENAR--------------------*/
/* field: SWCHDIS - SW channel disable bit. */
#define tms570_DMA_SWCHENAR_SWCHDIS(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_SWCHENAR_SWCHDIS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_SWCHENAR_SWCHDIS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_DMA_CHPRIOS---------------------*/
/* field: CPS - Channel priority set bit. */
#define tms570_DMA_CHPRIOS_CPS(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_CHPRIOS_CPS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_CHPRIOS_CPS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_DMA_CHPRIOR---------------------*/
/* field: CPR - Channel priority reset bit. */
#define tms570_DMA_CHPRIOR_CPR(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_CHPRIOR_CPR_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_CHPRIOR_CPR_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_DMA_GCHIENAS--------------------*/
/* field: GCHIE - Global channel interrupt enable bit. */
#define tms570_DMA_GCHIENAS_GCHIE(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_GCHIENAS_GCHIE_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_GCHIENAS_GCHIE_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_DMA_GCHIENAR--------------------*/
/* field: GCHID - Global channel interrupt disable bit. */
#define tms570_DMA_GCHIENAR_GCHID(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_GCHIENAR_GCHID_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_GCHIENAR_GCHID_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_DMA_DREQASI0--------------------*/
/* field: CH0ASI - Channel 0 assignment. This bit field chooses the DMA request assignment for channel 0. */
#define tms570_DMA_DREQASI0_CH0ASI(val) BSP_FLD32(val,24, 29)
#define tms570_DMA_DREQASI0_CH0ASI_GET(reg) BSP_FLD32GET(reg,24, 29)
#define tms570_DMA_DREQASI0_CH0ASI_SET(reg,val) BSP_FLD32SET(reg, val,24, 29)

/* field: CH1ASI - Channel 1 assignment. This bit field chooses the DMA request assignment for channel 1. */
#define tms570_DMA_DREQASI0_CH1ASI(val) BSP_FLD32(val,16, 21)
#define tms570_DMA_DREQASI0_CH1ASI_GET(reg) BSP_FLD32GET(reg,16, 21)
#define tms570_DMA_DREQASI0_CH1ASI_SET(reg,val) BSP_FLD32SET(reg, val,16, 21)

/* field: CH2ASI - Channel 2 assignment. This bit field chooses the DMA request assignment for channel 2. */
#define tms570_DMA_DREQASI0_CH2ASI(val) BSP_FLD32(val,8, 13)
#define tms570_DMA_DREQASI0_CH2ASI_GET(reg) BSP_FLD32GET(reg,8, 13)
#define tms570_DMA_DREQASI0_CH2ASI_SET(reg,val) BSP_FLD32SET(reg, val,8, 13)

/* field: CH3ASI - Channel 3 assignment. This bit field chooses the DMA request assignment for channel 3. */
#define tms570_DMA_DREQASI0_CH3ASI(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_DREQASI0_CH3ASI_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_DREQASI0_CH3ASI_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*--------------------tms570_DMA_DREQASI1--------------------*/
/* field: CH4ASI - Channel 4 assignment. This bit field chooses the DMA request assignment for channel 4. */
#define tms570_DMA_DREQASI1_CH4ASI(val) BSP_FLD32(val,24, 29)
#define tms570_DMA_DREQASI1_CH4ASI_GET(reg) BSP_FLD32GET(reg,24, 29)
#define tms570_DMA_DREQASI1_CH4ASI_SET(reg,val) BSP_FLD32SET(reg, val,24, 29)

/* field: CH5ASI - Channel 5 assignment. This bit field chooses the DMA request assignment for channel 5. */
#define tms570_DMA_DREQASI1_CH5ASI(val) BSP_FLD32(val,21, 26)
#define tms570_DMA_DREQASI1_CH5ASI_GET(reg) BSP_FLD32GET(reg,21, 26)
#define tms570_DMA_DREQASI1_CH5ASI_SET(reg,val) BSP_FLD32SET(reg, val,21, 26)

/* field: CH6ASI - Channel 6 assignment. This bit field chooses the DMA request assignment for channel 6. */
#define tms570_DMA_DREQASI1_CH6ASI(val) BSP_FLD32(val,8, 13)
#define tms570_DMA_DREQASI1_CH6ASI_GET(reg) BSP_FLD32GET(reg,8, 13)
#define tms570_DMA_DREQASI1_CH6ASI_SET(reg,val) BSP_FLD32SET(reg, val,8, 13)

/* field: CH7ASI - Channel 7 assignment. This bit field chooses the DMA request assignment for channel 7. */
#define tms570_DMA_DREQASI1_CH7ASI(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_DREQASI1_CH7ASI_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_DREQASI1_CH7ASI_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*--------------------tms570_DMA_DREQASI2--------------------*/
/* field: CH8ASI - Channel 8 assignment. This bit field chooses the DMA request assignment for channel 8. */
#define tms570_DMA_DREQASI2_CH8ASI(val) BSP_FLD32(val,24, 29)
#define tms570_DMA_DREQASI2_CH8ASI_GET(reg) BSP_FLD32GET(reg,24, 29)
#define tms570_DMA_DREQASI2_CH8ASI_SET(reg,val) BSP_FLD32SET(reg, val,24, 29)

/* field: CH9ASI - Channel 9 assignment. This bit field chooses the DMA request assignment for channel 9. */
#define tms570_DMA_DREQASI2_CH9ASI(val) BSP_FLD32(val,16, 21)
#define tms570_DMA_DREQASI2_CH9ASI_GET(reg) BSP_FLD32GET(reg,16, 21)
#define tms570_DMA_DREQASI2_CH9ASI_SET(reg,val) BSP_FLD32SET(reg, val,16, 21)

/* field: CH10ASI - Channel 10 assignment. This bit field chooses the DMA request assignment for channel 10. */
#define tms570_DMA_DREQASI2_CH10ASI(val) BSP_FLD32(val,8, 13)
#define tms570_DMA_DREQASI2_CH10ASI_GET(reg) BSP_FLD32GET(reg,8, 13)
#define tms570_DMA_DREQASI2_CH10ASI_SET(reg,val) BSP_FLD32SET(reg, val,8, 13)

/* field: CH11ASI - Channel 11 assignment. This bit field chooses the DMA request assignment for channel 11. */
#define tms570_DMA_DREQASI2_CH11ASI(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_DREQASI2_CH11ASI_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_DREQASI2_CH11ASI_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*--------------------tms570_DMA_DREQASI3--------------------*/
/* field: CH12ASI - Channel 12 assignment. This bit field chooses the DMA request assignment for channel 12. */
#define tms570_DMA_DREQASI3_CH12ASI(val) BSP_FLD32(val,24, 29)
#define tms570_DMA_DREQASI3_CH12ASI_GET(reg) BSP_FLD32GET(reg,24, 29)
#define tms570_DMA_DREQASI3_CH12ASI_SET(reg,val) BSP_FLD32SET(reg, val,24, 29)

/* field: CH13ASI - Channel 13 assignment. This bit field chooses the DMA request assignment for channel 13. */
#define tms570_DMA_DREQASI3_CH13ASI(val) BSP_FLD32(val,16, 21)
#define tms570_DMA_DREQASI3_CH13ASI_GET(reg) BSP_FLD32GET(reg,16, 21)
#define tms570_DMA_DREQASI3_CH13ASI_SET(reg,val) BSP_FLD32SET(reg, val,16, 21)

/* field: CH14ASI - Channel 14 assignment. This bit field chooses the DMA request assignment for channel 14. */
#define tms570_DMA_DREQASI3_CH14ASI(val) BSP_FLD32(val,8, 13)
#define tms570_DMA_DREQASI3_CH14ASI_GET(reg) BSP_FLD32GET(reg,8, 13)
#define tms570_DMA_DREQASI3_CH14ASI_SET(reg,val) BSP_FLD32SET(reg, val,8, 13)

/* field: CH15ASI - Channel 15 assignment. This bit field chooses the DMA request assignment for channel 15. */
#define tms570_DMA_DREQASI3_CH15ASI(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_DREQASI3_CH15ASI_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_DREQASI3_CH15ASI_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*----------------------tms570_DMA_PAR0----------------------*/
/* field: CH0PA - These bit fields determine to which port channel 0 is assigned. */
#define tms570_DMA_PAR0_CH0PA(val) BSP_FLD32(val,28, 30)
#define tms570_DMA_PAR0_CH0PA_GET(reg) BSP_FLD32GET(reg,28, 30)
#define tms570_DMA_PAR0_CH0PA_SET(reg,val) BSP_FLD32SET(reg, val,28, 30)

/* field: CH1PA - These bit fields determine to which port channel 1 is assigned. */
#define tms570_DMA_PAR0_CH1PA(val) BSP_FLD32(val,24, 26)
#define tms570_DMA_PAR0_CH1PA_GET(reg) BSP_FLD32GET(reg,24, 26)
#define tms570_DMA_PAR0_CH1PA_SET(reg,val) BSP_FLD32SET(reg, val,24, 26)

/* field: CH2PA - These bit fields determine to which port channel 2 is assigned. */
#define tms570_DMA_PAR0_CH2PA(val) BSP_FLD32(val,20, 22)
#define tms570_DMA_PAR0_CH2PA_GET(reg) BSP_FLD32GET(reg,20, 22)
#define tms570_DMA_PAR0_CH2PA_SET(reg,val) BSP_FLD32SET(reg, val,20, 22)

/* field: CH3PA - These bit fields determine to which port channel 3 is assigned. */
#define tms570_DMA_PAR0_CH3PA(val) BSP_FLD32(val,16, 18)
#define tms570_DMA_PAR0_CH3PA_GET(reg) BSP_FLD32GET(reg,16, 18)
#define tms570_DMA_PAR0_CH3PA_SET(reg,val) BSP_FLD32SET(reg, val,16, 18)

/* field: CH4PA - These bit fields determine to which port channel 4 is assigned. */
#define tms570_DMA_PAR0_CH4PA(val) BSP_FLD32(val,12, 14)
#define tms570_DMA_PAR0_CH4PA_GET(reg) BSP_FLD32GET(reg,12, 14)
#define tms570_DMA_PAR0_CH4PA_SET(reg,val) BSP_FLD32SET(reg, val,12, 14)

/* field: CH5PA - These bit fields determine to which port channel 5 is assigned. */
#define tms570_DMA_PAR0_CH5PA(val) BSP_FLD32(val,8, 10)
#define tms570_DMA_PAR0_CH5PA_GET(reg) BSP_FLD32GET(reg,8, 10)
#define tms570_DMA_PAR0_CH5PA_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: CH6PA - These bit fields determine to which port channel 6 is assigned. */
#define tms570_DMA_PAR0_CH6PA(val) BSP_FLD32(val,4, 6)
#define tms570_DMA_PAR0_CH6PA_GET(reg) BSP_FLD32GET(reg,4, 6)
#define tms570_DMA_PAR0_CH6PA_SET(reg,val) BSP_FLD32SET(reg, val,4, 6)

/* field: CH7PA - These bit fields determine to which port channel 7 is assigned. */
#define tms570_DMA_PAR0_CH7PA(val) BSP_FLD32(val,0, 2)
#define tms570_DMA_PAR0_CH7PA_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_DMA_PAR0_CH7PA_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*----------------------tms570_DMA_PAR1----------------------*/
/* field: CH8PA - These bit fields determine to which port channel 8 is assigned. */
#define tms570_DMA_PAR1_CH8PA(val) BSP_FLD32(val,28, 30)
#define tms570_DMA_PAR1_CH8PA_GET(reg) BSP_FLD32GET(reg,28, 30)
#define tms570_DMA_PAR1_CH8PA_SET(reg,val) BSP_FLD32SET(reg, val,28, 30)

/* field: CH9PA - These bit fields determine to which port channel 9 is assigned. */
#define tms570_DMA_PAR1_CH9PA(val) BSP_FLD32(val,24, 26)
#define tms570_DMA_PAR1_CH9PA_GET(reg) BSP_FLD32GET(reg,24, 26)
#define tms570_DMA_PAR1_CH9PA_SET(reg,val) BSP_FLD32SET(reg, val,24, 26)

/* field: CH10PA - These bit fields determine to which port channel 10 is assigned. */
#define tms570_DMA_PAR1_CH10PA(val) BSP_FLD32(val,20, 22)
#define tms570_DMA_PAR1_CH10PA_GET(reg) BSP_FLD32GET(reg,20, 22)
#define tms570_DMA_PAR1_CH10PA_SET(reg,val) BSP_FLD32SET(reg, val,20, 22)

/* field: CH11PA - These bit fields determine to which port channel 11 is assigned. */
#define tms570_DMA_PAR1_CH11PA(val) BSP_FLD32(val,16, 18)
#define tms570_DMA_PAR1_CH11PA_GET(reg) BSP_FLD32GET(reg,16, 18)
#define tms570_DMA_PAR1_CH11PA_SET(reg,val) BSP_FLD32SET(reg, val,16, 18)

/* field: CH12PA - These bit fields determine to which port channel 12 is assigned. */
#define tms570_DMA_PAR1_CH12PA(val) BSP_FLD32(val,12, 14)
#define tms570_DMA_PAR1_CH12PA_GET(reg) BSP_FLD32GET(reg,12, 14)
#define tms570_DMA_PAR1_CH12PA_SET(reg,val) BSP_FLD32SET(reg, val,12, 14)

/* field: CH13PA - These bit fields determine to which port channel 13 is assigned. */
#define tms570_DMA_PAR1_CH13PA(val) BSP_FLD32(val,8, 10)
#define tms570_DMA_PAR1_CH13PA_GET(reg) BSP_FLD32GET(reg,8, 10)
#define tms570_DMA_PAR1_CH13PA_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: CH14PA - These bit fields determine to which port channel 14 is assigned. */
#define tms570_DMA_PAR1_CH14PA(val) BSP_FLD32(val,4, 6)
#define tms570_DMA_PAR1_CH14PA_GET(reg) BSP_FLD32GET(reg,4, 6)
#define tms570_DMA_PAR1_CH14PA_SET(reg,val) BSP_FLD32SET(reg, val,4, 6)

/* field: CH15PA - These bit fields determine to which port channel 15 is assigned. */
#define tms570_DMA_PAR1_CH15PA(val) BSP_FLD32(val,0, 2)
#define tms570_DMA_PAR1_CH15PA_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_DMA_PAR1_CH15PA_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*---------------------tms570_DMA_FTCMAP---------------------*/
/* field: FTCAB - Frame transfer complete (FTC) interrupt to Group A or Group B. */
#define tms570_DMA_FTCMAP_FTCAB(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_FTCMAP_FTCAB_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_FTCMAP_FTCAB_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_DMA_LFSMAP---------------------*/
/* field: LFSAB - Last frame started (LFS) interrupt to Group A or Group B. */
#define tms570_DMA_LFSMAP_LFSAB(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_LFSMAP_LFSAB_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_LFSMAP_LFSAB_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_DMA_HBCMAP---------------------*/
/* field: HBCAB - Half block complete (HBC) interrupt to Group A or Group B. */
#define tms570_DMA_HBCMAP_HBCAB(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_HBCMAP_HBCAB_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_HBCMAP_HBCAB_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_DMA_BTCMAP---------------------*/
/* field: BTCAB - Block transfer complete (BTC) interrupt to Group A or Group B */
#define tms570_DMA_BTCMAP_BTCAB(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_BTCMAP_BTCAB_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_BTCMAP_BTCAB_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_DMA_BERMAP---------------------*/
/* field: BERAB - Bus error (BER) interrupt to Group A or Group B. */
#define tms570_DMA_BERMAP_BERAB(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_BERMAP_BERAB_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_BERMAP_BERAB_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_DMA_FTCINTENAS-------------------*/
/* field: FTCINTENA - Frame transfer complete (FTC) interrupt enable. */
#define tms570_DMA_FTCINTENAS_FTCINTENA(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_FTCINTENAS_FTCINTENA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_FTCINTENAS_FTCINTENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_DMA_FTCINTENAR-------------------*/
/* field: FTCINTDIS - Frame transfer complete (FTC) interrupt disable. */
#define tms570_DMA_FTCINTENAR_FTCINTDIS(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_FTCINTENAR_FTCINTDIS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_FTCINTENAR_FTCINTDIS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_DMA_LFSINTENAS-------------------*/
/* field: LFSINTENA - Last frame started (LFS) interrupt enable. */
#define tms570_DMA_LFSINTENAS_LFSINTENA(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_LFSINTENAS_LFSINTENA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_LFSINTENAS_LFSINTENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_DMA_LFSINTENAR-------------------*/
/* field: LFSINTDIS - Last frame started (LFS) interrupt disable. */
#define tms570_DMA_LFSINTENAR_LFSINTDIS(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_LFSINTENAR_LFSINTDIS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_LFSINTENAR_LFSINTDIS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_DMA_HBCINTENAS-------------------*/
/* field: HBCINTENA - Half block complete (HBC) interrupt enable. */
#define tms570_DMA_HBCINTENAS_HBCINTENA(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_HBCINTENAS_HBCINTENA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_HBCINTENAS_HBCINTENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_DMA_HBCINTENAR-------------------*/
/* field: HBCINTDIS - Half block complete (HBC) interrupt disable. */
#define tms570_DMA_HBCINTENAR_HBCINTDIS(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_HBCINTENAR_HBCINTDIS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_HBCINTENAR_HBCINTDIS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_DMA_BTCINTENAS-------------------*/
/* field: BTCINTENA - Block transfer complete (BTC) interrupt enable. */
#define tms570_DMA_BTCINTENAS_BTCINTENA(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_BTCINTENAS_BTCINTENA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_BTCINTENAS_BTCINTENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_DMA_BTCINTENAR-------------------*/
/* field: BTCINTDIS - Block transfer complete (BTC) interurpt disable. */
#define tms570_DMA_BTCINTENAR_BTCINTDIS(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_BTCINTENAR_BTCINTDIS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_BTCINTENAR_BTCINTDIS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------tms570_DMA_GINTFLAG--------------------*/
/* field: GINT - Global interrupt flags. */
#define tms570_DMA_GINTFLAG_GINT(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_GINTFLAG_GINT_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_GINTFLAG_GINT_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_DMA_FTCFLAG---------------------*/
/* field: FTCI - Frame transfer complete (FTC) flags. */
#define tms570_DMA_FTCFLAG_FTCI(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_FTCFLAG_FTCI_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_FTCFLAG_FTCI_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_DMA_LFSFLAG---------------------*/
/* field: LFSI - Last frame started (LFS) flags. */
#define tms570_DMA_LFSFLAG_LFSI(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_LFSFLAG_LFSI_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_LFSFLAG_LFSI_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_DMA_HBCFLAG---------------------*/
/* field: HBCI - Half block transfer (HBC) complete flags. */
#define tms570_DMA_HBCFLAG_HBCI(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_HBCFLAG_HBCI_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_HBCFLAG_HBCI_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_DMA_BTCFLAG---------------------*/
/* field: BTCI - Block transfer complete (BTC) flags. */
#define tms570_DMA_BTCFLAG_BTCI(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_BTCFLAG_BTCI_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_BTCFLAG_BTCI_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_DMA_BERFLAG---------------------*/
/* field: BERI - Bus error (BER) flags. */
#define tms570_DMA_BERFLAG_BERI(val) BSP_FLD32(val,0, 15)
#define tms570_DMA_BERFLAG_BERI_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_DMA_BERFLAG_BERI_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------tms570_DMA_FTCAOFFSET-------------------*/
/* field: sbz - These bits should always be programmed as zero. */
#define tms570_DMA_FTCAOFFSET_sbz(val) BSP_FLD32(val,6, 7)
#define tms570_DMA_FTCAOFFSET_sbz_GET(reg) BSP_FLD32GET(reg,6, 7)
#define tms570_DMA_FTCAOFFSET_sbz_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: FTCA - Channel causing FTC interrupt Group A. */
#define tms570_DMA_FTCAOFFSET_FTCA(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_FTCAOFFSET_FTCA_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_FTCAOFFSET_FTCA_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------tms570_DMA_LFSAOFFSET-------------------*/
/* field: LFSA - Channel causing LFS interrupt Group A. */
#define tms570_DMA_LFSAOFFSET_LFSA(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_LFSAOFFSET_LFSA_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_LFSAOFFSET_LFSA_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------tms570_DMA_HBCAOFFSET-------------------*/
/* field: HBCA - Channel causing HBC interrupt Group A. */
#define tms570_DMA_HBCAOFFSET_HBCA(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_HBCAOFFSET_HBCA_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_HBCAOFFSET_HBCA_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------tms570_DMA_BTCAOFFSET-------------------*/
/* field: BTCA - Channel causing BTC interrupt Group A. */
#define tms570_DMA_BTCAOFFSET_BTCA(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_BTCAOFFSET_BTCA_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_BTCAOFFSET_BTCA_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------tms570_DMA_BERAOFFSET-------------------*/
/* field: BERA - Channel causing BER interrupt Group A. */
#define tms570_DMA_BERAOFFSET_BERA(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_BERAOFFSET_BERA_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_BERAOFFSET_BERA_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------tms570_DMA_FTCBOFFSET-------------------*/
/* field: FTCB - Channel causing FTC interrupt Group B. */
#define tms570_DMA_FTCBOFFSET_FTCB(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_FTCBOFFSET_FTCB_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_FTCBOFFSET_FTCB_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------tms570_DMA_LFSBOFFSET-------------------*/
/* field: LFSB - Channel causing LFS interrupt Group B. */
#define tms570_DMA_LFSBOFFSET_LFSB(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_LFSBOFFSET_LFSB_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_LFSBOFFSET_LFSB_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------tms570_DMA_HBCBOFFSET-------------------*/
/* field: HBCB - Channel causing HBC interrupt Group B. */
#define tms570_DMA_HBCBOFFSET_HBCB(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_HBCBOFFSET_HBCB_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_HBCBOFFSET_HBCB_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------tms570_DMA_BTCBOFFSET-------------------*/
/* field: BTCB - interrupt for Group B if the corresponding interrupt enable is set. */
#define tms570_DMA_BTCBOFFSET_BTCB(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_BTCBOFFSET_BTCB_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_BTCBOFFSET_BTCB_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------tms570_DMA_BERBOFFSET-------------------*/
/* field: BERB - Channel causing BER interrupt Group B. */
#define tms570_DMA_BERBOFFSET_BERB(val) BSP_FLD32(val,0, 5)
#define tms570_DMA_BERBOFFSET_BERB_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_DMA_BERBOFFSET_BERB_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*----------------------tms570_DMA_PTCRL----------------------*/
/* field: PENDB - Transfers pending for Port B. This flag determines if transfers are ongoing on port B. */
#define tms570_DMA_PTCRL_PENDB BSP_FLD32(24)

/* field: BYB - Bypass FIFO B. */
#define tms570_DMA_PTCRL_BYB BSP_FLD32(18)

/* field: PSFRHQPB - Priority scheme fix or rotate for high priority queue of Port B. */
#define tms570_DMA_PTCRL_PSFRHQPB BSP_FLD32(17)

/* field: PSFRLQPB - Priority scheme fix or rotate for low priority queue of Port B. */
#define tms570_DMA_PTCRL_PSFRLQPB BSP_FLD32(16)


/*---------------------tms570_DMA_RTCTRL---------------------*/
/* field: RTC - RAM Test Control. */
#define tms570_DMA_RTCTRL_RTC BSP_FLD32(0)


/*----------------------tms570_DMA_DCTRL----------------------*/
/* field: CHNUM - Channel Number. */
#define tms570_DMA_DCTRL_CHNUM(val) BSP_FLD32(val,24, 28)
#define tms570_DMA_DCTRL_CHNUM_GET(reg) BSP_FLD32GET(reg,24, 28)
#define tms570_DMA_DCTRL_CHNUM_SET(reg,val) BSP_FLD32SET(reg, val,24, 28)

/* field: DMADBGS - DMA debug status. */
#define tms570_DMA_DCTRL_DMADBGS BSP_FLD32(16)

/* field: DBGEN - Debug Enable. */
#define tms570_DMA_DCTRL_DBGEN BSP_FLD32(0)


/*-----------------------tms570_DMA_WPR-----------------------*/
/* field: WP - Watch point. */
#define tms570_DMA_WPR_WP(val) BSP_FLD32(val,0, 31)
#define tms570_DMA_WPR_WP_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMA_WPR_WP_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------tms570_DMA_WMR-----------------------*/
/* field: WM - Watch mask. */
#define tms570_DMA_WMR_WM(val) BSP_FLD32(val,0, 31)
#define tms570_DMA_WMR_WM_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMA_WMR_WM_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_DMA_PBACSADDR--------------------*/
/* field: PBACSA - Port B Active Channel Source Address. */
#define tms570_DMA_PBACSADDR_PBACSA(val) BSP_FLD32(val,0, 31)
#define tms570_DMA_PBACSADDR_PBACSA_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMA_PBACSADDR_PBACSA_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_DMA_PBACDADDR--------------------*/
/* field: PBACDA - address of the active channel as broadcasted in Section 16.3.1.3 for Port B. */
#define tms570_DMA_PBACDADDR_PBACDA(val) BSP_FLD32(val,0, 31)
#define tms570_DMA_PBACDADDR_PBACDA_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMA_PBACDADDR_PBACDA_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_DMA_PBACTC---------------------*/
/* field: PBFTCOUNT - Port B active channel frame count. */
#define tms570_DMA_PBACTC_PBFTCOUNT(val) BSP_FLD32(val,16, 28)
#define tms570_DMA_PBACTC_PBFTCOUNT_GET(reg) BSP_FLD32GET(reg,16, 28)
#define tms570_DMA_PBACTC_PBFTCOUNT_SET(reg,val) BSP_FLD32SET(reg, val,16, 28)

/* field: PBETCOUNT - Port B active channel element count. */
#define tms570_DMA_PBACTC_PBETCOUNT(val) BSP_FLD32(val,0, 12)
#define tms570_DMA_PBACTC_PBETCOUNT_GET(reg) BSP_FLD32GET(reg,0, 12)
#define tms570_DMA_PBACTC_PBETCOUNT_SET(reg,val) BSP_FLD32SET(reg, val,0, 12)


/*---------------------tms570_DMA_DMAPCR---------------------*/
/* field: ERRA - Error action. */
#define tms570_DMA_DMAPCR_ERRA BSP_FLD32(16)

/* field: TEST - When this bit is set, the parity bits are memory mapped to make them accessible by the CPU. */
#define tms570_DMA_DMAPCR_TEST BSP_FLD32(8)

/* field: PARITY_ENA - Parity error detection enable. */
#define tms570_DMA_DMAPCR_PARITY_ENA(val) BSP_FLD32(val,0, 3)
#define tms570_DMA_DMAPCR_PARITY_ENA_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_DMA_DMAPCR_PARITY_ENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------tms570_DMA_DMAPAR---------------------*/
/* field: EDFLAG - Parity Error Detection Flag. */
#define tms570_DMA_DMAPAR_EDFLAG BSP_FLD32(24)

/* field: ERRORADDRESS - Error address. These bits hold the address of the first parity error generated in the RAM. */
#define tms570_DMA_DMAPAR_ERRORADDRESS(val) BSP_FLD32(val,0, 11)
#define tms570_DMA_DMAPAR_ERRORADDRESS_GET(reg) BSP_FLD32GET(reg,0, 11)
#define tms570_DMA_DMAPAR_ERRORADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*--------------------tms570_DMA_DMAMPCTRL--------------------*/
/* field: INT3AB - Interrupt assignment of region 3 to Group A or Group B. */
#define tms570_DMA_DMAMPCTRL_INT3AB BSP_FLD32(28)

/* field: INT3ENA - Interrupt enable of region 3. */
#define tms570_DMA_DMAMPCTRL_INT3ENA BSP_FLD32(27)

/* field: REG3AP - Region 3 access permission. */
#define tms570_DMA_DMAMPCTRL_REG3AP(val) BSP_FLD32(val,25, 26)
#define tms570_DMA_DMAMPCTRL_REG3AP_GET(reg) BSP_FLD32GET(reg,25, 26)
#define tms570_DMA_DMAMPCTRL_REG3AP_SET(reg,val) BSP_FLD32SET(reg, val,25, 26)

/* field: REG3ENA - Region 3 enable. */
#define tms570_DMA_DMAMPCTRL_REG3ENA BSP_FLD32(24)

/* field: INT2AB - Interrupt assignment of region 2 to Group A or Group B. */
#define tms570_DMA_DMAMPCTRL_INT2AB BSP_FLD32(20)

/* field: INT2ENA - Interrupt enable of region 2. */
#define tms570_DMA_DMAMPCTRL_INT2ENA BSP_FLD32(19)

/* field: REG2AP - Region 2 access permission. These bits determine the access permission for region 2. */
#define tms570_DMA_DMAMPCTRL_REG2AP(val) BSP_FLD32(val,17, 18)
#define tms570_DMA_DMAMPCTRL_REG2AP_GET(reg) BSP_FLD32GET(reg,17, 18)
#define tms570_DMA_DMAMPCTRL_REG2AP_SET(reg,val) BSP_FLD32SET(reg, val,17, 18)

/* field: REG2ENA - Region 2 enable. */
#define tms570_DMA_DMAMPCTRL_REG2ENA BSP_FLD32(16)

/* field: INT1AB - Interrupt assignment of region 1 to Group A or Group B. */
#define tms570_DMA_DMAMPCTRL_INT1AB BSP_FLD32(12)

/* field: INT1ENA - Interrupt enable of region 1. */
#define tms570_DMA_DMAMPCTRL_INT1ENA BSP_FLD32(11)

/* field: REG1AP - Region 1 access permission. */
#define tms570_DMA_DMAMPCTRL_REG1AP(val) BSP_FLD32(val,9, 10)
#define tms570_DMA_DMAMPCTRL_REG1AP_GET(reg) BSP_FLD32GET(reg,9, 10)
#define tms570_DMA_DMAMPCTRL_REG1AP_SET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: REG1ENA - Region 1 enable. */
#define tms570_DMA_DMAMPCTRL_REG1ENA BSP_FLD32(8)

/* field: INT0AB - Interrupt assignment of region 0 to Group A or Group B. */
#define tms570_DMA_DMAMPCTRL_INT0AB BSP_FLD32(4)

/* field: INT0ENA - Interrupt enable of region 0. */
#define tms570_DMA_DMAMPCTRL_INT0ENA BSP_FLD32(3)

/* field: REG0AP - Region 0 access permission. These bits determine the access permission for region 0. */
#define tms570_DMA_DMAMPCTRL_REG0AP(val) BSP_FLD32(val,1, 2)
#define tms570_DMA_DMAMPCTRL_REG0AP_GET(reg) BSP_FLD32GET(reg,1, 2)
#define tms570_DMA_DMAMPCTRL_REG0AP_SET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: REG0ENA - Region 0 enable. */
#define tms570_DMA_DMAMPCTRL_REG0ENA BSP_FLD32(0)


/*---------------------tms570_DMA_DMAMPST---------------------*/
/* field: REG3FT - Region 3 fault. */
#define tms570_DMA_DMAMPST_REG3FT BSP_FLD32(24)

/* field: REG2FT - Region 2 fault. */
#define tms570_DMA_DMAMPST_REG2FT BSP_FLD32(16)

/* field: REG1FT - Region 1 fault. */
#define tms570_DMA_DMAMPST_REG1FT BSP_FLD32(8)

/* field: REG0FT - Region 0 fault. */
#define tms570_DMA_DMAMPST_REG0FT BSP_FLD32(0)


/*--------------------tms570_DMA_DMAMPROS--------------------*/
/* field: STARTADDRESS - Start Address defines the address at which the region begins. */
#define tms570_DMA_DMAMPROS_STARTADDRESS(val) BSP_FLD32(val,0, 31)
#define tms570_DMA_DMAMPROS_STARTADDRESS_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMA_DMAMPROS_STARTADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_DMA_DMAMPROE--------------------*/
/* field: ENDADDRESS - End Address defines the address at which the region ends. */
#define tms570_DMA_DMAMPROE_ENDADDRESS(val) BSP_FLD32(val,0, 31)
#define tms570_DMA_DMAMPROE_ENDADDRESS_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMA_DMAMPROE_ENDADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_DMA_DMAMPR1S--------------------*/
/* field: STARTADDRESS - Start Address defines the address at which the region begins. */
#define tms570_DMA_DMAMPR1S_STARTADDRESS(val) BSP_FLD32(val,0, 31)
#define tms570_DMA_DMAMPR1S_STARTADDRESS_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMA_DMAMPR1S_STARTADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_DMA_DMAMPR1E--------------------*/
/* field: ENDADDRESS - End Address defines the address at which the region ends. */
#define tms570_DMA_DMAMPR1E_ENDADDRESS(val) BSP_FLD32(val,0, 31)
#define tms570_DMA_DMAMPR1E_ENDADDRESS_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMA_DMAMPR1E_ENDADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_DMA_DMAMPR2S--------------------*/
/* field: STARTADDRESS - Start Address defines the address at which the region begins. */
#define tms570_DMA_DMAMPR2S_STARTADDRESS(val) BSP_FLD32(val,0, 31)
#define tms570_DMA_DMAMPR2S_STARTADDRESS_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMA_DMAMPR2S_STARTADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_DMA_DMAMPR2E--------------------*/
/* field: ENDADDRESS - End Address defines the address at which the region ends. */
#define tms570_DMA_DMAMPR2E_ENDADDRESS(val) BSP_FLD32(val,0, 31)
#define tms570_DMA_DMAMPR2E_ENDADDRESS_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMA_DMAMPR2E_ENDADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_DMA_DMAMPR3S--------------------*/
/* field: STARTADDRESS - Start Address defines the address at which the region begins. */
#define tms570_DMA_DMAMPR3S_STARTADDRESS(val) BSP_FLD32(val,0, 31)
#define tms570_DMA_DMAMPR3S_STARTADDRESS_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMA_DMAMPR3S_STARTADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_DMA_DMAMPR3E--------------------*/
/* field: ENDADDRESS - End Address defines the address at which the region ends. */
#define tms570_DMA_DMAMPR3E_ENDADDRESS(val) BSP_FLD32(val,0, 31)
#define tms570_DMA_DMAMPR3E_ENDADDRESS_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_DMA_DMAMPR3E_ENDADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)



#endif /* LIBBSP_ARM_tms570_DMA.H */