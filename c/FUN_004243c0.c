#include "prototype.h"


uint FUN_004243c0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int param_11;
  
  uVar1 = *(uint *)(*(int *)(DAT_0050b5ac + 4) + 0x2a4 + *(int *)(param_11 + 0x10) * 0x2b4);
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = (int *)(*(int *)(*(int *)(DAT_0050b5ac + 4) + *(int *)(param_11 + 0x10) * 0x2b4 + 0x2a8
                             ) + 4);
    uVar3 = 0;
    while (((piVar2[6] != 0x10 || (*piVar2 != param_2)) || (piVar2[1] != param_3))) {
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x14;
      if (uVar1 <= uVar3) {
        return 0;
      }
    }
  }
  return uVar3;
}

