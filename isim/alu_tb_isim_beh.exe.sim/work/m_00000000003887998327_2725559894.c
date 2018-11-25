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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//vmware-host/Shared Folders/Shared Folder VPC/Verilog Projects/alu/alu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};

static void NetReassign_52_3(char *);


static void Cont_33_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
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
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 784U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
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

LAB9:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t21);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t42, 8);

LAB16:    t41 = (t0 + 2876);
    t43 = (t41 + 32U);
    t44 = *((char **)t43);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    memcpy(t46, t3, 8);
    xsi_driver_vfirst_trans(t41, 0, 31);
    t47 = (t0 + 2808);
    *((int *)t47) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    memset(t25, 0, 8);
    t26 = (t25 + 4);
    t28 = (t27 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (~(t29));
    *((unsigned int *)t25) = t30;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB18;

LAB17:    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 4294967295U);
    t36 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t36 & 4294967295U);
    goto LAB9;

LAB10:    t41 = (t0 + 692U);
    t42 = *((char **)t41);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t25, 32, t42, 32);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

LAB18:    t31 = *((unsigned int *)t25);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t25) = (t31 | t32);
    t33 = *((unsigned int *)t26);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t26) = (t33 | t34);
    goto LAB17;

}

static void Cont_34_1(char *t0)
{
    char t5[16];
    char t7[16];
    char t11[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);
    xsi_vlog_unsigned_add(t5, 33, t3, 32, t4, 32);
    t2 = (t0 + 784U);
    t6 = *((char **)t2);
    t2 = (t0 + 760U);
    t8 = (t2 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t7, 33, t6, t9, 2, t10, 32, 1);
    xsi_vlog_unsigned_add(t11, 33, t5, 33, t7, 33);
    t12 = (t0 + 2912);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    xsi_vlog_bit_copy(t16, 0, t11, 0, 33);
    xsi_driver_vfirst_trans(t12, 0, 32);
    t17 = (t0 + 2816);
    *((int *)t17) = 1;

LAB1:    return;
}

static void Always_36_2(char *t0)
{
    char t4[8];
    char t16[8];
    char t41[8];
    char t42[8];
    char t44[8];
    char t75[8];
    char t76[8];
    char t78[8];
    char t80[8];
    char t109[8];
    char t141[8];
    char t151[8];
    char t159[8];
    char t173[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
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
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t77;
    char *t79;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2824);
    *((int *)t2) = 1;
    t3 = (t0 + 2496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 784U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);

LAB6:    t14 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t14, 2);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t6 = (t16 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 1380);
    xsi_vlogvar_assign_value(t14, t16, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t20 = (t10 | t13);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB25;

LAB22:    if (t23 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t16) = 1;

LAB25:    t18 = (t0 + 1472);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t16 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = ((char*)((ng3)));
    memset(t41, 0, 8);
    t7 = (t16 + 4);
    t14 = (t6 + 4);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t6);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t14);
    t25 = (t23 ^ t24);
    t27 = (t22 | t25);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t14);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB29;

LAB26:    if (t30 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t41) = 1;

LAB29:    t18 = (t0 + 968U);
    t19 = *((char **)t18);
    memset(t42, 0, 8);
    t18 = (t42 + 4);
    t26 = (t19 + 8);
    t43 = (t19 + 12);
    t35 = *((unsigned int *)t26);
    t36 = (t35 >> 0);
    t37 = (t36 & 1);
    *((unsigned int *)t42) = t37;
    t38 = *((unsigned int *)t43);
    t39 = (t38 >> 0);
    t40 = (t39 & 1);
    *((unsigned int *)t18) = t40;
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t42);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t41 + 4);
    t49 = (t42 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB30;

LAB31:
LAB32:    t74 = (t0 + 1564);
    xsi_vlogvar_assign_value(t74, t44, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t16 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = ((char*)((ng3)));
    memset(t41, 0, 8);
    t7 = (t16 + 4);
    t14 = (t6 + 4);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t6);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t14);
    t25 = (t23 ^ t24);
    t27 = (t22 | t25);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t14);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB36;

