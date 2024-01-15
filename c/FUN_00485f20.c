#include "prototype.h"


void FUN_00485f20(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int **ppiVar4;
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((DAT_0050feb8 != (int *)0x0) && (local_18 = 0, DAT_0050febc != 0)) {
    ppiVar4 = (int **)&DAT_0050d89c;
    do {
      iVar2 = (**(code **)(*DAT_0050feb8 + 0xc))(DAT_0050feb8,ppiVar4 + -0x90,ppiVar4,0);
      if (iVar2 < 0) {
LAB_00485fd8:
        piVar1 = *ppiVar4;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        *ppiVar4 = (int *)0x0;
      }
      else {
        ppiVar4[1] = (int *)0x2c;
        iVar2 = (**(code **)(**ppiVar4 + 0xc))(*ppiVar4,ppiVar4 + 1);
        if ((iVar2 < 0) ||
           (iVar2 = (**(code **)(**ppiVar4 + 0x2c))(*ppiVar4,&LAB_0049e690), iVar2 < 0))
        goto LAB_00485fd8;
        iVar2 = **ppiVar4;
        uVar3 = FUN_0048c780(6);
        iVar2 = (**(code **)(iVar2 + 0x34))(*ppiVar4,uVar3);
        if (iVar2 < 0) goto LAB_00485fd8;
        uStack_14 = 0x14;
        uStack_10 = 0x10;
        uStack_c = 0;
        uStack_8 = 0;
        uStack_4 = 0x20;
        iVar2 = (**(code **)(**ppiVar4 + 0x18))(*ppiVar4,1,&uStack_14);
        if (iVar2 < 0) goto LAB_00485fd8;
      }
      local_18 = local_18 + 1;
      ppiVar4 = ppiVar4 + 0x9d;
    } while (local_18 < DAT_0050febc);
  }
  return;
}

