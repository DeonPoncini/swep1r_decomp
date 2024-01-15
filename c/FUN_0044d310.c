#include "prototype.h"


void FUN_0044d310(int param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float local_80;
  undefined local_78 [12];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined local_30 [12];
  undefined local_24 [12];
  undefined local_18 [12];
  float local_c;
  float local_8;
  float local_4;
  
  iVar7 = 0;
  if (DAT_004c3c04 == 0) {
    local_60 = 1.0;
    local_5c = 0.0;
    local_58 = 0.0;
    local_54 = 0.0;
    local_50 = 1.0;
    local_4c = 0.0;
    local_48 = 0.0;
    local_44 = 0.0;
    local_40 = 1.0;
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    goto LAB_0044d68a;
  }
  if (*(short *)(param_1 + 0x1e) == 0) {
    FUN_0044b9b0(&local_60);
  }
  else {
    FUN_0044b9b0(local_30);
    local_38 = local_8;
    local_3c = local_c;
    local_34 = local_4;
    local_6c = local_c - *(float *)(DAT_00e67c04 + 0xa0);
    local_68 = local_8 - *(float *)(DAT_00e67c04 + 0xa4);
    local_64 = local_4 - *(float *)(DAT_00e67c04 + 0xa8);
    FUN_0042f9b0(&local_6c);
    sVar1 = *(short *)(param_1 + 0x1e);
    if (sVar1 == 1) {
      FUN_0042fa50(local_78,*(undefined4 *)(param_1 + 0x20),local_30);
      FUN_0042fa80(local_78,local_78,*(undefined4 *)(param_1 + 0x24),local_24);
      FUN_0042fa80(&local_48,local_78,*(undefined4 *)(param_1 + 0x28),local_18);
      fVar8 = (float10)FUN_0042f9b0(&local_48);
      local_80 = (float)fVar8;
      FUN_0042f9f0(&local_60,&local_6c,&local_48);
      FUN_0042f9b0(&local_60);
      pfVar11 = &local_60;
      pfVar10 = &local_48;
      pfVar9 = &local_54;
LAB_0044d573:
      FUN_0042f9f0(pfVar9,pfVar10,pfVar11);
    }
    else {
      local_54 = local_6c;
      local_50 = local_68;
      local_4c = local_64;
      if (sVar1 == 2) {
        fVar8 = (float10)FUN_0042f8c0(local_18);
        local_80 = (float)fVar8;
        FUN_0042f9f0(&local_60,&local_54,DAT_00e67c04 + 0x90);
        FUN_0042f9b0(&local_60);
        pfVar11 = &local_54;
        pfVar10 = &local_60;
        pfVar9 = &local_48;
        goto LAB_0044d573;
      }
      if (sVar1 == 3) {
        FUN_0042fa50(local_78,*(undefined4 *)(param_1 + 0x20),local_30);
        FUN_0042fa80(local_78,local_78,*(undefined4 *)(param_1 + 0x24),local_24);
        FUN_0042fa80(local_78,local_78,*(undefined4 *)(param_1 + 0x28),local_18);
        fVar8 = (float10)FUN_0042f9b0(local_78);
        local_80 = (float)fVar8;
        FUN_0042f9f0(&local_60,&local_54,local_78);
        FUN_0042f9b0(&local_60);
        pfVar11 = &local_54;
        pfVar10 = &local_60;
        pfVar9 = &local_48;
        goto LAB_0044d573;
      }
    }
    local_60 = local_80 * local_60;
    local_5c = local_80 * local_5c;
    local_58 = local_80 * local_58;
    local_54 = local_80 * local_54;
    local_50 = local_80 * local_50;
    local_4c = local_80 * local_4c;
    local_48 = local_80 * local_48;
    local_44 = local_80 * local_44;
    local_40 = local_80 * local_40;
  }
  if (*(short *)(param_1 + 0x1c) == 1) {
    local_3c = *(float *)(DAT_00e67c04 + 0xa0);
    local_38 = *(float *)(DAT_00e67c04 + 0xa4);
    local_34 = *(float *)(DAT_00e67c04 + 0xa8);
  }
LAB_0044d68a:
  DAT_0050c6e0 = DAT_0050c6e0 + 1;
  bVar3 = DAT_0050c6e0 < 0x21;
  if (bVar3) {
    FUN_0044b750(&local_60);
  }
  iVar4 = FUN_00431780(param_1);
  if (0 < iVar4) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + iVar7 * 4);
      if (((iVar2 != 0) &&
          (uVar6 = *(uint *)(DAT_00e67c04 + 0x158), uVar5 = FUN_00431b00(iVar2,2),
          (uVar5 & uVar6) == uVar6)) &&
         (uVar6 = FUN_00431b00(iVar2,2), (*(uint *)(DAT_00e67c04 + 0x15c) & uVar6) != 0)) {
        FUN_0044d7c0(iVar2);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  if (bVar3) {
    FUN_0044bab0();
  }
  DAT_0050c6e0 = DAT_0050c6e0 + -1;
  return;
}

