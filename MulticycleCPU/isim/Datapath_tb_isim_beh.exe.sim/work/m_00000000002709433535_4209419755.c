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
static const char *ng0 = "C:/Users/Jingning Zhang/Documents/GitHub/EC413Project/MulticycleCPU/twomux5.v";
static int ng1[] = {1, 0};

static void NetReassign_29_1(char *);


static void Always_27_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1768);
    xsi_set_assignedflag(t4);
    t5 = (t0 + 4752);
    *((int *)t5) = 1;
    NetReassign_29_1(t0);
    goto LAB2;

}

static void NetReassign_29_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t7[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    char *t8;
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
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t3 = 0;
    t2 = (t0 + 1368U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = (t2 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB7:    memset(t5, 0, 8);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
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

LAB13:    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t30);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t30) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t5) > 0)
        goto LAB18;

LAB19:    memcpy(t4, t40, 8);

LAB20:    t34 = (t0 + 4752);
    if (*((int *)t34) > 0)
        goto LAB21;

LAB22:    if (t3 > 0)
        goto LAB23;

LAB24:    t43 = (t0 + 3272);
    *((int *)t43) = 0;

LAB25:
LAB1:    return;
LAB6:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t5) = 1;
    goto LAB11;

LAB10:    t29 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1208U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t34 = (t0 + 1048U);
    t40 = *((char **)t34);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t4, 5, t35, 5, t40, 5);
    goto LAB20;

LAB18:    memcpy(t4, t35, 8);
    goto LAB20;

LAB21:    t41 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t41, t4, 0, 0, 0, 5, ((int*)(t34)));
    t3 = 1;
    goto LAB22;

LAB23:    t42 = (t0 + 3272);
    *((int *)t42) = 1;
    goto LAB25;

}


extern void work_m_00000000002709433535_4209419755_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)NetReassign_29_1};
	xsi_register_didat("work_m_00000000002709433535_4209419755", "isim/Datapath_tb_isim_beh.exe.sim/work/m_00000000002709433535_4209419755.didat");
	xsi_register_executes(pe);
}
