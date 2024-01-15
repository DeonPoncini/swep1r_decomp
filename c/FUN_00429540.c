#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429540(void)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  short sVar8;
  undefined4 *puVar9;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  int local_ac;
  int local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined local_18 [12];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = 0x20;
  iVar6 = 0;
  iVar3 = 0;
  do {
    iVar5 = iVar5 + -1;
    *(uint *)(PTR_DAT_004b91c4 + iVar3) = *(uint *)(PTR_DAT_004b91c4 + iVar3) & 0xfffffffd;
    iVar3 = iVar3 + 0x7c;
  } while (iVar5 != 0);
  sVar8 = 0;
  iVar3 = FUN_004318c0();
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      iVar6 = FUN_004318d0(iVar3);
      if (iVar6 != 0) {
        iVar3 = FUN_004318b0(iVar6);
        uVar4 = FUN_00431770(iVar6);
        if ((((uVar4 & 1) != 0) && (-1 < iVar3)) && (iVar3 < 0x20)) {
          *(uint *)(PTR_DAT_004b91c4 + iVar3 * 0x7c) =
               *(uint *)(PTR_DAT_004b91c4 + iVar3 * 0x7c) | 2;
        }
      }
      sVar8 = sVar8 + 1;
      iVar3 = (int)sVar8;
      iVar5 = FUN_004318c0();
    } while (iVar3 < iVar5);
  }
  local_ac = 0x20;
  local_a8 = 0;
  do {
    pbVar7 = PTR_DAT_004b91c4 + local_a8;
    if ((*(short *)(pbVar7 + 4) != 0) && ((*pbVar7 & 3) != 0)) {
      sVar8 = *(short *)(pbVar7 + 6);
      if (sVar8 == 0) {
        puVar9 = *(undefined4 **)(pbVar7 + 8);
        *(undefined4 *)(pbVar7 + 0x14) = *puVar9;
        *(undefined4 *)(pbVar7 + 0x18) = puVar9[1];
        *(undefined4 *)(pbVar7 + 0x1c) = puVar9[2];
        *(undefined4 *)(pbVar7 + 0x20) = puVar9[3];
        *(undefined4 *)(pbVar7 + 0x24) = puVar9[4];
        *(undefined4 *)(pbVar7 + 0x28) = puVar9[5];
        *(undefined4 *)(pbVar7 + 0x2c) = puVar9[6];
        *(undefined4 *)(pbVar7 + 0x30) = puVar9[7];
        *(undefined4 *)(pbVar7 + 0x34) = puVar9[8];
        *(undefined4 *)(pbVar7 + 0x38) = puVar9[9];
        *(undefined4 *)(pbVar7 + 0x3c) = puVar9[10];
        *(undefined4 *)(pbVar7 + 0x40) = puVar9[0xb];
        *(undefined4 *)(pbVar7 + 0x44) = puVar9[0xc];
        *(undefined4 *)(pbVar7 + 0x48) = puVar9[0xd];
        *(undefined4 *)(pbVar7 + 0x4c) = puVar9[0xe];
        *(undefined4 *)(pbVar7 + 0x50) = puVar9[0xf];
      }
      else if (sVar8 == 1) {
        FUN_00431060(pbVar7 + 0x14,*(undefined4 *)(pbVar7 + 8));
      }
      else {
        FUN_00428c40((int)sVar8,*(undefined4 *)(pbVar7 + 8),pbVar7 + 0x14);
      }
      puVar9 = (undefined4 *)(pbVar7 + 0x14);
      local_b8 = *(float *)(pbVar7 + 0x54);
      local_b4 = *(float *)(pbVar7 + 0x58);
      local_b0 = *(float *)(pbVar7 + 0x5c);
      if (((local_b8 != _DAT_004ac4f0) || (local_b4 != _DAT_004ac4f0)) ||
         (local_b0 != _DAT_004ac4f0)) {
        FUN_00430980(&local_b8,&local_b8,puVar9);
        *(float *)(pbVar7 + 0x44) = local_b8 + *(float *)(pbVar7 + 0x44);
        *(float *)(pbVar7 + 0x48) = local_b4 + *(float *)(pbVar7 + 0x48);
        *(float *)(pbVar7 + 0x4c) = local_b0 + *(float *)(pbVar7 + 0x4c);
      }
      local_a4 = *(float *)(pbVar7 + 0x60);
      local_a0 = *(float *)(pbVar7 + 100);
      local_9c = *(float *)(pbVar7 + 0x68);
      if (((local_a4 != _DAT_004ac4f0) || (local_a0 != _DAT_004ac4f0)) ||
         (local_9c != _DAT_004ac4f0)) {
        FUN_00431020(&local_98,local_a4,local_a0,local_9c);
        FUN_0042ff80(puVar9,&local_98);
      }
      sVar8 = *(short *)(pbVar7 + 4);
      if (((sVar8 == 2) || (sVar8 == 3)) || (sVar8 == 4)) {
        FUN_00430b80(puVar9,local_18);
        sVar8 = *(short *)(pbVar7 + 0xc);
        if (sVar8 == 1) {
          local_c4 = *(float *)(pbVar7 + 0x6c) + **(float **)(pbVar7 + 0x10);
          local_c0 = *(float *)(pbVar7 + 0x70) + *(float *)(*(int *)(pbVar7 + 0x10) + 4);
          local_bc = *(float *)(pbVar7 + 0x74) + *(float *)(*(int *)(pbVar7 + 0x10) + 8);
        }
        else {
          if (sVar8 == 0) {
            local_58 = **(undefined4 **)(pbVar7 + 0x10);
            local_54 = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 4);
            local_50 = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 8);
            local_4c = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0xc);
            local_48 = *(float *)(*(int *)(pbVar7 + 0x10) + 0x10);
            local_44 = *(float *)(*(int *)(pbVar7 + 0x10) + 0x14);
            local_40 = *(float *)(*(int *)(pbVar7 + 0x10) + 0x18);
            local_3c = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0x1c);
            local_38 = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0x20);
            local_34 = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0x24);
            local_30 = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0x28);
            local_2c = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0x2c);
            local_28 = *(float *)(*(int *)(pbVar7 + 0x10) + 0x30);
            local_24 = *(float *)(*(int *)(pbVar7 + 0x10) + 0x34);
            local_20 = *(float *)(*(int *)(pbVar7 + 0x10) + 0x38);
            local_1c = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0x3c);
          }
          else {
            FUN_00428c40((int)sVar8,*(undefined4 *)(pbVar7 + 0x10),&local_58);
          }
          local_c4 = *(float *)(pbVar7 + 0x6c) + local_28;
          local_c0 = *(float *)(pbVar7 + 0x70) + local_24;
          local_bc = *(float *)(pbVar7 + 0x74) + local_20;
          if (*(short *)(pbVar7 + 4) == 4) {
            fVar1 = local_40;
            if (local_40 < _DAT_004ac4f0) {
              fVar1 = -local_40;
            }
            local_c4 = (fVar1 * (float)_DAT_004ac510 - (float)_DAT_004ac518) * local_48 + local_c4;
            fVar1 = local_40;
            if (local_40 < _DAT_004ac4f0) {
              fVar1 = -local_40;
            }
            local_c0 = (fVar1 * (float)_DAT_004ac510 - (float)_DAT_004ac518) * local_44 + local_c0;
            fVar1 = local_40;
            if (local_40 < _DAT_004ac4f0) {
              fVar1 = -local_40;
            }
            local_bc = (fVar1 * (float)_DAT_004ac510 - (float)_DAT_004ac518) * local_40 + local_bc;
          }
        }
        FUN_00481220(pbVar7 + 0x44,&local_c4,puVar9,local_18,local_4);
        if (*(short *)(pbVar7 + 4) == 3) {
          if (*(short *)(pbVar7 + 6) == 0) {
            **(undefined4 **)(pbVar7 + 8) = *puVar9;
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 4) = *(undefined4 *)(pbVar7 + 0x18);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 8) = *(undefined4 *)(pbVar7 + 0x1c);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0xc) = *(undefined4 *)(pbVar7 + 0x20);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x10) = *(undefined4 *)(pbVar7 + 0x24);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x14) = *(undefined4 *)(pbVar7 + 0x28);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x18) = *(undefined4 *)(pbVar7 + 0x2c);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x1c) = *(undefined4 *)(pbVar7 + 0x30);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x20) = *(undefined4 *)(pbVar7 + 0x34);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x24) = *(undefined4 *)(pbVar7 + 0x38);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x28) = *(undefined4 *)(pbVar7 + 0x3c);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x2c) = *(undefined4 *)(pbVar7 + 0x40);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x30) = *(undefined4 *)(pbVar7 + 0x44);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x34) = *(undefined4 *)(pbVar7 + 0x48);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x38) = *(undefined4 *)(pbVar7 + 0x4c);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x3c) = *(undefined4 *)(pbVar7 + 0x50);
          }
          else if (*(short *)(pbVar7 + 6) == 1) {
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0xc) = local_c;
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x10) = local_8;
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x14) = local_4;
          }
        }
      }
    }
    local_a8 = local_a8 + 0x7c;
    local_ac = local_ac + -1;
  } while (local_ac != 0);
  iVar3 = FUN_004318c0();
  puVar2 = PTR_DAT_004c7cdc;
  if (iVar3 == 0) {
    if (DAT_0050c038 == -1) {
      FUN_00428cd0(PTR_DAT_004c7cdc);
    }
    else {
      if (DAT_0050c03c == 0) {
        DAT_0050c03c = 1;
      }
      local_98 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x14);
      local_94 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x18);
      local_90 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x1c);
      local_8c = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x20);
      local_88 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x24);
      local_84 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x28);
      local_80 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x2c);
      local_7c = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x30);
      local_78 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x34);
      local_74 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x38);
      local_70 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x3c);
      local_6c = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x40);
      local_68 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x44);
      local_64 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x48);
      local_60 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x4c);
      local_5c = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x50);
      if (PTR_DAT_004c7cdc == (undefined *)0x0) {
        return;
      }
      FUN_00431950(PTR_DAT_004c7cdc,&local_98);
    }
    if (puVar2 != (undefined *)0x0) {
      FUN_00431900(puVar2,&DAT_00e996c0,&DAT_00e996cc);
      return;
    }
  }
  else {
    iVar5 = 0;
    iVar3 = FUN_004318c0();
    if (0 < iVar3) {
      do {
        iVar6 = FUN_004318d0(iVar5);
        if (iVar6 != 0) {
          iVar3 = FUN_004318b0(iVar6);
          uVar4 = FUN_00431770(iVar6);
          if ((uVar4 & 1) != 0) {
            if (iVar3 == -1) {
              FUN_00428cd0(iVar6);
            }
            else {
              if (DAT_0050c03c == 0) {
                DAT_0050c03c = 1;
              }
              local_98 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x14);
              local_94 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x18);
              local_90 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x1c);
              local_8c = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x20);
              local_88 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x24);
              local_84 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x28);
              local_80 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x2c);
              local_7c = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x30);
              local_78 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x34);
              local_74 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x38);
              local_70 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x3c);
              local_6c = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x40);
              local_68 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x44);
              local_64 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x48);
              local_60 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x4c);
              local_5c = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x50);
              FUN_00431950(iVar6,&local_98);
            }
          }
        }
        iVar5 = iVar5 + 1;
        iVar3 = FUN_004318c0();
      } while (iVar5 < iVar3);
    }
    if (iVar6 != 0) {
      FUN_00431900(iVar6,&DAT_00e996c0,&DAT_00e996cc);
    }
  }
  return;
}

