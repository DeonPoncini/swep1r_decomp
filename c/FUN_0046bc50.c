#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046bc50(int param_1,undefined *param_2,undefined *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  *param_2 = 0;
  param_2[1] = 0xff;
  param_2[2] = 0;
  *param_3 = 0xff;
  param_3[1] = 0xff;
  param_3[2] = 0xff;
  param_3[3] = 100;
  *param_4 = 0.0;
  iVar1 = *(int *)(param_1 + 0x210);
  if (iVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0xff;
    param_2[2] = 0;
    *param_3 = 0xff;
    param_3[1] = 0xff;
    param_3[2] = 0xff;
    param_3[3] = 100;
    fVar3 = _DAT_004ad7f4;
    fVar2 = *(float *)(param_1 + 0x1a0) / (*(float *)(param_1 + 0x7c) * (float)_DAT_004ad8a8);
    *param_4 = fVar2;
    if (fVar3 < fVar2) {
      *param_4 = 1.0;
    }
  }
  else {
    if (iVar1 == 1) {
      *param_2 = 0;
      param_2[1] = 0xff;
      param_2[2] = 0;
      *param_3 = 0xff;
      param_3[1] = 0x80;
      param_3[2] = 0;
      param_3[3] = 200;
      *param_4 = *(float *)(param_1 + 0x214);
      return;
    }
    if (iVar1 == 2) {
      *param_2 = 0xff;
      param_2[1] = 0xff;
      param_2[2] = 0;
      *param_3 = 0xff;
      param_3[1] = 0x80;
      param_3[2] = 0;
      param_3[3] = 200;
      *param_4 = 1.0;
      return;
    }
  }
  return;
}

