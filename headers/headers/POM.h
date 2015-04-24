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
#ifndef LIBBSP_ARM_tms570_POM.H
#define LIBBSP_ARM_tms570_POM.H

#include <bsp/utility.h>

typedef struct{
  uint32_t POMGLBCTRL;        /*POM Global Control Register*/
  uint32_t POMREV;            /*POM Revision ID*/
  uint32_t POMCLKCTRL;        /*POM Clock Gate Control Register*/
  uint32_t POMFLG;            /*POM Status Register*/
  uint8_t reserved1 [496];
  uint32_t POMPROGSTART0;     /*POM Program Region Start Address Register 0*/
  uint32_t POMOVLSTART0;      /*POM Overlay Region Start Address Register 0*/
  uint32_t POMREGSIZE0;       /*POM Region Size Register 0*/
  uint8_t reserved2 [4];
  uint32_t POMPROGSTART1;     /*POM Program Region Start Address Register 1*/
  uint32_t POMOVLSTART1;      /*POM Overlay Region Start Address Register 1*/
  uint32_t POMREGSIZE1;       /*POM Region Size Register 1*/
  uint8_t reserved3 [4];
  uint32_t POMPROGSTART2;     /*POM Program Region Start Address Register 2*/
  uint32_t POMOVLSTART2;      /*POM Overlay Region Start Address Register 2*/
  uint32_t POMREGSIZE2;       /*POM Region Size Register 2*/
  uint8_t reserved4 [4];
  uint32_t POMPROGSTART3;     /*POM Program Region Start Address Register 3*/
  uint32_t POMOVLSTART3;      /*POM Overlay Region Start Address Register 3*/
  uint32_t POMREGSIZE3;       /*POM Region Size Register 3*/
  uint8_t reserved5 [4];
  uint32_t POMPROGSTART4;     /*POM Program Region Start Address Register 4*/
  uint32_t POMOVLSTART4;      /*POM Overlay Region Start Address Register 4*/
  uint32_t POMREGSIZE4;       /*POM Region Size Register 4*/
  uint8_t reserved6 [4];
  uint32_t POMPROGSTART5;     /*POM Program Region Start Address Register 5*/
  uint32_t POMOVLSTART5;      /*POM Overlay Region Start Address Register 5*/
  uint32_t POMREGSIZE5;       /*POM Region Size Register 5*/
  uint8_t reserved7 [4];
  uint32_t POMPROGSTART6;     /*POM Program Region Start Address Register 6*/
  uint32_t POMOVLSTART6;      /*POM Overlay Region Start Address Register 6*/
  uint32_t POMREGSIZE6;       /*POM Region Size Register 6*/
  uint8_t reserved8 [4];
  uint32_t POMPROGSTART7;     /*POM Program Region Start Address Register 7*/
  uint32_t POMOVLSTART7;      /*POM Overlay Region Start Address Register 7*/
  uint32_t POMREGSIZE7;       /*POM Region Size Register 7*/
  uint8_t reserved9 [4];
  uint32_t POMPROGSTART8;     /*POM Program Region Start Address Register 8*/
  uint32_t POMOVLSTART8;      /*POM Overlay Region Start Address Register 8*/
  uint32_t POMREGSIZE8;       /*POM Region Size Register 8*/
  uint8_t reserved10 [4];
  uint32_t POMPROGSTART9;     /*POM Program Region Start Address Register 9*/
  uint32_t POMOVLSTART9;      /*POM Overlay Region Start Address Register 9*/
  uint32_t POMREGSIZE9;       /*POM Region Size Register 9*/
  uint8_t reserved11 [4];
  uint32_t POMPROGSTART10;    /*POM Program Region Start Address Register 10*/
  uint32_t POMOVLSTART10;     /*POM Overlay Region Start Address Register 10*/
  uint32_t POMREGSIZE10;      /*POM Region Size Register 10*/
  uint8_t reserved12 [4];
  uint32_t POMPROGSTART11;    /*POM Program Region Start Address Register 11*/
  uint32_t POMOVLSTART11;     /*POM Overlay Region Start Address Register 11*/
  uint32_t POMREGSIZE11;      /*POM Region Size Register 11*/
  uint8_t reserved13 [4];
  uint32_t POMPROGSTART12;    /*POM Program Region Start Address Register 12*/
  uint32_t POMOVLSTART12;     /*POM Overlay Region Start Address Register 12*/
  uint32_t POMREGSIZE12;      /*POM Region Size Register 12*/
  uint8_t reserved14 [4];
  uint32_t POMPROGSTART13;    /*POM Program Region Start Address Register 13*/
  uint32_t POMOVLSTART13;     /*POM Overlay Region Start Address Register 13*/
  uint32_t POMREGSIZE13;      /*POM Region Size Register 13*/
  uint8_t reserved15 [4];
  uint32_t POMPROGSTART14;    /*POM Program Region Start Address Register 14*/
  uint32_t POMOVLSTART14;     /*POM Overlay Region Start Address Register 14*/
  uint32_t POMREGSIZE14;      /*POM Region Size Register 14*/
  uint8_t reserved16 [4];
  uint32_t POMPROGSTART15;    /*POM Program Region Start Address Register 15*/
  uint32_t POMOVLSTART15;     /*POM Overlay Region Start Address Register 15*/
  uint32_t POMREGSIZE15;      /*POM Region Size Register 15*/
  uint8_t reserved17 [4];
  uint32_t POMPROGSTART16;    /*POM Program Region Start Address Register 16*/
  uint32_t POMOVLSTART16;     /*POM Overlay Region Start Address Register 16*/
  uint32_t POMREGSIZE16;      /*POM Region Size Register 16*/
  uint8_t reserved18 [4];
  uint32_t POMPROGSTART17;    /*POM Program Region Start Address Register 17*/
  uint32_t POMOVLSTART17;     /*POM Overlay Region Start Address Register 17*/
  uint32_t POMREGSIZE17;      /*POM Region Size Register 17*/
  uint8_t reserved19 [4];
  uint32_t POMPROGSTART18;    /*POM Program Region Start Address Register 18*/
  uint32_t POMOVLSTART18;     /*POM Overlay Region Start Address Register 18*/
  uint32_t POMREGSIZE18;      /*POM Region Size Register 18*/
  uint8_t reserved20 [4];
  uint32_t POMPROGSTART19;    /*POM Program Region Start Address Register 19*/
  uint32_t POMOVLSTART19;     /*POM Overlay Region Start Address Register 19*/
  uint32_t POMREGSIZE19;      /*POM Region Size Register 19*/
  uint8_t reserved21 [4];
  uint32_t POMPROGSTART20;    /*POM Program Region Start Address Register 20*/
  uint32_t POMOVLSTART20;     /*POM Overlay Region Start Address Register 20*/
  uint32_t POMREGSIZE20;      /*POM Region Size Register 20*/
  uint8_t reserved22 [4];
  uint32_t POMPROGSTART21;    /*POM Program Region Start Address Register 21*/
  uint32_t POMOVLSTART21;     /*POM Overlay Region Start Address Register 21*/
  uint32_t POMREGSIZE21;      /*POM Region Size Register 21*/
  uint8_t reserved23 [4];
  uint32_t POMPROGSTART22;    /*POM Program Region Start Address Register 22*/
  uint32_t POMOVLSTART22;     /*POM Overlay Region Start Address Register 22*/
  uint32_t POMREGSIZE22;      /*POM Region Size Register 22*/
  uint8_t reserved24 [4];
  uint32_t POMPROGSTART23;    /*POM Program Region Start Address Register 23*/
  uint32_t POMOVLSTART23;     /*POM Overlay Region Start Address Register 23*/
  uint32_t POMREGSIZE23;      /*POM Region Size Register 23*/
  uint8_t reserved25 [4];
  uint32_t POMPROGSTART24;    /*POM Program Region Start Address Register 24*/
  uint32_t POMOVLSTART24;     /*POM Overlay Region Start Address Register 24*/
  uint32_t POMREGSIZE24;      /*POM Region Size Register 24*/
  uint8_t reserved26 [4];
  uint32_t POMPROGSTART25;    /*POM Program Region Start Address Register 25*/
  uint32_t POMOVLSTART25;     /*POM Overlay Region Start Address Register 25*/
  uint32_t POMREGSIZE25;      /*POM Region Size Register 25*/
  uint8_t reserved27 [4];
  uint32_t POMPROGSTART26;    /*POM Program Region Start Address Register 26*/
  uint32_t POMOVLSTART26;     /*POM Overlay Region Start Address Register 26*/
  uint32_t POMREGSIZE26;      /*POM Region Size Register 26*/
  uint8_t reserved28 [4];
  uint32_t POMPROGSTART27;    /*POM Program Region Start Address Register 27*/
  uint32_t POMOVLSTART27;     /*POM Overlay Region Start Address Register 27*/
  uint32_t POMREGSIZE27;      /*POM Region Size Register 27*/
  uint8_t reserved29 [4];
  uint32_t POMPROGSTART28;    /*POM Program Region Start Address Register 28*/
  uint32_t POMOVLSTART28;     /*POM Overlay Region Start Address Register 28*/
  uint32_t POMREGSIZE28;      /*POM Region Size Register 28*/
  uint8_t reserved30 [4];
  uint32_t POMPROGSTART29;    /*POM Program Region Start Address Register 29*/
  uint32_t POMOVLSTART29;     /*POM Overlay Region Start Address Register 29*/
  uint32_t POMREGSIZE29;      /*POM Region Size Register 29*/
  uint8_t reserved31 [4];
  uint32_t POMPROGSTART30;    /*POM Program Region Start Address Register 30*/
  uint32_t POMOVLSTART30;     /*POM Overlay Region Start Address Register 30*/
  uint32_t POMREGSIZE30;      /*POM Region Size Register 30*/
  uint8_t reserved32 [4];
  uint32_t POMPROGSTART31;    /*POM Program Region Start Address Register 31*/
  uint32_t POMOVLSTART31;     /*POM Overlay Region Start Address Register 31*/
  uint32_t POMREGSIZE31;      /*POM Region Size Register 31*/
  uint8_t reserved33 [2820];
  uint32_t POMITCTRL;         /*POM Integration Control Register*/
  uint8_t reserved34 [156];
  uint32_t POMCLAIMSET;       /*POM Claim Set Register*/
  uint32_t POMCLAIMCLR;       /*POM Claim Clear Register*/
  uint8_t reserved35 [8];
  uint32_t POMLOCKACCESS;     /*POM Lock Access Register*/
  uint32_t POMLOCKSTATUS;     /*POM Lock Status Register*/
  uint32_t POMAUTHSTATUS;     /*POM Authentication Status Register*/
  uint8_t reserved36 [12];
  uint32_t POMDEVID;          /*POM Device ID Register*/
  uint32_t POMDEVTYPE;        /*POM Device Type Register*/
  uint32_t POMPERIPHERALID4;  /*POM Peripheral ID 4 Register*/
  uint32_t POMPERIPHERALID5;  /*POM Peripheral ID 5 Register*/
  uint32_t POMPERIPHERALID6;  /*POM Peripheral ID 6 Register*/
  uint32_t POMPERIPHERALID7;  /*POM Peripheral ID 7 Register*/
  uint32_t POMPERIPHERALID0;  /*POM Peripheral ID 0 Register*/
  uint32_t POMPERIPHERALID1;  /*POM Peripheral ID 1 Register*/
  uint32_t POMPERIPHERALID2;  /*POM Peripheral ID 2 Register*/
  uint32_t POMPERIPHERALID3;  /*POM Peripheral ID 3 Register*/
  uint32_t POMCOMPONENTID0;   /*POM Component ID 0 Register*/
  uint32_t POMCOMPONENTID1;   /*POM Component ID 1 Register*/
  uint32_t POMCOMPONENTID2;   /*POM Component ID 2 Register*/
  uint32_t POMCOMPONENTID3;   /*POM Component ID 3 Register*/
} POM_struct;

