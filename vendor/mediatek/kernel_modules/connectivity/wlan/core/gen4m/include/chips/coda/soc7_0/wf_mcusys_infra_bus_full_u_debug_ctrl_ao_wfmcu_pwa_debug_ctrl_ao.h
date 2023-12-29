/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021 MediaTek Inc.
 */

#ifndef __WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_REGS_H__
#define __WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_REGS_H__

#include "hal_common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_BASE 0x810F0000

#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR (WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_BASE + 0x000)
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL3_ADDR (WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_BASE + 0x00C)

#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_thres_ADDR WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_thres_MASK 0xFFFF0000
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_thres_SHFT 16
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_clr_ADDR WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_clr_MASK 0x00000200
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_clr_SHFT 9
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_en_debugtop_ADDR WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_en_debugtop_MASK 0x00000010
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_en_debugtop_SHFT 4
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_cken_ADDR WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_cken_MASK 0x00000008
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_cken_SHFT 3
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_en_ADDR WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_en_MASK 0x00000004
#define WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_DEBUG_CTRL_AO_WF_MCUSYS_INFRA_BUS_FULL_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_en_SHFT 2

#ifdef __cplusplus
}
#endif

#endif
