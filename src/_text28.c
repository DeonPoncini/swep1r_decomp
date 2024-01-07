#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_00493b80(undefined4 param_1,uint *param_2,int *param_3,float *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint local_8;

  puVar7 = param_2;
  DAT_00df7f80 = param_2[5];
  DAT_00df7f7c = param_3[5];
  uVar2 = param_2[6];
  iVar8 = 0;
  if (uVar2 != 0) {
    local_8 = 0;
    DAT_00df7f78 = uVar2;
    if (*param_2 != 0) {
      param_2 = (uint *)0x0;
      do {
        iVar3 = *(int *)(puVar7[1] + local_8 * 4);
        iVar4 = *(int *)(puVar7[2] + local_8 * 4);
        iVar9 = iVar3 * 0x10;
        fVar6 = *(float *)(DAT_00df7f80 + iVar9) + *(float *)(DAT_00df7f78 + iVar8);
        if (fVar6 < 0.0) {
          fVar6 = 0.0;
        }
        else if (1.0 < fVar6) {
          fVar6 = 1.0;
        }
        iVar11 = local_8 * 8;
        *(float *)(DAT_00df7f7c + iVar8) = fVar6;
        uVar2 = puVar7[4];
        iVar5 = param_3[4];
        *(undefined4 *)(iVar11 + iVar5) = *(undefined4 *)(uVar2 + iVar4 * 8);
        ((undefined4 *)(iVar11 + iVar5))[1] = *(undefined4 *)(uVar2 + 4 + iVar4 * 8);
        fVar6 = *(float *)(DAT_00df7f80 + 4 + iVar9) + *(float *)(DAT_00df7f78 + 4 + iVar8);
        if (fVar6 < 0.0) {
          fVar6 = 0.0;
        }
        else if (1.0 < fVar6) {
          fVar6 = 1.0;
        }
        *(float *)(DAT_00df7f7c + 4 + iVar8) = fVar6;
        puVar1 = (undefined4 *)(puVar7[3] + iVar3 * 0xc);
        puVar10 = (undefined4 *)(param_3[3] + (int)param_2);
        *puVar10 = *puVar1;
        puVar10[1] = puVar1[1];
        puVar10[2] = puVar1[2];
        fVar6 = *(float *)(DAT_00df7f80 + 8 + iVar9) + *(float *)(DAT_00df7f78 + 8 + iVar8);
        if (fVar6 < 0.0) {
          fVar6 = 0.0;
        }
        else if (1.0 < fVar6) {
          fVar6 = 1.0;
        }
        *(float *)(DAT_00df7f7c + 8 + iVar8) = fVar6;
        *(float *)(param_3[4] + iVar11) = *param_4 + *(float *)(param_3[4] + iVar11);
        *(float *)(iVar11 + 4 + param_3[4]) = *(float *)(iVar11 + 4 + param_3[4]) + param_4[1];
        fVar6 = *(float *)(DAT_00df7f80 + 0xc + iVar9) + *(float *)(DAT_00df7f78 + 0xc + iVar8);
        if (fVar6 < 0.0) {
          fVar6 = 0.0;
        }
        else if (1.0 < fVar6) {
          fVar6 = 1.0;
        }
        local_8 = local_8 + 1;
        *(float *)(DAT_00df7f7c + 0xc + iVar8) = fVar6;
        param_2 = (uint *)((int)param_2 + 0xc);
        iVar8 = iVar8 + 0x10;
      } while (local_8 < *puVar7);
    }
  }
  if (*DAT_00df7f2c == 1) {
    iVar8 = FUN_0049c810(param_1,puVar7);
    *param_3 = iVar8;
    if (iVar8 != 0) {
      iVar8 = FUN_0049c9f0(param_1,puVar7,param_3);
      *param_3 = iVar8;
      return;
    }
  }
  else {
    iVar8 = FUN_0049b7d0(param_1,param_3[3],param_3[4],DAT_00df7f7c,*puVar7);
    *param_3 = iVar8;
  }
  return;
}



undefined4 FUN_00493df0(void)

{
  if (DAT_00df7fd0 != 0) {
    return 0xfffffffe;
  }
  DAT_00df7fd0 = 1;
  return 0;
}



void FUN_00493e10(void)

{
  if (DAT_00df7fd4 != 0) {
    FUN_00493e60();
  }
  if (DAT_00df7fd0 != 0) {
    DAT_00df7fd0 = 0;
  }
  return;
}



undefined4 FUN_00493e40(void)

{
  if (DAT_00df7fd4 != 0) {
    return 0xfffffffe;
  }
  DAT_00df7fd4 = 1;
  return 0;
}



void FUN_00493e60(void)

