/*
 * Copyright (C) 2018 Marvell International Ltd.
 *
 * SPDX-License-Identifier:    GPL-2.0
 * https://spdx.org/licenses
 */
#ifndef _FW_INFO_H_
#define _FW_INFO_H_

/* Protected ATF and TEE region */
#define ATF_REGION_START		0x4000000
#define ATF_REGION_END			0x5400000

/* Firmware related definition used for SMC calls */
#define MV_SIP_DRAM_SIZE		0x82000010

#endif /* _FW_INFO_H_ */
