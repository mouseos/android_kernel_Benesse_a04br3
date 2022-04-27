/*
 * Copyright (C) 2015 MediaTek Inc.
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

#ifndef _MTK_BATTERY_METER_TABLE_H
#define _MTK_BATTERY_METER_TABLE_H

/* ============================================================*/
/* define*/
/* ============================================================*/
#define BAT_NTC_10 1
#define BAT_NTC_47 0
#define BAT_NTC_100 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900
#define RBAT_PULL_DOWN_R           30000
#endif
#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900
#define RBAT_PULL_DOWN_R           100000
#endif
#if (BAT_NTC_100 == 1)
#define RBAT_PULL_UP_R             24000
#define RBAT_PULL_DOWN_R           100000000
#endif
#define RBAT_PULL_UP_VOLT          1800


/* ============================================================*/
/* ENUM*/
/* ============================================================*/

/* ============================================================*/
/* structure*/
/* ============================================================*/

/* ============================================================*/
/* typedef*/
/* ============================================================*/
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance;
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

/* ============================================================*/
/* External Variables*/
/* ============================================================*/

/* ============================================================*/
/* External function*/
/* ============================================================*/

/* ============================================================*/
/* <DOD, Battery_Voltage> Table*/
/* ============================================================*/
#if (BAT_NTC_10 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 76241},
		{-15, 58649},
		{-10, 45569},
		{ -5, 35735},
		{  0, 28271},
		{  5, 22551},
		{ 10, 18136},
		{ 15, 14696},
		{ 20, 11997},
		{ 25, 10000},
		{ 30, 8365},
		{ 35, 7011},
		{ 40, 5951},
		{ 45, 4992},
		{ 50, 4217},
		{ 55, 3579},
		{ 60, 3051}
};
#endif

#if (BAT_NTC_47 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 483954},
		{-15, 360850},
		{-10, 271697},
		{ -5, 206463},
		{  0, 158214},
		{  5, 122259},
		{ 10, 95227},
		{ 15, 74730},
		{ 20, 59065},
		{ 25, 47000},
		{ 30, 37643},
		{ 35, 30334},
		{ 40, 24591},
		{ 45, 20048},
		{ 50, 16433},
		{ 55, 13539},
		{ 60, 11210}
};
#endif

#if (BAT_NTC_100 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 1151037},
		{-15, 846579},
		{-10, 628988},
		{ -5, 471632},
		{  0, 357012},
		{  5, 272500},
		{ 10, 209710},
		{ 15, 162651},
		{ 20, 127080},
		{ 25, 100000},
		{ 30, 79222},
		{ 35, 63167},
		{ 40, 50677},
		{ 45, 40904},
		{ 50, 33195},
		{ 55, 27091},
		{ 60, 22224}
};
#endif
/* T0 -10C*/
BATTERY_PROFILE_STRUCT battery_profile_t0[] = {
		{0, 4175},
		{2, 4152},
		{4, 4133},
		{5, 4115},
		{7, 4098},
		{9, 4083},
		{11, 4069},
		{13, 4054},
		{14, 4037},
		{16, 4020},
		{18, 4005},
		{20, 3993},
		{21, 3981},
		{23, 3971},
		{25, 3959},
		{27, 3948},
		{29, 3937},
		{30, 3927},
		{32, 3917},
		{34, 3907},
		{36, 3897},
		{38, 3886},
		{39, 3875},
		{41, 3861},
		{43, 3848},
		{45, 3836},
		{47, 3826},
		{48, 3818},
		{50, 3811},
		{52, 3805},
		{54, 3800},
		{55, 3795},
		{57, 3791},
		{59, 3788},
		{61, 3783},
		{63, 3780},
		{64, 3777},
		{66, 3775},
		{68, 3773},
		{70, 3771},
		{72, 3769},
		{73, 3766},
		{75, 3762},
		{77, 3755},
		{79, 3748},
		{80, 3741},
		{82, 3733},
		{84, 3721},
		{86, 3710},
		{88, 3694},
		{89, 3689},
		{91, 3686},
		{93, 3684},
		{95, 3679},
		{97, 3638},
		{98, 3544},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381}
};

