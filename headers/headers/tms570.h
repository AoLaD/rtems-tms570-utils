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

#ifndef LIBBSP_ARM_TMS570
#define LIBBSP_ARM_TMS570

#include <bsp/ADC.h>
#include <bsp/CCMSR.h>
#include <bsp/CRC.h>
#include <bsp/DCAN.h>
#include <bsp/DCC.h>
#include <bsp/DMA.h>
#include <bsp/DMM.h>
#include <bsp/EFUSE.h>
#include <bsp/EMIF.h>
#include <bsp/ESM.h>
#include <bsp/EMAC.h>
#include <bsp/FLASH.h>
#include <bsp/GIO.h>
#include <bsp/HTU.h>
#include <bsp/I2C.h>
#include <bsp/IOMM.h>
#include <bsp/LIN.h>
#include <bsp/N2HET.h>
#include <bsp/PBIST.h>
#include <bsp/PLL.h>
#include <bsp/PMM.h>
#include <bsp/POM.h>
#include <bsp/RTI.h>
#include <bsp/RTP.h>
#include <bsp/SCI.h>
#include <bsp/SPI.h>
#include <bsp/STC.h>
#include <bsp/TCR.h>
#include <bsp/TCRAM.h>
#include <bsp/VIM.h>

#define TMS570_ADC1 (*(volatile tms570_adc_t*)0xFFF7C000)
#define TMS570_ADC2 (*(volatile tms570_adc_t*)0xFFF7C200)
#define TMS570_CRC (*(volatile tms570_crc_t*)0xFE000000)
#define TMS570_DCAN1 (*(volatile tms570_dcan_t*)0xFFF7DC00)
#define TMS570_DCAN2 (*(volatile tms570_dcan_t*)0xFFF7DE00)
#define TMS570_DCAN3 (*(volatile tms570_dcan_t*)0xFFF7E000)
#define TMS570_DCC1 (*(volatile tms570_dcc_t*)0xFFFFEC00)
#define TMS570_DCC2 (*(volatile tms570_dcc_t*)0xFFFFF400)
#define TMS570_DMA (*(volatile tms570_dma_t*)0xFFFFF000)
#define TMS570_DMM (*(volatile tms570_dmm_t*)0xFFFFF700)
#define TMS570_EMIF (*(volatile tms570_emif_t*)0xFCFFE800)
#define TMS570_EMAC (*(volatile tms570_emac_t*)FCF78900)
#define TMS570_GIO (*(volatile tms570_gio_t*)0xFFF7BC00)
#define TMS570_HTU1 (*(volatile tms570_htu_t*)0xFFF7A400)
#define TMS570_HTU2 (*(volatile tms570_htu_t*)0xFFF7A500)
#define TMS570_I2C (*(volatile tms570_i2c_t*)0xFFF7D400)
#define TMS570_LIN (*(volatile tms570_lin_t*)0xFFF7E400)
#define TMS570_NHET1 (*(volatile tms570_nhet_t*)0xFFF7B800)
#define TMS570_NHET2 (*(volatile tms570_nhet_t*)0xFFF7B900)
#define TMS570_PBIST (*(volatile tms570_pbist_t*)0xFFFFE400)
#define TMS570_PMM (*(volatile tms570_pmm_t*)0xFFFF0000)
#define TMS570_RTI (*(volatile tms570_rti_t*)0xFFFFFC00)
#define TMS570_RTP (*(volatile tms570_rtp_t*)0xFFFFFA00)
#define TMS570_SCI (*(volatile tms570_sci_t*)0xFFF7E500)
#define TMS570_SPI (*(volatile tms570_spi_t*)0xFFF7F400)
#define TMS570_STC (*(volatile tms570_stc_t*)0xFFFFE600)
#define TMS570_TCR (*(volatile tms570_tcr_t*)0xFFF7C800)
#define TMS570_TCRAM1 (*(volatile tms570_tcram_t*)0xFFFFF800)
#define TMS570_TCRAM2 (*(volatile tms570_tcram_t*)0xFFFFF900)
#endif /* LIBBSP_ARM_TMS570 */
