#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0044c510(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  undefined4 in_EAX;
  ushort uVar10;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  uint uVar15;
  uint local_78;
  uint local_74;
  uint local_70;
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18 [4];
  float local_8;
  float local_4;
  
  uVar10 = (ushort)((uint)in_EAX >> 0x10);
  uVar9 = (uint)uVar10 << 0x10;
  if (((*param_1 <= param_1[3]) && (uVar9 = (uint)uVar10 << 0x10, param_1[1] <= param_1[4])) &&
     (uVar9 = (uint)uVar10 << 0x10, param_1[2] <= param_1[5])) {
    local_48[0] = _DAT_00e37480 * *param_1;
    local_48[3] = _DAT_00e37480 * param_1[3];
    local_48[1] = _DAT_00e37490 * param_1[1];
    local_38 = _DAT_00e37490 * param_1[4];
    local_48[2] = _DAT_00e374a0 * param_1[2];
    local_34 = _DAT_00e374a0 * param_1[5];
    local_30[0] = _DAT_00e37484 * *param_1;
    local_30[3] = _DAT_00e37484 * param_1[3];
    local_30[1] = _DAT_00e37494 * param_1[1];
    local_20 = _DAT_00e37494 * param_1[4];
    local_30[2] = _DAT_00e374a4 * param_1[2];
    local_1c = _DAT_00e374a4 * param_1[5];
    local_18[0] = _DAT_00e37488 * *param_1;
    local_18[3] = _DAT_00e37488 * param_1[3];
    local_18[1] = _DAT_00e37498 * param_1[1];
    local_8 = _DAT_00e37498 * param_1[4];
    local_18[2] = _DAT_00e374a8 * param_1[2];
    local_4 = _DAT_00e374a8 * param_1[5];
    local_60[0] = _DAT_00e3748c * *param_1;
    local_60[3] = _DAT_00e3748c * param_1[3];
    local_60[1] = _DAT_00e3749c * param_1[1];
    uVar15 = 0;
    local_50 = _DAT_00e3749c * param_1[4];
    local_60[2] = _DAT_00e374ac * param_1[2];
    local_4c = _DAT_00e374ac * param_1[5];
    if (param_2 == 0) {
      sVar12 = 0;
      sVar3 = 0;
      sVar5 = 0;
      sVar14 = 0;
    }
    else {
      sVar12 = -1;
      sVar5 = -1;
      sVar3 = -1;
      sVar14 = -1;
    }
    local_78 = 0xfffffffe;
    local_74 = 0xfffffffe;
    local_70 = 0xfffffffe;
    do {
      uVar6 = uVar15 & 1;
      uVar7 = (int)uVar15 >> 1 & 1;
      uVar8 = (int)uVar15 >> 2 & 1;
      fVar1 = local_60[uVar7 * 3 + 1] + local_60[uVar8 * 3] + local_60[uVar6 * 3 + 2] +
              _DAT_00e374bc;
      sVar13 = (short)local_74;
      if ((sVar12 != 0) || (uVar9 = uVar8, sVar13 != 0)) {
        fVar2 = local_48[uVar7 * 3 + 1] + local_48[uVar8 * 3] + local_48[uVar6 * 3 + 2] +
                _DAT_00e374b0;
        if (fVar1 <= _DAT_004acc7c) {
          if (fVar2 <= -fVar1) {
            if (fVar1 <= fVar2) goto LAB_0044c7ca;
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = 1;
          }
        }
        else if (fVar2 <= fVar1) {
          if (-fVar1 <= fVar2) {
LAB_0044c7ca:
            uVar9 = 0;
          }
          else {
            uVar9 = 0xffffffff;
          }
        }
        else {
          uVar9 = 1;
        }
        if ((short)uVar9 == 0) {
          if (sVar12 == 0) {
LAB_0044c7fc:
            local_74 = 0;
          }
          else {
            local_74 = 0;
            sVar5 = 1;
          }
        }
        else {
          sVar5 = 0;
          if ((int)sVar13 == -(int)(short)uVar9) goto LAB_0044c7fc;
          if (sVar13 == -2) {
            local_74 = uVar9;
          }
        }
      }
      sVar12 = sVar5;
      uVar4 = local_78;
      if ((sVar3 != 0) || ((short)local_78 != 0)) {
        fVar2 = local_30[uVar7 * 3 + 1] + local_30[uVar8 * 3] + local_30[uVar6 * 3 + 2] +
                _DAT_00e374b4;
        if (fVar1 <= _DAT_004acc7c) {
          if (fVar2 <= -fVar1) {
            if (fVar1 <= fVar2) goto LAB_0044c8a1;
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = 1;
          }
        }
        else if (fVar2 <= fVar1) {
          if (-fVar1 <= fVar2) {
LAB_0044c8a1:
            uVar9 = 0;
          }
          else {
            uVar9 = 0xffffffff;
          }
        }
        else {
          uVar9 = 1;
        }
        if ((short)uVar9 == 0) {
          if (sVar3 != 0) {
            sVar3 = 1;
          }
          local_78 = 0;
          uVar4 = local_78;
        }
        else {
          sVar3 = 0;
          if ((int)(short)local_78 == -(int)(short)uVar9) {
            local_78 = 0;
            uVar4 = local_78;
          }
          else if ((short)local_78 == -2) {
            uVar4 = uVar9;
          }
        }
      }
      local_78 = uVar4;
      uVar4 = local_70;
      sVar13 = (short)local_70;
      if ((sVar14 != 0) || ((short)local_70 != 0)) {
        if (fVar1 <= _DAT_004acc7c) {
          uVar9 = 0xffffffff;
        }
        else if (local_18[uVar7 * 3 + 1] + local_18[uVar8 * 3] + local_18[uVar6 * 3 + 2] +
                 _DAT_00e374b8 <= fVar1) {
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        if ((short)uVar9 == 0) {
          if (sVar14 == 0) {
LAB_0044c95c:
            uVar6 = 0;
          }
          else {
            sVar14 = 1;
            uVar6 = 0;
          }
LAB_0044c968:
          uVar4 = uVar6;
          sVar13 = (short)uVar6;
        }
        else {
          sVar14 = 0;
          if ((int)(short)local_70 == -(int)(short)uVar9) goto LAB_0044c95c;
          uVar6 = uVar9;
          if ((short)local_70 == -2) goto LAB_0044c968;
        }
      }
      local_70 = uVar4;
      uVar15 = uVar15 + 1;
      sVar5 = sVar12;
    } while ((int)uVar15 < 8);
    uVar11 = (undefined2)(uVar9 >> 0x10);
    if (((sVar12 != 0) && (sVar3 != 0)) && (sVar14 != 0)) {
      return CONCAT22(uVar11,2);
    }
    if ((((short)local_74 == 0) && ((short)local_78 == 0)) && (sVar13 == 0)) {
      return CONCAT22(uVar11,1);
    }
  }
  return uVar9 & 0xffff0000;
}

