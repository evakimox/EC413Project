/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Jingning Zhang/Documents/GitHub/EC413Project/MulticycleCPU/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {9U, 0U};
static int ng9[] = {1, 0};
static int ng10[] = {0, 0};

static void NetReassign_38_2(char *);
static void NetReassign_39_3(char *);
static void NetReassign_40_4(char *);
static void NetReassign_41_5(char *);
static void NetReassign_42_6(char *);
static void NetReassign_43_7(char *);
static void NetReassign_44_8(char *);
static void NetReassign_45_9(char *);
static void NetReassign_48_10(char *);


static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5648);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1928);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 7528);
    *((int *)t3) = 1;
    NetReassign_48_10(t0);
    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 1768);
    xsi_set_assignedflag(t7);
    t8 = (t0 + 7496);
    *((int *)t8) = 1;
    NetReassign_38_2(t0);
    goto LAB23;

LAB9:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7500);
    *((int *)t4) = 1;
    NetReassign_39_3(t0);
    goto LAB23;

LAB11:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7504);
    *((int *)t4) = 1;
    NetReassign_40_4(t0);
    goto LAB23;

LAB13:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7508);
    *((int *)t4) = 1;
    NetReassign_41_5(t0);
    goto LAB23;

LAB15:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7512);
    *((int *)t4) = 1;
    NetReassign_42_6(t0);
    goto LAB23;

LAB17:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7516);
    *((int *)t4) = 1;
    NetReassign_43_7(t0);
    goto LAB23;

LAB19:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7520);
    *((int *)t4) = 1;
    NetReassign_44_8(t0);
    goto LAB23;

LAB21:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7524);
    *((int *)t4) = 1;
    NetReassign_45_9(t0);
    goto LAB23;

}

static void NetReassign_38_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 7496);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 5664);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 5664);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_39_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 4294967295U);
    t15 = (t0 + 7500);
    if (*((int *)t15) > 0)
        goto LAB6;

LAB7:    if (t3 > 0)
        goto LAB8;

LAB9:    t18 = (t0 + 5680);
    *((int *)t18) = 0;

LAB10:
LAB1:    return;
LAB5:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t2) = (t11 | t12);
    goto LAB4;

LAB6:    t16 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t16, t4, 0, 0, 0, 32, ((int*)(t15)));
    t3 = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 5680);
    *((int *)t17) = 1;
    goto LAB10;

}

static void NetReassign_40_4(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 3840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t2 = (t0 + 7504);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 5696);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t7, t6, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 5696);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_41_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 4088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 32, t5, 32);
    t2 = (t0 + 7508);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 5712);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t7, t6, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 5712);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_42_6(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 4336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    t33 = (t0 + 7512);
    if (*((int *)t33) > 0)
        goto LAB7;

LAB8:    if (t3 > 0)
        goto LAB9;

LAB10:    t36 = (t0 + 5728);
    *((int *)t36) = 0;

LAB11:
LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t24));
    t30 = (~(t28));
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & t29);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t32 & t30);
    goto LAB6;

LAB7:    t34 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t34, t6, 0, 0, 0, 32, ((int*)(t33)));
    t3 = 1;
    goto LAB8;

LAB9:    t35 = (t0 + 5728);
    *((int *)t35) = 1;
    goto LAB11;

}

static void NetReassign_43_7(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 4584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    t37 = (t0 + 7516);
    if (*((int *)t37) > 0)
        goto LAB7;

LAB8:    if (t3 > 0)
        goto LAB9;

LAB10:    t40 = (t0 + 5744);
    *((int *)t40) = 0;

LAB11:
LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t31);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    goto LAB6;

LAB7:    t38 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t38, t6, 0, 0, 0, 32, ((int*)(t37)));
    t3 = 1;
    goto LAB8;

LAB9:    t39 = (t0 + 5744);
    *((int *)t39) = 1;
    goto LAB11;

}

static void NetReassign_44_8(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 4832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    t2 = (t0 + 1208U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t6 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB5;

LAB4:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB6;

LAB7:    memset(t5, 0, 8);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t8);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB12:    t18 = (t5 + 4);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB13;

LAB14:    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t18);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t18) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t5) > 0)
        goto LAB19;

LAB20:    memcpy(t4, t27, 8);

LAB21:    t28 = (t0 + 7520);
    if (*((int *)t28) > 0)
        goto LAB22;

LAB23:    if (t3 > 0)
        goto LAB24;

LAB25:    t31 = (t0 + 5760);
    *((int *)t31) = 0;

LAB26:
LAB1:    return;
LAB5:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t5) = 1;
    goto LAB12;

LAB11:    t17 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB12;

LAB13:    t22 = ((char*)((ng2)));
    goto LAB14;

LAB15:    t27 = ((char*)((ng1)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t4, 32, t22, 32, t27, 32);
    goto LAB21;

LAB19:    memcpy(t4, t22, 8);
    goto LAB21;

LAB22:    t29 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t29, t4, 0, 0, 0, 32, ((int*)(t28)));
    t3 = 1;
    goto LAB23;

LAB24:    t30 = (t0 + 5760);
    *((int *)t30) = 1;
    goto LAB26;

}

static void NetReassign_45_9(char *t0)
{
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t3 = 0;
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t14 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 32, 32, 2U, t14, 16, t5, 16);
    t15 = (t0 + 7524);
    if (*((int *)t15) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t18 = (t0 + 5776);
    *((int *)t18) = 0;

LAB8:
LAB1:    return;
LAB4:    t16 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t16, t4, 0, 0, 0, 32, ((int*)(t15)));
    t3 = 1;
    goto LAB5;

LAB6:    t17 = (t0 + 5776);
    *((int *)t17) = 1;
    goto LAB8;

}

static void NetReassign_48_10(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 5328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    t2 = (t0 + 1208U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t6 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t2);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t5, 0, 8);
    t23 = (t8 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t8);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t5 + 4);
    t31 = *((unsigned int *)t5);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t5);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t30) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t5) > 0)
        goto LAB18;

LAB19:    memcpy(t4, t39, 8);

LAB20:    t40 = (t0 + 7528);
    if (*((int *)t40) > 0)
        goto LAB21;

LAB22:    if (t3 > 0)
        goto LAB23;

LAB24:    t43 = (t0 + 5792);
    *((int *)t43) = 0;

LAB25:
LAB1:    return;
LAB6:    t22 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t5) = 1;
    goto LAB11;

LAB10:    t29 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = ((char*)((ng9)));
    goto LAB13;

LAB14:    t39 = ((char*)((ng10)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t4, 32, t34, 32, t39, 32);
    goto LAB20;

LAB18:    memcpy(t4, t34, 8);
    goto LAB20;

LAB21:    t41 = (t0 + 1928);
    xsi_vlogvar_assignassignvalue(t41, t4, 0, 0, 0, 1, ((int*)(t40)));
    t3 = 1;
    goto LAB22;

LAB23:    t42 = (t0 + 5792);
    *((int *)t42) = 1;
    goto LAB25;

}


extern void work_m_00000000002755050679_0886308060_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_35_1,(void *)NetReassign_38_2,(void *)NetReassign_39_3,(void *)NetReassign_40_4,(void *)NetReassign_41_5,(void *)NetReassign_42_6,(void *)NetReassign_43_7,(void *)NetReassign_44_8,(void *)NetReassign_45_9,(void *)NetReassign_48_10};
	xsi_register_didat("work_m_00000000002755050679_0886308060", "isim/Datapath_tb_isim_beh.exe.sim/work/m_00000000002755050679_0886308060.didat");
	xsi_register_executes(pe);
}
