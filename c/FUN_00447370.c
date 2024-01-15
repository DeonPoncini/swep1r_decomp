#include "prototype.h"


void FUN_00447370(int *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *param_1;
  iVar4 = param_1[2] - iVar2;
  iVar1 = FUN_00445bf0();
  if (iVar1 < iVar4 + 0x80) {
    *param_3 = 0;
    *param_2 = 0;
    DAT_0050c610 = 1;
    return;
  }
  if (param_1[1] != 0) {
    iVar4 = param_1[1] - iVar2;
  }
  iVar2 = FUN_00445b40();
  uVar3 = iVar2 + 0x3fU & 0xffffffc0;
  FUN_0042d640(3,*param_1,uVar3,iVar4);
  *param_2 = uVar3;
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    uVar3 = uVar3 + 0x3f + iVar4;
    iVar4 = param_1[2] - iVar2;
    uVar3 = uVar3 & 0xffffffc0;
    FUN_0042d640(3,iVar2,uVar3,iVar4);
    *param_3 = uVar3;
  }
  FUN_00445b20(uVar3 + iVar4);
  return;
}

