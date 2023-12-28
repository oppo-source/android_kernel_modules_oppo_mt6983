// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2018-2020 Oplus. All rights reserved.
 */

#include <linux/input/mt.h>
#include <linux/input.h>
#include <linux/delay.h>
#include <linux/version.h>

#include "../touchpanel_common.h"
#include "touchpanel_prevention.h"
#include "../touch_comon_api/touch_comon_api.h"
#include "../touchpanel_healthinfo/touchpanel_healthinfo.h"

/*******Start of LOG TAG Declear**********************************/
#ifdef TPD_DEVICE
#undef TPD_DEVICE
#define TPD_DEVICE "prevent"
#else
#define TPD_DEVICE "prevent"
#endif


int dead_grip_handle(struct kernel_grip_info *grip_info, int obj_attention,
		     struct point_info *points)
{
	int ts_debug = 0;
	ts_debug++;
	return 0;
}

void grip_status_reset(struct kernel_grip_info *grip_info, uint8_t index)
{
	int ts_debug = 0;
	ts_debug++;
	return;
}

/*using for report touch up event*/
static  inline void touch_report_work(struct work_struct *work, unsigned int i)
{
	i++;
	return;
}

int notify_prevention_handle(struct kernel_grip_info *grip_info,
			     int obj_attention, struct point_info *points)
{
	int ts_debug = 0;
	ts_debug++;
	return obj_attention;
}

