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
static const char *ng0 = "C:/Users/Jingning Zhang/Documents/GitHub/EC413Project/MulticycleCPU/Datapath.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {65535U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {7U, 0U};
static int ng7[] = {0, 0};
static int ng8[] = {1, 0};

static void NetReassign_62_13(char *);


static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 7208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 7368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_60_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 8856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 12896);
    *((int *)t2) = 1;
    t3 = (t0 + 8888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 7528);
    xsi_set_assignedflag(t4);
    t5 = (t0 + 17348);
    *((int *)t5) = 1;
    NetReassign_62_13(t0);
    goto LAB2;

}

static void Cont_76_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 9104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 13152);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 15);
    t16 = (t0 + 12912);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_77_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 9352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2328U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 15);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t30, 8);

LAB16:    t31 = (t0 + 13216);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 65535U;
    t37 = t36;
    t38 = (t3 + 4);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 15);
    t44 = (t0 + 12928);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t30 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t25, 16, t30, 16);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

}

static void Cont_78_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 9600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13280);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void Cont_79_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t31[8];
    char t44[8];
    char t55[8];
    char t71[8];
    char t79[8];
    char t107[8];
    char t120[8];
    char t131[8];
    char t147[8];
    char t155[8];
    char t183[8];
    char t196[8];
    char t207[8];
    char t223[8];
    char t231[8];
    char t259[8];
    char t272[8];
    char t283[8];
    char t299[8];
    char t307[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    char *t206;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    char *t222;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    char *t236;
    char *t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    char *t266;
    char *t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    char *t273;
    char *t274;
    char *t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    char *t282;
    char *t284;
    char *t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    char *t298;
    char *t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    char *t306;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    char *t311;
    char *t312;
    char *t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    char *t321;
    char *t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    int t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    char *t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    char *t341;
    char *t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    char *t346;
    char *t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    char *t352;
    char *t353;
    char *t354;
    char *t355;
    char *t356;
    unsigned int t357;
    unsigned int t358;
    char *t359;
    unsigned int t360;
    unsigned int t361;
    char *t362;
    unsigned int t363;
    unsigned int t364;
    char *t365;

LAB0:    t1 = (t0 + 9848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1688U);
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
    *((unsigned int *)t5) = (t12 & 15U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 15U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB12;

LAB13:    memcpy(t79, t31, 8);

LAB14:    memset(t107, 0, 8);
    t108 = (t79 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t79);
    t112 = (t111 & t110);
    t113 = (t112 & 1U);
    if (t113 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t108) != 0)
        goto LAB28;

LAB29:    t115 = (t107 + 4);
    t116 = *((unsigned int *)t107);
    t117 = (!(t116));
    t118 = *((unsigned int *)t115);
    t119 = (t117 || t118);
    if (t119 > 0)
        goto LAB30;

LAB31:    memcpy(t155, t107, 8);

LAB32:    memset(t183, 0, 8);
    t184 = (t155 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t155);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t184) != 0)
        goto LAB46;

LAB47:    t191 = (t183 + 4);
    t192 = *((unsigned int *)t183);
    t193 = (!(t192));
    t194 = *((unsigned int *)t191);
    t195 = (t193 || t194);
    if (t195 > 0)
        goto LAB48;

LAB49:    memcpy(t231, t183, 8);

LAB50:    memset(t259, 0, 8);
    t260 = (t231 + 4);
    t261 = *((unsigned int *)t260);
    t262 = (~(t261));
    t263 = *((unsigned int *)t231);
    t264 = (t263 & t262);
    t265 = (t264 & 1U);
    if (t265 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t260) != 0)
        goto LAB64;

LAB65:    t267 = (t259 + 4);
    t268 = *((unsigned int *)t259);
    t269 = (!(t268));
    t270 = *((unsigned int *)t267);
    t271 = (t269 || t270);
    if (t271 > 0)
        goto LAB66;

LAB67:    memcpy(t307, t259, 8);

