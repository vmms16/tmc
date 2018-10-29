/* --- Generated the 29/10/2018 at 10:47 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s task pratica05.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pratica05.h"

void Pratica05__rad_reset(Pratica05__rad_mem* self) {
  self->pnr = false;
  self->v_147 = false;
  self->v_148 = false;
}

void Pratica05__rad_step(int up1, int down1, int up2, int down2, int c1,
                         int c2, Pratica05__rad_out* _out,
                         Pratica05__rad_mem* self) {
  
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
  int ns_St_HIGHT_2_0;
  int ns_St_HIGHT_2_1;
  int ns_St_ECO_2_0;
  int ns_St_ECO_2_1;
  int ns_St_FROST_2_0;
  int ns_St_FROST_2_1;
  int ns_St_OFF_2_0;
  int ns_St_OFF_2_1;
  int ck_1_2_0;
  int ck_1_2_1;
  int nr_St_HIGHT;
  int ns_St_HIGHT_2;
  int ns_St_HIGHT_1;
  int ss_St_HIGHT;
  int power_St_HIGHT;
  int nr_St_ECO;
  int ns_St_ECO_2;
  int ns_St_ECO_1;
  int ss_St_ECO;
  int power_St_ECO;
  int nr_St_FROST;
  int ns_St_FROST_2;
  int ns_St_FROST_1;
  int ss_St_FROST;
  int power_St_FROST;
  int nr_St_OFF;
  int ns_St_OFF_2;
  int ns_St_OFF_1;
  int ss_St_OFF;
  int power_St_OFF;
  int ck_1_2;
  int ck_1_1;
  int v_20;
  int v_19;
  int v_17_2_0;
  int v_17_2_1;
  int v_15_2_0;
  int v_15_2_1;
  int v_18;
  int v_17_2;
  int v_17_1;
  int v_16;
  int v_15_2;
  int v_15_1;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_9_2_0;
  int v_9_2_1;
  int v_10;
  int v_9_2;
  int v_9_1;
  int v_8;
  int v_7;
  int v_6;
  int v_4_2_0;
  int v_4_2_1;
  int v_5;
  int v_4_2;
  int v_4_1;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int s_St_HIGHT_2_0;
  int s_St_HIGHT_2_1;
  int s_St_ECO_2_0;
  int s_St_ECO_2_1;
  int s_St_FROST_2_0;
  int s_St_FROST_2_1;
  int s_St_OFF_2_0;
  int s_St_OFF_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_HIGHT;
  int s_St_HIGHT_2;
  int s_St_HIGHT_1;
  int r_St_ECO;
  int s_St_ECO_2;
  int s_St_ECO_1;
  int r_St_FROST;
  int s_St_FROST_2;
  int s_St_FROST_1;
  int r_St_OFF;
  int s_St_OFF_2;
  int s_St_OFF_1;
  int ck_2;
  int ck_1_3;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_3 = self->v_147;
  ck_2 = self->v_148;
  if (ck_1_3) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_8 = (up2&&c2);
      if (v_8) {
        v_10 = true;
        v_9_1 = false;
        v_9_2 = true;
      } else {
        v_10 = self->pnr;
        v_9_1 = true;
        v_9_2 = true;
      };
      v_6 = !(c1);
      v_7 = (down1||v_6);
      if (v_7) {
        r_St_ECO = true;
      } else {
        r_St_ECO = v_10;
      };
      v_153 = r_St_ECO;
      if (v_7) {
        s_St_ECO_1 = true;
      } else {
        s_St_ECO_1 = v_9_1;
      };
      v_149 = s_St_ECO_1;
      if (v_7) {
        s_St_ECO_2 = false;
      } else {
        s_St_ECO_2 = v_9_2;
      };
      v_150 = s_St_ECO_2;
      if (v_9_1) {
        v_9_2_1 = v_9_2;
      } else {
        v_9_2_0 = v_9_2;
      };
      if (s_St_ECO_1) {
        s_St_ECO_2_1 = s_St_ECO_2;
      } else {
        s_St_ECO_2_0 = s_St_ECO_2;
      };
    } else {
      v_14 = (up2&&c2);
      if (v_14) {
        v_16 = true;
        v_15_1 = false;
        v_15_2 = true;
      } else {
        v_16 = self->pnr;
        v_15_1 = true;
        v_15_2 = false;
      };
      v_12 = !(c1);
      v_13 = (down1||v_12);
      if (v_13) {
        v_18 = true;
        v_17_1 = false;
        v_17_2 = false;
      } else {
        v_18 = v_16;
        v_17_1 = v_15_1;
        v_17_2 = v_15_2;
      };
      v_11 = (up1&&c1);
      if (v_11) {
        r_St_FROST = true;
        s_St_FROST_1 = true;
        s_St_FROST_2 = true;
      } else {
        r_St_FROST = v_18;
        s_St_FROST_1 = v_17_1;
        s_St_FROST_2 = v_17_2;
      };
      v_153 = r_St_FROST;
      v_149 = s_St_FROST_1;
      v_150 = s_St_FROST_2;
      if (v_15_1) {
        v_15_2_1 = v_15_2;
      } else {
        v_15_2_0 = v_15_2;
      };
      if (v_17_1) {
        v_17_2_1 = v_17_2;
      } else {
        v_17_2_0 = v_17_2;
      };
      if (s_St_FROST_1) {
        s_St_FROST_2_1 = s_St_FROST_2;
      } else {
        s_St_FROST_2_0 = s_St_FROST_2;
      };
    };
    s_1 = v_149;
    s_2 = v_150;
    r = v_153;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_2 = !(c2);
      v_3 = (down2&&v_2);
      if (v_3) {
        v_5 = true;
        v_4_1 = true;
        v_4_2 = false;
      } else {
        v_5 = self->pnr;
        v_4_1 = false;
        v_4_2 = true;
      };
      v = !(c1);
      v_1 = (down1&&v);
      if (v_1) {
        r_St_HIGHT = true;
      } else {
        r_St_HIGHT = v_5;
      };
      v_154 = r_St_HIGHT;
      if (v_1) {
        s_St_HIGHT_1 = true;
      } else {
        s_St_HIGHT_1 = v_4_1;
      };
      v_151 = s_St_HIGHT_1;
      if (v_1) {
        s_St_HIGHT_2 = true;
      } else {
        s_St_HIGHT_2 = v_4_2;
      };
      v_152 = s_St_HIGHT_2;
    } else {
      v_19 = !(c1);
      v_20 = (up1||v_19);
      if (v_20) {
        r_St_OFF = true;
        s_St_OFF_1 = true;
        s_St_OFF_2 = false;
      } else {
        r_St_OFF = self->pnr;
        s_St_OFF_1 = false;
        s_St_OFF_2 = false;
      };
      v_154 = r_St_OFF;
      v_151 = s_St_OFF_1;
      v_152 = s_St_OFF_2;
    };
    s_1 = v_151;
    s_2 = v_152;
    r = v_154;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      power_St_ECO = 1500;
      v_137 = power_St_ECO;
      ss_St_ECO = 2;
      v_139 = ss_St_ECO;
      nr_St_ECO = false;
      v_145 = nr_St_ECO;
      ns_St_ECO_1 = true;
      v_141 = ns_St_ECO_1;
      ns_St_ECO_2 = true;
      v_142 = ns_St_ECO_2;
      if (ns_St_ECO_1) {
        ns_St_ECO_2_1 = ns_St_ECO_2;
      } else {
        ns_St_ECO_2_0 = ns_St_ECO_2;
      };
    } else {
      power_St_FROST = 300;
      ss_St_FROST = 1;
      nr_St_FROST = false;
      ns_St_FROST_1 = true;
      ns_St_FROST_2 = false;
      v_137 = power_St_FROST;
      v_139 = ss_St_FROST;
      v_145 = nr_St_FROST;
      v_141 = ns_St_FROST_1;
      v_142 = ns_St_FROST_2;
      if (ns_St_FROST_1) {
        ns_St_FROST_2_1 = ns_St_FROST_2;
      } else {
        ns_St_FROST_2_0 = ns_St_FROST_2;
      };
    };
    _out->power = v_137;
    _out->ss = v_139;
    ns_1 = v_141;
    ns_2 = v_142;
    nr = v_145;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      power_St_HIGHT = 2000;
      v_138 = power_St_HIGHT;
      ss_St_HIGHT = 3;
      v_140 = ss_St_HIGHT;
      nr_St_HIGHT = false;
      v_146 = nr_St_HIGHT;
      ns_St_HIGHT_1 = false;
      v_143 = ns_St_HIGHT_1;
      ns_St_HIGHT_2 = true;
      v_144 = ns_St_HIGHT_2;
    } else {
      power_St_OFF = 0;
      ss_St_OFF = 0;
      nr_St_OFF = false;
      ns_St_OFF_1 = false;
      ns_St_OFF_2 = false;
      v_138 = power_St_OFF;
      v_140 = ss_St_OFF;
      v_146 = nr_St_OFF;
      v_143 = ns_St_OFF_1;
      v_144 = ns_St_OFF_2;
    };
    _out->power = v_138;
    _out->ss = v_140;
    ns_1 = v_143;
    ns_2 = v_144;
    nr = v_146;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_1_1)) {
    if (ck_1_2_0) {
      if (ns_St_HIGHT_1) {
        ns_St_HIGHT_2_1 = ns_St_HIGHT_2;
      } else {
        ns_St_HIGHT_2_0 = ns_St_HIGHT_2;
      };
    } else {
      if (ns_St_OFF_1) {
        ns_St_OFF_2_1 = ns_St_OFF_2;
      } else {
        ns_St_OFF_2_0 = ns_St_OFF_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1_3)) {
    if (ck_2_0) {
      if (v_4_1) {
        v_4_2_1 = v_4_2;
      } else {
        v_4_2_0 = v_4_2;
      };
      if (s_St_HIGHT_1) {
        s_St_HIGHT_2_1 = s_St_HIGHT_2;
      } else {
        s_St_HIGHT_2_0 = s_St_HIGHT_2;
      };
    } else {
      if (s_St_OFF_1) {
        s_St_OFF_2_1 = s_St_OFF_2;
      } else {
        s_St_OFF_2_0 = s_St_OFF_2;
      };
    };
  };
  self->pnr = nr;
  self->v_147 = ns_1;
  self->v_148 = ns_2;;
}

void Pratica05__police_reset(Pratica05__police_mem* self) {
  self->pnr = false;
  self->v_167 = false;
  self->v_168 = false;
}

void Pratica05__police_step(int eco, int confort,
                            Pratica05__police_out* _out,
                            Pratica05__police_mem* self) {
  
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
  int ns_St_1_CONFORT_2_0;
  int ns_St_1_CONFORT_2_1;
  int s_St_1_CONFORT_2_0;
  int s_St_1_CONFORT_2_1;
  int ns_St_1_ECO_2_0;
  int ns_St_1_ECO_2_1;
  int s_St_1_ECO_2_0;
  int s_St_1_ECO_2_1;
  int ns_St_1_MS_2_0;
  int ns_St_1_MS_2_1;
  int s_St_1_MS_2_0;
  int s_St_1_MS_2_1;
  int ck_2_2_0;
  int ck_2_2_1;
  int nr_St_1_CONFORT;
  int ns_St_1_CONFORT_2;
  int ns_St_1_CONFORT_1;
  int s_St_1_CONFORT_2;
  int s_St_1_CONFORT_1;
  int pl_St_1_CONFORT;
  int nr_St_1_ECO;
  int ns_St_1_ECO_2;
  int ns_St_1_ECO_1;
  int s_St_1_ECO_2;
  int s_St_1_ECO_1;
  int pl_St_1_ECO;
  int nr_St_1_MS;
  int ns_St_1_MS_2;
  int ns_St_1_MS_1;
  int s_St_1_MS_2;
  int s_St_1_MS_1;
  int pl_St_1_MS;
  int ck_2_2;
  int ck_2_1;
  int v_26_2_0;
  int v_26_2_1;
  int v_27;
  int v_26_2;
  int v_26_1;
  int v_24_2_0;
  int v_24_2_1;
  int v_25;
  int v_24_2;
  int v_24_1;
  int v_23;
  int v_21_2_0;
  int v_21_2_1;
  int v_22;
  int v_21_2;
  int v_21_1;
  int v;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int s_3_St_1_CONFORT_2_0;
  int s_3_St_1_CONFORT_2_1;
  int s_3_St_1_ECO_2_0;
  int s_3_St_1_ECO_2_1;
  int s_3_St_1_MS_2_0;
  int s_3_St_1_MS_2_1;
  int ck_2_3_0;
  int ck_2_3_1;
  int r_St_1_CONFORT;
  int s_3_St_1_CONFORT_2;
  int s_3_St_1_CONFORT_1;
  int r_St_1_ECO;
  int s_3_St_1_ECO_2;
  int s_3_St_1_ECO_1;
  int r_St_1_MS;
  int s_3_St_1_MS_2;
  int s_3_St_1_MS_1;
  int ck_2_3;
  int ck_1;
  int s_2_0;
  int s_2_1;
  int s_3_2_0;
  int s_3_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_3_2;
  int s_3_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_167;
  ck_2_3 = self->v_168;
  if (ck_1) {
    ck_2_3_1 = ck_2_3;
    if (ck_2_3_1) {
      if (eco) {
        v_22 = true;
        v_21_1 = true;
        v_21_2 = false;
      } else {
        v_22 = self->pnr;
        v_21_1 = true;
        v_21_2 = true;
      };
      v = !(confort);
      if (v) {
        r_St_1_CONFORT = true;
      } else {
        r_St_1_CONFORT = v_22;
      };
      v_173 = r_St_1_CONFORT;
      if (v) {
        s_3_St_1_CONFORT_1 = false;
      } else {
        s_3_St_1_CONFORT_1 = v_21_1;
      };
      v_169 = s_3_St_1_CONFORT_1;
      if (v) {
        s_3_St_1_CONFORT_2 = false;
      } else {
        s_3_St_1_CONFORT_2 = v_21_2;
      };
      v_170 = s_3_St_1_CONFORT_2;
    } else {
      if (confort) {
        v_25 = true;
        v_24_1 = true;
        v_24_2 = true;
      } else {
        v_25 = self->pnr;
        v_24_1 = true;
        v_24_2 = false;
      };
      v_23 = !(eco);
      if (v_23) {
        r_St_1_ECO = true;
        s_3_St_1_ECO_1 = false;
        s_3_St_1_ECO_2 = false;
      } else {
        r_St_1_ECO = v_25;
        s_3_St_1_ECO_1 = v_24_1;
        s_3_St_1_ECO_2 = v_24_2;
      };
      v_173 = r_St_1_ECO;
      v_169 = s_3_St_1_ECO_1;
      v_170 = s_3_St_1_ECO_2;
    };
    s_3_1 = v_169;
    s_3_2 = v_170;
    r = v_173;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      v_174 = true;
      v_171 = true;
      v_172 = true;
    } else {
      if (confort) {
        v_27 = true;
      } else {
        v_27 = self->pnr;
      };
      if (eco) {
        r_St_1_MS = true;
      } else {
        r_St_1_MS = v_27;
      };
      v_174 = r_St_1_MS;
      if (confort) {
        v_26_1 = true;
      } else {
        v_26_1 = false;
      };
      if (eco) {
        s_3_St_1_MS_1 = true;
      } else {
        s_3_St_1_MS_1 = v_26_1;
      };
      v_171 = s_3_St_1_MS_1;
      if (confort) {
        v_26_2 = true;
      } else {
        v_26_2 = false;
      };
      if (eco) {
        s_3_St_1_MS_2 = false;
      } else {
        s_3_St_1_MS_2 = v_26_2;
      };
      v_172 = s_3_St_1_MS_2;
      if (v_26_1) {
        v_26_2_1 = v_26_2;
      } else {
        v_26_2_0 = v_26_2;
      };
      if (s_3_St_1_MS_1) {
        s_3_St_1_MS_2_1 = s_3_St_1_MS_2;
      } else {
        s_3_St_1_MS_2_0 = s_3_St_1_MS_2;
      };
    };
    s_3_1 = v_171;
    s_3_2 = v_172;
    r = v_174;
  };
  ck_2_1 = s_3_1;
  ck_2_2 = s_3_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      pl_St_1_CONFORT = 7000;
      v_155 = pl_St_1_CONFORT;
      s_St_1_CONFORT_1 = true;
      v_157 = s_St_1_CONFORT_1;
      s_St_1_CONFORT_2 = true;
      v_158 = s_St_1_CONFORT_2;
      nr_St_1_CONFORT = false;
      v_165 = nr_St_1_CONFORT;
      ns_St_1_CONFORT_1 = true;
      v_161 = ns_St_1_CONFORT_1;
      ns_St_1_CONFORT_2 = true;
      v_162 = ns_St_1_CONFORT_2;
    } else {
      pl_St_1_ECO = 5000;
      s_St_1_ECO_1 = true;
      s_St_1_ECO_2 = false;
      nr_St_1_ECO = false;
      ns_St_1_ECO_1 = true;
      ns_St_1_ECO_2 = false;
      v_155 = pl_St_1_ECO;
      v_157 = s_St_1_ECO_1;
      v_158 = s_St_1_ECO_2;
      v_165 = nr_St_1_ECO;
      v_161 = ns_St_1_ECO_1;
      v_162 = ns_St_1_ECO_2;
    };
    _out->pl = v_155;
    _out->s_1 = v_157;
    _out->s_2 = v_158;
    ns_1 = v_161;
    ns_2 = v_162;
    nr = v_165;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      v_156 = 0;
      v_159 = true;
      v_160 = true;
      v_166 = true;
      v_163 = true;
      v_164 = true;
    } else {
      pl_St_1_MS = 3000;
      v_156 = pl_St_1_MS;
      s_St_1_MS_1 = false;
      v_159 = s_St_1_MS_1;
      s_St_1_MS_2 = false;
      v_160 = s_St_1_MS_2;
      nr_St_1_MS = false;
      v_166 = nr_St_1_MS;
      ns_St_1_MS_1 = false;
      v_163 = ns_St_1_MS_1;
      ns_St_1_MS_2 = false;
      v_164 = ns_St_1_MS_2;
      if (s_St_1_MS_1) {
        s_St_1_MS_2_1 = s_St_1_MS_2;
      } else {
        s_St_1_MS_2_0 = s_St_1_MS_2;
      };
      if (ns_St_1_MS_1) {
        ns_St_1_MS_2_1 = ns_St_1_MS_2;
      } else {
        ns_St_1_MS_2_0 = ns_St_1_MS_2;
      };
    };
    _out->pl = v_156;
    _out->s_1 = v_159;
    _out->s_2 = v_160;
    ns_1 = v_163;
    ns_2 = v_164;
    nr = v_166;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (_out->s_1) {
    s_2_1 = _out->s_2;
  } else {
    s_2_0 = _out->s_2;
  };
  if (ck_2_1) {
    if (ck_2_2_1) {
      if (s_St_1_CONFORT_1) {
        s_St_1_CONFORT_2_1 = s_St_1_CONFORT_2;
      } else {
        s_St_1_CONFORT_2_0 = s_St_1_CONFORT_2;
      };
      if (ns_St_1_CONFORT_1) {
        ns_St_1_CONFORT_2_1 = ns_St_1_CONFORT_2;
      } else {
        ns_St_1_CONFORT_2_0 = ns_St_1_CONFORT_2;
      };
    } else {
      if (s_St_1_ECO_1) {
        s_St_1_ECO_2_1 = s_St_1_ECO_2;
      } else {
        s_St_1_ECO_2_0 = s_St_1_ECO_2;
      };
      if (ns_St_1_ECO_1) {
        ns_St_1_ECO_2_1 = ns_St_1_ECO_2;
      } else {
        ns_St_1_ECO_2_0 = ns_St_1_ECO_2;
      };
    };
  };
  if (s_3_1) {
    s_3_2_1 = s_3_2;
  } else {
    s_3_2_0 = s_3_2;
  };
  if (ck_1) {
    if (ck_2_3_1) {
      if (v_21_1) {
        v_21_2_1 = v_21_2;
      } else {
        v_21_2_0 = v_21_2;
      };
      if (s_3_St_1_CONFORT_1) {
        s_3_St_1_CONFORT_2_1 = s_3_St_1_CONFORT_2;
      } else {
        s_3_St_1_CONFORT_2_0 = s_3_St_1_CONFORT_2;
      };
    } else {
      if (v_24_1) {
        v_24_2_1 = v_24_2;
      } else {
        v_24_2_0 = v_24_2;
      };
      if (s_3_St_1_ECO_1) {
        s_3_St_1_ECO_2_1 = s_3_St_1_ECO_2;
      } else {
        s_3_St_1_ECO_2_0 = s_3_St_1_ECO_2;
      };
    };
  };
  self->pnr = nr;
  self->v_167 = ns_1;
  self->v_168 = ns_2;;
}

void Pratica05__ws_reset(Pratica05__ws_mem* self) {
  self->pnr = false;
  self->v_205 = true;
  self->v_206 = true;
  self->v_207 = true;
}

void Pratica05__ws_step(int s, int e, int c, Pratica05__ws_out* _out,
                        Pratica05__ws_mem* self) {
  
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
  int ns_St_2_STANDBY_2_0;
  int ns_St_2_STANDBY_3_0_0;
  int ns_St_2_STANDBY_3_0_1;
  int ns_St_2_STANDBY_2_1;
  int ns_St_2_STANDBY_3_1_0;
  int ns_St_2_STANDBY_3_1_1;
  int ns_St_2_SPIN_2_0;
  int ns_St_2_SPIN_3_0_0;
  int ns_St_2_SPIN_3_0_1;
  int ns_St_2_SPIN_2_1;
  int ns_St_2_SPIN_3_1_0;
  int ns_St_2_SPIN_3_1_1;
  int ns_St_2_RINSE_2_0;
  int ns_St_2_RINSE_3_0_0;
  int ns_St_2_RINSE_3_0_1;
  int ns_St_2_RINSE_2_1;
  int ns_St_2_RINSE_3_1_0;
  int ns_St_2_RINSE_3_1_1;
  int ns_St_2_WASHING_2_0;
  int ns_St_2_WASHING_3_0_0;
  int ns_St_2_WASHING_3_0_1;
  int ns_St_2_WASHING_2_1;
  int ns_St_2_WASHING_3_1_0;
  int ns_St_2_WASHING_3_1_1;
  int ns_St_2_WF_2_0;
  int ns_St_2_WF_3_0_0;
  int ns_St_2_WF_3_0_1;
  int ns_St_2_WF_2_1;
  int ns_St_2_WF_3_1_0;
  int ns_St_2_WF_3_1_1;
  int ns_St_2_OFF_2_0;
  int ns_St_2_OFF_3_0_0;
  int ns_St_2_OFF_3_0_1;
  int ns_St_2_OFF_2_1;
  int ns_St_2_OFF_3_1_0;
  int ns_St_2_OFF_3_1_1;
  int ck_3_2_0;
  int ck_3_3_0_0;
  int ck_3_3_0_1;
  int ck_3_2_1;
  int ck_3_3_1_0;
  int ck_3_3_1_1;
  int nr_St_2_STANDBY;
  int ns_St_2_STANDBY_3;
  int ns_St_2_STANDBY_2;
  int ns_St_2_STANDBY_1;
  int power_St_2_STANDBY;
  int nr_St_2_SPIN;
  int ns_St_2_SPIN_3;
  int ns_St_2_SPIN_2;
  int ns_St_2_SPIN_1;
  int power_St_2_SPIN;
  int nr_St_2_RINSE;
  int ns_St_2_RINSE_3;
  int ns_St_2_RINSE_2;
  int ns_St_2_RINSE_1;
  int power_St_2_RINSE;
  int nr_St_2_WASHING;
  int ns_St_2_WASHING_3;
  int ns_St_2_WASHING_2;
  int ns_St_2_WASHING_1;
  int power_St_2_WASHING;
  int nr_St_2_WF;
  int ns_St_2_WF_3;
  int ns_St_2_WF_2;
  int ns_St_2_WF_1;
  int power_St_2_WF;
  int nr_St_2_OFF;
  int ns_St_2_OFF_3;
  int ns_St_2_OFF_2;
  int ns_St_2_OFF_1;
  int power_St_2_OFF;
  int ck_3_3;
  int ck_3_2;
  int ck_3_1;
  int v_30_2_0;
  int v_30_3_0_0;
  int v_30_3_0_1;
  int v_30_2_1;
  int v_30_3_1_0;
  int v_30_3_1_1;
  int v_31;
  int v_30_3;
  int v_30_2;
  int v_30_1;
  int v_29;
  int v_28;
  int v;
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
  int s_4_St_2_STANDBY_2_0;
  int s_4_St_2_STANDBY_3_0_0;
  int s_4_St_2_STANDBY_3_0_1;
  int s_4_St_2_STANDBY_2_1;
  int s_4_St_2_STANDBY_3_1_0;
  int s_4_St_2_STANDBY_3_1_1;
  int s_4_St_2_SPIN_2_0;
  int s_4_St_2_SPIN_3_0_0;
  int s_4_St_2_SPIN_3_0_1;
  int s_4_St_2_SPIN_2_1;
  int s_4_St_2_SPIN_3_1_0;
  int s_4_St_2_SPIN_3_1_1;
  int s_4_St_2_RINSE_2_0;
  int s_4_St_2_RINSE_3_0_0;
  int s_4_St_2_RINSE_3_0_1;
  int s_4_St_2_RINSE_2_1;
  int s_4_St_2_RINSE_3_1_0;
  int s_4_St_2_RINSE_3_1_1;
  int s_4_St_2_WASHING_2_0;
  int s_4_St_2_WASHING_3_0_0;
  int s_4_St_2_WASHING_3_0_1;
  int s_4_St_2_WASHING_2_1;
  int s_4_St_2_WASHING_3_1_0;
  int s_4_St_2_WASHING_3_1_1;
  int s_4_St_2_WF_2_0;
  int s_4_St_2_WF_3_0_0;
  int s_4_St_2_WF_3_0_1;
  int s_4_St_2_WF_2_1;
  int s_4_St_2_WF_3_1_0;
  int s_4_St_2_WF_3_1_1;
  int s_4_St_2_OFF_2_0;
  int s_4_St_2_OFF_3_0_0;
  int s_4_St_2_OFF_3_0_1;
  int s_4_St_2_OFF_2_1;
  int s_4_St_2_OFF_3_1_0;
  int s_4_St_2_OFF_3_1_1;
  int ck_2_0;
  int ck_3_4_0_0;
  int ck_3_4_0_1;
  int ck_2_1;
  int ck_3_4_1_0;
  int ck_3_4_1_1;
  int r_St_2_STANDBY;
  int s_4_St_2_STANDBY_3;
  int s_4_St_2_STANDBY_2;
  int s_4_St_2_STANDBY_1;
  int r_St_2_SPIN;
  int s_4_St_2_SPIN_3;
  int s_4_St_2_SPIN_2;
  int s_4_St_2_SPIN_1;
  int r_St_2_RINSE;
  int s_4_St_2_RINSE_3;
  int s_4_St_2_RINSE_2;
  int s_4_St_2_RINSE_1;
  int r_St_2_WASHING;
  int s_4_St_2_WASHING_3;
  int s_4_St_2_WASHING_2;
  int s_4_St_2_WASHING_1;
  int r_St_2_WF;
  int s_4_St_2_WF_3;
  int s_4_St_2_WF_2;
  int s_4_St_2_WF_1;
  int r_St_2_OFF;
  int s_4_St_2_OFF_3;
  int s_4_St_2_OFF_2;
  int s_4_St_2_OFF_1;
  int ck_3_4;
  int ck_2;
  int ck_1;
  int s_4_2_0;
  int s_4_3_0_0;
  int s_4_3_0_1;
  int s_4_2_1;
  int s_4_3_1_0;
  int s_4_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_4_3;
  int s_4_2;
  int s_4_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_205;
  ck_2 = self->v_206;
  ck_3_4 = self->v_207;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_4_1_1 = ck_3_4;
      if (ck_3_4_1_1) {
        if (s) {
          r_St_2_OFF = true;
          s_4_St_2_OFF_1 = false;
          s_4_St_2_OFF_2 = false;
          s_4_St_2_OFF_3 = false;
        } else {
          r_St_2_OFF = self->pnr;
          s_4_St_2_OFF_1 = true;
          s_4_St_2_OFF_2 = true;
          s_4_St_2_OFF_3 = true;
        };
        v_226 = r_St_2_OFF;
        v_208 = s_4_St_2_OFF_1;
        v_209 = s_4_St_2_OFF_2;
        v_210 = s_4_St_2_OFF_3;
        if (s_4_St_2_OFF_1) {
          s_4_St_2_OFF_2_1 = s_4_St_2_OFF_2;
          if (s_4_St_2_OFF_2_1) {
            s_4_St_2_OFF_3_1_1 = s_4_St_2_OFF_3;
          } else {
            s_4_St_2_OFF_3_1_0 = s_4_St_2_OFF_3;
          };
        } else {
          s_4_St_2_OFF_2_0 = s_4_St_2_OFF_2;
          if (s_4_St_2_OFF_2_0) {
            s_4_St_2_OFF_3_0_1 = s_4_St_2_OFF_3;
          } else {
            s_4_St_2_OFF_3_0_0 = s_4_St_2_OFF_3;
          };
        };
      } else {
        if (e) {
          r_St_2_RINSE = true;
        } else {
          r_St_2_RINSE = self->pnr;
        };
        v_226 = r_St_2_RINSE;
        if (e) {
          s_4_St_2_RINSE_1 = true;
        } else {
          s_4_St_2_RINSE_1 = true;
        };
        v_208 = s_4_St_2_RINSE_1;
        if (e) {
          s_4_St_2_RINSE_2 = false;
        } else {
          s_4_St_2_RINSE_2 = true;
        };
        v_209 = s_4_St_2_RINSE_2;
        if (e) {
          s_4_St_2_RINSE_3 = false;
        } else {
          s_4_St_2_RINSE_3 = false;
        };
        v_210 = s_4_St_2_RINSE_3;
        if (s_4_St_2_RINSE_1) {
          s_4_St_2_RINSE_2_1 = s_4_St_2_RINSE_2;
          if (s_4_St_2_RINSE_2_1) {
            s_4_St_2_RINSE_3_1_1 = s_4_St_2_RINSE_3;
          } else {
            s_4_St_2_RINSE_3_1_0 = s_4_St_2_RINSE_3;
          };
        } else {
          s_4_St_2_RINSE_2_0 = s_4_St_2_RINSE_2;
          if (s_4_St_2_RINSE_2_0) {
            s_4_St_2_RINSE_3_0_1 = s_4_St_2_RINSE_3;
          } else {
            s_4_St_2_RINSE_3_0_0 = s_4_St_2_RINSE_3;
          };
        };
      };
      v_220 = v_208;
      v_221 = v_209;
      v_222 = v_210;
      v_228 = v_226;
    } else {
      ck_3_4_1_0 = ck_3_4;
      if (ck_3_4_1_0) {
        v_227 = true;
        v_211 = true;
        v_212 = true;
        v_213 = true;
      } else {
        if (e) {
          r_St_2_SPIN = true;
        } else {
          r_St_2_SPIN = self->pnr;
        };
        v_227 = r_St_2_SPIN;
        if (e) {
          s_4_St_2_SPIN_1 = true;
        } else {
          s_4_St_2_SPIN_1 = true;
        };
        v_211 = s_4_St_2_SPIN_1;
        if (e) {
          s_4_St_2_SPIN_2 = true;
        } else {
          s_4_St_2_SPIN_2 = false;
        };
        v_212 = s_4_St_2_SPIN_2;
        if (e) {
          s_4_St_2_SPIN_3 = true;
        } else {
          s_4_St_2_SPIN_3 = false;
        };
        v_213 = s_4_St_2_SPIN_3;
      };
      v_220 = v_211;
      v_221 = v_212;
      v_222 = v_213;
      v_228 = v_227;
      if (!(ck_3_4_1_0)) {
        if (s_4_St_2_SPIN_1) {
          s_4_St_2_SPIN_2_1 = s_4_St_2_SPIN_2;
          if (s_4_St_2_SPIN_2_1) {
            s_4_St_2_SPIN_3_1_1 = s_4_St_2_SPIN_3;
          } else {
            s_4_St_2_SPIN_3_1_0 = s_4_St_2_SPIN_3;
          };
        } else {
          s_4_St_2_SPIN_2_0 = s_4_St_2_SPIN_2;
          if (s_4_St_2_SPIN_2_0) {
            s_4_St_2_SPIN_3_0_1 = s_4_St_2_SPIN_3;
          } else {
            s_4_St_2_SPIN_3_0_0 = s_4_St_2_SPIN_3;
          };
        };
      };
    };
    s_4_1 = v_220;
    s_4_2 = v_221;
    s_4_3 = v_222;
    r = v_228;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_4_0_1 = ck_3_4;
      if (ck_3_4_0_1) {
        if (c) {
          r_St_2_STANDBY = true;
        } else {
          r_St_2_STANDBY = self->pnr;
        };
        v_229 = r_St_2_STANDBY;
        if (c) {
          s_4_St_2_STANDBY_1 = false;
        } else {
          s_4_St_2_STANDBY_1 = false;
        };
        v_214 = s_4_St_2_STANDBY_1;
        if (c) {
          s_4_St_2_STANDBY_2 = true;
        } else {
          s_4_St_2_STANDBY_2 = true;
        };
        v_215 = s_4_St_2_STANDBY_2;
        if (c) {
          s_4_St_2_STANDBY_3 = false;
        } else {
          s_4_St_2_STANDBY_3 = true;
        };
        v_216 = s_4_St_2_STANDBY_3;
      } else {
        if (e) {
          r_St_2_WASHING = true;
          s_4_St_2_WASHING_1 = true;
          s_4_St_2_WASHING_2 = true;
          s_4_St_2_WASHING_3 = false;
        } else {
          r_St_2_WASHING = self->pnr;
          s_4_St_2_WASHING_1 = false;
          s_4_St_2_WASHING_2 = true;
          s_4_St_2_WASHING_3 = false;
        };
        v_229 = r_St_2_WASHING;
        v_214 = s_4_St_2_WASHING_1;
        v_215 = s_4_St_2_WASHING_2;
        v_216 = s_4_St_2_WASHING_3;
      };
      v_223 = v_214;
      v_224 = v_215;
      v_225 = v_216;
      v_231 = v_229;
    } else {
      ck_3_4_0_0 = ck_3_4;
      if (ck_3_4_0_0) {
        v_230 = true;
        v_217 = true;
        v_218 = true;
        v_219 = true;
      } else {
        v_28 = !(c);
        v_29 = (e&&v_28);
        if (v_29) {
          v_31 = true;
          v_30_1 = false;
          v_30_2 = true;
          v_30_3 = true;
        } else {
          v_31 = self->pnr;
          v_30_1 = false;
          v_30_2 = false;
          v_30_3 = false;
        };
        v = (e&&c);
        if (v) {
          r_St_2_WF = true;
        } else {
          r_St_2_WF = v_31;
        };
        v_230 = r_St_2_WF;
        if (v) {
          s_4_St_2_WF_1 = false;
        } else {
          s_4_St_2_WF_1 = v_30_1;
        };
        v_217 = s_4_St_2_WF_1;
        if (v) {
          s_4_St_2_WF_2 = true;
        } else {
          s_4_St_2_WF_2 = v_30_2;
        };
        v_218 = s_4_St_2_WF_2;
        if (v) {
          s_4_St_2_WF_3 = false;
        } else {
          s_4_St_2_WF_3 = v_30_3;
        };
        v_219 = s_4_St_2_WF_3;
        if (v_30_1) {
          v_30_2_1 = v_30_2;
          if (v_30_2_1) {
            v_30_3_1_1 = v_30_3;
          } else {
            v_30_3_1_0 = v_30_3;
          };
        } else {
          v_30_2_0 = v_30_2;
          if (v_30_2_0) {
            v_30_3_0_1 = v_30_3;
          } else {
            v_30_3_0_0 = v_30_3;
          };
        };
        if (s_4_St_2_WF_1) {
          s_4_St_2_WF_2_1 = s_4_St_2_WF_2;
          if (s_4_St_2_WF_2_1) {
            s_4_St_2_WF_3_1_1 = s_4_St_2_WF_3;
          } else {
            s_4_St_2_WF_3_1_0 = s_4_St_2_WF_3;
          };
        } else {
          s_4_St_2_WF_2_0 = s_4_St_2_WF_2;
          if (s_4_St_2_WF_2_0) {
            s_4_St_2_WF_3_0_1 = s_4_St_2_WF_3;
          } else {
            s_4_St_2_WF_3_0_0 = s_4_St_2_WF_3;
          };
        };
      };
      v_223 = v_217;
      v_224 = v_218;
      v_225 = v_219;
      v_231 = v_230;
    };
    s_4_1 = v_223;
    s_4_2 = v_224;
    s_4_3 = v_225;
    r = v_231;
  };
  ck_3_1 = s_4_1;
  ck_3_2 = s_4_2;
  ck_3_3 = s_4_3;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      ck_3_3_1_1 = ck_3_3;
      if (ck_3_3_1_1) {
        power_St_2_OFF = 0;
        nr_St_2_OFF = false;
        ns_St_2_OFF_1 = true;
        ns_St_2_OFF_2 = true;
        ns_St_2_OFF_3 = true;
        v_175 = power_St_2_OFF;
        v_199 = nr_St_2_OFF;
        v_181 = ns_St_2_OFF_1;
        v_182 = ns_St_2_OFF_2;
        v_183 = ns_St_2_OFF_3;
        if (ns_St_2_OFF_1) {
          ns_St_2_OFF_2_1 = ns_St_2_OFF_2;
          if (ns_St_2_OFF_2_1) {
            ns_St_2_OFF_3_1_1 = ns_St_2_OFF_3;
          } else {
            ns_St_2_OFF_3_1_0 = ns_St_2_OFF_3;
          };
        } else {
          ns_St_2_OFF_2_0 = ns_St_2_OFF_2;
          if (ns_St_2_OFF_2_0) {
            ns_St_2_OFF_3_0_1 = ns_St_2_OFF_3;
          } else {
            ns_St_2_OFF_3_0_0 = ns_St_2_OFF_3;
          };
        };
      } else {
        power_St_2_RINSE = 200;
        v_175 = power_St_2_RINSE;
        nr_St_2_RINSE = false;
        v_199 = nr_St_2_RINSE;
        ns_St_2_RINSE_1 = true;
        v_181 = ns_St_2_RINSE_1;
        ns_St_2_RINSE_2 = true;
        v_182 = ns_St_2_RINSE_2;
        ns_St_2_RINSE_3 = false;
        v_183 = ns_St_2_RINSE_3;
        if (ns_St_2_RINSE_1) {
          ns_St_2_RINSE_2_1 = ns_St_2_RINSE_2;
          if (ns_St_2_RINSE_2_1) {
            ns_St_2_RINSE_3_1_1 = ns_St_2_RINSE_3;
          } else {
            ns_St_2_RINSE_3_1_0 = ns_St_2_RINSE_3;
          };
        } else {
          ns_St_2_RINSE_2_0 = ns_St_2_RINSE_2;
          if (ns_St_2_RINSE_2_0) {
            ns_St_2_RINSE_3_0_1 = ns_St_2_RINSE_3;
          } else {
            ns_St_2_RINSE_3_0_0 = ns_St_2_RINSE_3;
          };
        };
      };
      v_177 = v_175;
      v_193 = v_181;
      v_194 = v_182;
      v_195 = v_183;
      v_201 = v_199;
    } else {
      ck_3_3_1_0 = ck_3_3;
      if (ck_3_3_1_0) {
        v_176 = 0;
        v_200 = true;
        v_184 = true;
        v_185 = true;
        v_186 = true;
      } else {
        power_St_2_SPIN = 800;
        v_176 = power_St_2_SPIN;
        nr_St_2_SPIN = false;
        v_200 = nr_St_2_SPIN;
        ns_St_2_SPIN_1 = true;
        v_184 = ns_St_2_SPIN_1;
        ns_St_2_SPIN_2 = false;
        v_185 = ns_St_2_SPIN_2;
        ns_St_2_SPIN_3 = false;
        v_186 = ns_St_2_SPIN_3;
      };
      v_177 = v_176;
      v_193 = v_184;
      v_194 = v_185;
      v_195 = v_186;
      v_201 = v_200;
      if (!(ck_3_3_1_0)) {
        if (ns_St_2_SPIN_1) {
          ns_St_2_SPIN_2_1 = ns_St_2_SPIN_2;
          if (ns_St_2_SPIN_2_1) {
            ns_St_2_SPIN_3_1_1 = ns_St_2_SPIN_3;
          } else {
            ns_St_2_SPIN_3_1_0 = ns_St_2_SPIN_3;
          };
        } else {
          ns_St_2_SPIN_2_0 = ns_St_2_SPIN_2;
          if (ns_St_2_SPIN_2_0) {
            ns_St_2_SPIN_3_0_1 = ns_St_2_SPIN_3;
          } else {
            ns_St_2_SPIN_3_0_0 = ns_St_2_SPIN_3;
          };
        };
      };
    };
    _out->power = v_177;
    ns_1 = v_193;
    ns_2 = v_194;
    ns_3 = v_195;
    nr = v_201;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      ck_3_3_0_1 = ck_3_3;
      if (ck_3_3_0_1) {
        power_St_2_STANDBY = 0;
        v_178 = power_St_2_STANDBY;
        nr_St_2_STANDBY = false;
        v_202 = nr_St_2_STANDBY;
        ns_St_2_STANDBY_1 = false;
        v_187 = ns_St_2_STANDBY_1;
        ns_St_2_STANDBY_2 = true;
        v_188 = ns_St_2_STANDBY_2;
        ns_St_2_STANDBY_3 = true;
        v_189 = ns_St_2_STANDBY_3;
      } else {
        power_St_2_WASHING = 250;
        nr_St_2_WASHING = false;
        ns_St_2_WASHING_1 = false;
        ns_St_2_WASHING_2 = true;
        ns_St_2_WASHING_3 = false;
        v_178 = power_St_2_WASHING;
        v_202 = nr_St_2_WASHING;
        v_187 = ns_St_2_WASHING_1;
        v_188 = ns_St_2_WASHING_2;
        v_189 = ns_St_2_WASHING_3;
      };
      v_180 = v_178;
      v_196 = v_187;
      v_197 = v_188;
      v_198 = v_189;
      v_204 = v_202;
    } else {
      ck_3_3_0_0 = ck_3_3;
      if (ck_3_3_0_0) {
        v_179 = 0;
        v_203 = true;
        v_190 = true;
        v_191 = true;
        v_192 = true;
      } else {
        power_St_2_WF = 15;
        v_179 = power_St_2_WF;
        nr_St_2_WF = false;
        v_203 = nr_St_2_WF;
        ns_St_2_WF_1 = false;
        v_190 = ns_St_2_WF_1;
        ns_St_2_WF_2 = false;
        v_191 = ns_St_2_WF_2;
        ns_St_2_WF_3 = false;
        v_192 = ns_St_2_WF_3;
        if (ns_St_2_WF_1) {
          ns_St_2_WF_2_1 = ns_St_2_WF_2;
          if (ns_St_2_WF_2_1) {
            ns_St_2_WF_3_1_1 = ns_St_2_WF_3;
          } else {
            ns_St_2_WF_3_1_0 = ns_St_2_WF_3;
          };
        } else {
          ns_St_2_WF_2_0 = ns_St_2_WF_2;
          if (ns_St_2_WF_2_0) {
            ns_St_2_WF_3_0_1 = ns_St_2_WF_3;
          } else {
            ns_St_2_WF_3_0_0 = ns_St_2_WF_3;
          };
        };
      };
      v_180 = v_179;
      v_196 = v_190;
      v_197 = v_191;
      v_198 = v_192;
      v_204 = v_203;
    };
    _out->power = v_180;
    ns_1 = v_196;
    ns_2 = v_197;
    ns_3 = v_198;
    nr = v_204;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_3_1)) {
    if (ck_3_2_0) {
      if (ck_3_3_0_1) {
        if (ns_St_2_STANDBY_1) {
          ns_St_2_STANDBY_2_1 = ns_St_2_STANDBY_2;
          if (ns_St_2_STANDBY_2_1) {
            ns_St_2_STANDBY_3_1_1 = ns_St_2_STANDBY_3;
          } else {
            ns_St_2_STANDBY_3_1_0 = ns_St_2_STANDBY_3;
          };
        } else {
          ns_St_2_STANDBY_2_0 = ns_St_2_STANDBY_2;
          if (ns_St_2_STANDBY_2_0) {
            ns_St_2_STANDBY_3_0_1 = ns_St_2_STANDBY_3;
          } else {
            ns_St_2_STANDBY_3_0_0 = ns_St_2_STANDBY_3;
          };
        };
      } else {
        if (ns_St_2_WASHING_1) {
          ns_St_2_WASHING_2_1 = ns_St_2_WASHING_2;
          if (ns_St_2_WASHING_2_1) {
            ns_St_2_WASHING_3_1_1 = ns_St_2_WASHING_3;
          } else {
            ns_St_2_WASHING_3_1_0 = ns_St_2_WASHING_3;
          };
        } else {
          ns_St_2_WASHING_2_0 = ns_St_2_WASHING_2;
          if (ns_St_2_WASHING_2_0) {
            ns_St_2_WASHING_3_0_1 = ns_St_2_WASHING_3;
          } else {
            ns_St_2_WASHING_3_0_0 = ns_St_2_WASHING_3;
          };
        };
      };
    };
  };
  if (s_4_1) {
    s_4_2_1 = s_4_2;
    if (s_4_2_1) {
      s_4_3_1_1 = s_4_3;
    } else {
      s_4_3_1_0 = s_4_3;
    };
  } else {
    s_4_2_0 = s_4_2;
    if (s_4_2_0) {
      s_4_3_0_1 = s_4_3;
    } else {
      s_4_3_0_0 = s_4_3;
    };
  };
  if (!(ck_1)) {
    if (ck_2_0) {
      if (ck_3_4_0_1) {
        if (s_4_St_2_STANDBY_1) {
          s_4_St_2_STANDBY_2_1 = s_4_St_2_STANDBY_2;
          if (s_4_St_2_STANDBY_2_1) {
            s_4_St_2_STANDBY_3_1_1 = s_4_St_2_STANDBY_3;
          } else {
            s_4_St_2_STANDBY_3_1_0 = s_4_St_2_STANDBY_3;
          };
        } else {
          s_4_St_2_STANDBY_2_0 = s_4_St_2_STANDBY_2;
          if (s_4_St_2_STANDBY_2_0) {
            s_4_St_2_STANDBY_3_0_1 = s_4_St_2_STANDBY_3;
          } else {
            s_4_St_2_STANDBY_3_0_0 = s_4_St_2_STANDBY_3;
          };
        };
      } else {
        if (s_4_St_2_WASHING_1) {
          s_4_St_2_WASHING_2_1 = s_4_St_2_WASHING_2;
          if (s_4_St_2_WASHING_2_1) {
            s_4_St_2_WASHING_3_1_1 = s_4_St_2_WASHING_3;
          } else {
            s_4_St_2_WASHING_3_1_0 = s_4_St_2_WASHING_3;
          };
        } else {
          s_4_St_2_WASHING_2_0 = s_4_St_2_WASHING_2;
          if (s_4_St_2_WASHING_2_0) {
            s_4_St_2_WASHING_3_0_1 = s_4_St_2_WASHING_3;
          } else {
            s_4_St_2_WASHING_3_0_0 = s_4_St_2_WASHING_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_205 = ns_1;
  self->v_206 = ns_2;
  self->v_207 = ns_3;;
}

void Pratica05__oven_reset(Pratica05__oven_mem* self) {
  self->pnr = false;
  self->v_257 = true;
  self->v_258 = false;
  self->v_259 = false;
}

void Pratica05__oven_step(int finish, int start, int cold, int temp_ok,
                          int c, Pratica05__oven_out* _out,
                          Pratica05__oven_mem* self) {
  
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
  int ns_St_3_REHEAT_2_0;
  int ns_St_3_REHEAT_3_0_0;
  int ns_St_3_REHEAT_3_0_1;
  int ns_St_3_REHEAT_2_1;
  int ns_St_3_REHEAT_3_1_0;
  int ns_St_3_REHEAT_3_1_1;
  int ns_St_3_MAINTAIN_2_0;
  int ns_St_3_MAINTAIN_3_0_0;
  int ns_St_3_MAINTAIN_3_0_1;
  int ns_St_3_MAINTAIN_2_1;
  int ns_St_3_MAINTAIN_3_1_0;
  int ns_St_3_MAINTAIN_3_1_1;
  int ns_St_3_STANDBY_2_0;
  int ns_St_3_STANDBY_3_0_0;
  int ns_St_3_STANDBY_3_0_1;
  int ns_St_3_STANDBY_2_1;
  int ns_St_3_STANDBY_3_1_0;
  int ns_St_3_STANDBY_3_1_1;
  int ns_St_3_HEAT_2_0;
  int ns_St_3_HEAT_3_0_0;
  int ns_St_3_HEAT_3_0_1;
  int ns_St_3_HEAT_2_1;
  int ns_St_3_HEAT_3_1_0;
  int ns_St_3_HEAT_3_1_1;
  int ns_St_3_OFF_2_0;
  int ns_St_3_OFF_3_0_0;
  int ns_St_3_OFF_3_0_1;
  int ns_St_3_OFF_2_1;
  int ns_St_3_OFF_3_1_0;
  int ns_St_3_OFF_3_1_1;
  int ck_4_2_0;
  int ck_4_3_0_0;
  int ck_4_3_0_1;
  int ck_4_2_1;
  int ck_4_3_1_0;
  int ck_4_3_1_1;
  int nr_St_3_REHEAT;
  int ns_St_3_REHEAT_3;
  int ns_St_3_REHEAT_2;
  int ns_St_3_REHEAT_1;
  int power_St_3_REHEAT;
  int nr_St_3_MAINTAIN;
  int ns_St_3_MAINTAIN_3;
  int ns_St_3_MAINTAIN_2;
  int ns_St_3_MAINTAIN_1;
  int power_St_3_MAINTAIN;
  int nr_St_3_STANDBY;
  int ns_St_3_STANDBY_3;
  int ns_St_3_STANDBY_2;
  int ns_St_3_STANDBY_1;
  int power_St_3_STANDBY;
  int nr_St_3_HEAT;
  int ns_St_3_HEAT_3;
  int ns_St_3_HEAT_2;
  int ns_St_3_HEAT_1;
  int power_St_3_HEAT;
  int nr_St_3_OFF;
  int ns_St_3_OFF_3;
  int ns_St_3_OFF_2;
  int ns_St_3_OFF_1;
  int power_St_3_OFF;
  int ck_4_3;
  int ck_4_2;
  int ck_4_1;
  int v_41_2_0;
  int v_41_3_0_0;
  int v_41_3_0_1;
  int v_41_2_1;
  int v_41_3_1_0;
  int v_41_3_1_1;
  int v_42;
  int v_41_3;
  int v_41_2;
  int v_41_1;
  int v_40;
  int v_39;
  int v_38;
  int v_36_2_0;
  int v_36_3_0_0;
  int v_36_3_0_1;
  int v_36_2_1;
  int v_36_3_1_0;
  int v_36_3_1_1;
  int v_37;
  int v_36_3;
  int v_36_2;
  int v_36_1;
  int v_34_2_0;
  int v_34_3_0_0;
  int v_34_3_0_1;
  int v_34_2_1;
  int v_34_3_1_0;
  int v_34_3_1_1;
  int v_35;
  int v_34_3;
  int v_34_2;
  int v_34_1;
  int v_33;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_32;
  int v_3;
  int v_2;
  int v_1;
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
  int s_St_3_REHEAT_2_0;
  int s_St_3_REHEAT_3_0_0;
  int s_St_3_REHEAT_3_0_1;
  int s_St_3_REHEAT_2_1;
  int s_St_3_REHEAT_3_1_0;
  int s_St_3_REHEAT_3_1_1;
  int s_St_3_MAINTAIN_2_0;
  int s_St_3_MAINTAIN_3_0_0;
  int s_St_3_MAINTAIN_3_0_1;
  int s_St_3_MAINTAIN_2_1;
  int s_St_3_MAINTAIN_3_1_0;
  int s_St_3_MAINTAIN_3_1_1;
  int s_St_3_STANDBY_2_0;
  int s_St_3_STANDBY_3_0_0;
  int s_St_3_STANDBY_3_0_1;
  int s_St_3_STANDBY_2_1;
  int s_St_3_STANDBY_3_1_0;
  int s_St_3_STANDBY_3_1_1;
  int s_St_3_HEAT_2_0;
  int s_St_3_HEAT_3_0_0;
  int s_St_3_HEAT_3_0_1;
  int s_St_3_HEAT_2_1;
  int s_St_3_HEAT_3_1_0;
  int s_St_3_HEAT_3_1_1;
  int s_St_3_OFF_2_0;
  int s_St_3_OFF_3_0_0;
  int s_St_3_OFF_3_0_1;
  int s_St_3_OFF_2_1;
  int s_St_3_OFF_3_1_0;
  int s_St_3_OFF_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_3_REHEAT;
  int s_St_3_REHEAT_3;
  int s_St_3_REHEAT_2;
  int s_St_3_REHEAT_1;
  int r_St_3_MAINTAIN;
  int s_St_3_MAINTAIN_3;
  int s_St_3_MAINTAIN_2;
  int s_St_3_MAINTAIN_1;
  int r_St_3_STANDBY;
  int s_St_3_STANDBY_3;
  int s_St_3_STANDBY_2;
  int s_St_3_STANDBY_1;
  int r_St_3_HEAT;
  int s_St_3_HEAT_3;
  int s_St_3_HEAT_2;
  int s_St_3_HEAT_1;
  int r_St_3_OFF;
  int s_St_3_OFF_3;
  int s_St_3_OFF_2;
  int s_St_3_OFF_1;
  int ck_3;
  int ck_2;
  int ck_1;
  int s_2_0;
  int s_3_0_0;
  int s_3_0_1;
  int s_2_1;
  int s_3_1_0;
  int s_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_3;
  int s_2;
  int s_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_257;
  ck_2 = self->v_258;
  ck_3 = self->v_259;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (temp_ok) {
          v_37 = true;
        } else {
          v_37 = self->pnr;
        };
        if (finish) {
          r_St_3_HEAT = true;
        } else {
          r_St_3_HEAT = v_37;
        };
        if (temp_ok) {
          v_36_1 = true;
        } else {
          v_36_1 = true;
        };
        if (finish) {
          s_St_3_HEAT_1 = true;
        } else {
          s_St_3_HEAT_1 = v_36_1;
        };
        if (temp_ok) {
          v_36_2 = true;
        } else {
          v_36_2 = true;
        };
        if (finish) {
          s_St_3_HEAT_2 = false;
        } else {
          s_St_3_HEAT_2 = v_36_2;
        };
        if (temp_ok) {
          v_36_3 = false;
        } else {
          v_36_3 = true;
        };
        if (finish) {
          s_St_3_HEAT_3 = false;
        } else {
          s_St_3_HEAT_3 = v_36_3;
        };
        v_275 = r_St_3_HEAT;
        v_260 = s_St_3_HEAT_1;
        v_261 = s_St_3_HEAT_2;
        v_262 = s_St_3_HEAT_3;
      } else {
        if (finish) {
          v_35 = true;
          v_34_1 = true;
          v_34_2 = false;
          v_34_3 = false;
        } else {
          v_35 = self->pnr;
          v_34_1 = true;
          v_34_2 = true;
          v_34_3 = false;
        };
        v_33 = (cold&&c);
        if (v_33) {
          r_St_3_MAINTAIN = true;
        } else {
          r_St_3_MAINTAIN = v_35;
        };
        v_275 = r_St_3_MAINTAIN;
        if (v_33) {
          s_St_3_MAINTAIN_1 = false;
        } else {
          s_St_3_MAINTAIN_1 = v_34_1;
        };
        v_260 = s_St_3_MAINTAIN_1;
        if (v_33) {
          s_St_3_MAINTAIN_2 = false;
        } else {
          s_St_3_MAINTAIN_2 = v_34_2;
        };
        v_261 = s_St_3_MAINTAIN_2;
        if (v_33) {
          s_St_3_MAINTAIN_3 = true;
        } else {
          s_St_3_MAINTAIN_3 = v_34_3;
        };
        v_262 = s_St_3_MAINTAIN_3;
      };
      v_269 = v_260;
      v_270 = v_261;
      v_271 = v_262;
      v_277 = v_275;
      if (ck_3_1_1) {
        if (v_36_1) {
          v_36_2_1 = v_36_2;
          if (v_36_2_1) {
            v_36_3_1_1 = v_36_3;
          } else {
            v_36_3_1_0 = v_36_3;
          };
        } else {
          v_36_2_0 = v_36_2;
          if (v_36_2_0) {
            v_36_3_0_1 = v_36_3;
          } else {
            v_36_3_0_0 = v_36_3;
          };
        };
        if (s_St_3_HEAT_1) {
          s_St_3_HEAT_2_1 = s_St_3_HEAT_2;
          if (s_St_3_HEAT_2_1) {
            s_St_3_HEAT_3_1_1 = s_St_3_HEAT_3;
          } else {
            s_St_3_HEAT_3_1_0 = s_St_3_HEAT_3;
          };
        } else {
          s_St_3_HEAT_2_0 = s_St_3_HEAT_2;
          if (s_St_3_HEAT_2_0) {
            s_St_3_HEAT_3_0_1 = s_St_3_HEAT_3;
          } else {
            s_St_3_HEAT_3_0_0 = s_St_3_HEAT_3;
          };
        };
      } else {
        if (v_34_1) {
          v_34_2_1 = v_34_2;
          if (v_34_2_1) {
            v_34_3_1_1 = v_34_3;
          } else {
            v_34_3_1_0 = v_34_3;
          };
        } else {
          v_34_2_0 = v_34_2;
          if (v_34_2_0) {
            v_34_3_0_1 = v_34_3;
          } else {
            v_34_3_0_0 = v_34_3;
          };
        };
        if (s_St_3_MAINTAIN_1) {
          s_St_3_MAINTAIN_2_1 = s_St_3_MAINTAIN_2;
          if (s_St_3_MAINTAIN_2_1) {
            s_St_3_MAINTAIN_3_1_1 = s_St_3_MAINTAIN_3;
          } else {
            s_St_3_MAINTAIN_3_1_0 = s_St_3_MAINTAIN_3;
          };
        } else {
          s_St_3_MAINTAIN_2_0 = s_St_3_MAINTAIN_2;
          if (s_St_3_MAINTAIN_2_0) {
            s_St_3_MAINTAIN_3_0_1 = s_St_3_MAINTAIN_3;
          } else {
            s_St_3_MAINTAIN_3_0_0 = s_St_3_MAINTAIN_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_276 = true;
        v_263 = true;
        v_264 = true;
        v_265 = true;
      } else {
        v_40 = (start&&c);
        if (v_40) {
          v_42 = true;
          v_41_1 = true;
          v_41_2 = true;
          v_41_3 = true;
        } else {
          v_42 = self->pnr;
          v_41_1 = true;
          v_41_2 = false;
          v_41_3 = false;
        };
        v_38 = !(c);
        v_39 = (start&&v_38);
        if (v_39) {
          r_St_3_OFF = true;
        } else {
          r_St_3_OFF = v_42;
        };
        v_276 = r_St_3_OFF;
        if (v_39) {
          s_St_3_OFF_1 = false;
        } else {
          s_St_3_OFF_1 = v_41_1;
        };
        v_263 = s_St_3_OFF_1;
        if (v_39) {
          s_St_3_OFF_2 = false;
        } else {
          s_St_3_OFF_2 = v_41_2;
        };
        v_264 = s_St_3_OFF_2;
        if (v_39) {
          s_St_3_OFF_3 = false;
        } else {
          s_St_3_OFF_3 = v_41_3;
        };
        v_265 = s_St_3_OFF_3;
        if (v_41_1) {
          v_41_2_1 = v_41_2;
          if (v_41_2_1) {
            v_41_3_1_1 = v_41_3;
          } else {
            v_41_3_1_0 = v_41_3;
          };
        } else {
          v_41_2_0 = v_41_2;
          if (v_41_2_0) {
            v_41_3_0_1 = v_41_3;
          } else {
            v_41_3_0_0 = v_41_3;
          };
        };
        if (s_St_3_OFF_1) {
          s_St_3_OFF_2_1 = s_St_3_OFF_2;
          if (s_St_3_OFF_2_1) {
            s_St_3_OFF_3_1_1 = s_St_3_OFF_3;
          } else {
            s_St_3_OFF_3_1_0 = s_St_3_OFF_3;
          };
        } else {
          s_St_3_OFF_2_0 = s_St_3_OFF_2;
          if (s_St_3_OFF_2_0) {
            s_St_3_OFF_3_0_1 = s_St_3_OFF_3;
          } else {
            s_St_3_OFF_3_0_0 = s_St_3_OFF_3;
          };
        };
      };
      v_269 = v_263;
      v_270 = v_264;
      v_271 = v_265;
      v_277 = v_276;
    };
    s_1 = v_269;
    s_2 = v_270;
    s_3 = v_271;
    r = v_277;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_272 = true;
      v_273 = true;
      v_274 = true;
      v_279 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (finish) {
          v_32 = true;
        } else {
          v_32 = self->pnr;
        };
        if (temp_ok) {
          r_St_3_REHEAT = true;
        } else {
          r_St_3_REHEAT = v_32;
        };
        v_278 = r_St_3_REHEAT;
        if (finish) {
          v_1 = true;
        } else {
          v_1 = false;
        };
        if (temp_ok) {
          s_St_3_REHEAT_1 = true;
        } else {
          s_St_3_REHEAT_1 = v_1;
        };
        v_266 = s_St_3_REHEAT_1;
        if (finish) {
          v_2 = false;
        } else {
          v_2 = false;
        };
        if (temp_ok) {
          s_St_3_REHEAT_2 = true;
        } else {
          s_St_3_REHEAT_2 = v_2;
        };
        v_267 = s_St_3_REHEAT_2;
        if (finish) {
          v_3 = false;
        } else {
          v_3 = true;
        };
        if (temp_ok) {
          s_St_3_REHEAT_3 = false;
        } else {
          s_St_3_REHEAT_3 = v_3;
        };
        v_268 = s_St_3_REHEAT_3;
        if (v_1) {
          v_2_1 = v_2;
          if (v_2_1) {
            v_3_1_1 = v_3;
          } else {
            v_3_1_0 = v_3;
          };
        } else {
          v_2_0 = v_2;
          if (v_2_0) {
            v_3_0_1 = v_3;
          } else {
            v_3_0_0 = v_3;
          };
        };
      } else {
        if (c) {
          r_St_3_STANDBY = true;
          s_St_3_STANDBY_1 = true;
          s_St_3_STANDBY_2 = true;
          s_St_3_STANDBY_3 = true;
        } else {
          r_St_3_STANDBY = self->pnr;
          s_St_3_STANDBY_1 = false;
          s_St_3_STANDBY_2 = false;
          s_St_3_STANDBY_3 = false;
        };
        v_278 = r_St_3_STANDBY;
        v_266 = s_St_3_STANDBY_1;
        v_267 = s_St_3_STANDBY_2;
        v_268 = s_St_3_STANDBY_3;
      };
      v_272 = v_266;
      v_273 = v_267;
      v_274 = v_268;
      v_279 = v_278;
    };
    s_1 = v_272;
    s_2 = v_273;
    s_3 = v_274;
    r = v_279;
  };
  ck_4_1 = s_1;
  ck_4_2 = s_2;
  ck_4_3 = s_3;
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      ck_4_3_1_1 = ck_4_3;
      if (ck_4_3_1_1) {
        power_St_3_HEAT = 1500;
        nr_St_3_HEAT = false;
        ns_St_3_HEAT_1 = true;
        ns_St_3_HEAT_2 = true;
        ns_St_3_HEAT_3 = true;
        v_232 = power_St_3_HEAT;
        v_252 = nr_St_3_HEAT;
        v_237 = ns_St_3_HEAT_1;
        v_238 = ns_St_3_HEAT_2;
        v_239 = ns_St_3_HEAT_3;
      } else {
        power_St_3_MAINTAIN = 300;
        v_232 = power_St_3_MAINTAIN;
        nr_St_3_MAINTAIN = false;
        v_252 = nr_St_3_MAINTAIN;
        ns_St_3_MAINTAIN_1 = true;
        v_237 = ns_St_3_MAINTAIN_1;
        ns_St_3_MAINTAIN_2 = true;
        v_238 = ns_St_3_MAINTAIN_2;
        ns_St_3_MAINTAIN_3 = false;
        v_239 = ns_St_3_MAINTAIN_3;
      };
      v_234 = v_232;
      v_246 = v_237;
      v_247 = v_238;
      v_248 = v_239;
      v_254 = v_252;
      if (ck_4_3_1_1) {
        if (ns_St_3_HEAT_1) {
          ns_St_3_HEAT_2_1 = ns_St_3_HEAT_2;
          if (ns_St_3_HEAT_2_1) {
            ns_St_3_HEAT_3_1_1 = ns_St_3_HEAT_3;
          } else {
            ns_St_3_HEAT_3_1_0 = ns_St_3_HEAT_3;
          };
        } else {
          ns_St_3_HEAT_2_0 = ns_St_3_HEAT_2;
          if (ns_St_3_HEAT_2_0) {
            ns_St_3_HEAT_3_0_1 = ns_St_3_HEAT_3;
          } else {
            ns_St_3_HEAT_3_0_0 = ns_St_3_HEAT_3;
          };
        };
      } else {
        if (ns_St_3_MAINTAIN_1) {
          ns_St_3_MAINTAIN_2_1 = ns_St_3_MAINTAIN_2;
          if (ns_St_3_MAINTAIN_2_1) {
            ns_St_3_MAINTAIN_3_1_1 = ns_St_3_MAINTAIN_3;
          } else {
            ns_St_3_MAINTAIN_3_1_0 = ns_St_3_MAINTAIN_3;
          };
        } else {
          ns_St_3_MAINTAIN_2_0 = ns_St_3_MAINTAIN_2;
          if (ns_St_3_MAINTAIN_2_0) {
            ns_St_3_MAINTAIN_3_0_1 = ns_St_3_MAINTAIN_3;
          } else {
            ns_St_3_MAINTAIN_3_0_0 = ns_St_3_MAINTAIN_3;
          };
        };
      };
    } else {
      ck_4_3_1_0 = ck_4_3;
      if (ck_4_3_1_0) {
        v_233 = 0;
        v_253 = true;
        v_240 = true;
        v_241 = true;
        v_242 = true;
      } else {
        power_St_3_OFF = 0;
        v_233 = power_St_3_OFF;
        nr_St_3_OFF = false;
        v_253 = nr_St_3_OFF;
        ns_St_3_OFF_1 = true;
        v_240 = ns_St_3_OFF_1;
        ns_St_3_OFF_2 = false;
        v_241 = ns_St_3_OFF_2;
        ns_St_3_OFF_3 = false;
        v_242 = ns_St_3_OFF_3;
        if (ns_St_3_OFF_1) {
          ns_St_3_OFF_2_1 = ns_St_3_OFF_2;
          if (ns_St_3_OFF_2_1) {
            ns_St_3_OFF_3_1_1 = ns_St_3_OFF_3;
          } else {
            ns_St_3_OFF_3_1_0 = ns_St_3_OFF_3;
          };
        } else {
          ns_St_3_OFF_2_0 = ns_St_3_OFF_2;
          if (ns_St_3_OFF_2_0) {
            ns_St_3_OFF_3_0_1 = ns_St_3_OFF_3;
          } else {
            ns_St_3_OFF_3_0_0 = ns_St_3_OFF_3;
          };
        };
      };
      v_234 = v_233;
      v_246 = v_240;
      v_247 = v_241;
      v_248 = v_242;
      v_254 = v_253;
    };
    _out->power = v_234;
    ns_1 = v_246;
    ns_2 = v_247;
    ns_3 = v_248;
    nr = v_254;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      ck_4_3_0_1 = ck_4_3;
      v_236 = 0;
      v_249 = true;
      v_250 = true;
      v_251 = true;
      v_256 = true;
    } else {
      ck_4_3_0_0 = ck_4_3;
      if (ck_4_3_0_0) {
        power_St_3_REHEAT = 1000;
        v_235 = power_St_3_REHEAT;
        nr_St_3_REHEAT = false;
        v_255 = nr_St_3_REHEAT;
        ns_St_3_REHEAT_1 = false;
        v_243 = ns_St_3_REHEAT_1;
        ns_St_3_REHEAT_2 = false;
        v_244 = ns_St_3_REHEAT_2;
        ns_St_3_REHEAT_3 = true;
        v_245 = ns_St_3_REHEAT_3;
      } else {
        power_St_3_STANDBY = 0;
        nr_St_3_STANDBY = false;
        ns_St_3_STANDBY_1 = false;
        ns_St_3_STANDBY_2 = false;
        ns_St_3_STANDBY_3 = false;
        v_235 = power_St_3_STANDBY;
        v_255 = nr_St_3_STANDBY;
        v_243 = ns_St_3_STANDBY_1;
        v_244 = ns_St_3_STANDBY_2;
        v_245 = ns_St_3_STANDBY_3;
      };
      v_236 = v_235;
      v_249 = v_243;
      v_250 = v_244;
      v_251 = v_245;
      v_256 = v_255;
    };
    _out->power = v_236;
    ns_1 = v_249;
    ns_2 = v_250;
    ns_3 = v_251;
    nr = v_256;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_4_1)) {
    if (!(ck_4_2_0)) {
      if (ck_4_3_0_0) {
        if (ns_St_3_REHEAT_1) {
          ns_St_3_REHEAT_2_1 = ns_St_3_REHEAT_2;
          if (ns_St_3_REHEAT_2_1) {
            ns_St_3_REHEAT_3_1_1 = ns_St_3_REHEAT_3;
          } else {
            ns_St_3_REHEAT_3_1_0 = ns_St_3_REHEAT_3;
          };
        } else {
          ns_St_3_REHEAT_2_0 = ns_St_3_REHEAT_2;
          if (ns_St_3_REHEAT_2_0) {
            ns_St_3_REHEAT_3_0_1 = ns_St_3_REHEAT_3;
          } else {
            ns_St_3_REHEAT_3_0_0 = ns_St_3_REHEAT_3;
          };
        };
      } else {
        if (ns_St_3_STANDBY_1) {
          ns_St_3_STANDBY_2_1 = ns_St_3_STANDBY_2;
          if (ns_St_3_STANDBY_2_1) {
            ns_St_3_STANDBY_3_1_1 = ns_St_3_STANDBY_3;
          } else {
            ns_St_3_STANDBY_3_1_0 = ns_St_3_STANDBY_3;
          };
        } else {
          ns_St_3_STANDBY_2_0 = ns_St_3_STANDBY_2;
          if (ns_St_3_STANDBY_2_0) {
            ns_St_3_STANDBY_3_0_1 = ns_St_3_STANDBY_3;
          } else {
            ns_St_3_STANDBY_3_0_0 = ns_St_3_STANDBY_3;
          };
        };
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
    if (s_2_1) {
      s_3_1_1 = s_3;
    } else {
      s_3_1_0 = s_3;
    };
  } else {
    s_2_0 = s_2;
    if (s_2_0) {
      s_3_0_1 = s_3;
    } else {
      s_3_0_0 = s_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        if (s_St_3_REHEAT_1) {
          s_St_3_REHEAT_2_1 = s_St_3_REHEAT_2;
          if (s_St_3_REHEAT_2_1) {
            s_St_3_REHEAT_3_1_1 = s_St_3_REHEAT_3;
          } else {
            s_St_3_REHEAT_3_1_0 = s_St_3_REHEAT_3;
          };
        } else {
          s_St_3_REHEAT_2_0 = s_St_3_REHEAT_2;
          if (s_St_3_REHEAT_2_0) {
            s_St_3_REHEAT_3_0_1 = s_St_3_REHEAT_3;
          } else {
            s_St_3_REHEAT_3_0_0 = s_St_3_REHEAT_3;
          };
        };
      } else {
        if (s_St_3_STANDBY_1) {
          s_St_3_STANDBY_2_1 = s_St_3_STANDBY_2;
          if (s_St_3_STANDBY_2_1) {
            s_St_3_STANDBY_3_1_1 = s_St_3_STANDBY_3;
          } else {
            s_St_3_STANDBY_3_1_0 = s_St_3_STANDBY_3;
          };
        } else {
          s_St_3_STANDBY_2_0 = s_St_3_STANDBY_2;
          if (s_St_3_STANDBY_2_0) {
            s_St_3_STANDBY_3_0_1 = s_St_3_STANDBY_3;
          } else {
            s_St_3_STANDBY_3_0_0 = s_St_3_STANDBY_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_257 = ns_1;
  self->v_258 = ns_2;
  self->v_259 = ns_3;;
}

void Pratica05__room_reset(Pratica05__room_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Pratica05__room_step(int precense, Pratica05__room_out* _out,
                          Pratica05__room_mem* self) {
  
  int nr_St_4_Ocupied;
  int ns_St_4_Ocupied_1;
  int room_oc_St_4_Ocupied;
  int nr_St_4_Empty;
  int ns_St_4_Empty_1;
  int room_oc_St_4_Empty;
  int ck_5_1;
  int v;
  int r_St_4_Ocupied;
  int s_St_4_Ocupied_1;
  int r_St_4_Empty;
  int s_St_4_Empty_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (precense) {
      r_St_4_Empty = true;
      s_St_4_Empty_1 = false;
    } else {
      r_St_4_Empty = self->pnr;
      s_St_4_Empty_1 = true;
    };
    r = r_St_4_Empty;
    s_1 = s_St_4_Empty_1;
  } else {
    v = !(precense);
    if (v) {
      r_St_4_Ocupied = true;
    } else {
      r_St_4_Ocupied = self->pnr;
    };
    r = r_St_4_Ocupied;
    if (v) {
      s_St_4_Ocupied_1 = true;
    } else {
      s_St_4_Ocupied_1 = false;
    };
    s_1 = s_St_4_Ocupied_1;
  };
  ck_5_1 = s_1;
  if (ck_5_1) {
    room_oc_St_4_Empty = false;
    nr_St_4_Empty = false;
    ns_St_4_Empty_1 = true;
    _out->room_oc = room_oc_St_4_Empty;
    nr = nr_St_4_Empty;
    ns_1 = ns_St_4_Empty_1;
  } else {
    room_oc_St_4_Ocupied = true;
    _out->room_oc = room_oc_St_4_Ocupied;
    nr_St_4_Ocupied = false;
    nr = nr_St_4_Ocupied;
    ns_St_4_Ocupied_1 = false;
    ns_1 = ns_St_4_Ocupied_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Pratica05__fonteLuz_reset(Pratica05__fonteLuz_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Pratica05__fonteLuz_step(int onn, int c1, int c2,
                              Pratica05__fonteLuz_out* _out,
                              Pratica05__fonteLuz_mem* self) {
  
  int nr_St_5_On;
  int ns_St_5_On_1;
  int luz_on_St_5_On;
  int nr_St_5_Off;
  int ns_St_5_Off_1;
  int luz_on_St_5_Off;
  int ck_6_1;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v;
  int r_St_5_On;
  int s_St_5_On_1;
  int r_St_5_Off;
  int s_St_5_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_46 = !(c2);
    v_45 = (onn&&c1);
    v_47 = (v_45||v_46);
    if (v_47) {
      r_St_5_Off = true;
      s_St_5_Off_1 = false;
    } else {
      r_St_5_Off = self->pnr;
      s_St_5_Off_1 = true;
    };
    r = r_St_5_Off;
    s_1 = s_St_5_Off_1;
  } else {
    v_43 = !(c1);
    v = (onn&&c2);
    v_44 = (v||v_43);
    if (v_44) {
      r_St_5_On = true;
    } else {
      r_St_5_On = self->pnr;
    };
    r = r_St_5_On;
    if (v_44) {
      s_St_5_On_1 = true;
    } else {
      s_St_5_On_1 = false;
    };
    s_1 = s_St_5_On_1;
  };
  ck_6_1 = s_1;
  if (ck_6_1) {
    luz_on_St_5_Off = false;
    nr_St_5_Off = false;
    ns_St_5_Off_1 = true;
    _out->luz_on = luz_on_St_5_Off;
    nr = nr_St_5_Off;
    ns_1 = ns_St_5_Off_1;
  } else {
    luz_on_St_5_On = true;
    _out->luz_on = luz_on_St_5_On;
    nr_St_5_On = false;
    nr = nr_St_5_On;
    ns_St_5_On_1 = false;
    ns_1 = ns_St_5_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Pratica05__window_reset(Pratica05__window_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Pratica05__window_step(int push, int c_window,
                            Pratica05__window_out* _out,
                            Pratica05__window_mem* self) {
  
  int nr_St_6_Open;
  int ns_St_6_Open_1;
  int window_open_St_6_Open;
  int nr_St_6_Closed;
  int ns_St_6_Closed_1;
  int window_open_St_6_Closed;
  int ck_7_1;
  int v_49;
  int v_48;
  int v;
  int r_St_6_Open;
  int s_St_6_Open_1;
  int r_St_6_Closed;
  int s_St_6_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_49 = (push&&c_window);
    if (v_49) {
      r_St_6_Closed = true;
      s_St_6_Closed_1 = false;
    } else {
      r_St_6_Closed = self->pnr;
      s_St_6_Closed_1 = true;
    };
    r = r_St_6_Closed;
    s_1 = s_St_6_Closed_1;
  } else {
    v = !(c_window);
    v_48 = (push||v);
    if (v_48) {
      r_St_6_Open = true;
    } else {
      r_St_6_Open = self->pnr;
    };
    r = r_St_6_Open;
    if (v_48) {
      s_St_6_Open_1 = true;
    } else {
      s_St_6_Open_1 = false;
    };
    s_1 = s_St_6_Open_1;
  };
  ck_7_1 = s_1;
  if (ck_7_1) {
    window_open_St_6_Closed = false;
    nr_St_6_Closed = false;
    ns_St_6_Closed_1 = true;
    _out->window_open = window_open_St_6_Closed;
    nr = nr_St_6_Closed;
    ns_1 = ns_St_6_Closed_1;
  } else {
    window_open_St_6_Open = true;
    _out->window_open = window_open_St_6_Open;
    nr_St_6_Open = false;
    nr = nr_St_6_Open;
    ns_St_6_Open_1 = false;
    ns_1 = ns_St_6_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Pratica05__door_reset(Pratica05__door_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Pratica05__door_step(int push, int c_door, Pratica05__door_out* _out,
                          Pratica05__door_mem* self) {
  
  int nr_St_7_Open;
  int ns_St_7_Open_1;
  int door_open_St_7_Open;
  int nr_St_7_Closed;
  int ns_St_7_Closed_1;
  int door_open_St_7_Closed;
  int ck_8_1;
  int v_51;
  int v_50;
  int v;
  int r_St_7_Open;
  int s_St_7_Open_1;
  int r_St_7_Closed;
  int s_St_7_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_51 = (push&&c_door);
    if (v_51) {
      r_St_7_Closed = true;
      s_St_7_Closed_1 = false;
    } else {
      r_St_7_Closed = self->pnr;
      s_St_7_Closed_1 = true;
    };
    r = r_St_7_Closed;
    s_1 = s_St_7_Closed_1;
  } else {
    v = !(c_door);
    v_50 = (push||v);
    if (v_50) {
      r_St_7_Open = true;
    } else {
      r_St_7_Open = self->pnr;
    };
    r = r_St_7_Open;
    if (v_50) {
      s_St_7_Open_1 = true;
    } else {
      s_St_7_Open_1 = false;
    };
    s_1 = s_St_7_Open_1;
  };
  ck_8_1 = s_1;
  if (ck_8_1) {
    door_open_St_7_Closed = false;
    nr_St_7_Closed = false;
    ns_St_7_Closed_1 = true;
    _out->door_open = door_open_St_7_Closed;
    nr = nr_St_7_Closed;
    ns_1 = ns_St_7_Closed_1;
  } else {
    door_open_St_7_Open = true;
    _out->door_open = door_open_St_7_Open;
    nr_St_7_Open = false;
    nr = nr_St_7_Open;
    ns_St_7_Open_1 = false;
    ns_1 = ns_St_7_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Pratica05__task_reset(Pratica05__task_mem* self) {
  self->pnr = false;
  self->ck_25_1 = true;
  self->pnr_1 = false;
  self->ck_23_1 = true;
  self->pnr_2 = false;
  self->ck_21_1 = true;
  self->pnr_3 = false;
  self->ck_19_1 = true;
  self->pnr_4 = false;
  self->ck_17_1 = true;
  self->pnr_5 = false;
  self->v_307 = true;
  self->v_308 = false;
  self->v_309 = false;
  self->pnr_6 = false;
  self->v_360 = true;
  self->v_361 = true;
  self->v_362 = true;
  self->pnr_7 = false;
  self->v_397 = false;
  self->v_398 = false;
  self->pnr_8 = false;
  self->v_417 = false;
  self->v_418 = false;
}

void Pratica05__task_step(int up1, int down1, int up2, int down2, int s,
                          int e, int finish, int start, int cold,
                          int temp_ok, int eco, int confort, int on_lamp,
                          int on_tv, int precense, int push_door,
                          int push_window, Pratica05__task_out* _out,
                          Pratica05__task_mem* self) {
  Task_controller__task_controller_out Task_controller__task_controller_out_st;
  
  int nr_St_8_Open;
  int ns_St_8_Open_1;
  int window_open_1_St_8_Open;
  int nr_St_8_Closed;
  int ns_St_8_Closed_1;
  int window_open_1_St_8_Closed;
  int ck_26_1;
  int v_136;
  int v_135;
  int v_134;
  int r_St_8_Open;
  int s_5_St_8_Open_1;
  int r_St_8_Closed;
  int s_5_St_8_Closed_1;
  int nr_1_St_9_Open;
  int ns_1_St_9_Open_1;
  int door_open_1_St_9_Open;
  int nr_1_St_9_Closed;
  int ns_1_St_9_Closed_1;
  int door_open_1_St_9_Closed;
  int ck_24_1;
  int v_133;
  int v_132;
  int v_131;
  int r_1_St_9_Open;
  int s_6_St_9_Open_1;
  int r_1_St_9_Closed;
  int s_6_St_9_Closed_1;
  int nr_2_St_10_Ocupied;
  int ns_2_St_10_Ocupied_1;
  int room_oc_1_St_10_Ocupied;
  int nr_2_St_10_Empty;
  int ns_2_St_10_Empty_1;
  int room_oc_1_St_10_Empty;
  int ck_22_1;
  int v_130;
  int r_2_St_10_Ocupied;
  int s_7_St_10_Ocupied_1;
  int r_2_St_10_Empty;
  int s_7_St_10_Empty_1;
  int nr_3_St_11_On;
  int ns_3_St_11_On_1;
  int luz_on_1_St_11_On;
  int nr_3_St_11_Off;
  int ns_3_St_11_Off_1;
  int luz_on_1_St_11_Off;
  int ck_20_1;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int r_3_St_11_On;
  int s_8_St_11_On_1;
  int r_3_St_11_Off;
  int s_8_St_11_Off_1;
  int nr_4_St_12_On;
  int ns_4_St_12_On_1;
  int luz_on_St_12_On;
  int nr_4_St_12_Off;
  int ns_4_St_12_Off_1;
  int luz_on_St_12_Off;
  int ck_18_1;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int r_4_St_12_On;
  int s_9_St_12_On_1;
  int r_4_St_12_Off;
  int s_9_St_12_Off_1;
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
  int ns_5_St_13_REHEAT_2_0;
  int ns_5_St_13_REHEAT_3_0_0;
  int ns_5_St_13_REHEAT_3_0_1;
  int ns_5_St_13_REHEAT_2_1;
  int ns_5_St_13_REHEAT_3_1_0;
  int ns_5_St_13_REHEAT_3_1_1;
  int ns_5_St_13_MAINTAIN_2_0;
  int ns_5_St_13_MAINTAIN_3_0_0;
  int ns_5_St_13_MAINTAIN_3_0_1;
  int ns_5_St_13_MAINTAIN_2_1;
  int ns_5_St_13_MAINTAIN_3_1_0;
  int ns_5_St_13_MAINTAIN_3_1_1;
  int ns_5_St_13_STANDBY_2_0;
  int ns_5_St_13_STANDBY_3_0_0;
  int ns_5_St_13_STANDBY_3_0_1;
  int ns_5_St_13_STANDBY_2_1;
  int ns_5_St_13_STANDBY_3_1_0;
  int ns_5_St_13_STANDBY_3_1_1;
  int ns_5_St_13_HEAT_2_0;
  int ns_5_St_13_HEAT_3_0_0;
  int ns_5_St_13_HEAT_3_0_1;
  int ns_5_St_13_HEAT_2_1;
  int ns_5_St_13_HEAT_3_1_0;
  int ns_5_St_13_HEAT_3_1_1;
  int ns_5_St_13_OFF_2_0;
  int ns_5_St_13_OFF_3_0_0;
  int ns_5_St_13_OFF_3_0_1;
  int ns_5_St_13_OFF_2_1;
  int ns_5_St_13_OFF_3_1_0;
  int ns_5_St_13_OFF_3_1_1;
  int ck_16_2_0;
  int ck_16_3_0_0;
  int ck_16_3_0_1;
  int ck_16_2_1;
  int ck_16_3_1_0;
  int ck_16_3_1_1;
  int nr_5_St_13_REHEAT;
  int ns_5_St_13_REHEAT_3;
  int ns_5_St_13_REHEAT_2;
  int ns_5_St_13_REHEAT_1;
  int power_2_St_13_REHEAT;
  int nr_5_St_13_MAINTAIN;
  int ns_5_St_13_MAINTAIN_3;
  int ns_5_St_13_MAINTAIN_2;
  int ns_5_St_13_MAINTAIN_1;
  int power_2_St_13_MAINTAIN;
  int nr_5_St_13_STANDBY;
  int ns_5_St_13_STANDBY_3;
  int ns_5_St_13_STANDBY_2;
  int ns_5_St_13_STANDBY_1;
  int power_2_St_13_STANDBY;
  int nr_5_St_13_HEAT;
  int ns_5_St_13_HEAT_3;
  int ns_5_St_13_HEAT_2;
  int ns_5_St_13_HEAT_1;
  int power_2_St_13_HEAT;
  int nr_5_St_13_OFF;
  int ns_5_St_13_OFF_3;
  int ns_5_St_13_OFF_2;
  int ns_5_St_13_OFF_1;
  int power_2_St_13_OFF;
  int ck_16_3;
  int ck_16_2;
  int ck_16_1;
  int v_116_2_0;
  int v_116_3_0_0;
  int v_116_3_0_1;
  int v_116_2_1;
  int v_116_3_1_0;
  int v_116_3_1_1;
  int v_117;
  int v_116_3;
  int v_116_2;
  int v_116_1;
  int v_115;
  int v_114;
  int v_113;
  int v_111_2_0;
  int v_111_3_0_0;
  int v_111_3_0_1;
  int v_111_2_1;
  int v_111_3_1_0;
  int v_111_3_1_1;
  int v_112;
  int v_111_3;
  int v_111_2;
  int v_111_1;
  int v_109_2_0;
  int v_109_3_0_0;
  int v_109_3_0_1;
  int v_109_2_1;
  int v_109_3_1_0;
  int v_109_3_1_1;
  int v_110;
  int v_109_3;
  int v_109_2;
  int v_109_1;
  int v_108;
  int v_106_2_0;
  int v_106_3_0_0;
  int v_106_3_0_1;
  int v_106_2_1;
  int v_106_3_1_0;
  int v_106_3_1_1;
  int v_107;
  int v_106_3;
  int v_106_2;
  int v_106_1;
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
  int s_10_St_13_REHEAT_2_0;
  int s_10_St_13_REHEAT_3_0_0;
  int s_10_St_13_REHEAT_3_0_1;
  int s_10_St_13_REHEAT_2_1;
  int s_10_St_13_REHEAT_3_1_0;
  int s_10_St_13_REHEAT_3_1_1;
  int s_10_St_13_MAINTAIN_2_0;
  int s_10_St_13_MAINTAIN_3_0_0;
  int s_10_St_13_MAINTAIN_3_0_1;
  int s_10_St_13_MAINTAIN_2_1;
  int s_10_St_13_MAINTAIN_3_1_0;
  int s_10_St_13_MAINTAIN_3_1_1;
  int s_10_St_13_STANDBY_2_0;
  int s_10_St_13_STANDBY_3_0_0;
  int s_10_St_13_STANDBY_3_0_1;
  int s_10_St_13_STANDBY_2_1;
  int s_10_St_13_STANDBY_3_1_0;
  int s_10_St_13_STANDBY_3_1_1;
  int s_10_St_13_HEAT_2_0;
  int s_10_St_13_HEAT_3_0_0;
  int s_10_St_13_HEAT_3_0_1;
  int s_10_St_13_HEAT_2_1;
  int s_10_St_13_HEAT_3_1_0;
  int s_10_St_13_HEAT_3_1_1;
  int s_10_St_13_OFF_2_0;
  int s_10_St_13_OFF_3_0_0;
  int s_10_St_13_OFF_3_0_1;
  int s_10_St_13_OFF_2_1;
  int s_10_St_13_OFF_3_1_0;
  int s_10_St_13_OFF_3_1_1;
  int ck_15_2_0;
  int ck_15_3_0_0;
  int ck_15_3_0_1;
  int ck_15_2_1;
  int ck_15_3_1_0;
  int ck_15_3_1_1;
  int r_5_St_13_REHEAT;
  int s_10_St_13_REHEAT_3;
  int s_10_St_13_REHEAT_2;
  int s_10_St_13_REHEAT_1;
  int r_5_St_13_MAINTAIN;
  int s_10_St_13_MAINTAIN_3;
  int s_10_St_13_MAINTAIN_2;
  int s_10_St_13_MAINTAIN_1;
  int r_5_St_13_STANDBY;
  int s_10_St_13_STANDBY_3;
  int s_10_St_13_STANDBY_2;
  int s_10_St_13_STANDBY_1;
  int r_5_St_13_HEAT;
  int s_10_St_13_HEAT_3;
  int s_10_St_13_HEAT_2;
  int s_10_St_13_HEAT_1;
  int r_5_St_13_OFF;
  int s_10_St_13_OFF_3;
  int s_10_St_13_OFF_2;
  int s_10_St_13_OFF_1;
  int ck_15_3;
  int ck_15_2;
  int ck_15_1;
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
  int ns_6_St_14_STANDBY_2_0;
  int ns_6_St_14_STANDBY_3_0_0;
  int ns_6_St_14_STANDBY_3_0_1;
  int ns_6_St_14_STANDBY_2_1;
  int ns_6_St_14_STANDBY_3_1_0;
  int ns_6_St_14_STANDBY_3_1_1;
  int ns_6_St_14_SPIN_2_0;
  int ns_6_St_14_SPIN_3_0_0;
  int ns_6_St_14_SPIN_3_0_1;
  int ns_6_St_14_SPIN_2_1;
  int ns_6_St_14_SPIN_3_1_0;
  int ns_6_St_14_SPIN_3_1_1;
  int ns_6_St_14_RINSE_2_0;
  int ns_6_St_14_RINSE_3_0_0;
  int ns_6_St_14_RINSE_3_0_1;
  int ns_6_St_14_RINSE_2_1;
  int ns_6_St_14_RINSE_3_1_0;
  int ns_6_St_14_RINSE_3_1_1;
  int ns_6_St_14_WASHING_2_0;
  int ns_6_St_14_WASHING_3_0_0;
  int ns_6_St_14_WASHING_3_0_1;
  int ns_6_St_14_WASHING_2_1;
  int ns_6_St_14_WASHING_3_1_0;
  int ns_6_St_14_WASHING_3_1_1;
  int ns_6_St_14_WF_2_0;
  int ns_6_St_14_WF_3_0_0;
  int ns_6_St_14_WF_3_0_1;
  int ns_6_St_14_WF_2_1;
  int ns_6_St_14_WF_3_1_0;
  int ns_6_St_14_WF_3_1_1;
  int ns_6_St_14_OFF_2_0;
  int ns_6_St_14_OFF_3_0_0;
  int ns_6_St_14_OFF_3_0_1;
  int ns_6_St_14_OFF_2_1;
  int ns_6_St_14_OFF_3_1_0;
  int ns_6_St_14_OFF_3_1_1;
  int ck_14_2_0;
  int ck_14_3_0_0;
  int ck_14_3_0_1;
  int ck_14_2_1;
  int ck_14_3_1_0;
  int ck_14_3_1_1;
  int nr_6_St_14_STANDBY;
  int ns_6_St_14_STANDBY_3;
  int ns_6_St_14_STANDBY_2;
  int ns_6_St_14_STANDBY_1;
  int power_1_St_14_STANDBY;
  int nr_6_St_14_SPIN;
  int ns_6_St_14_SPIN_3;
  int ns_6_St_14_SPIN_2;
  int ns_6_St_14_SPIN_1;
  int power_1_St_14_SPIN;
  int nr_6_St_14_RINSE;
  int ns_6_St_14_RINSE_3;
  int ns_6_St_14_RINSE_2;
  int ns_6_St_14_RINSE_1;
  int power_1_St_14_RINSE;
  int nr_6_St_14_WASHING;
  int ns_6_St_14_WASHING_3;
  int ns_6_St_14_WASHING_2;
  int ns_6_St_14_WASHING_1;
  int power_1_St_14_WASHING;
  int nr_6_St_14_WF;
  int ns_6_St_14_WF_3;
  int ns_6_St_14_WF_2;
  int ns_6_St_14_WF_1;
  int power_1_St_14_WF;
  int nr_6_St_14_OFF;
  int ns_6_St_14_OFF_3;
  int ns_6_St_14_OFF_2;
  int ns_6_St_14_OFF_1;
  int power_1_St_14_OFF;
  int ck_14_3;
  int ck_14_2;
  int ck_14_1;
  int v_104_2_0;
  int v_104_3_0_0;
  int v_104_3_0_1;
  int v_104_2_1;
  int v_104_3_1_0;
  int v_104_3_1_1;
  int v_105;
  int v_104_3;
  int v_104_2;
  int v_104_1;
  int v_103;
  int v_102;
  int v_101;
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
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int v_364;
  int v_363;
  int s_11_St_14_STANDBY_2_0;
  int s_11_St_14_STANDBY_3_0_0;
  int s_11_St_14_STANDBY_3_0_1;
  int s_11_St_14_STANDBY_2_1;
  int s_11_St_14_STANDBY_3_1_0;
  int s_11_St_14_STANDBY_3_1_1;
  int s_11_St_14_SPIN_2_0;
  int s_11_St_14_SPIN_3_0_0;
  int s_11_St_14_SPIN_3_0_1;
  int s_11_St_14_SPIN_2_1;
  int s_11_St_14_SPIN_3_1_0;
  int s_11_St_14_SPIN_3_1_1;
  int s_11_St_14_RINSE_2_0;
  int s_11_St_14_RINSE_3_0_0;
  int s_11_St_14_RINSE_3_0_1;
  int s_11_St_14_RINSE_2_1;
  int s_11_St_14_RINSE_3_1_0;
  int s_11_St_14_RINSE_3_1_1;
  int s_11_St_14_WASHING_2_0;
  int s_11_St_14_WASHING_3_0_0;
  int s_11_St_14_WASHING_3_0_1;
  int s_11_St_14_WASHING_2_1;
  int s_11_St_14_WASHING_3_1_0;
  int s_11_St_14_WASHING_3_1_1;
  int s_11_St_14_WF_2_0;
  int s_11_St_14_WF_3_0_0;
  int s_11_St_14_WF_3_0_1;
  int s_11_St_14_WF_2_1;
  int s_11_St_14_WF_3_1_0;
  int s_11_St_14_WF_3_1_1;
  int s_11_St_14_OFF_2_0;
  int s_11_St_14_OFF_3_0_0;
  int s_11_St_14_OFF_3_0_1;
  int s_11_St_14_OFF_2_1;
  int s_11_St_14_OFF_3_1_0;
  int s_11_St_14_OFF_3_1_1;
  int ck_13_2_0;
  int ck_13_3_0_0;
  int ck_13_3_0_1;
  int ck_13_2_1;
  int ck_13_3_1_0;
  int ck_13_3_1_1;
  int r_6_St_14_STANDBY;
  int s_11_St_14_STANDBY_3;
  int s_11_St_14_STANDBY_2;
  int s_11_St_14_STANDBY_1;
  int r_6_St_14_SPIN;
  int s_11_St_14_SPIN_3;
  int s_11_St_14_SPIN_2;
  int s_11_St_14_SPIN_1;
  int r_6_St_14_RINSE;
  int s_11_St_14_RINSE_3;
  int s_11_St_14_RINSE_2;
  int s_11_St_14_RINSE_1;
  int r_6_St_14_WASHING;
  int s_11_St_14_WASHING_3;
  int s_11_St_14_WASHING_2;
  int s_11_St_14_WASHING_1;
  int r_6_St_14_WF;
  int s_11_St_14_WF_3;
  int s_11_St_14_WF_2;
  int s_11_St_14_WF_1;
  int r_6_St_14_OFF;
  int s_11_St_14_OFF_3;
  int s_11_St_14_OFF_2;
  int s_11_St_14_OFF_1;
  int ck_13_3;
  int ck_13_2;
  int ck_13_1;
  int v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int v_388;
  int v_387;
  int ns_7_St_15_HIGHT_2_0;
  int ns_7_St_15_HIGHT_2_1;
  int ns_7_St_15_ECO_2_0;
  int ns_7_St_15_ECO_2_1;
  int ns_7_St_15_FROST_2_0;
  int ns_7_St_15_FROST_2_1;
  int ns_7_St_15_OFF_2_0;
  int ns_7_St_15_OFF_2_1;
  int ck_12_2_0;
  int ck_12_2_1;
  int nr_7_St_15_HIGHT;
  int ns_7_St_15_HIGHT_2;
  int ns_7_St_15_HIGHT_1;
  int ss_1_St_15_HIGHT;
  int power_St_15_HIGHT;
  int nr_7_St_15_ECO;
  int ns_7_St_15_ECO_2;
  int ns_7_St_15_ECO_1;
  int ss_1_St_15_ECO;
  int power_St_15_ECO;
  int nr_7_St_15_FROST;
  int ns_7_St_15_FROST_2;
  int ns_7_St_15_FROST_1;
  int ss_1_St_15_FROST;
  int power_St_15_FROST;
  int nr_7_St_15_OFF;
  int ns_7_St_15_OFF_2;
  int ns_7_St_15_OFF_1;
  int ss_1_St_15_OFF;
  int power_St_15_OFF;
  int ck_12_2;
  int ck_12_1;
  int v_100;
  int v_99;
  int v_97_2_0;
  int v_97_2_1;
  int v_95_2_0;
  int v_95_2_1;
  int v_98;
  int v_97_2;
  int v_97_1;
  int v_96;
  int v_95_2;
  int v_95_1;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_89_2_0;
  int v_89_2_1;
  int v_90;
  int v_89_2;
  int v_89_1;
  int v_88;
  int v_87;
  int v_86;
  int v_84_2_0;
  int v_84_2_1;
  int v_85;
  int v_84_2;
  int v_84_1;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_404;
  int v_403;
  int v_402;
  int v_401;
  int v_400;
  int v_399;
  int s_12_St_15_HIGHT_2_0;
  int s_12_St_15_HIGHT_2_1;
  int s_12_St_15_ECO_2_0;
  int s_12_St_15_ECO_2_1;
  int s_12_St_15_FROST_2_0;
  int s_12_St_15_FROST_2_1;
  int s_12_St_15_OFF_2_0;
  int s_12_St_15_OFF_2_1;
  int ck_11_2_0;
  int ck_11_2_1;
  int r_7_St_15_HIGHT;
  int s_12_St_15_HIGHT_2;
  int s_12_St_15_HIGHT_1;
  int r_7_St_15_ECO;
  int s_12_St_15_ECO_2;
  int s_12_St_15_ECO_1;
  int r_7_St_15_FROST;
  int s_12_St_15_FROST_2;
  int s_12_St_15_FROST_1;
  int r_7_St_15_OFF;
  int s_12_St_15_OFF_2;
  int s_12_St_15_OFF_1;
  int ck_11_2;
  int ck_11_1;
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
  int ns_8_St_16_CONFORT_2_0;
  int ns_8_St_16_CONFORT_2_1;
  int s_1_St_16_CONFORT_2_0;
  int s_1_St_16_CONFORT_2_1;
  int ns_8_St_16_ECO_2_0;
  int ns_8_St_16_ECO_2_1;
  int s_1_St_16_ECO_2_0;
  int s_1_St_16_ECO_2_1;
  int ns_8_St_16_MS_2_0;
  int ns_8_St_16_MS_2_1;
  int s_1_St_16_MS_2_0;
  int s_1_St_16_MS_2_1;
  int ck_10_2_0;
  int ck_10_2_1;
  int nr_8_St_16_CONFORT;
  int ns_8_St_16_CONFORT_2;
  int ns_8_St_16_CONFORT_1;
  int s_1_St_16_CONFORT_2;
  int s_1_St_16_CONFORT_1;
  int pl_1_St_16_CONFORT;
  int nr_8_St_16_ECO;
  int ns_8_St_16_ECO_2;
  int ns_8_St_16_ECO_1;
  int s_1_St_16_ECO_2;
  int s_1_St_16_ECO_1;
  int pl_1_St_16_ECO;
  int nr_8_St_16_MS;
  int ns_8_St_16_MS_2;
  int ns_8_St_16_MS_1;
  int s_1_St_16_MS_2;
  int s_1_St_16_MS_1;
  int pl_1_St_16_MS;
  int ck_10_2;
  int ck_10_1;
  int v_78_2_0;
  int v_78_2_1;
  int v_79;
  int v_78_2;
  int v_78_1;
  int v_76_2_0;
  int v_76_2_1;
  int v_77;
  int v_76_2;
  int v_76_1;
  int v_75;
  int v_73_2_0;
  int v_73_2_1;
  int v_74;
  int v_73_2;
  int v_73_1;
  int v_72;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
  int s_13_St_16_CONFORT_2_0;
  int s_13_St_16_CONFORT_2_1;
  int s_13_St_16_ECO_2_0;
  int s_13_St_16_ECO_2_1;
  int s_13_St_16_MS_2_0;
  int s_13_St_16_MS_2_1;
  int ck_9_2_0;
  int ck_9_2_1;
  int r_8_St_16_CONFORT;
  int s_13_St_16_CONFORT_2;
  int s_13_St_16_CONFORT_1;
  int r_8_St_16_ECO;
  int s_13_St_16_ECO_2;
  int s_13_St_16_ECO_1;
  int r_8_St_16_MS;
  int s_13_St_16_MS_2;
  int s_13_St_16_MS_1;
  int ck_9_2;
  int ck_9_1;
  int sp_2_0;
  int sp_2_1;
  int s_13_2_0;
  int s_13_2_1;
  int ns_8_2_0;
  int ns_8_2_1;
  int s_12_2_0;
  int s_12_2_1;
  int ns_7_2_0;
  int ns_7_2_1;
  int s_11_2_0;
  int s_11_3_0_0;
  int s_11_3_0_1;
  int s_11_2_1;
  int s_11_3_1_0;
  int s_11_3_1_1;
  int ns_6_2_0;
  int ns_6_3_0_0;
  int ns_6_3_0_1;
  int ns_6_2_1;
  int ns_6_3_1_0;
  int ns_6_3_1_1;
  int s_10_2_0;
  int s_10_3_0_0;
  int s_10_3_0_1;
  int s_10_2_1;
  int s_10_3_1_0;
  int s_10_3_1_1;
  int ns_5_2_0;
  int ns_5_3_0_0;
  int ns_5_3_0_1;
  int ns_5_2_1;
  int ns_5_3_1_0;
  int ns_5_3_1_1;
  int s_1_2_0;
  int s_1_2_1;
  int s_13_2;
  int s_13_1;
  int ns_8_2;
  int ns_8_1;
  int r_8;
  int nr_8;
  int s_12_2;
  int s_12_1;
  int ns_7_2;
  int ns_7_1;
  int r_7;
  int nr_7;
  int s_11_3;
  int s_11_2;
  int s_11_1;
  int ns_6_3;
  int ns_6_2;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_10_3;
  int s_10_2;
  int s_10_1;
  int ns_5_3;
  int ns_5_2;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_9_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_8_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_7_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_6_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_5_1;
  int ns_1_2;
  int r;
  int nr;
  int push_1;
  int c_window_1;
  int window_open_1;
  int push;
  int c_door_1;
  int door_open_1;
  int precense_1;
  int room_oc_1;
  int onn_1;
  int c1_3;
  int c2_3;
  int luz_on_1;
  int onn;
  int c1_2;
  int c2_2;
  int luz_on;
  int finish_1;
  int start_1;
  int cold_1;
  int temp_ok_1;
  int c_1;
  int power_2;
  int s_2;
  int e_1;
  int c;
  int power_1;
  int up1_1;
  int down1_1;
  int up2_1;
  int down2_1;
  int c1_1;
  int c2_1;
  int power;
  int ss_1;
  int eco_1;
  int confort_1;
  int pl_1;
  int s_1_2;
  int s_1_1;
  int v;
  int v_52;
  int v_53;
  int v_54;
  int v_55;
  int v_56;
  int v_281;
  int v_280;
  int ck_1;
  int ck_2;
  int rule5_S1;
  int rule5_S2;
  int rule5_S3;
  int ck_2_1;
  int ck_2_0;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int rule1;
  int v_57;
  int v_58;
  int v_59;
  int v_60;
  int v_61;
  int v_62;
  int v_63;
  int v_64;
  int v_65;
  int v_66;
  int v_67;
  int v_68;
  int v_69;
  int v_70;
  int v_71;
  int c_window;
  int c_door;
  int c_tv1;
  int c_tv2;
  int c_lamp2;
  int c_lamp1;
  int c4;
  int c3;
  int c2;
  int c1;
  push_1 = push_window;
  push = push_door;
  precense_1 = precense;
  onn_1 = on_tv;
  onn = on_lamp;
  finish_1 = finish;
  start_1 = start;
  cold_1 = cold;
  temp_ok_1 = temp_ok;
  ck_15_1 = self->v_307;
  ck_15_2 = self->v_308;
  ck_15_3 = self->v_309;
  s_2 = s;
  e_1 = e;
  ck_13_1 = self->v_360;
  ck_13_2 = self->v_361;
  ck_13_3 = self->v_362;
  up1_1 = up1;
  down1_1 = down1;
  up2_1 = up2;
  down2_1 = down2;
  ck_11_1 = self->v_397;
  ck_11_2 = self->v_398;
  eco_1 = eco;
  confort_1 = confort;
  ck_9_1 = self->v_417;
  ck_9_2 = self->v_418;
  Task_controller__task_controller_step(up1, down1, up2, down2, s, e, finish,
                                        start, cold, temp_ok, eco, confort,
                                        on_lamp, on_tv, precense, push_door,
                                        push_window, self->v_418,
                                        self->v_417, self->pnr_8,
                                        self->v_398, self->v_397,
                                        self->pnr_7, self->v_362,
                                        self->v_361, self->v_360,
                                        self->pnr_6, self->v_309,
                                        self->v_308, self->v_307,
                                        self->pnr_5, self->ck_17_1,
                                        self->pnr_4, self->ck_19_1,
                                        self->pnr_3, self->ck_21_1,
                                        self->pnr_2, self->ck_23_1,
                                        self->pnr_1, self->ck_25_1,
                                        self->pnr, true, true, true, true,
                                        true, true, true, true, true, true,
                                        &Task_controller__task_controller_out_st);
  c_window = Task_controller__task_controller_out_st.task_c_window;
  c_door = Task_controller__task_controller_out_st.task_c_door;
  c_tv1 = Task_controller__task_controller_out_st.task_c_tv1;
  c_tv2 = Task_controller__task_controller_out_st.task_c_tv2;
  c_lamp2 = Task_controller__task_controller_out_st.task_c_lamp2;
  c_lamp1 = Task_controller__task_controller_out_st.task_c_lamp1;
  c4 = Task_controller__task_controller_out_st.task_c4;
  c3 = Task_controller__task_controller_out_st.task_c3;
  c2 = Task_controller__task_controller_out_st.task_c2;
  c1 = Task_controller__task_controller_out_st.task_c1;
  c_window_1 = c_window;
  c_door_1 = c_door;
  c1_3 = c_tv1;
  c2_3 = c_tv2;
  c1_2 = c_lamp1;
  c2_2 = c_lamp2;
  c_1 = c4;
  c = c3;
  c1_1 = c1;
  c2_1 = c2;
  if (self->ck_25_1) {
    v_136 = (push_1&&c_window_1);
    if (v_136) {
      r_St_8_Closed = true;
      s_5_St_8_Closed_1 = false;
    } else {
      r_St_8_Closed = self->pnr;
      s_5_St_8_Closed_1 = true;
    };
    r = r_St_8_Closed;
    s_5_1 = s_5_St_8_Closed_1;
  } else {
    v_134 = !(c_window_1);
    v_135 = (push_1||v_134);
    if (v_135) {
      r_St_8_Open = true;
    } else {
      r_St_8_Open = self->pnr;
    };
    r = r_St_8_Open;
    if (v_135) {
      s_5_St_8_Open_1 = true;
    } else {
      s_5_St_8_Open_1 = false;
    };
    s_5_1 = s_5_St_8_Open_1;
  };
  ck_26_1 = s_5_1;
  if (ck_26_1) {
    window_open_1_St_8_Closed = false;
    nr_St_8_Closed = false;
    ns_St_8_Closed_1 = true;
    window_open_1 = window_open_1_St_8_Closed;
    nr = nr_St_8_Closed;
    ns_1_2 = ns_St_8_Closed_1;
  } else {
    window_open_1_St_8_Open = true;
    window_open_1 = window_open_1_St_8_Open;
    nr_St_8_Open = false;
    nr = nr_St_8_Open;
    ns_St_8_Open_1 = false;
    ns_1_2 = ns_St_8_Open_1;
  };
  _out->window_open = window_open_1;
  if (self->ck_23_1) {
    v_133 = (push&&c_door_1);
    if (v_133) {
      r_1_St_9_Closed = true;
      s_6_St_9_Closed_1 = false;
    } else {
      r_1_St_9_Closed = self->pnr_1;
      s_6_St_9_Closed_1 = true;
    };
    r_1 = r_1_St_9_Closed;
    s_6_1 = s_6_St_9_Closed_1;
  } else {
    v_131 = !(c_door_1);
    v_132 = (push||v_131);
    if (v_132) {
      r_1_St_9_Open = true;
    } else {
      r_1_St_9_Open = self->pnr_1;
    };
    r_1 = r_1_St_9_Open;
    if (v_132) {
      s_6_St_9_Open_1 = true;
    } else {
      s_6_St_9_Open_1 = false;
    };
    s_6_1 = s_6_St_9_Open_1;
  };
  ck_24_1 = s_6_1;
  if (ck_24_1) {
    door_open_1_St_9_Closed = false;
    nr_1_St_9_Closed = false;
    ns_1_St_9_Closed_1 = true;
    door_open_1 = door_open_1_St_9_Closed;
    nr_1 = nr_1_St_9_Closed;
    ns_1_1 = ns_1_St_9_Closed_1;
  } else {
    door_open_1_St_9_Open = true;
    door_open_1 = door_open_1_St_9_Open;
    nr_1_St_9_Open = false;
    nr_1 = nr_1_St_9_Open;
    ns_1_St_9_Open_1 = false;
    ns_1_1 = ns_1_St_9_Open_1;
  };
  _out->door_open = door_open_1;
  v_61 = (_out->door_open||_out->window_open);
  v_62 = !(v_61);
  v_66 = (_out->door_open||_out->window_open);
  v_67 = !(v_66);
  if (self->ck_21_1) {
    if (precense_1) {
      r_2_St_10_Empty = true;
      s_7_St_10_Empty_1 = false;
    } else {
      r_2_St_10_Empty = self->pnr_2;
      s_7_St_10_Empty_1 = true;
    };
    r_2 = r_2_St_10_Empty;
    s_7_1 = s_7_St_10_Empty_1;
  } else {
    v_130 = !(precense_1);
    if (v_130) {
      r_2_St_10_Ocupied = true;
    } else {
      r_2_St_10_Ocupied = self->pnr_2;
    };
    r_2 = r_2_St_10_Ocupied;
    if (v_130) {
      s_7_St_10_Ocupied_1 = true;
    } else {
      s_7_St_10_Ocupied_1 = false;
    };
    s_7_1 = s_7_St_10_Ocupied_1;
  };
  ck_22_1 = s_7_1;
  if (ck_22_1) {
    room_oc_1_St_10_Empty = false;
    nr_2_St_10_Empty = false;
    ns_2_St_10_Empty_1 = true;
    room_oc_1 = room_oc_1_St_10_Empty;
    nr_2 = nr_2_St_10_Empty;
    ns_2_1 = ns_2_St_10_Empty_1;
  } else {
    room_oc_1_St_10_Ocupied = true;
    room_oc_1 = room_oc_1_St_10_Ocupied;
    nr_2_St_10_Ocupied = false;
    nr_2 = nr_2_St_10_Ocupied;
    ns_2_St_10_Ocupied_1 = false;
    ns_2_1 = ns_2_St_10_Ocupied_1;
  };
  _out->room_oc = room_oc_1;
  rule2 = (_out->room_oc||v_67);
  v_68 = !(_out->room_oc);
  if (self->ck_19_1) {
    v_128 = !(c2_3);
    v_127 = (onn_1&&c1_3);
    v_129 = (v_127||v_128);
    if (v_129) {
      r_3_St_11_Off = true;
      s_8_St_11_Off_1 = false;
    } else {
      r_3_St_11_Off = self->pnr_3;
      s_8_St_11_Off_1 = true;
    };
    r_3 = r_3_St_11_Off;
    s_8_1 = s_8_St_11_Off_1;
  } else {
    v_125 = !(c1_3);
    v_124 = (onn_1&&c2_3);
    v_126 = (v_124||v_125);
    if (v_126) {
      r_3_St_11_On = true;
    } else {
      r_3_St_11_On = self->pnr_3;
    };
    r_3 = r_3_St_11_On;
    if (v_126) {
      s_8_St_11_On_1 = true;
    } else {
      s_8_St_11_On_1 = false;
    };
    s_8_1 = s_8_St_11_On_1;
  };
  ck_20_1 = s_8_1;
  if (ck_20_1) {
    luz_on_1_St_11_Off = false;
    nr_3_St_11_Off = false;
    ns_3_St_11_Off_1 = true;
    luz_on_1 = luz_on_1_St_11_Off;
    nr_3 = nr_3_St_11_Off;
    ns_3_1 = ns_3_St_11_Off_1;
  } else {
    luz_on_1_St_11_On = true;
    luz_on_1 = luz_on_1_St_11_On;
    nr_3_St_11_On = false;
    nr_3 = nr_3_St_11_On;
    ns_3_St_11_On_1 = false;
    ns_3_1 = ns_3_St_11_On_1;
  };
  _out->tv_on = luz_on_1;
  if (self->ck_17_1) {
    v_122 = !(c2_2);
    v_121 = (onn&&c1_2);
    v_123 = (v_121||v_122);
    if (v_123) {
      r_4_St_12_Off = true;
      s_9_St_12_Off_1 = false;
    } else {
      r_4_St_12_Off = self->pnr_4;
      s_9_St_12_Off_1 = true;
    };
    r_4 = r_4_St_12_Off;
    s_9_1 = s_9_St_12_Off_1;
  } else {
    v_119 = !(c1_2);
    v_118 = (onn&&c2_2);
    v_120 = (v_118||v_119);
    if (v_120) {
      r_4_St_12_On = true;
    } else {
      r_4_St_12_On = self->pnr_4;
    };
    r_4 = r_4_St_12_On;
    if (v_120) {
      s_9_St_12_On_1 = true;
    } else {
      s_9_St_12_On_1 = false;
    };
    s_9_1 = s_9_St_12_On_1;
  };
  ck_18_1 = s_9_1;
  if (ck_18_1) {
    luz_on_St_12_Off = false;
    nr_4_St_12_Off = false;
    ns_4_St_12_Off_1 = true;
    luz_on = luz_on_St_12_Off;
    nr_4 = nr_4_St_12_Off;
    ns_4_1 = ns_4_St_12_Off_1;
  } else {
    luz_on_St_12_On = true;
    luz_on = luz_on_St_12_On;
    nr_4_St_12_On = false;
    nr_4 = nr_4_St_12_On;
    ns_4_St_12_On_1 = false;
    ns_4_1 = ns_4_St_12_On_1;
  };
  _out->lamp_on = luz_on;
  v_57 = (_out->lamp_on||_out->tv_on);
  v_58 = !(v_57);
  v_69 = (_out->lamp_on||_out->tv_on);
  rule1 = (v_68||v_69);
  if (ck_15_1) {
    ck_15_2_1 = ck_15_2;
    if (ck_15_2_1) {
      ck_15_3_1_1 = ck_15_3;
      if (ck_15_3_1_1) {
        if (temp_ok_1) {
          v_112 = true;
        } else {
          v_112 = self->pnr_5;
        };
        if (finish_1) {
          r_5_St_13_HEAT = true;
        } else {
          r_5_St_13_HEAT = v_112;
        };
        if (temp_ok_1) {
          v_111_1 = true;
        } else {
          v_111_1 = true;
        };
        if (finish_1) {
          s_10_St_13_HEAT_1 = true;
        } else {
          s_10_St_13_HEAT_1 = v_111_1;
        };
        if (temp_ok_1) {
          v_111_2 = true;
        } else {
          v_111_2 = true;
        };
        if (finish_1) {
          s_10_St_13_HEAT_2 = false;
        } else {
          s_10_St_13_HEAT_2 = v_111_2;
        };
        if (temp_ok_1) {
          v_111_3 = false;
        } else {
          v_111_3 = true;
        };
        if (finish_1) {
          s_10_St_13_HEAT_3 = false;
        } else {
          s_10_St_13_HEAT_3 = v_111_3;
        };
        v_325 = r_5_St_13_HEAT;
        v_310 = s_10_St_13_HEAT_1;
        v_311 = s_10_St_13_HEAT_2;
        v_312 = s_10_St_13_HEAT_3;
      } else {
        if (finish_1) {
          v_110 = true;
          v_109_1 = true;
          v_109_2 = false;
          v_109_3 = false;
        } else {
          v_110 = self->pnr_5;
          v_109_1 = true;
          v_109_2 = true;
          v_109_3 = false;
        };
        v_108 = (cold_1&&c_1);
        if (v_108) {
          r_5_St_13_MAINTAIN = true;
        } else {
          r_5_St_13_MAINTAIN = v_110;
        };
        v_325 = r_5_St_13_MAINTAIN;
        if (v_108) {
          s_10_St_13_MAINTAIN_1 = false;
        } else {
          s_10_St_13_MAINTAIN_1 = v_109_1;
        };
        v_310 = s_10_St_13_MAINTAIN_1;
        if (v_108) {
          s_10_St_13_MAINTAIN_2 = false;
        } else {
          s_10_St_13_MAINTAIN_2 = v_109_2;
        };
        v_311 = s_10_St_13_MAINTAIN_2;
        if (v_108) {
          s_10_St_13_MAINTAIN_3 = true;
        } else {
          s_10_St_13_MAINTAIN_3 = v_109_3;
        };
        v_312 = s_10_St_13_MAINTAIN_3;
      };
      v_319 = v_310;
      v_320 = v_311;
      v_321 = v_312;
      v_327 = v_325;
      if (ck_15_3_1_1) {
        if (v_111_1) {
          v_111_2_1 = v_111_2;
          if (v_111_2_1) {
            v_111_3_1_1 = v_111_3;
          } else {
            v_111_3_1_0 = v_111_3;
          };
        } else {
          v_111_2_0 = v_111_2;
          if (v_111_2_0) {
            v_111_3_0_1 = v_111_3;
          } else {
            v_111_3_0_0 = v_111_3;
          };
        };
        if (s_10_St_13_HEAT_1) {
          s_10_St_13_HEAT_2_1 = s_10_St_13_HEAT_2;
          if (s_10_St_13_HEAT_2_1) {
            s_10_St_13_HEAT_3_1_1 = s_10_St_13_HEAT_3;
          } else {
            s_10_St_13_HEAT_3_1_0 = s_10_St_13_HEAT_3;
          };
        } else {
          s_10_St_13_HEAT_2_0 = s_10_St_13_HEAT_2;
          if (s_10_St_13_HEAT_2_0) {
            s_10_St_13_HEAT_3_0_1 = s_10_St_13_HEAT_3;
          } else {
            s_10_St_13_HEAT_3_0_0 = s_10_St_13_HEAT_3;
          };
        };
      } else {
        if (v_109_1) {
          v_109_2_1 = v_109_2;
          if (v_109_2_1) {
            v_109_3_1_1 = v_109_3;
          } else {
            v_109_3_1_0 = v_109_3;
          };
        } else {
          v_109_2_0 = v_109_2;
          if (v_109_2_0) {
            v_109_3_0_1 = v_109_3;
          } else {
            v_109_3_0_0 = v_109_3;
          };
        };
        if (s_10_St_13_MAINTAIN_1) {
          s_10_St_13_MAINTAIN_2_1 = s_10_St_13_MAINTAIN_2;
          if (s_10_St_13_MAINTAIN_2_1) {
            s_10_St_13_MAINTAIN_3_1_1 = s_10_St_13_MAINTAIN_3;
          } else {
            s_10_St_13_MAINTAIN_3_1_0 = s_10_St_13_MAINTAIN_3;
          };
        } else {
          s_10_St_13_MAINTAIN_2_0 = s_10_St_13_MAINTAIN_2;
          if (s_10_St_13_MAINTAIN_2_0) {
            s_10_St_13_MAINTAIN_3_0_1 = s_10_St_13_MAINTAIN_3;
          } else {
            s_10_St_13_MAINTAIN_3_0_0 = s_10_St_13_MAINTAIN_3;
          };
        };
      };
    } else {
      ck_15_3_1_0 = ck_15_3;
      if (ck_15_3_1_0) {
        v_326 = true;
        v_313 = true;
        v_314 = true;
        v_315 = true;
      } else {
        v_115 = (start_1&&c_1);
        if (v_115) {
          v_117 = true;
          v_116_1 = true;
          v_116_2 = true;
          v_116_3 = true;
        } else {
          v_117 = self->pnr_5;
          v_116_1 = true;
          v_116_2 = false;
          v_116_3 = false;
        };
        v_113 = !(c_1);
        v_114 = (start_1&&v_113);
        if (v_114) {
          r_5_St_13_OFF = true;
        } else {
          r_5_St_13_OFF = v_117;
        };
        v_326 = r_5_St_13_OFF;
        if (v_114) {
          s_10_St_13_OFF_1 = false;
        } else {
          s_10_St_13_OFF_1 = v_116_1;
        };
        v_313 = s_10_St_13_OFF_1;
        if (v_114) {
          s_10_St_13_OFF_2 = false;
        } else {
          s_10_St_13_OFF_2 = v_116_2;
        };
        v_314 = s_10_St_13_OFF_2;
        if (v_114) {
          s_10_St_13_OFF_3 = false;
        } else {
          s_10_St_13_OFF_3 = v_116_3;
        };
        v_315 = s_10_St_13_OFF_3;
        if (v_116_1) {
          v_116_2_1 = v_116_2;
          if (v_116_2_1) {
            v_116_3_1_1 = v_116_3;
          } else {
            v_116_3_1_0 = v_116_3;
          };
        } else {
          v_116_2_0 = v_116_2;
          if (v_116_2_0) {
            v_116_3_0_1 = v_116_3;
          } else {
            v_116_3_0_0 = v_116_3;
          };
        };
        if (s_10_St_13_OFF_1) {
          s_10_St_13_OFF_2_1 = s_10_St_13_OFF_2;
          if (s_10_St_13_OFF_2_1) {
            s_10_St_13_OFF_3_1_1 = s_10_St_13_OFF_3;
          } else {
            s_10_St_13_OFF_3_1_0 = s_10_St_13_OFF_3;
          };
        } else {
          s_10_St_13_OFF_2_0 = s_10_St_13_OFF_2;
          if (s_10_St_13_OFF_2_0) {
            s_10_St_13_OFF_3_0_1 = s_10_St_13_OFF_3;
          } else {
            s_10_St_13_OFF_3_0_0 = s_10_St_13_OFF_3;
          };
        };
      };
      v_319 = v_313;
      v_320 = v_314;
      v_321 = v_315;
      v_327 = v_326;
    };
    s_10_1 = v_319;
    s_10_2 = v_320;
    s_10_3 = v_321;
    r_5 = v_327;
  } else {
    ck_15_2_0 = ck_15_2;
    if (ck_15_2_0) {
      ck_15_3_0_1 = ck_15_3;
      v_322 = true;
      v_323 = true;
      v_324 = true;
      v_329 = true;
    } else {
      ck_15_3_0_0 = ck_15_3;
      if (ck_15_3_0_0) {
        if (finish_1) {
          v_107 = true;
        } else {
          v_107 = self->pnr_5;
        };
        if (temp_ok_1) {
          r_5_St_13_REHEAT = true;
        } else {
          r_5_St_13_REHEAT = v_107;
        };
        v_328 = r_5_St_13_REHEAT;
        if (finish_1) {
          v_106_1 = true;
        } else {
          v_106_1 = false;
        };
        if (temp_ok_1) {
          s_10_St_13_REHEAT_1 = true;
        } else {
          s_10_St_13_REHEAT_1 = v_106_1;
        };
        v_316 = s_10_St_13_REHEAT_1;
        if (finish_1) {
          v_106_2 = false;
        } else {
          v_106_2 = false;
        };
        if (temp_ok_1) {
          s_10_St_13_REHEAT_2 = true;
        } else {
          s_10_St_13_REHEAT_2 = v_106_2;
        };
        v_317 = s_10_St_13_REHEAT_2;
        if (finish_1) {
          v_106_3 = false;
        } else {
          v_106_3 = true;
        };
        if (temp_ok_1) {
          s_10_St_13_REHEAT_3 = false;
        } else {
          s_10_St_13_REHEAT_3 = v_106_3;
        };
        v_318 = s_10_St_13_REHEAT_3;
        if (v_106_1) {
          v_106_2_1 = v_106_2;
          if (v_106_2_1) {
            v_106_3_1_1 = v_106_3;
          } else {
            v_106_3_1_0 = v_106_3;
          };
        } else {
          v_106_2_0 = v_106_2;
          if (v_106_2_0) {
            v_106_3_0_1 = v_106_3;
          } else {
            v_106_3_0_0 = v_106_3;
          };
        };
      } else {
        if (c_1) {
          r_5_St_13_STANDBY = true;
          s_10_St_13_STANDBY_1 = true;
          s_10_St_13_STANDBY_2 = true;
          s_10_St_13_STANDBY_3 = true;
        } else {
          r_5_St_13_STANDBY = self->pnr_5;
          s_10_St_13_STANDBY_1 = false;
          s_10_St_13_STANDBY_2 = false;
          s_10_St_13_STANDBY_3 = false;
        };
        v_328 = r_5_St_13_STANDBY;
        v_316 = s_10_St_13_STANDBY_1;
        v_317 = s_10_St_13_STANDBY_2;
        v_318 = s_10_St_13_STANDBY_3;
      };
      v_322 = v_316;
      v_323 = v_317;
      v_324 = v_318;
      v_329 = v_328;
    };
    s_10_1 = v_322;
    s_10_2 = v_323;
    s_10_3 = v_324;
    r_5 = v_329;
  };
  ck_16_1 = s_10_1;
  ck_16_2 = s_10_2;
  ck_16_3 = s_10_3;
  if (ck_16_1) {
    ck_16_2_1 = ck_16_2;
    if (ck_16_2_1) {
      ck_16_3_1_1 = ck_16_3;
      if (ck_16_3_1_1) {
        power_2_St_13_HEAT = 1500;
        nr_5_St_13_HEAT = false;
        ns_5_St_13_HEAT_1 = true;
        ns_5_St_13_HEAT_2 = true;
        ns_5_St_13_HEAT_3 = true;
        v_282 = power_2_St_13_HEAT;
        v_302 = nr_5_St_13_HEAT;
        v_287 = ns_5_St_13_HEAT_1;
        v_288 = ns_5_St_13_HEAT_2;
        v_289 = ns_5_St_13_HEAT_3;
      } else {
        power_2_St_13_MAINTAIN = 300;
        v_282 = power_2_St_13_MAINTAIN;
        nr_5_St_13_MAINTAIN = false;
        v_302 = nr_5_St_13_MAINTAIN;
        ns_5_St_13_MAINTAIN_1 = true;
        v_287 = ns_5_St_13_MAINTAIN_1;
        ns_5_St_13_MAINTAIN_2 = true;
        v_288 = ns_5_St_13_MAINTAIN_2;
        ns_5_St_13_MAINTAIN_3 = false;
        v_289 = ns_5_St_13_MAINTAIN_3;
      };
      v_284 = v_282;
      v_296 = v_287;
      v_297 = v_288;
      v_298 = v_289;
      v_304 = v_302;
      if (ck_16_3_1_1) {
        if (ns_5_St_13_HEAT_1) {
          ns_5_St_13_HEAT_2_1 = ns_5_St_13_HEAT_2;
          if (ns_5_St_13_HEAT_2_1) {
            ns_5_St_13_HEAT_3_1_1 = ns_5_St_13_HEAT_3;
          } else {
            ns_5_St_13_HEAT_3_1_0 = ns_5_St_13_HEAT_3;
          };
        } else {
          ns_5_St_13_HEAT_2_0 = ns_5_St_13_HEAT_2;
          if (ns_5_St_13_HEAT_2_0) {
            ns_5_St_13_HEAT_3_0_1 = ns_5_St_13_HEAT_3;
          } else {
            ns_5_St_13_HEAT_3_0_0 = ns_5_St_13_HEAT_3;
          };
        };
      } else {
        if (ns_5_St_13_MAINTAIN_1) {
          ns_5_St_13_MAINTAIN_2_1 = ns_5_St_13_MAINTAIN_2;
          if (ns_5_St_13_MAINTAIN_2_1) {
            ns_5_St_13_MAINTAIN_3_1_1 = ns_5_St_13_MAINTAIN_3;
          } else {
            ns_5_St_13_MAINTAIN_3_1_0 = ns_5_St_13_MAINTAIN_3;
          };
        } else {
          ns_5_St_13_MAINTAIN_2_0 = ns_5_St_13_MAINTAIN_2;
          if (ns_5_St_13_MAINTAIN_2_0) {
            ns_5_St_13_MAINTAIN_3_0_1 = ns_5_St_13_MAINTAIN_3;
          } else {
            ns_5_St_13_MAINTAIN_3_0_0 = ns_5_St_13_MAINTAIN_3;
          };
        };
      };
    } else {
      ck_16_3_1_0 = ck_16_3;
      if (ck_16_3_1_0) {
        v_283 = 0;
        v_303 = true;
        v_290 = true;
        v_291 = true;
        v_292 = true;
      } else {
        power_2_St_13_OFF = 0;
        v_283 = power_2_St_13_OFF;
        nr_5_St_13_OFF = false;
        v_303 = nr_5_St_13_OFF;
        ns_5_St_13_OFF_1 = true;
        v_290 = ns_5_St_13_OFF_1;
        ns_5_St_13_OFF_2 = false;
        v_291 = ns_5_St_13_OFF_2;
        ns_5_St_13_OFF_3 = false;
        v_292 = ns_5_St_13_OFF_3;
        if (ns_5_St_13_OFF_1) {
          ns_5_St_13_OFF_2_1 = ns_5_St_13_OFF_2;
          if (ns_5_St_13_OFF_2_1) {
            ns_5_St_13_OFF_3_1_1 = ns_5_St_13_OFF_3;
          } else {
            ns_5_St_13_OFF_3_1_0 = ns_5_St_13_OFF_3;
          };
        } else {
          ns_5_St_13_OFF_2_0 = ns_5_St_13_OFF_2;
          if (ns_5_St_13_OFF_2_0) {
            ns_5_St_13_OFF_3_0_1 = ns_5_St_13_OFF_3;
          } else {
            ns_5_St_13_OFF_3_0_0 = ns_5_St_13_OFF_3;
          };
        };
      };
      v_284 = v_283;
      v_296 = v_290;
      v_297 = v_291;
      v_298 = v_292;
      v_304 = v_303;
    };
    power_2 = v_284;
    ns_5_1 = v_296;
    ns_5_2 = v_297;
    ns_5_3 = v_298;
    nr_5 = v_304;
  } else {
    ck_16_2_0 = ck_16_2;
    if (ck_16_2_0) {
      ck_16_3_0_1 = ck_16_3;
      v_286 = 0;
      v_299 = true;
      v_300 = true;
      v_301 = true;
      v_306 = true;
    } else {
      ck_16_3_0_0 = ck_16_3;
      if (ck_16_3_0_0) {
        power_2_St_13_REHEAT = 1000;
        v_285 = power_2_St_13_REHEAT;
        nr_5_St_13_REHEAT = false;
        v_305 = nr_5_St_13_REHEAT;
        ns_5_St_13_REHEAT_1 = false;
        v_293 = ns_5_St_13_REHEAT_1;
        ns_5_St_13_REHEAT_2 = false;
        v_294 = ns_5_St_13_REHEAT_2;
        ns_5_St_13_REHEAT_3 = true;
        v_295 = ns_5_St_13_REHEAT_3;
      } else {
        power_2_St_13_STANDBY = 0;
        nr_5_St_13_STANDBY = false;
        ns_5_St_13_STANDBY_1 = false;
        ns_5_St_13_STANDBY_2 = false;
        ns_5_St_13_STANDBY_3 = false;
        v_285 = power_2_St_13_STANDBY;
        v_305 = nr_5_St_13_STANDBY;
        v_293 = ns_5_St_13_STANDBY_1;
        v_294 = ns_5_St_13_STANDBY_2;
        v_295 = ns_5_St_13_STANDBY_3;
      };
      v_286 = v_285;
      v_299 = v_293;
      v_300 = v_294;
      v_301 = v_295;
      v_306 = v_305;
    };
    power_2 = v_286;
    ns_5_1 = v_299;
    ns_5_2 = v_300;
    ns_5_3 = v_301;
    nr_5 = v_306;
  };
  _out->p3 = power_2;
  if (ns_5_1) {
    ns_5_2_1 = ns_5_2;
    if (ns_5_2_1) {
      ns_5_3_1_1 = ns_5_3;
    } else {
      ns_5_3_1_0 = ns_5_3;
    };
  } else {
    ns_5_2_0 = ns_5_2;
    if (ns_5_2_0) {
      ns_5_3_0_1 = ns_5_3;
    } else {
      ns_5_3_0_0 = ns_5_3;
    };
  };
  if (!(ck_16_1)) {
    if (!(ck_16_2_0)) {
      if (ck_16_3_0_0) {
        if (ns_5_St_13_REHEAT_1) {
          ns_5_St_13_REHEAT_2_1 = ns_5_St_13_REHEAT_2;
          if (ns_5_St_13_REHEAT_2_1) {
            ns_5_St_13_REHEAT_3_1_1 = ns_5_St_13_REHEAT_3;
          } else {
            ns_5_St_13_REHEAT_3_1_0 = ns_5_St_13_REHEAT_3;
          };
        } else {
          ns_5_St_13_REHEAT_2_0 = ns_5_St_13_REHEAT_2;
          if (ns_5_St_13_REHEAT_2_0) {
            ns_5_St_13_REHEAT_3_0_1 = ns_5_St_13_REHEAT_3;
          } else {
            ns_5_St_13_REHEAT_3_0_0 = ns_5_St_13_REHEAT_3;
          };
        };
      } else {
        if (ns_5_St_13_STANDBY_1) {
          ns_5_St_13_STANDBY_2_1 = ns_5_St_13_STANDBY_2;
          if (ns_5_St_13_STANDBY_2_1) {
            ns_5_St_13_STANDBY_3_1_1 = ns_5_St_13_STANDBY_3;
          } else {
            ns_5_St_13_STANDBY_3_1_0 = ns_5_St_13_STANDBY_3;
          };
        } else {
          ns_5_St_13_STANDBY_2_0 = ns_5_St_13_STANDBY_2;
          if (ns_5_St_13_STANDBY_2_0) {
            ns_5_St_13_STANDBY_3_0_1 = ns_5_St_13_STANDBY_3;
          } else {
            ns_5_St_13_STANDBY_3_0_0 = ns_5_St_13_STANDBY_3;
          };
        };
      };
    };
  };
  if (s_10_1) {
    s_10_2_1 = s_10_2;
    if (s_10_2_1) {
      s_10_3_1_1 = s_10_3;
    } else {
      s_10_3_1_0 = s_10_3;
    };
  } else {
    s_10_2_0 = s_10_2;
    if (s_10_2_0) {
      s_10_3_0_1 = s_10_3;
    } else {
      s_10_3_0_0 = s_10_3;
    };
  };
  if (!(ck_15_1)) {
    if (!(ck_15_2_0)) {
      if (ck_15_3_0_0) {
        if (s_10_St_13_REHEAT_1) {
          s_10_St_13_REHEAT_2_1 = s_10_St_13_REHEAT_2;
          if (s_10_St_13_REHEAT_2_1) {
            s_10_St_13_REHEAT_3_1_1 = s_10_St_13_REHEAT_3;
          } else {
            s_10_St_13_REHEAT_3_1_0 = s_10_St_13_REHEAT_3;
          };
        } else {
          s_10_St_13_REHEAT_2_0 = s_10_St_13_REHEAT_2;
          if (s_10_St_13_REHEAT_2_0) {
            s_10_St_13_REHEAT_3_0_1 = s_10_St_13_REHEAT_3;
          } else {
            s_10_St_13_REHEAT_3_0_0 = s_10_St_13_REHEAT_3;
          };
        };
      } else {
        if (s_10_St_13_STANDBY_1) {
          s_10_St_13_STANDBY_2_1 = s_10_St_13_STANDBY_2;
          if (s_10_St_13_STANDBY_2_1) {
            s_10_St_13_STANDBY_3_1_1 = s_10_St_13_STANDBY_3;
          } else {
            s_10_St_13_STANDBY_3_1_0 = s_10_St_13_STANDBY_3;
          };
        } else {
          s_10_St_13_STANDBY_2_0 = s_10_St_13_STANDBY_2;
          if (s_10_St_13_STANDBY_2_0) {
            s_10_St_13_STANDBY_3_0_1 = s_10_St_13_STANDBY_3;
          } else {
            s_10_St_13_STANDBY_3_0_0 = s_10_St_13_STANDBY_3;
          };
        };
      };
    };
  };
  if (ck_13_1) {
    ck_13_2_1 = ck_13_2;
    if (ck_13_2_1) {
      ck_13_3_1_1 = ck_13_3;
      if (ck_13_3_1_1) {
        if (s_2) {
          r_6_St_14_OFF = true;
          s_11_St_14_OFF_1 = false;
          s_11_St_14_OFF_2 = false;
          s_11_St_14_OFF_3 = false;
        } else {
          r_6_St_14_OFF = self->pnr_6;
          s_11_St_14_OFF_1 = true;
          s_11_St_14_OFF_2 = true;
          s_11_St_14_OFF_3 = true;
        };
        v_381 = r_6_St_14_OFF;
        v_363 = s_11_St_14_OFF_1;
        v_364 = s_11_St_14_OFF_2;
        v_365 = s_11_St_14_OFF_3;
        if (s_11_St_14_OFF_1) {
          s_11_St_14_OFF_2_1 = s_11_St_14_OFF_2;
          if (s_11_St_14_OFF_2_1) {
            s_11_St_14_OFF_3_1_1 = s_11_St_14_OFF_3;
          } else {
            s_11_St_14_OFF_3_1_0 = s_11_St_14_OFF_3;
          };
        } else {
          s_11_St_14_OFF_2_0 = s_11_St_14_OFF_2;
          if (s_11_St_14_OFF_2_0) {
            s_11_St_14_OFF_3_0_1 = s_11_St_14_OFF_3;
          } else {
            s_11_St_14_OFF_3_0_0 = s_11_St_14_OFF_3;
          };
        };
      } else {
        if (e_1) {
          r_6_St_14_RINSE = true;
        } else {
          r_6_St_14_RINSE = self->pnr_6;
        };
        v_381 = r_6_St_14_RINSE;
        if (e_1) {
          s_11_St_14_RINSE_1 = true;
        } else {
          s_11_St_14_RINSE_1 = true;
        };
        v_363 = s_11_St_14_RINSE_1;
        if (e_1) {
          s_11_St_14_RINSE_2 = false;
        } else {
          s_11_St_14_RINSE_2 = true;
        };
        v_364 = s_11_St_14_RINSE_2;
        if (e_1) {
          s_11_St_14_RINSE_3 = false;
        } else {
          s_11_St_14_RINSE_3 = false;
        };
        v_365 = s_11_St_14_RINSE_3;
        if (s_11_St_14_RINSE_1) {
          s_11_St_14_RINSE_2_1 = s_11_St_14_RINSE_2;
          if (s_11_St_14_RINSE_2_1) {
            s_11_St_14_RINSE_3_1_1 = s_11_St_14_RINSE_3;
          } else {
            s_11_St_14_RINSE_3_1_0 = s_11_St_14_RINSE_3;
          };
        } else {
          s_11_St_14_RINSE_2_0 = s_11_St_14_RINSE_2;
          if (s_11_St_14_RINSE_2_0) {
            s_11_St_14_RINSE_3_0_1 = s_11_St_14_RINSE_3;
          } else {
            s_11_St_14_RINSE_3_0_0 = s_11_St_14_RINSE_3;
          };
        };
      };
      v_375 = v_363;
      v_376 = v_364;
      v_377 = v_365;
      v_383 = v_381;
    } else {
      ck_13_3_1_0 = ck_13_3;
      if (ck_13_3_1_0) {
        v_382 = true;
        v_366 = true;
        v_367 = true;
        v_368 = true;
      } else {
        if (e_1) {
          r_6_St_14_SPIN = true;
        } else {
          r_6_St_14_SPIN = self->pnr_6;
        };
        v_382 = r_6_St_14_SPIN;
        if (e_1) {
          s_11_St_14_SPIN_1 = true;
        } else {
          s_11_St_14_SPIN_1 = true;
        };
        v_366 = s_11_St_14_SPIN_1;
        if (e_1) {
          s_11_St_14_SPIN_2 = true;
        } else {
          s_11_St_14_SPIN_2 = false;
        };
        v_367 = s_11_St_14_SPIN_2;
        if (e_1) {
          s_11_St_14_SPIN_3 = true;
        } else {
          s_11_St_14_SPIN_3 = false;
        };
        v_368 = s_11_St_14_SPIN_3;
      };
      v_375 = v_366;
      v_376 = v_367;
      v_377 = v_368;
      v_383 = v_382;
      if (!(ck_13_3_1_0)) {
        if (s_11_St_14_SPIN_1) {
          s_11_St_14_SPIN_2_1 = s_11_St_14_SPIN_2;
          if (s_11_St_14_SPIN_2_1) {
            s_11_St_14_SPIN_3_1_1 = s_11_St_14_SPIN_3;
          } else {
            s_11_St_14_SPIN_3_1_0 = s_11_St_14_SPIN_3;
          };
        } else {
          s_11_St_14_SPIN_2_0 = s_11_St_14_SPIN_2;
          if (s_11_St_14_SPIN_2_0) {
            s_11_St_14_SPIN_3_0_1 = s_11_St_14_SPIN_3;
          } else {
            s_11_St_14_SPIN_3_0_0 = s_11_St_14_SPIN_3;
          };
        };
      };
    };
    s_11_1 = v_375;
    s_11_2 = v_376;
    s_11_3 = v_377;
    r_6 = v_383;
  } else {
    ck_13_2_0 = ck_13_2;
    if (ck_13_2_0) {
      ck_13_3_0_1 = ck_13_3;
      if (ck_13_3_0_1) {
        if (c) {
          r_6_St_14_STANDBY = true;
        } else {
          r_6_St_14_STANDBY = self->pnr_6;
        };
        v_384 = r_6_St_14_STANDBY;
        if (c) {
          s_11_St_14_STANDBY_1 = false;
        } else {
          s_11_St_14_STANDBY_1 = false;
        };
        v_369 = s_11_St_14_STANDBY_1;
        if (c) {
          s_11_St_14_STANDBY_2 = true;
        } else {
          s_11_St_14_STANDBY_2 = true;
        };
        v_370 = s_11_St_14_STANDBY_2;
        if (c) {
          s_11_St_14_STANDBY_3 = false;
        } else {
          s_11_St_14_STANDBY_3 = true;
        };
        v_371 = s_11_St_14_STANDBY_3;
      } else {
        if (e_1) {
          r_6_St_14_WASHING = true;
          s_11_St_14_WASHING_1 = true;
          s_11_St_14_WASHING_2 = true;
          s_11_St_14_WASHING_3 = false;
        } else {
          r_6_St_14_WASHING = self->pnr_6;
          s_11_St_14_WASHING_1 = false;
          s_11_St_14_WASHING_2 = true;
          s_11_St_14_WASHING_3 = false;
        };
        v_384 = r_6_St_14_WASHING;
        v_369 = s_11_St_14_WASHING_1;
        v_370 = s_11_St_14_WASHING_2;
        v_371 = s_11_St_14_WASHING_3;
      };
      v_378 = v_369;
      v_379 = v_370;
      v_380 = v_371;
      v_386 = v_384;
    } else {
      ck_13_3_0_0 = ck_13_3;
      if (ck_13_3_0_0) {
        v_385 = true;
        v_372 = true;
        v_373 = true;
        v_374 = true;
      } else {
        v_102 = !(c);
        v_103 = (e_1&&v_102);
        if (v_103) {
          v_105 = true;
          v_104_1 = false;
          v_104_2 = true;
          v_104_3 = true;
        } else {
          v_105 = self->pnr_6;
          v_104_1 = false;
          v_104_2 = false;
          v_104_3 = false;
        };
        v_101 = (e_1&&c);
        if (v_101) {
          r_6_St_14_WF = true;
        } else {
          r_6_St_14_WF = v_105;
        };
        v_385 = r_6_St_14_WF;
        if (v_101) {
          s_11_St_14_WF_1 = false;
        } else {
          s_11_St_14_WF_1 = v_104_1;
        };
        v_372 = s_11_St_14_WF_1;
        if (v_101) {
          s_11_St_14_WF_2 = true;
        } else {
          s_11_St_14_WF_2 = v_104_2;
        };
        v_373 = s_11_St_14_WF_2;
        if (v_101) {
          s_11_St_14_WF_3 = false;
        } else {
          s_11_St_14_WF_3 = v_104_3;
        };
        v_374 = s_11_St_14_WF_3;
        if (v_104_1) {
          v_104_2_1 = v_104_2;
          if (v_104_2_1) {
            v_104_3_1_1 = v_104_3;
          } else {
            v_104_3_1_0 = v_104_3;
          };
        } else {
          v_104_2_0 = v_104_2;
          if (v_104_2_0) {
            v_104_3_0_1 = v_104_3;
          } else {
            v_104_3_0_0 = v_104_3;
          };
        };
        if (s_11_St_14_WF_1) {
          s_11_St_14_WF_2_1 = s_11_St_14_WF_2;
          if (s_11_St_14_WF_2_1) {
            s_11_St_14_WF_3_1_1 = s_11_St_14_WF_3;
          } else {
            s_11_St_14_WF_3_1_0 = s_11_St_14_WF_3;
          };
        } else {
          s_11_St_14_WF_2_0 = s_11_St_14_WF_2;
          if (s_11_St_14_WF_2_0) {
            s_11_St_14_WF_3_0_1 = s_11_St_14_WF_3;
          } else {
            s_11_St_14_WF_3_0_0 = s_11_St_14_WF_3;
          };
        };
      };
      v_378 = v_372;
      v_379 = v_373;
      v_380 = v_374;
      v_386 = v_385;
    };
    s_11_1 = v_378;
    s_11_2 = v_379;
    s_11_3 = v_380;
    r_6 = v_386;
  };
  ck_14_1 = s_11_1;
  ck_14_2 = s_11_2;
  ck_14_3 = s_11_3;
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      ck_14_3_1_1 = ck_14_3;
      if (ck_14_3_1_1) {
        power_1_St_14_OFF = 0;
        nr_6_St_14_OFF = false;
        ns_6_St_14_OFF_1 = true;
        ns_6_St_14_OFF_2 = true;
        ns_6_St_14_OFF_3 = true;
        v_330 = power_1_St_14_OFF;
        v_354 = nr_6_St_14_OFF;
        v_336 = ns_6_St_14_OFF_1;
        v_337 = ns_6_St_14_OFF_2;
        v_338 = ns_6_St_14_OFF_3;
        if (ns_6_St_14_OFF_1) {
          ns_6_St_14_OFF_2_1 = ns_6_St_14_OFF_2;
          if (ns_6_St_14_OFF_2_1) {
            ns_6_St_14_OFF_3_1_1 = ns_6_St_14_OFF_3;
          } else {
            ns_6_St_14_OFF_3_1_0 = ns_6_St_14_OFF_3;
          };
        } else {
          ns_6_St_14_OFF_2_0 = ns_6_St_14_OFF_2;
          if (ns_6_St_14_OFF_2_0) {
            ns_6_St_14_OFF_3_0_1 = ns_6_St_14_OFF_3;
          } else {
            ns_6_St_14_OFF_3_0_0 = ns_6_St_14_OFF_3;
          };
        };
      } else {
        power_1_St_14_RINSE = 200;
        v_330 = power_1_St_14_RINSE;
        nr_6_St_14_RINSE = false;
        v_354 = nr_6_St_14_RINSE;
        ns_6_St_14_RINSE_1 = true;
        v_336 = ns_6_St_14_RINSE_1;
        ns_6_St_14_RINSE_2 = true;
        v_337 = ns_6_St_14_RINSE_2;
        ns_6_St_14_RINSE_3 = false;
        v_338 = ns_6_St_14_RINSE_3;
        if (ns_6_St_14_RINSE_1) {
          ns_6_St_14_RINSE_2_1 = ns_6_St_14_RINSE_2;
          if (ns_6_St_14_RINSE_2_1) {
            ns_6_St_14_RINSE_3_1_1 = ns_6_St_14_RINSE_3;
          } else {
            ns_6_St_14_RINSE_3_1_0 = ns_6_St_14_RINSE_3;
          };
        } else {
          ns_6_St_14_RINSE_2_0 = ns_6_St_14_RINSE_2;
          if (ns_6_St_14_RINSE_2_0) {
            ns_6_St_14_RINSE_3_0_1 = ns_6_St_14_RINSE_3;
          } else {
            ns_6_St_14_RINSE_3_0_0 = ns_6_St_14_RINSE_3;
          };
        };
      };
      v_332 = v_330;
      v_348 = v_336;
      v_349 = v_337;
      v_350 = v_338;
      v_356 = v_354;
    } else {
      ck_14_3_1_0 = ck_14_3;
      if (ck_14_3_1_0) {
        v_331 = 0;
        v_355 = true;
        v_339 = true;
        v_340 = true;
        v_341 = true;
      } else {
        power_1_St_14_SPIN = 800;
        v_331 = power_1_St_14_SPIN;
        nr_6_St_14_SPIN = false;
        v_355 = nr_6_St_14_SPIN;
        ns_6_St_14_SPIN_1 = true;
        v_339 = ns_6_St_14_SPIN_1;
        ns_6_St_14_SPIN_2 = false;
        v_340 = ns_6_St_14_SPIN_2;
        ns_6_St_14_SPIN_3 = false;
        v_341 = ns_6_St_14_SPIN_3;
      };
      v_332 = v_331;
      v_348 = v_339;
      v_349 = v_340;
      v_350 = v_341;
      v_356 = v_355;
      if (!(ck_14_3_1_0)) {
        if (ns_6_St_14_SPIN_1) {
          ns_6_St_14_SPIN_2_1 = ns_6_St_14_SPIN_2;
          if (ns_6_St_14_SPIN_2_1) {
            ns_6_St_14_SPIN_3_1_1 = ns_6_St_14_SPIN_3;
          } else {
            ns_6_St_14_SPIN_3_1_0 = ns_6_St_14_SPIN_3;
          };
        } else {
          ns_6_St_14_SPIN_2_0 = ns_6_St_14_SPIN_2;
          if (ns_6_St_14_SPIN_2_0) {
            ns_6_St_14_SPIN_3_0_1 = ns_6_St_14_SPIN_3;
          } else {
            ns_6_St_14_SPIN_3_0_0 = ns_6_St_14_SPIN_3;
          };
        };
      };
    };
    power_1 = v_332;
    ns_6_1 = v_348;
    ns_6_2 = v_349;
    ns_6_3 = v_350;
    nr_6 = v_356;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      ck_14_3_0_1 = ck_14_3;
      if (ck_14_3_0_1) {
        power_1_St_14_STANDBY = 0;
        v_333 = power_1_St_14_STANDBY;
        nr_6_St_14_STANDBY = false;
        v_357 = nr_6_St_14_STANDBY;
        ns_6_St_14_STANDBY_1 = false;
        v_342 = ns_6_St_14_STANDBY_1;
        ns_6_St_14_STANDBY_2 = true;
        v_343 = ns_6_St_14_STANDBY_2;
        ns_6_St_14_STANDBY_3 = true;
        v_344 = ns_6_St_14_STANDBY_3;
      } else {
        power_1_St_14_WASHING = 250;
        nr_6_St_14_WASHING = false;
        ns_6_St_14_WASHING_1 = false;
        ns_6_St_14_WASHING_2 = true;
        ns_6_St_14_WASHING_3 = false;
        v_333 = power_1_St_14_WASHING;
        v_357 = nr_6_St_14_WASHING;
        v_342 = ns_6_St_14_WASHING_1;
        v_343 = ns_6_St_14_WASHING_2;
        v_344 = ns_6_St_14_WASHING_3;
      };
      v_335 = v_333;
      v_351 = v_342;
      v_352 = v_343;
      v_353 = v_344;
      v_359 = v_357;
    } else {
      ck_14_3_0_0 = ck_14_3;
      if (ck_14_3_0_0) {
        v_334 = 0;
        v_358 = true;
        v_345 = true;
        v_346 = true;
        v_347 = true;
      } else {
        power_1_St_14_WF = 15;
        v_334 = power_1_St_14_WF;
        nr_6_St_14_WF = false;
        v_358 = nr_6_St_14_WF;
        ns_6_St_14_WF_1 = false;
        v_345 = ns_6_St_14_WF_1;
        ns_6_St_14_WF_2 = false;
        v_346 = ns_6_St_14_WF_2;
        ns_6_St_14_WF_3 = false;
        v_347 = ns_6_St_14_WF_3;
        if (ns_6_St_14_WF_1) {
          ns_6_St_14_WF_2_1 = ns_6_St_14_WF_2;
          if (ns_6_St_14_WF_2_1) {
            ns_6_St_14_WF_3_1_1 = ns_6_St_14_WF_3;
          } else {
            ns_6_St_14_WF_3_1_0 = ns_6_St_14_WF_3;
          };
        } else {
          ns_6_St_14_WF_2_0 = ns_6_St_14_WF_2;
          if (ns_6_St_14_WF_2_0) {
            ns_6_St_14_WF_3_0_1 = ns_6_St_14_WF_3;
          } else {
            ns_6_St_14_WF_3_0_0 = ns_6_St_14_WF_3;
          };
        };
      };
      v_335 = v_334;
      v_351 = v_345;
      v_352 = v_346;
      v_353 = v_347;
      v_359 = v_358;
    };
    power_1 = v_335;
    ns_6_1 = v_351;
    ns_6_2 = v_352;
    ns_6_3 = v_353;
    nr_6 = v_359;
  };
  _out->p2 = power_1;
  if (ns_6_1) {
    ns_6_2_1 = ns_6_2;
    if (ns_6_2_1) {
      ns_6_3_1_1 = ns_6_3;
    } else {
      ns_6_3_1_0 = ns_6_3;
    };
  } else {
    ns_6_2_0 = ns_6_2;
    if (ns_6_2_0) {
      ns_6_3_0_1 = ns_6_3;
    } else {
      ns_6_3_0_0 = ns_6_3;
    };
  };
  if (!(ck_14_1)) {
    if (ck_14_2_0) {
      if (ck_14_3_0_1) {
        if (ns_6_St_14_STANDBY_1) {
          ns_6_St_14_STANDBY_2_1 = ns_6_St_14_STANDBY_2;
          if (ns_6_St_14_STANDBY_2_1) {
            ns_6_St_14_STANDBY_3_1_1 = ns_6_St_14_STANDBY_3;
          } else {
            ns_6_St_14_STANDBY_3_1_0 = ns_6_St_14_STANDBY_3;
          };
        } else {
          ns_6_St_14_STANDBY_2_0 = ns_6_St_14_STANDBY_2;
          if (ns_6_St_14_STANDBY_2_0) {
            ns_6_St_14_STANDBY_3_0_1 = ns_6_St_14_STANDBY_3;
          } else {
            ns_6_St_14_STANDBY_3_0_0 = ns_6_St_14_STANDBY_3;
          };
        };
      } else {
        if (ns_6_St_14_WASHING_1) {
          ns_6_St_14_WASHING_2_1 = ns_6_St_14_WASHING_2;
          if (ns_6_St_14_WASHING_2_1) {
            ns_6_St_14_WASHING_3_1_1 = ns_6_St_14_WASHING_3;
          } else {
            ns_6_St_14_WASHING_3_1_0 = ns_6_St_14_WASHING_3;
          };
        } else {
          ns_6_St_14_WASHING_2_0 = ns_6_St_14_WASHING_2;
          if (ns_6_St_14_WASHING_2_0) {
            ns_6_St_14_WASHING_3_0_1 = ns_6_St_14_WASHING_3;
          } else {
            ns_6_St_14_WASHING_3_0_0 = ns_6_St_14_WASHING_3;
          };
        };
      };
    };
  };
  if (s_11_1) {
    s_11_2_1 = s_11_2;
    if (s_11_2_1) {
      s_11_3_1_1 = s_11_3;
    } else {
      s_11_3_1_0 = s_11_3;
    };
  } else {
    s_11_2_0 = s_11_2;
    if (s_11_2_0) {
      s_11_3_0_1 = s_11_3;
    } else {
      s_11_3_0_0 = s_11_3;
    };
  };
  if (!(ck_13_1)) {
    if (ck_13_2_0) {
      if (ck_13_3_0_1) {
        if (s_11_St_14_STANDBY_1) {
          s_11_St_14_STANDBY_2_1 = s_11_St_14_STANDBY_2;
          if (s_11_St_14_STANDBY_2_1) {
            s_11_St_14_STANDBY_3_1_1 = s_11_St_14_STANDBY_3;
          } else {
            s_11_St_14_STANDBY_3_1_0 = s_11_St_14_STANDBY_3;
          };
        } else {
          s_11_St_14_STANDBY_2_0 = s_11_St_14_STANDBY_2;
          if (s_11_St_14_STANDBY_2_0) {
            s_11_St_14_STANDBY_3_0_1 = s_11_St_14_STANDBY_3;
          } else {
            s_11_St_14_STANDBY_3_0_0 = s_11_St_14_STANDBY_3;
          };
        };
      } else {
        if (s_11_St_14_WASHING_1) {
          s_11_St_14_WASHING_2_1 = s_11_St_14_WASHING_2;
          if (s_11_St_14_WASHING_2_1) {
            s_11_St_14_WASHING_3_1_1 = s_11_St_14_WASHING_3;
          } else {
            s_11_St_14_WASHING_3_1_0 = s_11_St_14_WASHING_3;
          };
        } else {
          s_11_St_14_WASHING_2_0 = s_11_St_14_WASHING_2;
          if (s_11_St_14_WASHING_2_0) {
            s_11_St_14_WASHING_3_0_1 = s_11_St_14_WASHING_3;
          } else {
            s_11_St_14_WASHING_3_0_0 = s_11_St_14_WASHING_3;
          };
        };
      };
    };
  };
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      v_88 = (up2_1&&c2_1);
      if (v_88) {
        v_90 = true;
        v_89_1 = false;
        v_89_2 = true;
      } else {
        v_90 = self->pnr_7;
        v_89_1 = true;
        v_89_2 = true;
      };
      v_86 = !(c1_1);
      v_87 = (down1_1||v_86);
      if (v_87) {
        r_7_St_15_ECO = true;
      } else {
        r_7_St_15_ECO = v_90;
      };
      v_403 = r_7_St_15_ECO;
      if (v_87) {
        s_12_St_15_ECO_1 = true;
      } else {
        s_12_St_15_ECO_1 = v_89_1;
      };
      v_399 = s_12_St_15_ECO_1;
      if (v_87) {
        s_12_St_15_ECO_2 = false;
      } else {
        s_12_St_15_ECO_2 = v_89_2;
      };
      v_400 = s_12_St_15_ECO_2;
      if (v_89_1) {
        v_89_2_1 = v_89_2;
      } else {
        v_89_2_0 = v_89_2;
      };
      if (s_12_St_15_ECO_1) {
        s_12_St_15_ECO_2_1 = s_12_St_15_ECO_2;
      } else {
        s_12_St_15_ECO_2_0 = s_12_St_15_ECO_2;
      };
    } else {
      v_94 = (up2_1&&c2_1);
      if (v_94) {
        v_96 = true;
        v_95_1 = false;
        v_95_2 = true;
      } else {
        v_96 = self->pnr_7;
        v_95_1 = true;
        v_95_2 = false;
      };
      v_92 = !(c1_1);
      v_93 = (down1_1||v_92);
      if (v_93) {
        v_98 = true;
        v_97_1 = false;
        v_97_2 = false;
      } else {
        v_98 = v_96;
        v_97_1 = v_95_1;
        v_97_2 = v_95_2;
      };
      v_91 = (up1_1&&c1_1);
      if (v_91) {
        r_7_St_15_FROST = true;
        s_12_St_15_FROST_1 = true;
        s_12_St_15_FROST_2 = true;
      } else {
        r_7_St_15_FROST = v_98;
        s_12_St_15_FROST_1 = v_97_1;
        s_12_St_15_FROST_2 = v_97_2;
      };
      v_403 = r_7_St_15_FROST;
      v_399 = s_12_St_15_FROST_1;
      v_400 = s_12_St_15_FROST_2;
      if (v_95_1) {
        v_95_2_1 = v_95_2;
      } else {
        v_95_2_0 = v_95_2;
      };
      if (v_97_1) {
        v_97_2_1 = v_97_2;
      } else {
        v_97_2_0 = v_97_2;
      };
      if (s_12_St_15_FROST_1) {
        s_12_St_15_FROST_2_1 = s_12_St_15_FROST_2;
      } else {
        s_12_St_15_FROST_2_0 = s_12_St_15_FROST_2;
      };
    };
    s_12_1 = v_399;
    s_12_2 = v_400;
    r_7 = v_403;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      v_82 = !(c2_1);
      v_83 = (down2_1&&v_82);
      if (v_83) {
        v_85 = true;
        v_84_1 = true;
        v_84_2 = false;
      } else {
        v_85 = self->pnr_7;
        v_84_1 = false;
        v_84_2 = true;
      };
      v_80 = !(c1_1);
      v_81 = (down1_1&&v_80);
      if (v_81) {
        r_7_St_15_HIGHT = true;
      } else {
        r_7_St_15_HIGHT = v_85;
      };
      v_404 = r_7_St_15_HIGHT;
      if (v_81) {
        s_12_St_15_HIGHT_1 = true;
      } else {
        s_12_St_15_HIGHT_1 = v_84_1;
      };
      v_401 = s_12_St_15_HIGHT_1;
      if (v_81) {
        s_12_St_15_HIGHT_2 = true;
      } else {
        s_12_St_15_HIGHT_2 = v_84_2;
      };
      v_402 = s_12_St_15_HIGHT_2;
    } else {
      v_99 = !(c1_1);
      v_100 = (up1_1||v_99);
      if (v_100) {
        r_7_St_15_OFF = true;
        s_12_St_15_OFF_1 = true;
        s_12_St_15_OFF_2 = false;
      } else {
        r_7_St_15_OFF = self->pnr_7;
        s_12_St_15_OFF_1 = false;
        s_12_St_15_OFF_2 = false;
      };
      v_404 = r_7_St_15_OFF;
      v_401 = s_12_St_15_OFF_1;
      v_402 = s_12_St_15_OFF_2;
    };
    s_12_1 = v_401;
    s_12_2 = v_402;
    r_7 = v_404;
  };
  ck_12_1 = s_12_1;
  ck_12_2 = s_12_2;
  if (ck_12_1) {
    ck_12_2_1 = ck_12_2;
    if (ck_12_2_1) {
      power_St_15_ECO = 1500;
      v_387 = power_St_15_ECO;
      ss_1_St_15_ECO = 2;
      v_389 = ss_1_St_15_ECO;
      nr_7_St_15_ECO = false;
      v_395 = nr_7_St_15_ECO;
      ns_7_St_15_ECO_1 = true;
      v_391 = ns_7_St_15_ECO_1;
      ns_7_St_15_ECO_2 = true;
      v_392 = ns_7_St_15_ECO_2;
      if (ns_7_St_15_ECO_1) {
        ns_7_St_15_ECO_2_1 = ns_7_St_15_ECO_2;
      } else {
        ns_7_St_15_ECO_2_0 = ns_7_St_15_ECO_2;
      };
    } else {
      power_St_15_FROST = 300;
      ss_1_St_15_FROST = 1;
      nr_7_St_15_FROST = false;
      ns_7_St_15_FROST_1 = true;
      ns_7_St_15_FROST_2 = false;
      v_387 = power_St_15_FROST;
      v_389 = ss_1_St_15_FROST;
      v_395 = nr_7_St_15_FROST;
      v_391 = ns_7_St_15_FROST_1;
      v_392 = ns_7_St_15_FROST_2;
      if (ns_7_St_15_FROST_1) {
        ns_7_St_15_FROST_2_1 = ns_7_St_15_FROST_2;
      } else {
        ns_7_St_15_FROST_2_0 = ns_7_St_15_FROST_2;
      };
    };
    power = v_387;
    ss_1 = v_389;
    ns_7_1 = v_391;
    ns_7_2 = v_392;
    nr_7 = v_395;
  } else {
    ck_12_2_0 = ck_12_2;
    if (ck_12_2_0) {
      power_St_15_HIGHT = 2000;
      v_388 = power_St_15_HIGHT;
      ss_1_St_15_HIGHT = 3;
      v_390 = ss_1_St_15_HIGHT;
      nr_7_St_15_HIGHT = false;
      v_396 = nr_7_St_15_HIGHT;
      ns_7_St_15_HIGHT_1 = false;
      v_393 = ns_7_St_15_HIGHT_1;
      ns_7_St_15_HIGHT_2 = true;
      v_394 = ns_7_St_15_HIGHT_2;
    } else {
      power_St_15_OFF = 0;
      ss_1_St_15_OFF = 0;
      nr_7_St_15_OFF = false;
      ns_7_St_15_OFF_1 = false;
      ns_7_St_15_OFF_2 = false;
      v_388 = power_St_15_OFF;
      v_390 = ss_1_St_15_OFF;
      v_396 = nr_7_St_15_OFF;
      v_393 = ns_7_St_15_OFF_1;
      v_394 = ns_7_St_15_OFF_2;
    };
    power = v_388;
    ss_1 = v_390;
    ns_7_1 = v_393;
    ns_7_2 = v_394;
    nr_7 = v_396;
  };
  _out->ss = ss_1;
  v_59 = (_out->ss<2);
  v_60 = (v_58&&v_59);
  rule4 = (_out->room_oc||v_60);
  v_63 = (_out->ss==0);
  v_64 = (_out->ss==1);
  v_65 = (v_63||v_64);
  rule3 = (v_62||v_65);
  _out->p1 = power;
  if (ns_7_1) {
    ns_7_2_1 = ns_7_2;
  } else {
    ns_7_2_0 = ns_7_2;
  };
  if (!(ck_12_1)) {
    if (ck_12_2_0) {
      if (ns_7_St_15_HIGHT_1) {
        ns_7_St_15_HIGHT_2_1 = ns_7_St_15_HIGHT_2;
      } else {
        ns_7_St_15_HIGHT_2_0 = ns_7_St_15_HIGHT_2;
      };
    } else {
      if (ns_7_St_15_OFF_1) {
        ns_7_St_15_OFF_2_1 = ns_7_St_15_OFF_2;
      } else {
        ns_7_St_15_OFF_2_0 = ns_7_St_15_OFF_2;
      };
    };
  };
  if (s_12_1) {
    s_12_2_1 = s_12_2;
  } else {
    s_12_2_0 = s_12_2;
  };
  if (!(ck_11_1)) {
    if (ck_11_2_0) {
      if (v_84_1) {
        v_84_2_1 = v_84_2;
      } else {
        v_84_2_0 = v_84_2;
      };
      if (s_12_St_15_HIGHT_1) {
        s_12_St_15_HIGHT_2_1 = s_12_St_15_HIGHT_2;
      } else {
        s_12_St_15_HIGHT_2_0 = s_12_St_15_HIGHT_2;
      };
    } else {
      if (s_12_St_15_OFF_1) {
        s_12_St_15_OFF_2_1 = s_12_St_15_OFF_2;
      } else {
        s_12_St_15_OFF_2_0 = s_12_St_15_OFF_2;
      };
    };
  };
  if (ck_9_1) {
    ck_9_2_1 = ck_9_2;
    if (ck_9_2_1) {
      if (eco_1) {
        v_74 = true;
        v_73_1 = true;
        v_73_2 = false;
      } else {
        v_74 = self->pnr_8;
        v_73_1 = true;
        v_73_2 = true;
      };
      v_72 = !(confort_1);
      if (v_72) {
        r_8_St_16_CONFORT = true;
      } else {
        r_8_St_16_CONFORT = v_74;
      };
      v_423 = r_8_St_16_CONFORT;
      if (v_72) {
        s_13_St_16_CONFORT_1 = false;
      } else {
        s_13_St_16_CONFORT_1 = v_73_1;
      };
      v_419 = s_13_St_16_CONFORT_1;
      if (v_72) {
        s_13_St_16_CONFORT_2 = false;
      } else {
        s_13_St_16_CONFORT_2 = v_73_2;
      };
      v_420 = s_13_St_16_CONFORT_2;
    } else {
      if (confort_1) {
        v_77 = true;
        v_76_1 = true;
        v_76_2 = true;
      } else {
        v_77 = self->pnr_8;
        v_76_1 = true;
        v_76_2 = false;
      };
      v_75 = !(eco_1);
      if (v_75) {
        r_8_St_16_ECO = true;
        s_13_St_16_ECO_1 = false;
        s_13_St_16_ECO_2 = false;
      } else {
        r_8_St_16_ECO = v_77;
        s_13_St_16_ECO_1 = v_76_1;
        s_13_St_16_ECO_2 = v_76_2;
      };
      v_423 = r_8_St_16_ECO;
      v_419 = s_13_St_16_ECO_1;
      v_420 = s_13_St_16_ECO_2;
    };
    s_13_1 = v_419;
    s_13_2 = v_420;
    r_8 = v_423;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      v_424 = true;
      v_421 = true;
      v_422 = true;
    } else {
      if (confort_1) {
        v_79 = true;
      } else {
        v_79 = self->pnr_8;
      };
      if (eco_1) {
        r_8_St_16_MS = true;
      } else {
        r_8_St_16_MS = v_79;
      };
      v_424 = r_8_St_16_MS;
      if (confort_1) {
        v_78_1 = true;
      } else {
        v_78_1 = false;
      };
      if (eco_1) {
        s_13_St_16_MS_1 = true;
      } else {
        s_13_St_16_MS_1 = v_78_1;
      };
      v_421 = s_13_St_16_MS_1;
      if (confort_1) {
        v_78_2 = true;
      } else {
        v_78_2 = false;
      };
      if (eco_1) {
        s_13_St_16_MS_2 = false;
      } else {
        s_13_St_16_MS_2 = v_78_2;
      };
      v_422 = s_13_St_16_MS_2;
      if (v_78_1) {
        v_78_2_1 = v_78_2;
      } else {
        v_78_2_0 = v_78_2;
      };
      if (s_13_St_16_MS_1) {
        s_13_St_16_MS_2_1 = s_13_St_16_MS_2;
      } else {
        s_13_St_16_MS_2_0 = s_13_St_16_MS_2;
      };
    };
    s_13_1 = v_421;
    s_13_2 = v_422;
    r_8 = v_424;
  };
  ck_10_1 = s_13_1;
  ck_10_2 = s_13_2;
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      pl_1_St_16_CONFORT = 7000;
      v_405 = pl_1_St_16_CONFORT;
      s_1_St_16_CONFORT_1 = true;
      v_407 = s_1_St_16_CONFORT_1;
      s_1_St_16_CONFORT_2 = true;
      v_408 = s_1_St_16_CONFORT_2;
      nr_8_St_16_CONFORT = false;
      v_415 = nr_8_St_16_CONFORT;
      ns_8_St_16_CONFORT_1 = true;
      v_411 = ns_8_St_16_CONFORT_1;
      ns_8_St_16_CONFORT_2 = true;
      v_412 = ns_8_St_16_CONFORT_2;
    } else {
      pl_1_St_16_ECO = 5000;
      s_1_St_16_ECO_1 = true;
      s_1_St_16_ECO_2 = false;
      nr_8_St_16_ECO = false;
      ns_8_St_16_ECO_1 = true;
      ns_8_St_16_ECO_2 = false;
      v_405 = pl_1_St_16_ECO;
      v_407 = s_1_St_16_ECO_1;
      v_408 = s_1_St_16_ECO_2;
      v_415 = nr_8_St_16_ECO;
      v_411 = ns_8_St_16_ECO_1;
      v_412 = ns_8_St_16_ECO_2;
    };
    pl_1 = v_405;
    s_1_1 = v_407;
    s_1_2 = v_408;
    ns_8_1 = v_411;
    ns_8_2 = v_412;
    nr_8 = v_415;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      v_406 = 0;
      v_409 = true;
      v_410 = true;
      v_416 = true;
      v_413 = true;
      v_414 = true;
    } else {
      pl_1_St_16_MS = 3000;
      v_406 = pl_1_St_16_MS;
      s_1_St_16_MS_1 = false;
      v_409 = s_1_St_16_MS_1;
      s_1_St_16_MS_2 = false;
      v_410 = s_1_St_16_MS_2;
      nr_8_St_16_MS = false;
      v_416 = nr_8_St_16_MS;
      ns_8_St_16_MS_1 = false;
      v_413 = ns_8_St_16_MS_1;
      ns_8_St_16_MS_2 = false;
      v_414 = ns_8_St_16_MS_2;
      if (s_1_St_16_MS_1) {
        s_1_St_16_MS_2_1 = s_1_St_16_MS_2;
      } else {
        s_1_St_16_MS_2_0 = s_1_St_16_MS_2;
      };
      if (ns_8_St_16_MS_1) {
        ns_8_St_16_MS_2_1 = ns_8_St_16_MS_2;
      } else {
        ns_8_St_16_MS_2_0 = ns_8_St_16_MS_2;
      };
    };
    pl_1 = v_406;
    s_1_1 = v_409;
    s_1_2 = v_410;
    ns_8_1 = v_413;
    ns_8_2 = v_414;
    nr_8 = v_416;
  };
  _out->sp_1 = s_1_1;
  ck_1 = _out->sp_1;
  _out->sp_2 = s_1_2;
  ck_2 = _out->sp_2;
  _out->pl = pl_1;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v = (_out->p1+_out->p2);
      v_52 = (v+_out->p3);
      rule5_S3 = (v_52<=7000);
      v_281 = rule5_S3;
    } else {
      v_53 = (_out->p1+_out->p2);
      v_54 = (v_53+_out->p3);
      rule5_S2 = (v_54<=5000);
      v_281 = rule5_S2;
    };
    rule5 = v_281;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_280 = true;
    } else {
      v_55 = (_out->p1+_out->p2);
      v_56 = (v_55+_out->p3);
      rule5_S1 = (v_56<=3000);
      v_280 = rule5_S1;
    };
    rule5 = v_280;
  };
  v_70 = (rule5&&rule1);
  v_71 = (v_70&&rule4);
  if (_out->sp_1) {
    sp_2_1 = _out->sp_2;
  } else {
    sp_2_0 = _out->sp_2;
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
  } else {
    s_1_2_0 = s_1_2;
  };
  if (ns_8_1) {
    ns_8_2_1 = ns_8_2;
  } else {
    ns_8_2_0 = ns_8_2;
  };
  if (ck_10_1) {
    if (ck_10_2_1) {
      if (s_1_St_16_CONFORT_1) {
        s_1_St_16_CONFORT_2_1 = s_1_St_16_CONFORT_2;
      } else {
        s_1_St_16_CONFORT_2_0 = s_1_St_16_CONFORT_2;
      };
      if (ns_8_St_16_CONFORT_1) {
        ns_8_St_16_CONFORT_2_1 = ns_8_St_16_CONFORT_2;
      } else {
        ns_8_St_16_CONFORT_2_0 = ns_8_St_16_CONFORT_2;
      };
    } else {
      if (s_1_St_16_ECO_1) {
        s_1_St_16_ECO_2_1 = s_1_St_16_ECO_2;
      } else {
        s_1_St_16_ECO_2_0 = s_1_St_16_ECO_2;
      };
      if (ns_8_St_16_ECO_1) {
        ns_8_St_16_ECO_2_1 = ns_8_St_16_ECO_2;
      } else {
        ns_8_St_16_ECO_2_0 = ns_8_St_16_ECO_2;
      };
    };
  };
  if (s_13_1) {
    s_13_2_1 = s_13_2;
  } else {
    s_13_2_0 = s_13_2;
  };
  if (ck_9_1) {
    if (ck_9_2_1) {
      if (v_73_1) {
        v_73_2_1 = v_73_2;
      } else {
        v_73_2_0 = v_73_2;
      };
      if (s_13_St_16_CONFORT_1) {
        s_13_St_16_CONFORT_2_1 = s_13_St_16_CONFORT_2;
      } else {
        s_13_St_16_CONFORT_2_0 = s_13_St_16_CONFORT_2;
      };
    } else {
      if (v_76_1) {
        v_76_2_1 = v_76_2;
      } else {
        v_76_2_0 = v_76_2;
      };
      if (s_13_St_16_ECO_1) {
        s_13_St_16_ECO_2_1 = s_13_St_16_ECO_2;
      } else {
        s_13_St_16_ECO_2_0 = s_13_St_16_ECO_2;
      };
    };
  };
  self->pnr = nr;
  self->ck_25_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_23_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_21_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_19_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_17_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->v_307 = ns_5_1;
  self->v_308 = ns_5_2;
  self->v_309 = ns_5_3;
  self->pnr_6 = nr_6;
  self->v_360 = ns_6_1;
  self->v_361 = ns_6_2;
  self->v_362 = ns_6_3;
  self->pnr_7 = nr_7;
  self->v_397 = ns_7_1;
  self->v_398 = ns_7_2;
  self->pnr_8 = nr_8;
  self->v_417 = ns_8_1;
  self->v_418 = ns_8_2;;
}

