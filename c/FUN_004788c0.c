#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004788c0(int param_1)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = 0;
  if ((*(uint *)(param_1 + 100) & 0x40000) == 0) {
    if ((*(uint *)(param_1 + 0x60) & 0x800000) == 0) {
      fVar2 = (float)_DAT_00e22a40 * *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x218);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x218) - (float)_DAT_00e22a40 * *(float *)(param_1 + 0x8c);
    }
    *(float *)(param_1 + 0x218) = fVar2;
  }
  else {
    bVar1 = _DAT_004add48 <= *(float *)(param_1 + 0x208);
    *(float *)(param_1 + 0x218) = *(float *)(param_1 + 0x218) - (float)_DAT_00e22a40 * _DAT_004adc78
    ;
    if (bVar1) {
      if (_DAT_004adc60 < *(float *)(param_1 + 0x208)) {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = -1;
    }
  }
  if (_DAT_004add5c <= *(float *)(param_1 + 0x218)) {
    *(undefined4 *)(param_1 + 0x218) = 0x42c80000;
  }
  if (_DAT_004adc48 < *(float *)(param_1 + 0x218)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (iVar3 < 0) {
    FUN_004816b0();
  }
  else {
    if (0 < iVar3) {
      FUN_004816b0();
      iVar3 = __ftol();
      iVar3 = 3 - iVar3;
      goto LAB_004789f4;
    }
    FUN_004816b0();
  }
  iVar3 = __ftol();
LAB_004789f4:
  if ((*(byte *)(param_1 + 0x2a0 + iVar3 * 4) & 8) == 0) {
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_0046e950(param_1,2 - iVar3 / 3,&local_c,0x3dcccccd);
  }
  *(uint *)(param_1 + 0x2a0 + iVar3 * 4) = *(uint *)(param_1 + 0x2a0 + iVar3 * 4) | 8;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
  return;
}

