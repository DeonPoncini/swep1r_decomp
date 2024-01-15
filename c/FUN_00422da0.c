#include "prototype.h"


void FUN_00422da0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(PTR_DAT_004b6d34 + 0x28);
  if ((iVar2 != 0) && (uVar3 = 0, *(int *)(PTR_DAT_004b6d34 + 0x20) != 0)) {
    do {
      uVar1 = *(uint *)(iVar2 + 0x24);
      if ((uVar1 & 1) != 0) {
        if (DAT_004b6d2c == 0) {
          if ((uVar1 & 2) == 0) {
            FUN_00422d10(iVar2);
            goto LAB_00422dee;
          }
        }
        else {
          FUN_00422d10(iVar2);
          uVar1 = *(uint *)(iVar2 + 0x24);
        }
        *(uint *)(iVar2 + 0x24) = uVar1 & 0xfffffffd;
      }
LAB_00422dee:
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x4c;
    } while (uVar3 < *(uint *)(PTR_DAT_004b6d34 + 0x20));
  }
  uVar3 = 0;
  do {
    FUN_00449e00(&DAT_00e67e40 + uVar3);
    FUN_00449e00((int)&DAT_00e68060 + uVar3);
    uVar3 = uVar3 + 0x44;
  } while (uVar3 < 0x220);
  return;
}

