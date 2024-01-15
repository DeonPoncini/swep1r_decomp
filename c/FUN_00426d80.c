#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426d80(int param_1,undefined4 param_2,undefined4 param_3,float param_4,float *param_5,
                 int param_6,uint param_7)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_5c [3];
  undefined local_50 [16];
  int local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20 [4];
  float local_10;
  float local_c;
  float local_8;
  
  local_40[0] = 0x7f;
  local_40[1] = 0x80;
  local_40[2] = 0x72;
  local_40[3] = 0x79;
  local_30 = 0x7a;
  local_2c = 0xaa;
  local_28 = 0xab;
  local_24 = 0xac;
  local_20[0] = 2.424246e-43;
  if (-1 < (int)param_7) {
    uVar2 = 0;
    piVar4 = local_40;
    do {
      if (param_1 == *piVar4) goto LAB_00426dff;
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar2 < 9);
    if (DAT_0050d550 != 0) {
      if (param_4 <= _DAT_004ac47c) {
        return;
      }
      FUN_00426a00(param_1,param_2,param_3,param_4,0xfffffc19,param_6,
                   ~-(uint)(param_6 != 0) & param_7,param_5);
      return;
    }
  }
LAB_00426dff:
  FUN_00429330(local_40,param_5);
  FUN_004315a0(local_50,local_20,&local_10);
  local_68 = *param_5 - local_10;
  local_64 = param_5[1] - local_c;
  fVar1 = (param_5[2] - local_8) * (param_5[2] - local_8) +
          local_64 * local_64 + local_68 * local_68;
  if (DAT_004b8554 * DAT_004b8554 <= fVar1) {
    return;
  }
  if (DAT_004b8550 * DAT_004b8550 < fVar1) {
    fVar5 = (float10)FUN_00480670(fVar1);
    fVar5 = (float10)_DAT_004ac488 -
            (fVar5 - (float10)DAT_004b8550) / ((float10)DAT_004b8554 - (float10)DAT_004b8550);
    local_78 = (float)fVar5;
    if (fVar5 < (float10)_DAT_004ac490) {
      return;
    }
    if (local_78 <= (float)_DAT_004ac488) goto LAB_00426f00;
  }
  local_78 = 1.0;
LAB_00426f00:
  if (((byte)DAT_00e996dc & 8) != 0) {
    FUN_00480890(local_50,param_5,&local_74);
    local_74 = local_74 - local_10;
    local_70 = local_70 - local_c;
    local_6c = local_6c - local_8;
    if ((((_DAT_004ac498 <= local_74) || (_DAT_004ac498 <= -local_74)) ||
        ((float)_DAT_004ac490 <= local_70)) || ((float)_DAT_004ac490 <= -local_70)) {
      FUN_0042f9b0(&local_74);
      FUN_0042f9f0(local_5c,&local_74,&local_30);
      FUN_0042f8c0(local_5c);
    }
  }
  uVar3 = __ftol();
  if (local_78 * param_4 <= _DAT_004ac47c) {
    return;
  }
  FUN_00426a00(param_1,param_2,param_3,local_78 * param_4,uVar3,param_6,0,&DAT_0050b5f0);
  return;
}