{
  if (DAT_00df7fd4 != 0) {
    DAT_00df7fd4 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00493e80(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  undefined local_84 [36];
  float local_60;
  float local_5c;
  float local_58;
  undefined local_54 [12];
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  fVar3 = param_1;
  local_40 = 0;
  local_3c = 0;
  iVar1 = *(int *)((int)param_1 + 4);
  local_48 = &DAT_00df83a0;
  FUN_00492b70(local_84,DAT_00df7f2c + 8,param_2);
  local_34 = 0;
  local_30 = *(undefined4 *)(iVar1 + 0x40);
  local_2c = 0;
  FUN_00493200(&local_28,&local_34,local_84);
  _DAT_00df83a0 = local_28 - *(float *)(iVar1 + 0x48);
  _DAT_00df83a4 = local_24 - -0.001;
  _DAT_00df83a8 = local_20 - *(float *)(iVar1 + 0x48);
  _DAT_00df83ac = local_28 + *(float *)(iVar1 + 0x48);
  _DAT_00df83b4 = local_20 - *(float *)(iVar1 + 0x48);
  _DAT_00df83b8 = local_28 + *(float *)(iVar1 + 0x48);
  _DAT_00df83c0 = local_20 + *(float *)(iVar1 + 0x48);
  _DAT_00df83c4 = local_28 - *(float *)(iVar1 + 0x48);
  _DAT_00df83cc = local_20 + *(float *)(iVar1 + 0x48);
  local_44 = *(undefined4 *)(iVar1 + 0xe8);
  _DAT_00df83b0 = _DAT_00df83a4;
  _DAT_00df83bc = _DAT_00df83a4;
  _DAT_00df83c8 = _DAT_00df83a4;
  FUN_004941d0(fVar3,iVar1 + 0x9c,&DAT_00df83a0,local_54);
  _DAT_00df83a0 = local_60 - *(float *)(iVar1 + 0x44);
  _DAT_00df83a4 = local_5c - -0.001;
  _DAT_00df83a8 = local_58 - *(float *)(iVar1 + 0x44);
  _DAT_00df83ac = local_60 + *(float *)(iVar1 + 0x44);
  _DAT_00df83b4 = local_58 - *(float *)(iVar1 + 0x44);
  _DAT_00df83b8 = local_60 + *(float *)(iVar1 + 0x44);
  _DAT_00df83c0 = local_58 + *(float *)(iVar1 + 0x44);
  _DAT_00df83c4 = local_60 - *(float *)(iVar1 + 0x44);
  _DAT_00df83cc = local_58 + *(float *)(iVar1 + 0x44);
  local_44 = *(undefined4 *)(iVar1 + 0xe8);
  _DAT_00df83b0 = _DAT_00df83a4;
  _DAT_00df83bc = _DAT_00df83a4;
  _DAT_00df83c8 = _DAT_00df83a4;
  FUN_004941d0(fVar3,iVar1 + 0x9c,&DAT_00df83a0,local_54);
  local_14 = local_28 - local_60;
  local_18 = local_20 - local_58;
  local_10 = SQRT(local_18 * local_18 + local_14 * local_14);
  local_8 = local_10;
  fVar4 = (float10)FUN_0048d010(-local_14 / local_10);
  local_8 = (float)fVar4;
  if (local_18 < 0.0) {
    if (local_14 <= 0.0) {
      local_8 = -(local_8 - -180.0);
    }
    else {
      local_8 = 180.0 - local_8;
    }
  }
  FUN_0048c950(local_8,&param_2,&param_1);
  local_1c = -*(float *)(iVar1 + 0x44);
  fVar2 = local_10 * param_2;
  local_c = *(float *)(iVar1 + 0x44);
  _DAT_00df83a4 = local_24;
  _DAT_00df83b0 = local_24;
  _DAT_00df83bc = local_5c;
  _DAT_00df83a0 = (*(float *)(iVar1 + 0x48) * param_1 - fVar2) + local_60;
  local_10 = local_10 * param_1;
  _DAT_00df83a8 = *(float *)(iVar1 + 0x48) * param_2 + local_10 + local_58;
  local_14 = 0.0;
  _DAT_00df83ac = (-*(float *)(iVar1 + 0x48) * param_1 - fVar2) + local_60;
  _DAT_00df83b4 = -*(float *)(iVar1 + 0x48) * param_2 + local_10 + local_58;
  _DAT_00df83b8 = (local_1c * param_1 - 0.0) + local_60;
  _DAT_00df83c0 = local_1c * param_2 + 0.0 + local_58;
  _DAT_00df83c4 = (local_c * param_1 - 0.0) + local_60;
  _DAT_00df83c8 = local_5c;
  _DAT_00df83cc = local_c * param_2 + 0.0 + local_58;
  local_44 = *(undefined4 *)(iVar1 + 0xe4);
  FUN_004941d0(fVar3,iVar1 + 0x54,&DAT_00df83a0,local_54);
  return 1;
}



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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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



undefined4 FUN_00494980(float param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  iVar4 = (int)param_1;
  uVar5 = FUN_00494c20(param_1,*param_2,*param_3);
  uVar6 = FUN_00494c20(param_1,*param_4,*param_5);
  if ((uVar5 == 0) && (uVar6 == 0)) {
    return 1;
  }
  if ((uVar5 & uVar6) == 0) {
    param_1 = (float)*param_2;
    local_8 = (float)*param_3;
    local_c = (float)*param_4;
    local_10 = (float)*param_5;
    bVar1 = param_1 != local_c;
    if (local_8 == local_10) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    do {
      uVar7 = uVar5;
      if (uVar5 == 0) {
        uVar7 = uVar6;
      }
      fVar2 = param_1;
      if ((uVar7 & 0x1000) == 0) {
        if ((uVar7 & 0x100) == 0) {
          if ((uVar7 & 0x10) == 0) {
            if (bVar3) {
              local_14 = local_8;
            }
            else {
              local_14 = ((float)*(int *)(iVar4 + 0x10) - param_1) *
                         ((local_10 - local_8) / (local_c - param_1)) + local_8;
            }
            fVar2 = (float)*(int *)(iVar4 + 0x10);
          }
          else if (bVar3) {
            fVar2 = (float)*(int *)(iVar4 + 0x18);
            local_14 = local_8;
          }
          else {
            local_14 = ((float)*(int *)(iVar4 + 0x18) - param_1) *
                       ((local_10 - local_8) / (local_c - param_1)) + local_8;
            fVar2 = (float)*(int *)(iVar4 + 0x18);
          }
        }
        else if (bVar1) {
          fVar2 = ((float)*(int *)(iVar4 + 0x1c) - local_8) *
                  ((local_c - param_1) / (local_10 - local_8)) + param_1;
          local_14 = (float)*(int *)(iVar4 + 0x1c);
        }
        else {
          local_14 = (float)*(int *)(iVar4 + 0x1c);
        }
      }
      else if (bVar1) {
        local_14 = (float)*(int *)(iVar4 + 0x14);
        fVar2 = ((float)*(int *)(iVar4 + 0x14) - local_8) *
                ((local_c - param_1) / (local_10 - local_8)) + param_1;
      }
      else {
        local_14 = (float)*(int *)(iVar4 + 0x14);
      }
      if (uVar7 == uVar5) {
        local_8 = local_14;
        uVar5 = FUN_00494c20(iVar4,(int)ROUND(ROUND(fVar2)),(int)ROUND(ROUND(local_14)));
        param_1 = fVar2;
      }
      else {
        local_10 = local_14;
        uVar6 = FUN_00494c20(iVar4,(int)ROUND(ROUND(fVar2)),(int)ROUND(ROUND(local_14)));
        local_c = fVar2;
      }
      if ((uVar5 == 0) && (uVar6 == 0)) {
        *param_2 = (int)ROUND(ROUND(param_1));
        *param_3 = (int)ROUND(ROUND(local_8));
        *param_4 = (int)ROUND(ROUND(local_c));
        *param_5 = (int)ROUND(ROUND(local_10));
        return 1;
      }
    } while ((uVar5 & uVar6) == 0);
  }
  return 0;
}



uint FUN_00494c20(int param_1,int param_2,int param_3)

{
  uint uVar1;

  uVar1 = 0;
  if (param_2 < *(int *)(param_1 + 0x10)) {
    uVar1 = 1;
  }
  else if (*(int *)(param_1 + 0x18) < param_2) {
    uVar1 = 0x10;
  }
  if (param_3 < *(int *)(param_1 + 0x14)) {
    return uVar1 | 0x1000;
  }
  if (*(int *)(param_1 + 0x1c) < param_3) {
    uVar1 = uVar1 | 0x100;
  }
  return uVar1;
}



int FUN_00494c60(int *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int local_4;

  iVar12 = 0;
  pfVar13 = (float *)&DAT_00dfa140;
  DAT_00dfaa04 = 0;
  DAT_00dfa138 = param_2;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  if (0 < param_3) {
    iVar10 = 0;
    local_4 = param_3;
    pfVar14 = param_2 + param_3 * 3 + -3;
    pfVar15 = param_2;
    do {
      fVar2 = (float)param_1[9] * pfVar14[1];
      fVar3 = (float)param_1[9] * pfVar15[1];
      if ((fVar2 <= *pfVar14) || (fVar3 <= *pfVar15)) {
        iVar11 = iVar10;
        if (((*pfVar14 != fVar2) && (fVar3 != *pfVar15)) &&
           ((*pfVar14 < fVar2 || (*pfVar15 < fVar3)))) {
          fVar2 = pfVar15[1] - pfVar14[1];
          fVar4 = *pfVar15 - *pfVar14;
          fVar1 = (float)param_1[9] * fVar2 - fVar4;
          fVar5 = pfVar15[1] * *pfVar14 - pfVar14[1] * *pfVar15;
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = fVar2;
          if (fVar2 < 0.0) {
            fVar1 = -fVar2;
          }
          fVar6 = fVar4;
          if (fVar4 < 0.0) {
            fVar6 = -fVar4;
          }
          if (fVar1 <= fVar6) {
            fVar2 = ((float)param_1[9] * fVar5 - *pfVar14) / fVar4;
          }
          else {
            fVar2 = (fVar5 - pfVar14[1]) / fVar2;
          }
          *(float *)((int)pfVar13 + iVar10) = (float)param_1[9] * fVar5;
          iVar12 = iVar12 + 1;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 4) = fVar5;
          iVar11 = iVar10 + 0xc;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 8) =
               (pfVar15[2] - pfVar14[2]) * fVar2 + pfVar14[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          pfVar13 = DAT_00df9eb4;
        }
        iVar10 = iVar11;
        if (fVar3 <= *pfVar15) {
          pfVar13 = (float *)((int)pfVar13 + iVar11);
          iVar12 = iVar12 + 1;
          iVar10 = iVar11 + 0xc;
          *pfVar13 = *pfVar15;
          pfVar13[1] = pfVar15[1];
          pfVar13[2] = pfVar15[2];
          pfVar13 = DAT_00df9eb4;
        }
      }
      local_4 = local_4 + -1;
      pfVar14 = pfVar15;
      pfVar15 = pfVar15 + 3;
    } while (local_4 != 0);
  }
  if (2 < iVar12) {
    iVar10 = 0;
    pfVar14 = DAT_00dfa138;
    DAT_00df9eb4 = DAT_00dfa138;
    if (0 < iVar12) {
      iVar11 = 0;
      pfVar15 = pfVar13 + iVar12 * 3 + -3;
      pfVar9 = pfVar13;
      DAT_00dfa138 = pfVar13;
      local_4 = iVar12;
      do {
        fVar2 = (float)param_1[10] * pfVar15[1];
        fVar3 = (float)param_1[10] * pfVar9[1];
        if ((*pfVar15 <= fVar2) || (*pfVar9 <= fVar3)) {
          iVar12 = iVar11;
          if (((*pfVar15 != fVar2) && (fVar3 != *pfVar9)) &&
             ((fVar2 < *pfVar15 || (fVar3 < *pfVar9)))) {
            fVar2 = pfVar9[1] - pfVar15[1];
            fVar4 = *pfVar9 - *pfVar15;
            fVar1 = (float)param_1[10] * fVar2 - fVar4;
            fVar5 = pfVar9[1] * *pfVar15 - pfVar15[1] * *pfVar9;
            if (fVar1 != 0.0) {
              fVar5 = fVar5 / fVar1;
            }
            fVar1 = fVar2;
            if (fVar2 < 0.0) {
              fVar1 = -fVar2;
            }
            fVar6 = fVar4;
            if (fVar4 < 0.0) {
              fVar6 = -fVar4;
            }
            if (fVar1 <= fVar6) {
              fVar2 = ((float)param_1[10] * fVar5 - *pfVar15) / fVar4;
            }
            else {
              fVar2 = (fVar5 - pfVar15[1]) / fVar2;
            }
            *(float *)((int)pfVar14 + iVar11) = (float)param_1[10] * fVar5;
            iVar10 = iVar10 + 1;
            *(float *)((int)DAT_00df9eb4 + iVar11 + 4) = fVar5;
            iVar12 = iVar11 + 0xc;
            *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                 (pfVar9[2] - pfVar15[2]) * fVar2 + pfVar15[2];
            DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
            pfVar14 = DAT_00df9eb4;
          }
          iVar11 = iVar12;
          if (*pfVar9 <= fVar3) {
            pfVar14 = (float *)((int)pfVar14 + iVar12);
            iVar10 = iVar10 + 1;
            iVar11 = iVar12 + 0xc;
            *pfVar14 = *pfVar9;
            pfVar14[1] = pfVar9[1];
            pfVar14[2] = pfVar9[2];
            pfVar14 = DAT_00df9eb4;
          }
        }
        local_4 = local_4 + -1;
        pfVar15 = pfVar9;
        pfVar9 = pfVar9 + 3;
        pfVar13 = DAT_00dfa138;
      } while (local_4 != 0);
    }
    DAT_00dfa138 = pfVar13;
    iVar12 = iVar10;
    if (2 < iVar12) {
      iVar10 = 0;
      DAT_00df9eb4 = DAT_00dfa138;
      pfVar13 = pfVar14 + iVar12 * 3 + -3;
      pfVar15 = DAT_00dfa138;
      if (0 < iVar12) {
        iVar11 = 0;
        pfVar9 = pfVar14 + 2;
        DAT_00dfa138 = pfVar14;
        local_4 = iVar12;
        do {
          fVar2 = (float)param_1[7] * pfVar13[1];
          fVar3 = pfVar9[-1] * (float)param_1[7];
          if ((pfVar13[2] <= fVar2) || (*pfVar9 <= fVar3)) {
            iVar12 = iVar11;
            if (((pfVar13[2] != fVar2) && (fVar3 != *pfVar9)) &&
               ((fVar2 < pfVar13[2] || (fVar3 < *pfVar9)))) {
              fVar2 = pfVar9[-1] - pfVar13[1];
              fVar4 = *pfVar9 - pfVar13[2];
              fVar1 = (float)param_1[7] * fVar2 - fVar4;
              fVar5 = pfVar13[2] * pfVar9[-1] - pfVar13[1] * *pfVar9;
              if (fVar1 != 0.0) {
                fVar5 = fVar5 / fVar1;
              }
              fVar1 = (float)param_1[7];
              fVar6 = fVar2;
              if (fVar2 < 0.0) {
                fVar6 = -fVar2;
              }
              fVar7 = fVar4;
              if (fVar4 < 0.0) {
                fVar7 = -fVar4;
              }
              if (fVar6 <= fVar7) {
                fVar2 = (fVar1 * fVar5 - pfVar13[2]) / fVar4;
              }
              else {
                fVar2 = (fVar5 - pfVar13[1]) / fVar2;
              }
              iVar10 = iVar10 + 1;
              iVar12 = iVar11 + 0xc;
              *(float *)((int)pfVar15 + iVar11) = (pfVar9[-2] - *pfVar13) * fVar2 + *pfVar13;
              *(float *)((int)DAT_00df9eb4 + iVar11 + 4) = fVar5;
              *(float *)((int)DAT_00df9eb4 + iVar11 + 8) = fVar1 * fVar5;
              DAT_00dfaa04 = DAT_00dfaa04 | 4;
              pfVar15 = DAT_00df9eb4;
            }
            iVar11 = iVar12;
            if (*pfVar9 <= fVar3) {
              pfVar15 = (float *)((int)pfVar15 + iVar12);
              iVar10 = iVar10 + 1;
              iVar11 = iVar12 + 0xc;
              *pfVar15 = pfVar9[-2];
              pfVar15[1] = pfVar9[-1];
              pfVar15[2] = *pfVar9;
              pfVar15 = DAT_00df9eb4;
            }
          }
          pfVar13 = pfVar9 + -2;
          pfVar9 = pfVar9 + 3;
          local_4 = local_4 + -1;
          pfVar14 = DAT_00dfa138;
        } while (local_4 != 0);
      }
      DAT_00dfa138 = pfVar14;
      iVar12 = iVar10;
      if (2 < iVar12) {
        iVar10 = 0;
        DAT_00df9eb4 = DAT_00dfa138;
        pfVar13 = pfVar15 + iVar12 * 3 + -3;
        pfVar14 = DAT_00dfa138;
        if (0 < iVar12) {
          iVar11 = 0;
          pfVar9 = pfVar15 + 2;
          DAT_00dfa138 = pfVar15;
          local_4 = iVar12;
          do {
            fVar2 = (float)param_1[8] * pfVar13[1];
            fVar3 = pfVar9[-1] * (float)param_1[8];
            if ((fVar2 <= pfVar13[2]) || (fVar3 <= *pfVar9)) {
              iVar12 = iVar11;
              if (((pfVar13[2] != fVar2) && (fVar3 != *pfVar9)) &&
                 ((pfVar13[2] < fVar2 || (*pfVar9 < fVar3)))) {
                fVar2 = pfVar9[-1] - pfVar13[1];
                fVar4 = *pfVar9 - pfVar13[2];
                fVar1 = (float)param_1[8] * fVar2 - fVar4;
                fVar5 = pfVar13[2] * pfVar9[-1] - pfVar13[1] * *pfVar9;
                if (fVar1 != 0.0) {
                  fVar5 = fVar5 / fVar1;
                }
                fVar1 = (float)param_1[8];
                fVar6 = fVar2;
                if (fVar2 < 0.0) {
                  fVar6 = -fVar2;
                }
                fVar7 = fVar4;
                if (fVar4 < 0.0) {
                  fVar7 = -fVar4;
                }
                if (fVar6 <= fVar7) {
                  fVar2 = (fVar1 * fVar5 - pfVar13[2]) / fVar4;
                }
                else {
                  fVar2 = (fVar5 - pfVar13[1]) / fVar2;
                }
                iVar10 = iVar10 + 1;
                iVar12 = iVar11 + 0xc;
                *(float *)((int)pfVar14 + iVar11) = (pfVar9[-2] - *pfVar13) * fVar2 + *pfVar13;
                *(float *)((int)DAT_00df9eb4 + iVar11 + 4) = fVar5;
                *(float *)((int)DAT_00df9eb4 + iVar11 + 8) = fVar1 * fVar5;
                DAT_00dfaa04 = DAT_00dfaa04 | 8;
                pfVar14 = DAT_00df9eb4;
              }
              iVar11 = iVar12;
              if (fVar3 <= *pfVar9) {
                pfVar14 = (float *)((int)pfVar14 + iVar12);
                iVar10 = iVar10 + 1;
                iVar11 = iVar12 + 0xc;
                *pfVar14 = pfVar9[-2];
                pfVar14[1] = pfVar9[-1];
                pfVar14[2] = *pfVar9;
                pfVar14 = DAT_00df9eb4;
              }
            }
            pfVar13 = pfVar9 + -2;
            pfVar9 = pfVar9 + 3;
            local_4 = local_4 + -1;
            pfVar15 = DAT_00dfa138;
          } while (local_4 != 0);
        }
        DAT_00dfa138 = pfVar15;
        iVar12 = iVar10;
        if (2 < iVar12) {
          iVar10 = 0;
          DAT_00df9eb4 = DAT_00dfa138;
          pfVar13 = pfVar14 + iVar12 * 3 + -3;
          pfVar15 = DAT_00dfa138;
          if (0 < iVar12) {
            pfVar9 = pfVar14 + 1;
            iVar11 = 0;
            DAT_00dfa138 = pfVar14;
            param_3 = iVar12;
            do {
              iVar12 = iVar11;
              if (((float)param_1[1] <= pfVar13[1]) || ((float)param_1[1] <= *pfVar9)) {
                if (((pfVar13[1] != (float)param_1[1]) && (*pfVar9 != (float)param_1[1])) &&
                   ((pfVar13[1] < (float)param_1[1] || (*pfVar9 < (float)param_1[1])))) {
                  iVar10 = iVar10 + 1;
                  fVar2 = ((float)param_1[1] - pfVar13[1]) / (*pfVar9 - pfVar13[1]);
                  *(int *)((int)pfVar15 + iVar11 + 4) = param_1[1];
                  iVar12 = iVar11 + 0xc;
                  *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                       (pfVar9[1] - pfVar13[2]) * fVar2 + pfVar13[2];
                  *(float *)((int)DAT_00df9eb4 + iVar11) =
                       (pfVar9[-1] - *pfVar13) * fVar2 + *pfVar13;
                  DAT_00dfaa04 = DAT_00dfaa04 | 1;
                  pfVar15 = DAT_00df9eb4;
                }
                if ((float)param_1[1] <= *pfVar9) {
                  pfVar15 = (float *)((int)pfVar15 + iVar12);
                  iVar10 = iVar10 + 1;
                  iVar12 = iVar12 + 0xc;
                  *pfVar15 = pfVar9[-1];
                  pfVar15[1] = *pfVar9;
                  pfVar15[2] = pfVar9[1];
                  pfVar15 = DAT_00df9eb4;
                }
              }
              pfVar13 = pfVar9 + -1;
              pfVar9 = pfVar9 + 3;
              param_3 = param_3 + -1;
              iVar11 = iVar12;
              pfVar14 = DAT_00dfa138;
            } while (param_3 != 0);
          }
          DAT_00dfa138 = pfVar14;
          if (iVar10 < 3) {
            DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
            return iVar10;
          }
          iVar12 = iVar10;
          pfVar13 = pfVar15;
          if (*param_1 != 0) {
            iVar12 = 0;
            pfVar14 = pfVar15 + iVar10 * 3 + -3;
            pfVar13 = DAT_00dfa138;
            DAT_00df9eb4 = DAT_00dfa138;
            if (0 < iVar10) {
              pfVar9 = pfVar15 + 1;
              iVar11 = 0;
              DAT_00dfa138 = pfVar15;
              param_3 = iVar10;
              do {
                iVar10 = iVar11;
                if ((pfVar14[1] <= (float)param_1[2]) || (*pfVar9 <= (float)param_1[2])) {
                  if (((pfVar14[1] != (float)param_1[2]) && (*pfVar9 != (float)param_1[2])) &&
                     (((float)param_1[2] < pfVar14[1] || ((float)param_1[2] < *pfVar9)))) {
                    iVar12 = iVar12 + 1;
                    fVar2 = ((float)param_1[2] - pfVar14[1]) / (*pfVar9 - pfVar14[1]);
                    *(int *)((int)pfVar13 + iVar11 + 4) = param_1[2];
                    iVar10 = iVar11 + 0xc;
                    *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                         (pfVar9[1] - pfVar14[2]) * fVar2 + pfVar14[2];
                    *(float *)((int)DAT_00df9eb4 + iVar11) =
                         (pfVar9[-1] - *pfVar14) * fVar2 + *pfVar14;
                    DAT_00dfaa04 = DAT_00dfaa04 | 2;
                    pfVar13 = DAT_00df9eb4;
                  }
                  if (*pfVar9 <= (float)param_1[2]) {
                    pfVar13 = (float *)((int)pfVar13 + iVar10);
                    iVar12 = iVar12 + 1;
                    iVar10 = iVar10 + 0xc;
                    *pfVar13 = pfVar9[-1];
                    pfVar13[1] = *pfVar9;
                    pfVar13[2] = pfVar9[1];
                    pfVar13 = DAT_00df9eb4;
                  }
                }
                pfVar14 = pfVar9 + -1;
                pfVar9 = pfVar9 + 3;
                param_3 = param_3 + -1;
                iVar11 = iVar10;
                pfVar15 = DAT_00dfa138;
              } while (param_3 != 0);
            }
            DAT_00dfa138 = pfVar15;
            if (iVar12 < 3) {
              return iVar12;
            }
          }
          if (pfVar13 != param_2) {
            for (uVar8 = iVar12 * 3 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
              *param_2 = *pfVar13;
              pfVar13 = pfVar13 + 1;
              param_2 = param_2 + 1;
            }
            for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
              *(undefined *)param_2 = *(undefined *)pfVar13;
              pfVar13 = (float *)((int)pfVar13 + 1);
              param_2 = (float *)((int)param_2 + 1);
            }
          }
        }
      }
    }
  }
  return iVar12;
}



