#include "prototype.h"


void FUN_0048e4c0(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  
  puVar5 = &DAT_00b6b0e8;
  for (iVar2 = 0x5000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  FUN_0048a3c0();
  if (param_1 != 0) {
    puVar4 = (uint *)(param_2 + 8);
    do {
      uVar3 = 0;
      if (*puVar4 != 0) {
        iVar2 = 0;
        pfVar1 = (float *)&DAT_00b6b0ec;
        do {
          pfVar1[-1] = ROUND(*(float *)(puVar4[2] + iVar2));
          *pfVar1 = ROUND(*(float *)(puVar4[2] + 4 + iVar2));
          pfVar1[3] = -NAN;
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 0xc;
          pfVar1 = pfVar1 + 8;
        } while (uVar3 < *puVar4);
      }
      if (DAT_00ecc430 == 1) {
        FUN_0048a420(&DAT_00b6b0e8,*puVar4);
      }
      else if (DAT_00ecc430 == 2) {
        (&DAT_00b6b0e8)[uVar3 * 8] = ROUND(*(float *)puVar4[2]);
        (&DAT_00b6b0ec)[uVar3 * 8] = ROUND(*(float *)(puVar4[2] + 4));
        (&DAT_00b6b0f8)[uVar3 * 8] = 0xffffffff;
        FUN_0048a3f0(&DAT_00b6b0e8,*puVar4 + 1);
      }
      puVar4 = puVar4 + 0x10;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

