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
static unsigned int ng9[] = {12U, 0U};
static int ng10[] = {1, 0};
static int ng11[] = {0, 0};

static void NetReassign_38_2(char *);
static void NetReassign_39_3(char *);
static void NetReassign_40_4(char *);
static void NetReassign_41_5(char *);
static void NetReassign_42_6(char *);
static void NetReassign_43_7(char *);
static void NetReassign_44_8(char *);
static void NetReassign_45_9(char *);
static void NetReassign_46_10(char *);
static void NetReassign_48_11(char *);


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
    t2 = (t0 + 5896);
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

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1928);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 7816);
    *((int *)t3) = 1;
    NetReassign_48_11(t0);
    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 1768);
    xsi_set_assignedflag(t7);
    t8 = (t0 + 7780);
    *((int *)t8) = 1;
    NetReassign_38_2(t0);
    goto LAB25;

LAB9:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7784);
    *((int *)t4) = 1;
    NetReassign_39_3(t0);
    goto LAB25;

LAB11:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7788);
    *((int *)t4) = 1;
    NetReassign_40_4(t0);
    goto LAB25;

LAB13:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7792);
    *((int *)t4) = 1;
    NetReassign_41_5(t0);
    goto LAB25;

LAB15:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7796);
    *((int *)t4) = 1;
    NetReassign_42_6(t0);
    goto LAB25;

LAB17:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7800);
    *((int *)t4) = 1;
    NetReassign_43_7(t0);
    goto LAB25;

LAB19:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7804);
    *((int *)t4) = 1;
    NetReassign_44_8(t0);
    goto LAB25;

LAB21:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7808);
    *((int *)t4) = 1;
    NetReassign_45_9(t0);
    goto LAB25;

LAB23:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7812);
    *((int *)t4) = 1;
    NetReassign_46_10(t0);
    goto LAB25;

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
    t2 = (t0 + 7780);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 5912);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 5912);
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
    t15 = (t0 + 7784);
    if (*((int *)t15) > 0)
        goto LAB6;

LAB7:    if (t3 > 0)
        goto LAB8;

LAB9:    t18 = (t0 + 5928);
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

LAB8:    t17 = (t0 + 5928);
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
    t2 = (t0 + 7788);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 5944);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t7, t6, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 5944);
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
    t2 = (t0 + 7792);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 5960);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t7, t6, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 5960);
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
LAB6:    t33 = (t0 + 7796);
    if (*((int *)t33) > 0)
        goto LAB7;

LAB8:    if (t3 > 0)
        goto LAB9;

LAB10:    t36 = (t0 + 5976);
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

LAB9:    t35 = (t0 + 5976);
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
LAB6:    t37 = (t0 + 7800);
    if (*((int *)t37) > 0)
        goto LAB7;

LAB8:    if (t3 > 0)
        goto LAB9;

LAB10:    t40 = (t0 + 5992);
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

LAB9:    t39 = (t0 + 5992);
    *((int *)t39) = 1;
    goto LAB11;

}

static void NetReassign_44_8(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char t11[8];
    char t23[8];
    char t26[8];
    char t51[8];
    char t63[8];
    char t66[8];
    char t91[8];
    char t99[8];
    char t131[8];
    char t139[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t64;
    char *t65;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    int t163;
    int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    char *t188;
    char *t189;
    char *t190;
    char *t191;

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

LAB7:    memset(t11, 0, 8);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    memcpy(t139, t11, 8);

LAB15:    memset(t5, 0, 8);
    t171 = (t139 + 4);
    t172 = *((unsigned int *)t171);
    t173 = (~(t172));
    t174 = *((unsigned int *)t139);
    t175 = (t174 & t173);
    t176 = (t175 & 1U);
    if (t176 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t171) != 0)
        goto LAB51;

LAB52:    t178 = (t5 + 4);
    t179 = *((unsigned int *)t5);
    t180 = *((unsigned int *)t178);
    t181 = (t179 || t180);
    if (t181 > 0)
        goto LAB53;

LAB54:    t183 = *((unsigned int *)t5);
    t184 = (~(t183));
    t185 = *((unsigned int *)t178);
    t186 = (t184 || t185);
    if (t186 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t178) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t5) > 0)
        goto LAB59;

LAB60:    memcpy(t4, t187, 8);

LAB61:    t188 = (t0 + 7804);
    if (*((int *)t188) > 0)
        goto LAB62;

LAB63:    if (t3 > 0)
        goto LAB64;

LAB65:    t191 = (t0 + 6008);
    *((int *)t191) = 0;