/*-------------------tms570_POM_POMGLBCTRL-------------------*/
/* field: OTADDR - Overlay target Address. */
#define tms570_POM_POMGLBCTRL_OTADDR(val) BSP_FLD32(val,23, 31)
#define tms570_POM_POMGLBCTRL_OTADDR_GET(reg) BSP_FLD32GET(reg,23, 31)
#define tms570_POM_POMGLBCTRL_OTADDR_SET(reg,val) BSP_FLD32SET(reg, val,23, 31)

/* field: ETO - Enable Timeout. Refer to Section 18.2.2 for more details on the timeout error. */
#define tms570_POM_POMGLBCTRL_ETO(val) BSP_FLD32(val,8, 11)
#define tms570_POM_POMGLBCTRL_ETO_GET(reg) BSP_FLD32GET(reg,8, 11)
#define tms570_POM_POMGLBCTRL_ETO_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)

/* field: ON/OFF - Turn functionality of POM on or off. */
#define tms570_POM_POMGLBCTRL_ON/OFF(val) BSP_FLD32(val,0, 3)
#define tms570_POM_POMGLBCTRL_ON/OFF_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_POM_POMGLBCTRL_ON/OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------tms570_POM_POMREV---------------------*/
/* field: SCHEME - Used to distinguish between different ID schemes. */
#define tms570_POM_POMREV_SCHEME(val) BSP_FLD32(val,30, 31)
#define tms570_POM_POMREV_SCHEME_GET(reg) BSP_FLD32GET(reg,30, 31)
#define tms570_POM_POMREV_SCHEME_SET(reg,val) BSP_FLD32SET(reg, val,30, 31)

