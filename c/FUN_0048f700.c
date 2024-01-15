#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048f700(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  puVar4 = (uint *)FUN_0048dba0();
  if (puVar4 != (uint *)0x0) {
    uVar7 = *(uint *)(param_1 + 0xc);
    if ((int)DAT_00df7efc < (int)*(uint *)(param_1 + 0xc)) {
      uVar7 = DAT_00df7efc;
    }
    puVar4[1] = uVar7;
    DAT_00ecc49c = puVar4[4];
    _DAT_00ecc490 = puVar4[5];
    _DAT_00ecc494 = puVar4[6];
    _DAT_00ecc4a0 = *(undefined4 *)(param_1 + 0x10);
    _DAT_00ecc4a4 = *(undefined4 *)(param_1 + 0x14);
    _DAT_00ecc4a8 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(*(int *)(*(int *)(DAT_00df7f2c + 4) + 4) + 0x24) == 8) {
      FUN_00491ac0(*(undefined4 *)(param_1 + 8),puVar4[1],&DAT_00ecc4a0,&DAT_00ecc480,param_1 + 0x24
                  );
    }
    else {
      FUN_00493b80(*(undefined4 *)(DAT_00df7f2c + 0x48),&DAT_00ecc4a0,&DAT_00ecc480,param_1 + 0x24);
    }
    if (2 < DAT_00ecc480) {
      pfVar1 = (float *)(puVar4 + 9);
      *pfVar1 = *(float *)(param_1 + 0x2c);
      puVar4[10] = *(uint *)(param_1 + 0x30);
      puVar4[0xb] = *(uint *)(param_1 + 0x34);
      puVar4[0xc] = *(uint *)(param_1 + 0x38);
      if (puVar4[1] == 2) {
        if (param_2 == 0) {
          uVar5 = *(undefined4 *)(DAT_00df7f2c + 0x870);
          uVar6 = *(undefined4 *)(DAT_00df7ce8 + 0x4c);
          pfVar11 = (float *)(param_1 + 0x3c);
          uVar10 = *(undefined4 *)(DAT_00df7f2c + 0x6c);
        }
        else {
          local_1c = -*(float *)(param_1 + 0x3c);
          local_18 = -*(float *)(param_1 + 0x40);
          local_14 = -*(float *)(param_1 + 0x44);
          uVar5 = *(undefined4 *)(DAT_00df7f2c + 0x870);
          uVar6 = *(undefined4 *)(DAT_00df7ce8 + 0x4c);
          pfVar11 = &local_1c;
          uVar10 = *(undefined4 *)(DAT_00df7f2c + 0x6c);
        }
        FUN_00490750(DAT_00df7f2c + 0x70,&DAT_00deb6e8,uVar10,param_1,pfVar11,uVar6,uVar5,&local_10)
        ;
        *pfVar1 = local_10 + *pfVar1;
        puVar4[10] = (uint)(local_c + (float)puVar4[10]);
        puVar4[0xb] = (uint)(local_8 + (float)puVar4[0xb]);
        puVar4[0xc] = (uint)(local_4 + (float)puVar4[0xc]);
      }
      (**(code **)(DAT_00df7f2c + 0x50))(DAT_00ecc49c,DAT_00ecc48c,DAT_00ecc480);
      if ((DAT_00ecc438 & 2) != 0) {
        *pfVar1 = *(float *)(DAT_00df7f2c + 0x5c) + *pfVar1;
        puVar4[10] = (uint)(*(float *)(DAT_00df7f2c + 0x60) + (float)puVar4[10]);
        puVar4[0xb] = (uint)(*(float *)(DAT_00df7f2c + 100) + (float)puVar4[0xb]);
        puVar4[0xc] = (uint)(*(float *)(DAT_00df7f2c + 0x68) + (float)puVar4[0xc]);
      }
      if (*(int *)(param_3 + 0xc) != 0x3f800000) {
        uVar7 = 0;
        puVar4[0xc] = (uint)((float)puVar4[0xc] * *(float *)(param_3 + 0xc) * _DAT_004af7a8);
        if (DAT_00ecc480 != 0) {
          iVar9 = 0;
          do {
            uVar7 = uVar7 + 1;
            iVar2 = iVar9 + 0xc;
            iVar3 = iVar9 + 0xc;
            iVar9 = iVar9 + 0x10;
            *(float *)(iVar3 + puVar4[6]) =
                 *(float *)(iVar2 + puVar4[6]) * *(float *)(param_3 + 0xc) * _DAT_004af7a8;
          } while (uVar7 < DAT_00ecc480);
        }
      }
      puVar4[8] = *(uint *)(param_1 + 0x20);
      uVar7 = 3;
      if (2 < (int)puVar4[1]) {
        uVar7 = 7;
      }
      uVar8 = *(uint *)(param_1 + 4);
      *puVar4 = uVar8;
      *puVar4 = DAT_00df7f18 | uVar8;
      if ((*(uint *)(param_1 + 4) & 0x400) != 0) {
        uVar5 = *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x48) + 4);
        uVar8 = 0;
        if (DAT_00ecc480 != 0) {
          iVar9 = 0;
          do {
            uVar8 = uVar8 + 1;
            *(undefined4 *)(iVar9 + 8 + puVar4[4]) = uVar5;
            iVar9 = iVar9 + 0xc;
          } while (uVar8 < DAT_00ecc480);
        }
      }
      if (*(int *)(param_3 + 0xc) != 0x3f800000) {
        *puVar4 = *puVar4 | 2;
      }
      puVar4[7] = *(uint *)(param_1 + 0x1c);
      puVar4[0xe] = param_4;
      puVar4[0xf] = param_5;
      if (*(int *)(*(int *)(*(int *)(DAT_00df7f2c + 4) + 4) + 0x24) != 8) {
        DAT_00ecc470 = DAT_00ecc470 + 1;
        FUN_0048de10(DAT_00ecc480,uVar7 | 4);
        return 1;
      }
      uVar7 = 0;
      if (DAT_00ecc480 != 0) {
        do {
          iVar9 = DAT_00df7f2c;
          if (uVar7 < DAT_00ecc480 - 1) {
            uVar5 = __ftol(0,0xffffffff);
            uVar5 = __ftol(uVar5);
            uVar5 = __ftol(uVar5);
            uVar6 = __ftol(uVar5);
            uVar5 = *(undefined4 *)(iVar9 + 4);
          }
          else {
            uVar5 = __ftol(0,0xffffffff);
            uVar5 = __ftol(uVar5);
            uVar5 = __ftol(uVar5);
            uVar6 = __ftol(uVar5);
            uVar5 = *(undefined4 *)(iVar9 + 4);
          }
          FUN_00490e10(uVar5,uVar6);
          uVar7 = uVar7 + 1;
        } while (uVar7 < DAT_00ecc480);
        return 0;
      }
    }
  }
  return 0;
}

