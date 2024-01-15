#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d040(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 local_20 [8];
  
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffffef;
  fVar2 = _DAT_004ad750;
  fVar1 = *(float *)(param_1 + 0x310) - (float)_DAT_00e22a40;
  *(float *)(param_1 + 0x310) = fVar1;
  if (fVar1 <= fVar2) {
    local_20[0] = 0x536e6170;
    FUN_00450c00(param_1,local_20);
    pfVar3 = (float *)(param_1 + 0x288);
    iVar4 = 6;
    do {
      pfVar3[6] = (float)((uint)pfVar3[6] & 0xfffffff7);
      if (_DAT_004ad76c < *pfVar3) {
        *pfVar3 = 0.1;
      }
      pfVar3 = pfVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffff7ff;
    if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
      FUN_00405cf0(1);
      FUN_0040a120(0);
      FUN_0040b110(param_1);
    }
  }
  return;
}

