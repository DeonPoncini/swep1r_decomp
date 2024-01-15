#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e450(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined local_80 [48];
  float local_50;
  float local_4c;
  float local_48;
  undefined local_40 [64];
  
  FUN_004816b0();
  FUN_004816b0();
  pfVar3 = (float *)&DAT_00e25e00;
  pfVar4 = (float *)&DAT_004c7bc0;
  do {
    if (*pfVar4 <= _DAT_004ade50) {
      iVar2 = FUN_004816b0();
      *pfVar4 = (float)iVar2 * _DAT_004ade88 * _DAT_004adf04 - _DAT_004adef0;
      FUN_0044bb10(local_40,param_1 + 0x20);
      FUN_0044eeb0(param_1 + 0xac,local_80,
                   *(float *)(param_1 + 0x1a0) * _DAT_004adf0c * *pfVar4 * _DAT_004adf08 *
                   _DAT_004adf10);
      fVar1 = local_48 - _DAT_004adec0;
      *pfVar3 = local_50;
      pfVar3[1] = local_4c;
      pfVar3[2] = fVar1;
      iVar2 = FUN_004816b0();
      *pfVar3 = ((float)iVar2 * _DAT_004ade88 * _DAT_004adf14 - _DAT_004ade7c) + *pfVar3;
      iVar2 = FUN_004816b0();
      pfVar3[1] = ((float)iVar2 * _DAT_004ade88 * _DAT_004adf14 - _DAT_004ade7c) + pfVar3[1];
    }
    pfVar4 = pfVar4 + 1;
    pfVar3 = pfVar3 + 3;
  } while ((int)pfVar4 < 0x4c7be0);
  return;
}

