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
#ifndef LIBBSP_ARM_tms570_CPMP.H
#define LIBBSP_ARM_tms570_CPMP.H

#include <bsp/utility.h>

typedef struct{
  uint32_t ISADDR;            /*Initial Source Address Register*/
  uint32_t IDADDR;            /*Initial Destination Address Register*/
  uint32_t ITCOUNT;           /*Initial Transfer Count Register*/
  uint8_t reserved1 [4];
  uint32_t CHCTRL;            /*Channel Control Register*/
  uint32_t EIOFF;             /*Element Index Offset Register*/
  uint32_t FIOFF;             /*Frame Index Offset Register*/
  uint8_t reserved2 [2020];
  uint32_t CSADDR;            /*Current Source Address Register*/
  uint32_t CDADDR;            /*Current Destination Address Register*/
  uint32_t CTCOUNT;           /*Current Transfer Count Register*/
} CPMP_struct;

/*---------------------tms570_CPMP_ISADDR---------------------*/
/* field: ISADDR - Initial source address. These bits give the absolute 32-bit source address (physical). */
#define tms570_CPMP_ISADDR_ISADDR(val) BSP_FLD32(val,0, 31)
#define tms570_CPMP_ISADDR_ISADDR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_CPMP_ISADDR_ISADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_CPMP_IDADDR---------------------*/
/* field: IDADDR - Initial destination address. These bits give the absolute 32-bit destination address (physical). */
#define tms570_CPMP_IDADDR_IDADDR(val) BSP_FLD32(val,0, 31)
#define tms570_CPMP_IDADDR_IDADDR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_CPMP_IDADDR_IDADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_CPMP_ITCOUNT--------------------*/
/* field: IFTCOUNT - Initial frame transfer count. These bits define the number of frame transfers. */
#define tms570_CPMP_ITCOUNT_IFTCOUNT(val) BSP_FLD32(val,16, 28)
#define tms570_CPMP_ITCOUNT_IFTCOUNT_GET(reg) BSP_FLD32GET(reg,16, 28)
#define tms570_CPMP_ITCOUNT_IFTCOUNT_SET(reg,val) BSP_FLD32SET(reg, val,16, 28)

/* field: IETCOUNT - Initial element transfer count. These bits define the number of element transfers. */
#define tms570_CPMP_ITCOUNT_IETCOUNT(val) BSP_FLD32(val,0, 12)
#define tms570_CPMP_ITCOUNT_IETCOUNT_GET(reg) BSP_FLD32GET(reg,0, 12)
#define tms570_CPMP_ITCOUNT_IETCOUNT_SET(reg,val) BSP_FLD32SET(reg, val,0, 12)


/*---------------------tms570_CPMP_CHCTRL---------------------*/
/* field: CHAIN - Next channel to be triggered. */
#define tms570_CPMP_CHCTRL_CHAIN(val) BSP_FLD32(val,16, 21)
#define tms570_CPMP_CHCTRL_CHAIN_GET(reg) BSP_FLD32GET(reg,16, 21)
#define tms570_CPMP_CHCTRL_CHAIN_SET(reg,val) BSP_FLD32SET(reg, val,16, 21)

/* field: RES - Read element size. */
#define tms570_CPMP_CHCTRL_RES(val) BSP_FLD32(val,14, 15)
#define tms570_CPMP_CHCTRL_RES_GET(reg) BSP_FLD32GET(reg,14, 15)
#define tms570_CPMP_CHCTRL_RES_SET(reg,val) BSP_FLD32SET(reg, val,14, 15)

/* field: WES - Write element size. */
#define tms570_CPMP_CHCTRL_WES(val) BSP_FLD32(val,12, 13)
#define tms570_CPMP_CHCTRL_WES_GET(reg) BSP_FLD32GET(reg,12, 13)
#define tms570_CPMP_CHCTRL_WES_SET(reg,val) BSP_FLD32SET(reg, val,12, 13)

/* field: TTYPE - Transfer type. */
#define tms570_CPMP_CHCTRL_TTYPE BSP_FLD32(8)

/* field: ADDMR - Addressing mode read. */
#define tms570_CPMP_CHCTRL_ADDMR(val) BSP_FLD32(val,3, 4)
#define tms570_CPMP_CHCTRL_ADDMR_GET(reg) BSP_FLD32GET(reg,3, 4)
#define tms570_CPMP_CHCTRL_ADDMR_SET(reg,val) BSP_FLD32SET(reg, val,3, 4)

