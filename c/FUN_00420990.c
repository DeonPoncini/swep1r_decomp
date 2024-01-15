#include "prototype.h"


void FUN_00420990(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined local_400 [1024];
  
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar1 = FUN_004137a0(param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (iVar1 == DAT_004eb3b4) {
    uVar2 = FUN_00414d90(param_1,0x7e);
    FUN_00411490(uVar2);
    uVar2 = FUN_00414d90(param_1,0x80);
  }
  else {
    uVar2 = FUN_00414d90(param_1,0x7e);
    FUN_004114b0(uVar2);
    uVar2 = FUN_00414d90(param_1,0x80);
    if ((DAT_004eb388 != 0) && ((&DAT_004eb238)[iVar1] != 0)) {
      FUN_00411490(uVar2);
      goto LAB_004209f4;
    }
  }
  FUN_004114b0(uVar2);
LAB_004209f4:
  iVar3 = FUN_00414d90(param_1,0x186b9);
  if (iVar3 != 0) {
    uVar2 = FUN_0041c4d0(iVar1,local_400,0x400);
    FUN_004208e0(uVar2);
    FUN_00414b80(iVar3,local_400,0);
  }
  return;
}