LAB66:
LAB1:    return;
LAB5:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB11:    t18 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t24 = (t0 + 1048U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t24 = (t26 + 4);
    t27 = (t25 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 31);
    t30 = (t29 & 1);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 31);
    t33 = (t32 & 1);
    *((unsigned int *)t24) = t33;
    memset(t23, 0, 8);
    t34 = (t26 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t26);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t34) == 0)
        goto LAB16;

LAB18:    t40 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t40) = 1;

LAB19:    t41 = (t23 + 4);
    t42 = (t26 + 4);
    t43 = *((unsigned int *)t26);
    t44 = (~(t43));
    *((unsigned int *)t23) = t44;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB21;

LAB20:    t49 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t49 & 1U);
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 & 1U);
    memset(t51, 0, 8);
    t52 = (t23 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t23);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t52) != 0)
        goto LAB24;

LAB25:    t59 = (t51 + 4);
    t60 = *((unsigned int *)t51);
    t61 = *((unsigned int *)t59);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB26;

LAB27:    memcpy(t99, t51, 8);

LAB28:    memset(t131, 0, 8);
    t132 = (t99 + 4);
    t133 = *((unsigned int *)t132);
    t134 = (~(t133));
    t135 = *((unsigned int *)t99);
    t136 = (t135 & t134);
    t137 = (t136 & 1U);
    if (t137 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t132) != 0)
        goto LAB44;

LAB45:    t140 = *((unsigned int *)t11);
    t141 = *((unsigned int *)t131);
    t142 = (t140 & t141);
    *((unsigned int *)t139) = t142;
    t143 = (t11 + 4);
    t144 = (t131 + 4);
    t145 = (t139 + 4);
    t146 = *((unsigned int *)t143);
    t147 = *((unsigned int *)t144);
    t148 = (t146 | t147);
    *((unsigned int *)t145) = t148;
    t149 = *((unsigned int *)t145);
    t150 = (t149 != 0);
    if (t150 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB15;

LAB16:    *((unsigned int *)t23) = 1;
    goto LAB19;

LAB21:    t45 = *((unsigned int *)t23);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t23) = (t45 | t46);
    t47 = *((unsigned int *)t41);
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t47 | t48);
    goto LAB20;

LAB22:    *((unsigned int *)t51) = 1;
    goto LAB25;

LAB24:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB25;

LAB26:    t64 = (t0 + 1208U);
    t65 = *((char **)t64);
    memset(t66, 0, 8);
    t64 = (t66 + 4);
    t67 = (t65 + 4);
    t68 = *((unsigned int *)t65);
    t69 = (t68 >> 31);
    t70 = (t69 & 1);
    *((unsigned int *)t66) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 >> 31);
    t73 = (t72 & 1);
    *((unsigned int *)t64) = t73;
    memset(t63, 0, 8);
    t74 = (t66 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t66);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t74) == 0)
        goto LAB29;

LAB31:    t80 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t80) = 1;

LAB32:    t81 = (t63 + 4);
    t82 = (t66 + 4);
    t83 = *((unsigned int *)t66);
    t84 = (~(t83));
    *((unsigned int *)t63) = t84;
    *((unsigned int *)t81) = 0;
    if (*((unsigned int *)t82) != 0)
        goto LAB34;

LAB33:    t89 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t89 & 1U);
    t90 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t90 & 1U);
    memset(t91, 0, 8);
    t92 = (t63 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t63);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t92) != 0)
        goto LAB37;

LAB38:    t100 = *((unsigned int *)t51);
    t101 = *((unsigned int *)t91);
    t102 = (t100 & t101);
    *((unsigned int *)t99) = t102;
    t103 = (t51 + 4);
    t104 = (t91 + 4);
    t105 = (t99 + 4);
    t106 = *((unsigned int *)t103);
    t107 = *((unsigned int *)t104);
    t108 = (t106 | t107);
    *((unsigned int *)t105) = t108;
    t109 = *((unsigned int *)t105);
    t110 = (t109 != 0);
    if (t110 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB28;

LAB29:    *((unsigned int *)t63) = 1;
    goto LAB32;

LAB34:    t85 = *((unsigned int *)t63);
    t86 = *((unsigned int *)t82);
    *((unsigned int *)t63) = (t85 | t86);
    t87 = *((unsigned int *)t81);
    t88 = *((unsigned int *)t82);
    *((unsigned int *)t81) = (t87 | t88);
    goto LAB33;

LAB35:    *((unsigned int *)t91) = 1;
    goto LAB38;

LAB37:    t98 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB38;

LAB39:    t111 = *((unsigned int *)t99);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t99) = (t111 | t112);
    t113 = (t51 + 4);
    t114 = (t91 + 4);
    t115 = *((unsigned int *)t51);
    t116 = (~(t115));
    t117 = *((unsigned int *)t113);
    t118 = (~(t117));
    t119 = *((unsigned int *)t91);
    t120 = (~(t119));
    t121 = *((unsigned int *)t114);
    t122 = (~(t121));
    t123 = (t116 & t118);
    t124 = (t120 & t122);
    t125 = (~(t123));
    t126 = (~(t124));
    t127 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t127 & t125);
    t128 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t128 & t126);
    t129 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t129 & t125);
    t130 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t130 & t126);
    goto LAB41;

