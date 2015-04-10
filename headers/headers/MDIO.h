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
#ifndef LIBBSP_ARM_tms570_MDIO.H
#define LIBBSP_ARM_tms570_MDIO.H

#include <bsp/utility.h>

typedef struct{
  uint32_t REVID;             /*MDIO Revision ID Register*/
  uint32_t CONTROL;           /*MDIO Control Register*/
  uint32_t ALIVE;             /*PHY Alive Status register*/
  uint32_t LINK;              /*PHY Link Status Register*/
  uint32_t LINKINTRAW;        /*MDIO Link Status Change Interrupt (Unmasked) Register*/
  uint32_t LINKINTMASKED;     /*MDIO Link Status Change Interrupt (Masked) Register*/
  uint8_t reserved1 [8];
  uint32_t USERINTRAW;        /*MDIO User Command Complete Interrupt (Unmasked) Register*/
  uint32_t USERINTMASKED;     /*MDIO User Command Complete Interrupt (Masked) Register*/
  uint32_t USERINTMASKSET;    /*MDIO User Command Complete Interrupt Mask Set Register*/
  uint32_t USERINTMASKCLEAR;  /*MDIO User Command Complete Interrupt Mask Clear Register*/
  uint8_t reserved2 [80];
  uint32_t USERACCESS0;       /*MDIO User Access Register 0*/
  uint32_t USERPHYSEL0;       /*MDIO User PHY Select Register 0*/
  uint32_t USERACCESS1;       /*MDIO User Access Register 1*/
  uint32_t USERPHYSEL1;       /*MDIO User PHY Select Register 1*/
} MDIO_struct;

/*---------------------tms570_MDIO_REVID---------------------*/
/* field: REV - Identifies the MDIO Module revision. */
#define tms570_MDIO_REVID_REV(val) BSP_FLD32(val,0, 31)
#define tms570_MDIO_REVID_REV_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_MDIO_REVID_REV_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_MDIO_CONTROL--------------------*/
/* field: IDLE - State machine IDLE status bit. */
#define tms570_MDIO_CONTROL_IDLE BSP_FLD32(31)

/* field: ENABLE - State machine enable control bit. */
#define tms570_MDIO_CONTROL_ENABLE BSP_FLD32(30)

/* field: HIGHEST_USER_CHANNEL - Highest user channel that is available in the module. It is currently set to 1. */
#define tms570_MDIO_CONTROL_HIGHEST_USER_CHANNEL(val) BSP_FLD32(val,24, 28)
#define tms570_MDIO_CONTROL_HIGHEST_USER_CHANNEL_GET(reg) BSP_FLD32GET(reg,24, 28)
#define tms570_MDIO_CONTROL_HIGHEST_USER_CHANNEL_SET(reg,val) BSP_FLD32SET(reg, val,24, 28)

/* field: PREAMBLE - Preamble disable */
#define tms570_MDIO_CONTROL_PREAMBLE BSP_FLD32(20)

/* field: FAULT - Fault indicator. */
#define tms570_MDIO_CONTROL_FAULT BSP_FLD32(19)

/* field: FAULTENB - Fault detect enable. */
#define tms570_MDIO_CONTROL_FAULTENB BSP_FLD32(18)

/* field: CLKDIV - Clock Divider bits. */
#define tms570_MDIO_CONTROL_CLKDIV(val) BSP_FLD32(val,0, 15)
#define tms570_MDIO_CONTROL_CLKDIV_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_MDIO_CONTROL_CLKDIV_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------tms570_MDIO_ALIVE---------------------*/
/* field: ALIVE - MDIO Alive bits. */
#define tms570_MDIO_ALIVE_ALIVE(val) BSP_FLD32(val,0, 31)
#define tms570_MDIO_ALIVE_ALIVE_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_MDIO_ALIVE_ALIVE_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------tms570_MDIO_LINK----------------------*/
/* field: LINK - MDIO Link state bits. This register is updated after a read of the generic status register of a PHY. */
#define tms570_MDIO_LINK_LINK(val) BSP_FLD32(val,0, 31)
#define tms570_MDIO_LINK_LINK_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_MDIO_LINK_LINK_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_MDIO_LINKINTRAW-------------------*/
/* field: USERPHY1 - MDIO Link change event, raw value. */
#define tms570_MDIO_LINKINTRAW_USERPHY1 BSP_FLD32(1)

