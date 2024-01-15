#include "prototype.h"


undefined4 * FUN_004227e0(byte *param_1,int param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  int local_284;
  char local_280 [128];
  undefined local_200 [512];
  
  bVar3 = false;
  local_284 = 0;
  if (DAT_004eb450 == 0) {
    return (undefined4 *)0x0;
  }
  pbVar11 = &DAT_004b7580;
  pbVar4 = param_1;
  do {
    bVar2 = *pbVar4;
    bVar14 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_00422838:
      iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_0042283d;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar14 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_00422838;
    pbVar4 = pbVar4 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_0042283d:
  if (iVar5 == 0) {
    return (undefined4 *)0x0;
  }
  puVar6 = (undefined4 *)FUN_004231b0(param_1);
  if (puVar6 == (undefined4 *)0x0) {
    pcVar7 = s___data_wavs_22K___data_wavs_22K__004b7558;
    if (DAT_004b6d14 == 0) {
      pcVar7 = s___data_wavs_11K___data_wavs_11K__004b751c;
    }
    FUN_0049eb80(local_200,s__s__s_s__s_s_004b74e4,pcVar7,&DAT_00e9f300,s___data_wavs_Music_004b74f4
                 ,&DAT_004d55cc,s___data_wavs_Voice_004b7508);
    puVar8 = local_200;
    do {
      puVar8 = (undefined *)FUN_0048c2d0(puVar8,local_280,0x80,&DAT_004b3b5c);
      if (local_280[0] != '\0') {
        FUN_0049eb80(local_280,s__s_c_s_004b74dc,local_280,0x5c,param_1);
        local_284 = (**(code **)(DAT_00ecc420 + 0x30))(local_280,&DAT_004b5c4c);
        if (local_284 != 0) {
          bVar3 = true;
          break;
        }
      }
    } while (puVar8 != (undefined *)0x0);
    if (!bVar3) {
      return (undefined4 *)0x0;
    }
    uVar9 = *(uint *)(PTR_DAT_004b6d34 + 0x20);
    if (uVar9 < *(uint *)(PTR_DAT_004b6d34 + 0x24)) {
      puVar6 = (undefined4 *)(*(int *)(PTR_DAT_004b6d34 + 0x28) + uVar9 * 0x4c);
      puVar6[8] = uVar9;
      _strncpy((char *)puVar6,(char *)param_1,0x1f);
      *(char *)((int)puVar6 + 0x1f) = '\0';
      uVar9 = FUN_004851a0(local_284,puVar6 + 0xb,puVar6 + 0xc,puVar6 + 0xd,puVar6 + 0xf);
      puVar6[10] = uVar9;
      if (uVar9 != 0) {
        uVar10 = (uint)((ulonglong)uVar9 / ((ulonglong)(uint)puVar6[0xb] / 1000));
        puVar6[0xe] = uVar10;
        if (puVar6[0xc] == 0x10) {
          puVar6[0xe] = uVar10 >> 1;
        }
        if (puVar6[0xd] != 0) {
          puVar6[0xe] = (uint)puVar6[0xe] >> 1;
        }
        puVar6[9] = 0;
        puVar6[0x11] = 1;
        if (0x81330 < uVar9) {
          puVar6[9] = 8;
        }
        FUN_004231d0(puVar6);
        *(int *)(PTR_DAT_004b6d34 + 0x20) = *(int *)(PTR_DAT_004b6d34 + 0x20) + 1;
        (**(code **)(DAT_00ecc420 + 0x34))(local_284);
        return puVar6;
      }
    }
  }
  else {
    if (((DAT_004b6d2c == 0) && (param_2 != 0)) && ((*(byte *)(puVar6 + 9) & 9) == 0)) {
      FUN_00422ac0(puVar6);
    }
    if (*(uint *)(PTR_DAT_004b6d34 + 0x20) < *(uint *)(PTR_DAT_004b6d34 + 0x24)) {
      puVar1 = (undefined4 *)
               (*(int *)(PTR_DAT_004b6d34 + 0x28) + *(uint *)(PTR_DAT_004b6d34 + 0x20) * 0x4c);
      puVar12 = puVar6;
      puVar13 = puVar1;
      for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      if ((puVar6[9] & 8) == 0) {
        puVar6[9] = puVar6[9] | 4;
        puVar1[9] = puVar1[9] | 2;
      }
      puVar1[8] = *(undefined4 *)(PTR_DAT_004b6d34 + 0x20);
      *(int *)(PTR_DAT_004b6d34 + 0x20) = *(int *)(PTR_DAT_004b6d34 + 0x20) + 1;
      return puVar1;
    }
  }
  if (local_284 != 0) {
    (**(code **)(DAT_00ecc420 + 0x34))(local_284);
  }
  return (undefined4 *)0x0;
}

