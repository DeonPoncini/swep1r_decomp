#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00470510(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
                 undefined4 param_7,undefined4 param_8)

{
  float *pfVar1;
  float fVar2;
  float10 fVar3;
  
  param_6 = param_6 * (float)_DAT_00e22a40;
  pfVar1 = (float *)(param_1 + ((int)param_2 + 0x1d7) * 0xc);
  param_2 = param_3;
  fVar2 = *pfVar1;
  if ((*(uint *)(param_1 + 0x60) & 0x800000) != 0) {
    param_2 = param_3 * _DAT_004ad95c;
  }
  if ((*(uint *)(param_1 + 0x60) & 0x200) != 0) {
    param_6 = param_6 + param_6;
    param_2 = param_4;
  }
  fVar3 = (float10)FUN_0046d730(param_2,fVar2,param_7,param_8,param_6,param_5 * (float)_DAT_00e22a40
                               );
  if ((*(uint *)(param_1 + 100) & 0x2000000) != 0) {
    fVar3 = (fVar3 + (float10)fVar2) * (float10)_DAT_004ad95c;
  }
  *pfVar1 = (float)fVar3;
  return;
}