/* field: FUNC - Indicates the SW compatible module family */
#define tms570_POM_POMREV_FUNC(val) BSP_FLD32(val,16, 27)
#define tms570_POM_POMREV_FUNC_GET(reg) BSP_FLD32GET(reg,16, 27)
#define tms570_POM_POMREV_FUNC_SET(reg,val) BSP_FLD32SET(reg, val,16, 27)

/* field: RTL - RTL version number */
#define tms570_POM_POMREV_RTL(val) BSP_FLD32(val,11, 15)
#define tms570_POM_POMREV_RTL_GET(reg) BSP_FLD32GET(reg,11, 15)
#define tms570_POM_POMREV_RTL_SET(reg,val) BSP_FLD32SET(reg, val,11, 15)

/* field: MAJOR - Major revision number */
#define tms570_POM_POMREV_MAJOR(val) BSP_FLD32(val,8, 10)
#define tms570_POM_POMREV_MAJOR_GET(reg) BSP_FLD32GET(reg,8, 10)
#define tms570_POM_POMREV_MAJOR_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: CUSTOM - Indicates a device specific implementation */
#define tms570_POM_POMREV_CUSTOM(val) BSP_FLD32(val,6, 7)
#define tms570_POM_POMREV_CUSTOM_GET(reg) BSP_FLD32GET(reg,6, 7)
#define tms570_POM_POMREV_CUSTOM_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: 5-0 - MINOR 8h Minor revision number */
#define tms570_POM_POMREV_5-0(val) BSP_FLD32(val,0, 5)
#define tms570_POM_POMREV_5-0_GET(reg) BSP_FLD32GET(reg,0, 5)
#define tms570_POM_POMREV_5-0_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------tms570_POM_POMCLKCTRL-------------------*/
/* field: CLK_GATE_OFF - Do not modify this bit. Leave it in its reset state. */
#define tms570_POM_POMCLKCTRL_CLK_GATE_OFF BSP_FLD32(0)