LAB68:    memset(t4, 0, 8);
    t335 = (t307 + 4);
    t336 = *((unsigned int *)t335);
    t337 = (~(t336));
    t338 = *((unsigned int *)t307);
    t339 = (t338 & t337);
    t340 = (t339 & 1U);
    if (t340 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t335) != 0)
        goto LAB82;

LAB83:    t342 = (t4 + 4);
    t343 = *((unsigned int *)t4);
    t344 = *((unsigned int *)t342);
    t345 = (t343 || t344);
    if (t345 > 0)
        goto LAB84;

LAB85:    t348 = *((unsigned int *)t4);
    t349 = (~(t348));
    t350 = *((unsigned int *)t342);
    t351 = (t349 || t350);
    if (t351 > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t342) > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t4) > 0)
        goto LAB90;

LAB91:    memcpy(t3, t352, 8);

LAB92:    t346 = (t0 + 13344);
    t353 = (t346 + 56U);
    t354 = *((char **)t353);
    t355 = (t354 + 56U);
    t356 = *((char **)t355);
    memset(t356, 0, 8);
    t357 = 65535U;
    t358 = t357;
    t359 = (t3 + 4);
    t360 = *((unsigned int *)t3);
    t357 = (t357 & t360);
    t361 = *((unsigned int *)t359);
    t358 = (t358 & t361);
    t362 = (t356 + 4);
    t363 = *((unsigned int *)t356);
    *((unsigned int *)t356) = (t363 | t357);
    t364 = *((unsigned int *)t362);
    *((unsigned int *)t362) = (t364 | t358);
    xsi_driver_vfirst_trans(t346, 16, 31);
    t365 = (t0 + 12944);
    *((int *)t365) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB10:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB12:    t45 = (t0 + 1688U);
    t46 = *((char **)t45);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t47 = (t46 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (t48 >> 0);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 0);
    *((unsigned int *)t45) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 15U);
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 15U);
    t54 = ((char*)((ng3)));
    memset(t55, 0, 8);
    t56 = (t44 + 4);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t44);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB18;

LAB15:    if (t67 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t55) = 1;

LAB18:    memset(t71, 0, 8);
    t72 = (t55 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t72) != 0)
        goto LAB21;

LAB22:    t80 = *((unsigned int *)t31);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = (t31 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t71) = 1;
    goto LAB22;

LAB21:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB22;

LAB23:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t31 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t93);
    t96 = (~(t95));
    t97 = *((unsigned int *)t31);
    t98 = (t97 & t96);
    t99 = *((unsigned int *)t94);
    t100 = (~(t99));
    t101 = *((unsigned int *)t71);
    t102 = (t101 & t100);
    t103 = (~(t98));
    t104 = (~(t102));
    t105 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t105 & t103);
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    goto LAB25;

LAB26:    *((unsigned int *)t107) = 1;
    goto LAB29;

LAB28:    t114 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t114) = 1;
    goto LAB29;

LAB30:    t121 = (t0 + 1688U);
    t122 = *((char **)t121);
    memset(t120, 0, 8);
    t121 = (t120 + 4);
    t123 = (t122 + 4);
    t124 = *((unsigned int *)t122);
    t125 = (t124 >> 0);
    *((unsigned int *)t120) = t125;
    t126 = *((unsigned int *)t123);
    t127 = (t126 >> 0);
    *((unsigned int *)t121) = t127;
    t128 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t128 & 15U);
    t129 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t129 & 15U);
    t130 = ((char*)((ng4)));
    memset(t131, 0, 8);
    t132 = (t120 + 4);
    t133 = (t130 + 4);
    t134 = *((unsigned int *)t120);
    t135 = *((unsigned int *)t130);
    t136 = (t134 ^ t135);
    t137 = *((unsigned int *)t132);
    t138 = *((unsigned int *)t133);
    t139 = (t137 ^ t138);
    t140 = (t136 | t139);
    t141 = *((unsigned int *)t132);
    t142 = *((unsigned int *)t133);
    t143 = (t141 | t142);
    t144 = (~(t143));
    t145 = (t140 & t144);
    if (t145 != 0)
        goto LAB36;

LAB33:    if (t143 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t131) = 1;