/* field: USERPHY0 - MDIO Link change event, raw value. */
#define tms570_MDIO_LINKINTRAW_USERPHY0 BSP_FLD32(0)


/*-----------------tms570_MDIO_LINKINTMASKED-----------------*/
/* field: USERPHY1 - MDIO Link change interrupt, masked value. */
#define tms570_MDIO_LINKINTMASKED_USERPHY1 BSP_FLD32(1)

/* field: USERPHY0 - MDIO Link change interrupt, masked value. */
#define tms570_MDIO_LINKINTMASKED_USERPHY0 BSP_FLD32(0)


/*-------------------tms570_MDIO_USERINTRAW-------------------*/
/* field: USERACCESS1 - MDIO User command complete event bit. */
#define tms570_MDIO_USERINTRAW_USERACCESS1 BSP_FLD32(1)

/* field: USERACCESS0 - MDIO User command complete event bit. */
#define tms570_MDIO_USERINTRAW_USERACCESS0 BSP_FLD32(0)


/*-----------------tms570_MDIO_USERINTMASKED-----------------*/
/* field: USERACCESS1 - Masked value of MDIO User command complete interrupt. */
#define tms570_MDIO_USERINTMASKED_USERACCESS1 BSP_FLD32(1)

/* field: USERACCESS0 - Masked value of MDIO User command complete interrupt. */
#define tms570_MDIO_USERINTMASKED_USERACCESS0 BSP_FLD32(0)


/*-----------------tms570_MDIO_USERINTMASKSET-----------------*/
/* field: USERACCESS1 - MDIO user interrupt mask set for USERINTMASKED[1]. */
#define tms570_MDIO_USERINTMASKSET_USERACCESS1 BSP_FLD32(1)

/* field: USERACCESS0 - MDIO user interrupt mask set for USERINTMASKED[0]. */
#define tms570_MDIO_USERINTMASKSET_USERACCESS0 BSP_FLD32(0)


/*----------------tms570_MDIO_USERINTMASKCLEAR----------------*/
/* field: USERACCESS1 - MDIO user command complete interrupt mask clear for USERINTMASKED[1]. */
#define tms570_MDIO_USERINTMASKCLEAR_USERACCESS1 BSP_FLD32(1)

/* field: USERACCESS0 - MDIO user command complete interrupt mask clear for USERINTMASKED[0]. */
#define tms570_MDIO_USERINTMASKCLEAR_USERACCESS0 BSP_FLD32(0)


/*------------------tms570_MDIO_USERACCESS0------------------*/
/* field: GO - Go bit. */
#define tms570_MDIO_USERACCESS0_GO BSP_FLD32(31)

/* field: WRITE - Write enable bit. */
#define tms570_MDIO_USERACCESS0_WRITE BSP_FLD32(30)

/* field: ACK - Acknowledge bit. This bit is set if the PHY acknowledged the read transaction. */
#define tms570_MDIO_USERACCESS0_ACK BSP_FLD32(29)

/* field: REGADR - Register address bits. */
#define tms570_MDIO_USERACCESS0_REGADR(val) BSP_FLD32(val,21, 25)
#define tms570_MDIO_USERACCESS0_REGADR_GET(reg) BSP_FLD32GET(reg,21, 25)
#define tms570_MDIO_USERACCESS0_REGADR_SET(reg,val) BSP_FLD32SET(reg, val,21, 25)

