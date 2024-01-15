#include "prototype.h"


void FUN_004447b0(byte param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined local_80 [48];
  float local_50;
  float local_4c;
  float local_48;
  undefined local_40 [64];
  
  if ((param_1 & 1) == 0) {
    if (0 < param_2) {
      puVar2 = (undefined4 *)(param_3 + 4);
      puVar4 = (undefined4 *)(param_4 + 0xc);
      do {
        puVar2[-1] = puVar4[-3];
        *puVar2 = *(undefined4 *)((int)puVar2 + (param_4 - param_3));
        puVar2[1] = puVar4[-1];
        puVar2[2] = *puVar4;
        puVar2[3] = puVar4[1];
        puVar2[4] = puVar4[2];
        puVar2 = puVar2 + 7;
        param_2 = param_2 + -1;
        puVar4 = puVar4 + 7;
      } while (param_2 != 0);
    }
  }
  else {
    FUN_00445500(local_80);
    if ((param_1 & 2) == 0) {
      if (0 < param_2) {
        pfVar1 = (float *)(param_3 + 4);
        pfVar3 = (float *)(param_4 + 0xc);
        do {
          param_2 = param_2 + -1;
          pfVar1[-1] = pfVar3[-3] - local_50;
          *pfVar1 = *(float *)((int)pfVar1 + (param_4 - param_3)) - local_4c;
          pfVar1[1] = pfVar3[-1] - local_48;
          pfVar1[2] = *pfVar3;
          pfVar1[3] = pfVar3[1];
          pfVar1[4] = pfVar3[2];
          pfVar1 = pfVar1 + 7;
          pfVar3 = pfVar3 + 7;
        } while (param_2 != 0);
        return;
      }
    }
    else {
      FUN_00430310(local_40,local_80);
      if (0 < param_2) {
        iVar5 = param_3 + 0xc;
        param_3 = param_4 - param_3;
        do {
          FUN_00430a00(iVar5 + -0xc,param_4,local_40);
          FUN_00430980(iVar5,param_3 + iVar5,local_40);
          param_4 = param_4 + 0x1c;
          iVar5 = iVar5 + 0x1c;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        return;
      }
    }
  }
  return;
}