//string size must be short than 64
static const struct key_addr key_addr_arrays[] = {
	{"large_corner_exit_distance",		(u64)&(((struct kernel_grip_info *)0)->large_corner_exit_distance)},
	{"large_corner_detect_time_ms",		(u64)&(((struct kernel_grip_info *)0)->large_corner_detect_time_ms)},
	{"large_corner_debounce_ms",		(u64)&(((struct kernel_grip_info *)0)->large_corner_debounce_ms)},
	{"large_corner_width",			(u64)&(((struct kernel_grip_info *)0)->large_corner_width)},
	{"large_corner_height",			(u64)&(((struct kernel_grip_info *)0)->large_corner_height)},
	{"xfsr_corner_exit_thd",		(u64)&(((struct kernel_grip_info *)0)->xfsr_corner_exit_thd)},
	{"yfsr_corner_exit_thd",		(u64)&(((struct kernel_grip_info *)0)->yfsr_corner_exit_thd)},
	{"exit_match_thd",			(u64)&(((struct kernel_grip_info *)0)->exit_match_thd)},
	{"trx_reject_thd",			(u64)&(((struct kernel_grip_info *)0)->trx_reject_thd)},
	{"rx_reject_thd",			(u64)&(((struct kernel_grip_info *)0)->rx_reject_thd)},
	{"tx_reject_thd",			(u64)&(((struct kernel_grip_info *)0)->tx_reject_thd)},
	{"fsr_stable_time_thd",			(u64)&(((struct kernel_grip_info *)0)->fsr_stable_time_thd)},
	{"single_channel_x_len",		(u64)&(((struct kernel_grip_info *)0)->single_channel_x_len)},
	{"single_channel_y_len",		(u64)&(((struct kernel_grip_info *)0)->single_channel_y_len)},
	{"normal_tap_min_time_ms",		(u64)&(((struct kernel_grip_info *)0)->normal_tap_min_time_ms)},
	{"normal_tap_max_time_ms",		(u64)&(((struct kernel_grip_info *)0)->normal_tap_max_time_ms)},
	{"long_start_coupling_thd",		(u64)&(((struct kernel_grip_info *)0)->normal_data.long_start_coupling_thd)},
	{"long_stable_coupling_thd",		(u64)&(((struct kernel_grip_info *)0)->normal_data.long_stable_coupling_thd)},
	{"long_detect_time_ms",			(u64)&(((struct kernel_grip_info *)0)->long_detect_time_ms)},
	{"long_hold_changed_thd",		(u64)&(((struct kernel_grip_info *)0)->normal_data.long_hold_changed_thd)},
	{"long_hold_maxfsr_gap",		(u64)&(((struct kernel_grip_info *)0)->normal_data.long_hold_maxfsr_gap)},
	{"long_hold_divided_factor",		(u64)&(((struct kernel_grip_info *)0)->long_hold_divided_factor)},
	{"long_hold_debounce_time_ms",		(u64)&(((struct kernel_grip_info *)0)->long_hold_debounce_time_ms)},
	{"xfsr_normal_exit_thd",		(u64)&(((struct kernel_grip_info *)0)->xfsr_normal_exit_thd)},
	{"yfsr_normal_exit_thd",		(u64)&(((struct kernel_grip_info *)0)->yfsr_normal_exit_thd)},
	{"xfsr_hold_exit_thd",			(u64)&(((struct kernel_grip_info *)0)->xfsr_hold_exit_thd)},
	{"yfsr_hold_exit_thd",			(u64)&(((struct kernel_grip_info *)0)->yfsr_hold_exit_thd)},
	{"large_reject_debounce_time_ms",	(u64)&(((struct kernel_grip_info *)0)->large_reject_debounce_time_ms)},
	{"report_updelay_ms",			(u64)&(((struct kernel_grip_info *)0)->report_updelay_ms)},
	{"short_start_coupling_thd",		(u64)&(((struct kernel_grip_info *)0)->short_start_coupling_thd)},
	{"short_stable_coupling_thd",		(u64)&(((struct kernel_grip_info *)0)->short_stable_coupling_thd)},
	{"short_hold_changed_thd",		(u64)&(((struct kernel_grip_info *)0)->short_hold_changed_thd)},
	{"short_hold_maxfsr_gap",		(u64)&(((struct kernel_grip_info *)0)->short_hold_maxfsr_gap)},
	{"large_top_width",			(u64)&(((struct kernel_grip_info *)0)->large_top_width)},
	{"large_top_height",			(u64)&(((struct kernel_grip_info *)0)->large_top_height)},
	{"large_top_exit_distance",		(u64)&(((struct kernel_grip_info *)0)->large_top_exit_distance)},
	{"edge_swipe_narrow_witdh",		(u64)&(((struct kernel_grip_info *)0)->edge_swipe_narrow_witdh)},
	{"edge_swipe_exit_distance",		(u64)&(((struct kernel_grip_info *)0)->edge_swipe_exit_distance)},
	{"long_strict_start_coupling_thd",	(u64)&(((struct kernel_grip_info *)0)->long_strict_start_coupling_thd)},
	{"long_strict_stable_coupling_thd",	(u64)&(((struct kernel_grip_info *)0)->long_strict_stable_coupling_thd)},
	{"trx_strict_reject_thd",		(u64)&(((struct kernel_grip_info *)0)->trx_strict_reject_thd)},
	{"rx_strict_reject_thd",		(u64)&(((struct kernel_grip_info *)0)->rx_strict_reject_thd)},
	{"tx_strict_reject_thd",		(u64)&(((struct kernel_grip_info *)0)->tx_strict_reject_thd)},
	{"short_strict_start_coupling_thd",	(u64)&(((struct kernel_grip_info *)0)->short_strict_start_coupling_thd)},
	{"short_strict_stable_coupling_thd",	(u64)&(((struct kernel_grip_info *)0)->short_strict_stable_coupling_thd)},
	{"xfsr_strict_exit_thd",		(u64)&(((struct kernel_grip_info *)0)->xfsr_strict_exit_thd)},
	{"yfsr_strict_exit_thd",		(u64)&(((struct kernel_grip_info *)0)->yfsr_strict_exit_thd)},
	{"corner_move_rejected",		(u64)&(((struct kernel_grip_info *)0)->corner_move_rejected)},
	{"grip_disable_level",		(u64)&(((struct kernel_grip_info *)0)->grip_disable_level)},
	{"long_hold_x_width",		(u64)&(((struct kernel_grip_info *)0)->long_hold_x_width)},
	{"long_hold_y_width",		(u64)&(((struct kernel_grip_info *)0)->long_hold_y_width)},
	{"finger_hold_matched_hor_support",		(u64)&(((struct kernel_grip_info *)0)->finger_hold_matched_hor_support)},
	{"finger_hold_matched_ver_support", 	(u64)&(((struct kernel_grip_info *)0)->finger_hold_matched_ver_support)},
	{"top_matched_times_thd",		(u64)&(((struct kernel_grip_info *)0)->top_matched_times_thd)},
	{"top_matched_xfsr_thd",		(u64)&(((struct kernel_grip_info *)0)->top_matched_xfsr_thd)},
	{"large_ver_top_exit_distance",		(u64)&(((struct kernel_grip_info *)0)->large_ver_top_exit_distance)},
	{"large_hor_long_top_width",		(u64)&(((struct kernel_grip_info *)0)->large_hor_top_x_width)},
	{"large_hor_long_top_height", 	(u64)&(((struct kernel_grip_info *)0)->large_hor_top_y_height)},
	{"large_top_middle_width",		(u64)&(((struct kernel_grip_info *)0)->large_top_middle_width)},
	{"large_top_middle_height", 	(u64)&(((struct kernel_grip_info *)0)->large_top_middle_height)},
	{"large_top_middle_exit_distance",		(u64)&(((struct kernel_grip_info *)0)->large_top_middle_exit_distance)},
	{"large_bottom_middle_support", 	(u64)&(((struct kernel_grip_info *)0)->large_bottom_middle_support)},
	{"corner_eliminate_point_type", 	(u64)&(((struct kernel_grip_info *)0)->corner_eliminate_point_type)},
	{"large_corner_hor_x_width", 	(u64)&(((struct kernel_grip_info *)0)->large_corner_hor_x_width)},
	{"large_corner_hor_y_height", 	(u64)&(((struct kernel_grip_info *)0)->large_corner_hor_y_height)},
	{"corner_eliminate_without_time", 	(u64)&(((struct kernel_grip_info *)0)->corner_eliminate_without_time)},
	{"long_eliminate_point_support",	(u64)&(((struct kernel_grip_info *)0)->long_eliminate_point_support)},
	{"long_eliminate_point_type",	(u64)&(((struct kernel_grip_info *)0)->long_eliminate_point_type)},
	{"large_long_x2_width",	(u64)&(((struct kernel_grip_info *)0)->large_long_x2_width)},
	{"large_long_y2_width",	(u64)&(((struct kernel_grip_info *)0)->large_long_y2_width)},
	{"large_long_x1_width",	(u64)&(((struct kernel_grip_info *)0)->normal_data.large_long_x1_width)},
	{"large_long_y1_width",	(u64)&(((struct kernel_grip_info *)0)->large_long_y1_width)},
	{"large_long_debounce_ms",	(u64)&(((struct kernel_grip_info *)0)->normal_data.large_long_debounce_ms)},
	{"finger_hold_differ_size_support", (u64)&(((struct kernel_grip_info *)0)->finger_hold_differ_size_support)},
	{"finger_hold_differ_hor_support", (u64)&(((struct kernel_grip_info *)0)->finger_hold_differ_hor_support)},
	{"finger_hold_differ_size_x", (u64)&(((struct kernel_grip_info *)0)->normal_data.finger_hold_differ_size_x)},
	{"finger_hold_differ_size_debounce_ms", (u64)&(((struct kernel_grip_info *)0)->normal_data.finger_hold_differ_size_debounce_ms)},
	{"set_ime_showing",         (u64)&(((struct kernel_grip_info *)0)->set_ime_showing)},
	{"finger_hold_rx_rejec_thd",		(u64)&(((struct kernel_grip_info *)0)->normal_data.finger_hold_rx_rejec_thd)},
	{"finger_hold_max_rx_exit_distance", 	(u64)&(((struct kernel_grip_info *)0)->normal_data.finger_hold_max_rx_exit_distance)},
	{"finger_hold_max_rx_narrow_witdh",		(u64)&(((struct kernel_grip_info *)0)->normal_data.finger_hold_max_rx_narrow_witdh)},
	{"max_rx_matched_support",		(u64)&(((struct kernel_grip_info *)0)->max_rx_matched_support)},
	{"max_rx_rejec_thd",		(u64)&(((struct kernel_grip_info *)0)->normal_data.max_rx_rejec_thd)},
	{"max_rx_stable_time_thd",		(u64)&(((struct kernel_grip_info *)0)->normal_data.max_rx_stable_time_thd)},
	{"max_rx_exit_distance",	(u64)&(((struct kernel_grip_info *)0)->normal_data.max_rx_exit_distance)},
	{"max_rx_narrow_witdh", 	(u64)&(((struct kernel_grip_info *)0)->normal_data.max_rx_narrow_witdh)},
	{"dynamic_finger_hold_exit_support",		(u64)&(((struct kernel_grip_info *)0)->dynamic_finger_hold_exit_support)},
	{"dynamic_finger_hold_exit_distance",		(u64)&(((struct kernel_grip_info *)0)->normal_data.dynamic_finger_hold_exit_distance)},
	{"dynamic_finger_hold_narrow_witdh",	(u64)&(((struct kernel_grip_info *)0)->normal_data.dynamic_finger_hold_narrow_witdh)},
	{"dynamic_finger_hold_size_x", 	(u64)&(((struct kernel_grip_info *)0)->normal_data.dynamic_finger_hold_size_x)},
	{"edge_sliding_matched_support",	(u64)&(((struct kernel_grip_info *)0)->edge_sliding_matched_support)},
	{"edge_sliding_exit_yfsr_thd", 	(u64)&(((struct kernel_grip_info *)0)->normal_data.edge_sliding_exit_yfsr_thd)},
	{"edge_sliding_exit_distance", 	(u64)&(((struct kernel_grip_info *)0)->normal_data.edge_sliding_exit_distance)},
	{"edge_swipe_makeup_optimization_support",	(u64)&(((struct kernel_grip_info *)0)->edge_swipe_makeup_optimization_support)},
	/*add for curved_screen_v4.2  recling mode begin*/
	{"large_long_x1_width_recli",	(u64)&(((struct kernel_grip_info *)0)->reclining_data.large_long_x1_width)},
	{"large_long_debounce_ms_recli",	(u64)&(((struct kernel_grip_info *)0)->reclining_data.large_long_debounce_ms)},
	{"finger_hold_differ_size_x_recli", (u64)&(((struct kernel_grip_info *)0)->reclining_data.finger_hold_differ_size_x)},
	{"finger_hold_differ_size_debounce_ms_recli", (u64)&(((struct kernel_grip_info *)0)->reclining_data.finger_hold_differ_size_debounce_ms)},
	{"finger_hold_rx_rejec_thd_recli",		(u64)&(((struct kernel_grip_info *)0)->reclining_data.finger_hold_rx_rejec_thd)},
	{"finger_hold_max_rx_exit_distance_recli", 	(u64)&(((struct kernel_grip_info *)0)->reclining_data.finger_hold_max_rx_exit_distance)},
	{"finger_hold_max_rx_narrow_witdh_recli",		(u64)&(((struct kernel_grip_info *)0)->reclining_data.finger_hold_max_rx_narrow_witdh)},
	{"max_rx_rejec_thd_recli",		(u64)&(((struct kernel_grip_info *)0)->reclining_data.max_rx_rejec_thd)},
	{"max_rx_stable_time_thd_recli",		(u64)&(((struct kernel_grip_info *)0)->reclining_data.max_rx_stable_time_thd)},
	{"max_rx_exit_distance_recli",	(u64)&(((struct kernel_grip_info *)0)->reclining_data.max_rx_exit_distance)},
	{"max_rx_narrow_witdh_recli", 	(u64)&(((struct kernel_grip_info *)0)->reclining_data.max_rx_narrow_witdh)},
	{"dynamic_finger_hold_exit_distance_recli",		(u64)&(((struct kernel_grip_info *)0)->reclining_data.dynamic_finger_hold_exit_distance)},
	{"dynamic_finger_hold_narrow_witdh_recli",	(u64)&(((struct kernel_grip_info *)0)->reclining_data.dynamic_finger_hold_narrow_witdh)},
	{"dynamic_finger_hold_size_x_recli", 	(u64)&(((struct kernel_grip_info *)0)->reclining_data.dynamic_finger_hold_size_x)},
	{"edge_sliding_exit_yfsr_thd_recli", 	(u64)&(((struct kernel_grip_info *)0)->reclining_data.edge_sliding_exit_yfsr_thd)},
	{"edge_sliding_exit_distance_recli", 	(u64)&(((struct kernel_grip_info *)0)->reclining_data.edge_sliding_exit_distance)},
	{"long_start_coupling_thd_recli", 	(u64)&(((struct kernel_grip_info *)0)->reclining_data.long_start_coupling_thd)},
	{"long_stable_coupling_thd_recli",		(u64)&(((struct kernel_grip_info *)0)->reclining_data.long_stable_coupling_thd)},
	{"long_hold_changed_thd_recli",		(u64)&(((struct kernel_grip_info *)0)->reclining_data.long_hold_changed_thd)},
	{"long_hold_maxfsr_gap_recli",		(u64)&(((struct kernel_grip_info *)0)->reclining_data.long_hold_maxfsr_gap)},
	/*add for curved_screen_v4.2  recling mode end*/
};