int FUN_00495600(int *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;

  iVar6 = 0;
  pfVar9 = (float *)&DAT_00dfa140;
  iVar8 = 0;
  DAT_00dfaa04 = 0;
  DAT_00dfa138 = param_2;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  pfVar10 = param_2 + param_3 * 3 + -3;
  pfVar11 = param_2;
  if (0 < param_3) {
    do {
      fVar2 = (float)param_1[3];
      fVar1 = (float)param_1[3];
      if ((fVar2 <= *pfVar10) || (fVar1 <= *pfVar11)) {
        iVar7 = iVar6;
        if (((*pfVar10 != fVar2) && (fVar1 != *pfVar11)) &&
           ((*pfVar10 < fVar2 || (*pfVar11 < fVar1)))) {
          fVar3 = (*pfVar11 - *pfVar10) / (fVar2 - *pfVar10);
          iVar8 = iVar8 + 1;
          iVar7 = iVar6 + 0xc;
          *(float *)((int)pfVar9 + iVar6) = fVar2;
          *(float *)((int)DAT_00df9eb4 + iVar6 + 4) = (pfVar11[1] - pfVar10[1]) * fVar3 + pfVar10[1]
          ;
          *(float *)((int)DAT_00df9eb4 + iVar6 + 8) = (pfVar11[2] - pfVar10[2]) * fVar3 + pfVar10[2]
          ;
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          pfVar9 = DAT_00df9eb4;
        }
        iVar6 = iVar7;
        if (fVar1 <= *pfVar11) {
          pfVar9 = (float *)((int)pfVar9 + iVar7);
          iVar8 = iVar8 + 1;
          iVar6 = iVar7 + 0xc;
          *pfVar9 = *pfVar11;
          pfVar9[1] = pfVar11[1];
          pfVar9[2] = pfVar11[2];
          pfVar9 = DAT_00df9eb4;
        }
      }
      param_3 = param_3 + -1;
      pfVar10 = pfVar11;
      pfVar11 = pfVar11 + 3;
    } while (param_3 != 0);
  }
  if (2 < iVar8) {
    iVar6 = 0;
    pfVar10 = DAT_00dfa138;
    DAT_00df9eb4 = DAT_00dfa138;
    if (0 < iVar8) {
      iVar7 = 0;
      pfVar11 = pfVar9 + iVar8 * 3 + -3;
      pfVar5 = pfVar9;
      DAT_00dfa138 = pfVar9;
      param_3 = iVar8;
      do {
        fVar2 = (float)param_1[5];
        fVar1 = (float)param_1[5];
        if ((*pfVar11 <= fVar2) || (*pfVar5 <= fVar1)) {
          iVar8 = iVar7;
          if (((*pfVar11 != fVar2) && (fVar1 != *pfVar5)) &&
             ((fVar2 < *pfVar11 || (fVar1 < *pfVar5)))) {
            fVar3 = (*pfVar5 - *pfVar11) / (fVar2 - *pfVar11);
            iVar6 = iVar6 + 1;
            iVar8 = iVar7 + 0xc;
            *(float *)((int)pfVar10 + iVar7) = fVar2;
            *(float *)((int)DAT_00df9eb4 + iVar7 + 4) =
                 (pfVar5[1] - pfVar11[1]) * fVar3 + pfVar11[1];
            *(float *)((int)DAT_00df9eb4 + iVar7 + 8) =
                 (pfVar5[2] - pfVar11[2]) * fVar3 + pfVar11[2];
            DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
            pfVar10 = DAT_00df9eb4;
          }
          iVar7 = iVar8;
          if (*pfVar5 <= fVar1) {
            pfVar10 = (float *)((int)pfVar10 + iVar8);
            iVar6 = iVar6 + 1;
            iVar7 = iVar8 + 0xc;
            *pfVar10 = *pfVar5;
            pfVar10[1] = pfVar5[1];
            pfVar10[2] = pfVar5[2];
            pfVar10 = DAT_00df9eb4;
          }
        }
        param_3 = param_3 + -1;
        pfVar11 = pfVar5;
        pfVar5 = pfVar5 + 3;
        pfVar9 = DAT_00dfa138;
      } while (param_3 != 0);
    }
    DAT_00dfa138 = pfVar9;
    iVar8 = iVar6;
    if (2 < iVar8) {
      iVar6 = 0;
      pfVar11 = pfVar10 + iVar8 * 3 + -3;
      pfVar9 = DAT_00dfa138;
      DAT_00df9eb4 = DAT_00dfa138;
      if (0 < iVar8) {
        pfVar5 = pfVar10 + 2;
        iVar7 = 0;
        DAT_00dfa138 = pfVar10;
        param_3 = iVar8;
        do {
          fVar2 = (float)param_1[4];
          fVar1 = (float)param_1[4];
          if ((pfVar11[2] <= fVar2) || (*pfVar5 <= fVar1)) {
            iVar8 = iVar7;
            if (((pfVar11[2] != fVar2) && (fVar1 != *pfVar5)) &&
               ((fVar2 < pfVar11[2] || (fVar1 < *pfVar5)))) {
              fVar3 = (*pfVar5 - pfVar11[2]) / (fVar2 - pfVar11[2]);
              iVar6 = iVar6 + 1;
              iVar8 = iVar7 + 0xc;
              *(float *)((int)pfVar9 + iVar7) = (pfVar5[-2] - *pfVar11) * fVar3 + *pfVar11;
              *(float *)((int)DAT_00df9eb4 + iVar7 + 4) =
                   (pfVar5[-1] - pfVar11[1]) * fVar3 + pfVar11[1];
              *(float *)((int)DAT_00df9eb4 + iVar7 + 8) = fVar2;
              DAT_00dfaa04 = DAT_00dfaa04 | 4;
              pfVar9 = DAT_00df9eb4;
            }
            iVar7 = iVar8;
            if (*pfVar5 <= fVar1) {
              pfVar9 = (float *)((int)pfVar9 + iVar8);
              iVar6 = iVar6 + 1;
              iVar7 = iVar8 + 0xc;
              *pfVar9 = pfVar5[-2];
              pfVar9[1] = pfVar5[-1];
              pfVar9[2] = *pfVar5;
              pfVar9 = DAT_00df9eb4;
            }
          }
          pfVar11 = pfVar5 + -2;
          pfVar5 = pfVar5 + 3;
          param_3 = param_3 + -1;
          pfVar10 = DAT_00dfa138;
        } while (param_3 != 0);
      }
      DAT_00dfa138 = pfVar10;
      iVar8 = iVar6;
      if (2 < iVar8) {
        iVar6 = 0;
        pfVar10 = pfVar9 + iVar8 * 3 + -3;
        pfVar11 = DAT_00dfa138;
        DAT_00df9eb4 = DAT_00dfa138;
        if (0 < iVar8) {
          pfVar5 = pfVar9 + 2;
          iVar7 = 0;
          DAT_00dfa138 = pfVar9;
          param_3 = iVar8;
          do {
            fVar2 = (float)param_1[6];
            fVar1 = (float)param_1[6];
            if ((fVar2 <= pfVar10[2]) || (fVar1 <= *pfVar5)) {
              iVar8 = iVar7;
              if (((pfVar10[2] != fVar2) && (fVar1 != *pfVar5)) &&
                 ((pfVar10[2] < fVar2 || (*pfVar5 < fVar1)))) {
                fVar3 = (*pfVar5 - pfVar10[2]) / (fVar2 - pfVar10[2]);
                iVar6 = iVar6 + 1;
                iVar8 = iVar7 + 0xc;
                *(float *)((int)pfVar11 + iVar7) = (pfVar5[-2] - *pfVar10) * fVar3 + *pfVar10;
                *(float *)((int)DAT_00df9eb4 + iVar7 + 4) =
                     (pfVar5[-1] - pfVar10[1]) * fVar3 + pfVar10[1];
                *(float *)((int)DAT_00df9eb4 + iVar7 + 8) = fVar2;
                DAT_00dfaa04 = DAT_00dfaa04 | 8;
                pfVar11 = DAT_00df9eb4;
              }
              iVar7 = iVar8;
              if (fVar1 <= *pfVar5) {
                pfVar11 = (float *)((int)pfVar11 + iVar8);
                iVar6 = iVar6 + 1;
                iVar7 = iVar8 + 0xc;
                *pfVar11 = pfVar5[-2];
                pfVar11[1] = pfVar5[-1];
                pfVar11[2] = *pfVar5;
                pfVar11 = DAT_00df9eb4;
              }
            }
            pfVar10 = pfVar5 + -2;
            pfVar5 = pfVar5 + 3;
            param_3 = param_3 + -1;
            pfVar9 = DAT_00dfa138;
          } while (param_3 != 0);
        }
        DAT_00dfa138 = pfVar9;
        iVar8 = iVar6;
        if (2 < iVar8) {
          iVar6 = 0;
          pfVar10 = pfVar11 + iVar8 * 3 + -3;
          pfVar9 = DAT_00dfa138;
          DAT_00df9eb4 = DAT_00dfa138;
          if (0 < iVar8) {
            pfVar5 = pfVar11 + 1;
            iVar7 = 0;
            DAT_00dfa138 = pfVar11;
            param_3 = iVar8;
            do {
              iVar8 = iVar7;
              if (((float)param_1[1] <= pfVar10[1]) || ((float)param_1[1] <= *pfVar5)) {
                if (((pfVar10[1] != (float)param_1[1]) && (*pfVar5 != (float)param_1[1])) &&
                   ((pfVar10[1] < (float)param_1[1] || (*pfVar5 < (float)param_1[1])))) {
                  iVar6 = iVar6 + 1;
                  fVar1 = ((float)param_1[1] - pfVar10[1]) / (*pfVar5 - pfVar10[1]);
                  *(int *)((int)pfVar9 + iVar7 + 4) = param_1[1];
                  iVar8 = iVar7 + 0xc;
                  *(float *)((int)DAT_00df9eb4 + iVar7 + 8) =
                       (pfVar5[1] - pfVar10[2]) * fVar1 + pfVar10[2];
                  *(float *)((int)DAT_00df9eb4 + iVar7) = (pfVar5[-1] - *pfVar10) * fVar1 + *pfVar10
                  ;
                  DAT_00dfaa04 = DAT_00dfaa04 | 1;
                  pfVar9 = DAT_00df9eb4;
                }
                if ((float)param_1[1] <= *pfVar5) {
                  pfVar9 = (float *)((int)pfVar9 + iVar8);
                  iVar6 = iVar6 + 1;
                  iVar8 = iVar8 + 0xc;
                  *pfVar9 = pfVar5[-1];
                  pfVar9[1] = *pfVar5;
                  pfVar9[2] = pfVar5[1];
                  pfVar9 = DAT_00df9eb4;
                }
              }
              pfVar10 = pfVar5 + -1;
              pfVar5 = pfVar5 + 3;
              param_3 = param_3 + -1;
              iVar7 = iVar8;
              pfVar11 = DAT_00dfa138;
            } while (param_3 != 0);
          }
          DAT_00dfa138 = pfVar11;
          if (iVar6 < 3) {
            DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
            return iVar6;
          }
          iVar8 = iVar6;
          pfVar10 = pfVar9;
          if (*param_1 != 0) {
            iVar8 = 0;
            pfVar11 = pfVar9 + iVar6 * 3 + -3;
            pfVar10 = DAT_00dfa138;
            DAT_00df9eb4 = DAT_00dfa138;
            if (0 < iVar6) {
              pfVar5 = pfVar9 + 1;
              iVar7 = 0;
              DAT_00dfa138 = pfVar9;
              param_3 = iVar6;
              do {
                iVar6 = iVar7;
                if ((pfVar11[1] <= (float)param_1[2]) || (*pfVar5 <= (float)param_1[2])) {
                  if (((pfVar11[1] != (float)param_1[2]) && (*pfVar5 != (float)param_1[2])) &&
                     (((float)param_1[2] < pfVar11[1] || ((float)param_1[2] < *pfVar5)))) {
                    iVar8 = iVar8 + 1;
                    fVar1 = ((float)param_1[2] - pfVar11[1]) / (*pfVar5 - pfVar11[1]);
                    *(int *)((int)pfVar10 + iVar7 + 4) = param_1[2];
                    iVar6 = iVar7 + 0xc;
                    *(float *)((int)DAT_00df9eb4 + iVar7 + 8) =
                         (pfVar5[1] - pfVar11[2]) * fVar1 + pfVar11[2];
                    *(float *)((int)DAT_00df9eb4 + iVar7) =
                         (pfVar5[-1] - *pfVar11) * fVar1 + *pfVar11;
                    DAT_00dfaa04 = DAT_00dfaa04 | 2;
                    pfVar10 = DAT_00df9eb4;
                  }
                  if (*pfVar5 <= (float)param_1[2]) {
                    pfVar10 = (float *)((int)pfVar10 + iVar6);
                    iVar8 = iVar8 + 1;
                    iVar6 = iVar6 + 0xc;
                    *pfVar10 = pfVar5[-1];
                    pfVar10[1] = *pfVar5;
                    pfVar10[2] = pfVar5[1];
                    pfVar10 = DAT_00df9eb4;
                  }
                }
                pfVar11 = pfVar5 + -1;
                pfVar5 = pfVar5 + 3;
                param_3 = param_3 + -1;
                iVar7 = iVar6;
                pfVar9 = DAT_00dfa138;
              } while (param_3 != 0);
            }
            DAT_00dfa138 = pfVar9;
            if (iVar8 < 3) {
              return iVar8;
            }
          }
          if (pfVar10 != param_2) {
            for (uVar4 = iVar8 * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
              *param_2 = *pfVar10;
              pfVar10 = pfVar10 + 1;
              param_2 = param_2 + 1;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined *)param_2 = *(undefined *)pfVar10;
              pfVar10 = (float *)((int)pfVar10 + 1);
              param_2 = (float *)((int)param_2 + 1);
            }
          }
        }
      }
    }
  }
  return iVar8;
}



