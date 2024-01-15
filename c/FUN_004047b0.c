#include "prototype.h"


undefined4 FUN_004047b0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0x20) + 4;
  if (param_2 == -1) {
    uVar2 = 0;
    if (DAT_004eb3b8 != 0) {
      piVar4 = &DAT_00e9f448;
      iVar1 = DAT_004d5e08;
      do {
        if (((*(byte *)(piVar4 + -1) & 1) != 0) && (*piVar4 != iVar1)) {
          FUN_00486ca0(iVar1,*piVar4,param_1 + 0x24,iVar3,0);
          DAT_004d5e10 = DAT_004d5e10 + 1;
          DAT_004d5e0c = DAT_004d5e0c + iVar3;
          iVar1 = DAT_004d5e08;
        }
        uVar2 = uVar2 + 1;
        piVar4 = piVar4 + 0x2c;
      } while (uVar2 < DAT_004eb3b8);
      return 1;
    }
  }
  else {
    iVar1 = FUN_00486ca0(DAT_004d5e08,param_2,param_1 + 0x24,iVar3,0);
    if (iVar1 < 0) {
      return 0;
    }
    DAT_004d5e10 = DAT_004d5e10 + 1;
    DAT_004d5e0c = DAT_004d5e0c + iVar3;
  }
  return 1;
}

