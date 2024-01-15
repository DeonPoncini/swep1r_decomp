#include "prototype.h"


int FUN_00413340(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,uint param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00416d90(param_1,param_2,param_3,param_4,param_11,param_12,0,&LAB_00415ed0,0);
  FUN_00414b40(iVar1,param_8,param_9);
  FUN_00414b60(iVar1,param_6,param_7);
  *(uint *)(iVar1 + 0x4f0) = param_11 & 0xffff0000;
  FUN_00418cb0(iVar1,0);
  if ((*(uint *)(iVar1 + 0x4f0) & 0x400000) == 0) {
    uVar2 = 0x20000;
    if ((*(uint *)(iVar1 + 0x4f0) & 0x800000) == 0) {
      FUN_00414ae0(iVar1,0x20000);
      if (*(int *)(iVar1 + 0x4f0) != 0) {
        uVar2 = 0x120000;
      }
    }
  }
  else {
    uVar2 = 0x200000;
  }
  FUN_00414b80(iVar1,param_4,uVar2);
  FUN_00414b30(iVar1,param_10);
  FUN_004157f0(iVar1,param_3);
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 3;
  return iVar1;
}

