#include "prototype.h"


void FUN_004941d0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_20 [3];
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  puVar3 = (undefined4 *)FUN_0048dba0();
  if (puVar3 != (undefined4 *)0x0) {
    local_14 = &DAT_00df7fe0;
    local_4 = puVar3[4];
    local_10 = puVar3[5];
    local_c = puVar3[6];
    *param_4 = *(undefined4 *)(param_2 + 0x10);
    param_4[1] = *(undefined4 *)(param_2 + 0x14);
    param_4[2] = *(undefined4 *)(param_2 + 0x18);
    iVar2 = *(int *)(param_2 + 0xc);
    iVar6 = DAT_00ecc424;
    if (iVar2 <= DAT_00ecc424) {
      iVar6 = iVar2;
    }
    iVar4 = *(int *)(param_1 + 0x34);
    if ((iVar6 < iVar4) && (iVar4 = DAT_00ecc424, iVar2 <= DAT_00ecc424)) {
      iVar4 = iVar2;
    }
    puVar3[1] = iVar4;
    FUN_004910a0(*(undefined4 *)(DAT_00df7f2c + 0x48),*(undefined4 *)(param_2 + 8),iVar4,param_4,
                 local_20,param_2 + 0x24);
    if (2 < local_20[0]) {
      (**(code **)(DAT_00df7f2c + 0x50))(local_4,local_14,local_20[0]);
      pfVar1 = (float *)(puVar3 + 9);
      *pfVar1 = *(float *)(param_2 + 0x2c);
      puVar3[10] = *(undefined4 *)(param_2 + 0x30);
      puVar3[0xb] = *(undefined4 *)(param_2 + 0x34);
      puVar3[0xc] = *(undefined4 *)(param_2 + 0x38);
      if ((DAT_00ecc438 & 2) != 0) {
        *pfVar1 = *(float *)(DAT_00df7f2c + 0x5c) + *pfVar1;
        puVar3[10] = *(float *)(DAT_00df7f2c + 0x60) + (float)puVar3[10];
        puVar3[0xb] = *(float *)(DAT_00df7f2c + 100) + (float)puVar3[0xb];
        puVar3[0xc] = *(float *)(DAT_00df7f2c + 0x68) + (float)puVar3[0xc];
      }
      uVar5 = 3;
      if (2 < (int)puVar3[1]) {
        uVar5 = 7;
      }
      puVar3[8] = *(undefined4 *)(param_1 + 0x28);
      *puVar3 = *(undefined4 *)(param_2 + 4);
      puVar3[7] = *(undefined4 *)(param_2 + 0x1c);
      FUN_0048de10(local_20[0],uVar5);
    }
  }
  return;
}