LAB33:    if (t30 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t41) = 1;

LAB36:    t18 = (t0 + 600U);
    t19 = *((char **)t18);
    memset(t44, 0, 8);
    t18 = (t44 + 4);
    t26 = (t19 + 4);
    t35 = *((unsigned int *)t19);
    t36 = (t35 >> 31);
    t37 = (t36 & 1);
    *((unsigned int *)t44) = t37;
    t38 = *((unsigned int *)t26);
    t39 = (t38 >> 31);
    t40 = (t39 & 1);
    *((unsigned int *)t18) = t40;
    t43 = (t0 + 692U);
    t48 = *((char **)t43);
    memset(t75, 0, 8);
    t43 = (t75 + 4);
    t49 = (t48 + 4);
    t45 = *((unsigned int *)t48);
    t46 = (t45 >> 31);
    t47 = (t46 & 1);
    *((unsigned int *)t75) = t47;
    t51 = *((unsigned int *)t49);
    t52 = (t51 >> 31);
    t53 = (t52 & 1);
    *((unsigned int *)t43) = t53;
    t54 = *((unsigned int *)t44);
    t55 = *((unsigned int *)t75);
    t56 = (t54 ^ t55);
    *((unsigned int *)t76) = t56;
    t50 = (t44 + 4);
    t58 = (t75 + 4);
    t59 = (t76 + 4);
    t57 = *((unsigned int *)t50);
    t60 = *((unsigned int *)t58);
    t61 = (t57 | t60);
    *((unsigned int *)t59) = t61;
    t62 = *((unsigned int *)t59);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB37;

LAB38:
LAB39:    t74 = (t0 + 784U);
    t77 = *((char **)t74);
    memset(t78, 0, 8);
    t74 = (t78 + 4);
    t79 = (t77 + 4);
    t66 = *((unsigned int *)t77);
    t67 = (t66 >> 0);
    t68 = (t67 & 1);
    *((unsigned int *)t78) = t68;
    t69 = *((unsigned int *)t79);
    t70 = (t69 >> 0);
    t71 = (t70 & 1);
    *((unsigned int *)t74) = t71;
    t72 = *((unsigned int *)t76);
    t73 = *((unsigned int *)t78);
    t81 = (t72 ^ t73);
    *((unsigned int *)t80) = t81;
    t82 = (t76 + 4);
    t83 = (t78 + 4);
    t84 = (t80 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB40;

LAB41:
LAB42:    memset(t42, 0, 8);
    t92 = (t80 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t80);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t92) == 0)
        goto LAB43;

LAB45:    t98 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t98) = 1;

LAB46:    t99 = (t42 + 4);
    t100 = (t80 + 4);
    t101 = *((unsigned int *)t80);
    t102 = (~(t101));
    *((unsigned int *)t42) = t102;
    *((unsigned int *)t99) = 0;
    if (*((unsigned int *)t100) != 0)
        goto LAB48;

LAB47:    t107 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t107 & 1U);
    t108 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t108 & 1U);
    t110 = *((unsigned int *)t41);
    t111 = *((unsigned int *)t42);
    t112 = (t110 & t111);
    *((unsigned int *)t109) = t112;
    t113 = (t41 + 4);
    t114 = (t42 + 4);
    t115 = (t109 + 4);
    t116 = *((unsigned int *)t113);
    t117 = *((unsigned int *)t114);
    t118 = (t116 | t117);
    *((unsigned int *)t115) = t118;
    t119 = *((unsigned int *)t115);
    t120 = (t119 != 0);
    if (t120 == 1)
        goto LAB49;

