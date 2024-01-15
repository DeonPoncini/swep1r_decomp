#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046af20(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined local_40 [48];
  float local_10;
  float local_c;
  float local_8;
  
  if ((*(byte *)(param_1 + 0x60) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x18c) = 0x3ef5c28f;
  }
  else {
    *(undefined4 *)(param_1 + 0x18c) = 0x3f7ae148;
  }
  if (*(float *)(param_1 + 0x104) < _DAT_004ad7a8) {
    *(undefined4 *)(param_1 + 0x104) = 0x3c23d70a;
  }
  if (_DAT_004ad7ac < *(float *)(param_1 + 0x104)) {
    *(undefined4 *)(param_1 + 0x104) = 0x40000000;
  }
  iVar5 = FUN_004816b0();
  if (_DAT_004ad750 <= (float)iVar5 * _DAT_004ad768 + (float)iVar5 * _DAT_004ad768) {
    FUN_004816b0();
  }
  else {
    FUN_004816b0();
  }
  uVar6 = __ftol();
  *(undefined4 *)(param_1 + 0xd4) = uVar6;
  if (0 < DAT_004c7084) {
    if (DAT_004c7084 == 1) {
      if (*(float *)(param_1 + 0xe8) < _DAT_004ad7a8) {
LAB_0046b0da:
        *(undefined4 *)(param_1 + 0xd4) = 0;
      }
      else if (_DAT_004ad7b4 < *(float *)(param_1 + 0xe0)) {
        bVar1 = *(float *)(param_1 + 0xe0) < _DAT_004ad7b8;
        goto LAB_0046b0d3;
      }
    }
    else if (DAT_004c7084 == 2) {
      if ((_DAT_004ad7bc < *(float *)(param_1 + 0xe0)) &&
         (*(float *)(param_1 + 0xe0) < _DAT_004ad7c0)) goto LAB_0046b0da;
      if (_DAT_004ad7c4 < *(float *)(param_1 + 0xe0)) {
        bVar1 = *(float *)(param_1 + 0xe0) < _DAT_004ad7c8;
        goto LAB_0046b0d3;
      }
    }
    else if (DAT_004c7084 == 3) {
      if (_DAT_004ad7cc < *(float *)(param_1 + 0xe0)) {
        bVar1 = *(float *)(param_1 + 0xe0) < _DAT_004ad7d0;
LAB_0046b0d3:
        if (bVar1) goto LAB_0046b0da;
      }
    }
    else if (DAT_004c7084 == 4) {
      if (_DAT_004ad7d4 < *(float *)(param_1 + 0xe0)) {
        bVar1 = *(float *)(param_1 + 0xe0) < _DAT_004ad7d8;
        goto LAB_0046b0d3;
      }
    }
    else if (DAT_004c7084 == 5) {
      if ((_DAT_004ad7dc < *(float *)(param_1 + 0xe0)) &&
         (*(float *)(param_1 + 0xe0) < _DAT_004ad7e0)) {
LAB_0046b13a:
        *(undefined4 *)(param_1 + 0xd4) = 1;
      }
    }
    else if (((DAT_004c7084 == 6) && (_DAT_004ad7e4 < *(float *)(param_1 + 0xe0))) &&
            (*(float *)(param_1 + 0xe0) < _DAT_004ad7e8)) goto LAB_0046b13a;
  }
  FUN_0044eeb0(param_1 + 0xac,local_40,0);
  local_70 = local_10;
  local_6c = local_c;
  local_68 = local_8;
  FUN_0044eeb0(param_1 + 0xac,local_40,*(undefined4 *)(param_1 + 0x104));
  if (((((float)*(int *)(param_1 + 0x1998) - _DAT_004ad7a4) * _DAT_004ad7ec < (float)_DAT_004ad790)
      || ((*(byte *)(param_1 + 0x60) & 0x20) != 0)) || ((*(uint *)(param_1 + 100) & 0x4000000) != 0)
     ) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  FUN_0046aec0(param_1,&local_10,&local_70,uVar6);
  fVar2 = (local_68 - local_8) * (local_68 - local_8) +
          (local_6c - local_c) * (local_6c - local_c) +
          (local_70 - local_10) * (local_70 - local_10);
  if (*(float *)(param_1 + 0x108) <= fVar2) {
    if (*(float *)(param_1 + 0x108) < fVar2) {
      fVar2 = *(float *)(param_1 + 0x104) - _DAT_004ad7a8;
      goto LAB_0046b258;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x104) - _DAT_004ad7f0;
LAB_0046b258:
    *(float *)(param_1 + 0x104) = fVar2;
  }
  local_70 = local_10;
  local_6c = local_c;
  local_68 = local_8;
  FUN_0042fa80(&local_58,&local_70,
               (*(float *)(param_1 + 0x54) - local_c) * *(float *)(param_1 + 0x198) +
               (*(float *)(param_1 + 0x58) - local_8) * *(float *)(param_1 + 0x19c) +
               (*(float *)(param_1 + 0x50) - local_10) * *(float *)(param_1 + 0x194),
               (float *)(param_1 + 0x194));
  local_64 = local_58 - *(float *)(param_1 + 0x50);
  local_60 = local_54 - *(float *)(param_1 + 0x54);
  local_5c = local_50 - *(float *)(param_1 + 0x58);
  fVar7 = (float10)FUN_0042f8c0(&local_64);
  if (fVar7 <= (float10)_DAT_004ad7a8) {
    return;
  }
  fVar7 = (float10)_DAT_004ad7f4 / fVar7;
  local_64 = (float)((float10)local_64 * fVar7);
  local_60 = (float)((float10)local_60 * fVar7);
  local_5c = (float)((float10)local_5c * fVar7);
  FUN_0042f9f0(&local_4c,param_1 + 0x30,&local_64);
  fVar2 = local_48 * *(float *)(param_1 + 0x198) +
          local_4c * *(float *)(param_1 + 0x194) + local_44 * *(float *)(param_1 + 0x19c);
  if (fVar2 <= _DAT_004ad7f8) {
    fVar3 = _DAT_004ad750;
    if ((_DAT_004ad804 <= fVar2) || (fVar3 = fVar2 * _DAT_004ad7fc, _DAT_004ad808 <= fVar2))
    goto LAB_0046b414;
    fVar4 = fVar2 - _DAT_004ad80c;
  }
  else {
    fVar3 = fVar2 * _DAT_004ad7fc;
    if (fVar2 <= _DAT_004ad800) goto LAB_0046b414;
    fVar4 = _DAT_004ad7f4 - fVar2;
  }
  fVar3 = fVar2 * _DAT_004ad7fc;
  *(float *)(param_1 + 0x18c) = fVar4 * _DAT_004ad774 * *(float *)(param_1 + 0x18c);
LAB_0046b414:
  *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x22c) * *(float *)(param_1 + 0x74) * fVar3;
  return;
}

