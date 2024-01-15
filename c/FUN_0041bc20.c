#include "prototype.h"


undefined * FUN_0041bc20(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = __ftol();
  iVar2 = __ftol();
  iVar3 = __ftol();
  if (iVar3 == 100) {
    iVar3 = 0;
    iVar2 = iVar2 + 1;
    if (iVar2 == 0x3c) {
      iVar1 = iVar1 + 1;
    }
  }
  if (iVar1 != 0) {
    FUN_0049eb80(&DAT_004e9f20,s__d___2d___2d_004b6738,iVar1);
    return &DAT_004e9f20;
  }
  FUN_0049eb80(&DAT_004e9f20,s___2d___2d_004b672c,iVar2,iVar3);
  return &DAT_004e9f20;
}

