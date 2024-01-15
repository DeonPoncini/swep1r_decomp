#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00472a50(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  float local_a0;
  undefined local_94 [64];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined local_40 [64];
  
  if (*(int *)(param_1 + 0x344) == 0) {
    return;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xec);
  uVar3 = **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18);
  if (iVar6 != 0) {
    FUN_00431a50(iVar6,2,3,0x10,2);
  }
  FUN_0044bb10(local_40,param_1 + 0x20);
  fVar1 = *(float *)(param_1 + 0x1f0) * (float)_DAT_004adb58;
  local_50 = *(float *)(param_1 + 0x1e70);
  fVar2 = _DAT_004ad9c0;
  if ((_DAT_004ad9c0 <= fVar1) && (fVar2 = fVar1, _DAT_004ad958 < fVar1)) {
    fVar2 = _DAT_004ad958;
  }
  local_48 = (fVar2 - _DAT_004ad9c0) * _DAT_004ad9e4;
  local_44 = (_DAT_004ad958 - fVar2) * _DAT_004ad9e4;
  if (0x4b < *(int *)(param_1 + 0x1998)) {
    return;
  }
  if (*(int *)(param_1 + 0x344) == 0) {
    return;
  }
  fVar4 = local_44 - local_48;
  fVar7 = (float10)FUN_00470510(param_1,0x2e,fVar4 * _DAT_004adb60,0,0x42960000,0x42960000,
                                0xc2200000,0x42200000);
  local_54 = (float)fVar7;
  fVar7 = (float10)FUN_00470510(param_1,0x2f,0,0x42340000,0x41a00000,0x42480000,0,0x41f00000);
  local_50 = (float)fVar7;
  fVar4 = fVar4 * _DAT_004ada20;
  local_4c = fVar4;
  fVar7 = (float10)FUN_00470510(param_1,0x20,fVar4,0x42340000,0x41a00000,0x42480000,0,0x41f00000);
  fVar1 = (float)fVar7;
  fVar5 = (local_48 - local_44) * _DAT_004ada20;
  local_4c = fVar5;
  fVar7 = (float10)FUN_00470510(param_1,0x12,fVar5,0x42340000,0x41a00000,0x42480000,0,0x41f00000);
  fVar2 = (float)fVar7;
  fVar7 = (float10)FUN_00470510(param_1,0x23,fVar4,0x42340000,0x42a00000,0x42a00000,0,0x41f00000);
  local_48 = (float)fVar7;
  fVar7 = (float10)FUN_00470510(param_1,0x15,fVar5,0x42340000,0x42a00000,0x42a00000,0,0x41f00000);
  fVar4 = *(float *)(param_1 + 0x1a0) + *(float *)(param_1 + 0x1a0);
  local_4c = (float)fVar7;
  if (fVar4 < (float)_DAT_004adb68) {
    fVar4 = _DAT_004ad9b4;
  }
  if ((float)_DAT_004adb70 < fVar4) {
    fVar4 = _DAT_004adb78;
  }
  local_a0 = (float)_DAT_00e22a40 * fVar4 + *(float *)(param_1 + 0x17a0);
  if (local_a0 < (float)_DAT_004adb80) {
    local_a0 = local_a0 - (float)_DAT_004ad9c8;
  }
  if ((float)_DAT_004adb88 < local_a0) {
    local_a0 = local_a0 - (float)_DAT_004adb90;
  }
  *(float *)(param_1 + 0x17a0) = local_a0;
  switch(uVar3) {
  case 0:
    FUN_00431020(local_94,0,fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,-local_48,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x8c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,local_48,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x58);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xbc);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,-local_4c,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x54);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xb8);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,local_4c,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x90);
    if (iVar6 == 0) {
      return;
    }
    FUN_00431640(iVar6,local_94);
    return;
  case 1:
    FUN_00431020(local_94,0,0,local_a0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,local_54,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xb8);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xbc);
    break;
  case 2:
    FUN_00431020(local_94,0,-fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    goto joined_r0x00473387;
  case 3:
    FUN_00431020(local_94,0,0,local_a0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xb8);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xbc);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,local_54,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xc0);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xc4);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 200);
    goto LAB_00473367;
  case 4:
    fVar1 = -fVar1;
    local_50 = fVar1;
    FUN_00431020(local_94,fVar1,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x8c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    fVar2 = -fVar2;
    local_50 = fVar2;
    FUN_00431020(local_94,fVar2,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x54);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,0,-local_54);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xb8);
LAB_00473367:
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xcc);
joined_r0x00473387:
    if (iVar6 == 0) {
      return;
    }
    goto LAB_00473dbf;
  case 5:
    FUN_00431020(local_94,0,0,local_a0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x8c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x90);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x54);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x58);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x58);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 100);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x90);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x9c);
    break;
  case 6:
    FUN_00431020(local_94,local_54,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 200);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xd0);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,0,-local_54);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xcc);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xd4);
    break;
  case 7:
    FUN_00431020(local_94,0,fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    break;
  case 8:
    FUN_00431020(local_94,0,0,local_a0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar2 * _DAT_004ada40,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x54);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar1 * _DAT_004ada40,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x8c);
    break;
  default:
    goto switchD_00472cfa_caseD_9;
  case 10:
    FUN_00431020(local_94,-fVar1,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,fVar1,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,-fVar2,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,fVar2,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,local_50,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 200);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xcc);
    break;
  case 0xc:
    FUN_00431020(local_94,0,local_50,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xd0);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xd8);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,local_54 * (float)_DAT_004ad9d8,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 200);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xd4);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-local_54 * (float)_DAT_004ad9d8,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xcc);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xdc);
    break;
  case 0xd:
    FUN_00431020(local_94,0,0,local_a0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x54);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x8c);
    break;
  case 0xe:
    FUN_00431020(local_94,0,-fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x90);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x94);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x98);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x9c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xa0);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xa4);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x58);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x5c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x60);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 100);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x68);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x6c);
    break;
  case 0xf:
    FUN_00431020(local_94,0,-fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x8c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x54);
    break;
  case 0x16:
    FUN_00431020(local_94,local_54,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xc0);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xc4);
  }
  if (iVar6 != 0) {
LAB_00473dbf:
    FUN_00431640(iVar6,local_94);
  }
switchD_00472cfa_caseD_9:
  return;
}

