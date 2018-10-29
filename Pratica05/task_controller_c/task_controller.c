/* --- Generated the 29/10/2018 at 10:47 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c task_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task_controller.h"

void Task_controller__task_controller_task_c_window_step(int task_up1,
                                                         int task_down1,
                                                         int task_up2,
                                                         int task_down2,
                                                         int task_s,
                                                         int task_e,
                                                         int task_finish,
                                                         int task_start,
                                                         int task_cold,
                                                         int task_temp_ok,
                                                         int task_eco,
                                                         int task_confort,
                                                         int task_on_lamp,
                                                         int task_on_tv,
                                                         int task_precense,
                                                         int task_push_door,
                                                         int task_push_window,
                                                         int task_v_418,
                                                         int task_v_417,
                                                         int task_pnr_8,
                                                         int task_v_398,
                                                         int task_v_397,
                                                         int task_pnr_7,
                                                         int task_v_362,
                                                         int task_v_361,
                                                         int task_v_360,
                                                         int task_pnr_6,
                                                         int task_v_309,
                                                         int task_v_308,
                                                         int task_v_307,
                                                         int task_pnr_5,
                                                         int task_ck_17_1,
                                                         int task_pnr_4,
                                                         int task_ck_19_1,
                                                         int task_pnr_3,
                                                         int task_ck_21_1,
                                                         int task_pnr_2,
                                                         int task_ck_23_1,
                                                         int task_pnr_1,
                                                         int task_ck_25_1,
                                                         int task_pnr,
                                                         int p_task_c_window,
                                                         int p_task_c_door,
                                                         int p_task_c_tv1,
                                                         int p_task_c_tv2,
                                                         int p_task_c_lamp2,
                                                         int p_task_c_lamp1,
                                                         int p_task_c4,
                                                         int p_task_c3,
                                                         int p_task_c2,
                                                         int p_task_c1,
                                                         int task_c_door,
                                                         int task_c_tv1,
                                                         int task_c_tv2,
                                                         int task_c_lamp2,
                                                         int task_c_lamp1,
                                                         int task_c4,
                                                         int task_c3,
                                                         int task_c2,
                                                         int task_c1,
                                                         Task_controller__task_controller_task_c_window_out* _out) {
  
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  sub_25 = false;
  if (task_on_tv) {
    sub_24 = false;
    sub_26 = sub_25;
  } else {
    sub_24 = sub_25;
    sub_26 = false;
  };
  if (task_ck_19_1) {
    v_63 = sub_26;
  } else {
    v_63 = sub_24;
  };
  sub_27 = sub_25;
  if (task_c_tv2) {
    sub_23 = v_63;
  } else {
    sub_23 = sub_27;
  };
  sub_28 = sub_27;
  if (task_ck_17_1) {
    v_64 = sub_23;
    sub_22 = sub_28;
  } else {
    v_64 = sub_28;
    sub_22 = sub_23;
  };
  if (task_on_lamp) {
    v_65 = sub_22;
  } else {
    v_65 = v_64;
  };
  if (task_c_lamp1) {
    v_66 = v_65;
  } else {
    v_66 = sub_23;
  };
  sub_29 = sub_28;
  if (task_c_lamp1) {
    v_67 = sub_29;
  } else {
    v_67 = sub_22;
  };
  if (task_c_lamp2) {
    v_68 = v_66;
  } else {
    v_68 = v_67;
  };
  if (task_ck_19_1) {
    v_62 = sub_27;
  } else {
    v_62 = false;
  };
  if (task_c_tv2) {
    sub_31 = false;
  } else {
    sub_31 = v_62;
  };
  if (task_ck_17_1) {
    v_69 = sub_31;
    sub_30 = sub_28;
  } else {
    v_69 = sub_28;
    sub_30 = sub_31;
  };
  if (task_c_lamp1) {
    v_72 = sub_29;
  } else {
    v_72 = sub_30;
  };
  if (task_on_lamp) {
    v_70 = sub_30;
  } else {
    v_70 = v_69;
  };
  if (task_c_lamp1) {
    v_71 = v_70;
  } else {
    v_71 = sub_31;
  };
  if (task_c_lamp2) {
    v_73 = v_71;
  } else {
    v_73 = v_72;
  };
  if (task_c_tv1) {
    sub_21 = v_68;
  } else {
    sub_21 = v_73;
  };
  if (task_ck_19_1) {
    v_61 = sub_24;
  } else {
    v_61 = sub_26;
  };
  if (task_c_tv2) {
    sub_33 = v_61;
  } else {
    sub_33 = false;
  };
  if (task_ck_17_1) {
    v_74 = sub_33;
    sub_32 = false;
  } else {
    v_74 = false;
    sub_32 = sub_33;
  };
  if (task_c_lamp1) {
    v_77 = false;
  } else {
    v_77 = sub_32;
  };
  if (task_on_lamp) {
    v_75 = sub_32;
  } else {
    v_75 = v_74;
  };
  if (task_c_lamp1) {
    v_76 = v_75;
  } else {
    v_76 = sub_33;
  };
  if (task_c_lamp2) {
    v_78 = v_76;
  } else {
    v_78 = v_77;
  };
  if (task_ck_19_1) {
    v_60 = false;
  } else {
    v_60 = sub_27;
  };
  if (task_c_tv2) {
    sub_35 = sub_27;
  } else {
    sub_35 = v_60;
  };
  if (task_ck_17_1) {
    v_79 = sub_35;
    sub_34 = false;
  } else {
    v_79 = false;
    sub_34 = sub_35;
  };
  if (task_c_lamp1) {
    v_82 = false;
  } else {
    v_82 = sub_34;
  };
  if (task_on_lamp) {
    v_80 = sub_34;
  } else {
    v_80 = v_79;
  };
  if (task_c_lamp1) {
    v_81 = v_80;
  } else {
    v_81 = sub_35;
  };
  if (task_c_lamp2) {
    v_83 = v_81;
  } else {
    v_83 = v_82;
  };
  if (task_c_tv1) {
    v_84 = v_78;
  } else {
    v_84 = v_83;
  };
  if (task_precense) {
    sub_20 = sub_21;
  } else {
    sub_20 = v_84;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (task_down2) {
    sub_36 = sub_10;
  } else {
    sub_36 = false;
  };
  if (task_c2) {
    v_85 = false;
  } else {
    v_85 = sub_36;
  };
  if (task_v_398) {
    sub_6 = v_85;
  } else {
    sub_6 = sub_7;
  };
  if (task_precense) {
    sub_54 = sub_21;
  } else {
    sub_54 = false;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (task_c3) {
    sub_59 = false;
  } else {
    sub_59 = sub_53;
  };
  if (task_v_360) {
    v_54 = sub_52;
  } else {
    v_54 = sub_59;
  };
  if (task_e) {
    sub_58 = v_54;
  } else {
    sub_58 = false;
  };
  if (task_v_361) {
    sub_57 = false;
  } else {
    sub_57 = sub_58;
  };
  if (task_s) {
    sub_61 = false;
  } else {
    sub_61 = sub_54;
  };
  if (task_v_360) {
    sub_60 = sub_61;
  } else {
    sub_60 = sub_59;
  };
  if (task_v_361) {
    v_55 = sub_60;
  } else {
    v_55 = sub_51;
  };
  if (task_v_362) {
    sub_56 = v_55;
  } else {
    sub_56 = sub_57;
  };
  if (task_v_417) {
    sub_55 = sub_56;
  } else {
    sub_55 = sub_51;
  };
  if (task_confort) {
    v_56 = sub_55;
  } else {
    v_56 = sub_56;
  };
  if (task_eco) {
    sub_49 = sub_50;
  } else {
    sub_49 = v_56;
  };
  if (task_confort) {
    sub_62 = sub_51;
  } else {
    sub_62 = sub_55;
  };
  if (task_v_418) {
    sub_48 = sub_62;
  } else {
    sub_48 = sub_49;
  };
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_66 = sub_50;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  if (task_c4) {
    sub_44 = sub_45;
  } else {
    sub_44 = sub_63;
  };
  if (task_v_360) {
    sub_74 = false;
  } else {
    sub_74 = sub_52;
  };
  if (task_e) {
    v_51 = sub_74;
    sub_73 = sub_52;
  } else {
    v_51 = sub_52;
    sub_73 = sub_74;
  };
  if (task_v_361) {
    sub_72 = v_51;
  } else {
    sub_72 = sub_73;
  };
  if (task_v_362) {
    sub_71 = sub_51;
  } else {
    sub_71 = sub_72;
  };
  if (task_v_417) {
    sub_70 = sub_71;
  } else {
    sub_70 = sub_51;
  };
  if (task_confort) {
    v_52 = sub_70;
  } else {
    v_52 = sub_71;
  };
  if (task_eco) {
    sub_69 = sub_50;
  } else {
    sub_69 = v_52;
  };
  if (task_confort) {
    sub_75 = sub_51;
  } else {
    sub_75 = sub_70;
  };
  if (task_v_418) {
    sub_68 = sub_75;
  } else {
    sub_68 = sub_69;
  };
  if (task_finish) {
    v_53 = sub_65;
  } else {
    v_53 = sub_68;
  };
  if (task_temp_ok) {
    sub_67 = sub_64;
  } else {
    sub_67 = v_53;
  };
  if (task_v_309) {
    sub_43 = sub_67;
  } else {
    sub_43 = sub_44;
  };
  sub_76 = sub_45;
  if (task_v_308) {
    sub_42 = sub_76;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  if (task_v_309) {
    sub_77 = sub_76;
  } else {
    sub_77 = sub_44;
  };
  if (task_cold) {
    sub_81 = sub_68;
  } else {
    sub_81 = sub_66;
  };
  sub_80 = sub_81;
  if (task_c4) {
    sub_79 = sub_80;
  } else {
    sub_79 = sub_63;
  };
  if (task_finish) {
    v_50 = sub_65;
  } else {
    v_50 = sub_47;
  };
  if (task_temp_ok) {
    sub_82 = sub_64;
  } else {
    sub_82 = v_50;
  };
  if (task_v_309) {
    sub_78 = sub_82;
  } else {
    sub_78 = sub_79;
  };
  if (task_v_308) {
    v_57 = sub_78;
  } else {
    v_57 = sub_77;
  };
  sub_84 = sub_63;
  if (task_v_309) {
    sub_83 = sub_76;
  } else {
    sub_83 = sub_84;
  };
  if (task_v_308) {
    v_58 = sub_78;
  } else {
    v_58 = sub_83;
  };
  if (task_start) {
    v_59 = v_57;
  } else {
    v_59 = v_58;
  };
  if (task_v_307) {
    sub_40 = v_59;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (task_v_398) {
    v_88 = sub_7;
    v_86 = sub_37;
  } else {
    v_88 = sub_37;
    v_86 = sub_7;
  };
  if (task_down1) {
    v_87 = v_86;
  } else {
    v_87 = sub_6;
  };
  if (task_c1) {
    sub_5 = sub_6;
  } else {
    sub_5 = v_87;
  };
  sub_4 = sub_5;
  if (task_up2) {
    v_49 = false;
  } else {
    v_49 = sub_39;
  };
  if (task_c2) {
    sub_85 = v_49;
  } else {
    sub_85 = sub_38;
  };
  if (task_v_398) {
    v_89 = sub_85;
  } else {
    v_89 = sub_37;
  };
  if (task_down1) {
    v_90 = v_88;
  } else {
    v_90 = v_89;
  };
  sub_86 = sub_7;
  if (task_c1) {
    v_91 = v_90;
  } else {
    v_91 = sub_86;
  };
  if (task_up2) {
    v_48 = false;
  } else {
    v_48 = sub_9;
  };
  if (task_c2) {
    sub_87 = v_48;
  } else {
    sub_87 = sub_8;
  };
  if (task_v_398) {
    v_92 = sub_85;
  } else {
    v_92 = sub_87;
  };
  if (task_down1) {
    v_93 = sub_7;
  } else {
    v_93 = v_92;
  };
  if (task_c1) {
    v_94 = v_93;
  } else {
    v_94 = sub_86;
  };
  if (task_up1) {
    v_95 = v_91;
  } else {
    v_95 = v_94;
  };
  if (task_v_397) {
    sub_3 = v_95;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_111 = true;
  if (task_on_tv) {
    sub_110 = false;
    sub_112 = sub_111;
  } else {
    sub_110 = sub_111;
    sub_112 = false;
  };
  if (task_ck_19_1) {
    v_15 = sub_112;
  } else {
    v_15 = sub_110;
  };
  sub_113 = sub_111;
  if (task_c_tv2) {
    sub_109 = v_15;
  } else {
    sub_109 = sub_113;
  };
  sub_114 = sub_113;
  if (task_ck_17_1) {
    v_16 = sub_109;
    sub_108 = sub_114;
  } else {
    v_16 = sub_114;
    sub_108 = sub_109;
  };
  if (task_on_lamp) {
    v_17 = sub_108;
  } else {
    v_17 = v_16;
  };
  if (task_c_lamp1) {
    v_18 = v_17;
  } else {
    v_18 = sub_109;
  };
  sub_115 = sub_114;
  if (task_c_lamp1) {
    v_19 = sub_115;
  } else {
    v_19 = sub_108;
  };
  if (task_c_lamp2) {
    v_20 = v_18;
  } else {
    v_20 = v_19;
  };
  if (task_ck_19_1) {
    v_14 = sub_113;
  } else {
    v_14 = false;
  };
  if (task_c_tv2) {
    sub_117 = false;
  } else {
    sub_117 = v_14;
  };
  if (task_ck_17_1) {
    v_21 = sub_117;
    sub_116 = sub_114;
  } else {
    v_21 = sub_114;
    sub_116 = sub_117;
  };
  if (task_c_lamp1) {
    v_24 = sub_115;
  } else {
    v_24 = sub_116;
  };
  if (task_on_lamp) {
    v_22 = sub_116;
  } else {
    v_22 = v_21;
  };
  if (task_c_lamp1) {
    v_23 = v_22;
  } else {
    v_23 = sub_117;
  };
  if (task_c_lamp2) {
    v_25 = v_23;
  } else {
    v_25 = v_24;
  };
  if (task_c_tv1) {
    sub_107 = v_20;
  } else {
    sub_107 = v_25;
  };
  if (task_ck_19_1) {
    v_13 = sub_110;
  } else {
    v_13 = sub_112;
  };
  if (task_c_tv2) {
    sub_119 = v_13;
  } else {
    sub_119 = false;
  };
  if (task_ck_17_1) {
    v_26 = sub_119;
    sub_118 = false;
  } else {
    v_26 = false;
    sub_118 = sub_119;
  };
  if (task_c_lamp1) {
    v_29 = false;
  } else {
    v_29 = sub_118;
  };
  if (task_on_lamp) {
    v_27 = sub_118;
  } else {
    v_27 = v_26;
  };
  if (task_c_lamp1) {
    v_28 = v_27;
  } else {
    v_28 = sub_119;
  };
  if (task_c_lamp2) {
    v_30 = v_28;
  } else {
    v_30 = v_29;
  };
  if (task_ck_19_1) {
    v_12 = false;
  } else {
    v_12 = sub_113;
  };
  if (task_c_tv2) {
    sub_121 = sub_113;
  } else {
    sub_121 = v_12;
  };
  if (task_ck_17_1) {
    v_31 = sub_121;
    sub_120 = false;
  } else {
    v_31 = false;
    sub_120 = sub_121;
  };
  if (task_c_lamp1) {
    v_34 = false;
  } else {
    v_34 = sub_120;
  };
  if (task_on_lamp) {
    v_32 = sub_120;
  } else {
    v_32 = v_31;
  };
  if (task_c_lamp1) {
    v_33 = v_32;
  } else {
    v_33 = sub_121;
  };
  if (task_c_lamp2) {
    v_35 = v_33;
  } else {
    v_35 = v_34;
  };
  if (task_c_tv1) {
    v_36 = v_30;
  } else {
    v_36 = v_35;
  };
  if (task_precense) {
    sub_106 = sub_107;
  } else {
    sub_106 = v_36;
  };
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  if (task_down2) {
    sub_122 = sub_96;
  } else {
    sub_122 = false;
  };
  if (task_c2) {
    v_37 = false;
  } else {
    v_37 = sub_122;
  };
  if (task_v_398) {
    sub_92 = v_37;
  } else {
    sub_92 = sub_93;
  };
  if (task_precense) {
    sub_140 = sub_107;
  } else {
    sub_140 = false;
  };
  sub_139 = sub_140;
  sub_138 = sub_139;
  sub_137 = sub_138;
  sub_136 = sub_137;
  if (task_c3) {
    sub_145 = false;
  } else {
    sub_145 = sub_139;
  };
  if (task_v_360) {
    v_6 = sub_138;
  } else {
    v_6 = sub_145;
  };
  if (task_e) {
    sub_144 = v_6;
  } else {
    sub_144 = false;
  };
  if (task_v_361) {
    sub_143 = false;
  } else {
    sub_143 = sub_144;
  };
  if (task_s) {
    sub_147 = false;
  } else {
    sub_147 = sub_140;
  };
  if (task_v_360) {
    sub_146 = sub_147;
  } else {
    sub_146 = sub_145;
  };
  if (task_v_361) {
    v_7 = sub_146;
  } else {
    v_7 = sub_137;
  };
  if (task_v_362) {
    sub_142 = v_7;
  } else {
    sub_142 = sub_143;
  };
  if (task_v_417) {
    sub_141 = sub_142;
  } else {
    sub_141 = sub_137;
  };
  if (task_confort) {
    v_8 = sub_141;
  } else {
    v_8 = sub_142;
  };
  if (task_eco) {
    sub_135 = sub_136;
  } else {
    sub_135 = v_8;
  };
  if (task_confort) {
    sub_148 = sub_137;
  } else {
    sub_148 = sub_141;
  };
  if (task_v_418) {
    sub_134 = sub_148;
  } else {
    sub_134 = sub_135;
  };
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_152 = sub_136;
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  if (task_c4) {
    sub_130 = sub_131;
  } else {
    sub_130 = sub_149;
  };
  if (task_v_360) {
    sub_160 = false;
  } else {
    sub_160 = sub_138;
  };
  if (task_e) {
    v_3 = sub_160;
    sub_159 = sub_138;
  } else {
    v_3 = sub_138;
    sub_159 = sub_160;
  };
  if (task_v_361) {
    sub_158 = v_3;
  } else {
    sub_158 = sub_159;
  };
  if (task_v_362) {
    sub_157 = sub_137;
  } else {
    sub_157 = sub_158;
  };
  if (task_v_417) {
    sub_156 = sub_157;
  } else {
    sub_156 = sub_137;
  };
  if (task_confort) {
    v_4 = sub_156;
  } else {
    v_4 = sub_157;
  };
  if (task_eco) {
    sub_155 = sub_136;
  } else {
    sub_155 = v_4;
  };
  if (task_confort) {
    sub_161 = sub_137;
  } else {
    sub_161 = sub_156;
  };
  if (task_v_418) {
    sub_154 = sub_161;
  } else {
    sub_154 = sub_155;
  };
  if (task_finish) {
    v_5 = sub_151;
  } else {
    v_5 = sub_154;
  };
  if (task_temp_ok) {
    sub_153 = sub_150;
  } else {
    sub_153 = v_5;
  };
  if (task_v_309) {
    sub_129 = sub_153;
  } else {
    sub_129 = sub_130;
  };
  sub_162 = sub_131;
  if (task_v_308) {
    sub_128 = sub_162;
  } else {
    sub_128 = sub_129;
  };
  sub_127 = sub_128;
  if (task_v_309) {
    sub_163 = sub_162;
  } else {
    sub_163 = sub_130;
  };
  if (task_cold) {
    sub_167 = sub_154;
  } else {
    sub_167 = sub_152;
  };
  sub_166 = sub_167;
  if (task_c4) {
    sub_165 = sub_166;
  } else {
    sub_165 = sub_149;
  };
  if (task_finish) {
    v_2 = sub_151;
  } else {
    v_2 = sub_133;
  };
  if (task_temp_ok) {
    sub_168 = sub_150;
  } else {
    sub_168 = v_2;
  };
  if (task_v_309) {
    sub_164 = sub_168;
  } else {
    sub_164 = sub_165;
  };
  if (task_v_308) {
    v_9 = sub_164;
  } else {
    v_9 = sub_163;
  };
  sub_170 = sub_149;
  if (task_v_309) {
    sub_169 = sub_162;
  } else {
    sub_169 = sub_170;
  };
  if (task_v_308) {
    v_10 = sub_164;
  } else {
    v_10 = sub_169;
  };
  if (task_start) {
    v_11 = v_9;
  } else {
    v_11 = v_10;
  };
  if (task_v_307) {
    sub_126 = v_11;
  } else {
    sub_126 = sub_127;
  };
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (task_v_398) {
    v_40 = sub_93;
    v_38 = sub_123;
  } else {
    v_40 = sub_123;
    v_38 = sub_93;
  };
  if (task_down1) {
    v_39 = v_38;
  } else {
    v_39 = sub_92;
  };
  if (task_c1) {
    sub_91 = sub_92;
  } else {
    sub_91 = v_39;
  };
  sub_90 = sub_91;
  if (task_up2) {
    v_1 = false;
  } else {
    v_1 = sub_125;
  };
  if (task_c2) {
    sub_171 = v_1;
  } else {
    sub_171 = sub_124;
  };
  if (task_v_398) {
    v_41 = sub_171;
  } else {
    v_41 = sub_123;
  };
  if (task_down1) {
    v_42 = v_40;
  } else {
    v_42 = v_41;
  };
  sub_172 = sub_93;
  if (task_c1) {
    v_43 = v_42;
  } else {
    v_43 = sub_172;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_95;
  };
  if (task_c2) {
    sub_173 = v;
  } else {
    sub_173 = sub_94;
  };
  if (task_v_398) {
    v_44 = sub_171;
  } else {
    v_44 = sub_173;
  };
  if (task_down1) {
    v_45 = sub_93;
  } else {
    v_45 = v_44;
  };
  if (task_c1) {
    v_46 = v_45;
  } else {
    v_46 = sub_172;
  };
  if (task_up1) {
    v_47 = v_43;
  } else {
    v_47 = v_46;
  };
  if (task_v_397) {
    sub_89 = v_47;
  } else {
    sub_89 = sub_90;
  };
  sub_88 = sub_89;
  if (p_task_c_window) {
    sub_0 = sub_88;
  } else {
    sub_0 = sub_1;
  };
  _out->task_c_window = sub_0;;
}

void Task_controller__task_controller_task_c_door_step(int task_up1,
                                                       int task_down1,
                                                       int task_up2,
                                                       int task_down2,
                                                       int task_s,
                                                       int task_e,
                                                       int task_finish,
                                                       int task_start,
                                                       int task_cold,
                                                       int task_temp_ok,
                                                       int task_eco,
                                                       int task_confort,
                                                       int task_on_lamp,
                                                       int task_on_tv,
                                                       int task_precense,
                                                       int task_push_door,
                                                       int task_push_window,
                                                       int task_v_418,
                                                       int task_v_417,
                                                       int task_pnr_8,
                                                       int task_v_398,
                                                       int task_v_397,
                                                       int task_pnr_7,
                                                       int task_v_362,
                                                       int task_v_361,
                                                       int task_v_360,
                                                       int task_pnr_6,
                                                       int task_v_309,
                                                       int task_v_308,
                                                       int task_v_307,
                                                       int task_pnr_5,
                                                       int task_ck_17_1,
                                                       int task_pnr_4,
                                                       int task_ck_19_1,
                                                       int task_pnr_3,
                                                       int task_ck_21_1,
                                                       int task_pnr_2,
                                                       int task_ck_23_1,
                                                       int task_pnr_1,
                                                       int task_ck_25_1,
                                                       int task_pnr,
                                                       int p_task_c_window,
                                                       int p_task_c_door,
                                                       int p_task_c_tv1,
                                                       int p_task_c_tv2,
                                                       int p_task_c_lamp2,
                                                       int p_task_c_lamp1,
                                                       int p_task_c4,
                                                       int p_task_c3,
                                                       int p_task_c2,
                                                       int p_task_c1,
                                                       int task_c_tv1,
                                                       int task_c_tv2,
                                                       int task_c_lamp2,
                                                       int task_c_lamp1,
                                                       int task_c4,
                                                       int task_c3,
                                                       int task_c2,
                                                       int task_c1,
                                                       Task_controller__task_controller_task_c_door_out* _out) {
  
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  sub_24 = false;
  if (task_on_tv) {
    sub_23 = false;
    sub_25 = sub_24;
  } else {
    sub_23 = sub_24;
    sub_25 = false;
  };
  if (task_ck_19_1) {
    v_158 = sub_25;
  } else {
    v_158 = sub_23;
  };
  sub_26 = sub_24;
  if (task_c_tv2) {
    sub_22 = v_158;
  } else {
    sub_22 = sub_26;
  };
  sub_27 = sub_26;
  if (task_ck_17_1) {
    v_159 = sub_22;
    sub_21 = sub_27;
  } else {
    v_159 = sub_27;
    sub_21 = sub_22;
  };
  if (task_on_lamp) {
    v_160 = sub_21;
  } else {
    v_160 = v_159;
  };
  if (task_c_lamp1) {
    v_161 = v_160;
  } else {
    v_161 = sub_22;
  };
  sub_28 = sub_27;
  if (task_c_lamp1) {
    v_162 = sub_28;
  } else {
    v_162 = sub_21;
  };
  if (task_c_lamp2) {
    v_163 = v_161;
  } else {
    v_163 = v_162;
  };
  if (task_ck_19_1) {
    v_157 = sub_26;
  } else {
    v_157 = false;
  };
  if (task_c_tv2) {
    sub_30 = false;
  } else {
    sub_30 = v_157;
  };
  if (task_ck_17_1) {
    v_164 = sub_30;
    sub_29 = sub_27;
  } else {
    v_164 = sub_27;
    sub_29 = sub_30;
  };
  if (task_c_lamp1) {
    v_167 = sub_28;
  } else {
    v_167 = sub_29;
  };
  if (task_on_lamp) {
    v_165 = sub_29;
  } else {
    v_165 = v_164;
  };
  if (task_c_lamp1) {
    v_166 = v_165;
  } else {
    v_166 = sub_30;
  };
  if (task_c_lamp2) {
    v_168 = v_166;
  } else {
    v_168 = v_167;
  };
  if (task_c_tv1) {
    sub_20 = v_163;
  } else {
    sub_20 = v_168;
  };
  if (task_ck_19_1) {
    v_156 = sub_23;
  } else {
    v_156 = sub_25;
  };
  if (task_c_tv2) {
    sub_32 = v_156;
  } else {
    sub_32 = false;
  };
  if (task_ck_17_1) {
    v_169 = sub_32;
    sub_31 = false;
  } else {
    v_169 = false;
    sub_31 = sub_32;
  };
  if (task_c_lamp1) {
    v_172 = false;
  } else {
    v_172 = sub_31;
  };
  if (task_on_lamp) {
    v_170 = sub_31;
  } else {
    v_170 = v_169;
  };
  if (task_c_lamp1) {
    v_171 = v_170;
  } else {
    v_171 = sub_32;
  };
  if (task_c_lamp2) {
    v_173 = v_171;
  } else {
    v_173 = v_172;
  };
  if (task_ck_19_1) {
    v_155 = false;
  } else {
    v_155 = sub_26;
  };
  if (task_c_tv2) {
    sub_34 = sub_26;
  } else {
    sub_34 = v_155;
  };
  if (task_ck_17_1) {
    v_174 = sub_34;
    sub_33 = false;
  } else {
    v_174 = false;
    sub_33 = sub_34;
  };
  if (task_c_lamp1) {
    v_177 = false;
  } else {
    v_177 = sub_33;
  };
  if (task_on_lamp) {
    v_175 = sub_33;
  } else {
    v_175 = v_174;
  };
  if (task_c_lamp1) {
    v_176 = v_175;
  } else {
    v_176 = sub_34;
  };
  if (task_c_lamp2) {
    v_178 = v_176;
  } else {
    v_178 = v_177;
  };
  if (task_c_tv1) {
    v_179 = v_173;
  } else {
    v_179 = v_178;
  };
  if (task_precense) {
    sub_19 = sub_20;
  } else {
    sub_19 = v_179;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (task_down2) {
    sub_35 = sub_9;
  } else {
    sub_35 = false;
  };
  if (task_c2) {
    v_180 = false;
  } else {
    v_180 = sub_35;
  };
  if (task_v_398) {
    sub_5 = v_180;
  } else {
    sub_5 = sub_6;
  };
  if (task_precense) {
    sub_53 = sub_20;
  } else {
    sub_53 = false;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (task_c3) {
    sub_58 = false;
  } else {
    sub_58 = sub_52;
  };
  if (task_v_360) {
    v_149 = sub_51;
  } else {
    v_149 = sub_58;
  };
  if (task_e) {
    sub_57 = v_149;
  } else {
    sub_57 = false;
  };
  if (task_v_361) {
    sub_56 = false;
  } else {
    sub_56 = sub_57;
  };
  if (task_s) {
    sub_60 = false;
  } else {
    sub_60 = sub_53;
  };
  if (task_v_360) {
    sub_59 = sub_60;
  } else {
    sub_59 = sub_58;
  };
  if (task_v_361) {
    v_150 = sub_59;
  } else {
    v_150 = sub_50;
  };
  if (task_v_362) {
    sub_55 = v_150;
  } else {
    sub_55 = sub_56;
  };
  if (task_v_417) {
    sub_54 = sub_55;
  } else {
    sub_54 = sub_50;
  };
  if (task_confort) {
    v_151 = sub_54;
  } else {
    v_151 = sub_55;
  };
  if (task_eco) {
    sub_48 = sub_49;
  } else {
    sub_48 = v_151;
  };
  if (task_confort) {
    sub_61 = sub_50;
  } else {
    sub_61 = sub_54;
  };
  if (task_v_418) {
    sub_47 = sub_61;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_65 = sub_49;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  if (task_c4) {
    sub_43 = sub_44;
  } else {
    sub_43 = sub_62;
  };
  if (task_v_360) {
    sub_73 = false;
  } else {
    sub_73 = sub_51;
  };
  if (task_e) {
    v_146 = sub_73;
    sub_72 = sub_51;
  } else {
    v_146 = sub_51;
    sub_72 = sub_73;
  };
  if (task_v_361) {
    sub_71 = v_146;
  } else {
    sub_71 = sub_72;
  };
  if (task_v_362) {
    sub_70 = sub_50;
  } else {
    sub_70 = sub_71;
  };
  if (task_v_417) {
    sub_69 = sub_70;
  } else {
    sub_69 = sub_50;
  };
  if (task_confort) {
    v_147 = sub_69;
  } else {
    v_147 = sub_70;
  };
  if (task_eco) {
    sub_68 = sub_49;
  } else {
    sub_68 = v_147;
  };
  if (task_confort) {
    sub_74 = sub_50;
  } else {
    sub_74 = sub_69;
  };
  if (task_v_418) {
    sub_67 = sub_74;
  } else {
    sub_67 = sub_68;
  };
  if (task_finish) {
    v_148 = sub_64;
  } else {
    v_148 = sub_67;
  };
  if (task_temp_ok) {
    sub_66 = sub_63;
  } else {
    sub_66 = v_148;
  };
  if (task_v_309) {
    sub_42 = sub_66;
  } else {
    sub_42 = sub_43;
  };
  sub_75 = sub_44;
  if (task_v_308) {
    sub_41 = sub_75;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  if (task_v_309) {
    sub_76 = sub_75;
  } else {
    sub_76 = sub_43;
  };
  if (task_cold) {
    sub_80 = sub_67;
  } else {
    sub_80 = sub_65;
  };
  sub_79 = sub_80;
  if (task_c4) {
    sub_78 = sub_79;
  } else {
    sub_78 = sub_62;
  };
  if (task_finish) {
    v_145 = sub_64;
  } else {
    v_145 = sub_46;
  };
  if (task_temp_ok) {
    sub_81 = sub_63;
  } else {
    sub_81 = v_145;
  };
  if (task_v_309) {
    sub_77 = sub_81;
  } else {
    sub_77 = sub_78;
  };
  if (task_v_308) {
    v_152 = sub_77;
  } else {
    v_152 = sub_76;
  };
  sub_83 = sub_62;
  if (task_v_309) {
    sub_82 = sub_75;
  } else {
    sub_82 = sub_83;
  };
  if (task_v_308) {
    v_153 = sub_77;
  } else {
    v_153 = sub_82;
  };
  if (task_start) {
    v_154 = v_152;
  } else {
    v_154 = v_153;
  };
  if (task_v_307) {
    sub_39 = v_154;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (task_v_398) {
    v_183 = sub_6;
    v_181 = sub_36;
  } else {
    v_183 = sub_36;
    v_181 = sub_6;
  };
  if (task_down1) {
    v_182 = v_181;
  } else {
    v_182 = sub_5;
  };
  if (task_c1) {
    sub_4 = sub_5;
  } else {
    sub_4 = v_182;
  };
  sub_3 = sub_4;
  if (task_up2) {
    v_144 = false;
  } else {
    v_144 = sub_38;
  };
  if (task_c2) {
    sub_84 = v_144;
  } else {
    sub_84 = sub_37;
  };
  if (task_v_398) {
    v_184 = sub_84;
  } else {
    v_184 = sub_36;
  };
  if (task_down1) {
    v_185 = v_183;
  } else {
    v_185 = v_184;
  };
  sub_85 = sub_6;
  if (task_c1) {
    v_186 = v_185;
  } else {
    v_186 = sub_85;
  };
  if (task_up2) {
    v_143 = false;
  } else {
    v_143 = sub_8;
  };
  if (task_c2) {
    sub_86 = v_143;
  } else {
    sub_86 = sub_7;
  };
  if (task_v_398) {
    v_187 = sub_84;
  } else {
    v_187 = sub_86;
  };
  if (task_down1) {
    v_188 = sub_6;
  } else {
    v_188 = v_187;
  };
  if (task_c1) {
    v_189 = v_188;
  } else {
    v_189 = sub_85;
  };
  if (task_up1) {
    v_190 = v_186;
  } else {
    v_190 = v_189;
  };
  if (task_v_397) {
    sub_2 = v_190;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  sub_109 = true;
  if (task_on_tv) {
    sub_108 = false;
    sub_110 = sub_109;
  } else {
    sub_108 = sub_109;
    sub_110 = false;
  };
  if (task_ck_19_1) {
    v_110 = sub_110;
  } else {
    v_110 = sub_108;
  };
  sub_111 = sub_109;
  if (task_c_tv2) {
    sub_107 = v_110;
  } else {
    sub_107 = sub_111;
  };
  sub_112 = sub_111;
  if (task_ck_17_1) {
    v_111 = sub_107;
    sub_106 = sub_112;
  } else {
    v_111 = sub_112;
    sub_106 = sub_107;
  };
  if (task_on_lamp) {
    v_112 = sub_106;
  } else {
    v_112 = v_111;
  };
  if (task_c_lamp1) {
    v_113 = v_112;
  } else {
    v_113 = sub_107;
  };
  sub_113 = sub_112;
  if (task_c_lamp1) {
    v_114 = sub_113;
  } else {
    v_114 = sub_106;
  };
  if (task_c_lamp2) {
    v_115 = v_113;
  } else {
    v_115 = v_114;
  };
  if (task_ck_19_1) {
    v_109 = sub_111;
  } else {
    v_109 = false;
  };
  if (task_c_tv2) {
    sub_115 = false;
  } else {
    sub_115 = v_109;
  };
  if (task_ck_17_1) {
    v_116 = sub_115;
    sub_114 = sub_112;
  } else {
    v_116 = sub_112;
    sub_114 = sub_115;
  };
  if (task_c_lamp1) {
    v_119 = sub_113;
  } else {
    v_119 = sub_114;
  };
  if (task_on_lamp) {
    v_117 = sub_114;
  } else {
    v_117 = v_116;
  };
  if (task_c_lamp1) {
    v_118 = v_117;
  } else {
    v_118 = sub_115;
  };
  if (task_c_lamp2) {
    v_120 = v_118;
  } else {
    v_120 = v_119;
  };
  if (task_c_tv1) {
    sub_105 = v_115;
  } else {
    sub_105 = v_120;
  };
  if (task_ck_19_1) {
    v_108 = sub_108;
  } else {
    v_108 = sub_110;
  };
  if (task_c_tv2) {
    sub_117 = v_108;
  } else {
    sub_117 = false;
  };
  if (task_ck_17_1) {
    v_121 = sub_117;
    sub_116 = false;
  } else {
    v_121 = false;
    sub_116 = sub_117;
  };
  if (task_c_lamp1) {
    v_124 = false;
  } else {
    v_124 = sub_116;
  };
  if (task_on_lamp) {
    v_122 = sub_116;
  } else {
    v_122 = v_121;
  };
  if (task_c_lamp1) {
    v_123 = v_122;
  } else {
    v_123 = sub_117;
  };
  if (task_c_lamp2) {
    v_125 = v_123;
  } else {
    v_125 = v_124;
  };
  if (task_ck_19_1) {
    v_107 = false;
  } else {
    v_107 = sub_111;
  };
  if (task_c_tv2) {
    sub_119 = sub_111;
  } else {
    sub_119 = v_107;
  };
  if (task_ck_17_1) {
    v_126 = sub_119;
    sub_118 = false;
  } else {
    v_126 = false;
    sub_118 = sub_119;
  };
  if (task_c_lamp1) {
    v_129 = false;
  } else {
    v_129 = sub_118;
  };
  if (task_on_lamp) {
    v_127 = sub_118;
  } else {
    v_127 = v_126;
  };
  if (task_c_lamp1) {
    v_128 = v_127;
  } else {
    v_128 = sub_119;
  };
  if (task_c_lamp2) {
    v_130 = v_128;
  } else {
    v_130 = v_129;
  };
  if (task_c_tv1) {
    v_131 = v_125;
  } else {
    v_131 = v_130;
  };
  if (task_precense) {
    sub_104 = sub_105;
  } else {
    sub_104 = v_131;
  };
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (task_down2) {
    sub_120 = sub_94;
  } else {
    sub_120 = false;
  };
  if (task_c2) {
    v_132 = false;
  } else {
    v_132 = sub_120;
  };
  if (task_v_398) {
    sub_90 = v_132;
  } else {
    sub_90 = sub_91;
  };
  if (task_precense) {
    sub_138 = sub_105;
  } else {
    sub_138 = false;
  };
  sub_137 = sub_138;
  sub_136 = sub_137;
  sub_135 = sub_136;
  sub_134 = sub_135;
  if (task_c3) {
    sub_143 = false;
  } else {
    sub_143 = sub_137;
  };
  if (task_v_360) {
    v_101 = sub_136;
  } else {
    v_101 = sub_143;
  };
  if (task_e) {
    sub_142 = v_101;
  } else {
    sub_142 = false;
  };
  if (task_v_361) {
    sub_141 = false;
  } else {
    sub_141 = sub_142;
  };
  if (task_s) {
    sub_145 = false;
  } else {
    sub_145 = sub_138;
  };
  if (task_v_360) {
    sub_144 = sub_145;
  } else {
    sub_144 = sub_143;
  };
  if (task_v_361) {
    v_102 = sub_144;
  } else {
    v_102 = sub_135;
  };
  if (task_v_362) {
    sub_140 = v_102;
  } else {
    sub_140 = sub_141;
  };
  if (task_v_417) {
    sub_139 = sub_140;
  } else {
    sub_139 = sub_135;
  };
  if (task_confort) {
    v_103 = sub_139;
  } else {
    v_103 = sub_140;
  };
  if (task_eco) {
    sub_133 = sub_134;
  } else {
    sub_133 = v_103;
  };
  if (task_confort) {
    sub_146 = sub_135;
  } else {
    sub_146 = sub_139;
  };
  if (task_v_418) {
    sub_132 = sub_146;
  } else {
    sub_132 = sub_133;
  };
  sub_131 = sub_132;
  sub_130 = sub_131;
  sub_129 = sub_130;
  sub_150 = sub_134;
  sub_149 = sub_150;
  sub_148 = sub_149;
  sub_147 = sub_148;
  if (task_c4) {
    sub_128 = sub_129;
  } else {
    sub_128 = sub_147;
  };
  if (task_v_360) {
    sub_158 = false;
  } else {
    sub_158 = sub_136;
  };
  if (task_e) {
    v_98 = sub_158;
    sub_157 = sub_136;
  } else {
    v_98 = sub_136;
    sub_157 = sub_158;
  };
  if (task_v_361) {
    sub_156 = v_98;
  } else {
    sub_156 = sub_157;
  };
  if (task_v_362) {
    sub_155 = sub_135;
  } else {
    sub_155 = sub_156;
  };
  if (task_v_417) {
    sub_154 = sub_155;
  } else {
    sub_154 = sub_135;
  };
  if (task_confort) {
    v_99 = sub_154;
  } else {
    v_99 = sub_155;
  };
  if (task_eco) {
    sub_153 = sub_134;
  } else {
    sub_153 = v_99;
  };
  if (task_confort) {
    sub_159 = sub_135;
  } else {
    sub_159 = sub_154;
  };
  if (task_v_418) {
    sub_152 = sub_159;
  } else {
    sub_152 = sub_153;
  };
  if (task_finish) {
    v_100 = sub_149;
  } else {
    v_100 = sub_152;
  };
  if (task_temp_ok) {
    sub_151 = sub_148;
  } else {
    sub_151 = v_100;
  };
  if (task_v_309) {
    sub_127 = sub_151;
  } else {
    sub_127 = sub_128;
  };
  sub_160 = sub_129;
  if (task_v_308) {
    sub_126 = sub_160;
  } else {
    sub_126 = sub_127;
  };
  sub_125 = sub_126;
  if (task_v_309) {
    sub_161 = sub_160;
  } else {
    sub_161 = sub_128;
  };
  if (task_cold) {
    sub_165 = sub_152;
  } else {
    sub_165 = sub_150;
  };
  sub_164 = sub_165;
  if (task_c4) {
    sub_163 = sub_164;
  } else {
    sub_163 = sub_147;
  };
  if (task_finish) {
    v_97 = sub_149;
  } else {
    v_97 = sub_131;
  };
  if (task_temp_ok) {
    sub_166 = sub_148;
  } else {
    sub_166 = v_97;
  };
  if (task_v_309) {
    sub_162 = sub_166;
  } else {
    sub_162 = sub_163;
  };
  if (task_v_308) {
    v_104 = sub_162;
  } else {
    v_104 = sub_161;
  };
  sub_168 = sub_147;
  if (task_v_309) {
    sub_167 = sub_160;
  } else {
    sub_167 = sub_168;
  };
  if (task_v_308) {
    v_105 = sub_162;
  } else {
    v_105 = sub_167;
  };
  if (task_start) {
    v_106 = v_104;
  } else {
    v_106 = v_105;
  };
  if (task_v_307) {
    sub_124 = v_106;
  } else {
    sub_124 = sub_125;
  };
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  if (task_v_398) {
    v_135 = sub_91;
    v_133 = sub_121;
  } else {
    v_135 = sub_121;
    v_133 = sub_91;
  };
  if (task_down1) {
    v_134 = v_133;
  } else {
    v_134 = sub_90;
  };
  if (task_c1) {
    sub_89 = sub_90;
  } else {
    sub_89 = v_134;
  };
  sub_88 = sub_89;
  if (task_up2) {
    v_96 = false;
  } else {
    v_96 = sub_123;
  };
  if (task_c2) {
    sub_169 = v_96;
  } else {
    sub_169 = sub_122;
  };
  if (task_v_398) {
    v_136 = sub_169;
  } else {
    v_136 = sub_121;
  };
  if (task_down1) {
    v_137 = v_135;
  } else {
    v_137 = v_136;
  };
  sub_170 = sub_91;
  if (task_c1) {
    v_138 = v_137;
  } else {
    v_138 = sub_170;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_93;
  };
  if (task_c2) {
    sub_171 = v;
  } else {
    sub_171 = sub_92;
  };
  if (task_v_398) {
    v_139 = sub_169;
  } else {
    v_139 = sub_171;
  };
  if (task_down1) {
    v_140 = sub_91;
  } else {
    v_140 = v_139;
  };
  if (task_c1) {
    v_141 = v_140;
  } else {
    v_141 = sub_170;
  };
  if (task_up1) {
    v_142 = v_138;
  } else {
    v_142 = v_141;
  };
  if (task_v_397) {
    sub_87 = v_142;
  } else {
    sub_87 = sub_88;
  };
  if (p_task_c_door) {
    sub_0 = sub_87;
  } else {
    sub_0 = sub_1;
  };
  _out->task_c_door = sub_0;;
}

void Task_controller__task_controller_task_c_tv1_step(int task_up1,
                                                      int task_down1,
                                                      int task_up2,
                                                      int task_down2,
                                                      int task_s, int task_e,
                                                      int task_finish,
                                                      int task_start,
                                                      int task_cold,
                                                      int task_temp_ok,
                                                      int task_eco,
                                                      int task_confort,
                                                      int task_on_lamp,
                                                      int task_on_tv,
                                                      int task_precense,
                                                      int task_push_door,
                                                      int task_push_window,
                                                      int task_v_418,
                                                      int task_v_417,
                                                      int task_pnr_8,
                                                      int task_v_398,
                                                      int task_v_397,
                                                      int task_pnr_7,
                                                      int task_v_362,
                                                      int task_v_361,
                                                      int task_v_360,
                                                      int task_pnr_6,
                                                      int task_v_309,
                                                      int task_v_308,
                                                      int task_v_307,
                                                      int task_pnr_5,
                                                      int task_ck_17_1,
                                                      int task_pnr_4,
                                                      int task_ck_19_1,
                                                      int task_pnr_3,
                                                      int task_ck_21_1,
                                                      int task_pnr_2,
                                                      int task_ck_23_1,
                                                      int task_pnr_1,
                                                      int task_ck_25_1,
                                                      int task_pnr,
                                                      int p_task_c_window,
                                                      int p_task_c_door,
                                                      int p_task_c_tv1,
                                                      int p_task_c_tv2,
                                                      int p_task_c_lamp2,
                                                      int p_task_c_lamp1,
                                                      int p_task_c4,
                                                      int p_task_c3,
                                                      int p_task_c2,
                                                      int p_task_c1,
                                                      int task_c_tv2,
                                                      int task_c_lamp2,
                                                      int task_c_lamp1,
                                                      int task_c4,
                                                      int task_c3,
                                                      int task_c2,
                                                      int task_c1,
                                                      Task_controller__task_controller_task_c_tv1_out* _out) {
  
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  sub_25 = true;
  if (task_on_tv) {
    v_228 = sub_25;
    sub_24 = false;
  } else {
    v_228 = false;
    sub_24 = sub_25;
  };
  if (task_ck_19_1) {
    sub_23 = v_228;
  } else {
    sub_23 = sub_24;
  };
  sub_26 = sub_25;
  sub_28 = false;
  sub_27 = sub_28;
  if (task_ck_19_1) {
    v_229 = sub_27;
  } else {
    v_229 = sub_26;
  };
  if (task_c_tv2) {
    sub_22 = sub_23;
  } else {
    sub_22 = v_229;
  };
  sub_29 = sub_27;
  if (task_ck_17_1) {
    v_230 = sub_22;
    sub_21 = sub_29;
  } else {
    v_230 = sub_29;
    sub_21 = sub_22;
  };
  if (task_c_lamp1) {
    v_233 = sub_29;
  } else {
    v_233 = sub_21;
  };
  if (task_on_lamp) {
    v_231 = sub_21;
  } else {
    v_231 = v_230;
  };
  if (task_c_lamp1) {
    v_232 = v_231;
  } else {
    v_232 = sub_22;
  };
  if (task_c_lamp2) {
    sub_20 = v_232;
  } else {
    sub_20 = v_233;
  };
  if (task_ck_19_1) {
    sub_32 = false;
  } else {
    sub_32 = sub_27;
  };
  if (task_c_tv2) {
    sub_31 = sub_27;
  } else {
    sub_31 = sub_32;
  };
  if (task_ck_17_1) {
    v_234 = sub_31;
    sub_30 = false;
  } else {
    v_234 = false;
    sub_30 = sub_31;
  };
  if (task_c_lamp1) {
    v_237 = false;
  } else {
    v_237 = sub_30;
  };
  if (task_on_lamp) {
    v_235 = sub_30;
  } else {
    v_235 = v_234;
  };
  if (task_c_lamp1) {
    v_236 = v_235;
  } else {
    v_236 = sub_31;
  };
  if (task_c_lamp2) {
    v_238 = v_236;
  } else {
    v_238 = v_237;
  };
  if (task_precense) {
    sub_19 = sub_20;
  } else {
    sub_19 = v_238;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (task_down2) {
    sub_33 = sub_9;
  } else {
    sub_33 = false;
  };
  if (task_c2) {
    v_239 = false;
  } else {
    v_239 = sub_33;
  };
  if (task_v_398) {
    sub_5 = v_239;
  } else {
    sub_5 = sub_6;
  };
  if (task_precense) {
    sub_51 = sub_20;
  } else {
    sub_51 = false;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (task_c3) {
    sub_56 = false;
  } else {
    sub_56 = sub_50;
  };
  if (task_v_360) {
    v_222 = sub_49;
  } else {
    v_222 = sub_56;
  };
  if (task_e) {
    sub_55 = v_222;
  } else {
    sub_55 = false;
  };
  if (task_v_361) {
    sub_54 = false;
  } else {
    sub_54 = sub_55;
  };
  if (task_s) {
    sub_58 = false;
  } else {
    sub_58 = sub_51;
  };
  if (task_v_360) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_56;
  };
  if (task_v_361) {
    v_223 = sub_57;
  } else {
    v_223 = sub_48;
  };
  if (task_v_362) {
    sub_53 = v_223;
  } else {
    sub_53 = sub_54;
  };
  if (task_v_417) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_48;
  };
  if (task_confort) {
    v_224 = sub_52;
  } else {
    v_224 = sub_53;
  };
  if (task_eco) {
    sub_46 = sub_47;
  } else {
    sub_46 = v_224;
  };
  if (task_confort) {
    sub_59 = sub_48;
  } else {
    sub_59 = sub_52;
  };
  if (task_v_418) {
    sub_45 = sub_59;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_63 = sub_47;
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (task_c4) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_60;
  };
  if (task_v_360) {
    sub_71 = false;
  } else {
    sub_71 = sub_49;
  };
  if (task_e) {
    v_219 = sub_71;
    sub_70 = sub_49;
  } else {
    v_219 = sub_49;
    sub_70 = sub_71;
  };
  if (task_v_361) {
    sub_69 = v_219;
  } else {
    sub_69 = sub_70;
  };
  if (task_v_362) {
    sub_68 = sub_48;
  } else {
    sub_68 = sub_69;
  };
  if (task_v_417) {
    sub_67 = sub_68;
  } else {
    sub_67 = sub_48;
  };
  if (task_confort) {
    v_220 = sub_67;
  } else {
    v_220 = sub_68;
  };
  if (task_eco) {
    sub_66 = sub_47;
  } else {
    sub_66 = v_220;
  };
  if (task_confort) {
    sub_72 = sub_48;
  } else {
    sub_72 = sub_67;
  };
  if (task_v_418) {
    sub_65 = sub_72;
  } else {
    sub_65 = sub_66;
  };
  if (task_finish) {
    v_221 = sub_62;
  } else {
    v_221 = sub_65;
  };
  if (task_temp_ok) {
    sub_64 = sub_61;
  } else {
    sub_64 = v_221;
  };
  if (task_v_309) {
    sub_40 = sub_64;
  } else {
    sub_40 = sub_41;
  };
  sub_73 = sub_42;
  if (task_v_308) {
    sub_39 = sub_73;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  if (task_v_309) {
    sub_74 = sub_73;
  } else {
    sub_74 = sub_41;
  };
  if (task_cold) {
    sub_78 = sub_65;
  } else {
    sub_78 = sub_63;
  };
  sub_77 = sub_78;
  if (task_c4) {
    sub_76 = sub_77;
  } else {
    sub_76 = sub_60;
  };
  if (task_finish) {
    v_218 = sub_62;
  } else {
    v_218 = sub_44;
  };
  if (task_temp_ok) {
    sub_79 = sub_61;
  } else {
    sub_79 = v_218;
  };
  if (task_v_309) {
    sub_75 = sub_79;
  } else {
    sub_75 = sub_76;
  };
  if (task_v_308) {
    v_225 = sub_75;
  } else {
    v_225 = sub_74;
  };
  sub_81 = sub_60;
  if (task_v_309) {
    sub_80 = sub_73;
  } else {
    sub_80 = sub_81;
  };
  if (task_v_308) {
    v_226 = sub_75;
  } else {
    v_226 = sub_80;
  };
  if (task_start) {
    v_227 = v_225;
  } else {
    v_227 = v_226;
  };
  if (task_v_307) {
    sub_37 = v_227;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (task_v_398) {
    v_242 = sub_6;
    v_240 = sub_34;
  } else {
    v_242 = sub_34;
    v_240 = sub_6;
  };
  if (task_down1) {
    v_241 = v_240;
  } else {
    v_241 = sub_5;
  };
  if (task_c1) {
    sub_4 = sub_5;
  } else {
    sub_4 = v_241;
  };
  sub_3 = sub_4;
  if (task_up2) {
    v_217 = false;
  } else {
    v_217 = sub_36;
  };
  if (task_c2) {
    sub_82 = v_217;
  } else {
    sub_82 = sub_35;
  };
  if (task_v_398) {
    v_243 = sub_82;
  } else {
    v_243 = sub_34;
  };
  if (task_down1) {
    v_244 = v_242;
  } else {
    v_244 = v_243;
  };
  sub_83 = sub_6;
  if (task_c1) {
    v_245 = v_244;
  } else {
    v_245 = sub_83;
  };
  if (task_up2) {
    v_216 = false;
  } else {
    v_216 = sub_8;
  };
  if (task_c2) {
    sub_84 = v_216;
  } else {
    sub_84 = sub_7;
  };
  if (task_v_398) {
    v_246 = sub_82;
  } else {
    v_246 = sub_84;
  };
  if (task_down1) {
    v_247 = sub_6;
  } else {
    v_247 = v_246;
  };
  if (task_c1) {
    v_248 = v_247;
  } else {
    v_248 = sub_83;
  };
  if (task_up1) {
    v_249 = v_245;
  } else {
    v_249 = v_248;
  };
  if (task_v_397) {
    sub_2 = v_249;
  } else {
    sub_2 = sub_3;
  };
  if (task_c_tv2) {
    sub_104 = sub_23;
  } else {
    sub_104 = sub_26;
  };
  sub_105 = sub_26;
  if (task_ck_17_1) {
    v_204 = sub_104;
    sub_103 = sub_105;
  } else {
    v_204 = sub_105;
    sub_103 = sub_104;
  };
  if (task_c_lamp1) {
    v_207 = sub_105;
  } else {
    v_207 = sub_103;
  };
  if (task_on_lamp) {
    v_205 = sub_103;
  } else {
    v_205 = v_204;
  };
  if (task_c_lamp1) {
    v_206 = v_205;
  } else {
    v_206 = sub_104;
  };
  if (task_c_lamp2) {
    sub_102 = v_206;
  } else {
    sub_102 = v_207;
  };
  if (task_on_tv) {
    v_202 = sub_28;
    sub_108 = sub_25;
  } else {
    v_202 = sub_25;
    sub_108 = sub_28;
  };
  if (task_ck_19_1) {
    v_203 = v_202;
  } else {
    v_203 = sub_108;
  };
  if (task_c_tv2) {
    sub_107 = v_203;
  } else {
    sub_107 = sub_32;
  };
  if (task_ck_17_1) {
    v_208 = sub_107;
    sub_106 = false;
  } else {
    v_208 = false;
    sub_106 = sub_107;
  };
  if (task_c_lamp1) {
    v_211 = false;
  } else {
    v_211 = sub_106;
  };
  if (task_on_lamp) {
    v_209 = sub_106;
  } else {
    v_209 = v_208;
  };
  if (task_c_lamp1) {
    v_210 = v_209;
  } else {
    v_210 = sub_107;
  };
  if (task_c_lamp2) {
    v_212 = v_210;
  } else {
    v_212 = v_211;
  };
  if (task_precense) {
    sub_101 = sub_102;
  } else {
    sub_101 = v_212;
  };
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  if (task_down2) {
    sub_109 = sub_91;
  } else {
    sub_109 = false;
  };
  if (task_c2) {
    v_213 = false;
  } else {
    v_213 = sub_109;
  };
  if (task_v_398) {
    sub_87 = v_213;
  } else {
    sub_87 = sub_88;
  };
  if (task_precense) {
    sub_127 = sub_102;
  } else {
    sub_127 = false;
  };
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (task_c3) {
    sub_132 = false;
  } else {
    sub_132 = sub_126;
  };
  if (task_v_360) {
    v_196 = sub_125;
  } else {
    v_196 = sub_132;
  };
  if (task_e) {
    sub_131 = v_196;
  } else {
    sub_131 = false;
  };
  if (task_v_361) {
    sub_130 = false;
  } else {
    sub_130 = sub_131;
  };
  if (task_s) {
    sub_134 = false;
  } else {
    sub_134 = sub_127;
  };
  if (task_v_360) {
    sub_133 = sub_134;
  } else {
    sub_133 = sub_132;
  };
  if (task_v_361) {
    v_197 = sub_133;
  } else {
    v_197 = sub_124;
  };
  if (task_v_362) {
    sub_129 = v_197;
  } else {
    sub_129 = sub_130;
  };
  if (task_v_417) {
    sub_128 = sub_129;
  } else {
    sub_128 = sub_124;
  };
  if (task_confort) {
    v_198 = sub_128;
  } else {
    v_198 = sub_129;
  };
  if (task_eco) {
    sub_122 = sub_123;
  } else {
    sub_122 = v_198;
  };
  if (task_confort) {
    sub_135 = sub_124;
  } else {
    sub_135 = sub_128;
  };
  if (task_v_418) {
    sub_121 = sub_135;
  } else {
    sub_121 = sub_122;
  };
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_139 = sub_123;
  sub_138 = sub_139;
  sub_137 = sub_138;
  sub_136 = sub_137;
  if (task_c4) {
    sub_117 = sub_118;
  } else {
    sub_117 = sub_136;
  };
  if (task_v_360) {
    sub_147 = false;
  } else {
    sub_147 = sub_125;
  };
  if (task_e) {
    v_193 = sub_147;
    sub_146 = sub_125;
  } else {
    v_193 = sub_125;
    sub_146 = sub_147;
  };
  if (task_v_361) {
    sub_145 = v_193;
  } else {
    sub_145 = sub_146;
  };
  if (task_v_362) {
    sub_144 = sub_124;
  } else {
    sub_144 = sub_145;
  };
  if (task_v_417) {
    sub_143 = sub_144;
  } else {
    sub_143 = sub_124;
  };
  if (task_confort) {
    v_194 = sub_143;
  } else {
    v_194 = sub_144;
  };
  if (task_eco) {
    sub_142 = sub_123;
  } else {
    sub_142 = v_194;
  };
  if (task_confort) {
    sub_148 = sub_124;
  } else {
    sub_148 = sub_143;
  };
  if (task_v_418) {
    sub_141 = sub_148;
  } else {
    sub_141 = sub_142;
  };
  if (task_finish) {
    v_195 = sub_138;
  } else {
    v_195 = sub_141;
  };
  if (task_temp_ok) {
    sub_140 = sub_137;
  } else {
    sub_140 = v_195;
  };
  if (task_v_309) {
    sub_116 = sub_140;
  } else {
    sub_116 = sub_117;
  };
  sub_149 = sub_118;
  if (task_v_308) {
    sub_115 = sub_149;
  } else {
    sub_115 = sub_116;
  };
  sub_114 = sub_115;
  if (task_v_309) {
    sub_150 = sub_149;
  } else {
    sub_150 = sub_117;
  };
  if (task_cold) {
    sub_154 = sub_141;
  } else {
    sub_154 = sub_139;
  };
  sub_153 = sub_154;
  if (task_c4) {
    sub_152 = sub_153;
  } else {
    sub_152 = sub_136;
  };
  if (task_finish) {
    v_192 = sub_138;
  } else {
    v_192 = sub_120;
  };
  if (task_temp_ok) {
    sub_155 = sub_137;
  } else {
    sub_155 = v_192;
  };
  if (task_v_309) {
    sub_151 = sub_155;
  } else {
    sub_151 = sub_152;
  };
  if (task_v_308) {
    v_199 = sub_151;
  } else {
    v_199 = sub_150;
  };
  sub_157 = sub_136;
  if (task_v_309) {
    sub_156 = sub_149;
  } else {
    sub_156 = sub_157;
  };
  if (task_v_308) {
    v_200 = sub_151;
  } else {
    v_200 = sub_156;
  };
  if (task_start) {
    v_201 = v_199;
  } else {
    v_201 = v_200;
  };
  if (task_v_307) {
    sub_113 = v_201;
  } else {
    sub_113 = sub_114;
  };
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  if (task_v_398) {
    v_250 = sub_88;
    v_214 = sub_110;
  } else {
    v_250 = sub_110;
    v_214 = sub_88;
  };
  if (task_down1) {
    v_215 = v_214;
  } else {
    v_215 = sub_87;
  };
  if (task_c1) {
    sub_86 = sub_87;
  } else {
    sub_86 = v_215;
  };
  sub_85 = sub_86;
  if (task_up2) {
    v_191 = false;
  } else {
    v_191 = sub_112;
  };
  if (task_c2) {
    sub_158 = v_191;
  } else {
    sub_158 = sub_111;
  };
  if (task_v_398) {
    v_251 = sub_158;
  } else {
    v_251 = sub_110;
  };
  if (task_down1) {
    v_252 = v_250;
  } else {
    v_252 = v_251;
  };
  sub_159 = sub_88;
  if (task_c1) {
    v_253 = v_252;
  } else {
    v_253 = sub_159;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_90;
  };
  if (task_c2) {
    sub_160 = v;
  } else {
    sub_160 = sub_89;
  };
  if (task_v_398) {
    v_254 = sub_158;
  } else {
    v_254 = sub_160;
  };
  if (task_down1) {
    v_255 = sub_88;
  } else {
    v_255 = v_254;
  };
  if (task_c1) {
    v_256 = v_255;
  } else {
    v_256 = sub_159;
  };
  if (task_up1) {
    v_257 = v_253;
  } else {
    v_257 = v_256;
  };
  if (task_v_397) {
    v_258 = v_257;
  } else {
    v_258 = sub_85;
  };
  if (p_task_c_tv1) {
    sub_1 = v_258;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->task_c_tv1 = sub_0;;
}

void Task_controller__task_controller_task_c_tv2_step(int task_up1,
                                                      int task_down1,
                                                      int task_up2,
                                                      int task_down2,
                                                      int task_s, int task_e,
                                                      int task_finish,
                                                      int task_start,
                                                      int task_cold,
                                                      int task_temp_ok,
                                                      int task_eco,
                                                      int task_confort,
                                                      int task_on_lamp,
                                                      int task_on_tv,
                                                      int task_precense,
                                                      int task_push_door,
                                                      int task_push_window,
                                                      int task_v_418,
                                                      int task_v_417,
                                                      int task_pnr_8,
                                                      int task_v_398,
                                                      int task_v_397,
                                                      int task_pnr_7,
                                                      int task_v_362,
                                                      int task_v_361,
                                                      int task_v_360,
                                                      int task_pnr_6,
                                                      int task_v_309,
                                                      int task_v_308,
                                                      int task_v_307,
                                                      int task_pnr_5,
                                                      int task_ck_17_1,
                                                      int task_pnr_4,
                                                      int task_ck_19_1,
                                                      int task_pnr_3,
                                                      int task_ck_21_1,
                                                      int task_pnr_2,
                                                      int task_ck_23_1,
                                                      int task_pnr_1,
                                                      int task_ck_25_1,
                                                      int task_pnr,
                                                      int p_task_c_window,
                                                      int p_task_c_door,
                                                      int p_task_c_tv1,
                                                      int p_task_c_tv2,
                                                      int p_task_c_lamp2,
                                                      int p_task_c_lamp1,
                                                      int p_task_c4,
                                                      int p_task_c3,
                                                      int p_task_c2,
                                                      int p_task_c1,
                                                      int task_c_lamp2,
                                                      int task_c_lamp1,
                                                      int task_c4,
                                                      int task_c3,
                                                      int task_c2,
                                                      int task_c1,
                                                      Task_controller__task_controller_task_c_tv2_out* _out) {
  
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  sub_24 = false;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_28 = true;
  sub_27 = sub_28;
  if (task_ck_19_1) {
    sub_26 = sub_27;
  } else {
    sub_26 = sub_23;
  };
  if (task_ck_17_1) {
    v_295 = sub_26;
    sub_25 = false;
  } else {
    v_295 = false;
    sub_25 = sub_26;
  };
  if (task_c_lamp1) {
    v_298 = false;
  } else {
    v_298 = sub_25;
  };
  if (task_on_lamp) {
    v_296 = sub_25;
  } else {
    v_296 = v_295;
  };
  if (task_c_lamp1) {
    v_297 = v_296;
  } else {
    v_297 = sub_26;
  };
  if (task_c_lamp2) {
    v_299 = v_297;
  } else {
    v_299 = v_298;
  };
  if (task_precense) {
    sub_19 = sub_20;
  } else {
    sub_19 = v_299;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (task_down2) {
    sub_29 = sub_9;
  } else {
    sub_29 = false;
  };
  if (task_c2) {
    v_300 = false;
  } else {
    v_300 = sub_29;
  };
  if (task_v_398) {
    sub_5 = v_300;
  } else {
    sub_5 = sub_6;
  };
  if (task_precense) {
    sub_47 = sub_20;
  } else {
    sub_47 = false;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  if (task_c3) {
    sub_52 = false;
  } else {
    sub_52 = sub_46;
  };
  if (task_v_360) {
    v_289 = sub_45;
  } else {
    v_289 = sub_52;
  };
  if (task_e) {
    sub_51 = v_289;
  } else {
    sub_51 = false;
  };
  if (task_v_361) {
    sub_50 = false;
  } else {
    sub_50 = sub_51;
  };
  if (task_s) {
    sub_54 = false;
  } else {
    sub_54 = sub_47;
  };
  if (task_v_360) {
    sub_53 = sub_54;
  } else {
    sub_53 = sub_52;
  };
  if (task_v_361) {
    v_290 = sub_53;
  } else {
    v_290 = sub_44;
  };
  if (task_v_362) {
    sub_49 = v_290;
  } else {
    sub_49 = sub_50;
  };
  if (task_v_417) {
    sub_48 = sub_49;
  } else {
    sub_48 = sub_44;
  };
  if (task_confort) {
    v_291 = sub_48;
  } else {
    v_291 = sub_49;
  };
  if (task_eco) {
    sub_42 = sub_43;
  } else {
    sub_42 = v_291;
  };
  if (task_confort) {
    sub_55 = sub_44;
  } else {
    sub_55 = sub_48;
  };
  if (task_v_418) {
    sub_41 = sub_55;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_59 = sub_43;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (task_c4) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_56;
  };
  if (task_v_360) {
    sub_67 = false;
  } else {
    sub_67 = sub_45;
  };
  if (task_e) {
    v_286 = sub_67;
    sub_66 = sub_45;
  } else {
    v_286 = sub_45;
    sub_66 = sub_67;
  };
  if (task_v_361) {
    sub_65 = v_286;
  } else {
    sub_65 = sub_66;
  };
  if (task_v_362) {
    sub_64 = sub_44;
  } else {
    sub_64 = sub_65;
  };
  if (task_v_417) {
    sub_63 = sub_64;
  } else {
    sub_63 = sub_44;
  };
  if (task_confort) {
    v_287 = sub_63;
  } else {
    v_287 = sub_64;
  };
  if (task_eco) {
    sub_62 = sub_43;
  } else {
    sub_62 = v_287;
  };
  if (task_confort) {
    sub_68 = sub_44;
  } else {
    sub_68 = sub_63;
  };
  if (task_v_418) {
    sub_61 = sub_68;
  } else {
    sub_61 = sub_62;
  };
  if (task_finish) {
    v_288 = sub_58;
  } else {
    v_288 = sub_61;
  };
  if (task_temp_ok) {
    sub_60 = sub_57;
  } else {
    sub_60 = v_288;
  };
  if (task_v_309) {
    sub_36 = sub_60;
  } else {
    sub_36 = sub_37;
  };
  sub_69 = sub_38;
  if (task_v_308) {
    sub_35 = sub_69;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  if (task_v_309) {
    sub_70 = sub_69;
  } else {
    sub_70 = sub_37;
  };
  if (task_cold) {
    sub_74 = sub_61;
  } else {
    sub_74 = sub_59;
  };
  sub_73 = sub_74;
  if (task_c4) {
    sub_72 = sub_73;
  } else {
    sub_72 = sub_56;
  };
  if (task_finish) {
    v_285 = sub_58;
  } else {
    v_285 = sub_40;
  };
  if (task_temp_ok) {
    sub_75 = sub_57;
  } else {
    sub_75 = v_285;
  };
  if (task_v_309) {
    sub_71 = sub_75;
  } else {
    sub_71 = sub_72;
  };
  if (task_v_308) {
    v_292 = sub_71;
  } else {
    v_292 = sub_70;
  };
  sub_77 = sub_56;
  if (task_v_309) {
    sub_76 = sub_69;
  } else {
    sub_76 = sub_77;
  };
  if (task_v_308) {
    v_293 = sub_71;
  } else {
    v_293 = sub_76;
  };
  if (task_start) {
    v_294 = v_292;
  } else {
    v_294 = v_293;
  };
  if (task_v_307) {
    sub_33 = v_294;
  } else {
    sub_33 = sub_34;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (task_v_398) {
    v_303 = sub_6;
    v_301 = sub_30;
  } else {
    v_303 = sub_30;
    v_301 = sub_6;
  };
  if (task_down1) {
    v_302 = v_301;
  } else {
    v_302 = sub_5;
  };
  if (task_c1) {
    sub_4 = sub_5;
  } else {
    sub_4 = v_302;
  };
  sub_3 = sub_4;
  if (task_up2) {
    v_284 = false;
  } else {
    v_284 = sub_32;
  };
  if (task_c2) {
    sub_78 = v_284;
  } else {
    sub_78 = sub_31;
  };
  if (task_v_398) {
    v_304 = sub_78;
  } else {
    v_304 = sub_30;
  };
  if (task_down1) {
    v_305 = v_303;
  } else {
    v_305 = v_304;
  };
  sub_79 = sub_6;
  if (task_c1) {
    v_306 = v_305;
  } else {
    v_306 = sub_79;
  };
  if (task_up2) {
    v_283 = false;
  } else {
    v_283 = sub_8;
  };
  if (task_c2) {
    sub_80 = v_283;
  } else {
    sub_80 = sub_7;
  };
  if (task_v_398) {
    v_307 = sub_78;
  } else {
    v_307 = sub_80;
  };
  if (task_down1) {
    v_308 = sub_6;
  } else {
    v_308 = v_307;
  };
  if (task_c1) {
    v_309 = v_308;
  } else {
    v_309 = sub_79;
  };
  if (task_up1) {
    v_310 = v_306;
  } else {
    v_310 = v_309;
  };
  if (task_v_397) {
    sub_2 = v_310;
  } else {
    sub_2 = sub_3;
  };
  if (task_ck_17_1) {
    v_275 = sub_27;
  } else {
    v_275 = false;
  };
  if (task_on_tv) {
    v_270 = sub_28;
    sub_101 = sub_24;
  } else {
    v_270 = sub_24;
    sub_101 = sub_28;
  };
  if (task_ck_19_1) {
    sub_100 = v_270;
  } else {
    sub_100 = sub_101;
  };
  if (task_ck_17_1) {
    v_271 = sub_100;
    sub_99 = sub_27;
  } else {
    v_271 = sub_27;
    sub_99 = sub_100;
  };
  if (task_on_lamp) {
    v_272 = sub_99;
  } else {
    v_272 = v_271;
  };
  if (task_c_lamp1) {
    v_273 = v_272;
  } else {
    v_273 = sub_100;
  };
  sub_102 = sub_27;
  if (task_c_lamp1) {
    v_274 = sub_102;
  } else {
    v_274 = sub_99;
  };
  if (task_c_lamp2) {
    sub_98 = v_273;
  } else {
    sub_98 = v_274;
  };
  if (task_ck_17_1) {
    sub_103 = false;
  } else {
    sub_103 = sub_27;
  };
  if (task_c_lamp1) {
    v_278 = false;
  } else {
    v_278 = sub_103;
  };
  if (task_on_lamp) {
    v_276 = sub_103;
  } else {
    v_276 = v_275;
  };
  if (task_c_lamp1) {
    v_277 = v_276;
  } else {
    v_277 = sub_102;
  };
  if (task_c_lamp2) {
    v_279 = v_277;
  } else {
    v_279 = v_278;
  };
  if (task_precense) {
    sub_97 = sub_98;
  } else {
    sub_97 = v_279;
  };
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  if (task_down2) {
    sub_104 = sub_87;
  } else {
    sub_104 = false;
  };
  if (task_c2) {
    v_280 = false;
  } else {
    v_280 = sub_104;
  };
  if (task_v_398) {
    sub_83 = v_280;
  } else {
    sub_83 = sub_84;
  };
  if (task_precense) {
    sub_122 = sub_98;
  } else {
    sub_122 = false;
  };
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  if (task_c3) {
    sub_127 = false;
  } else {
    sub_127 = sub_121;
  };
  if (task_v_360) {
    v_264 = sub_120;
  } else {
    v_264 = sub_127;
  };
  if (task_e) {
    sub_126 = v_264;
  } else {
    sub_126 = false;
  };
  if (task_v_361) {
    sub_125 = false;
  } else {
    sub_125 = sub_126;
  };
  if (task_s) {
    sub_129 = false;
  } else {
    sub_129 = sub_122;
  };
  if (task_v_360) {
    sub_128 = sub_129;
  } else {
    sub_128 = sub_127;
  };
  if (task_v_361) {
    v_265 = sub_128;
  } else {
    v_265 = sub_119;
  };
  if (task_v_362) {
    sub_124 = v_265;
  } else {
    sub_124 = sub_125;
  };
  if (task_v_417) {
    sub_123 = sub_124;
  } else {
    sub_123 = sub_119;
  };
  if (task_confort) {
    v_266 = sub_123;
  } else {
    v_266 = sub_124;
  };
  if (task_eco) {
    sub_117 = sub_118;
  } else {
    sub_117 = v_266;
  };
  if (task_confort) {
    sub_130 = sub_119;
  } else {
    sub_130 = sub_123;
  };
  if (task_v_418) {
    sub_116 = sub_130;
  } else {
    sub_116 = sub_117;
  };
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_134 = sub_118;
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  if (task_c4) {
    sub_112 = sub_113;
  } else {
    sub_112 = sub_131;
  };
  if (task_v_360) {
    sub_142 = false;
  } else {
    sub_142 = sub_120;
  };
  if (task_e) {
    v_261 = sub_142;
    sub_141 = sub_120;
  } else {
    v_261 = sub_120;
    sub_141 = sub_142;
  };
  if (task_v_361) {
    sub_140 = v_261;
  } else {
    sub_140 = sub_141;
  };
  if (task_v_362) {
    sub_139 = sub_119;
  } else {
    sub_139 = sub_140;
  };
  if (task_v_417) {
    sub_138 = sub_139;
  } else {
    sub_138 = sub_119;
  };
  if (task_confort) {
    v_262 = sub_138;
  } else {
    v_262 = sub_139;
  };
  if (task_eco) {
    sub_137 = sub_118;
  } else {
    sub_137 = v_262;
  };
  if (task_confort) {
    sub_143 = sub_119;
  } else {
    sub_143 = sub_138;
  };
  if (task_v_418) {
    sub_136 = sub_143;
  } else {
    sub_136 = sub_137;
  };
  if (task_finish) {
    v_263 = sub_133;
  } else {
    v_263 = sub_136;
  };
  if (task_temp_ok) {
    sub_135 = sub_132;
  } else {
    sub_135 = v_263;
  };
  if (task_v_309) {
    sub_111 = sub_135;
  } else {
    sub_111 = sub_112;
  };
  sub_144 = sub_113;
  if (task_v_308) {
    sub_110 = sub_144;
  } else {
    sub_110 = sub_111;
  };
  sub_109 = sub_110;
  if (task_v_309) {
    sub_145 = sub_144;
  } else {
    sub_145 = sub_112;
  };
  if (task_cold) {
    sub_149 = sub_136;
  } else {
    sub_149 = sub_134;
  };
  sub_148 = sub_149;
  if (task_c4) {
    sub_147 = sub_148;
  } else {
    sub_147 = sub_131;
  };
  if (task_finish) {
    v_260 = sub_133;
  } else {
    v_260 = sub_115;
  };
  if (task_temp_ok) {
    sub_150 = sub_132;
  } else {
    sub_150 = v_260;
  };
  if (task_v_309) {
    sub_146 = sub_150;
  } else {
    sub_146 = sub_147;
  };
  if (task_v_308) {
    v_267 = sub_146;
  } else {
    v_267 = sub_145;
  };
  sub_152 = sub_131;
  if (task_v_309) {
    sub_151 = sub_144;
  } else {
    sub_151 = sub_152;
  };
  if (task_v_308) {
    v_268 = sub_146;
  } else {
    v_268 = sub_151;
  };
  if (task_start) {
    v_269 = v_267;
  } else {
    v_269 = v_268;
  };
  if (task_v_307) {
    sub_108 = v_269;
  } else {
    sub_108 = sub_109;
  };
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  if (task_v_398) {
    v_311 = sub_84;
    v_281 = sub_105;
  } else {
    v_311 = sub_105;
    v_281 = sub_84;
  };
  if (task_down1) {
    v_282 = v_281;
  } else {
    v_282 = sub_83;
  };
  if (task_c1) {
    sub_82 = sub_83;
  } else {
    sub_82 = v_282;
  };
  sub_81 = sub_82;
  if (task_up2) {
    v_259 = false;
  } else {
    v_259 = sub_107;
  };
  if (task_c2) {
    sub_153 = v_259;
  } else {
    sub_153 = sub_106;
  };
  if (task_v_398) {
    v_312 = sub_153;
  } else {
    v_312 = sub_105;
  };
  if (task_down1) {
    v_313 = v_311;
  } else {
    v_313 = v_312;
  };
  sub_154 = sub_84;
  if (task_c1) {
    v_314 = v_313;
  } else {
    v_314 = sub_154;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_86;
  };
  if (task_c2) {
    sub_155 = v;
  } else {
    sub_155 = sub_85;
  };
  if (task_v_398) {
    v_315 = sub_153;
  } else {
    v_315 = sub_155;
  };
  if (task_down1) {
    v_316 = sub_84;
  } else {
    v_316 = v_315;
  };
  if (task_c1) {
    v_317 = v_316;
  } else {
    v_317 = sub_154;
  };
  if (task_up1) {
    v_318 = v_314;
  } else {
    v_318 = v_317;
  };
  if (task_v_397) {
    v_319 = v_318;
  } else {
    v_319 = sub_81;
  };
  if (p_task_c_tv2) {
    sub_1 = v_319;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->task_c_tv2 = sub_0;;
}

void Task_controller__task_controller_task_c_lamp2_step(int task_up1,
                                                        int task_down1,
                                                        int task_up2,
                                                        int task_down2,
                                                        int task_s,
                                                        int task_e,
                                                        int task_finish,
                                                        int task_start,
                                                        int task_cold,
                                                        int task_temp_ok,
                                                        int task_eco,
                                                        int task_confort,
                                                        int task_on_lamp,
                                                        int task_on_tv,
                                                        int task_precense,
                                                        int task_push_door,
                                                        int task_push_window,
                                                        int task_v_418,
                                                        int task_v_417,
                                                        int task_pnr_8,
                                                        int task_v_398,
                                                        int task_v_397,
                                                        int task_pnr_7,
                                                        int task_v_362,
                                                        int task_v_361,
                                                        int task_v_360,
                                                        int task_pnr_6,
                                                        int task_v_309,
                                                        int task_v_308,
                                                        int task_v_307,
                                                        int task_pnr_5,
                                                        int task_ck_17_1,
                                                        int task_pnr_4,
                                                        int task_ck_19_1,
                                                        int task_pnr_3,
                                                        int task_ck_21_1,
                                                        int task_pnr_2,
                                                        int task_ck_23_1,
                                                        int task_pnr_1,
                                                        int task_ck_25_1,
                                                        int task_pnr,
                                                        int p_task_c_window,
                                                        int p_task_c_door,
                                                        int p_task_c_tv1,
                                                        int p_task_c_tv2,
                                                        int p_task_c_lamp2,
                                                        int p_task_c_lamp1,
                                                        int p_task_c4,
                                                        int p_task_c3,
                                                        int p_task_c2,
                                                        int p_task_c1,
                                                        int task_c_lamp1,
                                                        int task_c4,
                                                        int task_c3,
                                                        int task_c2,
                                                        int task_c1,
                                                        Task_controller__task_controller_task_c_lamp2_out* _out) {
  
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int v_364;
  int v_363;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_356;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int v_349;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int v_334;
  int v_333;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  sub_23 = false;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_26 = true;
  sub_25 = sub_26;
  if (task_ck_17_1) {
    v_348 = sub_25;
    v_347 = false;
  } else {
    v_348 = false;
    v_347 = sub_25;
  };
  if (task_on_lamp) {
    sub_24 = v_347;
  } else {
    sub_24 = v_348;
  };
  if (task_ck_17_1) {
    sub_27 = sub_25;
  } else {
    sub_27 = sub_22;
  };
  if (task_c_lamp1) {
    v_349 = sub_24;
  } else {
    v_349 = sub_27;
  };
  if (task_precense) {
    sub_19 = sub_20;
  } else {
    sub_19 = v_349;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (task_down2) {
    sub_28 = sub_9;
  } else {
    sub_28 = false;
  };
  if (task_c2) {
    v_350 = false;
  } else {
    v_350 = sub_28;
  };
  if (task_v_398) {
    sub_5 = v_350;
  } else {
    sub_5 = sub_6;
  };
  if (task_precense) {
    sub_46 = sub_20;
  } else {
    sub_46 = false;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (task_c3) {
    sub_51 = false;
  } else {
    sub_51 = sub_45;
  };
  if (task_v_360) {
    v_341 = sub_44;
  } else {
    v_341 = sub_51;
  };
  if (task_e) {
    sub_50 = v_341;
  } else {
    sub_50 = false;
  };
  if (task_v_361) {
    sub_49 = false;
  } else {
    sub_49 = sub_50;
  };
  if (task_s) {
    sub_53 = false;
  } else {
    sub_53 = sub_46;
  };
  if (task_v_360) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_51;
  };
  if (task_v_361) {
    v_342 = sub_52;
  } else {
    v_342 = sub_43;
  };
  if (task_v_362) {
    sub_48 = v_342;
  } else {
    sub_48 = sub_49;
  };
  if (task_v_417) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_43;
  };
  if (task_confort) {
    v_343 = sub_47;
  } else {
    v_343 = sub_48;
  };
  if (task_eco) {
    sub_41 = sub_42;
  } else {
    sub_41 = v_343;
  };
  if (task_confort) {
    sub_54 = sub_43;
  } else {
    sub_54 = sub_47;
  };
  if (task_v_418) {
    sub_40 = sub_54;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_58 = sub_42;
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  if (task_c4) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_55;
  };
  if (task_v_360) {
    sub_66 = false;
  } else {
    sub_66 = sub_44;
  };
  if (task_e) {
    v_338 = sub_66;
    sub_65 = sub_44;
  } else {
    v_338 = sub_44;
    sub_65 = sub_66;
  };
  if (task_v_361) {
    sub_64 = v_338;
  } else {
    sub_64 = sub_65;
  };
  if (task_v_362) {
    sub_63 = sub_43;
  } else {
    sub_63 = sub_64;
  };
  if (task_v_417) {
    sub_62 = sub_63;
  } else {
    sub_62 = sub_43;
  };
  if (task_confort) {
    v_339 = sub_62;
  } else {
    v_339 = sub_63;
  };
  if (task_eco) {
    sub_61 = sub_42;
  } else {
    sub_61 = v_339;
  };
  if (task_confort) {
    sub_67 = sub_43;
  } else {
    sub_67 = sub_62;
  };
  if (task_v_418) {
    sub_60 = sub_67;
  } else {
    sub_60 = sub_61;
  };
  if (task_finish) {
    v_340 = sub_57;
  } else {
    v_340 = sub_60;
  };
  if (task_temp_ok) {
    sub_59 = sub_56;
  } else {
    sub_59 = v_340;
  };
  if (task_v_309) {
    sub_35 = sub_59;
  } else {
    sub_35 = sub_36;
  };
  sub_68 = sub_37;
  if (task_v_308) {
    sub_34 = sub_68;
  } else {
    sub_34 = sub_35;
  };
  sub_33 = sub_34;
  if (task_v_309) {
    sub_69 = sub_68;
  } else {
    sub_69 = sub_36;
  };
  if (task_cold) {
    sub_73 = sub_60;
  } else {
    sub_73 = sub_58;
  };
  sub_72 = sub_73;
  if (task_c4) {
    sub_71 = sub_72;
  } else {
    sub_71 = sub_55;
  };
  if (task_finish) {
    v_337 = sub_57;
  } else {
    v_337 = sub_39;
  };
  if (task_temp_ok) {
    sub_74 = sub_56;
  } else {
    sub_74 = v_337;
  };
  if (task_v_309) {
    sub_70 = sub_74;
  } else {
    sub_70 = sub_71;
  };
  if (task_v_308) {
    v_344 = sub_70;
  } else {
    v_344 = sub_69;
  };
  sub_76 = sub_55;
  if (task_v_309) {
    sub_75 = sub_68;
  } else {
    sub_75 = sub_76;
  };
  if (task_v_308) {
    v_345 = sub_70;
  } else {
    v_345 = sub_75;
  };
  if (task_start) {
    v_346 = v_344;
  } else {
    v_346 = v_345;
  };
  if (task_v_307) {
    sub_32 = v_346;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (task_v_398) {
    v_353 = sub_6;
    v_351 = sub_29;
  } else {
    v_353 = sub_29;
    v_351 = sub_6;
  };
  if (task_down1) {
    v_352 = v_351;
  } else {
    v_352 = sub_5;
  };
  if (task_c1) {
    sub_4 = sub_5;
  } else {
    sub_4 = v_352;
  };
  sub_3 = sub_4;
  if (task_up2) {
    v_336 = false;
  } else {
    v_336 = sub_31;
  };
  if (task_c2) {
    sub_77 = v_336;
  } else {
    sub_77 = sub_30;
  };
  if (task_v_398) {
    v_354 = sub_77;
  } else {
    v_354 = sub_29;
  };
  if (task_down1) {
    v_355 = v_353;
  } else {
    v_355 = v_354;
  };
  sub_78 = sub_6;
  if (task_c1) {
    v_356 = v_355;
  } else {
    v_356 = sub_78;
  };
  if (task_up2) {
    v_335 = false;
  } else {
    v_335 = sub_8;
  };
  if (task_c2) {
    sub_79 = v_335;
  } else {
    sub_79 = sub_7;
  };
  if (task_v_398) {
    v_357 = sub_77;
  } else {
    v_357 = sub_79;
  };
  if (task_down1) {
    v_358 = sub_6;
  } else {
    v_358 = v_357;
  };
  if (task_c1) {
    v_359 = v_358;
  } else {
    v_359 = sub_78;
  };
  if (task_up1) {
    v_360 = v_356;
  } else {
    v_360 = v_359;
  };
  if (task_v_397) {
    sub_2 = v_360;
  } else {
    sub_2 = sub_3;
  };
  sub_98 = sub_25;
  if (task_c_lamp1) {
    v_331 = sub_24;
  } else {
    v_331 = sub_98;
  };
  sub_97 = sub_98;
  if (task_precense) {
    sub_96 = sub_97;
  } else {
    sub_96 = v_331;
  };
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (task_down2) {
    sub_99 = sub_86;
  } else {
    sub_99 = false;
  };
  if (task_c2) {
    v_332 = false;
  } else {
    v_332 = sub_99;
  };
  if (task_v_398) {
    sub_82 = v_332;
  } else {
    sub_82 = sub_83;
  };
  if (task_precense) {
    sub_117 = sub_97;
  } else {
    sub_117 = false;
  };
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  if (task_c3) {
    sub_122 = false;
  } else {
    sub_122 = sub_116;
  };
  if (task_v_360) {
    v_325 = sub_115;
  } else {
    v_325 = sub_122;
  };
  if (task_e) {
    sub_121 = v_325;
  } else {
    sub_121 = false;
  };
  if (task_v_361) {
    sub_120 = false;
  } else {
    sub_120 = sub_121;
  };
  if (task_s) {
    sub_124 = false;
  } else {
    sub_124 = sub_117;
  };
  if (task_v_360) {
    sub_123 = sub_124;
  } else {
    sub_123 = sub_122;
  };
  if (task_v_361) {
    v_326 = sub_123;
  } else {
    v_326 = sub_114;
  };
  if (task_v_362) {
    sub_119 = v_326;
  } else {
    sub_119 = sub_120;
  };
  if (task_v_417) {
    sub_118 = sub_119;
  } else {
    sub_118 = sub_114;
  };
  if (task_confort) {
    v_327 = sub_118;
  } else {
    v_327 = sub_119;
  };
  if (task_eco) {
    sub_112 = sub_113;
  } else {
    sub_112 = v_327;
  };
  if (task_confort) {
    sub_125 = sub_114;
  } else {
    sub_125 = sub_118;
  };
  if (task_v_418) {
    sub_111 = sub_125;
  } else {
    sub_111 = sub_112;
  };
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_129 = sub_113;
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  if (task_c4) {
    sub_107 = sub_108;
  } else {
    sub_107 = sub_126;
  };
  if (task_v_360) {
    sub_137 = false;
  } else {
    sub_137 = sub_115;
  };
  if (task_e) {
    v_322 = sub_137;
    sub_136 = sub_115;
  } else {
    v_322 = sub_115;
    sub_136 = sub_137;
  };
  if (task_v_361) {
    sub_135 = v_322;
  } else {
    sub_135 = sub_136;
  };
  if (task_v_362) {
    sub_134 = sub_114;
  } else {
    sub_134 = sub_135;
  };
  if (task_v_417) {
    sub_133 = sub_134;
  } else {
    sub_133 = sub_114;
  };
  if (task_confort) {
    v_323 = sub_133;
  } else {
    v_323 = sub_134;
  };
  if (task_eco) {
    sub_132 = sub_113;
  } else {
    sub_132 = v_323;
  };
  if (task_confort) {
    sub_138 = sub_114;
  } else {
    sub_138 = sub_133;
  };
  if (task_v_418) {
    sub_131 = sub_138;
  } else {
    sub_131 = sub_132;
  };
  if (task_finish) {
    v_324 = sub_128;
  } else {
    v_324 = sub_131;
  };
  if (task_temp_ok) {
    sub_130 = sub_127;
  } else {
    sub_130 = v_324;
  };
  if (task_v_309) {
    sub_106 = sub_130;
  } else {
    sub_106 = sub_107;
  };
  sub_139 = sub_108;
  if (task_v_308) {
    sub_105 = sub_139;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  if (task_v_309) {
    sub_140 = sub_139;
  } else {
    sub_140 = sub_107;
  };
  if (task_cold) {
    sub_144 = sub_131;
  } else {
    sub_144 = sub_129;
  };
  sub_143 = sub_144;
  if (task_c4) {
    sub_142 = sub_143;
  } else {
    sub_142 = sub_126;
  };
  if (task_finish) {
    v_321 = sub_128;
  } else {
    v_321 = sub_110;
  };
  if (task_temp_ok) {
    sub_145 = sub_127;
  } else {
    sub_145 = v_321;
  };
  if (task_v_309) {
    sub_141 = sub_145;
  } else {
    sub_141 = sub_142;
  };
  if (task_v_308) {
    v_328 = sub_141;
  } else {
    v_328 = sub_140;
  };
  sub_147 = sub_126;
  if (task_v_309) {
    sub_146 = sub_139;
  } else {
    sub_146 = sub_147;
  };
  if (task_v_308) {
    v_329 = sub_141;
  } else {
    v_329 = sub_146;
  };
  if (task_start) {
    v_330 = v_328;
  } else {
    v_330 = v_329;
  };
  if (task_v_307) {
    sub_103 = v_330;
  } else {
    sub_103 = sub_104;
  };
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  if (task_v_398) {
    v_361 = sub_83;
    v_333 = sub_100;
  } else {
    v_361 = sub_100;
    v_333 = sub_83;
  };
  if (task_down1) {
    v_334 = v_333;
  } else {
    v_334 = sub_82;
  };
  if (task_c1) {
    sub_81 = sub_82;
  } else {
    sub_81 = v_334;
  };
  sub_80 = sub_81;
  if (task_up2) {
    v_320 = false;
  } else {
    v_320 = sub_102;
  };
  if (task_c2) {
    sub_148 = v_320;
  } else {
    sub_148 = sub_101;
  };
  if (task_v_398) {
    v_362 = sub_148;
  } else {
    v_362 = sub_100;
  };
  if (task_down1) {
    v_363 = v_361;
  } else {
    v_363 = v_362;
  };
  sub_149 = sub_83;
  if (task_c1) {
    v_364 = v_363;
  } else {
    v_364 = sub_149;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_85;
  };
  if (task_c2) {
    sub_150 = v;
  } else {
    sub_150 = sub_84;
  };
  if (task_v_398) {
    v_365 = sub_148;
  } else {
    v_365 = sub_150;
  };
  if (task_down1) {
    v_366 = sub_83;
  } else {
    v_366 = v_365;
  };
  if (task_c1) {
    v_367 = v_366;
  } else {
    v_367 = sub_149;
  };
  if (task_up1) {
    v_368 = v_364;
  } else {
    v_368 = v_367;
  };
  if (task_v_397) {
    v_369 = v_368;
  } else {
    v_369 = sub_80;
  };
  if (p_task_c_lamp2) {
    sub_1 = v_369;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->task_c_lamp2 = sub_0;;
}

void Task_controller__task_controller_task_c_lamp1_step(int task_up1,
                                                        int task_down1,
                                                        int task_up2,
                                                        int task_down2,
                                                        int task_s,
                                                        int task_e,
                                                        int task_finish,
                                                        int task_start,
                                                        int task_cold,
                                                        int task_temp_ok,
                                                        int task_eco,
                                                        int task_confort,
                                                        int task_on_lamp,
                                                        int task_on_tv,
                                                        int task_precense,
                                                        int task_push_door,
                                                        int task_push_window,
                                                        int task_v_418,
                                                        int task_v_417,
                                                        int task_pnr_8,
                                                        int task_v_398,
                                                        int task_v_397,
                                                        int task_pnr_7,
                                                        int task_v_362,
                                                        int task_v_361,
                                                        int task_v_360,
                                                        int task_pnr_6,
                                                        int task_v_309,
                                                        int task_v_308,
                                                        int task_v_307,
                                                        int task_pnr_5,
                                                        int task_ck_17_1,
                                                        int task_pnr_4,
                                                        int task_ck_19_1,
                                                        int task_pnr_3,
                                                        int task_ck_21_1,
                                                        int task_pnr_2,
                                                        int task_ck_23_1,
                                                        int task_pnr_1,
                                                        int task_ck_25_1,
                                                        int task_pnr,
                                                        int p_task_c_window,
                                                        int p_task_c_door,
                                                        int p_task_c_tv1,
                                                        int p_task_c_tv2,
                                                        int p_task_c_lamp2,
                                                        int p_task_c_lamp1,
                                                        int p_task_c4,
                                                        int p_task_c3,
                                                        int p_task_c2,
                                                        int p_task_c1,
                                                        int task_c4,
                                                        int task_c3,
                                                        int task_c2,
                                                        int task_c1,
                                                        Task_controller__task_controller_task_c_lamp1_out* _out) {
  
  int v_394;
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int v_388;
  int v_387;
  int v_386;
  int v_385;
  int v_384;
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int v_372;
  int v_371;
  int v_370;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  sub_22 = false;
  if (p_task_c_lamp1) {
    sub_21 = true;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_23 = sub_22;
  if (task_ck_17_1) {
    v_382 = sub_20;
    v_381 = sub_23;
  } else {
    v_382 = sub_23;
    v_381 = sub_20;
  };
  if (task_on_lamp) {
    v_383 = v_381;
  } else {
    v_383 = v_382;
  };
  if (task_precense) {
    sub_18 = sub_19;
  } else {
    sub_18 = v_383;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (task_down2) {
    sub_24 = sub_8;
  } else {
    sub_24 = false;
  };
  if (task_c2) {
    v_384 = false;
  } else {
    v_384 = sub_24;
  };
  if (task_v_398) {
    sub_4 = v_384;
  } else {
    sub_4 = sub_5;
  };
  if (task_precense) {
    sub_42 = sub_19;
  } else {
    sub_42 = false;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (task_c3) {
    sub_47 = false;
  } else {
    sub_47 = sub_41;
  };
  if (task_v_360) {
    v_375 = sub_40;
  } else {
    v_375 = sub_47;
  };
  if (task_e) {
    sub_46 = v_375;
  } else {
    sub_46 = false;
  };
  if (task_v_361) {
    sub_45 = false;
  } else {
    sub_45 = sub_46;
  };
  if (task_s) {
    sub_49 = false;
  } else {
    sub_49 = sub_42;
  };
  if (task_v_360) {
    sub_48 = sub_49;
  } else {
    sub_48 = sub_47;
  };
  if (task_v_361) {
    v_376 = sub_48;
  } else {
    v_376 = sub_39;
  };
  if (task_v_362) {
    sub_44 = v_376;
  } else {
    sub_44 = sub_45;
  };
  if (task_v_417) {
    sub_43 = sub_44;
  } else {
    sub_43 = sub_39;
  };
  if (task_confort) {
    v_377 = sub_43;
  } else {
    v_377 = sub_44;
  };
  if (task_eco) {
    sub_37 = sub_38;
  } else {
    sub_37 = v_377;
  };
  if (task_confort) {
    sub_50 = sub_39;
  } else {
    sub_50 = sub_43;
  };
  if (task_v_418) {
    sub_36 = sub_50;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_54 = sub_38;
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_51 = sub_52;
  if (task_c4) {
    sub_32 = sub_33;
  } else {
    sub_32 = sub_51;
  };
  if (task_v_360) {
    sub_62 = false;
  } else {
    sub_62 = sub_40;
  };
  if (task_e) {
    v_372 = sub_62;
    sub_61 = sub_40;
  } else {
    v_372 = sub_40;
    sub_61 = sub_62;
  };
  if (task_v_361) {
    sub_60 = v_372;
  } else {
    sub_60 = sub_61;
  };
  if (task_v_362) {
    sub_59 = sub_39;
  } else {
    sub_59 = sub_60;
  };
  if (task_v_417) {
    sub_58 = sub_59;
  } else {
    sub_58 = sub_39;
  };
  if (task_confort) {
    v_373 = sub_58;
  } else {
    v_373 = sub_59;
  };
  if (task_eco) {
    sub_57 = sub_38;
  } else {
    sub_57 = v_373;
  };
  if (task_confort) {
    sub_63 = sub_39;
  } else {
    sub_63 = sub_58;
  };
  if (task_v_418) {
    sub_56 = sub_63;
  } else {
    sub_56 = sub_57;
  };
  if (task_finish) {
    v_374 = sub_53;
  } else {
    v_374 = sub_56;
  };
  if (task_temp_ok) {
    sub_55 = sub_52;
  } else {
    sub_55 = v_374;
  };
  if (task_v_309) {
    sub_31 = sub_55;
  } else {
    sub_31 = sub_32;
  };
  sub_64 = sub_33;
  if (task_v_308) {
    sub_30 = sub_64;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  if (task_v_309) {
    sub_65 = sub_64;
  } else {
    sub_65 = sub_32;
  };
  if (task_cold) {
    sub_69 = sub_56;
  } else {
    sub_69 = sub_54;
  };
  sub_68 = sub_69;
  if (task_c4) {
    sub_67 = sub_68;
  } else {
    sub_67 = sub_51;
  };
  if (task_finish) {
    v_371 = sub_53;
  } else {
    v_371 = sub_35;
  };
  if (task_temp_ok) {
    sub_70 = sub_52;
  } else {
    sub_70 = v_371;
  };
  if (task_v_309) {
    sub_66 = sub_70;
  } else {
    sub_66 = sub_67;
  };
  if (task_v_308) {
    v_378 = sub_66;
  } else {
    v_378 = sub_65;
  };
  sub_72 = sub_51;
  if (task_v_309) {
    sub_71 = sub_64;
  } else {
    sub_71 = sub_72;
  };
  if (task_v_308) {
    v_379 = sub_66;
  } else {
    v_379 = sub_71;
  };
  if (task_start) {
    v_380 = v_378;
  } else {
    v_380 = v_379;
  };
  if (task_v_307) {
    sub_28 = v_380;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (task_v_398) {
    v_387 = sub_5;
    v_385 = sub_25;
  } else {
    v_387 = sub_25;
    v_385 = sub_5;
  };
  if (task_down1) {
    v_386 = v_385;
  } else {
    v_386 = sub_4;
  };
  if (task_c1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_386;
  };
  sub_2 = sub_3;
  if (task_up2) {
    v_370 = false;
  } else {
    v_370 = sub_27;
  };
  if (task_c2) {
    sub_73 = v_370;
  } else {
    sub_73 = sub_26;
  };
  if (task_v_398) {
    v_388 = sub_73;
  } else {
    v_388 = sub_25;
  };
  if (task_down1) {
    v_389 = v_387;
  } else {
    v_389 = v_388;
  };
  sub_74 = sub_5;
  if (task_c1) {
    v_390 = v_389;
  } else {
    v_390 = sub_74;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_7;
  };
  if (task_c2) {
    sub_75 = v;
  } else {
    sub_75 = sub_6;
  };
  if (task_v_398) {
    v_391 = sub_73;
  } else {
    v_391 = sub_75;
  };
  if (task_down1) {
    v_392 = sub_5;
  } else {
    v_392 = v_391;
  };
  if (task_c1) {
    v_393 = v_392;
  } else {
    v_393 = sub_74;
  };
  if (task_up1) {
    v_394 = v_390;
  } else {
    v_394 = v_393;
  };
  if (task_v_397) {
    sub_1 = v_394;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->task_c_lamp1 = sub_0;;
}

void Task_controller__task_controller_task_c4_step(int task_up1,
                                                   int task_down1,
                                                   int task_up2,
                                                   int task_down2,
                                                   int task_s, int task_e,
                                                   int task_finish,
                                                   int task_start,
                                                   int task_cold,
                                                   int task_temp_ok,
                                                   int task_eco,
                                                   int task_confort,
                                                   int task_on_lamp,
                                                   int task_on_tv,
                                                   int task_precense,
                                                   int task_push_door,
                                                   int task_push_window,
                                                   int task_v_418,
                                                   int task_v_417,
                                                   int task_pnr_8,
                                                   int task_v_398,
                                                   int task_v_397,
                                                   int task_pnr_7,
                                                   int task_v_362,
                                                   int task_v_361,
                                                   int task_v_360,
                                                   int task_pnr_6,
                                                   int task_v_309,
                                                   int task_v_308,
                                                   int task_v_307,
                                                   int task_pnr_5,
                                                   int task_ck_17_1,
                                                   int task_pnr_4,
                                                   int task_ck_19_1,
                                                   int task_pnr_3,
                                                   int task_ck_21_1,
                                                   int task_pnr_2,
                                                   int task_ck_23_1,
                                                   int task_pnr_1,
                                                   int task_ck_25_1,
                                                   int task_pnr,
                                                   int p_task_c_window,
                                                   int p_task_c_door,
                                                   int p_task_c_tv1,
                                                   int p_task_c_tv2,
                                                   int p_task_c_lamp2,
                                                   int p_task_c_lamp1,
                                                   int p_task_c4,
                                                   int p_task_c3,
                                                   int p_task_c2,
                                                   int p_task_c1,
                                                   int task_c3, int task_c2,
                                                   int task_c1,
                                                   Task_controller__task_controller_task_c4_out* _out) {
  
  int v_448;
  int v_447;
  int v_446;
  int v_445;
  int v_444;
  int v_443;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
  int v_436;
  int v_435;
  int v_434;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int v_427;
  int v_426;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
  int v_418;
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_413;
  int v_412;
  int v_411;
  int v_410;
  int v_409;
  int v_408;
  int v_407;
  int v_406;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
  int v_401;
  int v_400;
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  sub_21 = false;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (task_down2) {
    sub_22 = sub_9;
  } else {
    sub_22 = false;
  };
  if (task_c2) {
    v_429 = false;
  } else {
    v_429 = sub_22;
  };
  if (task_v_398) {
    sub_5 = v_429;
  } else {
    sub_5 = sub_6;
  };
  if (task_precense) {
    sub_38 = sub_19;
  } else {
    sub_38 = false;
  };
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (task_v_360) {
    sub_45 = false;
  } else {
    sub_45 = sub_36;
  };
  if (task_e) {
    v_425 = sub_45;
    sub_44 = sub_36;
  } else {
    v_425 = sub_36;
    sub_44 = sub_45;
  };
  if (task_v_361) {
    sub_43 = v_425;
  } else {
    sub_43 = sub_44;
  };
  if (task_v_362) {
    sub_42 = sub_35;
  } else {
    sub_42 = sub_43;
  };
  if (task_v_417) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_35;
  };
  if (task_confort) {
    v_426 = sub_41;
  } else {
    v_426 = sub_42;
  };
  if (task_eco) {
    sub_40 = sub_34;
  } else {
    sub_40 = v_426;
  };
  if (task_confort) {
    sub_46 = sub_35;
  } else {
    sub_46 = sub_41;
  };
  if (task_v_418) {
    sub_39 = sub_46;
  } else {
    sub_39 = sub_40;
  };
  if (task_finish) {
    v_427 = sub_32;
  } else {
    v_427 = sub_39;
  };
  if (task_temp_ok) {
    v_428 = sub_31;
  } else {
    v_428 = v_427;
  };
  if (task_v_309) {
    sub_29 = v_428;
  } else {
    sub_29 = sub_30;
  };
  if (task_c3) {
    sub_56 = false;
  } else {
    sub_56 = sub_37;
  };
  if (task_v_360) {
    v_422 = sub_36;
  } else {
    v_422 = sub_56;
  };
  if (task_e) {
    sub_55 = v_422;
  } else {
    sub_55 = false;
  };
  if (task_v_361) {
    sub_54 = false;
  } else {
    sub_54 = sub_55;
  };
  if (task_s) {
    sub_58 = false;
  } else {
    sub_58 = sub_38;
  };
  if (task_v_360) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_56;
  };
  if (task_v_361) {
    v_423 = sub_57;
  } else {
    v_423 = sub_35;
  };
  if (task_v_362) {
    sub_53 = v_423;
  } else {
    sub_53 = sub_54;
  };
  if (task_v_417) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_35;
  };
  if (task_confort) {
    v_424 = sub_52;
  } else {
    v_424 = sub_53;
  };
  if (task_eco) {
    sub_51 = sub_34;
  } else {
    sub_51 = v_424;
  };
  if (task_confort) {
    sub_59 = sub_35;
  } else {
    sub_59 = sub_52;
  };
  if (task_v_418) {
    sub_50 = sub_59;
  } else {
    sub_50 = sub_51;
  };
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (task_v_308) {
    sub_28 = sub_47;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  if (task_finish) {
    v_419 = sub_32;
  } else {
    v_419 = sub_49;
  };
  if (task_temp_ok) {
    v_420 = sub_31;
  } else {
    v_420 = v_419;
  };
  if (task_v_309) {
    v_421 = v_420;
    sub_61 = sub_47;
  } else {
    v_421 = sub_30;
    sub_61 = sub_30;
  };
  if (task_v_308) {
    sub_60 = v_421;
  } else {
    sub_60 = sub_61;
  };
  if (task_v_307) {
    sub_26 = sub_60;
  } else {
    sub_26 = sub_27;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (task_v_398) {
    v_432 = sub_6;
    v_430 = sub_23;
  } else {
    v_432 = sub_23;
    v_430 = sub_6;
  };
  if (task_down1) {
    v_431 = v_430;
  } else {
    v_431 = sub_5;
  };
  if (task_c1) {
    sub_4 = sub_5;
  } else {
    sub_4 = v_431;
  };
  sub_3 = sub_4;
  if (task_up2) {
    v_418 = false;
  } else {
    v_418 = sub_25;
  };
  if (task_c2) {
    sub_62 = v_418;
  } else {
    sub_62 = sub_24;
  };
  if (task_v_398) {
    v_433 = sub_62;
  } else {
    v_433 = sub_23;
  };
  if (task_down1) {
    v_434 = v_432;
  } else {
    v_434 = v_433;
  };
  sub_63 = sub_6;
  if (task_c1) {
    v_435 = v_434;
  } else {
    v_435 = sub_63;
  };
  if (task_up2) {
    v_417 = false;
  } else {
    v_417 = sub_8;
  };
  if (task_c2) {
    sub_64 = v_417;
  } else {
    sub_64 = sub_7;
  };
  if (task_v_398) {
    v_436 = sub_62;
  } else {
    v_436 = sub_64;
  };
  if (task_down1) {
    v_437 = sub_6;
  } else {
    v_437 = v_436;
  };
  if (task_c1) {
    v_438 = v_437;
  } else {
    v_438 = sub_63;
  };
  if (task_up1) {
    v_439 = v_435;
  } else {
    v_439 = v_438;
  };
  if (task_v_397) {
    sub_2 = v_439;
  } else {
    sub_2 = sub_3;
  };
  sub_83 = true;
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (task_down2) {
    sub_84 = sub_71;
  } else {
    sub_84 = false;
  };
  if (task_c2) {
    v_414 = false;
  } else {
    v_414 = sub_84;
  };
  if (task_v_398) {
    sub_67 = v_414;
  } else {
    sub_67 = sub_68;
  };
  if (task_precense) {
    sub_101 = sub_81;
  } else {
    sub_101 = false;
  };
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  if (task_c3) {
    sub_106 = sub_37;
  } else {
    sub_106 = sub_100;
  };
  if (task_v_360) {
    v_406 = sub_99;
  } else {
    v_406 = sub_106;
  };
  if (task_e) {
    sub_105 = v_406;
  } else {
    sub_105 = sub_36;
  };
  if (task_v_361) {
    sub_104 = sub_35;
  } else {
    sub_104 = sub_105;
  };
  if (task_s) {
    sub_108 = sub_38;
  } else {
    sub_108 = sub_101;
  };
  if (task_v_360) {
    sub_107 = sub_108;
  } else {
    sub_107 = sub_106;
  };
  if (task_v_361) {
    v_407 = sub_107;
  } else {
    v_407 = sub_98;
  };
  if (task_v_362) {
    sub_103 = v_407;
  } else {
    sub_103 = sub_104;
  };
  if (task_v_417) {
    sub_102 = sub_103;
  } else {
    sub_102 = sub_98;
  };
  if (task_confort) {
    v_408 = sub_102;
  } else {
    v_408 = sub_103;
  };
  if (task_eco) {
    sub_96 = sub_97;
  } else {
    sub_96 = v_408;
  };
  if (task_confort) {
    sub_109 = sub_98;
  } else {
    sub_109 = sub_102;
  };
  if (task_v_418) {
    sub_95 = sub_109;
  } else {
    sub_95 = sub_96;
  };
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_112 = sub_97;
  sub_111 = sub_112;
  sub_110 = sub_111;
  if (task_v_360) {
    sub_119 = false;
  } else {
    sub_119 = sub_99;
  };
  if (task_e) {
    v_404 = sub_119;
    sub_118 = sub_99;
  } else {
    v_404 = sub_99;
    sub_118 = sub_119;
  };
  if (task_v_361) {
    sub_117 = v_404;
  } else {
    sub_117 = sub_118;
  };
  if (task_v_362) {
    sub_116 = sub_98;
  } else {
    sub_116 = sub_117;
  };
  if (task_v_417) {
    sub_115 = sub_116;
  } else {
    sub_115 = sub_98;
  };
  if (task_confort) {
    v_405 = sub_115;
  } else {
    v_405 = sub_116;
  };
  if (task_eco) {
    sub_114 = sub_97;
  } else {
    sub_114 = v_405;
  };
  if (task_confort) {
    sub_120 = sub_98;
  } else {
    sub_120 = sub_115;
  };
  if (task_v_418) {
    sub_113 = sub_120;
  } else {
    sub_113 = sub_114;
  };
  if (task_finish) {
    v_409 = sub_111;
  } else {
    v_409 = sub_113;
  };
  if (task_temp_ok) {
    v_410 = sub_110;
  } else {
    v_410 = v_409;
  };
  if (task_v_309) {
    sub_91 = v_410;
  } else {
    sub_91 = sub_92;
  };
  if (task_c3) {
    sub_130 = false;
  } else {
    sub_130 = sub_100;
  };
  if (task_v_360) {
    v_401 = sub_99;
  } else {
    v_401 = sub_130;
  };
  if (task_e) {
    sub_129 = v_401;
  } else {
    sub_129 = false;
  };
  if (task_v_361) {
    sub_128 = false;
  } else {
    sub_128 = sub_129;
  };
  if (task_s) {
    sub_132 = false;
  } else {
    sub_132 = sub_101;
  };
  if (task_v_360) {
    sub_131 = sub_132;
  } else {
    sub_131 = sub_130;
  };
  if (task_v_361) {
    v_402 = sub_131;
  } else {
    v_402 = sub_98;
  };
  if (task_v_362) {
    sub_127 = v_402;
  } else {
    sub_127 = sub_128;
  };
  if (task_v_417) {
    sub_126 = sub_127;
  } else {
    sub_126 = sub_98;
  };
  if (task_confort) {
    v_403 = sub_126;
  } else {
    v_403 = sub_127;
  };
  if (task_eco) {
    sub_125 = sub_97;
  } else {
    sub_125 = v_403;
  };
  if (task_confort) {
    sub_133 = sub_98;
  } else {
    sub_133 = sub_126;
  };
  if (task_v_418) {
    sub_124 = sub_133;
  } else {
    sub_124 = sub_125;
  };
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  if (task_v_308) {
    sub_90 = sub_121;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  if (task_v_309) {
    sub_134 = sub_121;
  } else {
    sub_134 = sub_92;
  };
  if (task_finish) {
    v_399 = sub_111;
  } else {
    v_399 = sub_123;
  };
  if (task_temp_ok) {
    v_400 = sub_110;
  } else {
    v_400 = v_399;
  };
  if (task_v_360) {
    sub_144 = sub_36;
  } else {
    sub_144 = sub_99;
  };
  if (task_e) {
    v_396 = sub_144;
    sub_143 = sub_99;
  } else {
    v_396 = sub_99;
    sub_143 = sub_144;
  };
  if (task_v_361) {
    sub_142 = v_396;
  } else {
    sub_142 = sub_143;
  };
  if (task_v_362) {
    sub_141 = sub_98;
  } else {
    sub_141 = sub_142;
  };
  if (task_v_417) {
    sub_140 = sub_141;
  } else {
    sub_140 = sub_98;
  };
  if (task_confort) {
    v_397 = sub_140;
  } else {
    v_397 = sub_141;
  };
  if (task_eco) {
    sub_139 = sub_97;
  } else {
    sub_139 = v_397;
  };
  if (task_confort) {
    sub_145 = sub_98;
  } else {
    sub_145 = sub_140;
  };
  if (task_v_418) {
    v_398 = sub_145;
  } else {
    v_398 = sub_139;
  };
  if (task_cold) {
    sub_138 = v_398;
  } else {
    sub_138 = sub_112;
  };
  sub_137 = sub_138;
  sub_136 = sub_137;
  if (task_v_309) {
    sub_135 = v_400;
  } else {
    sub_135 = sub_136;
  };
  if (task_v_308) {
    v_411 = sub_135;
  } else {
    v_411 = sub_134;
  };
  sub_147 = sub_110;
  if (task_v_309) {
    sub_146 = sub_121;
  } else {
    sub_146 = sub_147;
  };
  if (task_v_308) {
    v_412 = sub_135;
  } else {
    v_412 = sub_146;
  };
  if (task_start) {
    v_413 = v_411;
  } else {
    v_413 = v_412;
  };
  if (task_v_307) {
    sub_88 = v_413;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (task_v_398) {
    v_440 = sub_68;
    v_415 = sub_85;
  } else {
    v_440 = sub_85;
    v_415 = sub_68;
  };
  if (task_down1) {
    v_416 = v_415;
  } else {
    v_416 = sub_67;
  };
  if (task_c1) {
    sub_66 = sub_67;
  } else {
    sub_66 = v_416;
  };
  sub_65 = sub_66;
  if (task_up2) {
    v_395 = false;
  } else {
    v_395 = sub_87;
  };
  if (task_c2) {
    sub_148 = v_395;
  } else {
    sub_148 = sub_86;
  };
  if (task_v_398) {
    v_441 = sub_148;
  } else {
    v_441 = sub_85;
  };
  if (task_down1) {
    v_442 = v_440;
  } else {
    v_442 = v_441;
  };
  sub_149 = sub_68;
  if (task_c1) {
    v_443 = v_442;
  } else {
    v_443 = sub_149;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_70;
  };
  if (task_c2) {
    sub_150 = v;
  } else {
    sub_150 = sub_69;
  };
  if (task_v_398) {
    v_444 = sub_148;
  } else {
    v_444 = sub_150;
  };
  if (task_down1) {
    v_445 = sub_68;
  } else {
    v_445 = v_444;
  };
  if (task_c1) {
    v_446 = v_445;
  } else {
    v_446 = sub_149;
  };
  if (task_up1) {
    v_447 = v_443;
  } else {
    v_447 = v_446;
  };
  if (task_v_397) {
    v_448 = v_447;
  } else {
    v_448 = sub_65;
  };
  if (p_task_c4) {
    sub_1 = v_448;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->task_c4 = sub_0;;
}

void Task_controller__task_controller_task_c3_step(int task_up1,
                                                   int task_down1,
                                                   int task_up2,
                                                   int task_down2,
                                                   int task_s, int task_e,
                                                   int task_finish,
                                                   int task_start,
                                                   int task_cold,
                                                   int task_temp_ok,
                                                   int task_eco,
                                                   int task_confort,
                                                   int task_on_lamp,
                                                   int task_on_tv,
                                                   int task_precense,
                                                   int task_push_door,
                                                   int task_push_window,
                                                   int task_v_418,
                                                   int task_v_417,
                                                   int task_pnr_8,
                                                   int task_v_398,
                                                   int task_v_397,
                                                   int task_pnr_7,
                                                   int task_v_362,
                                                   int task_v_361,
                                                   int task_v_360,
                                                   int task_pnr_6,
                                                   int task_v_309,
                                                   int task_v_308,
                                                   int task_v_307,
                                                   int task_pnr_5,
                                                   int task_ck_17_1,
                                                   int task_pnr_4,
                                                   int task_ck_19_1,
                                                   int task_pnr_3,
                                                   int task_ck_21_1,
                                                   int task_pnr_2,
                                                   int task_ck_23_1,
                                                   int task_pnr_1,
                                                   int task_ck_25_1,
                                                   int task_pnr,
                                                   int p_task_c_window,
                                                   int p_task_c_door,
                                                   int p_task_c_tv1,
                                                   int p_task_c_tv2,
                                                   int p_task_c_lamp2,
                                                   int p_task_c_lamp1,
                                                   int p_task_c4,
                                                   int p_task_c3,
                                                   int p_task_c2,
                                                   int p_task_c1,
                                                   int task_c2, int task_c1,
                                                   Task_controller__task_controller_task_c3_out* _out) {
  
  int v_471;
  int v_470;
  int v_469;
  int v_468;
  int v_467;
  int v_466;
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int v_461;
  int v_460;
  int v_459;
  int v_458;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_451;
  int v_450;
  int v_449;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  sub_20 = p_task_c3;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (task_down2) {
    sub_21 = sub_8;
  } else {
    sub_21 = false;
  };
  if (task_c2) {
    v_461 = false;
  } else {
    v_461 = sub_21;
  };
  if (task_v_398) {
    sub_4 = v_461;
  } else {
    sub_4 = sub_5;
  };
  if (task_precense) {
    sub_36 = sub_17;
  } else {
    sub_36 = false;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (task_v_360) {
    sub_43 = false;
  } else {
    sub_43 = sub_35;
  };
  if (task_e) {
    v_457 = sub_43;
    sub_42 = sub_35;
  } else {
    v_457 = sub_35;
    sub_42 = sub_43;
  };
  if (task_v_361) {
    sub_41 = v_457;
  } else {
    sub_41 = sub_42;
  };
  if (task_v_362) {
    sub_40 = sub_34;
  } else {
    sub_40 = sub_41;
  };
  if (task_v_417) {
    sub_39 = sub_40;
  } else {
    sub_39 = sub_34;
  };
  if (task_confort) {
    v_458 = sub_39;
  } else {
    v_458 = sub_40;
  };
  if (task_eco) {
    sub_38 = sub_33;
  } else {
    sub_38 = v_458;
  };
  if (task_confort) {
    sub_44 = sub_34;
  } else {
    sub_44 = sub_39;
  };
  if (task_v_418) {
    sub_37 = sub_44;
  } else {
    sub_37 = sub_38;
  };
  if (task_finish) {
    v_459 = sub_31;
  } else {
    v_459 = sub_37;
  };
  if (task_temp_ok) {
    v_460 = sub_30;
  } else {
    v_460 = v_459;
  };
  if (task_v_309) {
    sub_28 = v_460;
  } else {
    sub_28 = sub_29;
  };
  sub_57 = false;
  sub_56 = sub_57;
  if (task_precense) {
    sub_55 = sub_56;
  } else {
    sub_55 = false;
  };
  sub_54 = sub_55;
  if (task_v_360) {
    v_454 = sub_35;
  } else {
    v_454 = sub_54;
  };
  if (task_e) {
    sub_53 = v_454;
  } else {
    sub_53 = false;
  };
  if (task_v_361) {
    sub_52 = false;
  } else {
    sub_52 = sub_53;
  };
  if (task_s) {
    v_453 = false;
  } else {
    v_453 = sub_36;
  };
  if (task_v_360) {
    sub_58 = v_453;
  } else {
    sub_58 = sub_54;
  };
  if (task_v_361) {
    v_455 = sub_58;
  } else {
    v_455 = sub_34;
  };
  if (task_v_362) {
    sub_51 = v_455;
  } else {
    sub_51 = sub_52;
  };
  if (task_v_417) {
    sub_50 = sub_51;
  } else {
    sub_50 = sub_34;
  };
  if (task_confort) {
    v_456 = sub_50;
  } else {
    v_456 = sub_51;
  };
  if (task_eco) {
    sub_49 = sub_33;
  } else {
    sub_49 = v_456;
  };
  if (task_confort) {
    sub_59 = sub_34;
  } else {
    sub_59 = sub_50;
  };
  if (task_v_418) {
    sub_48 = sub_59;
  } else {
    sub_48 = sub_49;
  };
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (task_v_308) {
    sub_27 = sub_45;
  } else {
    sub_27 = sub_28;
  };
  sub_26 = sub_27;
  if (task_finish) {
    v_450 = sub_31;
  } else {
    v_450 = sub_47;
  };
  if (task_temp_ok) {
    v_451 = sub_30;
  } else {
    v_451 = v_450;
  };
  if (task_v_309) {
    v_452 = v_451;
    sub_61 = sub_45;
  } else {
    v_452 = sub_29;
    sub_61 = sub_29;
  };
  if (task_v_308) {
    sub_60 = v_452;
  } else {
    sub_60 = sub_61;
  };
  if (task_v_307) {
    sub_25 = sub_60;
  } else {
    sub_25 = sub_26;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (task_v_398) {
    v_464 = sub_5;
    v_462 = sub_22;
  } else {
    v_464 = sub_22;
    v_462 = sub_5;
  };
  if (task_down1) {
    v_463 = v_462;
  } else {
    v_463 = sub_4;
  };
  if (task_c1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_463;
  };
  sub_2 = sub_3;
  if (task_up2) {
    v_449 = false;
  } else {
    v_449 = sub_24;
  };
  if (task_c2) {
    sub_62 = v_449;
  } else {
    sub_62 = sub_23;
  };
  if (task_v_398) {
    v_465 = sub_62;
  } else {
    v_465 = sub_22;
  };
  if (task_down1) {
    v_466 = v_464;
  } else {
    v_466 = v_465;
  };
  sub_63 = sub_5;
  if (task_c1) {
    v_467 = v_466;
  } else {
    v_467 = sub_63;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_7;
  };
  if (task_c2) {
    sub_64 = v;
  } else {
    sub_64 = sub_6;
  };
  if (task_v_398) {
    v_468 = sub_62;
  } else {
    v_468 = sub_64;
  };
  if (task_down1) {
    v_469 = sub_5;
  } else {
    v_469 = v_468;
  };
  if (task_c1) {
    v_470 = v_469;
  } else {
    v_470 = sub_63;
  };
  if (task_up1) {
    v_471 = v_467;
  } else {
    v_471 = v_470;
  };
  if (task_v_397) {
    sub_1 = v_471;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->task_c3 = sub_0;;
}

void Task_controller__task_controller_task_c2_step(int task_up1,
                                                   int task_down1,
                                                   int task_up2,
                                                   int task_down2,
                                                   int task_s, int task_e,
                                                   int task_finish,
                                                   int task_start,
                                                   int task_cold,
                                                   int task_temp_ok,
                                                   int task_eco,
                                                   int task_confort,
                                                   int task_on_lamp,
                                                   int task_on_tv,
                                                   int task_precense,
                                                   int task_push_door,
                                                   int task_push_window,
                                                   int task_v_418,
                                                   int task_v_417,
                                                   int task_pnr_8,
                                                   int task_v_398,
                                                   int task_v_397,
                                                   int task_pnr_7,
                                                   int task_v_362,
                                                   int task_v_361,
                                                   int task_v_360,
                                                   int task_pnr_6,
                                                   int task_v_309,
                                                   int task_v_308,
                                                   int task_v_307,
                                                   int task_pnr_5,
                                                   int task_ck_17_1,
                                                   int task_pnr_4,
                                                   int task_ck_19_1,
                                                   int task_pnr_3,
                                                   int task_ck_21_1,
                                                   int task_pnr_2,
                                                   int task_ck_23_1,
                                                   int task_pnr_1,
                                                   int task_ck_25_1,
                                                   int task_pnr,
                                                   int p_task_c_window,
                                                   int p_task_c_door,
                                                   int p_task_c_tv1,
                                                   int p_task_c_tv2,
                                                   int p_task_c_lamp2,
                                                   int p_task_c_lamp1,
                                                   int p_task_c4,
                                                   int p_task_c3,
                                                   int p_task_c2,
                                                   int p_task_c1,
                                                   int task_c1,
                                                   Task_controller__task_controller_task_c2_out* _out) {
  
  int v_500;
  int v_499;
  int v_498;
  int v_497;
  int v_496;
  int v_495;
  int v_494;
  int v_493;
  int v_492;
  int v_491;
  int v_490;
  int v_489;
  int v_488;
  int v_487;
  int v_486;
  int v_485;
  int v_484;
  int v_483;
  int v_482;
  int v_481;
  int v_480;
  int v_479;
  int v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int v_473;
  int v_472;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  sub_19 = p_task_c2;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_32 = false;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (task_down2) {
    sub_20 = sub_21;
  } else {
    sub_20 = false;
  };
  if (task_v_398) {
    sub_4 = sub_20;
  } else {
    sub_4 = sub_5;
  };
  if (task_precense) {
    sub_46 = sub_16;
  } else {
    sub_46 = false;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (task_v_360) {
    sub_53 = false;
  } else {
    sub_53 = sub_45;
  };
  if (task_e) {
    v_487 = sub_53;
    sub_52 = sub_45;
  } else {
    v_487 = sub_45;
    sub_52 = sub_53;
  };
  if (task_v_361) {
    sub_51 = v_487;
  } else {
    sub_51 = sub_52;
  };
  if (task_v_362) {
    sub_50 = sub_44;
  } else {
    sub_50 = sub_51;
  };
  if (task_v_417) {
    sub_49 = sub_50;
  } else {
    sub_49 = sub_44;
  };
  if (task_confort) {
    v_488 = sub_49;
  } else {
    v_488 = sub_50;
  };
  if (task_eco) {
    sub_48 = sub_43;
  } else {
    sub_48 = v_488;
  };
  if (task_confort) {
    sub_54 = sub_44;
  } else {
    sub_54 = sub_49;
  };
  if (task_v_418) {
    sub_47 = sub_54;
  } else {
    sub_47 = sub_48;
  };
  if (task_finish) {
    v_489 = sub_41;
  } else {
    v_489 = sub_47;
  };
  if (task_temp_ok) {
    v_490 = sub_40;
  } else {
    v_490 = v_489;
  };
  if (task_v_309) {
    sub_38 = v_490;
  } else {
    sub_38 = sub_39;
  };
  if (task_e) {
    sub_63 = sub_45;
  } else {
    sub_63 = false;
  };
  if (task_v_361) {
    sub_62 = false;
  } else {
    sub_62 = sub_63;
  };
  if (task_s) {
    v_484 = false;
  } else {
    v_484 = sub_46;
  };
  if (task_v_360) {
    sub_64 = v_484;
  } else {
    sub_64 = sub_45;
  };
  if (task_v_361) {
    v_485 = sub_64;
  } else {
    v_485 = sub_44;
  };
  if (task_v_362) {
    sub_61 = v_485;
  } else {
    sub_61 = sub_62;
  };
  if (task_v_417) {
    sub_60 = sub_61;
  } else {
    sub_60 = sub_44;
  };
  if (task_confort) {
    v_486 = sub_60;
  } else {
    v_486 = sub_61;
  };
  if (task_eco) {
    sub_59 = sub_43;
  } else {
    sub_59 = v_486;
  };
  if (task_confort) {
    sub_65 = sub_44;
  } else {
    sub_65 = sub_60;
  };
  if (task_v_418) {
    sub_58 = sub_65;
  } else {
    sub_58 = sub_59;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  if (task_v_308) {
    sub_37 = sub_55;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  if (task_finish) {
    v_481 = sub_41;
  } else {
    v_481 = sub_57;
  };
  if (task_temp_ok) {
    v_482 = sub_40;
  } else {
    v_482 = v_481;
  };
  if (task_v_309) {
    v_483 = v_482;
    sub_67 = sub_55;
  } else {
    v_483 = sub_39;
    sub_67 = sub_39;
  };
  if (task_v_308) {
    sub_66 = v_483;
  } else {
    sub_66 = sub_67;
  };
  if (task_v_307) {
    sub_35 = sub_66;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (task_v_398) {
    v_493 = sub_5;
    v_491 = sub_33;
  } else {
    v_493 = sub_33;
    v_491 = sub_5;
  };
  if (task_down1) {
    v_492 = v_491;
  } else {
    v_492 = sub_4;
  };
  if (task_c1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_492;
  };
  sub_2 = sub_3;
  if (task_precense) {
    sub_80 = sub_30;
  } else {
    sub_80 = false;
  };
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  if (task_v_360) {
    sub_87 = false;
  } else {
    sub_87 = sub_79;
  };
  if (task_e) {
    v_477 = sub_87;
    sub_86 = sub_79;
  } else {
    v_477 = sub_79;
    sub_86 = sub_87;
  };
  if (task_v_361) {
    sub_85 = v_477;
  } else {
    sub_85 = sub_86;
  };
  if (task_v_362) {
    sub_84 = sub_78;
  } else {
    sub_84 = sub_85;
  };
  if (task_v_417) {
    sub_83 = sub_84;
  } else {
    sub_83 = sub_78;
  };
  if (task_confort) {
    v_478 = sub_83;
  } else {
    v_478 = sub_84;
  };
  if (task_eco) {
    sub_82 = sub_77;
  } else {
    sub_82 = v_478;
  };
  if (task_confort) {
    sub_88 = sub_78;
  } else {
    sub_88 = sub_83;
  };
  if (task_v_418) {
    sub_81 = sub_88;
  } else {
    sub_81 = sub_82;
  };
  if (task_finish) {
    v_479 = sub_75;
  } else {
    v_479 = sub_81;
  };
  if (task_temp_ok) {
    v_480 = sub_74;
  } else {
    v_480 = v_479;
  };
  if (task_v_309) {
    sub_72 = v_480;
  } else {
    sub_72 = sub_73;
  };
  if (task_e) {
    sub_97 = sub_79;
  } else {
    sub_97 = false;
  };
  if (task_v_361) {
    sub_96 = false;
  } else {
    sub_96 = sub_97;
  };
  if (task_s) {
    v_474 = false;
  } else {
    v_474 = sub_80;
  };
  if (task_v_360) {
    sub_98 = v_474;
  } else {
    sub_98 = sub_79;
  };
  if (task_v_361) {
    v_475 = sub_98;
  } else {
    v_475 = sub_78;
  };
  if (task_v_362) {
    sub_95 = v_475;
  } else {
    sub_95 = sub_96;
  };
  if (task_v_417) {
    sub_94 = sub_95;
  } else {
    sub_94 = sub_78;
  };
  if (task_confort) {
    v_476 = sub_94;
  } else {
    v_476 = sub_95;
  };
  if (task_eco) {
    sub_93 = sub_77;
  } else {
    sub_93 = v_476;
  };
  if (task_confort) {
    sub_99 = sub_78;
  } else {
    sub_99 = sub_94;
  };
  if (task_v_418) {
    sub_92 = sub_99;
  } else {
    sub_92 = sub_93;
  };
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  if (task_v_308) {
    sub_71 = sub_89;
  } else {
    sub_71 = sub_72;
  };
  sub_70 = sub_71;
  if (task_finish) {
    v = sub_75;
  } else {
    v = sub_91;
  };
  if (task_temp_ok) {
    v_472 = sub_74;
  } else {
    v_472 = v;
  };
  if (task_v_309) {
    v_473 = v_472;
    sub_101 = sub_89;
  } else {
    v_473 = sub_73;
    sub_101 = sub_73;
  };
  if (task_v_308) {
    sub_100 = v_473;
  } else {
    sub_100 = sub_101;
  };
  if (task_v_307) {
    sub_69 = sub_100;
  } else {
    sub_69 = sub_70;
  };
  if (task_up2) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_34;
  };
  if (task_v_398) {
    v_494 = sub_68;
  } else {
    v_494 = sub_33;
  };
  if (task_down1) {
    v_495 = v_493;
  } else {
    v_495 = v_494;
  };
  sub_102 = sub_5;
  if (task_c1) {
    v_496 = v_495;
  } else {
    v_496 = sub_102;
  };
  if (task_up2) {
    sub_103 = sub_21;
  } else {
    sub_103 = sub_6;
  };
  if (task_v_398) {
    v_497 = sub_68;
  } else {
    v_497 = sub_103;
  };
  if (task_down1) {
    v_498 = sub_5;
  } else {
    v_498 = v_497;
  };
  if (task_c1) {
    v_499 = v_498;
  } else {
    v_499 = sub_102;
  };
  if (task_up1) {
    v_500 = v_496;
  } else {
    v_500 = v_499;
  };
  if (task_v_397) {
    sub_1 = v_500;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->task_c2 = sub_0;;
}

void Task_controller__task_controller_task_c1_step(int task_up1,
                                                   int task_down1,
                                                   int task_up2,
                                                   int task_down2,
                                                   int task_s, int task_e,
                                                   int task_finish,
                                                   int task_start,
                                                   int task_cold,
                                                   int task_temp_ok,
                                                   int task_eco,
                                                   int task_confort,
                                                   int task_on_lamp,
                                                   int task_on_tv,
                                                   int task_precense,
                                                   int task_push_door,
                                                   int task_push_window,
                                                   int task_v_418,
                                                   int task_v_417,
                                                   int task_pnr_8,
                                                   int task_v_398,
                                                   int task_v_397,
                                                   int task_pnr_7,
                                                   int task_v_362,
                                                   int task_v_361,
                                                   int task_v_360,
                                                   int task_pnr_6,
                                                   int task_v_309,
                                                   int task_v_308,
                                                   int task_v_307,
                                                   int task_pnr_5,
                                                   int task_ck_17_1,
                                                   int task_pnr_4,
                                                   int task_ck_19_1,
                                                   int task_pnr_3,
                                                   int task_ck_21_1,
                                                   int task_pnr_2,
                                                   int task_ck_23_1,
                                                   int task_pnr_1,
                                                   int task_ck_25_1,
                                                   int task_pnr,
                                                   int p_task_c_window,
                                                   int p_task_c_door,
                                                   int p_task_c_tv1,
                                                   int p_task_c_tv2,
                                                   int p_task_c_lamp2,
                                                   int p_task_c_lamp1,
                                                   int p_task_c4,
                                                   int p_task_c3,
                                                   int p_task_c2,
                                                   int p_task_c1,
                                                   Task_controller__task_controller_task_c1_out* _out) {
  
  int v_538;
  int v_537;
  int v_536;
  int v_535;
  int v_534;
  int v_533;
  int v_532;
  int v_531;
  int v_530;
  int v_529;
  int v_528;
  int v_527;
  int v_526;
  int v_525;
  int v_524;
  int v_523;
  int v_522;
  int v_521;
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int v_515;
  int v_514;
  int v_513;
  int v_512;
  int v_511;
  int v_510;
  int v_509;
  int v_508;
  int v_507;
  int v_506;
  int v_505;
  int v_504;
  int v_503;
  int v_502;
  int v_501;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  sub_18 = p_task_c1;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_33 = true;
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (task_precense) {
    sub_30 = sub_15;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_42 = sub_31;
  sub_41 = sub_42;
  if (task_v_360) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_29;
  };
  if (task_e) {
    v_526 = sub_40;
    sub_39 = sub_29;
  } else {
    v_526 = sub_29;
    sub_39 = sub_40;
  };
  if (task_v_361) {
    sub_38 = v_526;
  } else {
    sub_38 = sub_39;
  };
  if (task_v_362) {
    sub_37 = sub_28;
  } else {
    sub_37 = sub_38;
  };
  if (task_v_417) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_28;
  };
  if (task_confort) {
    v_527 = sub_36;
  } else {
    v_527 = sub_37;
  };
  if (task_eco) {
    sub_35 = sub_27;
  } else {
    sub_35 = v_527;
  };
  if (task_confort) {
    sub_43 = sub_28;
  } else {
    sub_43 = sub_36;
  };
  if (task_v_418) {
    sub_34 = sub_43;
  } else {
    sub_34 = sub_35;
  };
  if (task_finish) {
    v_528 = sub_25;
  } else {
    v_528 = sub_34;
  };
  if (task_temp_ok) {
    v_529 = sub_24;
  } else {
    v_529 = v_528;
  };
  if (task_v_309) {
    sub_22 = v_529;
  } else {
    sub_22 = sub_23;
  };
  if (task_e) {
    sub_52 = sub_29;
  } else {
    sub_52 = sub_41;
  };
  if (task_v_361) {
    sub_51 = sub_41;
  } else {
    sub_51 = sub_52;
  };
  if (task_s) {
    v_523 = sub_42;
  } else {
    v_523 = sub_30;
  };
  if (task_v_360) {
    sub_53 = v_523;
  } else {
    sub_53 = sub_29;
  };
  if (task_v_361) {
    v_524 = sub_53;
  } else {
    v_524 = sub_28;
  };
  if (task_v_362) {
    sub_50 = v_524;
  } else {
    sub_50 = sub_51;
  };
  if (task_v_417) {
    sub_49 = sub_50;
  } else {
    sub_49 = sub_28;
  };
  if (task_confort) {
    v_525 = sub_49;
  } else {
    v_525 = sub_50;
  };
  if (task_eco) {
    sub_48 = sub_27;
  } else {
    sub_48 = v_525;
  };
  if (task_confort) {
    sub_54 = sub_28;
  } else {
    sub_54 = sub_49;
  };
  if (task_v_418) {
    sub_47 = sub_54;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (task_v_308) {
    sub_21 = sub_44;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  if (task_finish) {
    v_520 = sub_25;
  } else {
    v_520 = sub_46;
  };
  if (task_temp_ok) {
    v_521 = sub_24;
  } else {
    v_521 = v_520;
  };
  if (task_v_309) {
    v_522 = v_521;
    sub_56 = sub_44;
  } else {
    v_522 = sub_23;
    sub_56 = sub_23;
  };
  if (task_v_308) {
    sub_55 = v_522;
  } else {
    sub_55 = sub_56;
  };
  if (task_v_307) {
    v_530 = sub_55;
  } else {
    v_530 = sub_20;
  };
  sub_70 = false;
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (task_precense) {
    sub_67 = sub_68;
  } else {
    sub_67 = false;
  };
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (task_v_360) {
    sub_77 = false;
  } else {
    sub_77 = sub_66;
  };
  if (task_e) {
    v_516 = sub_77;
    sub_76 = sub_66;
  } else {
    v_516 = sub_66;
    sub_76 = sub_77;
  };
  if (task_v_361) {
    sub_75 = v_516;
  } else {
    sub_75 = sub_76;
  };
  if (task_v_362) {
    sub_74 = sub_65;
  } else {
    sub_74 = sub_75;
  };
  if (task_v_417) {
    sub_73 = sub_74;
  } else {
    sub_73 = sub_65;
  };
  if (task_confort) {
    v_517 = sub_73;
  } else {
    v_517 = sub_74;
  };
  if (task_eco) {
    sub_72 = sub_64;
  } else {
    sub_72 = v_517;
  };
  if (task_confort) {
    sub_78 = sub_65;
  } else {
    sub_78 = sub_73;
  };
  if (task_v_418) {
    sub_71 = sub_78;
  } else {
    sub_71 = sub_72;
  };
  if (task_finish) {
    v_518 = sub_62;
  } else {
    v_518 = sub_71;
  };
  if (task_temp_ok) {
    v_519 = sub_61;
  } else {
    v_519 = v_518;
  };
  if (task_v_309) {
    sub_59 = v_519;
  } else {
    sub_59 = sub_60;
  };
  if (task_e) {
    sub_87 = sub_66;
  } else {
    sub_87 = false;
  };
  if (task_v_361) {
    sub_86 = false;
  } else {
    sub_86 = sub_87;
  };
  if (task_s) {
    v_513 = false;
  } else {
    v_513 = sub_67;
  };
  if (task_v_360) {
    sub_88 = v_513;
  } else {
    sub_88 = sub_66;
  };
  if (task_v_361) {
    v_514 = sub_88;
  } else {
    v_514 = sub_65;
  };
  if (task_v_362) {
    sub_85 = v_514;
  } else {
    sub_85 = sub_86;
  };
  if (task_v_417) {
    sub_84 = sub_85;
  } else {
    sub_84 = sub_65;
  };
  if (task_confort) {
    v_515 = sub_84;
  } else {
    v_515 = sub_85;
  };
  if (task_eco) {
    sub_83 = sub_64;
  } else {
    sub_83 = v_515;
  };
  if (task_confort) {
    sub_89 = sub_65;
  } else {
    sub_89 = sub_84;
  };
  if (task_v_418) {
    sub_82 = sub_89;
  } else {
    sub_82 = sub_83;
  };
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  if (task_v_308) {
    sub_58 = sub_79;
  } else {
    sub_58 = sub_59;
  };
  sub_57 = sub_58;
  if (task_finish) {
    v_510 = sub_62;
  } else {
    v_510 = sub_81;
  };
  if (task_temp_ok) {
    v_511 = sub_61;
  } else {
    v_511 = v_510;
  };
  if (task_v_309) {
    v_512 = v_511;
    sub_91 = sub_79;
  } else {
    v_512 = sub_60;
    sub_91 = sub_60;
  };
  if (task_v_308) {
    sub_90 = v_512;
  } else {
    sub_90 = sub_91;
  };
  if (task_v_307) {
    v_531 = sub_90;
  } else {
    v_531 = sub_57;
  };
  if (task_down2) {
    sub_19 = v_530;
  } else {
    sub_19 = v_531;
  };
  if (task_v_398) {
    v_532 = sub_19;
  } else {
    v_532 = sub_4;
  };
  if (task_down2) {
    sub_92 = sub_6;
  } else {
    sub_92 = false;
  };
  if (task_v_398) {
    v_533 = sub_92;
  } else {
    v_533 = sub_4;
  };
  if (task_down1) {
    sub_3 = v_532;
  } else {
    sub_3 = v_533;
  };
  sub_2 = sub_3;
  if (task_precense) {
    sub_106 = sub_15;
  } else {
    sub_106 = sub_68;
  };
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_115 = sub_68;
  sub_114 = sub_115;
  if (task_v_360) {
    sub_113 = sub_114;
  } else {
    sub_113 = sub_105;
  };
  if (task_e) {
    v_506 = sub_113;
    sub_112 = sub_105;
  } else {
    v_506 = sub_105;
    sub_112 = sub_113;
  };
  if (task_v_361) {
    sub_111 = v_506;
  } else {
    sub_111 = sub_112;
  };
  if (task_v_362) {
    sub_110 = sub_104;
  } else {
    sub_110 = sub_111;
  };
  if (task_v_417) {
    sub_109 = sub_110;
  } else {
    sub_109 = sub_104;
  };
  if (task_confort) {
    v_507 = sub_109;
  } else {
    v_507 = sub_110;
  };
  if (task_eco) {
    sub_108 = sub_103;
  } else {
    sub_108 = v_507;
  };
  if (task_confort) {
    sub_116 = sub_104;
  } else {
    sub_116 = sub_109;
  };
  if (task_v_418) {
    sub_107 = sub_116;
  } else {
    sub_107 = sub_108;
  };
  if (task_finish) {
    v_508 = sub_101;
  } else {
    v_508 = sub_107;
  };
  if (task_temp_ok) {
    v_509 = sub_100;
  } else {
    v_509 = v_508;
  };
  if (task_v_309) {
    sub_98 = v_509;
  } else {
    sub_98 = sub_99;
  };
  if (task_e) {
    sub_125 = sub_105;
  } else {
    sub_125 = sub_114;
  };
  if (task_v_361) {
    sub_124 = sub_114;
  } else {
    sub_124 = sub_125;
  };
  if (task_s) {
    v_503 = sub_115;
  } else {
    v_503 = sub_106;
  };
  if (task_v_360) {
    sub_126 = v_503;
  } else {
    sub_126 = sub_105;
  };
  if (task_v_361) {
    v_504 = sub_126;
  } else {
    v_504 = sub_104;
  };
  if (task_v_362) {
    sub_123 = v_504;
  } else {
    sub_123 = sub_124;
  };
  if (task_v_417) {
    sub_122 = sub_123;
  } else {
    sub_122 = sub_104;
  };
  if (task_confort) {
    v_505 = sub_122;
  } else {
    v_505 = sub_123;
  };
  if (task_eco) {
    sub_121 = sub_103;
  } else {
    sub_121 = v_505;
  };
  if (task_confort) {
    sub_127 = sub_104;
  } else {
    sub_127 = sub_122;
  };
  if (task_v_418) {
    sub_120 = sub_127;
  } else {
    sub_120 = sub_121;
  };
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  if (task_v_308) {
    sub_97 = sub_117;
  } else {
    sub_97 = sub_98;
  };
  sub_96 = sub_97;
  if (task_finish) {
    v = sub_101;
  } else {
    v = sub_119;
  };
  if (task_temp_ok) {
    v_501 = sub_100;
  } else {
    v_501 = v;
  };
  if (task_v_309) {
    v_502 = v_501;
    sub_129 = sub_117;
  } else {
    v_502 = sub_99;
    sub_129 = sub_99;
  };
  if (task_v_308) {
    sub_128 = v_502;
  } else {
    sub_128 = sub_129;
  };
  if (task_v_307) {
    sub_95 = sub_128;
  } else {
    sub_95 = sub_96;
  };
  sub_94 = sub_95;
  sub_93 = sub_94;
  if (task_v_398) {
    v_536 = sub_93;
  } else {
    v_536 = sub_4;
  };
  if (task_down1) {
    v_537 = sub_4;
  } else {
    v_537 = v_536;
  };
  if (task_v_398) {
    v_534 = sub_4;
  } else {
    v_534 = sub_93;
  };
  if (task_down1) {
    v_535 = v_534;
  } else {
    v_535 = sub_93;
  };
  if (task_up1) {
    v_538 = v_535;
  } else {
    v_538 = v_537;
  };
  if (task_v_397) {
    sub_1 = v_538;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->task_c1 = sub_0;;
}

void Task_controller__task_controller_step(int task_up1, int task_down1,
                                           int task_up2, int task_down2,
                                           int task_s, int task_e,
                                           int task_finish, int task_start,
                                           int task_cold, int task_temp_ok,
                                           int task_eco, int task_confort,
                                           int task_on_lamp, int task_on_tv,
                                           int task_precense,
                                           int task_push_door,
                                           int task_push_window,
                                           int task_v_418, int task_v_417,
                                           int task_pnr_8, int task_v_398,
                                           int task_v_397, int task_pnr_7,
                                           int task_v_362, int task_v_361,
                                           int task_v_360, int task_pnr_6,
                                           int task_v_309, int task_v_308,
                                           int task_v_307, int task_pnr_5,
                                           int task_ck_17_1, int task_pnr_4,
                                           int task_ck_19_1, int task_pnr_3,
                                           int task_ck_21_1, int task_pnr_2,
                                           int task_ck_23_1, int task_pnr_1,
                                           int task_ck_25_1, int task_pnr,
                                           int p_task_c_window,
                                           int p_task_c_door,
                                           int p_task_c_tv1,
                                           int p_task_c_tv2,
                                           int p_task_c_lamp2,
                                           int p_task_c_lamp1, int p_task_c4,
                                           int p_task_c3, int p_task_c2,
                                           int p_task_c1,
                                           Task_controller__task_controller_out* _out) {
  Task_controller__task_controller_task_c_window_out Task_controller__task_controller_task_c_window_out_st;
  Task_controller__task_controller_task_c_lamp1_out Task_controller__task_controller_task_c_lamp1_out_st;
  Task_controller__task_controller_task_c4_out Task_controller__task_controller_task_c4_out_st;
  Task_controller__task_controller_task_c_tv2_out Task_controller__task_controller_task_c_tv2_out_st;
  Task_controller__task_controller_task_c_tv1_out Task_controller__task_controller_task_c_tv1_out_st;
  Task_controller__task_controller_task_c1_out Task_controller__task_controller_task_c1_out_st;
  Task_controller__task_controller_task_c_lamp2_out Task_controller__task_controller_task_c_lamp2_out_st;
  Task_controller__task_controller_task_c_door_out Task_controller__task_controller_task_c_door_out_st;
  Task_controller__task_controller_task_c3_out Task_controller__task_controller_task_c3_out_st;
  Task_controller__task_controller_task_c2_out Task_controller__task_controller_task_c2_out_st;
  Task_controller__task_controller_task_c1_step(task_up1, task_down1,
                                                task_up2, task_down2, task_s,
                                                task_e, task_finish,
                                                task_start, task_cold,
                                                task_temp_ok, task_eco,
                                                task_confort, task_on_lamp,
                                                task_on_tv, task_precense,
                                                task_push_door,
                                                task_push_window, task_v_418,
                                                task_v_417, task_pnr_8,
                                                task_v_398, task_v_397,
                                                task_pnr_7, task_v_362,
                                                task_v_361, task_v_360,
                                                task_pnr_6, task_v_309,
                                                task_v_308, task_v_307,
                                                task_pnr_5, task_ck_17_1,
                                                task_pnr_4, task_ck_19_1,
                                                task_pnr_3, task_ck_21_1,
                                                task_pnr_2, task_ck_23_1,
                                                task_pnr_1, task_ck_25_1,
                                                task_pnr, p_task_c_window,
                                                p_task_c_door, p_task_c_tv1,
                                                p_task_c_tv2, p_task_c_lamp2,
                                                p_task_c_lamp1, p_task_c4,
                                                p_task_c3, p_task_c2,
                                                p_task_c1,
                                                &Task_controller__task_controller_task_c1_out_st);
  _out->task_c1 = Task_controller__task_controller_task_c1_out_st.task_c1;
  Task_controller__task_controller_task_c2_step(task_up1, task_down1,
                                                task_up2, task_down2, task_s,
                                                task_e, task_finish,
                                                task_start, task_cold,
                                                task_temp_ok, task_eco,
                                                task_confort, task_on_lamp,
                                                task_on_tv, task_precense,
                                                task_push_door,
                                                task_push_window, task_v_418,
                                                task_v_417, task_pnr_8,
                                                task_v_398, task_v_397,
                                                task_pnr_7, task_v_362,
                                                task_v_361, task_v_360,
                                                task_pnr_6, task_v_309,
                                                task_v_308, task_v_307,
                                                task_pnr_5, task_ck_17_1,
                                                task_pnr_4, task_ck_19_1,
                                                task_pnr_3, task_ck_21_1,
                                                task_pnr_2, task_ck_23_1,
                                                task_pnr_1, task_ck_25_1,
                                                task_pnr, p_task_c_window,
                                                p_task_c_door, p_task_c_tv1,
                                                p_task_c_tv2, p_task_c_lamp2,
                                                p_task_c_lamp1, p_task_c4,
                                                p_task_c3, p_task_c2,
                                                p_task_c1, _out->task_c1,
                                                &Task_controller__task_controller_task_c2_out_st);
  _out->task_c2 = Task_controller__task_controller_task_c2_out_st.task_c2;
  Task_controller__task_controller_task_c3_step(task_up1, task_down1,
                                                task_up2, task_down2, task_s,
                                                task_e, task_finish,
                                                task_start, task_cold,
                                                task_temp_ok, task_eco,
                                                task_confort, task_on_lamp,
                                                task_on_tv, task_precense,
                                                task_push_door,
                                                task_push_window, task_v_418,
                                                task_v_417, task_pnr_8,
                                                task_v_398, task_v_397,
                                                task_pnr_7, task_v_362,
                                                task_v_361, task_v_360,
                                                task_pnr_6, task_v_309,
                                                task_v_308, task_v_307,
                                                task_pnr_5, task_ck_17_1,
                                                task_pnr_4, task_ck_19_1,
                                                task_pnr_3, task_ck_21_1,
                                                task_pnr_2, task_ck_23_1,
                                                task_pnr_1, task_ck_25_1,
                                                task_pnr, p_task_c_window,
                                                p_task_c_door, p_task_c_tv1,
                                                p_task_c_tv2, p_task_c_lamp2,
                                                p_task_c_lamp1, p_task_c4,
                                                p_task_c3, p_task_c2,
                                                p_task_c1, _out->task_c2,
                                                _out->task_c1,
                                                &Task_controller__task_controller_task_c3_out_st);
  _out->task_c3 = Task_controller__task_controller_task_c3_out_st.task_c3;
  Task_controller__task_controller_task_c4_step(task_up1, task_down1,
                                                task_up2, task_down2, task_s,
                                                task_e, task_finish,
                                                task_start, task_cold,
                                                task_temp_ok, task_eco,
                                                task_confort, task_on_lamp,
                                                task_on_tv, task_precense,
                                                task_push_door,
                                                task_push_window, task_v_418,
                                                task_v_417, task_pnr_8,
                                                task_v_398, task_v_397,
                                                task_pnr_7, task_v_362,
                                                task_v_361, task_v_360,
                                                task_pnr_6, task_v_309,
                                                task_v_308, task_v_307,
                                                task_pnr_5, task_ck_17_1,
                                                task_pnr_4, task_ck_19_1,
                                                task_pnr_3, task_ck_21_1,
                                                task_pnr_2, task_ck_23_1,
                                                task_pnr_1, task_ck_25_1,
                                                task_pnr, p_task_c_window,
                                                p_task_c_door, p_task_c_tv1,
                                                p_task_c_tv2, p_task_c_lamp2,
                                                p_task_c_lamp1, p_task_c4,
                                                p_task_c3, p_task_c2,
                                                p_task_c1, _out->task_c3,
                                                _out->task_c2, _out->task_c1,
                                                &Task_controller__task_controller_task_c4_out_st);
  _out->task_c4 = Task_controller__task_controller_task_c4_out_st.task_c4;
  Task_controller__task_controller_task_c_lamp1_step(task_up1, task_down1,
                                                     task_up2, task_down2,
                                                     task_s, task_e,
                                                     task_finish, task_start,
                                                     task_cold, task_temp_ok,
                                                     task_eco, task_confort,
                                                     task_on_lamp,
                                                     task_on_tv,
                                                     task_precense,
                                                     task_push_door,
                                                     task_push_window,
                                                     task_v_418, task_v_417,
                                                     task_pnr_8, task_v_398,
                                                     task_v_397, task_pnr_7,
                                                     task_v_362, task_v_361,
                                                     task_v_360, task_pnr_6,
                                                     task_v_309, task_v_308,
                                                     task_v_307, task_pnr_5,
                                                     task_ck_17_1,
                                                     task_pnr_4,
                                                     task_ck_19_1,
                                                     task_pnr_3,
                                                     task_ck_21_1,
                                                     task_pnr_2,
                                                     task_ck_23_1,
                                                     task_pnr_1,
                                                     task_ck_25_1, task_pnr,
                                                     p_task_c_window,
                                                     p_task_c_door,
                                                     p_task_c_tv1,
                                                     p_task_c_tv2,
                                                     p_task_c_lamp2,
                                                     p_task_c_lamp1,
                                                     p_task_c4, p_task_c3,
                                                     p_task_c2, p_task_c1,
                                                     _out->task_c4,
                                                     _out->task_c3,
                                                     _out->task_c2,
                                                     _out->task_c1,
                                                     &Task_controller__task_controller_task_c_lamp1_out_st);
  _out->task_c_lamp1 = Task_controller__task_controller_task_c_lamp1_out_st.task_c_lamp1;
  Task_controller__task_controller_task_c_lamp2_step(task_up1, task_down1,
                                                     task_up2, task_down2,
                                                     task_s, task_e,
                                                     task_finish, task_start,
                                                     task_cold, task_temp_ok,
                                                     task_eco, task_confort,
                                                     task_on_lamp,
                                                     task_on_tv,
                                                     task_precense,
                                                     task_push_door,
                                                     task_push_window,
                                                     task_v_418, task_v_417,
                                                     task_pnr_8, task_v_398,
                                                     task_v_397, task_pnr_7,
                                                     task_v_362, task_v_361,
                                                     task_v_360, task_pnr_6,
                                                     task_v_309, task_v_308,
                                                     task_v_307, task_pnr_5,
                                                     task_ck_17_1,
                                                     task_pnr_4,
                                                     task_ck_19_1,
                                                     task_pnr_3,
                                                     task_ck_21_1,
                                                     task_pnr_2,
                                                     task_ck_23_1,
                                                     task_pnr_1,
                                                     task_ck_25_1, task_pnr,
                                                     p_task_c_window,
                                                     p_task_c_door,
                                                     p_task_c_tv1,
                                                     p_task_c_tv2,
                                                     p_task_c_lamp2,
                                                     p_task_c_lamp1,
                                                     p_task_c4, p_task_c3,
                                                     p_task_c2, p_task_c1,
                                                     _out->task_c_lamp1,
                                                     _out->task_c4,
                                                     _out->task_c3,
                                                     _out->task_c2,
                                                     _out->task_c1,
                                                     &Task_controller__task_controller_task_c_lamp2_out_st);
  _out->task_c_lamp2 = Task_controller__task_controller_task_c_lamp2_out_st.task_c_lamp2;
  Task_controller__task_controller_task_c_tv2_step(task_up1, task_down1,
                                                   task_up2, task_down2,
                                                   task_s, task_e,
                                                   task_finish, task_start,
                                                   task_cold, task_temp_ok,
                                                   task_eco, task_confort,
                                                   task_on_lamp, task_on_tv,
                                                   task_precense,
                                                   task_push_door,
                                                   task_push_window,
                                                   task_v_418, task_v_417,
                                                   task_pnr_8, task_v_398,
                                                   task_v_397, task_pnr_7,
                                                   task_v_362, task_v_361,
                                                   task_v_360, task_pnr_6,
                                                   task_v_309, task_v_308,
                                                   task_v_307, task_pnr_5,
                                                   task_ck_17_1, task_pnr_4,
                                                   task_ck_19_1, task_pnr_3,
                                                   task_ck_21_1, task_pnr_2,
                                                   task_ck_23_1, task_pnr_1,
                                                   task_ck_25_1, task_pnr,
                                                   p_task_c_window,
                                                   p_task_c_door,
                                                   p_task_c_tv1,
                                                   p_task_c_tv2,
                                                   p_task_c_lamp2,
                                                   p_task_c_lamp1, p_task_c4,
                                                   p_task_c3, p_task_c2,
                                                   p_task_c1,
                                                   _out->task_c_lamp2,
                                                   _out->task_c_lamp1,
                                                   _out->task_c4,
                                                   _out->task_c3,
                                                   _out->task_c2,
                                                   _out->task_c1,
                                                   &Task_controller__task_controller_task_c_tv2_out_st);
  _out->task_c_tv2 = Task_controller__task_controller_task_c_tv2_out_st.task_c_tv2;
  Task_controller__task_controller_task_c_tv1_step(task_up1, task_down1,
                                                   task_up2, task_down2,
                                                   task_s, task_e,
                                                   task_finish, task_start,
                                                   task_cold, task_temp_ok,
                                                   task_eco, task_confort,
                                                   task_on_lamp, task_on_tv,
                                                   task_precense,
                                                   task_push_door,
                                                   task_push_window,
                                                   task_v_418, task_v_417,
                                                   task_pnr_8, task_v_398,
                                                   task_v_397, task_pnr_7,
                                                   task_v_362, task_v_361,
                                                   task_v_360, task_pnr_6,
                                                   task_v_309, task_v_308,
                                                   task_v_307, task_pnr_5,
                                                   task_ck_17_1, task_pnr_4,
                                                   task_ck_19_1, task_pnr_3,
                                                   task_ck_21_1, task_pnr_2,
                                                   task_ck_23_1, task_pnr_1,
                                                   task_ck_25_1, task_pnr,
                                                   p_task_c_window,
                                                   p_task_c_door,
                                                   p_task_c_tv1,
                                                   p_task_c_tv2,
                                                   p_task_c_lamp2,
                                                   p_task_c_lamp1, p_task_c4,
                                                   p_task_c3, p_task_c2,
                                                   p_task_c1,
                                                   _out->task_c_tv2,
                                                   _out->task_c_lamp2,
                                                   _out->task_c_lamp1,
                                                   _out->task_c4,
                                                   _out->task_c3,
                                                   _out->task_c2,
                                                   _out->task_c1,
                                                   &Task_controller__task_controller_task_c_tv1_out_st);
  _out->task_c_tv1 = Task_controller__task_controller_task_c_tv1_out_st.task_c_tv1;
  Task_controller__task_controller_task_c_door_step(task_up1, task_down1,
                                                    task_up2, task_down2,
                                                    task_s, task_e,
                                                    task_finish, task_start,
                                                    task_cold, task_temp_ok,
                                                    task_eco, task_confort,
                                                    task_on_lamp, task_on_tv,
                                                    task_precense,
                                                    task_push_door,
                                                    task_push_window,
                                                    task_v_418, task_v_417,
                                                    task_pnr_8, task_v_398,
                                                    task_v_397, task_pnr_7,
                                                    task_v_362, task_v_361,
                                                    task_v_360, task_pnr_6,
                                                    task_v_309, task_v_308,
                                                    task_v_307, task_pnr_5,
                                                    task_ck_17_1, task_pnr_4,
                                                    task_ck_19_1, task_pnr_3,
                                                    task_ck_21_1, task_pnr_2,
                                                    task_ck_23_1, task_pnr_1,
                                                    task_ck_25_1, task_pnr,
                                                    p_task_c_window,
                                                    p_task_c_door,
                                                    p_task_c_tv1,
                                                    p_task_c_tv2,
                                                    p_task_c_lamp2,
                                                    p_task_c_lamp1,
                                                    p_task_c4, p_task_c3,
                                                    p_task_c2, p_task_c1,
                                                    _out->task_c_tv1,
                                                    _out->task_c_tv2,
                                                    _out->task_c_lamp2,
                                                    _out->task_c_lamp1,
                                                    _out->task_c4,
                                                    _out->task_c3,
                                                    _out->task_c2,
                                                    _out->task_c1,
                                                    &Task_controller__task_controller_task_c_door_out_st);
  _out->task_c_door = Task_controller__task_controller_task_c_door_out_st.task_c_door;
  Task_controller__task_controller_task_c_window_step(task_up1, task_down1,
                                                      task_up2, task_down2,
                                                      task_s, task_e,
                                                      task_finish,
                                                      task_start, task_cold,
                                                      task_temp_ok, task_eco,
                                                      task_confort,
                                                      task_on_lamp,
                                                      task_on_tv,
                                                      task_precense,
                                                      task_push_door,
                                                      task_push_window,
                                                      task_v_418, task_v_417,
                                                      task_pnr_8, task_v_398,
                                                      task_v_397, task_pnr_7,
                                                      task_v_362, task_v_361,
                                                      task_v_360, task_pnr_6,
                                                      task_v_309, task_v_308,
                                                      task_v_307, task_pnr_5,
                                                      task_ck_17_1,
                                                      task_pnr_4,
                                                      task_ck_19_1,
                                                      task_pnr_3,
                                                      task_ck_21_1,
                                                      task_pnr_2,
                                                      task_ck_23_1,
                                                      task_pnr_1,
                                                      task_ck_25_1, task_pnr,
                                                      p_task_c_window,
                                                      p_task_c_door,
                                                      p_task_c_tv1,
                                                      p_task_c_tv2,
                                                      p_task_c_lamp2,
                                                      p_task_c_lamp1,
                                                      p_task_c4, p_task_c3,
                                                      p_task_c2, p_task_c1,
                                                      _out->task_c_door,
                                                      _out->task_c_tv1,
                                                      _out->task_c_tv2,
                                                      _out->task_c_lamp2,
                                                      _out->task_c_lamp1,
                                                      _out->task_c4,
                                                      _out->task_c3,
                                                      _out->task_c2,
                                                      _out->task_c1,
                                                      &Task_controller__task_controller_task_c_window_out_st);
  _out->task_c_window = Task_controller__task_controller_task_c_window_out_st.task_c_window;
}