int FUN_00495d50(int *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int local_4;

  iVar12 = 0;
  pfVar13 = (float *)&DAT_00dfa140;
  DAT_00dfaa04 = 0;
  DAT_00dfa138 = param_2;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  if (0 < param_3) {
    iVar10 = 0;
    local_4 = param_3;
    pfVar14 = param_2 + param_3 * 3 + -3;
    pfVar15 = param_2;
    do {
      fVar2 = (float)param_1[0xc] * pfVar14[1];
      fVar3 = (float)param_1[0xc] * pfVar15[1];
      if ((fVar2 <= *pfVar14) || (fVar3 <= *pfVar15)) {
        iVar11 = iVar10;
        if (((*pfVar14 != fVar2) && (fVar3 != *pfVar15)) &&
           ((*pfVar14 < fVar2 || (*pfVar15 < fVar3)))) {
          fVar2 = pfVar15[1] - pfVar14[1];
          fVar4 = *pfVar15 - *pfVar14;
          fVar1 = (float)param_1[0xc] * fVar2 - fVar4;
          fVar5 = pfVar15[1] * *pfVar14 - pfVar14[1] * *pfVar15;
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = fVar2;
          if (fVar2 < 0.0) {
            fVar1 = -fVar2;
          }
          fVar6 = fVar4;
          if (fVar4 < 0.0) {
            fVar6 = -fVar4;
          }
          if (fVar1 <= fVar6) {
            fVar2 = ((float)param_1[0xc] * fVar5 - *pfVar14) / fVar4;
          }
          else {
            fVar2 = (fVar5 - pfVar14[1]) / fVar2;
          }
          *(float *)((int)pfVar13 + iVar10) = (float)param_1[0xc] * fVar5;
          iVar12 = iVar12 + 1;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 4) = fVar5;
          iVar11 = iVar10 + 0xc;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 8) =
               (pfVar15[2] - pfVar14[2]) * fVar2 + pfVar14[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          pfVar13 = DAT_00df9eb4;
        }
        iVar10 = iVar11;
        if (fVar3 <= *pfVar15) {
          pfVar13 = (float *)((int)pfVar13 + iVar11);
          iVar12 = iVar12 + 1;
          iVar10 = iVar11 + 0xc;
          *pfVar13 = *pfVar15;
          pfVar13[1] = pfVar15[1];
          pfVar13[2] = pfVar15[2];
          pfVar13 = DAT_00df9eb4;
        }
      }
      local_4 = local_4 + -1;
      pfVar14 = pfVar15;
      pfVar15 = pfVar15 + 3;
    } while (local_4 != 0);
  }
  if (2 < iVar12) {
    iVar10 = 0;
    pfVar14 = DAT_00dfa138;
    DAT_00df9eb4 = DAT_00dfa138;
    if (0 < iVar12) {
      iVar11 = 0;
      pfVar15 = pfVar13 + iVar12 * 3 + -3;
      pfVar9 = pfVar13;
      DAT_00dfa138 = pfVar13;
      local_4 = iVar12;
      do {
        fVar2 = (float)param_1[10] * pfVar15[1];
        fVar3 = (float)param_1[10] * pfVar9[1];
        if ((*pfVar15 <= fVar2) || (*pfVar9 <= fVar3)) {
          iVar12 = iVar11;
          if (((*pfVar15 != fVar2) && (fVar3 != *pfVar9)) &&
             ((fVar2 < *pfVar15 || (fVar3 < *pfVar9)))) {
            fVar2 = pfVar9[1] - pfVar15[1];
            fVar4 = *pfVar9 - *pfVar15;
            fVar1 = (float)param_1[10] * fVar2 - fVar4;
            fVar5 = pfVar9[1] * *pfVar15 - pfVar15[1] * *pfVar9;
            if (fVar1 != 0.0) {
              fVar5 = fVar5 / fVar1;
            }
            fVar1 = fVar2;
            if (fVar2 < 0.0) {
              fVar1 = -fVar2;
            }
            fVar6 = fVar4;
            if (fVar4 < 0.0) {
              fVar6 = -fVar4;
            }
            if (fVar1 <= fVar6) {
              fVar2 = ((float)param_1[10] * fVar5 - *pfVar15) / fVar4;
            }
            else {
              fVar2 = (fVar5 - pfVar15[1]) / fVar2;
            }
            *(float *)((int)pfVar14 + iVar11) = (float)param_1[10] * fVar5;
            iVar10 = iVar10 + 1;
            *(float *)((int)DAT_00df9eb4 + iVar11 + 4) = fVar5;
            iVar12 = iVar11 + 0xc;
            *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                 (pfVar9[2] - pfVar15[2]) * fVar2 + pfVar15[2];
            DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
            pfVar14 = DAT_00df9eb4;
          }
          iVar11 = iVar12;
          if (*pfVar9 <= fVar3) {
            pfVar14 = (float *)((int)pfVar14 + iVar12);
            iVar10 = iVar10 + 1;
            iVar11 = iVar12 + 0xc;
            *pfVar14 = *pfVar9;
            pfVar14[1] = pfVar9[1];
            pfVar14[2] = pfVar9[2];
            pfVar14 = DAT_00df9eb4;
          }
        }
        local_4 = local_4 + -1;
        pfVar15 = pfVar9;
        pfVar9 = pfVar9 + 3;
        pfVar13 = DAT_00dfa138;
      } while (local_4 != 0);
    }
    DAT_00dfa138 = pfVar13;
    iVar12 = iVar10;
    if (2 < iVar12) {
      iVar10 = 0;
      DAT_00df9eb4 = DAT_00dfa138;
      pfVar13 = pfVar14 + iVar12 * 3 + -3;
      pfVar15 = DAT_00dfa138;
      if (0 < iVar12) {
        iVar11 = 0;
        pfVar9 = pfVar14 + 2;
        DAT_00dfa138 = pfVar14;
        local_4 = iVar12;
        do {
          fVar2 = (float)param_1[0xb] * pfVar13[1];
          fVar3 = pfVar9[-1] * (float)param_1[0xb];
          if ((pfVar13[2] <= fVar2) || (*pfVar9 <= fVar3)) {
            iVar12 = iVar11;
            if (((pfVar13[2] != fVar2) && (fVar3 != *pfVar9)) &&
               ((fVar2 < pfVar13[2] || (fVar3 < *pfVar9)))) {
              fVar2 = pfVar9[-1] - pfVar13[1];
              fVar4 = *pfVar9 - pfVar13[2];
              fVar1 = (float)param_1[0xb] * fVar2 - fVar4;
              fVar5 = pfVar13[2] * pfVar9[-1] - pfVar13[1] * *pfVar9;
              if (fVar1 != 0.0) {
                fVar5 = fVar5 / fVar1;
              }
              fVar1 = (float)param_1[0xb];
              fVar6 = fVar2;
              if (fVar2 < 0.0) {
                fVar6 = -fVar2;
              }
              fVar7 = fVar4;
              if (fVar4 < 0.0) {
                fVar7 = -fVar4;
              }
              if (fVar6 <= fVar7) {
                fVar2 = (fVar1 * fVar5 - pfVar13[2]) / fVar4;
              }
              else {
                fVar2 = (fVar5 - pfVar13[1]) / fVar2;
              }
              iVar10 = iVar10 + 1;
              iVar12 = iVar11 + 0xc;
              *(float *)((int)pfVar15 + iVar11) = (pfVar9[-2] - *pfVar13) * fVar2 + *pfVar13;
              *(float *)((int)DAT_00df9eb4 + iVar11 + 4) = fVar5;
              *(float *)((int)DAT_00df9eb4 + iVar11 + 8) = fVar1 * fVar5;
              DAT_00dfaa04 = DAT_00dfaa04 | 4;
              pfVar15 = DAT_00df9eb4;
            }
            iVar11 = iVar12;
            if (*pfVar9 <= fVar3) {
              pfVar15 = (float *)((int)pfVar15 + iVar12);
              iVar10 = iVar10 + 1;
              iVar11 = iVar12 + 0xc;
              *pfVar15 = pfVar9[-2];
              pfVar15[1] = pfVar9[-1];
              pfVar15[2] = *pfVar9;
              pfVar15 = DAT_00df9eb4;
            }
          }
          pfVar13 = pfVar9 + -2;
          pfVar9 = pfVar9 + 3;
          local_4 = local_4 + -1;
          pfVar14 = DAT_00dfa138;
        } while (local_4 != 0);
      }
      DAT_00dfa138 = pfVar14;
      iVar12 = iVar10;
      if (2 < iVar12) {
        iVar10 = 0;
        DAT_00df9eb4 = DAT_00dfa138;
        pfVar13 = pfVar15 + iVar12 * 3 + -3;
        pfVar14 = DAT_00dfa138;
        if (0 < iVar12) {
          iVar11 = 0;
          pfVar9 = pfVar15 + 2;
          DAT_00dfa138 = pfVar15;
          local_4 = iVar12;
          do {
            fVar2 = (float)param_1[8] * pfVar13[1];
            fVar3 = pfVar9[-1] * (float)param_1[8];
            if ((fVar2 <= pfVar13[2]) || (fVar3 <= *pfVar9)) {
              iVar12 = iVar11;
              if (((pfVar13[2] != fVar2) && (fVar3 != *pfVar9)) &&
                 ((pfVar13[2] < fVar2 || (*pfVar9 < fVar3)))) {
                fVar2 = pfVar9[-1] - pfVar13[1];
                fVar4 = *pfVar9 - pfVar13[2];
                fVar1 = (float)param_1[8] * fVar2 - fVar4;
                fVar5 = pfVar13[2] * pfVar9[-1] - pfVar13[1] * *pfVar9;
                if (fVar1 != 0.0) {
                  fVar5 = fVar5 / fVar1;
                }
                fVar1 = (float)param_1[8];
                fVar6 = fVar2;
                if (fVar2 < 0.0) {
                  fVar6 = -fVar2;
                }
                fVar7 = fVar4;
                if (fVar4 < 0.0) {
                  fVar7 = -fVar4;
                }
                if (fVar6 <= fVar7) {
                  fVar2 = (fVar1 * fVar5 - pfVar13[2]) / fVar4;
                }
                else {
                  fVar2 = (fVar5 - pfVar13[1]) / fVar2;
                }
                iVar10 = iVar10 + 1;
                iVar12 = iVar11 + 0xc;
                *(float *)((int)pfVar14 + iVar11) = (pfVar9[-2] - *pfVar13) * fVar2 + *pfVar13;
                *(float *)((int)DAT_00df9eb4 + iVar11 + 4) = fVar5;
                *(float *)((int)DAT_00df9eb4 + iVar11 + 8) = fVar1 * fVar5;
                DAT_00dfaa04 = DAT_00dfaa04 | 8;
                pfVar14 = DAT_00df9eb4;
              }
              iVar11 = iVar12;
              if (fVar3 <= *pfVar9) {
                pfVar14 = (float *)((int)pfVar14 + iVar12);
                iVar10 = iVar10 + 1;
                iVar11 = iVar12 + 0xc;
                *pfVar14 = pfVar9[-2];
                pfVar14[1] = pfVar9[-1];
                pfVar14[2] = *pfVar9;
                pfVar14 = DAT_00df9eb4;
              }
            }
            pfVar13 = pfVar9 + -2;
            pfVar9 = pfVar9 + 3;
            local_4 = local_4 + -1;
            pfVar15 = DAT_00dfa138;
          } while (local_4 != 0);
        }
        DAT_00dfa138 = pfVar15;
        iVar12 = iVar10;
        if (2 < iVar12) {
          iVar10 = 0;
          DAT_00df9eb4 = DAT_00dfa138;
          pfVar13 = pfVar14 + iVar12 * 3 + -3;
          pfVar15 = DAT_00dfa138;
          if (0 < iVar12) {
            pfVar9 = pfVar14 + 1;
            iVar11 = 0;
            DAT_00dfa138 = pfVar14;
            param_3 = iVar12;
            do {
              iVar12 = iVar11;
              if (((float)param_1[1] <= pfVar13[1]) || ((float)param_1[1] <= *pfVar9)) {
                if (((pfVar13[1] != (float)param_1[1]) && (*pfVar9 != (float)param_1[1])) &&
                   ((pfVar13[1] < (float)param_1[1] || (*pfVar9 < (float)param_1[1])))) {
                  iVar10 = iVar10 + 1;
                  fVar2 = ((float)param_1[1] - pfVar13[1]) / (*pfVar9 - pfVar13[1]);
                  *(int *)((int)pfVar15 + iVar11 + 4) = param_1[1];
                  iVar12 = iVar11 + 0xc;
                  *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                       (pfVar9[1] - pfVar13[2]) * fVar2 + pfVar13[2];
                  *(float *)((int)DAT_00df9eb4 + iVar11) =
                       (pfVar9[-1] - *pfVar13) * fVar2 + *pfVar13;
                  DAT_00dfaa04 = DAT_00dfaa04 | 1;
                  pfVar15 = DAT_00df9eb4;
                }
                if ((float)param_1[1] <= *pfVar9) {
                  pfVar15 = (float *)((int)pfVar15 + iVar12);
                  iVar10 = iVar10 + 1;
                  iVar12 = iVar12 + 0xc;
                  *pfVar15 = pfVar9[-1];
                  pfVar15[1] = *pfVar9;
                  pfVar15[2] = pfVar9[1];
                  pfVar15 = DAT_00df9eb4;
                }
              }
              pfVar13 = pfVar9 + -1;
              pfVar9 = pfVar9 + 3;
              param_3 = param_3 + -1;
              iVar11 = iVar12;
              pfVar14 = DAT_00dfa138;
            } while (param_3 != 0);
          }
          DAT_00dfa138 = pfVar14;
          if (iVar10 < 3) {
            DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
            return iVar10;
          }
          iVar12 = iVar10;
          pfVar13 = pfVar15;
          if (*param_1 != 0) {
            iVar12 = 0;
            pfVar14 = pfVar15 + iVar10 * 3 + -3;
            pfVar13 = DAT_00dfa138;
            DAT_00df9eb4 = DAT_00dfa138;
            if (0 < iVar10) {
              pfVar9 = pfVar15 + 1;
              iVar11 = 0;
              DAT_00dfa138 = pfVar15;
              param_3 = iVar10;
              do {
                iVar10 = iVar11;
                if ((pfVar14[1] <= (float)param_1[2]) || (*pfVar9 <= (float)param_1[2])) {
                  if (((pfVar14[1] != (float)param_1[2]) && (*pfVar9 != (float)param_1[2])) &&
                     (((float)param_1[2] < pfVar14[1] || ((float)param_1[2] < *pfVar9)))) {
                    iVar12 = iVar12 + 1;
                    fVar2 = ((float)param_1[2] - pfVar14[1]) / (*pfVar9 - pfVar14[1]);
                    *(int *)((int)pfVar13 + iVar11 + 4) = param_1[2];
                    iVar10 = iVar11 + 0xc;
                    *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                         (pfVar9[1] - pfVar14[2]) * fVar2 + pfVar14[2];
                    *(float *)((int)DAT_00df9eb4 + iVar11) =
                         (pfVar9[-1] - *pfVar14) * fVar2 + *pfVar14;
                    DAT_00dfaa04 = DAT_00dfaa04 | 2;
                    pfVar13 = DAT_00df9eb4;
                  }
                  if (*pfVar9 <= (float)param_1[2]) {
                    pfVar13 = (float *)((int)pfVar13 + iVar10);
                    iVar12 = iVar12 + 1;
                    iVar10 = iVar10 + 0xc;
                    *pfVar13 = pfVar9[-1];
                    pfVar13[1] = *pfVar9;
                    pfVar13[2] = pfVar9[1];
                    pfVar13 = DAT_00df9eb4;
                  }
                }
                pfVar14 = pfVar9 + -1;
                pfVar9 = pfVar9 + 3;
                param_3 = param_3 + -1;
                iVar11 = iVar10;
                pfVar15 = DAT_00dfa138;
              } while (param_3 != 0);
            }
            DAT_00dfa138 = pfVar15;
            if (iVar12 < 3) {
              return iVar12;
            }
          }
          if (pfVar13 != param_2) {
            for (uVar8 = iVar12 * 3 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
              *param_2 = *pfVar13;
              pfVar13 = pfVar13 + 1;
              param_2 = param_2 + 1;
            }
            for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
              *(undefined *)param_2 = *(undefined *)pfVar13;
              pfVar13 = (float *)((int)pfVar13 + 1);
              param_2 = (float *)((int)param_2 + 1);
            }
          }
        }
      }
    }
  }
  return iVar12;
}



