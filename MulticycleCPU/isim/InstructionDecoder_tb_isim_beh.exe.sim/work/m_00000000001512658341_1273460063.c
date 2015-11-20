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
static const char *ng0 = "C:/Users/Jingning Zhang/Documents/GitHub/EC413Project/MulticycleCPU/InstructionDecoder.v";

static void NetReassign_32_1(char *);
static void NetReassign_33_2(char *);
static void NetReassign_34_3(char *);
static void NetReassign_35_4(char *);
static void NetReassign_36_5(char *);


static void Always_30_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4888);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1768);
    xsi_set_assignedflag(t4);
    t5 = (t0 + 6624);
    *((int *)t5) = 1;
    NetReassign_32_1(t0);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1928);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 6628);
    *((int *)t3) = 1;
    NetReassign_33_2(t0);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2248);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 6632);
    *((int *)t3) = 1;
    NetReassign_34_3(t0);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2088);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 6636);
    *((int *)t3) = 1;
    NetReassign_35_4(t0);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2408);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 6640);
    *((int *)t3) = 1;
    NetReassign_36_5(t0);
    goto LAB2;

}

static void NetReassign_32_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t17[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
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
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t13);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t13) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t5) > 0)
        goto LAB14;

LAB15:    memcpy(t4, t33, 8);

LAB16:    t34 = (t0 + 6624);
    if (*((int *)t34) > 0)
        goto LAB17;

LAB18:    if (t3 > 0)
        goto LAB19;

LAB20:    t37 = (t0 + 4904);
    *((int *)t37) = 0;

LAB21:
LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 26);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 26);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 63U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 63U);
    goto LAB9;

LAB10:    t31 = (t0 + 1768);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t4, 6, t17, 6, t33, 6);
    goto LAB16;

LAB14:    memcpy(t4, t17, 8);
    goto LAB16;

LAB17:    t35 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t35, t4, 0, 0, 0, 6, ((int*)(t34)));
    t3 = 1;
    goto LAB18;

LAB19:    t36 = (t0 + 4904);
    *((int *)t36) = 1;
    goto LAB21;

}

static void NetReassign_33_2(char *t0)
{
    char t4[8];
    char t5[8];
    char t17[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
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
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t13);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t13) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t5) > 0)
        goto LAB14;

LAB15:    memcpy(t4, t33, 8);

LAB16:    t34 = (t0 + 6628);
    if (*((int *)t34) > 0)
        goto LAB17;

LAB18:    if (t3 > 0)
        goto LAB19;

LAB20:    t37 = (t0 + 4920);
    *((int *)t37) = 0;

LAB21:
LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 21);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 21);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 31U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 31U);
    goto LAB9;

LAB10:    t31 = (t0 + 1928);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t4, 5, t17, 5, t33, 5);
    goto LAB16;

LAB14:    memcpy(t4, t17, 8);
    goto LAB16;

LAB17:    t35 = (t0 + 1928);
    xsi_vlogvar_assignassignvalue(t35, t4, 0, 0, 0, 5, ((int*)(t34)));
    t3 = 1;
    goto LAB18;

LAB19:    t36 = (t0 + 4920);
    *((int *)t36) = 1;
    goto LAB21;

}

static void NetReassign_34_3(char *t0)
{
    char t4[8];
    char t5[8];
    char t17[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
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
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t13);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t13) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t5) > 0)
        goto LAB14;

LAB15:    memcpy(t4, t33, 8);

LAB16:    t34 = (t0 + 6632);
    if (*((int *)t34) > 0)
        goto LAB17;

LAB18:    if (t3 > 0)
        goto LAB19;

LAB20:    t37 = (t0 + 4936);
    *((int *)t37) = 0;

LAB21:
LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 16);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 16);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 31U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 31U);
    goto LAB9;

LAB10:    t31 = (t0 + 2248);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t4, 5, t17, 5, t33, 5);
    goto LAB16;

LAB14:    memcpy(t4, t17, 8);
    goto LAB16;

LAB17:    t35 = (t0 + 2248);
    xsi_vlogvar_assignassignvalue(t35, t4, 0, 0, 0, 5, ((int*)(t34)));
    t3 = 1;
    goto LAB18;

LAB19:    t36 = (t0 + 4936);
    *((int *)t36) = 1;
    goto LAB21;

}

static void NetReassign_35_4(char *t0)
{
    char t4[8];
    char t5[8];
    char t17[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
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
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t13);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t13) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t5) > 0)
        goto LAB14;

LAB15:    memcpy(t4, t33, 8);

LAB16:    t34 = (t0 + 6636);
    if (*((int *)t34) > 0)
        goto LAB17;

LAB18:    if (t3 > 0)
        goto LAB19;

LAB20:    t37 = (t0 + 4952);
    *((int *)t37) = 0;

LAB21:
LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 11);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 11);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 31U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 31U);
    goto LAB9;

LAB10:    t31 = (t0 + 2088);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t4, 5, t17, 5, t33, 5);
    goto LAB16;

LAB14:    memcpy(t4, t17, 8);
    goto LAB16;

LAB17:    t35 = (t0 + 2088);
    xsi_vlogvar_assignassignvalue(t35, t4, 0, 0, 0, 5, ((int*)(t34)));
    t3 = 1;
    goto LAB18;

LAB19:    t36 = (t0 + 4952);
    *((int *)t36) = 1;
    goto LAB21;

}

static void NetReassign_36_5(char *t0)
{
    char t4[8];
    char t5[8];
    char t17[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
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
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 4568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t13);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t13) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t5) > 0)
        goto LAB14;

LAB15:    memcpy(t4, t33, 8);

LAB16:    t34 = (t0 + 6640);
    if (*((int *)t34) > 0)
        goto LAB17;

LAB18:    if (t3 > 0)
        goto LAB19;

LAB20:    t37 = (t0 + 4968);
    *((int *)t37) = 0;

LAB21:
LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 65535U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 65535U);
    goto LAB9;

LAB10:    t31 = (t0 + 2408);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t4, 16, t17, 16, t33, 16);
    goto LAB16;

LAB14:    memcpy(t4, t17, 8);
    goto LAB16;

LAB17:    t35 = (t0 + 2408);
    xsi_vlogvar_assignassignvalue(t35, t4, 0, 0, 0, 16, ((int*)(t34)));
    t3 = 1;
    goto LAB18;

LAB19:    t36 = (t0 + 4968);
    *((int *)t36) = 1;
    goto LAB21;

}


extern void work_m_00000000001512658341_1273460063_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)NetReassign_32_1,(void *)NetReassign_33_2,(void *)NetReassign_34_3,(void *)NetReassign_35_4,(void *)NetReassign_36_5};
	xsi_register_didat("work_m_00000000001512658341_1273460063", "isim/InstructionDecoder_tb_isim_beh.exe.sim/work/m_00000000001512658341_1273460063.didat");
	xsi_register_executes(pe);
}