/* T1 0C*/
BATTERY_PROFILE_STRUCT battery_profile_t1[] = {
		{0, 4175},
		{2, 4152},
		{4, 4133},
		{5, 4115},
		{7, 4098},
		{9, 4083},
		{11, 4069},
		{13, 4054},
		{14, 4037},
		{16, 4020},
		{18, 4005},
		{20, 3993},
		{21, 3981},
		{23, 3971},
		{25, 3959},
		{27, 3948},
		{29, 3937},
		{30, 3927},
		{32, 3917},
		{34, 3907},
		{36, 3897},
		{38, 3886},
		{39, 3875},
		{41, 3861},
		{43, 3848},
		{45, 3836},
		{47, 3826},
		{48, 3818},
		{50, 3811},
		{52, 3805},
		{54, 3800},
		{55, 3795},
		{57, 3791},
		{59, 3788},
		{61, 3783},
		{63, 3780},
		{64, 3777},
		{66, 3775},
		{68, 3773},
		{70, 3771},
		{72, 3769},
		{73, 3766},
		{75, 3762},
		{77, 3755},
		{79, 3748},
		{80, 3741},
		{82, 3733},
		{84, 3721},
		{86, 3710},
		{88, 3694},
		{89, 3689},
		{91, 3686},
		{93, 3684},
		{95, 3679},
		{97, 3638},
		{98, 3544},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381}
};

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] = {
		{0, 4175},
		{2, 4152},
		{4, 4133},
		{5, 4115},
		{7, 4098},
		{9, 4083},
		{11, 4069},
		{13, 4054},
		{14, 4037},
		{16, 4020},
		{18, 4005},
		{20, 3993},
		{21, 3981},
		{23, 3971},
		{25, 3959},
		{27, 3948},
		{29, 3937},
		{30, 3927},
		{32, 3917},
		{34, 3907},
		{36, 3897},
		{38, 3886},
		{39, 3875},
		{41, 3861},
		{43, 3848},
		{45, 3836},
		{47, 3826},
		{48, 3818},
		{50, 3811},
		{52, 3805},
		{54, 3800},
		{55, 3795},
		{57, 3791},
		{59, 3788},
		{61, 3783},
		{63, 3780},
		{64, 3777},
		{66, 3775},
		{68, 3773},
		{70, 3771},
		{72, 3769},
		{73, 3766},
		{75, 3762},
		{77, 3755},
		{79, 3748},
		{80, 3741},
		{82, 3733},
		{84, 3721},
		{86, 3710},
		{88, 3694},
		{89, 3689},
		{91, 3686},
		{93, 3684},
		{95, 3679},
		{97, 3638},
		{98, 3544},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381}
};

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[] = {
		{0, 4175},
		{2, 4152},
		{4, 4133},
		{5, 4115},
		{7, 4098},
		{9, 4083},
		{11, 4069},
		{13, 4054},
		{14, 4037},
		{16, 4020},
		{18, 4005},
		{20, 3993},
		{21, 3981},
		{23, 3971},
		{25, 3959},
		{27, 3948},
		{29, 3937},
		{30, 3927},
		{32, 3917},
		{34, 3907},
		{36, 3897},
		{38, 3886},
		{39, 3875},
		{41, 3861},
		{43, 3848},
		{45, 3836},
		{47, 3826},
		{48, 3818},
		{50, 3811},
		{52, 3805},
		{54, 3800},
		{55, 3795},
		{57, 3791},
		{59, 3788},
		{61, 3783},
		{63, 3780},
		{64, 3777},
		{66, 3775},
		{68, 3773},
		{70, 3771},
		{72, 3769},
		{73, 3766},
		{75, 3762},
		{77, 3755},
		{79, 3748},
		{80, 3741},
		{82, 3733},
		{84, 3721},
		{86, 3710},
		{88, 3694},
		{89, 3689},
		{91, 3686},
		{93, 3684},
		{95, 3679},
		{97, 3638},
		{98, 3544},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381},
		{100, 3381}
};

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3*/
BATTERY_PROFILE_STRUCT battery_profile_temperature[] = {
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0}
};