/*---------------------tms570_POM_POMFLG---------------------*/
/* field: TO - Timeout. */
#define tms570_POM_POMFLG_TO BSP_FLD32(0)


/*------------------tms570_POM_POMPROGSTART0------------------*/
/* field: STARTADDRESS - Defines the start address of the program memory region. */
#define tms570_POM_POMPROGSTART0_STARTADDRESS(val) BSP_FLD32(val,0, 22)
#define tms570_POM_POMPROGSTART0_STARTADDRESS_GET(reg) BSP_FLD32GET(reg,0, 22)
#define tms570_POM_POMPROGSTART0_STARTADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,0, 22)


/*------------------tms570_POM_POMOVLSTART0------------------*/
/* field: STARTADDRESS - Defines the start address of the overlay memory region. */
#define tms570_POM_POMOVLSTART0_STARTADDRESS(val) BSP_FLD32(val,0, 22)
#define tms570_POM_POMOVLSTART0_STARTADDRESS_GET(reg) BSP_FLD32GET(reg,0, 22)
#define tms570_POM_POMOVLSTART0_STARTADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,0, 22)


/*-------------------tms570_POM_POMREGSIZE0-------------------*/
/* field: SIZE - Region size */
#define tms570_POM_POMREGSIZE0_SIZE(val) BSP_FLD32(val,0, 3)
#define tms570_POM_POMREGSIZE0_SIZE_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_POM_POMREGSIZE0_SIZE_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*--------------------tms570_POM_POMITCTRL--------------------*/
/* field: Reserved - Read returns 0. Writes have no effect. */
#define tms570_POM_POMITCTRL_Reserved(val) BSP_FLD32(val,0, 31)
#define tms570_POM_POMITCTRL_Reserved_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_POM_POMITCTRL_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_POM_POMCLAIMSET-------------------*/
/* field: SET1 - The module is claimed */
#define tms570_POM_POMCLAIMSET_SET1 BSP_FLD32(1)

