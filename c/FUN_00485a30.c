#include "prototype.h"


void FUN_00485a30(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int **ppiVar7;
  
  uVar1 = DAT_0050fed8;
  if (DAT_0050feac != 0) {
    uVar2 = 0;
    do {
      if (*(int *)((int)&DAT_0050e868 + uVar2) != 0) {
        *(undefined4 *)((int)&DAT_0050e868 + uVar2) = 0;
        if (*(int *)((int)&DAT_0050e028 + uVar2) == 0) {
          *(undefined4 *)((int)&DAT_0050e028 + uVar2) = uVar1;
        }
        *(undefined4 *)((int)&DAT_0050e028 + uVar2) = *(undefined4 *)((int)&DAT_0050e028 + uVar2);
      }
      iVar4 = DAT_004c8170;
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0x400);
    if ((DAT_004c8170 != 0) && (uVar2 = 0, DAT_0050fec0 != 0)) {
      piVar6 = &DAT_00ecb484;
      do {
        if (*piVar6 != 0) {
          iVar5 = 4;
          iVar3 = uVar2 << 4;
          do {
            if (*(int *)((int)&DAT_0050f068 + iVar3) != 0) {
              *(undefined4 *)((int)&DAT_0050f068 + iVar3) = 0;
              if (*(int *)((int)&DAT_0050e828 + iVar3) == 0) {
                *(undefined4 *)((int)&DAT_0050e828 + iVar3) = uVar1;
              }
              *(undefined4 *)((int)&DAT_0050e828 + iVar3) =
                   *(undefined4 *)((int)&DAT_0050e828 + iVar3);
            }
            iVar3 = iVar3 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        uVar2 = uVar2 + 1;
        piVar6 = piVar6 + 0x9d;
      } while (uVar2 < DAT_0050fec0);
    }
    if (param_1 != 0) {
      if ((iVar4 != 0) && (uVar2 = 0, DAT_0050fec0 != 0)) {
        ppiVar7 = (int **)&DAT_00ecb484;
        do {
          piVar6 = *ppiVar7;
          if (piVar6 != (int *)0x0) {
            iVar4 = (**(code **)(*piVar6 + 0x1c))(piVar6);
            if (iVar4 == 0) {
              ShowCursor(0);
            }
          }
          uVar2 = uVar2 + 1;
          ppiVar7 = ppiVar7 + 0x9d;
        } while (uVar2 < DAT_0050fec0);
      }
      uVar2 = 0;
      if (DAT_0050febc != 0) {
        ppiVar7 = (int **)&DAT_0050d89c;
        do {
          piVar6 = *ppiVar7;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x1c))(piVar6);
          }
          uVar2 = uVar2 + 1;
          ppiVar7 = ppiVar7 + 0x9d;
        } while (uVar2 < DAT_0050febc);
      }
      uVar2 = 0;
      if (DAT_0050fec8 != 0) {
        ppiVar7 = (int **)&DAT_00eca0e4;
        do {
          piVar6 = *ppiVar7;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x1c))(piVar6);
          }
          uVar2 = uVar2 + 1;
          ppiVar7 = ppiVar7 + 0x9d;
        } while (uVar2 < DAT_0050fec8);
      }
      DAT_0050feb4 = 1;
      return;
    }
    uVar2 = 0;
    if (DAT_0050fec0 != 0) {
      ppiVar7 = (int **)&DAT_00ecb484;
      do {
        piVar6 = *ppiVar7;
        if (piVar6 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar6 + 0x20))(piVar6);
          if (iVar4 == 0) {
            ShowCursor(1);
          }
        }
        uVar2 = uVar2 + 1;
        ppiVar7 = ppiVar7 + 0x9d;
      } while (uVar2 < DAT_0050fec0);
    }
    uVar2 = 0;
    if (DAT_0050febc != 0) {
      ppiVar7 = (int **)&DAT_0050d89c;
      do {
        piVar6 = *ppiVar7;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x20))(piVar6);
        }
        uVar2 = uVar2 + 1;
        ppiVar7 = ppiVar7 + 0x9d;
      } while (uVar2 < DAT_0050febc);
    }
    uVar2 = 0;
    if (DAT_0050fec8 != 0) {
      ppiVar7 = (int **)&DAT_00eca0e4;
      do {
        piVar6 = *ppiVar7;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x20))(piVar6);
        }
        uVar2 = uVar2 + 1;
        ppiVar7 = ppiVar7 + 0x9d;
      } while (uVar2 < DAT_0050fec8);
    }
    DAT_0050feb4 = 0;
  }
  return;
}

