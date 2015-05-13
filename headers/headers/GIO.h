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
#ifndef LIBBSP_ARM_tms570_GIO
#define LIBBSP_ARM_tms570_GIO

#include <bsp/utility.h>

typedef struct{
  uint32_t GIOGCR0;           /*GIO Global Control Register*/
  uint8_t reserved1 [4];
  uint32_t GIOINTDET;         /*GIO Interrupt Detect Register*/
  uint32_t GIOPOL;            /*GIO Interrupt Polarity Register*/
  uint32_t GIOENASET;         /*GIO Interrupt Enable Set Register*/
  uint32_t GIOENACLR;         /*GIO Interrupt Enable Clear Register*/
  uint32_t GIOLVLSET;         /*GIO Interrupt Priority Set Register*/
  uint32_t GIOLVLCLR;         /*GIO Interrupt Priority Clear Register*/
  uint32_t GIOFLG;            /*GIO Interrupt Flag Register*/
  uint32_t GIOOFF1;           /*GIO Offset 1 Register*/
  uint32_t GIOOFF2;           /*GIO Offset 2 Register*/
  uint32_t GIOEMU1;           /*GIO Emulation 1 Register*/
  uint32_t GIOEMU2;           /*GIO Emulation 2 Register*/
  uint32_t GIODIRA;           /*GIO Data Direction Register A*/
  uint32_t GIODINA;           /*GIO Data Input Register A*/
  uint32_t GIODOUTA;          /*GIO Data Output Register A*/
  uint32_t GIODSETA;          /*GIO Data Set Register A*/
  uint32_t GIODCLRA;          /*GIO Data Clear Register A*/
  uint32_t GIOPDRA;           /*GIO Open Drain Register A*/
  uint32_t GIOPULDISA;        /*GIO Pull Disable Register A*/
  uint32_t GIOPSLA;           /*GIO Pull Select Register A*/
  uint32_t GIODIRB;           /*GIO Data Direction Register B*/
  uint32_t GIODINB;           /*GIO Data Input Register B*/
  uint32_t GIODOUTB;          /*GIO Data Output Register B*/
  uint32_t GIODSETB;          /*GIO Data Set Register B*/
  uint32_t GIODCLRB;          /*GIO Data Clear Register B*/
  uint32_t GIOPDRB;           /*GIO Open Drain Register B*/
  uint32_t GIOPULDISB;        /*GIO Pull Disable Register B*/
  uint32_t GIOPSLB;           /*GIO Pull Select Register B*/
  uint32_t GIODIRC;           /*GIO Data Direction Register C*/
  uint32_t GIODINC;           /*GIO Data Input Register C*/
  uint32_t GIODOUTC;          /*GIO Data Output Register C*/
  uint32_t GIODSETC;          /*GIO Data Set Register C*/
  uint32_t GIODCLRC;          /*GIO Data Clear Register C*/
  uint32_t GIOPDRC;           /*GIO Open Drain Register C*/
  uint32_t GIOPULDISC;        /*GIO Pull Disable Register C*/
  uint32_t GIOPSLC;           /*GIO Pull Select Register C*/
  uint32_t GIODIRD;           /*GIO Data Direction Register D*/
  uint32_t GIODIND;           /*GIO Data Input Register D*/
  uint32_t GIODOUTD;          /*GIO Data Output Register D*/
  uint32_t GIODSETD;          /*GIO Data Set Register D*/
  uint32_t GIODCLRD;          /*GIO Data Clear Register D*/
  uint32_t GIOPDRD;           /*GIO Open Drain Register D*/
  uint32_t GIOPULDISD;        /*GIO Pull Disable Register D*/
  uint32_t GIOPSLD;           /*GIO Pull Select Register D*/
  uint32_t GIODIRE;           /*GIO Data Direction Register E*/
  uint32_t GIODINE;           /*GIO Data Input Register E*/
  uint32_t GIODOUTE;          /*GIO Data Output Register E*/
  uint32_t GIODSETE;          /*GIO Data Set Register E*/
  uint32_t GIODCLRE;          /*GIO Data Clear Register E*/
  uint32_t GIOPDRE;           /*GIO Open Drain Register E*/
  uint32_t GIOPULDISE;        /*GIO Pull Disable Register E*/
  uint32_t GIOPSLE;           /*GIO Pull Select Register E*/
  uint32_t GIODIRF;           /*GIO Data Direction Register F*/
  uint32_t GIODINF;           /*GIO Data Input Register F*/
  uint32_t GIODOUTF;          /*GIO Data Output Register F*/
  uint32_t GIODSETF;          /*GIO Data Set Register F*/
  uint32_t GIODCLRF;          /*GIO Data Clear Register F*/
  uint32_t GIOPDRF;           /*GIO Open Drain Register F*/
  uint32_t GIOPULDISF;        /*GIO Pull Disable Register F*/
  uint32_t GIOPSLF;           /*GIO Pull Select Register F*/
  uint32_t GIODIRG;           /*GIO Data Direction Register G*/
  uint32_t GIODING;           /*GIO Data Input Register G*/
  uint32_t GIODOUTG;          /*GIO Data Output Register G*/
  uint32_t GIODSETG;          /*GIO Data Set Register G*/
  uint32_t GIODCLRG;          /*GIO Data Clear Register G*/
  uint32_t GIOPDRG;           /*GIO Open Drain Register G*/
  uint32_t GIOPULDISG;        /*GIO Pull Disable Register G*/
  uint32_t GIOPSLG;           /*GIO Pull Select Register G*/
  uint32_t GIODIRH;           /*GIO Data Direction Register H*/
  uint32_t GIODINH;           /*GIO Data Input Register H*/
  uint32_t GIODOUTH;          /*GIO Data Output Register H*/
  uint32_t GIODSETH;          /*GIO Data Set Register H*/
  uint32_t GIODCLRH;          /*GIO Data Clear Register H*/
  uint32_t GIOPDRH;           /*GIO Open Drain Register H*/
  uint32_t GIOPULDISH;        /*GIO Pull Disable Register H*/
  uint32_t GIOPSLH;           /*GIO Pull Select Register H*/
} tms570_gio_t;

