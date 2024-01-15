#include "prototype.h"


void FUN_00415400(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  FUN_004180c0();
  FUN_004502f0();
  if ((PTR_DAT_004b5d74 != (undefined *)0x0) && (iVar2 = FUN_00414e80(PTR_DAT_004b5d74), iVar2 != 0)
     ) {
    FUN_00415020(PTR_DAT_004b5d74);
    FUN_004184d0();
    if (DAT_004d87a8 != 0) {
      DAT_004d8be8 = 1;
      return;
    }
    if (DAT_004d8be8 != 0) {
      FUN_00414f10(DAT_004d8798,1);
      DAT_004d8be8 = 0;
    }
    iVar2 = FUN_00408200();
    if (iVar2 != 0) {
      FUN_004083d0();
      uVar1 = DAT_00ec8754;
      uVar4 = DAT_00ec874c;
      if ((DAT_004d8bd0 & 8) != 0) {
        DAT_004d8bd0 = DAT_004d8bd0 & 0xf7;
        return;
      }
      iVar2 = FUN_004150e0(PTR_DAT_004b5d74,DAT_00ec874c,DAT_00ec8754);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x20) & 0x100) != 0)) {
        return;
      }
      iVar3 = FUN_00414fe0();
      if ((iVar2 != iVar3) && (FUN_00414eb0(iVar2), DAT_004d87c8 == 0)) {
        FUN_00414f70(iVar2);
      }
      iVar3 = FUN_00414ff0();
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      if ((DAT_00ec8740 & 0x80000000) != 0) {
        FUN_00412630();
        FUN_004151a0(iVar2,6,uVar4,uVar1);
      }
      if ((DAT_00ec8740 & 0x10000000) != 0) {
        if ((DAT_00ec8740 & 2) != 0) {
          FUN_004151a0(iVar2,(~(byte)DAT_00ec8744 & 2 | 4) >> 1,uVar4,uVar1);
        }
        if ((DAT_00ec8740 & 4) != 0) {
          FUN_004151a0(iVar2,(~DAT_00ec8744 & 4 | 0x10) >> 2,uVar4,uVar1);
        }
        if (DAT_004d87c8 == 0) {
          uVar5 = DAT_00ec8740 & 0xe0000000;
          if (DAT_004d6b40 != 0) {
            uVar4 = FUN_00411810(0x12,uVar5,0);
            FUN_004151a0(uVar4);
          }
          if (DAT_004d6b44 != 0) {
            if ((DAT_004d8bd0 & 1) == 0) {
              if (((*(int *)(DAT_0050c454 + 8) == 9) && (*(int *)(DAT_0050c454 + 0x10) == -1)) ||
                 (*(int *)(DAT_0050c454 + 8) == 1)) {
                iVar3 = DAT_004d87b4;
                if (DAT_004d87b4 == 0) {
                  iVar3 = FUN_00411810();
                }
                FUN_004151a0(iVar3,0x13,uVar5,0);
              }
            }
            else {
              DAT_004d8bd0 = DAT_004d8bd0 & 0xfe;
            }
          }
        }
        if (((DAT_004d6b40 != 0) && (iVar2 != 0)) && ((*(byte *)(iVar2 + 0x20) & 8) == 0)) {
          FUN_004151a0(iVar2,0x49,1,*(undefined4 *)(iVar2 + 0x1c));
        }
      }
      if ((DAT_00ec8740 & 0x20000000) != 0) {
        FUN_00412630();
        FUN_00416bd0();
      }
    }
    FUN_0041b690();
  }
  return;
}

