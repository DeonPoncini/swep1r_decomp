#include "prototype.h"


int FUN_0047bce0(int param_1)

{
  int iVar1;
  uint uVar2;
  int **ppiVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar1 = FUN_00431770(param_1);
    if (iVar1 == 0x3064) {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        ppiVar3 = *(int ***)(param_1 + 0x18);
        while( true ) {
          iVar4 = **ppiVar3;
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) break;
          iVar1 = iVar1 + 1;
          ppiVar3 = ppiVar3 + 1;
          if (*(int *)(param_1 + 0x14) <= iVar1) {
            return 0;
          }
        }
        return *(int *)(**ppiVar3 + 0xc);
      }
    }
    else {
      uVar2 = FUN_00431770(param_1);
      if ((uVar2 & 0x4000) != 0) {
        iVar4 = 0;
        iVar1 = FUN_00431780(param_1);
        if (0 < iVar1) {
          do {
            iVar1 = FUN_0047bce0(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4));
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar4 = iVar4 + 1;
            iVar1 = FUN_00431780(param_1);
          } while (iVar4 < iVar1);
        }
      }
    }
  }
  return 0;
}

