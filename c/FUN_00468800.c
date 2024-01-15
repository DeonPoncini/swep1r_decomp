#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468800(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [64];
  
  iVar2 = FUN_00450b30(0x456c6d6f,param_1);
  if (iVar2 == 0) {
    return;
  }
  iVar1 = iVar2 + 0x44;
  FUN_0042f7d0(iVar1,param_3);
  FUN_0042f7d0(iVar2 + 0x50,param_4);
  FUN_0042f7d0(iVar2 + 0x5c,param_3);
  *(undefined4 *)(iVar2 + 0x68) = param_5;
  *(undefined4 *)(iVar2 + 0x6c) = param_6;
  iVar3 = **(int **)(iVar2 + 0x30);
  if (iVar3 != 0) {
    FUN_00431a50(iVar3,2,0xfffffffc,0x10,3);
    FUN_0042f7d0(local_58,iVar1);
    FUN_0042f7b0(local_4c,*(undefined4 *)(iVar2 + 0x68),0,0);
    FUN_00431060(local_40,local_58);
    FUN_00431640(iVar3,local_40);
  }
  switch(*(undefined4 *)(iVar2 + 8)) {
  case 1:
    if (param_1 < 0x37) {
      iVar3 = FUN_004816b0();
      *(undefined4 *)(iVar2 + 0x94) = 0x3e99999a;
      *(float *)(iVar2 + 0x78) =
           (float)iVar3 * _DAT_004ad594 * (float)_DAT_004ad650 - (float)_DAT_004ad658;
      break;
    }
    goto LAB_00468939;
  case 2:
    if (param_2 == 0x1b) {
      *(undefined4 *)(iVar2 + 0x94) = 0x3dcccccd;
      break;
    }
    if (param_2 == 0x1c) {
      *(undefined4 *)(iVar2 + 0x94) = 0x3dcccccd;
      break;
    }
LAB_00468939:
    *(undefined4 *)(iVar2 + 0x94) = 0x3e99999a;
    break;
  case 3:
    *(undefined4 *)(iVar2 + 0x94) = 0x3e75c28f;
    break;
  case 4:
    *(undefined4 *)(iVar2 + 0x94) = 0x40200000;
    break;
  case 5:
    *(undefined4 *)(iVar2 + 0x94) = 0x3ecccccd;
    break;
  case 6:
    *(undefined4 *)(iVar2 + 0x94) = 0x3e4ccccd;
    break;
  case 7:
    *(undefined4 *)(iVar2 + 0x94) = 0x3e6b851f;
    break;
  case 8:
    *(undefined4 *)(iVar2 + 0x94) = 0x3fe66666;
    break;
  case 9:
  case 0xc:
    *(undefined4 *)(iVar2 + 0x94) = 0x3fd9999a;
    break;
  case 10:
    *(undefined4 *)(iVar2 + 0x94) = 0x3fc00000;
    break;
  case 0xb:
    *(undefined4 *)(iVar2 + 0x94) = 0x40000000;
  }
  FUN_0044b270(*(undefined4 *)(iVar2 + 0x30),iVar1);
  FUN_0044b180(*(undefined4 *)(iVar2 + 0x30),*(undefined4 *)(iVar2 + 0x94),
               *(undefined4 *)(iVar2 + 0x68));
  FUN_0044b330(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x78));
  FUN_00466ec0(iVar2,param_2);
  return;
}

