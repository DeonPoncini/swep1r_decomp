#include "prototype.h"


void FUN_0045dad0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    *(int *)(param_1 + 0x1e0) = param_2;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1e0);
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 5) {
    return;
  }
  if (iVar1 == 4) {
    *(undefined4 *)(param_1 + 0x1e0) = 5;
    *(undefined4 *)(param_1 + 0x1e4) = 0x3f800000;
  }
  FUN_004831d0(0,8,8,0x138,0xe8);
  FUN_00483230(2,0xffffffff);
  if ((*(byte *)(param_1 + 8) & 0x60) == 0) {
    iVar1 = FUN_0045d350();
    FUN_004285d0(0xffffff37,0);
    switch(*(undefined4 *)(param_1 + 0x1e0)) {
    case 1:
      FUN_00483230(1,5);
      FUN_004831d0(1,8,8,0x138,0xe8);
      FUN_00483590(1,0x42c80000,0xbf800000,0xbf800000,0xbf800000,0xbf800000);
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      return;
    case 2:
      FUN_00483230(1,5);
      FUN_004831d0(1,8,0x30,0x138,0xc0);
      FUN_004831d0(0,8,0x30,0x138,0xc0);
      FUN_00483590(1,0x42340000,0xbf800000,DAT_004c4a60,DAT_004c4a5c,0xbf800000);
      return;
    case 3:
    case 4:
    case 5:
      goto switchD_0045db73_caseD_3;
    default:
      return;
    }
  }
  FUN_00483230(1,7);
LAB_0045dd22:
  FUN_004831d0(1,8,8,0x138,0xe8);
  FUN_00483590(1,0x42c80000,0xbf800000,0xbf800000,0xbf800000,0xbf800000);
  return;
switchD_0045db73_caseD_3:
  FUN_00483230(1,7);
  if ((iVar1 != 1) && (iVar1 != 0)) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00483230(2,8);
    FUN_004831d0(1,8,8,0x138,0x77);
    FUN_004831d0(2,8,0x79,0x138,0xe8);
    if (DAT_0050ca14 != 0) {
      FUN_00483590(1,0x42f00000,0xbf800000,0xbf800000,0xbf800000,0xbf800000);
      FUN_00483590(2,0x42f00000,0xbf800000,0xbf800000,0xbf800000,0xbf800000);
      return;
    }
    FUN_00483590(1,0x42c80000,0xbf800000,0xbf800000,0xbf800000,0xbf800000);
    FUN_00483590(2,0x42c80000,0xbf800000,0xbf800000,0xbf800000,0xbf800000);
    return;
  }
  goto LAB_0045dd22;
}

