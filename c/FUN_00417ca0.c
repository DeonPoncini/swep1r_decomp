#include "prototype.h"


void FUN_00417ca0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar3 = 0;
  iVar5 = 0;
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (((byte)*(undefined4 *)(iVar1 + 0x18) & 0xc) == 0xc) {
      FUN_00414e60(iVar1,0);
      *(uint *)(iVar1 + 0x528) = uVar3;
      uVar3 = uVar3 + 1;
      if (200 < uVar3) {
        iVar5 = iVar5 + 1;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    iVar4 = *(int *)(iVar1 + 4);
    FUN_00414d00(iVar1);
    iVar1 = iVar4;
  }
  iVar1 = *(int *)(param_1 + 0x504);
  iVar5 = *(int *)(param_1 + 0xc);
  bVar6 = iVar1 != 0;
  if (iVar5 != 0) {
    do {
      if (iVar1 == 0) break;
      if (((byte)*(undefined4 *)(iVar5 + 0x18) & 0xc) == 0xc) {
        iVar1 = iVar1 + -1;
      }
      iVar5 = *(int *)(iVar5 + 4);
    } while (iVar5 != 0);
    if (iVar5 != 0) {
      iVar1 = *(int *)(param_1 + 0x510);
      do {
        if (*(int *)(param_1 + 0x30) + 0x14 <= iVar1) break;
        if (((byte)*(undefined4 *)(iVar5 + 0x18) & 0xc) == 0xc) {
          iVar4 = (*(int *)(iVar5 + 0x30) - *(int *)(iVar5 + 0x28)) + 1;
          if (*(int *)(param_1 + 0x518) <= iVar4 + iVar1) {
            bVar6 = true;
          }
          if (iVar1 < *(int *)(param_1 + 0x518)) {
            if ((*(uint *)(iVar5 + 0x508) & 0x20000) == 0) {
              if ((*(uint *)(iVar5 + 0x508) & 0x10000) == 0) {
                iVar2 = *(int *)(param_1 + 0x50c);
              }
              else {
                iVar2 = (((*(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x2c)) +
                         *(int *)(param_1 + 0x514)) - *(int *)(param_1 + 0x50c) >> 1) +
                        *(int *)(param_1 + 0x50c);
              }
              FUN_00414b60(iVar5,iVar2,iVar1);
            }
            if (((*(uint *)(iVar5 + 0x508) & 0x80000) != 0) &&
               ((*(uint *)(param_1 + 0x508) & 0x100000) == 0)) {
              local_8 = *(int *)(param_1 + 0x514) + 10;
              local_10 = *(int *)(param_1 + 0x50c) + -10;
              local_c = *(int *)(iVar5 + 0x28) + -10;
              local_4 = *(int *)(iVar5 + 0x30) + -10;
              FUN_0041aa90(param_1,iVar5,&local_10);
            }
            FUN_00414e60(iVar5,1);
          }
          iVar1 = iVar1 + *(int *)(param_1 + 0x524) + iVar4;
        }
        iVar5 = *(int *)(iVar5 + 4);
      } while (iVar5 != 0);
      if ((bVar6) && ((*(uint *)(param_1 + 0x508) & 0x200000) == 0)) {
        iVar1 = FUN_00414d60(param_1,6);
        if (iVar1 == 0) {
          local_10 = *(int *)(param_1 + 0x50c);
          iVar5 = *(int *)(param_1 + 0x510) + -0xf;
          FUN_00413a90(param_1,0,*(int *)(param_1 + 0x514) + -0x20,iVar5,
                       (*(int *)(param_1 + 0x518) - iVar5) + 0x10,0x10000,0);
        }
        FUN_00414e60(iVar1,1);
      }
      for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        if (((byte)*(undefined4 *)(iVar1 + 0x18) & 0xc) == 0xc) {
          FUN_00415810(iVar1,*(undefined4 *)(param_1 + 0x50c),*(int *)(param_1 + 0x510) + -2,
                       *(undefined4 *)(param_1 + 0x514),*(int *)(param_1 + 0x518) + 2);
        }
      }
    }
  }
  return;
}