/* field: SET0 - The module is claimed */
#define tms570_POM_POMCLAIMSET_SET0 BSP_FLD32(0)


/*-------------------tms570_POM_POMCLAIMCLR-------------------*/
/* field: CLR1 - The module is claimed */
#define tms570_POM_POMCLAIMCLR_CLR1 BSP_FLD32(1)

/* field: CLR0 - The module is claimed */
#define tms570_POM_POMCLAIMCLR_CLR0 BSP_FLD32(0)


/*------------------tms570_POM_POMLOCKACCESS------------------*/
/* field: Reserved - Read returns 0. Writes have no effect. */
#define tms570_POM_POMLOCKACCESS_Reserved(val) BSP_FLD32(val,0, 31)
#define tms570_POM_POMLOCKACCESS_Reserved_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_POM_POMLOCKACCESS_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_POM_POMLOCKSTATUS------------------*/
/* field: Reserved - Read returns 0. Writes have no effect. */
#define tms570_POM_POMLOCKSTATUS_Reserved(val) BSP_FLD32(val,0, 31)
#define tms570_POM_POMLOCKSTATUS_Reserved_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_POM_POMLOCKSTATUS_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*------------------tms570_POM_POMAUTHSTATUS------------------*/
/* field: Reserved - Read returns 0. Writes have no effect. */
#define tms570_POM_POMAUTHSTATUS_Reserved(val) BSP_FLD32(val,0, 31)
#define tms570_POM_POMAUTHSTATUS_Reserved_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_POM_POMAUTHSTATUS_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_POM_POMDEVID--------------------*/
/* field: Reserved - Read returns 0. Writes have no effect. */
#define tms570_POM_POMDEVID_Reserved(val) BSP_FLD32(val,0, 31)
#define tms570_POM_POMDEVID_Reserved_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_POM_POMDEVID_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-------------------tms570_POM_POMDEVTYPE-------------------*/
/* field: Sub_Type - Other */
#define tms570_POM_POMDEVTYPE_Sub_Type(val) BSP_FLD32(val,4, 7)
#define tms570_POM_POMDEVTYPE_Sub_Type_GET(reg) BSP_FLD32GET(reg,4, 7)
#define tms570_POM_POMDEVTYPE_Sub_Type_SET(reg,val) BSP_FLD32SET(reg, val,4, 7)

/* field: Major_Type - Debug Control */
#define tms570_POM_POMDEVTYPE_Major_Type(val) BSP_FLD32(val,0, 3)
#define tms570_POM_POMDEVTYPE_Major_Type_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_POM_POMDEVTYPE_Major_Type_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*----------------tms570_POM_POMPERIPHERALID4----------------*/
/* field: 4KB_Count - Only 4KB implemented */
#define tms570_POM_POMPERIPHERALID4_4KB_Count(val) BSP_FLD32(val,4, 7)
#define tms570_POM_POMPERIPHERALID4_4KB_Count_GET(reg) BSP_FLD32GET(reg,4, 7)
#define tms570_POM_POMPERIPHERALID4_4KB_Count_SET(reg,val) BSP_FLD32SET(reg, val,4, 7)

