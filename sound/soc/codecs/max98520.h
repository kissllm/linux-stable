/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021, Maxim Integrated.
 */

#ifndef _MAX98520_H
#define _MAX98520_H

#define MAX98520_R2000_SW_RESET 0x2000
#define MAX98520_R2001_STATUS_1 0x2001
#define MAX98520_R2002_STATUS_2 0x2002
#define MAX98520_R2020_THERM_WARN_THRESH 0x2020
#define MAX98520_R2021_THERM_SHDN_THRESH 0x2021
#define MAX98520_R2022_THERM_HYSTERESIS 0x2022
#define MAX98520_R2023_THERM_FOLDBACK_SET 0x2023
#define MAX98520_R2027_THERM_FOLDBACK_EN 0x2027
#define MAX98520_R2030_CLK_MON_CTRL 0x2030
#define MAX98520_R2037_ERR_MON_CTRL 0x2037
#define MAX98520_R2040_PCM_MODE_CFG	0x2040
#define MAX98520_R2041_PCM_CLK_SETUP 0x2041
#define MAX98520_R2042_PCM_SR_SETUP 0x2042
#define MAX98520_R2043_PCM_RX_SRC1 0x2043
#define MAX98520_R2044_PCM_RX_SRC2 0x2044
#define MAX98520_R204F_PCM_RX_EN 0x204F
#define MAX98520_R2090_AMP_VOL_CTRL 0x2090
#define MAX98520_R2091_AMP_PATH_GAIN 0x2091
#define MAX98520_R2092_AMP_DSP_CFG 0x2092
#define MAX98520_R2094_SSM_CFG 0x2094
#define MAX98520_R2095_AMP_CFG 0x2095
#define MAX98520_R209F_AMP_EN 0x209F
#define MAX98520_R20B0_ADC_SR 0x20B0
#define MAX98520_R20B1_ADC_RESOLUTION 0x20B1
#define MAX98520_R20B2_ADC_PVDD0_CFG 0x20B2
#define MAX98520_R20B3_ADC_THERMAL_CFG 0x20B3
#define MAX98520_R20B4_ADC_READBACK_CTRL 0x20B4
#define MAX98520_R20B5_ADC_READBACK_UPDATE 0x20B5
#define MAX98520_R20B6_ADC_PVDD_READBACK_MSB 0x20B6
#define MAX98520_R20B7_ADC_PVDD_READBACK_LSB 0x20B7
#define MAX98520_R20B8_ADC_TEMP_READBACK_MSB 0x20B8
#define MAX98520_R20B9_ADC_TEMP_READBACK_LSB 0x20B9
#define MAX98520_R20BA_ADC_LOW_PVDD_READBACK_MSB 0x20BA
#define MAX98520_R20BB_ADC_LOW_READBACK_LSB 0x20BB
#define MAX98520_R20BC_ADC_HIGH_TEMP_READBACK_MSB 0x20BC
#define MAX98520_R20BD_ADC_HIGH_TEMP_READBACK_LSB 0x20BD
#define MAX98520_R20CF_MEAS_ADC_CFG 0x20CF
#define MAX98520_R20D0_DHT_CFG1 0x20D0
#define MAX98520_R20D1_LIMITER_CFG1 0x20D1
#define MAX98520_R20D2_LIMITER_CFG2 0x20D2
#define MAX98520_R20D3_DHT_CFG2 0x20D3
#define MAX98520_R20D4_DHT_CFG3 0x20D4
#define MAX98520_R20D5_DHT_CFG4 0x20D5
#define MAX98520_R20D6_DHT_HYSTERESIS_CFG 0x20D6
#define MAX98520_R20D8_DHT_EN 0x20D8
#define MAX98520_R210E_AUTO_RESTART_BEHAVIOR 0x210E
#define MAX98520_R210F_GLOBAL_EN 0x210F
#define MAX98520_R2161_BOOST_TM1 0x2161
#define MAX98520_R2162_BOOST_TM2 0x2162
#define MAX98520_R2163_BOOST_TM3 0x2163
#define MAX98520_R21FF_REVISION_ID 0x21FF

/* MAX98520_R2030_CLK_MON_CTRL */
#define MAX98520_CMON_AUTORESTART_SHIFT (0)

/* MAX98520_R2037_ERR_MON_CTRL */
#define MAX98520_CTRL_CMON_EN_SHIFT (0)

/* MAX98520_R2040_PCM_MODE_CFG */
#define MAX98520_PCM_MODE_CFG_FORMAT_MASK (0x7 << 3)
#define MAX98520_PCM_MODE_CFG_FORMAT_SHIFT (3)
#define MAX98520_PCM_TX_CH_INTERLEAVE_MASK (0x1 << 2)
#define MAX98520_PCM_FORMAT_I2S (0x0 << 3)
#define MAX98520_PCM_FORMAT_LJ (0x1 << 3)
#define MAX98520_PCM_FORMAT_TDM_MODE0 (0x3 << 3)
#define MAX98520_PCM_FORMAT_TDM_MODE1 (0x4 << 3)
#define MAX98520_PCM_FORMAT_TDM_MODE2 (0x5 << 3)
#define MAX98520_PCM_MODE_CFG_CHANSZ_MASK (0x3 << 6)
#define MAX98520_PCM_MODE_CFG_CHANSZ_16 (0x1 << 6)
#define MAX98520_PCM_MODE_CFG_CHANSZ_24 (0x2 << 6)
#define MAX98520_PCM_MODE_CFG_CHANSZ_32 (0x3 << 6)

