#include "prototype.h"


void FUN_00486010(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int **ppiVar5;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_0050feb8 != (int *)0x0) {
    uVar4 = 0;
    if (DAT_0050fec0 != 0) {
      ppiVar5 = (int **)&DAT_00ecb484;
      do {
        iVar2 = (**(code **)(*DAT_0050feb8 + 0xc))(DAT_0050feb8,ppiVar5 + -0x90,ppiVar5,0);
        if (iVar2 < 0) {
LAB_004860c5:
          piVar1 = *ppiVar5;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          *ppiVar5 = (int *)0x0;
        }
        else {
          ppiVar5[1] = (int *)0x2c;
          iVar2 = (**(code **)(**ppiVar5 + 0xc))(*ppiVar5,ppiVar5 + 1);
          if ((iVar2 < 0) ||
             (iVar2 = (**(code **)(**ppiVar5 + 0x2c))(*ppiVar5,&DAT_0049e720), iVar2 < 0))
          goto LAB_004860c5;
          iVar2 = **ppiVar5;
          uVar3 = FUN_0048c780(6);
          iVar2 = (**(code **)(iVar2 + 0x34))(*ppiVar5,uVar3);
          if (iVar2 < 0) goto LAB_004860c5;
          uStack_14 = 0x14;
          uStack_10 = 0x10;
          uStack_c = 0;
          uStack_8 = 0;
          uStack_4 = 0x20;
          iVar2 = (**(code **)(**ppiVar5 + 0x18))(*ppiVar5,1,&uStack_14);
          if (iVar2 < 0) goto LAB_004860c5;
        }
        uVar4 = uVar4 + 1;
        ppiVar5 = ppiVar5 + 0x9d;
      } while (uVar4 < DAT_0050fec0);
    }
    if (DAT_0050fec0 != 0) {
      FUN_00486970(0x30,0xffffff06,0xfa,0);
      FUN_00486970(0x31,0xffffff38,200,0);
      if (2 < DAT_00ecb494) {
        FUN_00486970(0x32,0xffffffec,0x14,0);
      }
    }
  }
  return;
}