/* field: ADDMW - Addressing mode write. */
#define tms570_CPMP_CHCTRL_ADDMW(val) BSP_FLD32(val,1, 2)
#define tms570_CPMP_CHCTRL_ADDMW_GET(reg) BSP_FLD32GET(reg,1, 2)
#define tms570_CPMP_CHCTRL_ADDMW_SET(reg,val) BSP_FLD32SET(reg, val,1, 2)

/* field: AIM - Auto-initiation mode. */
#define tms570_CPMP_CHCTRL_AIM BSP_FLD32(0)


/*---------------------tms570_CPMP_EIOFF---------------------*/
/* field: EIDXD - Destination address element index. */
#define tms570_CPMP_EIOFF_EIDXD(val) BSP_FLD32(val,16, 28)
#define tms570_CPMP_EIOFF_EIDXD_GET(reg) BSP_FLD32GET(reg,16, 28)
#define tms570_CPMP_EIOFF_EIDXD_SET(reg,val) BSP_FLD32SET(reg, val,16, 28)

/* field: EIDXS - Source address element index. */
#define tms570_CPMP_EIOFF_EIDXS(val) BSP_FLD32(val,0, 12)
#define tms570_CPMP_EIOFF_EIDXS_GET(reg) BSP_FLD32GET(reg,0, 12)
#define tms570_CPMP_EIOFF_EIDXS_SET(reg,val) BSP_FLD32SET(reg, val,0, 12)


/*---------------------tms570_CPMP_FIOFF---------------------*/
/* field: FIDXD - Destination address frame index. */
#define tms570_CPMP_FIOFF_FIDXD(val) BSP_FLD32(val,16, 28)
#define tms570_CPMP_FIOFF_FIDXD_GET(reg) BSP_FLD32GET(reg,16, 28)
#define tms570_CPMP_FIOFF_FIDXD_SET(reg,val) BSP_FLD32SET(reg, val,16, 28)

/* field: FIDXS - Source address frame index. */
#define tms570_CPMP_FIOFF_FIDXS(val) BSP_FLD32(val,0, 12)
#define tms570_CPMP_FIOFF_FIDXS_GET(reg) BSP_FLD32GET(reg,0, 12)
#define tms570_CPMP_FIOFF_FIDXS_SET(reg,val) BSP_FLD32SET(reg, val,0, 12)


/*---------------------tms570_CPMP_CSADDR---------------------*/
/* field: CSADDR - Current source address. */
#define tms570_CPMP_CSADDR_CSADDR(val) BSP_FLD32(val,0, 31)
#define tms570_CPMP_CSADDR_CSADDR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_CPMP_CSADDR_CSADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------tms570_CPMP_CDADDR---------------------*/
/* field: CDADDR - Current destination address. */
#define tms570_CPMP_CDADDR_CDADDR(val) BSP_FLD32(val,0, 31)
#define tms570_CPMP_CDADDR_CDADDR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define tms570_CPMP_CDADDR_CDADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------tms570_CPMP_CTCOUNT--------------------*/
/* field: CFTCOUNT - Current frame transfer count. Returned the current remaining frame counts. */
#define tms570_CPMP_CTCOUNT_CFTCOUNT(val) BSP_FLD32(val,16, 28)
#define tms570_CPMP_CTCOUNT_CFTCOUNT_GET(reg) BSP_FLD32GET(reg,16, 28)
#define tms570_CPMP_CTCOUNT_CFTCOUNT_SET(reg,val) BSP_FLD32SET(reg, val,16, 28)

/* field: CETCOUNT - Current element transfer count. These bits return the current remaining element counts. */
#define tms570_CPMP_CTCOUNT_CETCOUNT(val) BSP_FLD32(val,0, 12)
#define tms570_CPMP_CTCOUNT_CETCOUNT_GET(reg) BSP_FLD32GET(reg,0, 12)
#define tms570_CPMP_CTCOUNT_CETCOUNT_SET(reg,val) BSP_FLD32SET(reg, val,0, 12)



#endif /* LIBBSP_ARM_tms570_CPMP.H */
