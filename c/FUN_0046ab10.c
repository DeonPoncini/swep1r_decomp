#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ab10(int param_1)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  float *pfVar8;
  uint *puVar9;
  int iVar10;
  undefined4 local_14;
  
  local_14 = 0;
  *(float *)(param_1 + 700) = *(float *)(param_1 + 700) - (float)_DAT_00e22a40;
  bVar4 = false;
  bVar5 = false;
  bVar3 = false;
  if ((*(uint *)(param_1 + 0x60) & 0x400) != 0) {
    *(undefined4 *)(param_1 + 700) = 0x3dcccccd;
  }
  puVar9 = (uint *)(param_1 + 0x2a0);
  iVar10 = -1;
  iVar7 = 0;
  puVar6 = puVar9;
  do {
    uVar2 = *puVar6;
    *puVar6 = uVar2 & 0xffffffef;
    if ((uVar2 & 4) != 0) {
      iVar10 = iVar7;
    }
    iVar7 = iVar7 + 1;
    *puVar6 = uVar2 & 0xffffffeb;
    puVar6 = puVar6 + 1;
  } while (iVar7 < 6);
  if (_DAT_004ad750 < *(float *)(param_1 + 700)) {
    if (iVar10 < 0) {
      iVar7 = 0;
      pfVar8 = (float *)(param_1 + 0x288);
      fVar1 = _DAT_004ad750;
      do {
        if ((fVar1 < *pfVar8) && (_DAT_004ad774 < *pfVar8)) {
          fVar1 = *pfVar8;
          iVar10 = iVar7;
        }
        iVar7 = iVar7 + 1;
        pfVar8 = pfVar8 + 1;
      } while (iVar7 < 6);
      if (-1 < iVar10) goto LAB_0046abcd;
    }
    else {
LAB_0046abcd:
      if (*(float *)(param_1 + 0x270 + iVar10 * 4) * (float)_DAT_004ad778 <
          *(float *)(param_1 + 0x288 + iVar10 * 4)) {
        *(uint *)(param_1 + 0x2a0 + iVar10 * 4) = *(uint *)(param_1 + 0x2a0 + iVar10 * 4) | 4;
      }
    }
    if ((*(uint *)(param_1 + 100) & 0x40000) == 0) {
      iVar10 = 6;
      puVar6 = puVar9;
      do {
        if ((*puVar6 & 8) != 0) {
          *puVar6 = *puVar6 | 0x10;
        }
        puVar6 = puVar6 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  iVar10 = 6;
  do {
    if ((*(byte *)puVar9 & 4) != 0) {
      bVar3 = true;
      puVar9[-6] = (uint)((float)_DAT_00e22a40 *
                          ((float)puVar9[-0xc] * _DAT_004ad774 - (float)puVar9[-0xc]) *
                          *(float *)(param_1 + 0x98) * _DAT_004ad774 + (float)puVar9[-6]);
    }
    if (((*(byte *)puVar9 & 0x10) != 0) &&
       (iVar7 = FUN_004816b0(), (float)iVar7 * _DAT_004ad768 < (float)_DAT_004ad780)) {
      *puVar9 = *puVar9 & 0xfffffff7;
    }
    puVar9 = puVar9 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
    if (bVar3) {
      FUN_00409ee0(0xb,0xffffffff,0xffffffff,0xffffffff,0);
    }
    else {
      FUN_0040a0b0(0xb);
    }
    if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
      if (bVar3) {
        iVar10 = FUN_004816b0();
        if (((float)iVar10 * _DAT_004ad768 < _DAT_004ad788) &&
           (iVar10 = FUN_00427670((int)*(char *)(*(int *)(param_1 + 0x1e70) + 0x10),0x10000),
           iVar10 == 0)) {
          FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),10,10,10,10,10,
                       param_1 + 0x50);
          FUN_00427690((int)*(char *)(*(int *)(param_1 + 0x1e70) + 0x10),0x10000);
        }
      }
      else {
        iVar10 = FUN_00427670((int)*(char *)(*(int *)(param_1 + 0x1e70) + 0x10),0x10000);
        if (iVar10 != 0) {
          FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),0xb,0xb,0xb,0xb,0xb,
                       param_1 + 0x50);
          FUN_004276a0((int)*(char *)(*(int *)(param_1 + 0x1e70) + 0x10),0x10000);
        }
      }
    }
  }
  iVar10 = 0;
  pfVar8 = (float *)(param_1 + 0x288);
  do {
    if ((float)_DAT_004ad790 <= *pfVar8) {
      if (iVar10 < 3) {
        bVar4 = true;
      }
      else {
        bVar5 = true;
      }
    }
    iVar10 = iVar10 + 1;
    pfVar8 = pfVar8 + 1;
  } while (iVar10 < 6);
  if ((bVar4) || (bVar5)) {
    *(float *)(param_1 + 0x2c0) = *(float *)(param_1 + 0x2c0) - (float)_DAT_00e22a40;
    if ((*(uint *)(param_1 + 0x60) & 0x40000000) != 0) {
      *(undefined4 *)(param_1 + 0x2c0) = 0;
    }
  }
  else {
    iVar10 = FUN_004816b0();
    *(float *)(param_1 + 0x2c0) = (float)iVar10 * _DAT_004ad768 * _DAT_004ad798 - _DAT_004ad79c;
  }
  if (_DAT_004ad750 < *(float *)(param_1 + 0x2c0)) {
    return;
  }
  if (bVar4) {
    if (!bVar5) {
      if (bVar4) {
        local_14 = 1;
        goto LAB_0046aea1;
      }
      goto LAB_0046ae95;
    }
    iVar10 = FUN_004816b0();
    if ((float)iVar10 * _DAT_004ad768 < _DAT_004ad774) {
      local_14 = 1;
      goto LAB_0046aea1;
    }
  }
  else {
LAB_0046ae95:
    if (!bVar5) goto LAB_0046aea1;
  }
  local_14 = 2;
LAB_0046aea1:
  FUN_004741d0(param_1,local_14);
  return;
}