/* ============================================================*/
/* <Rbat, Battery_Voltage> Table*/
/* ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[] = {
		{145, 4175},
		{145, 4152},
		{147, 4133},
		{147, 4115},
		{148, 4098},
		{150, 4083},
		{153, 4069},
		{155, 4054},
		{157, 4037},
		{157, 4020},
		{160, 4005},
		{165, 3993},
		{165, 3981},
		{168, 3971},
		{170, 3959},
		{172, 3948},
		{173, 3937},
		{177, 3927},
		{177, 3917},
		{178, 3907},
		{178, 3897},
		{177, 3886},
		{175, 3875},
		{167, 3861},
		{160, 3848},
		{153, 3836},
		{150, 3826},
		{150, 3818},
		{148, 3811},
		{148, 3805},
		{148, 3800},
		{150, 3795},
		{152, 3791},
		{153, 3788},
		{152, 3783},
		{153, 3780},
		{155, 3777},
		{157, 3775},
		{157, 3773},
		{157, 3771},
		{157, 3769},
		{157, 3766},
		{155, 3762},
		{152, 3755},
		{150, 3748},
		{148, 3741},
		{152, 3733},
		{148, 3721},
		{152, 3710},
		{147, 3694},
		{147, 3689},
		{148, 3686},
		{158, 3684},
		{170, 3679},
		{162, 3638},
		{165, 3544},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381}
};
/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[] = {
		{145, 4175},
		{145, 4152},
		{147, 4133},
		{147, 4115},
		{148, 4098},
		{150, 4083},
		{153, 4069},
		{155, 4054},
		{157, 4037},
		{157, 4020},
		{160, 4005},
		{165, 3993},
		{165, 3981},
		{168, 3971},
		{170, 3959},
		{172, 3948},
		{173, 3937},
		{177, 3927},
		{177, 3917},
		{178, 3907},
		{178, 3897},
		{177, 3886},
		{175, 3875},
		{167, 3861},
		{160, 3848},
		{153, 3836},
		{150, 3826},
		{150, 3818},
		{148, 3811},
		{148, 3805},
		{148, 3800},
		{150, 3795},
		{152, 3791},
		{153, 3788},
		{152, 3783},
		{153, 3780},
		{155, 3777},
		{157, 3775},
		{157, 3773},
		{157, 3771},
		{157, 3769},
		{157, 3766},
		{155, 3762},
		{152, 3755},
		{150, 3748},
		{148, 3741},
		{152, 3733},
		{148, 3721},
		{152, 3710},
		{147, 3694},
		{147, 3689},
		{148, 3686},
		{158, 3684},
		{170, 3679},
		{162, 3638},
		{165, 3544},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381}
};
/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[] = {
		{145, 4175},
		{145, 4152},
		{147, 4133},
		{147, 4115},
		{148, 4098},
		{150, 4083},
		{153, 4069},
		{155, 4054},
		{157, 4037},
		{157, 4020},
		{160, 4005},
		{165, 3993},
		{165, 3981},
		{168, 3971},
		{170, 3959},
		{172, 3948},
		{173, 3937},
		{177, 3927},
		{177, 3917},
		{178, 3907},
		{178, 3897},
		{177, 3886},
		{175, 3875},
		{167, 3861},
		{160, 3848},
		{153, 3836},
		{150, 3826},
		{150, 3818},
		{148, 3811},
		{148, 3805},
		{148, 3800},
		{150, 3795},
		{152, 3791},
		{153, 3788},
		{152, 3783},
		{153, 3780},
		{155, 3777},
		{157, 3775},
		{157, 3773},
		{157, 3771},
		{157, 3769},
		{157, 3766},
		{155, 3762},
		{152, 3755},
		{150, 3748},
		{148, 3741},
		{152, 3733},
		{148, 3721},
		{152, 3710},
		{147, 3694},
		{147, 3689},
		{148, 3686},
		{158, 3684},
		{170, 3679},
		{162, 3638},
		{165, 3544},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381}
};
/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[] = {
		{145, 4175},
		{145, 4152},
		{147, 4133},
		{147, 4115},
		{148, 4098},
		{150, 4083},
		{153, 4069},
		{155, 4054},
		{157, 4037},
		{157, 4020},
		{160, 4005},
		{165, 3993},
		{165, 3981},
		{168, 3971},
		{170, 3959},
		{172, 3948},
		{173, 3937},
		{177, 3927},
		{177, 3917},
		{178, 3907},
		{178, 3897},
		{177, 3886},
		{175, 3875},
		{167, 3861},
		{160, 3848},
		{153, 3836},
		{150, 3826},
		{150, 3818},
		{148, 3811},
		{148, 3805},
		{148, 3800},
		{150, 3795},
		{152, 3791},
		{153, 3788},
		{152, 3783},
		{153, 3780},
		{155, 3777},
		{157, 3775},
		{157, 3773},
		{157, 3771},
		{157, 3769},
		{157, 3766},
		{155, 3762},
		{152, 3755},
		{150, 3748},
		{148, 3741},
		{152, 3733},
		{148, 3721},
		{152, 3710},
		{147, 3694},
		{147, 3689},
		{148, 3686},
		{158, 3684},
		{170, 3679},
		{162, 3638},
		{165, 3544},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381},
		{190, 3381}
};
/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3*/
R_PROFILE_STRUCT r_profile_temperature[] = {
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0}
};

/* ============================================================*/
/* function prototype*/
/* ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif	/*#ifndef _MTK_BATTERY_METER_TABLE_H*/