#define KEY_ADDR_NUMS sizeof(key_addr_arrays)/sizeof(struct key_addr)

static inline uint16_t get_key_addr_value(void *base, int index)
{
	return *(uint16_t *)(base + key_addr_arrays[index].offset);
}

static inline void set_key_addr_value(void *base, int index, uint16_t value)
{
	*(uint16_t *)(base + key_addr_arrays[index].offset) = value;
}

int kernel_grip_print_func(struct seq_file *s,
			   struct kernel_grip_info *grip_info)
{
	int value = 0;
	return value;
}

static int kernel_grip_read_func(struct seq_file *s, void *v)
{
	int value = 0;
	return value;
}

static ssize_t kernel_grip_write(struct file *file, const char __user *buffer,
				 size_t count, loff_t *ppos)
{
	int ts_debug = 0;
	ts_debug++;
	return count;
}

static int kernel_grip_open(struct inode *inode, struct file *file)
{
	return single_open(file, kernel_grip_read_func, PDE_DATA(inode));
}

DECLARE_PROC_OPS(tp_kernel_grip_fops, kernel_grip_open, seq_read, kernel_grip_write, single_release);

static ssize_t proc_touch_dir_read(struct file *file, char __user *user_buf,
				   size_t count, loff_t *ppos)
{
	ssize_t ret = 0;
	return ret;
}