LAB42:    *((unsigned int *)t131) = 1;
    goto LAB45;

LAB44:    t138 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB45;

LAB46:    t151 = *((unsigned int *)t139);
    t152 = *((unsigned int *)t145);
    *((unsigned int *)t139) = (t151 | t152);
    t153 = (t11 + 4);
    t154 = (t131 + 4);
    t155 = *((unsigned int *)t11);
    t156 = (~(t155));
    t157 = *((unsigned int *)t153);
    t158 = (~(t157));
    t159 = *((unsigned int *)t131);
    t160 = (~(t159));
    t161 = *((unsigned int *)t154);
    t162 = (~(t161));
    t163 = (t156 & t158);
    t164 = (t160 & t162);
    t165 = (~(t163));
    t166 = (~(t164));
    t167 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t167 & t165);
    t168 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t168 & t166);
    t169 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t169 & t165);
    t170 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t170 & t166);
    goto LAB48;

LAB49:    *((unsigned int *)t5) = 1;
    goto LAB52;

LAB51:    t177 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t177) = 1;
    goto LAB52;

LAB53:    t182 = ((char*)((ng2)));
    goto LAB54;

LAB55:    t187 = ((char*)((ng1)));
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t4, 32, t182, 32, t187, 32);
    goto LAB61;

LAB59:    memcpy(t4, t182, 8);
    goto LAB61;

LAB62:    t189 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t189, t4, 0, 0, 0, 32, ((int*)(t188)));
    t3 = 1;
    goto LAB63;

LAB64:    t190 = (t0 + 6008);
    *((int *)t190) = 1;
    goto LAB66;

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
    t15 = (t0 + 7808);
    if (*((int *)t15) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t18 = (t0 + 6024);
    *((int *)t18) = 0;

LAB8:
LAB1:    return;
LAB4:    t16 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t16, t4, 0, 0, 0, 32, ((int*)(t15)));
    t3 = 1;
    goto LAB5;

LAB6:    t17 = (t0 + 6024);
    *((int *)t17) = 1;
    goto LAB8;

}

static void NetReassign_46_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t3 = 0;
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 7812);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 6040);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 6040);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_48_11(char *t0)
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

LAB0:    t1 = (t0 + 5576U);
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

LAB20:    t40 = (t0 + 7816);
    if (*((int *)t40) > 0)
        goto LAB21;

LAB22:    if (t3 > 0)
        goto LAB23;

LAB24:    t43 = (t0 + 6056);
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

LAB12:    t34 = ((char*)((ng10)));
    goto LAB13;

LAB14:    t39 = ((char*)((ng11)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t4, 32, t34, 32, t39, 32);
    goto LAB20;

LAB18:    memcpy(t4, t34, 8);
    goto LAB20;

LAB21:    t41 = (t0 + 1928);
    xsi_vlogvar_assignassignvalue(t41, t4, 0, 0, 0, 1, ((int*)(t40)));
    t3 = 1;
    goto LAB22;

LAB23:    t42 = (t0 + 6056);
    *((int *)t42) = 1;
    goto LAB25;

}


extern void work_m_00000000002755050679_0886308060_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_35_1,(void *)NetReassign_38_2,(void *)NetReassign_39_3,(void *)NetReassign_40_4,(void *)NetReassign_41_5,(void *)NetReassign_42_6,(void *)NetReassign_43_7,(void *)NetReassign_44_8,(void *)NetReassign_45_9,(void *)NetReassign_46_10,(void *)NetReassign_48_11};
	xsi_register_didat("work_m_00000000002755050679_0886308060", "isim/FINALCPU_TB_isim_beh.exe.sim/work/m_00000000002755050679_0886308060.didat");
	xsi_register_executes(pe);
}
