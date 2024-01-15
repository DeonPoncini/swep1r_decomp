#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b670(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  
  *(undefined4 *)(param_1 + 0x230) = DAT_004c707c;
  fVar1 = _DAT_004ad840;
  if ((*(uint *)(param_1 + 100) & 0x2000000) != 0) {
    *(undefined4 *)(param_1 + 0x230) = 0x3f266666;
    if (*(float *)(param_1 + 0x108) <= fVar1) {
      *(undefined4 *)(param_1 + 0x108) = 0x45afc800;
      *(undefined4 *)(param_1 + 0x70) = 0x44bb8000;
      *(undefined4 *)(param_1 + 0x74) = 0x43c80000;
    }
    else {
      fVar2 = (float)_DAT_00e22a40;
      fVar1 = (float)_DAT_004ad848;
      *(undefined4 *)(param_1 + 0x70) = 0x44bb8000;
      *(undefined4 *)(param_1 + 0x74) = 0x43c80000;
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) - fVar2 * fVar1;
    }
    goto LAB_0046b989;
  }
  fVar8 = (float10)FUN_0047e870();
  fVar2 = DAT_004c7080 * _DAT_004ad854;
  fVar1 = (float)((float10)_DAT_004ad850 / fVar8);
  fVar4 = fVar2 * fVar1;
  if ((*(uint *)(param_1 + 0x60) & 0x100) == 0) {
    if (*(short *)(*(int *)(param_1 + 0x1e70) + 0x5c) == 1) {
      *(undefined4 *)(param_1 + 0x138) = 0;
      goto LAB_0046b989;
    }
    fVar5 = *(float *)(param_1 + 0x234) - (float)_DAT_00e22a40;
    bVar3 = fVar5 < _DAT_004ad750;
    *(float *)(param_1 + 0x234) = fVar5;
    if (bVar3) {
      iVar6 = FUN_004816b0();
      *(float *)(param_1 + 0x234) = (float)iVar6 * _DAT_004ad768 * _DAT_004ad868 - _DAT_004ad86c;
      iVar6 = FUN_004816b0();
      if (_DAT_004ad788 <= (float)iVar6 * _DAT_004ad768) {
        if ((float)iVar6 * _DAT_004ad768 <= _DAT_004ad870) goto LAB_0046b86c;
        iVar6 = *(int *)(param_1 + 0x23c);
        iVar7 = iVar6 + 1;
        *(int *)(param_1 + 0x23c) = iVar7;
        if (iVar7 - *(int *)(param_1 + 0x238) < 3) {
          iVar7 = *(int *)(param_1 + 0x238) - iVar7;
          goto joined_r0x0046b863;
        }
      }
      else {
        iVar6 = *(int *)(param_1 + 0x23c);
        iVar7 = iVar6 + -1;
        *(int *)(param_1 + 0x23c) = iVar7;
        if ((1 < iVar7) && (iVar7 - *(int *)(param_1 + 0x238) < 3)) {
          iVar7 = *(int *)(param_1 + 0x238) - iVar7;
joined_r0x0046b863:
          if (iVar7 < 3) goto LAB_0046b86c;
        }
      }
      *(int *)(param_1 + 0x23c) = iVar6;
    }
LAB_0046b86c:
    if (_DAT_004ad750 < _DAT_0050cae0) {
      fVar1 = *(float *)(param_1 + 0x230) * _DAT_004ad858;
      fVar2 = (float)*(int *)(param_1 + 0x23c) - _DAT_004ad7f4;
      *(float *)(param_1 + 0x230) = fVar1;
      *(float *)(param_1 + 0x230) = (_DAT_004ad7f4 - fVar2 * _DAT_0050cae0) * fVar1;
      goto LAB_0046b989;
    }
    fVar4 = fVar4 * _DAT_004ad878;
    fVar2 = (((float)*(int *)(param_1 + 0x23c) - _DAT_004ad7f4) * fVar2 - _DAT_004ad874) * fVar1;
    *(float *)(param_1 + 0x138) = fVar2;
    if ((*(float *)(param_1 + 300) <= fVar4) || ((*(uint *)(param_1 + 0x60) & 0x18000) == 0)) {
      fVar2 = (*(float *)(param_1 + 300) - fVar2) * _DAT_004ad868;
    }
    else {
      if ((*(uint *)(param_1 + 0x60) & 0x8000) == 0) {
        fVar2 = *(float *)(param_1 + 0x134);
      }
      else {
        fVar2 = *(float *)(param_1 + 0x130);
      }
      if (fVar2 <= _DAT_004ad750) {
        fVar2 = fVar2 * _DAT_004ad880;
      }
      else {
        fVar2 = fVar2 * _DAT_004ad87c;
      }
    }
    fVar1 = (fVar2 * _DAT_004ad884) / fVar1 - _DAT_004ad888;
    if (_DAT_004ad88c < fVar1) {
      fVar1 = _DAT_004ad88c;
    }
    if (fVar1 < _DAT_004ad774) {
      fVar1 = _DAT_004ad774;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (*(short *)(*(int *)(param_1 + 0x1e70) + 0x5c) == 1) {
      fVar1 = *(float *)(param_1 + 0x230) * _DAT_004ad858;
    }
    else if (*(float *)(param_1 + 0x130) <= fVar4 * _DAT_004ad85c) {
      fVar1 = *(float *)(param_1 + 0x230) * _DAT_004ad864;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x230) * _DAT_004ad860;
    }
  }
  *(float *)(param_1 + 0x230) = fVar1;
LAB_0046b989:
  if (*(float *)(param_1 + 0x230) <= *(float *)(param_1 + 0x22c)) {
    if ((*(float *)(param_1 + 0x230) < *(float *)(param_1 + 0x22c)) &&
       (fVar1 = *(float *)(param_1 + 0x22c) - (float)_DAT_00e22a40 * (float)_DAT_004ad890,
       *(float *)(param_1 + 0x22c) = fVar1, fVar1 < *(float *)(param_1 + 0x230))) {
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x230);
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x22c) + (float)_DAT_00e22a40 * (float)_DAT_004ad890;
    *(float *)(param_1 + 0x22c) = fVar1;
    if (*(float *)(param_1 + 0x230) < fVar1) {
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x230);
      return;
    }
  }
  return;
}