/*-----------------------TMS570_GIOGCR0-----------------------*/
/* field: RESET - GIO reset. */
#define TMS570_GIOGCR0_RESET BSP_FLD32(0)


/*----------------------TMS570_GIOINTDET----------------------*/
/* field: GIOINTDET_3 - Interrupt detection select for pins GIOD[7:0] */
#define TMS570_GIOINTDET_GIOINTDET_3(val) BSP_FLD32(val,24, 31)
#define TMS570_GIOINTDET_GIOINTDET_3_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_GIOINTDET_GIOINTDET_3_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: GIOINTDET_2 - Interrupt detection select for pins GIOC[7:0] */
#define TMS570_GIOINTDET_GIOINTDET_2(val) BSP_FLD32(val,16, 23)
#define TMS570_GIOINTDET_GIOINTDET_2_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_GIOINTDET_GIOINTDET_2_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: GIOINTDET_1 - Interrupt detection select for pins GIOB[7:0] */
#define TMS570_GIOINTDET_GIOINTDET_1(val) BSP_FLD32(val,8, 15)
#define TMS570_GIOINTDET_GIOINTDET_1_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_GIOINTDET_GIOINTDET_1_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: GIOINTDET_0 - Interrupt detection select for pins GIOA[7:0] */
#define TMS570_GIOINTDET_GIOINTDET_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOINTDET_GIOINTDET_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOINTDET_GIOINTDET_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPOL-----------------------*/
/* field: GIOPOL_3 - Interrupt polarity select for pins GIOD[7:0] */
#define TMS570_GIOPOL_GIOPOL_3(val) BSP_FLD32(val,24, 31)
#define TMS570_GIOPOL_GIOPOL_3_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_GIOPOL_GIOPOL_3_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: GIOPOL_2 - Interrupt polarity select for pins GIOC[7:0] */
#define TMS570_GIOPOL_GIOPOL_2(val) BSP_FLD32(val,16, 23)
#define TMS570_GIOPOL_GIOPOL_2_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_GIOPOL_GIOPOL_2_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: GIOPOL_1 - Interrupt polarity select for pins GIOB[7:0] */
#define TMS570_GIOPOL_GIOPOL_1(val) BSP_FLD32(val,8, 15)
#define TMS570_GIOPOL_GIOPOL_1_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_GIOPOL_GIOPOL_1_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: GIOPOL_0 - Interrupt polarity select for pins GIOA[7:0] */
#define TMS570_GIOPOL_GIOPOL_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPOL_GIOPOL_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPOL_GIOPOL_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIOENASET----------------------*/
/* field: GIOENASET_3 - nterrupt enable for pins GIOD[7:0] */
#define TMS570_GIOENASET_GIOENASET_3(val) BSP_FLD32(val,24, 31)
#define TMS570_GIOENASET_GIOENASET_3_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_GIOENASET_GIOENASET_3_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: GIOENASET_2 - Interrupt enable for pins GIOC[7:0] */
#define TMS570_GIOENASET_GIOENASET_2(val) BSP_FLD32(val,16, 23)
#define TMS570_GIOENASET_GIOENASET_2_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_GIOENASET_GIOENASET_2_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: GIOENASET_1 - Interrupt enable for pins GIOB[7:0] */
#define TMS570_GIOENASET_GIOENASET_1(val) BSP_FLD32(val,8, 15)
#define TMS570_GIOENASET_GIOENASET_1_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_GIOENASET_GIOENASET_1_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: GIOENASET_0 - Interrupt enable for pins GIOA[7:0] */
#define TMS570_GIOENASET_GIOENASET_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOENASET_GIOENASET_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOENASET_GIOENASET_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIOENACLR----------------------*/
/* field: GIOENACLR_3 - Interrupt enable for pins GIOD[7:0] */
#define TMS570_GIOENACLR_GIOENACLR_3(val) BSP_FLD32(val,24, 31)
#define TMS570_GIOENACLR_GIOENACLR_3_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_GIOENACLR_GIOENACLR_3_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: GIOENACLR_2 - Interrupt enable for pins GIOC[7:0] */
#define TMS570_GIOENACLR_GIOENACLR_2(val) BSP_FLD32(val,16, 23)
#define TMS570_GIOENACLR_GIOENACLR_2_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_GIOENACLR_GIOENACLR_2_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: GIOENACLR_1 - Interrupt enable for pins GIOB[7:0] */
#define TMS570_GIOENACLR_GIOENACLR_1(val) BSP_FLD32(val,8, 15)
#define TMS570_GIOENACLR_GIOENACLR_1_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_GIOENACLR_GIOENACLR_1_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: GIOENACLR_0 - Interrupt enable for pins GIOA[7:0] */
#define TMS570_GIOENACLR_GIOENACLR_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOENACLR_GIOENACLR_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOENACLR_GIOENACLR_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIOLVLSET----------------------*/
/* field: GIOLVLSET_3 - GIO high priority interrupt for pins GIOD[7:0]. */
#define TMS570_GIOLVLSET_GIOLVLSET_3(val) BSP_FLD32(val,24, 31)
#define TMS570_GIOLVLSET_GIOLVLSET_3_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_GIOLVLSET_GIOLVLSET_3_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: GIOLVLSET_2 - GIO high priority interrupt for pins GIOC[7:0]. */
#define TMS570_GIOLVLSET_GIOLVLSET_2(val) BSP_FLD32(val,16, 23)
#define TMS570_GIOLVLSET_GIOLVLSET_2_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_GIOLVLSET_GIOLVLSET_2_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: GIOLVLSET_1 - GIO high priority interrupt for pins GIOB[7:0]. */
#define TMS570_GIOLVLSET_GIOLVLSET_1(val) BSP_FLD32(val,8, 15)
#define TMS570_GIOLVLSET_GIOLVLSET_1_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_GIOLVLSET_GIOLVLSET_1_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: GIOLVLSET_0 - GIO high priority interrupt for pins GIOA[7:0]. */
#define TMS570_GIOLVLSET_GIOLVLSET_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOLVLSET_GIOLVLSET_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOLVLSET_GIOLVLSET_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIOLVLCLR----------------------*/
/* field: GIOLVLCLR_3 - GIO low priority interrupt for pins GIOD[7:0] */
#define TMS570_GIOLVLCLR_GIOLVLCLR_3(val) BSP_FLD32(val,24, 31)
#define TMS570_GIOLVLCLR_GIOLVLCLR_3_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_GIOLVLCLR_GIOLVLCLR_3_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: GIOLVLCLR_2 - GIO low priority interrupt for pins GIOC[7:0] */
#define TMS570_GIOLVLCLR_GIOLVLCLR_2(val) BSP_FLD32(val,16, 23)
#define TMS570_GIOLVLCLR_GIOLVLCLR_2_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_GIOLVLCLR_GIOLVLCLR_2_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: GIOLVLCLR_1 - GIO low priority interrupt for pins GIOB[7:0] */
#define TMS570_GIOLVLCLR_GIOLVLCLR_1(val) BSP_FLD32(val,8, 15)
#define TMS570_GIOLVLCLR_GIOLVLCLR_1_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_GIOLVLCLR_GIOLVLCLR_1_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: GIOLVLCLR_0 - GIO low priority interrupt for pins GIOA[7:0] */
#define TMS570_GIOLVLCLR_GIOLVLCLR_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOLVLCLR_GIOLVLCLR_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOLVLCLR_GIOLVLCLR_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOFLG-----------------------*/
/* field: GIOFLG_3 - GIO flag for pins GIOD[7:0]. */
#define TMS570_GIOFLG_GIOFLG_3(val) BSP_FLD32(val,24, 31)
#define TMS570_GIOFLG_GIOFLG_3_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_GIOFLG_GIOFLG_3_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: GIOFLG_2 - GIO flag for pins GIOC[7:0]. */
#define TMS570_GIOFLG_GIOFLG_2(val) BSP_FLD32(val,16, 23)
#define TMS570_GIOFLG_GIOFLG_2_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_GIOFLG_GIOFLG_2_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: GIOFLG_1 - GIO flag for pins GIOB[7:0]. */
#define TMS570_GIOFLG_GIOFLG_1(val) BSP_FLD32(val,8, 15)
#define TMS570_GIOFLG_GIOFLG_1_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_GIOFLG_GIOFLG_1_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: GIOFLG_0 - GIO flag for pins GIOA[7:0]. */
#define TMS570_GIOFLG_GIOFLG_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOFLG_GIOFLG_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOFLG_GIOFLG_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOOFF1-----------------------*/
/* field: GIOOFF1 - GIO offset 1. These bits index the currently pending high-priority interrupt. */
#define TMS570_GIOOFF1_GIOOFF1(val) BSP_FLD32(val,0, 5)
#define TMS570_GIOOFF1_GIOOFF1_GET(reg) BSP_FLD32GET(reg,0, 5)
#define TMS570_GIOOFF1_GIOOFF1_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-----------------------TMS570_GIOOFF2-----------------------*/
/* field: GIOOFF2 - GIO offset 2. These bits index the currently pending low-priority interrupt. */
#define TMS570_GIOOFF2_GIOOFF2(val) BSP_FLD32(val,0, 5)
#define TMS570_GIOOFF2_GIOOFF2_GET(reg) BSP_FLD32GET(reg,0, 5)
#define TMS570_GIOOFF2_GIOOFF2_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-----------------------TMS570_GIOEMU1-----------------------*/
/* field: GIOEMU1 - GIO offset emulation 1. These bits index the currently pending high-priority interrupt. */
#define TMS570_GIOEMU1_GIOEMU1(val) BSP_FLD32(val,0, 5)
#define TMS570_GIOEMU1_GIOEMU1_GET(reg) BSP_FLD32GET(reg,0, 5)
#define TMS570_GIOEMU1_GIOEMU1_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-----------------------TMS570_GIOEMU2-----------------------*/
/* field: GIOEMU2 - GIO offset emulation 2. These bits index the currently pending low-priority interrupt. */
#define TMS570_GIOEMU2_GIOEMU2(val) BSP_FLD32(val,0, 5)
#define TMS570_GIOEMU2_GIOEMU2_GET(reg) BSP_FLD32GET(reg,0, 5)
#define TMS570_GIOEMU2_GIOEMU2_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-----------------------TMS570_GIODIRA-----------------------*/
/* field: GIODIR_A - GIO data direction of port A, pins [7:0] */
#define TMS570_GIODIRA_GIODIR_A(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODIRA_GIODIR_A_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODIRA_GIODIR_A_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODINA-----------------------*/
/* field: GIODINA - GIO data input for port A, pins [7:0] */
#define TMS570_GIODINA_GIODINA(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODINA_GIODINA_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODINA_GIODINA_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODOUTA----------------------*/
/* field: GIODOUTA - IO data output of port A, pins[7:0]. */
#define TMS570_GIODOUTA_GIODOUTA(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODOUTA_GIODOUTA_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODOUTA_GIODOUTA_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODSETA----------------------*/
/* field: GIODSETA - GIO data set for port A, pins[7:0]. This bit drives the output of GIO pin high. */
#define TMS570_GIODSETA_GIODSETA(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODSETA_GIODSETA_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODSETA_GIODSETA_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODCLRA----------------------*/
/* field: GIODCLRA - GIO data clear for port A, pins[7:0]. This bit drives the output of GIO pin low. */
#define TMS570_GIODCLRA_GIODCLRA(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODCLRA_GIODCLRA_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODCLRA_GIODCLRA_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPDRA-----------------------*/
/* field: 7_0 - GIOPDRA GIO open drain for port A, pins[7:0] */
#define TMS570_GIOPDRA_7_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPDRA_7_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPDRA_7_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_GIOPULDISA---------------------*/
/* field: GIOPULDISA - GIO pull disable for port A, pins[7:0]. */
#define TMS570_GIOPULDISA_GIOPULDISA(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPULDISA_GIOPULDISA_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPULDISA_GIOPULDISA_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPSLA-----------------------*/
/* field: GIOPSLA - GIO pull select for port A, pins[7:0] */
#define TMS570_GIOPSLA_GIOPSLA(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPSLA_GIOPSLA_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPSLA_GIOPSLA_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODIRB-----------------------*/
/* field: GIODIRB - GIO data direction of port B, pins [7:0] */
#define TMS570_GIODIRB_GIODIRB(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODIRB_GIODIRB_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODIRB_GIODIRB_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODINB-----------------------*/
/* field: GIODINB - GIO data input for port B, pins [7:0] */
#define TMS570_GIODINB_GIODINB(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODINB_GIODINB_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODINB_GIODINB_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODOUTB----------------------*/
/* field: GIODOUTB - IO data output of port B, pins[7:0]. */
#define TMS570_GIODOUTB_GIODOUTB(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODOUTB_GIODOUTB_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODOUTB_GIODOUTB_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODSETB----------------------*/
/* field: GIODSETB - GIO data set for port B, pins[7:0]. This bit drives the output of GIO pin high. */
#define TMS570_GIODSETB_GIODSETB(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODSETB_GIODSETB_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODSETB_GIODSETB_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODCLRB----------------------*/
/* field: GIODCLRB - GIO data clear for port B, pins[7:0]. This bit drives the output of GIO pin low. */
#define TMS570_GIODCLRB_GIODCLRB(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODCLRB_GIODCLRB_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODCLRB_GIODCLRB_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPDRB-----------------------*/
/* field: 7_0 - GIOPDRB GIO open drain for port B, pins[7:0] */
#define TMS570_GIOPDRB_7_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPDRB_7_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPDRB_7_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_GIOPULDISB---------------------*/
/* field: GIOPULDISB - GIO pull disable for port B, pins[7:0]. */
#define TMS570_GIOPULDISB_GIOPULDISB(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPULDISB_GIOPULDISB_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPULDISB_GIOPULDISB_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPSLB-----------------------*/
/* field: GIOPSLB - GIO pull select for port B, pins[7:0] */
#define TMS570_GIOPSLB_GIOPSLB(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPSLB_GIOPSLB_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPSLB_GIOPSLB_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODIRC-----------------------*/
/* field: GIODIRC - GIO data direction of port C, pins [7:0] */
#define TMS570_GIODIRC_GIODIRC(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODIRC_GIODIRC_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODIRC_GIODIRC_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODINC-----------------------*/
/* field: GIODINC - GIO data input for port C, pins [7:0] */
#define TMS570_GIODINC_GIODINC(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODINC_GIODINC_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODINC_GIODINC_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODOUTC----------------------*/
/* field: GIODOUTC - IO data output of port C, pins[7:0]. */
#define TMS570_GIODOUTC_GIODOUTC(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODOUTC_GIODOUTC_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODOUTC_GIODOUTC_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODSETC----------------------*/
/* field: GIODSETC - GIO data set for port C, pins[7:0]. This bit drives the output of GIO pin high. */
#define TMS570_GIODSETC_GIODSETC(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODSETC_GIODSETC_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODSETC_GIODSETC_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODCLRC----------------------*/
/* field: GIODCLRC - GIO data clear for port C, pins[7:0]. This bit drives the output of GIO pin low. */
#define TMS570_GIODCLRC_GIODCLRC(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODCLRC_GIODCLRC_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODCLRC_GIODCLRC_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPDRC-----------------------*/
/* field: 7_0 - GIOPDRC GIO open drain for port C, pins[7:0] */
#define TMS570_GIOPDRC_7_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPDRC_7_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPDRC_7_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_GIOPULDISC---------------------*/
/* field: GIOPULDISC - GIO pull disable for port C, pins[7:0]. */
#define TMS570_GIOPULDISC_GIOPULDISC(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPULDISC_GIOPULDISC_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPULDISC_GIOPULDISC_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPSLC-----------------------*/
/* field: GIOPSLC - GIO pull select for port C, pins[7:0] */
#define TMS570_GIOPSLC_GIOPSLC(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPSLC_GIOPSLC_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPSLC_GIOPSLC_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODIRD-----------------------*/
/* field: GIODIRD - GIO data direction of port D, pins [7:0] */
#define TMS570_GIODIRD_GIODIRD(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODIRD_GIODIRD_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODIRD_GIODIRD_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODIND-----------------------*/
/* field: GIODIND - GIO data input for port D, pins [7:0] */
#define TMS570_GIODIND_GIODIND(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODIND_GIODIND_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODIND_GIODIND_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODOUTD----------------------*/
/* field: GIODOUTD - IO data output of port D, pins[7:0]. */
#define TMS570_GIODOUTD_GIODOUTD(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODOUTD_GIODOUTD_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODOUTD_GIODOUTD_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODSETD----------------------*/
/* field: GIODSETD - GIO data set for port D, pins[7:0]. This bit drives the output of GIO pin high. */
#define TMS570_GIODSETD_GIODSETD(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODSETD_GIODSETD_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODSETD_GIODSETD_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODCLRD----------------------*/
/* field: GIODCLRD - GIO data clear for port D, pins[7:0]. This bit drives the output of GIO pin low. */
#define TMS570_GIODCLRD_GIODCLRD(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODCLRD_GIODCLRD_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODCLRD_GIODCLRD_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPDRD-----------------------*/
/* field: 7_0 - GIOPDRD GIO open drain for port D, pins[7:0] */
#define TMS570_GIOPDRD_7_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPDRD_7_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPDRD_7_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_GIOPULDISD---------------------*/
/* field: GIOPULDISD - GIO pull disable for port D, pins[7:0]. */
#define TMS570_GIOPULDISD_GIOPULDISD(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPULDISD_GIOPULDISD_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPULDISD_GIOPULDISD_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPSLD-----------------------*/
/* field: GIOPSLD - GIO pull select for port D, pins[7:0] */
#define TMS570_GIOPSLD_GIOPSLD(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPSLD_GIOPSLD_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPSLD_GIOPSLD_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODIRE-----------------------*/
/* field: GIODIRE - GIO data direction of port E, pins [7:0] */
#define TMS570_GIODIRE_GIODIRE(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODIRE_GIODIRE_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODIRE_GIODIRE_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODINE-----------------------*/
/* field: GIODINE - GIO data input for port E, pins [7:0] */
#define TMS570_GIODINE_GIODINE(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODINE_GIODINE_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODINE_GIODINE_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODOUTE----------------------*/
/* field: GIODOUTE - IO data output of port E, pins[7:0]. */
#define TMS570_GIODOUTE_GIODOUTE(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODOUTE_GIODOUTE_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODOUTE_GIODOUTE_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODSETE----------------------*/
/* field: GIODSETE - GIO data set for port E, pins[7:0]. This bit drives the output of GIO pin high. */
#define TMS570_GIODSETE_GIODSETE(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODSETE_GIODSETE_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODSETE_GIODSETE_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODCLRE----------------------*/
/* field: GIODCLRE - GIO data clear for port E, pins[7:0]. This bit drives the output of GIO pin low. */
#define TMS570_GIODCLRE_GIODCLRE(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODCLRE_GIODCLRE_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODCLRE_GIODCLRE_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPDRE-----------------------*/
/* field: 7_0 - GIOPDRE GIO open drain for port E, pins[7:0] */
#define TMS570_GIOPDRE_7_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPDRE_7_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPDRE_7_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_GIOPULDISE---------------------*/
/* field: GIOPULDISE - GIO pull disable for port E, pins[7:0]. */
#define TMS570_GIOPULDISE_GIOPULDISE(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPULDISE_GIOPULDISE_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPULDISE_GIOPULDISE_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPSLE-----------------------*/
/* field: GIOPSLE - GIO pull select for port E, pins[7:0] */
#define TMS570_GIOPSLE_GIOPSLE(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPSLE_GIOPSLE_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPSLE_GIOPSLE_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODIRF-----------------------*/
/* field: GIODIRF - GIO data direction of port E, pins [7:0] */
#define TMS570_GIODIRF_GIODIRF(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODIRF_GIODIRF_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODIRF_GIODIRF_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODINF-----------------------*/
/* field: GIODINF - GIO data input for port F, pins [7:0] */
#define TMS570_GIODINF_GIODINF(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODINF_GIODINF_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODINF_GIODINF_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODOUTF----------------------*/
/* field: GIODOUTF - IO data output of port F, pins[7:0]. */
#define TMS570_GIODOUTF_GIODOUTF(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODOUTF_GIODOUTF_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODOUTF_GIODOUTF_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODSETF----------------------*/
/* field: GIODSETF - GIO data set for port F, pins[7:0]. This bit drives the output of GIO pin high. */
#define TMS570_GIODSETF_GIODSETF(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODSETF_GIODSETF_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODSETF_GIODSETF_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODCLRF----------------------*/
/* field: GIODCLRF - GIO data clear for port F, pins[7:0]. This bit drives the output of GIO pin low. */
#define TMS570_GIODCLRF_GIODCLRF(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODCLRF_GIODCLRF_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODCLRF_GIODCLRF_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPDRF-----------------------*/
/* field: 7_0 - GIOPDRF GIO open drain for port F, pins[7:0] */
#define TMS570_GIOPDRF_7_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPDRF_7_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPDRF_7_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_GIOPULDISF---------------------*/
/* field: GIOPULDISF - GIO pull disable for port F, pins[7:0]. */
#define TMS570_GIOPULDISF_GIOPULDISF(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPULDISF_GIOPULDISF_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPULDISF_GIOPULDISF_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPSLF-----------------------*/
/* field: GIOPSLF - GIO pull select for port F, pins[7:0] */
#define TMS570_GIOPSLF_GIOPSLF(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPSLF_GIOPSLF_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPSLF_GIOPSLF_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODIRG-----------------------*/
/* field: GIODIRG - GIO data direction of port G, pins [7:0] */
#define TMS570_GIODIRG_GIODIRG(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODIRG_GIODIRG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODIRG_GIODIRG_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODING-----------------------*/
/* field: GIODING - GIO data input for port G, pins [7:0] */
#define TMS570_GIODING_GIODING(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODING_GIODING_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODING_GIODING_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODOUTG----------------------*/
/* field: GIODOUTG - IO data output of port G, pins[7:0]. */
#define TMS570_GIODOUTG_GIODOUTG(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODOUTG_GIODOUTG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODOUTG_GIODOUTG_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODSETG----------------------*/
/* field: GIODSETG - GIO data set for port G, pins[7:0]. This bit drives the output of GIO pin high. */
#define TMS570_GIODSETG_GIODSETG(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODSETG_GIODSETG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODSETG_GIODSETG_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODCLRG----------------------*/
/* field: GIODCLRG - GIO data clear for port G, pins[7:0]. This bit drives the output of GIO pin low. */
#define TMS570_GIODCLRG_GIODCLRG(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODCLRG_GIODCLRG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODCLRG_GIODCLRG_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPDRG-----------------------*/
/* field: 7_0 - GIOPDRG GIO open drain for port G, pins[7:0] */
#define TMS570_GIOPDRG_7_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPDRG_7_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPDRG_7_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_GIOPULDISG---------------------*/
/* field: GIOPULDISG - GIO pull disable for port G, pins[7:0]. */
#define TMS570_GIOPULDISG_GIOPULDISG(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPULDISG_GIOPULDISG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPULDISG_GIOPULDISG_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPSLG-----------------------*/
/* field: GIOPSLG - GIO pull select for port G, pins[7:0] */
#define TMS570_GIOPSLG_GIOPSLG(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPSLG_GIOPSLG_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPSLG_GIOPSLG_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODIRH-----------------------*/
/* field: GIODIRH - GIO data direction of port H, pins [7:0] */
#define TMS570_GIODIRH_GIODIRH(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODIRH_GIODIRH_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODIRH_GIODIRH_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIODINH-----------------------*/
/* field: GIODINH - GIO data input for port H, pins [7:0] */
#define TMS570_GIODINH_GIODINH(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODINH_GIODINH_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODINH_GIODINH_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODOUTH----------------------*/
/* field: GIODOUTH - IO data output of port H, pins[7:0]. */
#define TMS570_GIODOUTH_GIODOUTH(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODOUTH_GIODOUTH_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODOUTH_GIODOUTH_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODSETH----------------------*/
/* field: GIODSETH - GIO data set for port H, pins[7:0]. This bit drives the output of GIO pin high. */
#define TMS570_GIODSETH_GIODSETH(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODSETH_GIODSETH_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODSETH_GIODSETH_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_GIODCLRH----------------------*/
/* field: GIODCLRH - GIO data clear for port H, pins[7:0]. This bit drives the output of GIO pin low. */
#define TMS570_GIODCLRH_GIODCLRH(val) BSP_FLD32(val,0, 7)
#define TMS570_GIODCLRH_GIODCLRH_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIODCLRH_GIODCLRH_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPDRH-----------------------*/
/* field: 7_0 - GIOPDRH GIO open drain for port H, pins[7:0] */
#define TMS570_GIOPDRH_7_0(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPDRH_7_0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPDRH_7_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_GIOPULDISH---------------------*/
/* field: GIOPULDISH - GIO pull disable for port H, pins[7:0]. */
#define TMS570_GIOPULDISH_GIOPULDISH(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPULDISH_GIOPULDISH_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPULDISH_GIOPULDISH_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_GIOPSLH-----------------------*/
/* field: GIOPSLH - GIO pull select for port H, pins[7:0] */
#define TMS570_GIOPSLH_GIOPSLH(val) BSP_FLD32(val,0, 7)
#define TMS570_GIOPSLH_GIOPSLH_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_GIOPSLH_GIOPSLH_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)



#endif /* LIBBSP_ARM_tms570_GIO */