LAB36:    memset(t147, 0, 8);
    t148 = (t131 + 4);
    t149 = *((unsigned int *)t148);
    t150 = (~(t149));
    t151 = *((unsigned int *)t131);
    t152 = (t151 & t150);
    t153 = (t152 & 1U);
    if (t153 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t148) != 0)
        goto LAB39;

LAB40:    t156 = *((unsigned int *)t107);
    t157 = *((unsigned int *)t147);
    t158 = (t156 | t157);
    *((unsigned int *)t155) = t158;
    t159 = (t107 + 4);
    t160 = (t147 + 4);
    t161 = (t155 + 4);
    t162 = *((unsigned int *)t159);
    t163 = *((unsigned int *)t160);
    t164 = (t162 | t163);
    *((unsigned int *)t161) = t164;
    t165 = *((unsigned int *)t161);
    t166 = (t165 != 0);
    if (t166 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB35:    t146 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t147) = 1;
    goto LAB40;

LAB39:    t154 = (t147 + 4);
    *((unsigned int *)t147) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB40;

LAB41:    t167 = *((unsigned int *)t155);
    t168 = *((unsigned int *)t161);
    *((unsigned int *)t155) = (t167 | t168);
    t169 = (t107 + 4);
    t170 = (t147 + 4);
    t171 = *((unsigned int *)t169);
    t172 = (~(t171));
    t173 = *((unsigned int *)t107);
    t174 = (t173 & t172);
    t175 = *((unsigned int *)t170);
    t176 = (~(t175));
    t177 = *((unsigned int *)t147);
    t178 = (t177 & t176);
    t179 = (~(t174));
    t180 = (~(t178));
    t181 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t181 & t179);
    t182 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t182 & t180);
    goto LAB43;

LAB44:    *((unsigned int *)t183) = 1;
    goto LAB47;

LAB46:    t190 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB47;

LAB48:    t197 = (t0 + 1688U);
    t198 = *((char **)t197);
    memset(t196, 0, 8);
    t197 = (t196 + 4);
    t199 = (t198 + 4);
    t200 = *((unsigned int *)t198);
    t201 = (t200 >> 0);
    *((unsigned int *)t196) = t201;
    t202 = *((unsigned int *)t199);
    t203 = (t202 >> 0);
    *((unsigned int *)t197) = t203;
    t204 = *((unsigned int *)t196);
    *((unsigned int *)t196) = (t204 & 15U);
    t205 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t205 & 15U);
    t206 = ((char*)((ng5)));
    memset(t207, 0, 8);
    t208 = (t196 + 4);
    t209 = (t206 + 4);
    t210 = *((unsigned int *)t196);
    t211 = *((unsigned int *)t206);
    t212 = (t210 ^ t211);
    t213 = *((unsigned int *)t208);
    t214 = *((unsigned int *)t209);
    t215 = (t213 ^ t214);
    t216 = (t212 | t215);
    t217 = *((unsigned int *)t208);
    t218 = *((unsigned int *)t209);
    t219 = (t217 | t218);
    t220 = (~(t219));
    t221 = (t216 & t220);
    if (t221 != 0)
        goto LAB54;

LAB51:    if (t219 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t207) = 1;

LAB54:    memset(t223, 0, 8);
    t224 = (t207 + 4);
    t225 = *((unsigned int *)t224);
    t226 = (~(t225));
    t227 = *((unsigned int *)t207);
    t228 = (t227 & t226);
    t229 = (t228 & 1U);
    if (t229 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t224) != 0)
        goto LAB57;

LAB58:    t232 = *((unsigned int *)t183);
    t233 = *((unsigned int *)t223);
    t234 = (t232 | t233);
    *((unsigned int *)t231) = t234;
    t235 = (t183 + 4);
    t236 = (t223 + 4);
    t237 = (t231 + 4);
    t238 = *((unsigned int *)t235);
    t239 = *((unsigned int *)t236);
    t240 = (t238 | t239);
    *((unsigned int *)t237) = t240;
    t241 = *((unsigned int *)t237);
    t242 = (t241 != 0);
    if (t242 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB53:    t222 = (t207 + 4);
    *((unsigned int *)t207) = 1;
    *((unsigned int *)t222) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t223) = 1;
    goto LAB58;

