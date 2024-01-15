#include "prototype.h"


void FUN_00426660(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if (0 < DAT_0050b5ec) {
    piVar4 = &DAT_00e9edc0;
    do {
      iVar1 = *piVar4;
      if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x100) & 0x80000000) == 0)) &&
         ((*(uint *)(iVar1 + 0x100) & 0x10000000) != 0)) {
        FUN_00426330(iVar1);
        uVar2 = *(uint *)(iVar1 + 0x100) & 0xf;
        switch(uVar2) {
        case 2:
          FUN_00426080(iVar1);
          break;
        case 8:
          FUN_00425f00(iVar1);
          break;
        case 9:
          FUN_00425d10(iVar1);
          break;
        case 10:
          FUN_00425de0(iVar1);
          break;
        case 0xb:
        case 0xc:
          if (uVar2 == 0xb) {
            FUN_004260f0(iVar1,0);
          }
          else {
            FUN_004260f0(iVar1,1);
          }
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < DAT_0050b5ec);
  }
  return;
}