int FUN_004966f0(int *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;

  iVar6 = 0;
  pfVar9 = (float *)&DAT_00dfa140;
  iVar8 = 0;
  DAT_00dfaa04 = 0;
  DAT_00dfa138 = param_2;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  pfVar10 = param_2 + param_3 * 3 + -3;
  pfVar11 = param_2;
  if (0 < param_3) {
    do {
      fVar2 = (float)param_1[3];
      fVar1 = (float)param_1[3];
      if ((fVar2 <= *pfVar10) || (fVar1 <= *pfVar11)) {
        iVar7 = iVar6;
        if (((*pfVar10 != fVar2) && (fVar1 != *pfVar11)) &&
           ((*pfVar10 < fVar2 || (*pfVar11 < fVar1)))) {
          fVar3 = (*pfVar11 - *pfVar10) / (fVar2 - *pfVar10);
          iVar8 = iVar8 + 1;
          iVar7 = iVar6 + 0xc;
          *(float *)((int)pfVar9 + iVar6) = fVar2;
          *(float *)((int)DAT_00df9eb4 + iVar6 + 4) = (pfVar11[1] - pfVar10[1]) * fVar3 + pfVar10[1]
          ;
          *(float *)((int)DAT_00df9eb4 + iVar6 + 8) = (pfVar11[2] - pfVar10[2]) * fVar3 + pfVar10[2]
          ;
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          pfVar9 = DAT_00df9eb4;
        }
        iVar6 = iVar7;
        if (fVar1 <= *pfVar11) {
          pfVar9 = (float *)((int)pfVar9 + iVar7);
          iVar8 = iVar8 + 1;
          iVar6 = iVar7 + 0xc;
          *pfVar9 = *pfVar11;
          pfVar9[1] = pfVar11[1];
          pfVar9[2] = pfVar11[2];
          pfVar9 = DAT_00df9eb4;
        }
      }
      param_3 = param_3 + -1;
      pfVar10 = pfVar11;
      pfVar11 = pfVar11 + 3;
    } while (param_3 != 0);
  }
  if (2 < iVar8) {
    iVar6 = 0;
    pfVar10 = DAT_00dfa138;
    DAT_00df9eb4 = DAT_00dfa138;
    if (0 < iVar8) {
      iVar7 = 0;
      pfVar11 = pfVar9 + iVar8 * 3 + -3;
      pfVar5 = pfVar9;
      DAT_00dfa138 = pfVar9;
      param_3 = iVar8;
      do {
        fVar2 = (float)param_1[5];
        fVar1 = (float)param_1[5];
        if ((*pfVar11 <= fVar2) || (*pfVar5 <= fVar1)) {
          iVar8 = iVar7;
          if (((*pfVar11 != fVar2) && (fVar1 != *pfVar5)) &&
             ((fVar2 < *pfVar11 || (fVar1 < *pfVar5)))) {
            fVar3 = (*pfVar5 - *pfVar11) / (fVar2 - *pfVar11);
            iVar6 = iVar6 + 1;
            iVar8 = iVar7 + 0xc;
            *(float *)((int)pfVar10 + iVar7) = fVar2;
            *(float *)((int)DAT_00df9eb4 + iVar7 + 4) =
                 (pfVar5[1] - pfVar11[1]) * fVar3 + pfVar11[1];
            *(float *)((int)DAT_00df9eb4 + iVar7 + 8) =
                 (pfVar5[2] - pfVar11[2]) * fVar3 + pfVar11[2];
            DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
            pfVar10 = DAT_00df9eb4;
          }
          iVar7 = iVar8;
          if (*pfVar5 <= fVar1) {
            pfVar10 = (float *)((int)pfVar10 + iVar8);
            iVar6 = iVar6 + 1;
            iVar7 = iVar8 + 0xc;
            *pfVar10 = *pfVar5;
            pfVar10[1] = pfVar5[1];
            pfVar10[2] = pfVar5[2];
            pfVar10 = DAT_00df9eb4;
          }
        }
        param_3 = param_3 + -1;
        pfVar11 = pfVar5;
        pfVar5 = pfVar5 + 3;
        pfVar9 = DAT_00dfa138;
      } while (param_3 != 0);
    }
    DAT_00dfa138 = pfVar9;
    iVar8 = iVar6;
    if (2 < iVar8) {
      iVar6 = 0;
      pfVar11 = pfVar10 + iVar8 * 3 + -3;
      pfVar9 = DAT_00dfa138;
      DAT_00df9eb4 = DAT_00dfa138;
      if (0 < iVar8) {
        pfVar5 = pfVar10 + 2;
        iVar7 = 0;
        DAT_00dfa138 = pfVar10;
        param_3 = iVar8;
        do {
          fVar2 = (float)param_1[4];
          fVar1 = (float)param_1[4];
          if ((pfVar11[2] <= fVar2) || (*pfVar5 <= fVar1)) {
            iVar8 = iVar7;
            if (((pfVar11[2] != fVar2) && (fVar1 != *pfVar5)) &&
               ((fVar2 < pfVar11[2] || (fVar1 < *pfVar5)))) {
              fVar3 = (*pfVar5 - pfVar11[2]) / (fVar2 - pfVar11[2]);
              iVar6 = iVar6 + 1;
              iVar8 = iVar7 + 0xc;
              *(float *)((int)pfVar9 + iVar7) = (pfVar5[-2] - *pfVar11) * fVar3 + *pfVar11;
              *(float *)((int)DAT_00df9eb4 + iVar7 + 4) =
                   (pfVar5[-1] - pfVar11[1]) * fVar3 + pfVar11[1];
              *(float *)((int)DAT_00df9eb4 + iVar7 + 8) = fVar2;
              DAT_00dfaa04 = DAT_00dfaa04 | 4;
              pfVar9 = DAT_00df9eb4;
            }
            iVar7 = iVar8;
            if (*pfVar5 <= fVar1) {
              pfVar9 = (float *)((int)pfVar9 + iVar8);
              iVar6 = iVar6 + 1;
              iVar7 = iVar8 + 0xc;
              *pfVar9 = pfVar5[-2];
              pfVar9[1] = pfVar5[-1];
              pfVar9[2] = *pfVar5;
              pfVar9 = DAT_00df9eb4;
            }
          }
          pfVar11 = pfVar5 + -2;
          pfVar5 = pfVar5 + 3;
          param_3 = param_3 + -1;
          pfVar10 = DAT_00dfa138;
        } while (param_3 != 0);
      }
      DAT_00dfa138 = pfVar10;
      iVar8 = iVar6;
      if (2 < iVar8) {
        iVar6 = 0;
        pfVar10 = pfVar9 + iVar8 * 3 + -3;
        pfVar11 = DAT_00dfa138;
        DAT_00df9eb4 = DAT_00dfa138;
        if (0 < iVar8) {
          pfVar5 = pfVar9 + 2;
          iVar7 = 0;
          DAT_00dfa138 = pfVar9;
          param_3 = iVar8;
          do {
            fVar2 = (float)param_1[6];
            fVar1 = (float)param_1[6];
            if ((fVar2 <= pfVar10[2]) || (fVar1 <= *pfVar5)) {
              iVar8 = iVar7;
              if (((pfVar10[2] != fVar2) && (fVar1 != *pfVar5)) &&
                 ((pfVar10[2] < fVar2 || (*pfVar5 < fVar1)))) {
                fVar3 = (*pfVar5 - pfVar10[2]) / (fVar2 - pfVar10[2]);
                iVar6 = iVar6 + 1;
                iVar8 = iVar7 + 0xc;
                *(float *)((int)pfVar11 + iVar7) = (pfVar5[-2] - *pfVar10) * fVar3 + *pfVar10;
                *(float *)((int)DAT_00df9eb4 + iVar7 + 4) =
                     (pfVar5[-1] - pfVar10[1]) * fVar3 + pfVar10[1];
                *(float *)((int)DAT_00df9eb4 + iVar7 + 8) = fVar2;
                DAT_00dfaa04 = DAT_00dfaa04 | 8;
                pfVar11 = DAT_00df9eb4;
              }
              iVar7 = iVar8;
              if (fVar1 <= *pfVar5) {
                pfVar11 = (float *)((int)pfVar11 + iVar8);
                iVar6 = iVar6 + 1;
                iVar7 = iVar8 + 0xc;
                *pfVar11 = pfVar5[-2];
                pfVar11[1] = pfVar5[-1];
                pfVar11[2] = *pfVar5;
                pfVar11 = DAT_00df9eb4;
              }
            }
            pfVar10 = pfVar5 + -2;
            pfVar5 = pfVar5 + 3;
            param_3 = param_3 + -1;
            pfVar9 = DAT_00dfa138;
          } while (param_3 != 0);
        }
        DAT_00dfa138 = pfVar9;
        iVar8 = iVar6;
        if (2 < iVar8) {
          iVar6 = 0;
          pfVar10 = pfVar11 + iVar8 * 3 + -3;
          pfVar9 = DAT_00dfa138;
          DAT_00df9eb4 = DAT_00dfa138;
          if (0 < iVar8) {
            pfVar5 = pfVar11 + 1;
            iVar7 = 0;
            DAT_00dfa138 = pfVar11;
            param_3 = iVar8;
            do {
              iVar8 = iVar7;
              if (((float)param_1[1] <= pfVar10[1]) || ((float)param_1[1] <= *pfVar5)) {
                if (((pfVar10[1] != (float)param_1[1]) && (*pfVar5 != (float)param_1[1])) &&
                   ((pfVar10[1] < (float)param_1[1] || (*pfVar5 < (float)param_1[1])))) {
                  iVar6 = iVar6 + 1;
                  fVar1 = ((float)param_1[1] - pfVar10[1]) / (*pfVar5 - pfVar10[1]);
                  *(int *)((int)pfVar9 + iVar7 + 4) = param_1[1];
                  iVar8 = iVar7 + 0xc;
                  *(float *)((int)DAT_00df9eb4 + iVar7 + 8) =
                       (pfVar5[1] - pfVar10[2]) * fVar1 + pfVar10[2];
                  *(float *)((int)DAT_00df9eb4 + iVar7) = (pfVar5[-1] - *pfVar10) * fVar1 + *pfVar10
                  ;
                  DAT_00dfaa04 = DAT_00dfaa04 | 1;
                  pfVar9 = DAT_00df9eb4;
                }
                if ((float)param_1[1] <= *pfVar5) {
                  pfVar9 = (float *)((int)pfVar9 + iVar8);
                  iVar6 = iVar6 + 1;
                  iVar8 = iVar8 + 0xc;
                  *pfVar9 = pfVar5[-1];
                  pfVar9[1] = *pfVar5;
                  pfVar9[2] = pfVar5[1];
                  pfVar9 = DAT_00df9eb4;
                }
              }
              pfVar10 = pfVar5 + -1;
              pfVar5 = pfVar5 + 3;
              param_3 = param_3 + -1;
              iVar7 = iVar8;
              pfVar11 = DAT_00dfa138;
            } while (param_3 != 0);
          }
          DAT_00dfa138 = pfVar11;
          if (iVar6 < 3) {
            DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
            return iVar6;
          }
          iVar8 = iVar6;
          pfVar10 = pfVar9;
          if (*param_1 != 0) {
            iVar8 = 0;
            pfVar11 = pfVar9 + iVar6 * 3 + -3;
            pfVar10 = DAT_00dfa138;
            DAT_00df9eb4 = DAT_00dfa138;
            if (0 < iVar6) {
              pfVar5 = pfVar9 + 1;
              iVar7 = 0;
              DAT_00dfa138 = pfVar9;
              param_3 = iVar6;
              do {
                iVar6 = iVar7;
                if ((pfVar11[1] <= (float)param_1[2]) || (*pfVar5 <= (float)param_1[2])) {
                  if (((pfVar11[1] != (float)param_1[2]) && (*pfVar5 != (float)param_1[2])) &&
                     (((float)param_1[2] < pfVar11[1] || ((float)param_1[2] < *pfVar5)))) {
                    iVar8 = iVar8 + 1;
                    fVar1 = ((float)param_1[2] - pfVar11[1]) / (*pfVar5 - pfVar11[1]);
                    *(int *)((int)pfVar10 + iVar7 + 4) = param_1[2];
                    iVar6 = iVar7 + 0xc;
                    *(float *)((int)DAT_00df9eb4 + iVar7 + 8) =
                         (pfVar5[1] - pfVar11[2]) * fVar1 + pfVar11[2];
                    *(float *)((int)DAT_00df9eb4 + iVar7) =
                         (pfVar5[-1] - *pfVar11) * fVar1 + *pfVar11;
                    DAT_00dfaa04 = DAT_00dfaa04 | 2;
                    pfVar10 = DAT_00df9eb4;
                  }
                  if (*pfVar5 <= (float)param_1[2]) {
                    pfVar10 = (float *)((int)pfVar10 + iVar6);
                    iVar8 = iVar8 + 1;
                    iVar6 = iVar6 + 0xc;
                    *pfVar10 = pfVar5[-1];
                    pfVar10[1] = *pfVar5;
                    pfVar10[2] = pfVar5[1];
                    pfVar10 = DAT_00df9eb4;
                  }
                }
                pfVar11 = pfVar5 + -1;
                pfVar5 = pfVar5 + 3;
                param_3 = param_3 + -1;
                iVar7 = iVar6;
                pfVar9 = DAT_00dfa138;
              } while (param_3 != 0);
            }
            DAT_00dfa138 = pfVar9;
            if (iVar8 < 3) {
              return iVar8;
            }
          }
          if (pfVar10 != param_2) {
            for (uVar4 = iVar8 * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
              *param_2 = *pfVar10;
              pfVar10 = pfVar10 + 1;
              param_2 = param_2 + 1;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined *)param_2 = *(undefined *)pfVar10;
              pfVar10 = (float *)((int)pfVar10 + 1);
              param_2 = (float *)((int)param_2 + 1);
            }
          }
        }
      }
    }
  }
  return iVar8;
}



