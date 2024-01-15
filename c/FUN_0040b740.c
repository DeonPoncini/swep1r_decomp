#include "prototype.h"


void FUN_0040b740(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined local_40 [64];
  
  FUN_0040c670(param_1,param_2,0x27,0,10,0,1);
  FUN_0040c670(param_1,param_2,0x29,1,10,0,1);
  FUN_0040c670(param_1,param_2,0x2b,2,10,0,1);
  FUN_0040c670(param_1,param_2,0x2d,3,10,0,1);
  FUN_0040c670(param_1,param_2,0x2f,4,10,0,1);
  FUN_0040c670(param_1,param_2,0x31,5,10,0,1);
  FUN_0040c670(param_1,param_2,0x33,6,10,0,1);
  FUN_0040c670(param_1,param_2,0x35,7,10,0,1);
  FUN_0040c670(param_1,param_2,0x37,8,10,0,1);
  FUN_0040c670(param_1,param_2,0x39,9,10,0,1);
  if ((param_1 == 0) && (DAT_004d55d4 != 0)) {
    FUN_0040c670(0,param_2,0x40,3,9,0x20,1);
    FUN_0040c670(0,param_2,0x43,3,9,0x10,1);
  }
  if (param_1 == 2) {
    FUN_0040c670(2,param_2,0x40,3,9,0x20,1);
    FUN_0040c670(2,param_2,0x46,2,9,0x20,1);
    FUN_0040c670(2,param_2,0x49,2,9,0x10,1);
    FUN_0040c670(2,param_2,0x43,3,9,0x10,1);
    FUN_0040c670(2,param_2,0x41,3,9,0x20,2);
    FUN_0040c670(2,param_2,0x47,2,9,0x20,2);
    FUN_0040c670(2,param_2,0x4a,2,9,0x10,2);
    FUN_0040c670(2,param_2,0x44,3,9,0x10,2);
    FUN_0040c670(2,param_2,0x42,3,9,0x20,3);
    FUN_0040c670(2,param_2,0x48,2,9,0x20,3);
    FUN_0040c670(2,param_2,0x4b,2,9,0x10,3);
    FUN_0040c670(2,param_2,0x45,3,9,0x10,3);
    FUN_0040c670(2,param_2,0x28,0,10,0,2);
    FUN_0040c670(2,param_2,0x2a,1,10,0,2);
    FUN_0040c670(2,param_2,0x2c,2,10,0,2);
    FUN_0040c670(2,param_2,0x2e,3,10,0,2);
    FUN_0040c670(2,param_2,0x30,4,10,0,2);
    FUN_0040c670(2,param_2,0x32,5,10,0,2);
    FUN_0040c670(2,param_2,0x34,6,10,0,2);
    FUN_0040c670(2,param_2,0x36,7,10,0,2);
    FUN_0040c670(2,param_2,0x38,8,10,0,2);
    FUN_0040c670(2,param_2,0x3a,9,10,0,2);
  }
  else {
    FUN_0040c670(param_1,param_2,0x3d,0,5,0,1);
    FUN_0040c670(param_1,param_2,0x3e,2,5,0,1);
    FUN_0040c670(param_1,param_2,0x3f,3,5,0,1);
    FUN_0040c670(param_1,param_2,0x3c,6,6,0,1);
    FUN_0040c670(param_1,param_2,0x3b,2,6,0,1);
    puVar3 = &DAT_00ec8880;
    if (param_1 != 0) {
      puVar3 = &DAT_00ec8790;
    }
    uVar1 = FUN_00414d90(param_2,0x55);
    FUN_00414420(uVar1,*puVar3);
    uVar1 = FUN_00414d90(param_2,0x56);
    FUN_00414420(uVar1,puVar3[1]);
    iVar2 = FUN_00414d90(param_2,0x57);
    if (iVar2 != 0) {
      FUN_00414420(iVar2,puVar3[2]);
    }
    if (param_1 == 0) {
      iVar2 = FUN_00414d90(param_2,0x4d);
      if (iVar2 != 0) {
        FUN_00419db0(iVar2,*(uint *)(iVar2 + 0x20) & 0x1000);
      }
      iVar2 = FUN_00414d90(param_2,0x4e);
      if (iVar2 != 0) {
        FUN_00419db0(iVar2,*(uint *)(iVar2 + 0x20) & 0x1000);
      }
      uVar1 = FUN_00414d90(param_2,0x54);
      FUN_00414420(uVar1,DAT_004b2944);
      uVar1 = DAT_00ec87a0;
      uVar4 = DAT_00ec879c;
    }
    else {
      iVar2 = FUN_00414d90(param_2,0x4e);
      if (iVar2 != 0) {
        FUN_00419db0(iVar2,*(uint *)(iVar2 + 0x20) & 0x1000);
      }
      uVar1 = FUN_00414d90(param_2,0x54);
      FUN_00414420(uVar1,DAT_004d6b38);
      uVar1 = DAT_00ec878c;
      uVar4 = DAT_00ec8770;
    }
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0238_Detected___i_A_004b4e58,uVar1,uVar4);
    FUN_0049eb80(local_40,uVar1);
    iVar2 = FUN_00414d90(param_2,0x58);
    if (iVar2 != 0) {
      FUN_00414b80(iVar2,local_40,0);
      return;
    }
  }
  return;
}