/* field: PHYADR - PHY address bits. This field specifies the PHY to be accessed for this transaction. */
#define tms570_MDIO_USERACCESS0_PHYADR(val) BSP_FLD32(val,16, 20)
#define tms570_MDIO_USERACCESS0_PHYADR_GET(reg) BSP_FLD32GET(reg,16, 20)
#define tms570_MDIO_USERACCESS0_PHYADR_SET(reg,val) BSP_FLD32SET(reg, val,16, 20)

/* field: DATA - User data bits. */
#define tms570_MDIO_USERACCESS0_DATA(val) BSP_FLD32(val,0, 15)
#define tms570_MDIO_USERACCESS0_DATA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_MDIO_USERACCESS0_DATA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*------------------tms570_MDIO_USERPHYSEL0------------------*/
/* field: LINKSEL - Link status determination select bit. */
#define tms570_MDIO_USERPHYSEL0_LINKSEL BSP_FLD32(7)

/* field: LINKINTENB - Link change interrupt enable. */
#define tms570_MDIO_USERPHYSEL0_LINKINTENB BSP_FLD32(6)

/* field: PHYADRMON - PHY address whose link status is to be monitored. */
#define tms570_MDIO_USERPHYSEL0_PHYADRMON(val) BSP_FLD32(val,0, 4)
#define tms570_MDIO_USERPHYSEL0_PHYADRMON_GET(reg) BSP_FLD32GET(reg,0, 4)
#define tms570_MDIO_USERPHYSEL0_PHYADRMON_SET(reg,val) BSP_FLD32SET(reg, val,0, 4)


/*------------------tms570_MDIO_USERACCESS1------------------*/
/* field: GO - Go bit. */
#define tms570_MDIO_USERACCESS1_GO BSP_FLD32(31)

/* field: WRITE - Write enable bit. */
#define tms570_MDIO_USERACCESS1_WRITE BSP_FLD32(30)

/* field: ACK - Acknowledge bit. This bit is set if the PHY acknowledged the read transaction. */
#define tms570_MDIO_USERACCESS1_ACK BSP_FLD32(29)

/* field: REGADR - Register address bits. */
#define tms570_MDIO_USERACCESS1_REGADR(val) BSP_FLD32(val,21, 25)
#define tms570_MDIO_USERACCESS1_REGADR_GET(reg) BSP_FLD32GET(reg,21, 25)
#define tms570_MDIO_USERACCESS1_REGADR_SET(reg,val) BSP_FLD32SET(reg, val,21, 25)

/* field: PHYADR - PHY address bits. This field specifies the PHY to be accessed for this transaction. */
#define tms570_MDIO_USERACCESS1_PHYADR(val) BSP_FLD32(val,16, 20)
#define tms570_MDIO_USERACCESS1_PHYADR_GET(reg) BSP_FLD32GET(reg,16, 20)
#define tms570_MDIO_USERACCESS1_PHYADR_SET(reg,val) BSP_FLD32SET(reg, val,16, 20)

/* field: DATA - User data bits. */
#define tms570_MDIO_USERACCESS1_DATA(val) BSP_FLD32(val,0, 15)
#define tms570_MDIO_USERACCESS1_DATA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define tms570_MDIO_USERACCESS1_DATA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*------------------tms570_MDIO_USERPHYSEL1------------------*/
/* field: LINKSEL - Link status determination select bit. */
#define tms570_MDIO_USERPHYSEL1_LINKSEL BSP_FLD32(7)

/* field: LINKINTENB - Link change interrupt enable. */
#define tms570_MDIO_USERPHYSEL1_LINKINTENB BSP_FLD32(6)

/* field: PHYADRMON - PHY address whose link status is to be monitored. */
#define tms570_MDIO_USERPHYSEL1_PHYADRMON(val) BSP_FLD32(val,0, 4)
#define tms570_MDIO_USERPHYSEL1_PHYADRMON_GET(reg) BSP_FLD32GET(reg,0, 4)
#define tms570_MDIO_USERPHYSEL1_PHYADRMON_SET(reg,val) BSP_FLD32SET(reg, val,0, 4)



#endif /* LIBBSP_ARM_tms570_MDIO.H */
