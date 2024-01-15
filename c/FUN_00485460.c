#include "prototype.h"


void FUN_00485460(void)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (DAT_0050fea8 != 0) {
    uVar4 = 0;
    DAT_0050fea8 = 0;
    if (DAT_0050fec0 != 0) {
      ppiVar3 = (int **)&DAT_00ecb484;
      do {
        piVar1 = *ppiVar3;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x20))(piVar1);
          (**(code **)(**ppiVar3 + 8))(*ppiVar3);
        }
        uVar4 = uVar4 + 1;
        ppiVar3 = ppiVar3 + 0x9d;
      } while (uVar4 < DAT_0050fec0);
    }
    DAT_0050fec0 = 0;
    puVar5 = &DAT_00ecb240;
    for (iVar2 = 0x274; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    uVar4 = 0;
    if (DAT_0050febc != 0) {
      ppiVar3 = (int **)&DAT_0050d89c;
      do {
        piVar1 = *ppiVar3;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x20))(piVar1);
          (**(code **)(**ppiVar3 + 8))(*ppiVar3);
        }
        uVar4 = uVar4 + 1;
        ppiVar3 = ppiVar3 + 0x9d;
      } while (uVar4 < DAT_0050febc);
    }
    DAT_0050febc = 0;
    puVar5 = &DAT_0050d658;
    for (iVar2 = 0x274; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    uVar4 = 0;
    if (DAT_0050fec8 != 0) {
      ppiVar3 = (int **)&DAT_00eca0e4;
      do {
        piVar1 = *ppiVar3;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x20))(piVar1);
          (**(code **)(**ppiVar3 + 8))(*ppiVar3);
        }
        uVar4 = uVar4 + 1;
        ppiVar3 = ppiVar3 + 0x9d;
      } while (uVar4 < DAT_0050fec8);
    }
    DAT_0050fec8 = 0;
    puVar5 = &DAT_00ec9ea0;
    for (iVar2 = 0x4e8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    if (DAT_0050feb8 != (int *)0x0) {
      (**(code **)(*DAT_0050feb8 + 8))(DAT_0050feb8);
      DAT_0050feb8 = (int *)0x0;
    }
  }
  return;
}

