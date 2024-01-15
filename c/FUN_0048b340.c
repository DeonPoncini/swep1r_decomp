#include "prototype.h"


void FUN_0048b340(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  
  piVar1 = DAT_0052e644;
  iVar5 = *DAT_0052e644;
  uVar2 = __ftol();
  uVar3 = __ftol();
  uVar4 = __ftol();
  iVar5 = (**(code **)(iVar5 + 0x58))(piVar1,0x22,(uVar2 | (uVar3 | 0xffffff00) << 8) << 8 | uVar4);
  if (iVar5 == 0) {
    iVar5 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x24,param_1);
    if (iVar5 == 0) {
      (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x25,unaff_EBX);
    }
  }
  return;
}

