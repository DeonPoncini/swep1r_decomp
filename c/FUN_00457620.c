#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457620(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    FUN_004270c0();
    if ((*(uint *)(param_1 + 0x14) & 2) != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffd;
    }
    *(undefined *)(param_1 + 0x60) = 0;
    FUN_00469010();
    DAT_004b2940 = 0;
    FUN_00409ee0(0x11,0xffffffff,0xffffffff,0xffffffff,0);
    iVar2 = 0;
    do {
      FUN_0045a460(iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    if (DAT_004d5e00 != 0) {
      DAT_0050c458 = 1;
    }
    if (DAT_004d8bdc != 0) {
      DAT_0050c908 = DAT_004d8bdc;
      DAT_004d8bdc = 0;
    }
    if (DAT_004d8be0 != 0) {
      DAT_0050c918 = DAT_004d8be0;
      DAT_004d8be0 = 0;
    }
    DAT_0050c928 = 0;
    DAT_0050c92c = 0;
    FUN_004270c0();
    FUN_004575a0(param_1);
    iVar2 = 0;
    do {
      FUN_004285d0(iVar2,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xb8);
    if ((DAT_004d79d4 != 0) || (((byte)DAT_0050c048 & 0x40) != 0)) {
      FUN_0043d9a0(param_1);
    }
    _DAT_0050c8f0 = _DAT_00e22a50 * _DAT_004ad098 + _DAT_0050c8f0;
    if (_DAT_004ad050 < _DAT_0050c8f0) {
      _DAT_0050c8f0 = _DAT_0050c8f0 - _DAT_004ad050;
    }
    FUN_004270c0();
    for (_DAT_0050c8f4 = _DAT_0050c8f4 + _DAT_00e22a50; _DAT_004acf54 < _DAT_0050c8f4;
        _DAT_0050c8f4 = _DAT_0050c8f4 - _DAT_004acf54) {
    }
    switch(*(undefined4 *)(param_1 + 8)) {
    case 0:
      FUN_00434ec0(param_1);
      break;
    case 1:
      FUN_00435240(param_1);
      break;
    case 2:
      FUN_004575d0(param_1);
      FUN_004367c0(param_1);
      break;
    case 3:
      switch(*(undefined4 *)(param_1 + 0x38)) {
      case 0:
        if (*(int *)(param_1 + 0x24) != 0) {
          FUN_00431a50(*(int *)(param_1 + 0x24),2,3,0x10,2);
        }
        FUN_0043dba0(param_1);
        FUN_00455dc0(param_1);
        FUN_00436860(param_1);
        break;
      case 1:
        if (*(int *)(param_1 + 0x2c) != 0) {
          FUN_00431a50(*(int *)(param_1 + 0x2c),2,3,0x10,2);
        }
        FUN_00455dc0(param_1);
        FUN_00436860(param_1);
        break;
      case 2:
        if (*(int *)(param_1 + 0x20) != 0) {
          FUN_00431a50(*(int *)(param_1 + 0x20),2,3,0x10,2);
        }
        FUN_00437f70(param_1);
        FUN_00436860(param_1);
        break;
      case 3:
        FUN_004575d0(param_1);
      default:
        FUN_00436860(param_1);
      }
      break;
    case 4:
      if (*(int *)(param_1 + 0x2c) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x2c),2,3,0x10,2);
      }
      FUN_0043abc0(param_1);
      break;
    case 5:
      FUN_004575d0(param_1);
      FUN_00439ce0(param_1);
      break;
    case 7:
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x24),2,3,0x10,2);
      }
      FUN_004376c0(param_1);
      break;
    case 8:
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x20),2,3,0x10,2);
      }
      FUN_00437f70(param_1);
      break;
    case 9:
      FUN_004575d0(param_1);
      FUN_00435700(param_1);
      break;
    case 0xc:
      FUN_004575d0(param_1);
      FUN_0043b240(param_1);
      break;
    case 0xd:
      FUN_004575d0(param_1);
      FUN_0043b880(param_1);
      break;
    case 0xe:
      FUN_00434ea0(param_1);
      return;
    case 0xf:
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x20),2,3,0x10,2);
      }
      FUN_0043ca30(param_1);
      break;
    case 0x10:
      FUN_0043ceb0(param_1);
      break;
    case 0x11:
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x20),2,3,0x10,2);
      }
      FUN_0043d4e0(param_1);
      break;
    case 0x12:
      FUN_004575d0(param_1);
      FUN_0043c6f0(param_1);
    }
    FUN_004270c0();
    if ((*(int *)(param_1 + 0x38) == 2) && (*(int *)(DAT_00e29908 + 8) != 0)) {
      FUN_00431a50(*(int *)(DAT_00e29908 + 8),2,0xfffffffc,0x10,3);
    }
    FUN_004270c0();
    if ((DAT_0050c944 == 1) && (iVar2 = FUN_0043e490(), iVar2 != 0)) {
      FUN_00427690(0,0x10);
    }
    FUN_004270c0();
    if (DAT_0050c944 == -1) {
      FUN_004276a0(0,0x10);
      iVar1 = FUN_0043e330(param_1);
    }
    FUN_004270c0();
    if (DAT_0050c468 == 0) {
      switch(DAT_0050c930) {
      case 1:
      case 2:
        FUN_0045c3c0(param_1);
        break;
      case 3:
        FUN_0045c0b0(param_1);
        break;
      case 5:
        FUN_0045c810(param_1);
      }
    }
    FUN_004270c0();
    FUN_00469bf0();
    if (((*(int *)(param_1 + 0x38) == 3) &&
        (FUN_00469380(*(undefined4 *)(param_1 + 8)), _DAT_004acf50 < DAT_00e295a0)) &&
       (*(int *)(param_1 + 8) != 1)) {
      FUN_00440550(0x4f);
    }
  }
  if (iVar1 != 0) {
    FUN_00457410(param_1,1,0);
  }
  FUN_004270c0();
  return;
}