LAB50:
LAB51:    t139 = (t0 + 600U);
    t140 = *((char **)t139);
    memset(t141, 0, 8);
    t139 = (t141 + 4);
    t142 = (t140 + 4);
    t143 = *((unsigned int *)t140);
    t144 = (t143 >> 31);
    t145 = (t144 & 1);
    *((unsigned int *)t141) = t145;
    t146 = *((unsigned int *)t142);
    t147 = (t146 >> 31);
    t148 = (t147 & 1);
    *((unsigned int *)t139) = t148;
    t149 = (t0 + 968U);
    t150 = *((char **)t149);
    memset(t151, 0, 8);
    t149 = (t151 + 4);
    t152 = (t150 + 4);
    t153 = *((unsigned int *)t150);
    t154 = (t153 >> 31);
    t155 = (t154 & 1);
    *((unsigned int *)t151) = t155;
    t156 = *((unsigned int *)t152);
    t157 = (t156 >> 31);
    t158 = (t157 & 1);
    *((unsigned int *)t149) = t158;
    t160 = *((unsigned int *)t141);
    t161 = *((unsigned int *)t151);
    t162 = (t160 ^ t161);
    *((unsigned int *)t159) = t162;
    t163 = (t141 + 4);
    t164 = (t151 + 4);
    t165 = (t159 + 4);
    t166 = *((unsigned int *)t163);
    t167 = *((unsigned int *)t164);
    t168 = (t166 | t167);
    *((unsigned int *)t165) = t168;
    t169 = *((unsigned int *)t165);
    t170 = (t169 != 0);
    if (t170 == 1)
        goto LAB52;

LAB53:
LAB54:    t174 = *((unsigned int *)t109);
    t175 = *((unsigned int *)t159);
    t176 = (t174 & t175);
    *((unsigned int *)t173) = t176;
    t177 = (t109 + 4);
    t178 = (t159 + 4);
    t179 = (t173 + 4);
    t180 = *((unsigned int *)t177);
    t181 = *((unsigned int *)t178);
    t182 = (t180 | t181);
    *((unsigned int *)t179) = t182;
    t183 = *((unsigned int *)t179);
    t184 = (t183 != 0);
    if (t184 == 1)
        goto LAB55;

LAB56:
LAB57:    t204 = (t0 + 1656);
    xsi_vlogvar_assign_value(t204, t173, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1288);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 4044);
    *((int *)t3) = 1;
    NetReassign_52_3(t0);
    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);
    t17 = (t0 + 968U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t17) = t23;
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 4294967295U);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 4294967295U);
    t26 = (t0 + 1196);
    xsi_vlogvar_assign_value(t26, t16, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 968U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 4294967295U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 4294967295U);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 32);
    goto LAB15;

LAB11:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 692U);
    t6 = *((char **)t3);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t16) = t10;
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t14 = (t16 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t14) = t13;
    t20 = *((unsigned int *)t14);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB16;

LAB17:
LAB18:    t19 = (t0 + 1196);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 32);
    goto LAB15;

LAB13:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 692U);
    t6 = *((char **)t3);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t16) = t10;
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t14 = (t16 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t14) = t13;
    t20 = *((unsigned int *)t14);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB19;

LAB20:
LAB21:    t19 = (t0 + 1196);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 32);
    goto LAB15;

LAB16:    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t22 | t23);
    t17 = (t5 + 4);
    t18 = (t6 + 4);
    t24 = *((unsigned int *)t5);
    t25 = (~(t24));
    t27 = *((unsigned int *)t17);
    t28 = (~(t27));
    t29 = *((unsigned int *)t6);
    t30 = (~(t29));
    t31 = *((unsigned int *)t18);
    t32 = (~(t31));
    t33 = (t25 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t35);
    t38 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t38 & t36);
    t39 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t39 & t35);
    t40 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t40 & t36);
    goto LAB18;

LAB19:    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t22 | t23);
    t17 = (t5 + 4);
    t18 = (t6 + 4);
    t24 = *((unsigned int *)t17);
    t25 = (~(t24));
    t27 = *((unsigned int *)t5);
    t33 = (t27 & t25);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t31);
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t32);
    goto LAB21;

LAB24:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB25;

LAB28:    t17 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB29;

