#include "prototype.h"


void FUN_00416a40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 == 9) {
    iVar4 = 0;
    iVar2 = param_1;
    do {
      iVar1 = *(int *)(iVar2 + 4);
      if (iVar1 == 0) {
        iVar1 = FUN_00414df0(iVar2);
      }
      if ((*(byte *)(iVar1 + 0x20) & 4) == 0) {
        iVar4 = iVar1;
      }
      iVar2 = FUN_00414e80(iVar1);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      if ((*(uint *)(iVar1 + 0x20) & 0x100) != 0) {
        iVar4 = 0;
      }
      if (iVar1 == param_1) {
        iVar4 = iVar1;
      }
      iVar2 = iVar1;
    } while (iVar4 == 0);
    goto LAB_00416b93;
  }
  if ((((param_2 != 0x25) && (param_2 != 0x27)) && (param_2 != 0x26)) &&
     (iVar4 = param_1, param_2 != 0x28)) goto LAB_00416b93;
  iVar4 = FUN_0041b380(param_1);
  if (iVar4 == 0) {
    return;
  }
  if ((param_2 == 0x27) || (param_2 == 0x28)) {
    iVar4 = FUN_0041b3c0(param_1);
    if (iVar4 == 0) {
      if (((byte)*(undefined4 *)(param_1 + 0x18) & 0xc) == 0xc) {
        iVar4 = *(int *)(param_1 + 8);
      }
      else {
        iVar4 = FUN_00414df0(param_1);
        iVar2 = FUN_0041b380(iVar4);
        if (iVar2 != 0) goto LAB_00416b7a;
      }
LAB_00416b70:
      iVar4 = FUN_0041b3c0(iVar4);
    }
  }
  else {
    if ((param_2 != 0x25) && (iVar4 = 0, param_2 != 0x26)) goto LAB_00416b93;
    iVar4 = FUN_0041b3f0(param_1);
    if (iVar4 == 0) {
      if (((byte)*(undefined4 *)(param_1 + 0x18) & 0xc) == 0xc) {
        iVar4 = FUN_0041b3f0(*(undefined4 *)(param_1 + 8));
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 8);
          goto LAB_00416b70;
        }
      }
      else {
        iVar4 = FUN_00414e10(param_1);
        iVar2 = FUN_0041b380(iVar4);
        if (iVar2 == 0) {
          iVar4 = FUN_0041b3f0(iVar4);
        }
      }
    }
  }
LAB_00416b7a:
  if ((((byte)*(undefined4 *)(iVar4 + 0x18) & 5) == 5) && (*(int *)(iVar4 + 0xc) != 0)) {
    iVar4 = *(int *)(iVar4 + 0xc);
  }
LAB_00416b93:
  if ((iVar4 != 0) && (FUN_00414f10(iVar4,1), ((byte)*(undefined4 *)(iVar4 + 0x18) & 0xc) == 0xc)) {
    uVar3 = FUN_004136f0(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x4d4),1);
    FUN_00413610(uVar3);
  }
  return;
}

