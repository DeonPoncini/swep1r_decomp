#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d170(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  float local_f0;
  float local_ec;
  float local_e8;
  int local_e4;
  int local_e0 [8];
  undefined local_c0 [48];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined local_80 [32];
  undefined local_60 [96];
  
  uVar3 = *(uint *)(param_1 + 0x60);
  if ((uVar3 & 0x80) != 0) {
    if ((((byte)uVar3 & 0xf) == 2) && ((uVar3 & 0x6000) == 0)) {
      if ((_DAT_004ad94c < *(float *)(param_1 + 0x110)) ||
         (((uVar3 & 0x100) != 0 && (_DAT_004ad7ac < *(float *)(param_1 + 0x110))))) {
        *(uint *)(param_1 + 0x60) = uVar3 | 0x1000;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  if ((*(uint *)(param_1 + 0x60) & 0x20000) != 0) {
    FUN_00473f40(param_1,0x3f000000);
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffdffff;
  }
  if (((((*(byte *)(param_1 + 0x60) & 0x80) != 0) &&
       (**(int **)(*(int *)(param_1 + 0x1e70) + 0x18) == 2)) &&
      (_DAT_004ad820 < *(float *)(param_1 + 0x1a0))) &&
     (2 < *(int *)(*(int *)(param_1 + 0x1e70) + 0x78) + 1)) {
    local_f0 = *(float *)(param_1 + 0x50);
    local_ec = *(float *)(param_1 + 0x54);
    local_e8 = *(float *)(param_1 + 0x58);
    iVar2 = FUN_00450e70(0x54657374,&local_f0,0x461c4000,0,2,local_80,local_60,local_e0);
    if (0 < iVar2) {
      piVar5 = local_e0;
      do {
        if (*piVar5 != param_1) {
          FUN_0042f860(&local_f0,*piVar5 + 0x50,param_1 + 0x50);
          if (_DAT_004ad750 <
              *(float *)(param_1 + 0x20) * local_f0 +
              *(float *)(param_1 + 0x24) * local_ec + *(float *)(param_1 + 0x28) * local_e8) {
            FUN_0046ba30(param_1);
          }
        }
        piVar5 = piVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (*(float *)(*(int *)(param_1 + 0x1e70) + 0x74) < _DAT_004ad868) {
    *(undefined4 *)(param_1 + 0x268) = 0x40a00000;
  }
  if (*(int *)(param_1 + 0x31c) == 0) {
    *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x268) - (float)_DAT_00e22a40;
  }
  else if (*(float *)(param_1 + 0x268) < _DAT_004ad94c) {
    *(undefined4 *)(param_1 + 0x268) = 0x40a00000;
  }
  FUN_00482e60((undefined4 *)(param_1 + 0x50));
  local_e4 = __ftol();
  *(int *)(param_1 + 0x1998) = local_e4;
  if ((((((float)local_e4 - _DAT_004ad7a4) * _DAT_004ad7ec < (float)_DAT_004ad790) ||
       ((*(byte *)(param_1 + 0x60) & 0x20) != 0)) || ((*(uint *)(param_1 + 100) & 0x4000000) != 0))
     && ((*(uint *)(param_1 + 100) & 2) != 0)) {
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffffffd;
    FUN_0044eeb0(param_1 + 0xac,local_c0,0);
    *(undefined4 *)(param_1 + 0x50) = local_90;
    *(undefined4 *)(param_1 + 0x54) = local_8c;
    *(undefined4 *)(param_1 + 0x58) = local_88;
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x10000000;
  }
  uVar3 = *(uint *)(param_1 + 0x60);
  uVar4 = uVar3 & 0xfff7ffff;
  *(uint *)(param_1 + 0x60) = uVar4;
  if (((uVar3 & 0x20) == 0) && (*(float *)(param_1 + 0x264) <= _DAT_004ad750)) {
    *(uint *)(param_1 + 0x60) = uVar4 | 0x10;
  }
  fVar1 = (float)_DAT_004ad8a8;
  uVar3 = *(uint *)(param_1 + 0x60);
  uVar4 = uVar3 & 0xffdfffff;
  *(uint *)(param_1 + 0x60) = uVar4;
  if (((*(float *)(param_1 + 0x7c) * fVar1 < *(float *)(param_1 + 0x1a0)) && ((uVar3 & 0x7000) == 0)
      ) && ((*(uint *)(param_1 + 100) & 0x4000) == 0)) {
    *(uint *)(param_1 + 0x60) = uVar4 | 0x200000;
  }
  if ((*(float *)(param_1 + 0x1a0) <= *(float *)(param_1 + 0x7c)) ||
     ((*(uint *)(param_1 + 0x60) & 0x800000) == 0)) {
    uVar3 = *(uint *)(param_1 + 0x60) & 0xbfffffff;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x60) | 0x40000000;
  }
  *(uint *)(param_1 + 0x60) = uVar3;
  FUN_0046cf00(param_1);
  if (_DAT_004ad750 < *(float *)(param_1 + 0x264)) {
    *(float *)(param_1 + 0x264) = *(float *)(param_1 + 0x264) - (float)_DAT_00e22a40;
  }
  FUN_00426910(param_1);
  if ((*(uint *)(param_1 + 0x60) & 0x800) != 0) {
    FUN_0046d040(param_1);
  }
  FUN_0046d100(param_1);
  return;
}

