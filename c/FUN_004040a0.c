#include "prototype.h"


undefined4 FUN_004040a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  
  if ((DAT_004b2910 != 0) && (param_1 != (int *)0x0)) {
    if (param_1[1] != 0) {
      FUN_00404190(param_1,param_3);
    }
    iVar2 = _IFCreateEffects_12(param_3,param_2,param_1);
    param_1[1] = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < *param_1) {
        do {
          FUN_004046e0(param_1);
          piVar1 = *(int **)(param_1[1] + iVar2 * 4);
          iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,param_1 + 2,0x1ff);
          if (iVar3 == -0x7ffbfdfe) {
            iVar3 = param_1[0xd];
            FUN_004046e0(param_1);
            iVar4 = (**(code **)(DAT_00ecc420 + 0x20))(iVar3);
            param_1[0x54] = iVar4;
            param_1[0xe] = iVar4;
            param_1[0xd] = iVar3;
            piVar1 = *(int **)(param_1[1] + iVar2 * 4);
            iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,param_1 + 2,0x1ff);
          }
          if (iVar3 != 0) {
            _IFReleaseEffects_8(unaff_retaddr,param_1[1]);
            param_1[1] = 0;
            return 0;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *param_1);
      }
      return 1;
    }
  }
  return 0;
}