int FUN_00496e40(int *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  int local_14;
  int local_4;

  DAT_00dfaa04 = 0;
  local_14 = 0;
  pfVar17 = (float *)&DAT_00dfa140;
  DAT_00dfa138 = param_2;
  DAT_00dfa13c = param_3;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  DAT_00df9eb0 = (float *)&DAT_00dfa500;
  if (0 < (int)param_4) {
    iVar13 = 0;
    iVar10 = 0;
    local_4 = (int)param_4;
    pfVar19 = param_3 + (int)param_4 * 4 + -4;
    pfVar18 = param_2;
    pfVar8 = param_3;
    param_4 = param_2 + (int)param_4 * 3 + -3;
    do {
      pfVar16 = pfVar18;
      fVar2 = (float)param_1[0xc] * param_4[1];
      fVar3 = (float)param_1[0xc] * pfVar16[1];
      if ((fVar2 <= *param_4) || (fVar3 <= *pfVar16)) {
        iVar11 = iVar10;
        iVar14 = iVar13;
        if (((*param_4 != fVar2) && (fVar3 != *pfVar16)) &&
           ((*param_4 < fVar2 || (*pfVar16 < fVar3)))) {
          fVar2 = pfVar16[1] - param_4[1];
          fVar4 = *pfVar16 - *param_4;
          fVar1 = (float)param_1[0xc] * fVar2 - fVar4;
          fVar5 = pfVar16[1] * *param_4 - param_4[1] * *pfVar16;
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = fVar2;
          if (fVar2 < 0.0) {
            fVar1 = -fVar2;
          }
          fVar6 = fVar4;
          if (fVar4 < 0.0) {
            fVar6 = -fVar4;
          }
          if (fVar1 <= fVar6) {
            fVar2 = ((float)param_1[0xc] * fVar5 - *param_4) / fVar4;
          }
          else {
            fVar2 = (fVar5 - param_4[1]) / fVar2;
          }
          iVar14 = iVar13 + 0x10;
          *(float *)((int)pfVar17 + iVar10) = (float)param_1[0xc] * fVar5;
          iVar11 = iVar10 + 0xc;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 4) = fVar5;
          local_14 = local_14 + 1;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 8) =
               (pfVar16[2] - param_4[2]) * fVar2 + param_4[2];
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*pfVar8 - *pfVar19) * fVar2 + *pfVar19;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) = (pfVar8[1] - pfVar19[1]) * fVar2 + pfVar19[1]
          ;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) = (pfVar8[2] - pfVar19[2]) * fVar2 + pfVar19[2]
          ;
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          pfVar17 = DAT_00df9eb4;
        }
        iVar10 = iVar11;
        iVar13 = iVar14;
        if (fVar3 <= *pfVar16) {
          pfVar17 = (float *)((int)pfVar17 + iVar11);
          iVar10 = iVar11 + 0xc;
          *pfVar17 = *pfVar16;
          pfVar17[1] = pfVar16[1];
          pfVar17[2] = pfVar16[2];
          pfVar17 = (float *)((int)DAT_00df9eb0 + iVar14);
          *pfVar17 = *pfVar8;
          pfVar17[1] = pfVar8[1];
          pfVar17[2] = pfVar8[2];
          local_14 = local_14 + 1;
          pfVar17[3] = pfVar8[3];
          iVar13 = iVar14 + 0x10;
          pfVar17 = DAT_00df9eb4;
        }
      }
      local_4 = local_4 + -1;
      pfVar19 = pfVar8;
      pfVar18 = pfVar16 + 3;
      pfVar8 = pfVar8 + 4;
      param_4 = pfVar16;
    } while (local_4 != 0);
  }
  local_4 = local_14;
  pfVar19 = DAT_00dfa13c;
  if (local_14 < 3) {
    return local_14;
  }
  DAT_00dfa13c = DAT_00df9eb0;
  iVar10 = local_14 * 3;
  local_14 = 0;
  pfVar18 = DAT_00dfa138;
  DAT_00df9eb4 = DAT_00dfa138;
  if (0 < local_4) {
    iVar11 = 0;
    iVar13 = 0;
    pfVar8 = DAT_00df9eb0 + local_4 * 4 + -4;
    pfVar16 = pfVar17;
    pfVar12 = DAT_00df9eb0;
    DAT_00df9eb0 = pfVar19;
    DAT_00dfa138 = pfVar17;
    param_4 = pfVar17 + iVar10 + -3;
    do {
      pfVar15 = pfVar16;
      fVar2 = (float)param_1[10] * param_4[1];
      fVar3 = (float)param_1[10] * pfVar15[1];
      if ((*param_4 <= fVar2) || (*pfVar15 <= fVar3)) {
        iVar10 = iVar13;
        iVar14 = iVar11;
        if (((*param_4 != fVar2) && (fVar3 != *pfVar15)) &&
           ((fVar2 < *param_4 || (fVar3 < *pfVar15)))) {
          fVar2 = pfVar15[1] - param_4[1];
          fVar4 = *pfVar15 - *param_4;
          fVar1 = (float)param_1[10] * fVar2 - fVar4;
          fVar5 = pfVar15[1] * *param_4 - param_4[1] * *pfVar15;
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = fVar2;
          if (fVar2 < 0.0) {
            fVar1 = -fVar2;
          }
          fVar6 = fVar4;
          if (fVar4 < 0.0) {
            fVar6 = -fVar4;
          }
          if (fVar1 <= fVar6) {
            fVar2 = ((float)param_1[10] * fVar5 - *param_4) / fVar4;
          }
          else {
            fVar2 = (fVar5 - param_4[1]) / fVar2;
          }
          iVar14 = iVar11 + 0x10;
          *(float *)((int)pfVar18 + iVar13) = (float)param_1[10] * fVar5;
          iVar10 = iVar13 + 0xc;
          *(float *)((int)DAT_00df9eb4 + iVar13 + 4) = fVar5;
          local_14 = local_14 + 1;
          *(float *)((int)DAT_00df9eb4 + iVar13 + 8) =
               (pfVar15[2] - param_4[2]) * fVar2 + param_4[2];
          *(float *)((int)DAT_00df9eb0 + iVar11) = (*pfVar12 - *pfVar8) * fVar2 + *pfVar8;
          *(float *)((int)DAT_00df9eb0 + iVar11 + 4) = (pfVar12[1] - pfVar8[1]) * fVar2 + pfVar8[1];
          *(float *)((int)DAT_00df9eb0 + iVar11 + 8) = (pfVar12[2] - pfVar8[2]) * fVar2 + pfVar8[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
          pfVar18 = DAT_00df9eb4;
        }
        iVar13 = iVar10;
        iVar11 = iVar14;
        if (*pfVar15 <= fVar3) {
          pfVar18 = (float *)((int)pfVar18 + iVar10);
          iVar13 = iVar10 + 0xc;
          *pfVar18 = *pfVar15;
          pfVar18[1] = pfVar15[1];
          pfVar18[2] = pfVar15[2];
          pfVar17 = (float *)((int)DAT_00df9eb0 + iVar14);
          *pfVar17 = *pfVar12;
          pfVar17[1] = pfVar12[1];
          pfVar17[2] = pfVar12[2];
          local_14 = local_14 + 1;
          pfVar17[3] = pfVar12[3];
          iVar11 = iVar14 + 0x10;
          pfVar18 = DAT_00df9eb4;
        }
      }
      local_4 = local_4 + -1;
      pfVar8 = pfVar12;
      pfVar16 = pfVar15 + 3;
      pfVar12 = pfVar12 + 4;
      pfVar19 = DAT_00df9eb0;
      pfVar17 = DAT_00dfa138;
      param_4 = pfVar15;
    } while (local_4 != 0);
  }
  DAT_00dfa138 = pfVar17;
  DAT_00df9eb0 = pfVar19;
  local_4 = local_14;
  pfVar17 = DAT_00df9eb0;
  if (local_14 < 3) {
    return local_14;
  }
  DAT_00df9eb0 = DAT_00dfa13c;
  iVar10 = 0;
  DAT_00df9eb4 = DAT_00dfa138;
  DAT_00dfa13c = pfVar17;
  param_4 = pfVar18 + local_14 * 3 + -3;
  local_14 = 0;
  pfVar19 = DAT_00dfa138;
  if (0 < local_4) {
    iVar13 = 0;
    pfVar16 = pfVar18 + 2;
    pfVar8 = pfVar17 + local_4 * 4 + -4;
    DAT_00dfa138 = pfVar18;
    do {
      fVar2 = (float)param_1[0xb] * param_4[1];
      fVar3 = pfVar16[-1] * (float)param_1[0xb];
      if ((param_4[2] <= fVar2) || (*pfVar16 <= fVar3)) {
        iVar11 = iVar10;
        iVar14 = iVar13;
        if (((param_4[2] != fVar2) && (fVar3 != *pfVar16)) &&
           ((fVar2 < param_4[2] || (fVar3 < *pfVar16)))) {
          fVar2 = pfVar16[-1] - param_4[1];
          fVar4 = *pfVar16 - param_4[2];
          fVar1 = (float)param_1[0xb] * fVar2 - fVar4;
          fVar5 = param_4[2] * pfVar16[-1] - param_4[1] * *pfVar16;
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = (float)param_1[0xb];
          fVar6 = fVar2;
          if (fVar2 < 0.0) {
            fVar6 = -fVar2;
          }
          fVar7 = fVar4;
          if (fVar4 < 0.0) {
            fVar7 = -fVar4;
          }
          if (fVar6 <= fVar7) {
            fVar2 = (fVar1 * fVar5 - param_4[2]) / fVar4;
          }
          else {
            fVar2 = (fVar5 - param_4[1]) / fVar2;
          }
          iVar11 = iVar10 + 0xc;
          iVar14 = iVar13 + 0x10;
          local_14 = local_14 + 1;
          *(float *)((int)pfVar19 + iVar10) = (pfVar16[-2] - *param_4) * fVar2 + *param_4;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 4) = fVar5;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 8) = fVar1 * fVar5;
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*pfVar17 - *pfVar8) * fVar2 + *pfVar8;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) = (pfVar17[1] - pfVar8[1]) * fVar2 + pfVar8[1];
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) = (pfVar17[2] - pfVar8[2]) * fVar2 + pfVar8[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 4;
          pfVar19 = DAT_00df9eb4;
        }
        iVar10 = iVar11;
        iVar13 = iVar14;
        if (*pfVar16 <= fVar3) {
          pfVar19 = (float *)((int)pfVar19 + iVar11);
          iVar10 = iVar11 + 0xc;
          *pfVar19 = pfVar16[-2];
          pfVar19[1] = pfVar16[-1];
          pfVar19[2] = *pfVar16;
          pfVar19 = (float *)((int)DAT_00df9eb0 + iVar14);
          *pfVar19 = *pfVar17;
          pfVar19[1] = pfVar17[1];
          pfVar19[2] = pfVar17[2];
          local_14 = local_14 + 1;
          pfVar19[3] = pfVar17[3];
          iVar13 = iVar14 + 0x10;
          pfVar19 = DAT_00df9eb4;
        }
      }
      param_4 = pfVar16 + -2;
      pfVar16 = pfVar16 + 3;
      local_4 = local_4 + -1;
      pfVar8 = pfVar17;
      pfVar17 = pfVar17 + 4;
      pfVar18 = DAT_00dfa138;
    } while (local_4 != 0);
  }
  DAT_00dfa138 = pfVar18;
  local_4 = local_14;
  pfVar17 = DAT_00df9eb0;
  if (local_14 < 3) {
    return local_14;
  }
  DAT_00df9eb0 = DAT_00dfa13c;
  iVar10 = 0;
  DAT_00df9eb4 = DAT_00dfa138;
  DAT_00dfa13c = pfVar17;
  param_4 = pfVar19 + local_14 * 3 + -3;
  local_14 = 0;
  pfVar18 = DAT_00dfa138;
  if (0 < local_4) {
    iVar13 = 0;
    pfVar16 = pfVar19 + 2;
    pfVar8 = pfVar17 + local_4 * 4 + -4;
    DAT_00dfa138 = pfVar19;
    do {
      fVar2 = (float)param_1[8] * param_4[1];
      fVar3 = pfVar16[-1] * (float)param_1[8];
      if ((fVar2 <= param_4[2]) || (fVar3 <= *pfVar16)) {
        iVar11 = iVar10;
        iVar14 = iVar13;
        if (((param_4[2] != fVar2) && (fVar3 != *pfVar16)) &&
           ((param_4[2] < fVar2 || (*pfVar16 < fVar3)))) {
          fVar2 = pfVar16[-1] - param_4[1];
          fVar4 = *pfVar16 - param_4[2];
          fVar1 = (float)param_1[8] * fVar2 - fVar4;
          fVar5 = param_4[2] * pfVar16[-1] - param_4[1] * *pfVar16;
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = (float)param_1[8];
          fVar6 = fVar2;
          if (fVar2 < 0.0) {
            fVar6 = -fVar2;
          }
          fVar7 = fVar4;
          if (fVar4 < 0.0) {
            fVar7 = -fVar4;
          }
          if (fVar6 <= fVar7) {
            fVar2 = (fVar1 * fVar5 - param_4[2]) / fVar4;
          }
          else {
            fVar2 = (fVar5 - param_4[1]) / fVar2;
          }
          iVar11 = iVar10 + 0xc;
          iVar14 = iVar13 + 0x10;
          local_14 = local_14 + 1;
          *(float *)((int)pfVar18 + iVar10) = (pfVar16[-2] - *param_4) * fVar2 + *param_4;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 4) = fVar5;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 8) = fVar1 * fVar5;
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*pfVar17 - *pfVar8) * fVar2 + *pfVar8;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) = (pfVar17[1] - pfVar8[1]) * fVar2 + pfVar8[1];
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) = (pfVar17[2] - pfVar8[2]) * fVar2 + pfVar8[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 8;
          pfVar18 = DAT_00df9eb4;
        }
        iVar10 = iVar11;
        iVar13 = iVar14;
        if (fVar3 <= *pfVar16) {
          pfVar18 = (float *)((int)pfVar18 + iVar11);
          iVar10 = iVar11 + 0xc;
          *pfVar18 = pfVar16[-2];
          pfVar18[1] = pfVar16[-1];
          pfVar18[2] = *pfVar16;
          pfVar19 = (float *)((int)DAT_00df9eb0 + iVar14);
          *pfVar19 = *pfVar17;
          pfVar19[1] = pfVar17[1];
          pfVar19[2] = pfVar17[2];
          local_14 = local_14 + 1;
          pfVar19[3] = pfVar17[3];
          iVar13 = iVar14 + 0x10;
          pfVar18 = DAT_00df9eb4;
        }
      }
      param_4 = pfVar16 + -2;
      pfVar16 = pfVar16 + 3;
      local_4 = local_4 + -1;
      pfVar8 = pfVar17;
      pfVar17 = pfVar17 + 4;
      pfVar19 = DAT_00dfa138;
    } while (local_4 != 0);
  }
  DAT_00dfa138 = pfVar19;
  iVar10 = local_14;
  param_4 = DAT_00df9eb0;
  if (2 < local_14) {
    DAT_00df9eb4 = DAT_00dfa138;
    pfVar17 = pfVar18 + local_14 * 3 + -3;
    DAT_00df9eb0 = DAT_00dfa13c;
    DAT_00dfa13c = param_4;
    local_14 = 0;
    pfVar19 = DAT_00dfa138;
    DAT_00dfa138 = pfVar18;
    if (iVar10 < 1) {
      local_4 = 0;
    }
    else {
      pfVar18 = pfVar18 + 1;
      pfVar8 = param_4 + iVar10 * 4 + -4;
      iVar13 = 0;
      iVar11 = 0;
      do {
        local_4 = iVar10;
        iVar14 = iVar13;
        iVar20 = iVar11;
        if (((float)param_1[1] <= pfVar17[1]) || ((float)param_1[1] <= *pfVar18)) {
          if (((pfVar17[1] != (float)param_1[1]) && (*pfVar18 != (float)param_1[1])) &&
             ((pfVar17[1] < (float)param_1[1] || (*pfVar18 < (float)param_1[1])))) {
            iVar20 = iVar11 + 0xc;
            iVar14 = iVar13 + 0x10;
            fVar2 = ((float)param_1[1] - pfVar17[1]) / (*pfVar18 - pfVar17[1]);
            *(int *)((int)pfVar19 + iVar11 + 4) = param_1[1];
            local_14 = local_14 + 1;
            *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                 (pfVar18[1] - pfVar17[2]) * fVar2 + pfVar17[2];
            *(float *)((int)DAT_00df9eb4 + iVar11) = (pfVar18[-1] - *pfVar17) * fVar2 + *pfVar17;
            *(float *)((int)DAT_00df9eb0 + iVar13) = (*param_4 - *pfVar8) * fVar2 + *pfVar8;
            *(float *)((int)DAT_00df9eb0 + iVar13 + 4) =
                 (param_4[1] - pfVar8[1]) * fVar2 + pfVar8[1];
            *(float *)((int)DAT_00df9eb0 + iVar13 + 8) =
                 (param_4[2] - pfVar8[2]) * fVar2 + pfVar8[2];
            DAT_00dfaa04 = DAT_00dfaa04 | 1;
            pfVar19 = DAT_00df9eb4;
          }
          if ((float)param_1[1] <= *pfVar18) {
            pfVar19 = (float *)((int)pfVar19 + iVar20);
            iVar20 = iVar20 + 0xc;
            *pfVar19 = pfVar18[-1];
            pfVar19[1] = *pfVar18;
            pfVar19[2] = pfVar18[1];
            pfVar17 = (float *)((int)DAT_00df9eb0 + iVar14);
            *pfVar17 = *param_4;
            pfVar17[1] = param_4[1];
            pfVar17[2] = param_4[2];
            pfVar17[3] = param_4[3];
            local_14 = local_14 + 1;
            iVar14 = iVar14 + 0x10;
            pfVar19 = DAT_00df9eb4;
          }
        }
        pfVar17 = pfVar18 + -1;
        pfVar18 = pfVar18 + 3;
        iVar10 = local_4 + -1;
        pfVar8 = param_4;
        local_4 = local_14;
        iVar13 = iVar14;
        iVar11 = iVar20;
        param_4 = param_4 + 4;
      } while (iVar10 != 0);
    }
    if (local_4 < 3) {
      DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
      return local_4;
    }
    iVar10 = local_4;
    pfVar17 = pfVar19;
    if (*param_1 != 0) {
      pfVar18 = pfVar19 + local_4 * 3 + -3;
      local_14 = 0;
      iVar10 = 0;
      pfVar17 = DAT_00dfa138;
      pfVar8 = DAT_00dfa13c;
      DAT_00df9eb4 = DAT_00dfa138;
      pfVar16 = DAT_00df9eb0;
      if (0 < local_4) {
        pfVar15 = pfVar19 + 1;
        pfVar12 = DAT_00df9eb0 + local_4 * 4 + -4;
        iVar13 = 0;
        iVar11 = 0;
        pfVar8 = DAT_00dfa13c;
        DAT_00dfa138 = pfVar19;
        DAT_00dfa13c = DAT_00df9eb0;
        param_4 = DAT_00df9eb0;
        do {
          DAT_00df9eb0 = pfVar8;
          iVar14 = iVar13;
          iVar20 = iVar11;
          if ((pfVar18[1] <= (float)param_1[2]) || (*pfVar15 <= (float)param_1[2])) {
            if (((pfVar18[1] != (float)param_1[2]) && (*pfVar15 != (float)param_1[2])) &&
               (((float)param_1[2] < pfVar18[1] || ((float)param_1[2] < *pfVar15)))) {
              iVar20 = iVar11 + 0xc;
              iVar14 = iVar13 + 0x10;
              fVar2 = ((float)param_1[2] - pfVar18[1]) / (*pfVar15 - pfVar18[1]);
              *(int *)((int)pfVar17 + iVar11 + 4) = param_1[2];
              local_14 = local_14 + 1;
              *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                   (pfVar15[1] - pfVar18[2]) * fVar2 + pfVar18[2];
              *(float *)((int)DAT_00df9eb4 + iVar11) = (pfVar15[-1] - *pfVar18) * fVar2 + *pfVar18;
              *(float *)((int)DAT_00df9eb0 + iVar13) = (*param_4 - *pfVar12) * fVar2 + *pfVar12;
              *(float *)((int)DAT_00df9eb0 + iVar13 + 4) =
                   (param_4[1] - pfVar12[1]) * fVar2 + pfVar12[1];
              *(float *)((int)DAT_00df9eb0 + iVar13 + 8) =
                   (param_4[2] - pfVar12[2]) * fVar2 + pfVar12[2];
              DAT_00dfaa04 = DAT_00dfaa04 | 2;
              pfVar17 = DAT_00df9eb4;
            }
            if (*pfVar15 <= (float)param_1[2]) {
              pfVar17 = (float *)((int)pfVar17 + iVar20);
              iVar20 = iVar20 + 0xc;
              *pfVar17 = pfVar15[-1];
              pfVar17[1] = *pfVar15;
              pfVar17[2] = pfVar15[1];
              pfVar17 = (float *)((int)DAT_00df9eb0 + iVar14);
              *pfVar17 = *param_4;
              pfVar17[1] = param_4[1];
              pfVar17[2] = param_4[2];
              pfVar17[3] = param_4[3];
              local_14 = local_14 + 1;
              iVar14 = iVar14 + 0x10;
              pfVar17 = DAT_00df9eb4;
            }
          }
          pfVar18 = pfVar15 + -1;
          pfVar15 = pfVar15 + 3;
          local_4 = local_4 + -1;
          pfVar12 = param_4;
          iVar10 = local_14;
          iVar13 = iVar14;
          iVar11 = iVar20;
          pfVar8 = DAT_00df9eb0;
          pfVar19 = DAT_00dfa138;
          pfVar16 = DAT_00dfa13c;
          param_4 = param_4 + 4;
        } while (local_4 != 0);
      }
      DAT_00dfa13c = pfVar16;
      DAT_00dfa138 = pfVar19;
      DAT_00df9eb0 = pfVar8;
      if (iVar10 < 3) {
        return iVar10;
      }
    }
    if (pfVar17 != param_2) {
      for (uVar9 = iVar10 * 3 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
        *param_2 = *pfVar17;
        pfVar17 = pfVar17 + 1;
        param_2 = param_2 + 1;
      }
      for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
        *(undefined *)param_2 = *(undefined *)pfVar17;
        pfVar17 = (float *)((int)pfVar17 + 1);
        param_2 = (float *)((int)param_2 + 1);
      }
      pfVar17 = DAT_00df9eb0;
      for (uVar9 = (uint)(iVar10 << 4) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *param_3 = *pfVar17;
        pfVar17 = pfVar17 + 1;
        param_3 = param_3 + 1;
      }
      for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
        *(undefined *)param_3 = *(undefined *)pfVar17;
        pfVar17 = (float *)((int)pfVar17 + 1);
        param_3 = (float *)((int)param_3 + 1);
      }
    }
    return iVar10;
  }
  return local_14;
}