/* field: JEP_Continuation - JEP106 Code */
#define tms570_POM_POMPERIPHERALID4_JEP_Continuation(val) BSP_FLD32(val,0, 3)
#define tms570_POM_POMPERIPHERALID4_JEP_Continuation_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_POM_POMPERIPHERALID4_JEP_Continuation_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*----------------tms570_POM_POMPERIPHERALID5----------------*/
/* field: Reserved - Read returns 0. Writes have no effect. */
#define tms570_POM_POMPERIPHERALID5_Reserved(val) BSP_FLD32(val,0, 31)
#define tms570_POM_POMPERIPHERALID5_Reserved_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_POM_POMPERIPHERALID5_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------tms570_POM_POMPERIPHERALID6----------------*/
/* field: Reserved - Read returns 0. Writes have no effect. */
#define tms570_POM_POMPERIPHERALID6_Reserved(val) BSP_FLD32(val,0, 31)
#define tms570_POM_POMPERIPHERALID6_Reserved_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_POM_POMPERIPHERALID6_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------tms570_POM_POMPERIPHERALID7----------------*/
/* field: Reserved - Read returns 0. Writes have no effect. */
#define tms570_POM_POMPERIPHERALID7_Reserved(val) BSP_FLD32(val,0, 31)
#define tms570_POM_POMPERIPHERALID7_Reserved_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_POM_POMPERIPHERALID7_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------tms570_POM_POMPERIPHERALID0----------------*/
/* field: Part_Number - Reads 0, since POMREV defines the module */
#define tms570_POM_POMPERIPHERALID0_Part_Number(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMPERIPHERALID0_Part_Number_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMPERIPHERALID0_Part_Number_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------tms570_POM_POMPERIPHERALID1----------------*/
/* field: JEP106_Identity - Part of TI JEDEC number */
#define tms570_POM_POMPERIPHERALID1_JEP106_Identity(val) BSP_FLD32(val,4, 7)
#define tms570_POM_POMPERIPHERALID1_JEP106_Identity_GET(reg) BSP_FLD32GET(reg,4, 7)
#define tms570_POM_POMPERIPHERALID1_JEP106_Identity_SET(reg,val) BSP_FLD32SET(reg, val,4, 7)

/* field: Part_Number - Reads 0, since POMREV defines the module */
#define tms570_POM_POMPERIPHERALID1_Part_Number(val) BSP_FLD32(val,0, 3)
#define tms570_POM_POMPERIPHERALID1_Part_Number_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_POM_POMPERIPHERALID1_Part_Number_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*----------------tms570_POM_POMPERIPHERALID2----------------*/
/* field: Revision - Reads 0, since POMREV defines the module */
#define tms570_POM_POMPERIPHERALID2_Revision(val) BSP_FLD32(val,4, 7)
#define tms570_POM_POMPERIPHERALID2_Revision_GET(reg) BSP_FLD32GET(reg,4, 7)
#define tms570_POM_POMPERIPHERALID2_Revision_SET(reg,val) BSP_FLD32SET(reg, val,4, 7)

/* field: JEDEC - Indicates JEDEC assigned value */
#define tms570_POM_POMPERIPHERALID2_JEDEC BSP_FLD32(3)

/* field: JEP106_Identity - JEDEC+JEP106 Identity Code (POMPERIPHERALID2)+JEP106 Identity Code */
#define tms570_POM_POMPERIPHERALID2_JEP106_Identity(val) BSP_FLD32(val,0, 2)
#define tms570_POM_POMPERIPHERALID2_JEP106_Identity_GET(reg) BSP_FLD32GET(reg,0, 2)
#define tms570_POM_POMPERIPHERALID2_JEP106_Identity_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*----------------tms570_POM_POMPERIPHERALID3----------------*/
/* field: Reserved - Read returns 0. Writes have no effect. */
#define tms570_POM_POMPERIPHERALID3_Reserved(val) BSP_FLD32(val,0, 31)
#define tms570_POM_POMPERIPHERALID3_Reserved_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_POM_POMPERIPHERALID3_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------tms570_POM_POMCOMPONENTID0-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID0_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID0_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID0_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID1-----------------*/
/* field: Component_Class - CoreSight Component */
#define tms570_POM_POMCOMPONENTID1_Component_Class(val) BSP_FLD32(val,4, 7)
#define tms570_POM_POMCOMPONENTID1_Component_Class_GET(reg) BSP_FLD32GET(reg,4, 7)
#define tms570_POM_POMCOMPONENTID1_Component_Class_SET(reg,val) BSP_FLD32SET(reg, val,4, 7)

/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID1_Preamble(val) BSP_FLD32(val,0, 3)
#define tms570_POM_POMCOMPONENTID1_Preamble_GET(reg) BSP_FLD32GET(reg,0, 3)
#define tms570_POM_POMCOMPONENTID1_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-----------------tms570_POM_POMCOMPONENTID2-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID2_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID2_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID2_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------tms570_POM_POMCOMPONENTID3-----------------*/
/* field: Preamble - Preamble */
#define tms570_POM_POMCOMPONENTID3_Preamble(val) BSP_FLD32(val,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_GET(reg) BSP_FLD32GET(reg,0, 7)
#define tms570_POM_POMCOMPONENTID3_Preamble_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)



#endif /* LIBBSP_ARM_tms570_POM.H */
