#include "prototype.h"


void FUN_0047f6f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined local_1f4 [500];
  
  DAT_004c7be4 = -1;
  if ((param_1 != 0) && (*(int *)(param_1 + 8) < 0xfb)) {
    if (*(short *)(*(int *)(param_1 + 0xc) + 2) == 0) {
      DAT_004c7be4 = -2;
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        iVar1 = 0;
        do {
          FUN_004270c0();
          if ((DAT_004c7be4 == -3) && (*(short *)(*(int *)(param_1 + 0xc) + iVar1) == 0)) {
            FUN_0047f6c0(iVar2);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x54;
        } while (iVar2 < *(int *)(param_1 + 4));
      }
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        iVar1 = 0;
        do {
          FUN_004270c0();
          if (*(short *)(*(int *)(param_1 + 0xc) + iVar1) == 0) {
            FUN_0047f6c0(iVar2);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x54;
        } while (iVar2 < *(int *)(param_1 + 4));
      }
    }
    FUN_0047f470(param_1,0x42c80000,local_1f4);
    FUN_0047ee20(param_1,0x41200000,param_2,local_1f4,&LAB_0047ea20);
    if (DAT_00e259a0 != 0) {
      FUN_0047ee20(param_1,0x41200000,0,0,&LAB_0047ece0);
    }
  }
  return;
}

