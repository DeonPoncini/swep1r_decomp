#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ee20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x344);
  if (iVar1 != 0) {
    if ((*(uint *)(param_1 + 0x60) & 0x10000000) == 0) {
      if (*(int *)(iVar1 + 0x104) != 0) {
        FUN_00431a50(*(int *)(iVar1 + 0x104),2,0xfffffffc,0x10,3);
      }
    }
    else {
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_0046ecd0(param_1,param_1 + 0x13c0,param_1 + 0x13c0);
        iVar1 = param_1 + 0x1390;
        FUN_00431450(iVar1,0x40400000,0x40400000,0x40400000,iVar1);
        FUN_00431640(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x104),iVar1);
      }
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xefffffff;
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x104);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,3,0x10,2);
      }
      if (_DAT_00e22a38 - _DAT_004ada08 < (double)_DAT_0050cb14) {
        iVar1 = FUN_004816b0();
        _DAT_0050cb14 =
             ((float)iVar1 * _DAT_004ad970 * _DAT_004ad97c - _DAT_004ad9e4) + (float)_DAT_00e22a38;
      }
      if (_DAT_0050cb14 < (float)_DAT_00e22a38) {
        iVar1 = FUN_004816b0(0x3f19999a,param_1 + 0x50,0,0,0x41200000,0x43fa0000);
        FUN_00426d10(0x3c,5,(float)iVar1 * _DAT_004ad970 * _DAT_004ada10 - _DAT_004ada14);
        iVar1 = FUN_004816b0();
        _DAT_0050cb14 =
             ((float)iVar1 * _DAT_004ad970 * _DAT_004ad97c - _DAT_004ad9e4) + (float)_DAT_00e22a38;
      }
    }
    if ((*(uint *)(param_1 + 0x60) & 0x20000000) == 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x108);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      }
    }
    else {
      if (*(int *)(*(int *)(param_1 + 0x344) + 4) != 0) {
        FUN_0046ecd0(param_1,param_1 + 0x1400,param_1 + 0x1400);
        iVar1 = param_1 + 0x13d0;
        FUN_00431450(iVar1,0x40000000,0x40000000,0x40000000,iVar1);
        FUN_00431640(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x108),iVar1);
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x108);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,3,0x10,2);
      }
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xdfffffff;
      if (_DAT_0050cb14 < (float)_DAT_00e22a38) {
        iVar1 = FUN_004816b0(0x3f19999a,param_1 + 0x50,0,0,0x41200000,0x43fa0000);
        FUN_00426d10(0x3c,5,(float)iVar1 * _DAT_004ad970 * _DAT_004ada10 - _DAT_004ada14);
        iVar1 = FUN_004816b0();
        _DAT_0050cb14 =
             ((float)iVar1 * _DAT_004ad970 * _DAT_004ad97c - _DAT_004ad9e4) + (float)_DAT_00e22a38;
        return;
      }
    }
  }
  return;
}