static ssize_t proc_touch_dir_write(struct file *file,
				    const char __user *buffer, size_t count, loff_t *ppos)
{
	int ts_debug = 0;
	ts_debug++;
	return count;
}

DECLARE_PROC_OPS(touch_dir_proc_fops, simple_open, proc_touch_dir_read, proc_touch_dir_write, NULL);

static ssize_t proc_touch_reclining_read(struct file *file, char __user *user_buf,
				   size_t count, loff_t *ppos)
{
	ssize_t ret = 0;

	return ret;
}



static ssize_t proc_touch_reclining_write(struct file *file,
				    const char __user *buffer, size_t count, loff_t *ppos)
{
	buffer = NULL;
	return count;
}

DECLARE_PROC_OPS(touch_reclining_proc_fops, simple_open, proc_touch_reclining_read, proc_touch_reclining_write, NULL);

void init_kernel_grip_proc(struct proc_dir_entry *prEntry_tp,
			   struct kernel_grip_info *grip_info)
{
	int ret = 0;
	ret++;
	return;
}

void kernel_grip_reset(struct kernel_grip_info *grip_info)
{
	int ts_debug = 0;
	ts_debug++;
	return;
}

struct kernel_grip_info *kernel_grip_init(struct device *dev)
{
    struct kernel_grip_info *grip_info = NULL;
	
	grip_info = kzalloc(sizeof(struct kernel_grip_info), GFP_KERNEL);

	if (!grip_info) {
		TPD_INFO("kzalloc kernel grip info failed.\n");
		return NULL;
	}
	
	return grip_info;
}