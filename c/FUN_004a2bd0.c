#include "prototype.h"


void FUN_004a2bd0(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_14;
  uint local_10;
  undefined local_c [12];
  
  iVar1 = param_2;
  uVar4 = 0;
  uVar2 = FUN_004a8490(local_c,&param_2,param_2,0,0,0,0);
  if ((uVar2 & 4) == 0) {
    iVar3 = FUN_004a7270(local_c,&local_14);
    if (((uVar2 & 2) != 0) || (iVar3 == 1)) {
      uVar4 = 0x80;
    }
    if (((uVar2 & 1) != 0) || (iVar3 == 2)) {
      uVar4 = uVar4 | 0x100;
    }
  }
  else {
    uVar4 = 0x200;
    local_14 = 0;
    local_10 = 0;
  }
  *param_1 = uVar4;
  param_1[1] = param_2 - iVar1;
  param_1[4] = local_14;
  param_1[5] = local_10;
  return;
}

