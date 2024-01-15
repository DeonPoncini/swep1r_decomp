#include "prototype.h"


undefined4 FUN_00415850(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = DAT_004d8798;
  switch(param_2) {
  case 2:
    FUN_00414f70(param_1);
    FUN_00414f00(param_1);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
    return 0;
  case 3:
    FUN_00415010();
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffd;
    uVar1 = DAT_004d8798;
    break;
  case 7:
    FUN_00414f00(param_1);
    uVar1 = DAT_004d8798;
    if (((param_3 == 9) || ((0x24 < param_3 && (param_3 < 0x29)))) && (DAT_004d87c8 == 0)) {
      FUN_00416a40(param_1,param_3);
      return 0;
    }
    break;
  case 8:
    FUN_00415010();
    return 0;
  case 9:
    if ((*(uint *)(param_1 + 0x20) & 0x800) != 0) {
      FUN_00419140(param_1);
      return 0;
    }
    break;
  case 10:
    uVar1 = FUN_004174e0(*(undefined4 *)(param_1 + 0x4d4),param_3);
    *(undefined4 *)(param_1 + 0x4d4) = uVar1;
    uVar1 = DAT_004d8798;
    if (param_4 != -1) {
      *(int *)(param_1 + 0x4d8) = param_4;
      return 0;
    }
    break;
  case 0xb:
    FUN_00416f50(param_1,param_3,param_4);
    return 0;
  case 0xc:
    FUN_00416f20(param_1,param_3,param_4);
    return 0;
  case 0xd:
    if (param_3 == 0) {
      FUN_004151a0(param_1,0x49,0,*(undefined4 *)(param_1 + 0x1c));
      return 0;
    }
    break;
  case 0xe:
    if (param_3 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x40;
      return 0;
    }
    FUN_004168f0(param_1);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffbf;
    FUN_00417060(param_1);
    return 0;
  case 0x10:
    uVar1 = FUN_004174e0(*(undefined4 *)(param_1 + 0x4d4),0);
    *(undefined4 *)(param_1 + 0x4d4) = uVar1;
    uVar1 = FUN_004174e0(*(undefined4 *)(param_1 + 0x51c),0);
    *(undefined4 *)(param_1 + 0x51c) = uVar1;
    return 0;
  case 0x11:
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffcc;
    return 0;
  case 0x13:
    if (DAT_004d8be4 == 0) {
      FUN_004118b0(0);
      return 0;
    }
    break;
  case 0x46:
    FUN_00414e60(param_1,1);
    if (param_3 != 0) {
      FUN_004156a0(param_1,0xffffffff);
    }
    DAT_004d8798 = FUN_00414d90(param_1,2);
    if (DAT_004d8798 != 0) {
      FUN_00414f10(DAT_004d8798,1);
      return 0;
    }
    DAT_004d8798 = *(int *)(param_1 + 0xc);
    uVar1 = 0;
    if (DAT_004d8798 != 0) {
      FUN_00414f10(DAT_004d8798,1);
      return 0;
    }
    break;
  case 0x47:
    FUN_00414e60((&DAT_004d8110)[param_3],0);
    (&DAT_004d8110)[param_3] = 0;
    return 0;
  case 0x49:
    if (param_3 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 8;
      FUN_004081e0(0);
      return 0;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffff7;
    FUN_004081e0(1);
    return 0;
  }
  DAT_004d8798 = uVar1;
  return 0;
}

