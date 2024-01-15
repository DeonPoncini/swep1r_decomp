#include "prototype.h"


undefined4 FUN_00407cd0(byte *param_1,undefined4 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  undefined **ppuVar4;
  int iVar5;
  
  iVar5 = 0;
  if (DAT_004b29e8 == -1) {
    return 0;
  }
  ppuVar4 = &PTR_s__MONDOTEXT_H_0014_CAMERA_CYCLE_004b29ec;
  do {
    if (param_3 == 0) {
      uVar2 = FUN_00421470(*ppuVar4);
      uVar2 = FUN_00421360(param_2,uVar2);
      iVar3 = FUN_0049ec50(uVar2);
      if (iVar3 == 0) goto LAB_00407d51;
    }
    if (param_3 == 1) {
      uVar2 = FUN_00421360(*ppuVar4);
      uVar2 = FUN_00421360(param_2,uVar2);
      iVar3 = FUN_0049ec50(uVar2);
      if (iVar3 == 0) {
LAB_00407d51:
        *(int *)(param_1 + 8) = (&DAT_004b29e8)[iVar5 * 3];
        *param_1 = *param_1 | (&DAT_004b29f0)[iVar5 * 0xc];
        return 1;
      }
    }
    ppuVar1 = ppuVar4 + 2;
    ppuVar4 = ppuVar4 + 3;
    iVar5 = iVar5 + 1;
    if (*ppuVar1 == (undefined *)0xffffffff) {
      return 0;
    }
  } while( true );
}