LAB30:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t41 + 4);
    t59 = (t42 + 4);
    t60 = *((unsigned int *)t41);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t42);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t15 = (t61 & t63);
    t33 = (t65 & t67);
    t68 = (~(t15));
    t69 = (~(t33));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    t72 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t72 & t68);
    t73 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t73 & t69);
    goto LAB32;

LAB35:    t17 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB36;

LAB37:    t64 = *((unsigned int *)t76);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t76) = (t64 | t65);
    goto LAB39;

LAB40:    t90 = *((unsigned int *)t80);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t80) = (t90 | t91);
    goto LAB42;

LAB43:    *((unsigned int *)t42) = 1;
    goto LAB46;

LAB48:    t103 = *((unsigned int *)t42);
    t104 = *((unsigned int *)t100);
    *((unsigned int *)t42) = (t103 | t104);
    t105 = *((unsigned int *)t99);
    t106 = *((unsigned int *)t100);
    *((unsigned int *)t99) = (t105 | t106);
    goto LAB47;

LAB49:    t121 = *((unsigned int *)t109);
    t122 = *((unsigned int *)t115);
    *((unsigned int *)t109) = (t121 | t122);
    t123 = (t41 + 4);
    t124 = (t42 + 4);
    t125 = *((unsigned int *)t41);
    t126 = (~(t125));
    t127 = *((unsigned int *)t123);
    t128 = (~(t127));
    t129 = *((unsigned int *)t42);
    t130 = (~(t129));
    t131 = *((unsigned int *)t124);
    t132 = (~(t131));
    t15 = (t126 & t128);
    t33 = (t130 & t132);
    t133 = (~(t15));
    t134 = (~(t33));
    t135 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t135 & t133);
    t136 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t136 & t134);
    t137 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t137 & t133);
    t138 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t138 & t134);
    goto LAB51;

LAB52:    t171 = *((unsigned int *)t159);
    t172 = *((unsigned int *)t165);
    *((unsigned int *)t159) = (t171 | t172);
    goto LAB54;

LAB55:    t185 = *((unsigned int *)t173);
    t186 = *((unsigned int *)t179);
    *((unsigned int *)t173) = (t185 | t186);
    t187 = (t109 + 4);
    t188 = (t159 + 4);
    t189 = *((unsigned int *)t109);
    t190 = (~(t189));
    t191 = *((unsigned int *)t187);
    t192 = (~(t191));
    t193 = *((unsigned int *)t159);
    t194 = (~(t193));
    t195 = *((unsigned int *)t188);
    t196 = (~(t195));
    t34 = (t190 & t192);
    t197 = (t194 & t196);
    t198 = (~(t34));
    t199 = (~(t197));
    t200 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t200 & t198);
    t201 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t201 & t199);
    t202 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t202 & t198);
    t203 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t203 & t199);
    goto LAB57;

}

static void NetReassign_52_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 2612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t3 = 0;
    t2 = (t0 + 1656);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1564);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t10 = (t0 + 1472);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    t13 = (t0 + 1380);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    xsi_vlogtype_concat(t4, 4, 4, 4U, t15, 1, t12, 1, t9, 1, t6, 1);
    t16 = (t0 + 4044);
    if (*((int *)t16) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t19 = (t0 + 2832);
    *((int *)t19) = 0;

LAB8:
LAB1:    return;
LAB4:    t17 = (t0 + 1288);
    xsi_vlogvar_assignassignvalue(t17, t4, 0, 0, 0, 4, ((int*)(t16)));
    t3 = 1;
    goto LAB5;

LAB6:    t18 = (t0 + 2832);
    *((int *)t18) = 1;
    goto LAB8;

}


extern void work_m_00000000003887998327_2725559894_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_34_1,(void *)Always_36_2,(void *)NetReassign_52_3};
	xsi_register_didat("work_m_00000000003887998327_2725559894", "isim/alu_tb_isim_beh.exe.sim/work/m_00000000003887998327_2725559894.didat");
	xsi_register_executes(pe);
}
