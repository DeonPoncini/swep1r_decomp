#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407630(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined local_40 [64];
  
  iVar3 = param_1;
  iVar2 = FUN_00406a50(param_1,2,5,0,1,local_40,&param_1);
  if (iVar2 != 0) {
    if (iVar3 == 1) {
      if (param_1 == 0) {
        FUN_004859a0(_DAT_004ac310 / _DAT_00ec8784,0x3f800000);
        return;
      }
      if (param_1 == 1) {
        FUN_004859a0(0x3f800000,_DAT_004ac310 / _DAT_00ec8784);
        return;
      }
    }
    else {
      FUN_004858e0(DAT_00ec876c,DAT_004d6b3c,param_1);
      uVar1 = *(undefined4 *)(&DAT_00ec8780 + iVar3 * 4);
      puVar4 = &DAT_004b2980;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0x3f800000;
        puVar4 = puVar4 + 1;
      }
      (&DAT_004b2980)[param_1] = uVar1;
    }
  }
  return;
}

