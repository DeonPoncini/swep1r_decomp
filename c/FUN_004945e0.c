#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004945e0(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40 [3];
  undefined *local_34;
  uint local_30;
  uint local_2c;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = *(int *)(param_1 + 4);
  FUN_00493200(&local_4c,param_2 + 0x24,DAT_00df7f2c + 8);
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 != 2) {
    puVar3 = (uint *)FUN_0048dc40();
    if (puVar3 != (uint *)0x0) {
      _DAT_00df9ae8 = local_4c + (*(float *)(iVar2 + 0xac) - *(float *)(iVar2 + 0x58));
      _DAT_00df9aec = local_48 + *(float *)(iVar2 + 0xb0);
      _DAT_00df9af0 = local_44 + (*(float *)(iVar2 + 0xb4) - *(float *)(iVar2 + 0x5c));
      _DAT_00df9af4 = local_4c + *(float *)(iVar2 + 0x58) + *(float *)(iVar2 + 0xac);
      _DAT_00df9af8 = local_48 + *(float *)(iVar2 + 0xb0);
      _DAT_00df9afc = local_44 + (*(float *)(iVar2 + 0xb4) - *(float *)(iVar2 + 0x5c));
      _DAT_00df9b08 = local_44 + *(float *)(iVar2 + 0xb4) + *(float *)(iVar2 + 0x5c);
      _DAT_00df9b00 = local_4c + *(float *)(iVar2 + 0x58) + *(float *)(iVar2 + 0xac);
      _DAT_00df9b04 = local_48 + *(float *)(iVar2 + 0xb0);
      _DAT_00df9b0c = local_4c + (*(float *)(iVar2 + 0xac) - *(float *)(iVar2 + 0x58));
      _DAT_00df9b10 = local_48 + *(float *)(iVar2 + 0xb0);
      _DAT_00df9b14 = local_44 + *(float *)(iVar2 + 0xb4) + *(float *)(iVar2 + 0x5c);
      local_20 = *(undefined4 *)(iVar2 + 0x70);
      local_1c = *(undefined4 *)(iVar2 + 0x74);
      local_18 = *(undefined4 *)(iVar2 + 0x78);
      local_14 = &DAT_00df9ae8;
      local_10 = *(undefined4 *)(iVar2 + 0xa8);
      local_c = 0;
      local_8 = 0;
      local_34 = &DAT_00df9728;
      local_24 = puVar3[4];
      local_30 = puVar3[5];
      local_2c = puVar3[6];
      uVar4 = DAT_00ecc424 & (-1 < (int)DAT_00ecc424) - 1;
      puVar3[1] = uVar4;
      if (iVar5 == 0) {
        FUN_00491ac0(*(undefined4 *)(iVar2 + 0x68),uVar4,&local_20,local_40,iVar2 + 0x84);
      }
      else {
        FUN_004910a0(*(undefined4 *)(DAT_00df7f2c + 0x48),*(undefined4 *)(iVar2 + 0x68),uVar4,
                     &local_20,local_40,iVar2 + 0x84);
      }
      if (2 < local_40[0]) {
        uVar4 = 0;
        if (local_40[0] != 0) {
          iVar5 = 0;
          do {
            puVar6 = (undefined4 *)(iVar5 + puVar3[6]);
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0x10;
            *puVar6 = *(undefined4 *)(iVar2 + 0x8c);
            puVar6[1] = *(undefined4 *)(iVar2 + 0x90);
            puVar6[2] = *(undefined4 *)(iVar2 + 0x94);
            puVar6[3] = *(undefined4 *)(iVar2 + 0x98);
          } while (uVar4 < local_40[0]);
        }
        (**(code **)(DAT_00df7f2c + 0x50))(local_24,local_34,local_40[0]);
        pfVar1 = (float *)(puVar3 + 9);
        *pfVar1 = *(float *)(iVar2 + 0x8c);
        puVar3[10] = *(uint *)(iVar2 + 0x90);
        puVar3[0xb] = *(uint *)(iVar2 + 0x94);
        puVar3[0xc] = *(uint *)(iVar2 + 0x98);
        if ((DAT_00ecc438 & 2) != 0) {
          *pfVar1 = *(float *)(DAT_00df7f2c + 0x5c) + *pfVar1;
          puVar3[10] = (uint)(*(float *)(DAT_00df7f2c + 0x60) + (float)puVar3[10]);
          puVar3[0xb] = (uint)(*(float *)(DAT_00df7f2c + 100) + (float)puVar3[0xb]);
          puVar3[0xc] = (uint)(*(float *)(DAT_00df7f2c + 0x68) + (float)puVar3[0xc]);
        }
        puVar3[8] = *(uint *)(param_1 + 0x28);
        *puVar3 = *(uint *)(iVar2 + 100) | 0x2e;
        puVar3[7] = *(uint *)(iVar2 + 0x7c);
        uVar4 = DAT_00ecc424;
        if ((int)*(uint *)(iVar2 + 0x6c) <= (int)DAT_00ecc424) {
          uVar4 = *(uint *)(iVar2 + 0x6c);
        }
        puVar3[1] = uVar4;
        FUN_0048dea0(local_40[0],7);
        return 1;
      }
    }
  }
  return 0;
}

