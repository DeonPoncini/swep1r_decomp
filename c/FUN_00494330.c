#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00494330(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined local_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_30 [48];
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_00493200(local_4c,param_2 + 0x24,DAT_00df7f2c + 8);
  if (*(int *)(param_1 + 0x38) == 2) {
    return 0;
  }
  FUN_00492b70(local_30,DAT_00df7f2c + 8,param_2);
  if ((DAT_00ecc438 & 2) == 0) {
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
  }
  else {
    local_40 = *(undefined4 *)(DAT_00df7f2c + 0x5c);
    local_3c = *(undefined4 *)(DAT_00df7f2c + 0x60);
    local_38 = *(undefined4 *)(DAT_00df7f2c + 100);
    local_34 = *(undefined4 *)(DAT_00df7f2c + 0x68);
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  FUN_00493270(local_30,*(undefined4 *)(iVar1 + 0x48),&DAT_00df8b20,*(undefined4 *)(iVar1 + 0x44));
  iVar5 = 0;
  param_1 = 0;
  if (*(int *)(iVar1 + 0x44) != 0) {
    puVar6 = &DAT_00df8b24;
    do {
      puVar3 = (undefined4 *)FUN_0048dc40();
      if (puVar3 == (undefined4 *)0x0) {
        return 0;
      }
      _DAT_00df8760 = (float)puVar6[-1] - *(float *)(iVar1 + 0x58);
      _DAT_00df8764 = *puVar6;
      _DAT_00df8768 = (float)puVar6[1] - *(float *)(iVar1 + 0x58);
      _DAT_00df8770 = *puVar6;
      _DAT_00df876c = (float)puVar6[-1] + *(float *)(iVar1 + 0x58);
      _DAT_00df877c = *puVar6;
      _DAT_00df8774 = (float)puVar6[1] - *(float *)(iVar1 + 0x58);
      _DAT_00df8788 = *puVar6;
      _DAT_00df8778 = (float)puVar6[-1] + *(float *)(iVar1 + 0x58);
      _DAT_00df8780 = (float)puVar6[1] + *(float *)(iVar1 + 0x58);
      _DAT_00df8784 = (float)puVar6[-1] - *(float *)(iVar1 + 0x58);
      _DAT_00df878c = (float)puVar6[1] + *(float *)(iVar1 + 0x58);
      iVar4 = FUN_00495d50(*(undefined4 *)(DAT_00df7f2c + 0x48),&DAT_00df8760,4);
      if (iVar4 == 4) {
        (**(code **)(DAT_00df7f2c + 0x50))(puVar3[4],&DAT_00df8760,4);
        *puVar3 = 0;
        puVar3[9] = local_40;
        puVar3[10] = local_3c;
        puVar3[0xb] = local_38;
        puVar3[0xc] = local_34;
        puVar3[1] = uVar2;
        puVar3[7] = *(undefined4 *)(iVar1 + 0x5c);
        puVar3[8] = *(undefined4 *)(*(int *)(iVar1 + 0x4c) + param_1 * 4);
        *(undefined4 *)puVar3[5] = 0;
        *(undefined4 *)(puVar3[5] + 4) = 0;
        *(undefined4 *)(puVar3[5] + 8) = 0x3f800000;
        *(undefined4 *)(puVar3[5] + 0xc) = 0;
        *(undefined4 *)(puVar3[5] + 0x10) = 0x3f800000;
        *(undefined4 *)(puVar3[5] + 0x14) = 0x3f800000;
        *(undefined4 *)(puVar3[5] + 0x18) = 0;
        *(undefined4 *)(puVar3[5] + 0x1c) = 0x3f800000;
        puVar3[9] = *(undefined4 *)(iVar5 + *(int *)(iVar1 + 0x50));
        puVar3[10] = *(undefined4 *)(iVar5 + 4 + *(int *)(iVar1 + 0x50));
        puVar3[0xb] = *(undefined4 *)(iVar5 + 8 + *(int *)(iVar1 + 0x50));
        puVar3[0xc] = *(undefined4 *)(iVar5 + 0xc + *(int *)(iVar1 + 0x50));
        FUN_0048dea0(4,7);
      }
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 3;
      iVar5 = iVar5 + 0x10;
    } while (param_1 < *(uint *)(iVar1 + 0x44));
  }
  return 1;
}

