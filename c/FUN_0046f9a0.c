#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046f9a0(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8 [3];
  undefined local_ac [12];
  int local_a0 [8];
  undefined local_80 [32];
  undefined local_60 [96];
  
  iVar6 = 0;
  local_b8[1] = 0;
  local_b8[0] = 0;
  if (*(int *)(param_1 + 0x344) != 0) {
    pbVar7 = (byte *)(param_1 + 0x2a0);
    do {
      if ((*pbVar7 & 8) != 0) {
        local_b8[iVar6 / 3] = 1;
      }
      iVar6 = iVar6 + 1;
      pbVar7 = pbVar7 + 4;
    } while (iVar6 < 6);
    iVar6 = 0;
    do {
      if ((local_b8[iVar6] != 0) || (*(int *)(param_1 + 0x314 + iVar6 * 4) != 0)) {
        iVar3 = (-iVar6 + 2) * 0x40;
        local_c4 = *(undefined4 *)(iVar3 + 900 + param_1);
        iVar3 = iVar3 + param_1;
        local_c8 = *(undefined4 *)((-iVar6 + 0x10) * 0x40 + param_1);
        local_c0 = *(undefined4 *)(iVar3 + 0x388);
        FUN_0042fa80(&local_c8,&local_c8,0xc0000000,iVar3 + 0x360);
        if (**(int **)(*(int *)(param_1 + 0x1e70) + 0x18) == 0xe) {
          local_bc = 0xc0000000;
          if (iVar6 != 0) {
            local_bc = 0x40000000;
          }
          FUN_0042fa80(&local_c8,&local_c8,local_bc,iVar3 + 0x350);
        }
        FUN_0042fa50(local_ac,0xc1a00000,iVar3 + 0x360);
        if (local_b8[iVar6] != 0) {
          iVar3 = *(int *)(param_1 + 0x314 + iVar6 * 4);
          puVar1 = (undefined4 *)(param_1 + 0x314 + iVar6 * 4);
          if (iVar3 == 0) {
            uVar4 = FUN_0046a5f0(6,0,0x447a0000,&local_c8,0x3f800000);
            *puVar1 = uVar4;
            FUN_0046a970(uVar4,puVar1);
          }
          else {
            FUN_0046a960(iVar3,0x40a00000);
          }
        }
        iVar3 = *(int *)(param_1 + 0x314 + iVar6 * 4);
        if (iVar3 != 0) {
          FUN_0046a920(iVar3,&local_c8);
          FUN_0046a940(*(undefined4 *)(param_1 + 0x314 + iVar6 * 4),local_ac);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    if (((*(uint *)(param_1 + 0x60) & 0x87800) != 0) || ((*(uint *)(param_1 + 100) & 0x4000) != 0))
    {
      piVar8 = (int *)(param_1 + 0x314);
      iVar6 = 2;
      do {
        if (*piVar8 != 0) {
          FUN_0046a960(*piVar8,0);
        }
        piVar8 = piVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  iVar6 = *(int *)(param_1 + 0x31c);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x60) == 8)) && (_DAT_004ada44 < *(float *)(iVar6 + 0x68)))
  {
    if (*(int *)(param_1 + 0x344) == 0) {
      local_c8 = *(undefined4 *)(param_1 + 0x50);
      local_c4 = *(undefined4 *)(param_1 + 0x54);
      local_c0 = *(undefined4 *)(param_1 + 0x58);
      FUN_0042fa80(&local_c8,&local_c8,0x3f800000,param_1 + 0x30);
      iVar3 = param_1 + 0x20;
      uVar4 = 0x41700000;
    }
    else {
      local_c8 = *(undefined4 *)(param_1 + 0x3c0);
      local_c4 = *(undefined4 *)(param_1 + 0x3c4);
      local_c0 = *(undefined4 *)(param_1 + 0x3c8);
      FUN_0042fa80(&local_c8,&local_c8,0x3f800000,param_1 + 0x3a0);
      iVar3 = param_1 + 0x390;
      uVar4 = 0x41400000;
    }
    FUN_0042fa80(&local_c8,&local_c8,uVar4,iVar3);
    FUN_0042fa50(local_ac,0x41200000,iVar3);
    FUN_0046a920(iVar6,&local_c8);
    FUN_0046a940(iVar6,local_ac);
    FUN_0042fa80(local_b8,&local_c8,0x3f000000,local_ac);
    iVar6 = FUN_00450e70(0x54657374,local_b8,0x42800000,0,2,local_80,local_60,local_a0);
    if (0 < iVar6) {
      piVar8 = local_a0;
      do {
        iVar3 = *piVar8;
        if (((iVar3 != param_1) && ((*(uint *)(iVar3 + 0x60) & 0x7800) == 0)) &&
           ((*(uint *)(iVar3 + 100) & 0x2000000) == 0)) {
          local_bc = FUN_004816b0();
          iVar5 = __ftol();
          iVar3 = *piVar8;
          if (*(float *)(param_1 + 0x38) * *(float *)(iVar3 + 0x38) +
              *(float *)(param_1 + 0x34) * *(float *)(iVar3 + 0x34) +
              *(float *)(param_1 + 0x30) * *(float *)(iVar3 + 0x30) < _DAT_004ad968) {
            iVar5 = iVar5 + 3;
          }
          puVar2 = (uint *)(iVar3 + 0x2a0 + iVar5 * 4);
          *puVar2 = *puVar2 | 8;
        }
        piVar8 = piVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if ((((*(uint *)(param_1 + 0x60) & 0x87800) != 0) || ((*(uint *)(param_1 + 100) & 0x4000) != 0))
       && (*(int *)(param_1 + 0x31c) != 0)) {
      FUN_0046a960(*(int *)(param_1 + 0x31c),0);
    }
  }
  return;
}