LAB57:    t230 = (t223 + 4);
    *((unsigned int *)t223) = 1;
    *((unsigned int *)t230) = 1;
    goto LAB58;

LAB59:    t243 = *((unsigned int *)t231);
    t244 = *((unsigned int *)t237);
    *((unsigned int *)t231) = (t243 | t244);
    t245 = (t183 + 4);
    t246 = (t223 + 4);
    t247 = *((unsigned int *)t245);
    t248 = (~(t247));
    t249 = *((unsigned int *)t183);
    t250 = (t249 & t248);
    t251 = *((unsigned int *)t246);
    t252 = (~(t251));
    t253 = *((unsigned int *)t223);
    t254 = (t253 & t252);
    t255 = (~(t250));
    t256 = (~(t254));
    t257 = *((unsigned int *)t237);
    *((unsigned int *)t237) = (t257 & t255);
    t258 = *((unsigned int *)t237);
    *((unsigned int *)t237) = (t258 & t256);
    goto LAB61;

LAB62:    *((unsigned int *)t259) = 1;
    goto LAB65;

LAB64:    t266 = (t259 + 4);
    *((unsigned int *)t259) = 1;
    *((unsigned int *)t266) = 1;
    goto LAB65;

LAB66:    t273 = (t0 + 1688U);
    t274 = *((char **)t273);
    memset(t272, 0, 8);
    t273 = (t272 + 4);
    t275 = (t274 + 4);
    t276 = *((unsigned int *)t274);
    t277 = (t276 >> 0);
    *((unsigned int *)t272) = t277;
    t278 = *((unsigned int *)t275);
    t279 = (t278 >> 0);
    *((unsigned int *)t273) = t279;
    t280 = *((unsigned int *)t272);
    *((unsigned int *)t272) = (t280 & 15U);
    t281 = *((unsigned int *)t273);
    *((unsigned int *)t273) = (t281 & 15U);
    t282 = ((char*)((ng6)));
    memset(t283, 0, 8);
    t284 = (t272 + 4);
    t285 = (t282 + 4);
    t286 = *((unsigned int *)t272);
    t287 = *((unsigned int *)t282);
    t288 = (t286 ^ t287);
    t289 = *((unsigned int *)t284);
    t290 = *((unsigned int *)t285);
    t291 = (t289 ^ t290);
    t292 = (t288 | t291);
    t293 = *((unsigned int *)t284);
    t294 = *((unsigned int *)t285);
    t295 = (t293 | t294);
    t296 = (~(t295));
    t297 = (t292 & t296);
    if (t297 != 0)
        goto LAB72;

LAB69:    if (t295 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t283) = 1;

LAB72:    memset(t299, 0, 8);
    t300 = (t283 + 4);
    t301 = *((unsigned int *)t300);
    t302 = (~(t301));
    t303 = *((unsigned int *)t283);
    t304 = (t303 & t302);
    t305 = (t304 & 1U);
    if (t305 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t300) != 0)
        goto LAB75;

LAB76:    t308 = *((unsigned int *)t259);
    t309 = *((unsigned int *)t299);
    t310 = (t308 | t309);
    *((unsigned int *)t307) = t310;
    t311 = (t259 + 4);
    t312 = (t299 + 4);
    t313 = (t307 + 4);
    t314 = *((unsigned int *)t311);
    t315 = *((unsigned int *)t312);
    t316 = (t314 | t315);
    *((unsigned int *)t313) = t316;
    t317 = *((unsigned int *)t313);
    t318 = (t317 != 0);
    if (t318 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB68;

LAB71:    t298 = (t283 + 4);
    *((unsigned int *)t283) = 1;
    *((unsigned int *)t298) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t299) = 1;
    goto LAB76;

LAB75:    t306 = (t299 + 4);
    *((unsigned int *)t299) = 1;
    *((unsigned int *)t306) = 1;
    goto LAB76;

