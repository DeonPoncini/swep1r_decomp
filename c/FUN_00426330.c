#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426330(float param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  float local_8;
  float local_4;
  
  fVar5 = param_1;
  uVar1 = *(uint *)((int)param_1 + 0x100);
  *(uint *)((int)param_1 + 0x100) = uVar1 & 0xbfffffff;
  if ((uVar1 & 0x1000000) == 0) {
    if ((uVar1 & 0x20000000) == 0) {
      fVar4 = *(float *)((int)param_1 + 0x110) * _DAT_004b7fa8 * (float)_DAT_00e22a40 +
              *(float *)((int)param_1 + 0x114);
    }
    else {
      *(uint *)((int)param_1 + 0x100) = uVar1 & 0xbfffffff | 0x40000000;
      fVar4 = (float)_DAT_00e22a40 / *(float *)((int)param_1 + 0xe0) +
              *(float *)((int)param_1 + 0xe4);
      bVar3 = fVar4 < _DAT_004ac450;
      *(float *)((int)param_1 + 0xe4) = fVar4;
      if (bVar3) goto LAB_004263ed;
      fVar4 = *(float *)((int)param_1 + 0xe4) - _DAT_004ac450;
      *(uint *)((int)param_1 + 0x100) = uVar1 & 0x9fffffff | 0x40000000;
      fVar4 = fVar4 * *(float *)((int)param_1 + 0x110) * _DAT_004b7fa8 *
              *(float *)((int)param_1 + 0xe0) + *(float *)((int)param_1 + 0x114);
    }
    *(float *)((int)param_1 + 0x114) = fVar4;
  }
  else {
    *(uint *)((int)param_1 + 0x100) = uVar1 & 0xbeffffff;
  }
LAB_004263ed:
  uVar1 = *(uint *)((int)param_1 + 0x100);
  if ((uVar1 & 0x6000000) != 0) {
    if ((*(float *)((int)param_1 + 0x114) < *(float *)((int)param_1 + 0xf0)) ||
       (*(float *)((int)param_1 + 0xf4) < *(float *)((int)param_1 + 0x114))) {
      param_1 = *(float *)((int)param_1 + 0xfc);
      local_8 = 0.0;
      local_4 = param_1;
    }
    else if ((uVar1 & 0x2000000) == 0) {
      *(uint *)((int)param_1 + 0x100) = uVar1 & 0xfbffffef;
    }
    else {
      *(uint *)((int)param_1 + 0x100) = uVar1 & 0xfdffffff | 0x10;
    }
  }
  uVar1 = *(uint *)((int)fVar5 + 0x100);
  if ((uVar1 & 0x6000000) == 0) {
    param_1 = *(float *)((int)fVar5 + 0xf4);
    local_8 = *(float *)((int)fVar5 + 0xf0);
    local_4 = *(float *)((int)fVar5 + 0xf8);
  }
  if (param_1 < *(float *)((int)fVar5 + 0x114)) {
    if ((uVar1 & 0x10) == 0) {
      *(float *)((int)fVar5 + 0x114) = param_1;
      uVar6 = FUN_00426220(fVar5);
      *(undefined4 *)((int)fVar5 + 0x118) = uVar6;
      return;
    }
    if ((uVar1 & 0x40) == 0) {
      do {
        fVar4 = *(float *)((int)fVar5 + 0x114) - local_4;
        *(float *)((int)fVar5 + 0x114) = fVar4;
        *(uint *)((int)fVar5 + 0x100) = *(uint *)((int)fVar5 + 0x100) | 0x40000000;
      } while (param_1 < fVar4);
      uVar6 = FUN_00426220(fVar5);
      *(undefined4 *)((int)fVar5 + 0x118) = uVar6;
      return;
    }
    FUN_00426290(fVar5,param_1,local_8);
    uVar6 = FUN_00426220(fVar5);
    *(undefined4 *)((int)fVar5 + 0x118) = uVar6;
    return;
  }
  if (*(float *)((int)fVar5 + 0x114) < local_8) {
    if ((uVar1 & 0x10) == 0) {
      *(float *)((int)fVar5 + 0x114) = local_8;
      uVar6 = FUN_00426220(fVar5);
      *(undefined4 *)((int)fVar5 + 0x118) = uVar6;
      return;
    }
    if ((uVar1 & 0x40) == 0) {
      do {
        fVar4 = local_4 + *(float *)((int)fVar5 + 0x114);
        *(float *)((int)fVar5 + 0x114) = fVar4;
        *(uint *)((int)fVar5 + 0x100) = *(uint *)((int)fVar5 + 0x100) | 0x40000000;
      } while (fVar4 < local_8);
      uVar6 = FUN_00426220(fVar5);
      *(undefined4 *)((int)fVar5 + 0x118) = uVar6;
      return;
    }
    FUN_00426290(fVar5,local_8,param_1);
    uVar6 = FUN_00426220(fVar5);
    *(undefined4 *)((int)fVar5 + 0x118) = uVar6;
    return;
  }
  iVar2 = *(int *)((int)fVar5 + 0x11c);
  if (*(float *)((int)fVar5 + 0x114) < *(float *)(iVar2 + *(int *)((int)fVar5 + 0x118) * 4)) {
    do {
      if (*(int *)((int)fVar5 + 0x118) < 1) break;
      iVar7 = *(int *)((int)fVar5 + 0x118) + -1;
      *(int *)((int)fVar5 + 0x118) = iVar7;
    } while (*(float *)((int)fVar5 + 0x114) < *(float *)(iVar2 + iVar7 * 4));
  }
  if (*(float *)(iVar2 + 4 + *(int *)((int)fVar5 + 0x118) * 4) < *(float *)((int)fVar5 + 0x114)) {
    do {
      if (*(int *)((int)fVar5 + 0x104) + -2 <= *(int *)((int)fVar5 + 0x118)) {
        return;
      }
      iVar7 = *(int *)((int)fVar5 + 0x118) + 1;
      *(int *)((int)fVar5 + 0x118) = iVar7;
    } while (*(float *)(iVar2 + 4 + iVar7 * 4) < *(float *)((int)fVar5 + 0x114));
  }
  return;
}

