#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00470610(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  float10 extraout_ST0;
  float local_24;
  float fStack_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0046d4c0(param_1);
  if ((*(uint *)(param_1 + 0x60) & 0x800) == 0) {
    iVar4 = FUN_0041d6b0();
    if (iVar4 != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1e70) + 4);
      if ((iVar4 == 0x4c6f636c) || (iVar4 == 0x41414949)) {
        FUN_0041d930(param_1);
      }
      if (*(int *)(*(int *)(param_1 + 0x1e70) + 4) == 0x52454d4f) {
        DVar5 = timeGetTime();
        piVar1 = *(int **)(param_1 + 0x1e70);
        fStack_20 = 0.0;
        local_24 = (float)(DVar5 - *(int *)(&DAT_00ea0200 + *piVar1 * 4));
        *(uint *)(param_1 + 0x60) =
             *(uint *)(&DAT_00ea03c0 + *piVar1 * 4) | *(uint *)(param_1 + 0x60) & 0xfff787ef | 0x40;
        fVar3 = (float)(ulonglong)(uint)local_24 * _DAT_004adad0;
        *(uint *)(param_1 + 100) =
             *(uint *)(&DAT_00ea01a0 + *piVar1 * 4) | *(uint *)(param_1 + 100) & 0xf17bffff |
             0x10000000;
        *(undefined4 *)(param_1 + 0x1a0) = (&DAT_00ec7640)[*piVar1];
        FUN_004705d0(param_1,param_1 + 0x20,&DAT_00ea0720 + *piVar1 * 0x1f28,fVar3);
      }
    }
    FUN_00470ae0(param_1);
    if (**(int **)(*(int *)(param_1 + 0x1e70) + 0x18) == 0xe) {
      FUN_0044bb10(param_1 + 0x390,param_1 + 0x490);
      FUN_0044bb10(param_1 + 0x3d0,param_1 + 0x490);
    }
    if (*(int *)(param_1 + 0x344) != 0) {
      FUN_00471760(param_1);
      FUN_00472a50(param_1);
      FUN_0046f2c0(param_1,0,0xbf800000,0xbf800000);
      FUN_0046ee20(param_1);
    }
    FUN_0046f9a0(param_1);
    if (*(int *)(param_1 + 0x344) != 0) {
      FUN_0046d6a0(param_1);
      FUN_0046ebf0(param_1);
    }
    FUN_004709a0(param_1);
    FUN_00470a40(param_1);
    FUN_0046e150(param_1);
  }
  if (*(int *)(param_1 + 0x344) == 0) {
    if (*(int *)(param_1 + 0x348) != 0) {
      FUN_00431640(*(int *)(param_1 + 0x348),param_1 + 0x15d0);
    }
    iVar4 = *(int *)(param_1 + 0x34c);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x1998) < 0x65) {
        FUN_00431740(iVar4,0);
      }
      else {
        FUN_00431740(iVar4,1);
      }
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x344) + 0x14);
    if (iVar4 != 0) {
      FUN_00431640(iVar4,param_1 + 0x490);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x344) + 4);
    if (iVar4 != 0) {
      FUN_00431640(iVar4,param_1 + 0x390);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x344) + 8);
    if (iVar4 != 0) {
      FUN_00431640(iVar4,param_1 + 0x3d0);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x344) + 0xc);
    if (iVar4 != 0) {
      FUN_00431640(iVar4,param_1 + 0x410);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x344) + 0x10);
    if (iVar4 != 0) {
      FUN_00431640(iVar4,param_1 + 0x450);
    }
    iVar6 = 0xf8;
    iVar4 = param_1 + 0x12d0;
    do {
      iVar2 = *(int *)(iVar6 + *(int *)(param_1 + 0x344));
      if (iVar2 != 0) {
        FUN_00431640(iVar2,iVar4);
      }
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x40;
    } while (iVar6 < 0x101);
  }
  if (((*(uint *)(param_1 + 0x60) & 0x6000) != 0) && (iVar4 = *(int *)(param_1 + 0x300), -1 < iVar4)
     ) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0xbf800000;
    iVar6 = __ftol();
    local_1c = _DAT_004ada2c;
    local_24 = (float)((extraout_ST0 - (float10)iVar6) * (float10)_DAT_004ada2c);
    local_4 = _DAT_004ada2c;
    fStack_20 = local_24;
    local_c = local_24;
    local_8 = local_24;
    FUN_00483840(iVar4,&local_24,&local_c,&local_18);
  }
  return;
}