LAB77:    t319 = *((unsigned int *)t307);
    t320 = *((unsigned int *)t313);
    *((unsigned int *)t307) = (t319 | t320);
    t321 = (t259 + 4);
    t322 = (t299 + 4);
    t323 = *((unsigned int *)t321);
    t324 = (~(t323));
    t325 = *((unsigned int *)t259);
    t326 = (t325 & t324);
    t327 = *((unsigned int *)t322);
    t328 = (~(t327));
    t329 = *((unsigned int *)t299);
    t330 = (t329 & t328);
    t331 = (~(t326));
    t332 = (~(t330));
    t333 = *((unsigned int *)t313);
    *((unsigned int *)t313) = (t333 & t331);
    t334 = *((unsigned int *)t313);
    *((unsigned int *)t313) = (t334 & t332);
    goto LAB79;

LAB80:    *((unsigned int *)t4) = 1;
    goto LAB83;

LAB82:    t341 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t341) = 1;
    goto LAB83;

LAB84:    t346 = (t0 + 4088U);
    t347 = *((char **)t346);
    goto LAB85;

LAB86:    t346 = (t0 + 4248U);
    t352 = *((char **)t346);
    goto LAB87;

LAB88:    xsi_vlog_unsigned_bit_combine(t3, 16, t347, 16, t352, 16);
    goto LAB92;

LAB90:    memcpy(t3, t347, 8);
    goto LAB92;

}

static void Cont_87_6(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 10096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 15U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 15U);
    t12 = (t0 + 13408);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 15U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t25 = (t0 + 12960);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_98_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 10344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 13472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 15);
    t16 = (t0 + 12976);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_99_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 10592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13536);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 16, 31);

LAB1:    return;
}

static void Cont_101_9(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 10840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 7208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 13600);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 12992);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_110_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 11088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 13664);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 15);
    t16 = (t0 + 13008);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_123_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 11336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 13024);
    *((int *)t2) = 1;
    t3 = (t0 + 11368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(124, ng0);

LAB5:    xsi_set_current_line(125, ng0);
    t4 = (t0 + 4888U);
    t5 = *((char **)t4);
    t4 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB2;

}

static void Always_128_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 11584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 13040);
    *((int *)t2) = 1;
    t3 = (t0 + 11616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(129, ng0);

LAB5:    xsi_set_current_line(131, ng0);
    t4 = (t0 + 2808U);
    t5 = *((char **)t4);
    t4 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB2;

}

static void NetReassign_62_13(char *t0)
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

LAB0:    t1 = (t0 + 11832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t3 = 0;
    t2 = (t0 + 6328U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng7)));
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

LAB20:    t34 = (t0 + 17348);
    if (*((int *)t34) > 0)
        goto LAB21;

LAB22:    if (t3 > 0)
        goto LAB23;

LAB24:    t43 = (t0 + 13056);
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

LAB12:    t34 = (t0 + 4888U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t34 = (t0 + 5688U);
    t40 = *((char **)t34);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t4, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t4, t35, 8);
    goto LAB20;

LAB21:    t41 = (t0 + 7528);
    xsi_vlogvar_assignassignvalue(t41, t4, 0, 0, 0, 32, ((int*)(t34)));
    t3 = 1;
    goto LAB22;

LAB23:    t42 = (t0 + 13056);
    *((int *)t42) = 1;
    goto LAB25;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 12080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng8)));
    t3 = (t0 + 13728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 12328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng8)));
    t3 = (t0 + 13792);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 12576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4728U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 13856);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 13072);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}


extern void work_m_00000000003384265956_1292031434_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_60_1,(void *)Cont_76_2,(void *)Cont_77_3,(void *)Cont_78_4,(void *)Cont_79_5,(void *)Cont_87_6,(void *)Cont_98_7,(void *)Cont_99_8,(void *)Cont_101_9,(void *)Cont_110_10,(void *)Always_123_11,(void *)Always_128_12,(void *)NetReassign_62_13,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	xsi_register_didat("work_m_00000000003384265956_1292031434", "isim/Datapath_tb_isim_beh.exe.sim/work/m_00000000003384265956_1292031434.didat");
	xsi_register_executes(pe);
}
