
/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _MTK_EEM_INTERNAL_SSPM_H_
#define _MTK_EEM_INTERNAL_SSPM_H_

struct eem_det;
struct eem_ctrl;

enum {
	IPI_EEM_INIT,
	IPI_EEM_PROBE,
	IPI_EEM_INIT01,
	IPI_EEM_INIT02,
	IPI_EEM_DEBUG_PROC_SHOW,
	IPI_EEM_DEBUG_PROC_WRITE,
	IPI_EEM_VCORE_INIT,
	IPI_EEM_VCORE_UPDATE_PROC_WRITE,

	#ifdef EEM_CUR_VOLT_PROC_SHOW
	IPI_EEM_CUR_VOLT_PROC_SHOW,
	#endif

	#ifdef EEM_OFFSET
	IPI_EEM_OFFSET_PROC_WRITE,
	#endif

	#ifdef EEM_LOG_TIMER
	IPI_EEM_LOGEN_PROC_SHOW,
	IPI_EEM_LOGEN_PROC_WRITE,
	#endif
	/* IPI_EEM_VCORE_GET_VOLT,*/
	/* IPI_EEM_GPU_DVFS_GET_STATUS,*/
	NR_EEM_IPI,
};

struct eem_ipi_data {
	unsigned int cmd;
	union {
		struct {
			unsigned int arg[3];
		} data;
	} u;
};

struct eem_det_ops {
	/* interface to PMIC */
	int (*volt_2_pmic)(struct eem_det *det, int volt);
	int (*volt_2_eem)(struct eem_det *det, int volt);
	int (*pmic_2_volt)(struct eem_det *det, int pmic_val);
	int (*eem_2_pmic)(struct eem_det *det, int eev_val);
};

/* define as same as the struct in sspm */
struct eem_det {
	/* devinfo */
	unsigned int EEMINITEN;
	unsigned int EEMMONEN;
	unsigned int disabled; /* Disabled by error or sysfs */
	int status;			/* TODO: enable/disable */

	/* for PMIC */
	unsigned int eem_v_base;
	unsigned int eem_step;
	unsigned int pmic_base;
	unsigned int pmic_step;

	/* slope */
	unsigned int MTS;
	unsigned int BTS;
	unsigned int t250;

	/* constant */
	unsigned int AGECONFIG;
	unsigned int DCCONFIG;

	/* dvfs */
	unsigned int num_freq_tbl; /* could be got @ the same time with freq_tbl[] */
	unsigned int max_freq_khz; /* maximum frequency used to calculate percentage */

	struct eem_det_ops *ops;
	enum eem_ctrl_id ctrl_id;

	/* Generated by EEM init01. Used in EEM init02 */
	unsigned short DCVOFFSETIN;
	unsigned short AGEVOFFSETIN;

	/* constant */
	unsigned short DETWINDOW;
	unsigned short DETMAX;

	unsigned char freq_tbl[NR_FREQ]; /* percentage to maximum freq */

	unsigned char volt_tbl[NR_FREQ]; /* pmic value */

	/*unsigned char volt_tbl_init2[NR_FREQ];*/ /* pmic value */
	unsigned short volt_tbl_pmic[NR_FREQ]; /* pmic value */
	/*unsigned int volt_tbl_bin[NR_FREQ];*/

	unsigned char features; /* enum eem_features */

	unsigned char BDES;
	unsigned char MDES;
	unsigned char DCBDET;
	unsigned char DCMDET;
	unsigned char AGEDELTA;
	unsigned char MTDES;

	unsigned char VMAX;
	unsigned char VMIN;
	unsigned char DTHI;
	unsigned char DTLO;
	unsigned char VBOOT;
	unsigned char AGEM;
	unsigned char DVTFIXED;
	unsigned char VCO;

	const char *name;
	unsigned char set_volt_to_upower; /*only when init2, eem need to set volt to upower*/

	#ifdef EEM_OFFSET
	char volt_offset;
	#endif
	/* char pi_offset; */
};

struct eem_log_det {
	enum eem_ctrl_id ctrl_id;
	unsigned char num_freq_tbl;
	unsigned int dcvalues[NR_EEM_PHASE];
	unsigned int freqpct30[NR_EEM_PHASE];
	unsigned int eem_26c[NR_EEM_PHASE];
	unsigned int vop30[NR_EEM_PHASE];
	unsigned int eem_eemEn[NR_EEM_PHASE];
	unsigned int temp;

	/* orig volt table for restoreing to dvfs*/
	unsigned short volt_tbl_orig[NR_FREQ];
	unsigned char volt_tbl_init2[NR_FREQ];
	unsigned char volt_tbl[NR_FREQ];
	unsigned short volt_tbl_pmic[NR_FREQ];
	unsigned char freq_tbl[NR_FREQ];
	unsigned char lock;
	#if DUMP_DATA_TO_DE
	unsigned int reg_dump_data[ARRAY_SIZE(reg_dump_addr_off)][NR_EEM_PHASE];
	#endif
};

struct eem_log {
	unsigned int hw_res[NR_HW_RES];
	struct eem_log_det det_log[NR_EEM_DET];
};

extern struct eem_det_ops big_det_ops;
extern struct eem_det_ops gpu_det_ops;
extern struct eem_det_ops soc_det_ops;
extern struct eem_det_ops little_det_ops;
extern struct eem_det_ops dual_little_det_ops;
extern struct eem_det_ops cci_det_ops;
extern struct eem_det_ops dmy_det_ops;

#endif