int FUN_00497da0(int *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  int local_c;
  float *local_8;

  DAT_00dfaa04 = 0;
  local_c = 0;
  pfVar10 = (float *)&DAT_00dfa140;
  DAT_00dfa138 = param_2;
  DAT_00dfa13c = param_3;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  DAT_00df9eb0 = (float *)&DAT_00dfa500;
  local_8 = param_3;
  if (param_4 < 1) {
    param_4 = 0;
  }
  else {
    iVar9 = 0;
    iVar13 = 0;
    pfVar6 = param_2 + param_4 * 3 + -3;
    pfVar11 = param_3 + param_4 * 4 + -4;
    pfVar12 = param_2;
    iVar4 = param_4;
    do {
      param_4 = iVar4;
      fVar2 = (float)param_1[3];
      fVar1 = (float)param_1[3];
      if ((fVar2 <= *pfVar6) || (fVar1 <= *pfVar12)) {
        if (((*pfVar6 != fVar2) && (fVar1 != *pfVar12)) && ((*pfVar6 < fVar2 || (*pfVar12 < fVar1)))
           ) {
          fVar3 = (*pfVar12 - *pfVar6) / (fVar2 - *pfVar6);
          local_c = local_c + 1;
          *(float *)((int)pfVar10 + iVar13) = fVar2;
          *(float *)((int)DAT_00df9eb4 + iVar13 + 4) = (pfVar12[1] - pfVar6[1]) * fVar3 + pfVar6[1];
          *(float *)((int)DAT_00df9eb4 + iVar13 + 8) = (pfVar12[2] - pfVar6[2]) * fVar3 + pfVar6[2];
          *(float *)((int)DAT_00df9eb0 + iVar9) = (*local_8 - *pfVar11) * fVar3 + *pfVar11;
          *(float *)((int)DAT_00df9eb0 + iVar9 + 4) = (local_8[1] - pfVar11[1]) * fVar3 + pfVar11[1]
          ;
          *(float *)((int)DAT_00df9eb0 + iVar9 + 8) = (local_8[2] - pfVar11[2]) * fVar3 + pfVar11[2]
          ;
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          iVar9 = iVar9 + 0x10;
          pfVar10 = DAT_00df9eb4;
          iVar13 = iVar13 + 0xc;
        }
        if (fVar1 <= *pfVar12) {
          pfVar10 = (float *)((int)pfVar10 + iVar13);
          iVar13 = iVar13 + 0xc;
          *pfVar10 = *pfVar12;
          pfVar10[1] = pfVar12[1];
          pfVar10[2] = pfVar12[2];
          pfVar10 = (float *)((int)DAT_00df9eb0 + iVar9);
          *pfVar10 = *local_8;
          pfVar10[1] = local_8[1];
          pfVar10[2] = local_8[2];
          pfVar10[3] = local_8[3];
          local_c = local_c + 1;
          iVar9 = iVar9 + 0x10;
          pfVar10 = DAT_00df9eb4;
        }
      }
      iVar4 = param_4 + -1;
      pfVar6 = pfVar12;
      pfVar11 = local_8;
      param_4 = local_c;
      pfVar12 = pfVar12 + 3;
      local_8 = local_8 + 4;
    } while (iVar4 != 0);
  }
  pfVar6 = DAT_00dfa13c;
  if (param_4 < 3) {
    return param_4;
  }
  DAT_00dfa13c = DAT_00df9eb0;
  local_c = 0;
  local_8 = DAT_00df9eb0;
  pfVar11 = DAT_00dfa138;
  DAT_00df9eb4 = DAT_00dfa138;
  DAT_00dfa138 = pfVar10;
  if (param_4 < 1) {
    iVar9 = 0;
    DAT_00df9eb0 = pfVar6;
  }
  else {
    iVar13 = 0;
    iVar4 = 0;
    pfVar12 = pfVar10 + param_4 * 3 + -3;
    pfVar7 = DAT_00df9eb0 + param_4 * 4 + -4;
    DAT_00df9eb0 = pfVar6;
    do {
      fVar2 = (float)param_1[5];
      fVar1 = (float)param_1[5];
      if ((*pfVar12 <= fVar2) || (*pfVar10 <= fVar1)) {
        if (((*pfVar12 != fVar2) && (fVar1 != *pfVar10)) &&
           ((fVar2 < *pfVar12 || (fVar1 < *pfVar10)))) {
          fVar3 = (*pfVar10 - *pfVar12) / (fVar2 - *pfVar12);
          local_c = local_c + 1;
          *(float *)((int)pfVar11 + iVar4) = fVar2;
          *(float *)((int)DAT_00df9eb4 + iVar4 + 4) = (pfVar10[1] - pfVar12[1]) * fVar3 + pfVar12[1]
          ;
          *(float *)((int)DAT_00df9eb4 + iVar4 + 8) = (pfVar10[2] - pfVar12[2]) * fVar3 + pfVar12[2]
          ;
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*local_8 - *pfVar7) * fVar3 + *pfVar7;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) = (local_8[1] - pfVar7[1]) * fVar3 + pfVar7[1];
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) = (local_8[2] - pfVar7[2]) * fVar3 + pfVar7[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
          iVar13 = iVar13 + 0x10;
          pfVar11 = DAT_00df9eb4;
          iVar4 = iVar4 + 0xc;
        }
        if (*pfVar10 <= fVar1) {
          pfVar11 = (float *)((int)pfVar11 + iVar4);
          iVar4 = iVar4 + 0xc;
          *pfVar11 = *pfVar10;
          pfVar11[1] = pfVar10[1];
          pfVar11[2] = pfVar10[2];
          pfVar6 = (float *)((int)DAT_00df9eb0 + iVar13);
          *pfVar6 = *local_8;
          pfVar6[1] = local_8[1];
          pfVar6[2] = local_8[2];
          pfVar6[3] = local_8[3];
          local_c = local_c + 1;
          iVar13 = iVar13 + 0x10;
          pfVar11 = DAT_00df9eb4;
        }
      }
      param_4 = param_4 + -1;
      pfVar12 = pfVar10;
      pfVar7 = local_8;
      iVar9 = local_c;
      pfVar10 = pfVar10 + 3;
      local_8 = local_8 + 4;
    } while (param_4 != 0);
  }
  pfVar10 = DAT_00dfa13c;
  if (iVar9 < 3) {
    return iVar9;
  }
  pfVar6 = pfVar11 + iVar9 * 3 + -3;
  DAT_00dfa13c = DAT_00df9eb0;
  local_c = 0;
  local_8 = DAT_00df9eb0;
  pfVar12 = DAT_00dfa138;
  DAT_00df9eb4 = DAT_00dfa138;
  DAT_00dfa138 = pfVar11;
  if (iVar9 < 1) {
    param_4 = 0;
    DAT_00df9eb0 = pfVar10;
  }
  else {
    pfVar11 = pfVar11 + 2;
    iVar13 = 0;
    iVar4 = 0;
    pfVar7 = DAT_00df9eb0 + iVar9 * 4 + -4;
    DAT_00df9eb0 = pfVar10;
    do {
      param_4 = iVar9;
      fVar2 = (float)param_1[4];
      fVar1 = (float)param_1[4];
      if ((pfVar6[2] <= fVar2) || (*pfVar11 <= fVar1)) {
        if (((pfVar6[2] != fVar2) && (fVar1 != *pfVar11)) &&
           ((fVar2 < pfVar6[2] || (fVar1 < *pfVar11)))) {
          fVar3 = (*pfVar11 - pfVar6[2]) / (fVar2 - pfVar6[2]);
          local_c = local_c + 1;
          *(float *)((int)pfVar12 + iVar4) = (pfVar11[-2] - *pfVar6) * fVar3 + *pfVar6;
          *(float *)((int)DAT_00df9eb4 + iVar4 + 4) = (pfVar11[-1] - pfVar6[1]) * fVar3 + pfVar6[1];
          *(float *)((int)DAT_00df9eb4 + iVar4 + 8) = fVar2;
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*local_8 - *pfVar7) * fVar3 + *pfVar7;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) = (local_8[1] - pfVar7[1]) * fVar3 + pfVar7[1];
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) = (local_8[2] - pfVar7[2]) * fVar3 + pfVar7[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 4;
          iVar13 = iVar13 + 0x10;
          pfVar12 = DAT_00df9eb4;
          iVar4 = iVar4 + 0xc;
        }
        if (*pfVar11 <= fVar1) {
          pfVar12 = (float *)((int)pfVar12 + iVar4);
          iVar4 = iVar4 + 0xc;
          *pfVar12 = pfVar11[-2];
          pfVar12[1] = pfVar11[-1];
          pfVar12[2] = *pfVar11;
          pfVar10 = (float *)((int)DAT_00df9eb0 + iVar13);
          *pfVar10 = *local_8;
          pfVar10[1] = local_8[1];
          pfVar10[2] = local_8[2];
          pfVar10[3] = local_8[3];
          local_c = local_c + 1;
          iVar13 = iVar13 + 0x10;
          pfVar12 = DAT_00df9eb4;
        }
      }
      pfVar6 = pfVar11 + -2;
      pfVar11 = pfVar11 + 3;
      iVar9 = param_4 + -1;
      pfVar7 = local_8;
      param_4 = local_c;
      local_8 = local_8 + 4;
    } while (iVar9 != 0);
  }
  if (param_4 < 3) {
    return param_4;
  }
  pfVar10 = pfVar12 + param_4 * 3 + -3;
  local_c = 0;
  pfVar6 = DAT_00dfa138;
  DAT_00df9eb4 = DAT_00dfa138;
  DAT_00dfa138 = pfVar12;
  if (param_4 < 1) {
    iVar9 = 0;
    pfVar11 = DAT_00dfa13c;
    DAT_00dfa13c = DAT_00df9eb0;
  }
  else {
    pfVar12 = pfVar12 + 2;
    iVar4 = 0;
    iVar13 = 0;
    pfVar7 = DAT_00df9eb0 + param_4 * 4 + -4;
    pfVar11 = DAT_00dfa13c;
    DAT_00dfa13c = DAT_00df9eb0;
    local_8 = DAT_00df9eb0;
    do {
      DAT_00df9eb0 = pfVar11;
      fVar2 = (float)param_1[6];
      fVar1 = (float)param_1[6];
      if ((fVar2 <= pfVar10[2]) || (fVar1 <= *pfVar12)) {
        if (((pfVar10[2] != fVar2) && (fVar1 != *pfVar12)) &&
           ((pfVar10[2] < fVar2 || (*pfVar12 < fVar1)))) {
          fVar3 = (*pfVar12 - pfVar10[2]) / (fVar2 - pfVar10[2]);
          local_c = local_c + 1;
          *(float *)((int)pfVar6 + iVar13) = (pfVar12[-2] - *pfVar10) * fVar3 + *pfVar10;
          *(float *)((int)DAT_00df9eb4 + iVar13 + 4) =
               (pfVar12[-1] - pfVar10[1]) * fVar3 + pfVar10[1];
          *(float *)((int)DAT_00df9eb4 + iVar13 + 8) = fVar2;
          *(float *)((int)DAT_00df9eb0 + iVar4) = (*local_8 - *pfVar7) * fVar3 + *pfVar7;
          *(float *)((int)DAT_00df9eb0 + iVar4 + 4) = (local_8[1] - pfVar7[1]) * fVar3 + pfVar7[1];
          *(float *)((int)DAT_00df9eb0 + iVar4 + 8) = (local_8[2] - pfVar7[2]) * fVar3 + pfVar7[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 8;
          iVar13 = iVar13 + 0xc;
          pfVar6 = DAT_00df9eb4;
          iVar4 = iVar4 + 0x10;
        }
        if (fVar1 <= *pfVar12) {
          pfVar6 = (float *)((int)pfVar6 + iVar13);
          iVar13 = iVar13 + 0xc;
          *pfVar6 = pfVar12[-2];
          pfVar6[1] = pfVar12[-1];
          pfVar6[2] = *pfVar12;
          pfVar10 = (float *)((int)DAT_00df9eb0 + iVar4);
          *pfVar10 = *local_8;
          pfVar10[1] = local_8[1];
          pfVar10[2] = local_8[2];
          pfVar10[3] = local_8[3];
          local_c = local_c + 1;
          iVar4 = iVar4 + 0x10;
          pfVar6 = DAT_00df9eb4;
        }
      }
      pfVar10 = pfVar12 + -2;
      pfVar12 = pfVar12 + 3;
      param_4 = param_4 + -1;
      pfVar7 = local_8;
      iVar9 = local_c;
      pfVar11 = DAT_00df9eb0;
      local_8 = local_8 + 4;
    } while (param_4 != 0);
  }
  DAT_00df9eb0 = pfVar11;
  if (2 < iVar9) {
    pfVar10 = pfVar6 + iVar9 * 3 + -3;
    local_c = 0;
    pfVar11 = DAT_00dfa138;
    DAT_00df9eb4 = DAT_00dfa138;
    DAT_00dfa138 = pfVar6;
    if (iVar9 < 1) {
      param_4 = 0;
      pfVar12 = DAT_00dfa13c;
      DAT_00dfa13c = DAT_00df9eb0;
    }
    else {
      pfVar6 = pfVar6 + 1;
      iVar13 = 0;
      iVar4 = 0;
      pfVar7 = DAT_00df9eb0 + iVar9 * 4 + -4;
      pfVar12 = DAT_00dfa13c;
      DAT_00dfa13c = DAT_00df9eb0;
      local_8 = DAT_00df9eb0;
      do {
        param_4 = iVar9;
        DAT_00df9eb0 = pfVar12;
        if (((float)param_1[1] <= pfVar10[1]) || ((float)param_1[1] <= *pfVar6)) {
          if (((pfVar10[1] != (float)param_1[1]) && (*pfVar6 != (float)param_1[1])) &&
             ((pfVar10[1] < (float)param_1[1] || (*pfVar6 < (float)param_1[1])))) {
            fVar1 = ((float)param_1[1] - pfVar10[1]) / (*pfVar6 - pfVar10[1]);
            *(int *)((int)pfVar11 + iVar4 + 4) = param_1[1];
            local_c = local_c + 1;
            *(float *)((int)DAT_00df9eb4 + iVar4 + 8) =
                 (pfVar6[1] - pfVar10[2]) * fVar1 + pfVar10[2];
            *(float *)((int)DAT_00df9eb4 + iVar4) = (pfVar6[-1] - *pfVar10) * fVar1 + *pfVar10;
            *(float *)((int)DAT_00df9eb0 + iVar13) = (*local_8 - *pfVar7) * fVar1 + *pfVar7;
            *(float *)((int)DAT_00df9eb0 + iVar13 + 4) =
                 (local_8[1] - pfVar7[1]) * fVar1 + pfVar7[1];
            *(float *)((int)DAT_00df9eb0 + iVar13 + 8) =
                 (local_8[2] - pfVar7[2]) * fVar1 + pfVar7[2];
            DAT_00dfaa04 = DAT_00dfaa04 | 1;
            iVar13 = iVar13 + 0x10;
            pfVar11 = DAT_00df9eb4;
            iVar4 = iVar4 + 0xc;
          }
          if ((float)param_1[1] <= *pfVar6) {
            pfVar11 = (float *)((int)pfVar11 + iVar4);
            iVar4 = iVar4 + 0xc;
            *pfVar11 = pfVar6[-1];
            pfVar11[1] = *pfVar6;
            pfVar11[2] = pfVar6[1];
            pfVar10 = (float *)((int)DAT_00df9eb0 + iVar13);
            *pfVar10 = *local_8;
            pfVar10[1] = local_8[1];
            pfVar10[2] = local_8[2];
            local_c = local_c + 1;
            pfVar10[3] = local_8[3];
            iVar13 = iVar13 + 0x10;
            pfVar11 = DAT_00df9eb4;
          }
        }
        pfVar10 = pfVar6 + -1;
        pfVar6 = pfVar6 + 3;
        iVar9 = param_4 + -1;
        param_4 = local_c;
        pfVar7 = local_8;
        pfVar12 = DAT_00df9eb0;
        local_8 = local_8 + 4;
      } while (iVar9 != 0);
    }
    DAT_00df9eb0 = pfVar12;
    if (2 < param_4) {
      iVar9 = 0;
      local_c = param_4;
      pfVar10 = pfVar11;
      if (*param_1 != 0) {
        local_c = 0;
        pfVar6 = pfVar11 + param_4 * 3 + -3;
        pfVar10 = DAT_00dfa138;
        pfVar12 = DAT_00dfa13c;
        DAT_00df9eb4 = DAT_00dfa138;
        pfVar7 = DAT_00df9eb0;
        if (0 < param_4) {
          pfVar14 = pfVar11 + 1;
          iVar13 = 0;
          pfVar8 = DAT_00df9eb0 + param_4 * 4 + -4;
          pfVar12 = DAT_00dfa13c;
          DAT_00dfa138 = pfVar11;
          DAT_00dfa13c = DAT_00df9eb0;
          local_8 = DAT_00df9eb0;
          do {
            DAT_00df9eb0 = pfVar12;
            if ((pfVar6[1] <= (float)param_1[2]) || (*pfVar14 <= (float)param_1[2])) {
              if (((pfVar6[1] != (float)param_1[2]) && (*pfVar14 != (float)param_1[2])) &&
                 (((float)param_1[2] < pfVar6[1] || ((float)param_1[2] < *pfVar14)))) {
                fVar1 = ((float)param_1[2] - pfVar6[1]) / (*pfVar14 - pfVar6[1]);
                *(int *)((int)pfVar10 + iVar13 + 4) = param_1[2];
                local_c = local_c + 1;
                *(float *)((int)DAT_00df9eb4 + iVar13 + 8) =
                     (pfVar14[1] - pfVar6[2]) * fVar1 + pfVar6[2];
                *(float *)((int)DAT_00df9eb4 + iVar13) = (pfVar14[-1] - *pfVar6) * fVar1 + *pfVar6;
                *(float *)((int)DAT_00df9eb0 + iVar9) = (*local_8 - *pfVar8) * fVar1 + *pfVar8;
                *(float *)((int)DAT_00df9eb0 + iVar9 + 4) =
                     (local_8[1] - pfVar8[1]) * fVar1 + pfVar8[1];
                *(float *)((int)DAT_00df9eb0 + iVar9 + 8) =
                     (local_8[2] - pfVar8[2]) * fVar1 + pfVar8[2];
                DAT_00dfaa04 = DAT_00dfaa04 | 2;
                iVar13 = iVar13 + 0xc;
                iVar9 = iVar9 + 0x10;
                pfVar10 = DAT_00df9eb4;
              }
              if (*pfVar14 <= (float)param_1[2]) {
                pfVar10 = (float *)((int)pfVar10 + iVar13);
                iVar13 = iVar13 + 0xc;
                *pfVar10 = pfVar14[-1];
                pfVar10[1] = *pfVar14;
                pfVar10[2] = pfVar14[1];
                pfVar10 = (float *)((int)DAT_00df9eb0 + iVar9);
                *pfVar10 = *local_8;
                pfVar10[1] = local_8[1];
                pfVar10[2] = local_8[2];
                local_c = local_c + 1;
                pfVar10[3] = local_8[3];
                iVar9 = iVar9 + 0x10;
                pfVar10 = DAT_00df9eb4;
              }
            }
            pfVar6 = pfVar14 + -1;
            pfVar14 = pfVar14 + 3;
            param_4 = param_4 + -1;
            pfVar8 = local_8;
            pfVar12 = DAT_00df9eb0;
            pfVar11 = DAT_00dfa138;
            pfVar7 = DAT_00dfa13c;
            local_8 = local_8 + 4;
          } while (param_4 != 0);
        }
        DAT_00dfa13c = pfVar7;
        DAT_00dfa138 = pfVar11;
        DAT_00df9eb0 = pfVar12;
        if (local_c < 3) {
          return local_c;
        }
      }
      if (pfVar10 != param_2) {
        for (uVar5 = local_c * 3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_2 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          param_2 = param_2 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined *)param_2 = *(undefined *)pfVar10;
          pfVar10 = (float *)((int)pfVar10 + 1);
          param_2 = (float *)((int)param_2 + 1);
        }
        pfVar10 = DAT_00df9eb0;
        for (uVar5 = (uint)(local_c << 4) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_3 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          param_3 = param_3 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined *)param_3 = *(undefined *)pfVar10;
          pfVar10 = (float *)((int)pfVar10 + 1);
          param_3 = (float *)((int)param_3 + 1);
        }
      }
      return local_c;
    }
    DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
    return param_4;
  }
  return iVar9;
}

#endif
