#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481b30(int param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  if ((param_1 != 0) && (param_2 != (float *)0x0)) {
    uVar1 = FUN_00431770(param_1);
    if (uVar1 == 0x5066) {
      iVar2 = 0;
      if (_DAT_004ae008 <= *param_2) {
        do {
          if (iVar2 == 0) {
            fVar4 = 0.0;
          }
          else {
            fVar4 = param_2[iVar2];
          }
          FUN_00431750(param_1,iVar2,fVar4);
          iVar3 = iVar2 + 1;
          iVar2 = iVar2 + 1;
        } while (_DAT_004ae008 <= param_2[iVar3]);
      }
      FUN_00431750(param_1,iVar2,0xbf800000);
    }
    if ((uVar1 & 0x4000) != 0) {
      iVar2 = FUN_00431780(param_1);
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          FUN_00481b30(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 * 4),param_2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
    }
  }
  return;
}

