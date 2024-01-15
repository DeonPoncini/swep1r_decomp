#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424180(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 auStack_168 [16];
  undefined4 uStack_128;
  char *pcStack_124;
  byte *pbStack_120;
  char *pcStack_11c;
  uint *puStack_118;
  byte local_100;
  undefined4 local_ff;
  
  local_100 = DAT_004d55cc;
  puVar7 = &local_ff;
  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  *(undefined *)((int)puVar7 + 2) = 0;
  puStack_118 = (uint *)&DAT_004d55cc;
  DAT_0050b5ac = param_1;
  pcStack_11c = (char *)0x100;
  pbStack_120 = &local_100;
  pcStack_124 = s_Display_004b7c20;
  param_2[4] = *param_1 - 1;
  uStack_128 = 0x4241d5;
  FUN_0049d2e0();
  uVar8 = 0;
  if (*DAT_0050b5ac != 0) {
    pbVar5 = (byte *)(DAT_0050b5ac[1] + 0x80);
    do {
      pbVar6 = &local_100;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        bVar10 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00424218:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0042421d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar10 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00424218;
        pbVar2 = pbVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0042421d:
      if (iVar4 == 0) {
        param_2[4] = uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
      pbVar5 = pbVar5 + 0x2b4;
    } while (uVar8 < *DAT_0050b5ac);
  }
  puStack_118 = (uint *)&DAT_004d55cc;
  pcStack_11c = (char *)0x100;
  iVar4 = DAT_0050b5ac[1] + param_2[4] * 0x2b4;
  param_2[6] = *(int *)(iVar4 + 0x2ac) - 1;
  pbStack_120 = &local_100;
  pcStack_124 = s_3D_Device_004b7c14;
  uStack_128 = 0x424284;
  FUN_0049d2e0();
  uVar8 = 0;
  if (*(uint *)(iVar4 + 0x2ac) != 0) {
    pbVar5 = (byte *)(*(int *)(iVar4 + 0x2b0) + 0xb4);
    do {
      pbVar6 = &local_100;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        bVar10 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_004242c9:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_004242ce;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar10 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_004242c9;
        pbVar2 = pbVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_004242ce:
      if (iVar3 == 0) {
        param_2[6] = uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
      pbVar5 = pbVar5 + 0x368;
    } while (uVar8 < *(uint *)(iVar4 + 0x2ac));
  }
  puStack_118 = (uint *)0x280;
  pcStack_11c = s_Display_Width_004b7c04;
  DAT_004eb500 = 0x3f800000;
  pbStack_120 = (byte *)0x424306;
  DAT_004eb504 = FUN_0049d180();
  puStack_118 = (uint *)0x1e0;
  pcStack_11c = s_Display_Height_004b7bf4;
  pbStack_120 = (byte *)0x42431d;
  DAT_004eb508 = FUN_0049d180();
  puStack_118 = param_2;
  _DAT_004eb51c = 0x10;
  _DAT_004eb518 = 1;
  puVar7 = &DAT_004eb500;
  puVar9 = auStack_168;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  uVar8 = FUN_004243c0();
  param_2[5] = uVar8;
  puVar7 = (undefined4 *)(*(int *)(iVar4 + 0x2a8) + uVar8 * 0x50);
  puVar9 = &DAT_004eb500;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  param_2[8] = 4;
  param_2[9] = 3;
  param_2[10] = 1;
  *param_2 = (uint)(DAT_004b79f8 == 0);
  param_2[1] = 0;
  param_2[2] = DAT_0050b5b4;
  param_2[3] = 0;
  return;
}

