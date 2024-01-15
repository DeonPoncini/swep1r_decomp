#include "prototype.h"


void FUN_004226c0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = *(int *)(PTR_DAT_004b6d34 + 0x28);
  if (iVar3 != 0) {
    if (*(int *)(PTR_DAT_004b6d34 + 0x20) != 0) {
      iVar2 = 0;
      do {
        uVar1 = *(uint *)(iVar3 + 0x24);
        if ((uVar1 & 1) != 0) {
          if (DAT_004b6d2c == 0) {
            if ((uVar1 & 2) == 0) {
              FUN_00422d10(iVar3);
              goto LAB_00422713;
            }
          }
          else {
            FUN_00422d10(iVar3);
            uVar1 = *(uint *)(iVar3 + 0x24);
          }
          *(uint *)(iVar3 + 0x24) = uVar1 & 0xfffffffd;
        }
LAB_00422713:
        FUN_004231f0(*(int *)(PTR_DAT_004b6d34 + 0x28) + iVar2);
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0x4c;
        iVar3 = iVar3 + 0x4c;
      } while (uVar4 < *(uint *)(PTR_DAT_004b6d34 + 0x20));
    }
    FUN_0049f200(*(undefined4 *)(PTR_DAT_004b6d34 + 0x28));
    *(undefined4 *)(PTR_DAT_004b6d34 + 0x20) = 0;
    *(undefined4 *)(PTR_DAT_004b6d34 + 0x24) = 0;
    *(undefined4 *)(PTR_DAT_004b6d34 + 0x28) = 0;
  }
  return;
}

