#include "prototype.h"


void FUN_00408fb0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    iVar1 = DAT_004d6c68;
    iVar3 = DAT_004d6c6c;
    if (DAT_004d6c68 == 0) {
      iVar1 = FUN_00408e60(param_1,0x2000);
      iVar3 = 0;
      DAT_004d6c6c = 0;
      puVar4 = &DAT_00ec85c0;
      DAT_004d6c68 = iVar1;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    if (iVar3 < 0x7ff) {
      *(int *)(iVar1 + iVar3 * 4) = param_2;
      DAT_004d6c6c = DAT_004d6c6c + 1;
      DAT_004d6c70 = FUN_00445b60(param_1);
      (&DAT_00ec85c0)[DAT_004d6c70] = (&DAT_00ec85c0)[DAT_004d6c70] + 1;
    }
  }
  return;
}