/* MAX98520_R2041_PCM_CLK_SETUP */
#define MAX98520_PCM_MODE_CFG_PCM_BCLKEDGE (0x1 << 4)
#define MAX98520_PCM_CLK_SETUP_BSEL_MASK (0xF << 0)

/* MAX98520_R2042_PCM_SR_SETUP */
#define MAX98520_PCM_SR_SHIFT (0)
#define MAX98520_IVADC_SR_SHIFT (4)
#define MAX98520_PCM_SR_MASK (0xF << MAX98520_PCM_SR_SHIFT)
#define MAX98520_IVADC_SR_MASK (0xF << MAX98520_IVADC_SR_SHIFT)
#define MAX98520_PCM_SR_8000 (0x0)
#define MAX98520_PCM_SR_11025 (0x1)
#define MAX98520_PCM_SR_12000 (0x2)
#define MAX98520_PCM_SR_16000 (0x3)
#define MAX98520_PCM_SR_22050 (0x4)
#define MAX98520_PCM_SR_24000 (0x5)
#define MAX98520_PCM_SR_32000 (0x6)
#define MAX98520_PCM_SR_44100 (0x7)
#define MAX98520_PCM_SR_48000 (0x8)
#define MAX98520_PCM_SR_88200 (0x9)
#define MAX98520_PCM_SR_96000 (0xA)
#define MAX98520_PCM_SR_176400 (0xB)
#define MAX98520_PCM_SR_192000 (0xC)

/* MAX98520_R2044_PCM_RX_SRC2 */
#define MAX98520_PCM_DMIX_CH1_SHIFT (0xF << 0)
#define MAX98520_PCM_DMIX_CH0_SRC_MASK (0xF << 0)
#define MAX98520_PCM_DMIX_CH1_SRC_MASK (0xF << MAX98520_PCM_DMIX_CH1_SHIFT)

/* MAX98520_R204F_PCM_RX_EN */
#define MAX98520_PCM_RX_EN_MASK (0x1 << 0)
#define MAX98520_PCM_RX_BYP_EN_MASK (0x1 << 1)

/* MAX98520_R2092_AMP_DSP_CFG */
#define MAX98520_DSP_SPK_DCBLK_EN_SHIFT (0)
#define MAX98520_DSP_SPK_DITH_EN_SHIFT (1)
#define MAX98520_DSP_SPK_INVERT_SHIFT (2)
#define MAX98520_DSP_SPK_VOL_RMPUP_SHIFT (3)
#define MAX98520_DSP_SPK_VOL_RMPDN_SHIFT (4)
#define MAX98520_DSP_SPK_SAFE_EN_SHIFT (5)

#define MAX98520_SPK_SAFE_EN_MASK (0x1 << MAX98520_DSP_SPK_SAFE_EN_SHIFT)

/* MAX98520_R2094_SSM_CFG */
#define MAX98520_SSM_EN_SHIFT (0)
#define MAX98520_SSM_MOD_SHIFT (1)
#define MAX98520_SSM_RCVR_MODE_SHIFT (3)

/* MAX98520_R2095_AMP_CFG */
#define MAX98520_CFG_DYN_MODE_SHIFT (4)
#define MAX98520_CFG_SPK_MODE_SHIFT (3)

/* MAX98520_R20D0_DHT_CFG1 */
#define MAX98520_DHT_VROT_PNT_SHIFT	(0)

/* MAX98520_R20D1_LIMITER_CFG1 */
#define MAX98520_DHT_SUPPLY_HR_SHIFT (0)

/* MAX98520_R20D2_DHT_CFG2 */
#define MAX98520_DHT_LIMITER_MODE_SHIFT (0)
#define MAX98520_DHT_LIMITER_THRESHOLD_SHIFT (1)

/* MAX98520_R20D3_DHT_CFG2 */
#define MAX98520_DHT_MAX_ATTEN_SHIFT (0)

/* MAX98520_R20D6_DHT_HYSTERESIS_CFG */
#define MAX98520_DHT_HYSTERESIS_SWITCH_SHIFT (0)
#define MAX98520_DHT_HYSTERESIS_SHIFT (1)

/* MAX98520_R20B2_ADC_PVDD0_CFG, MAX98520_R20B3_ADC_THERMAL_CFG */
#define MAX98520_FLT_EN_SHIFT (4)

struct max98520_priv {
	struct regmap *regmap;
	struct gpio_desc *reset_gpio;
	unsigned int ch_size;
	bool tdm_mode;
};
#endif

