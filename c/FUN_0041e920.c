#include "prototype.h"


void FUN_0041e920(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined local_400 [1024];
  
  uVar1 = DAT_004eb224;
  piVar3 = &DAT_004eb188;
  iVar2 = DAT_004eb228;
  do {
    if (*piVar3 != 0) {
      FUN_0049eb80(local_400,s__F0_s_004b6844,*piVar3);
      FUN_00450530(uVar1,iVar2,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_400);
      iVar2 = iVar2 + 0xf;
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x4eb1c4);
  if (DAT_00ea0250 != 0) {
    FUN_00450530(uVar1,iVar2,0xffffffff,0xffffffff,0xffffffff,0xffffffff,&DAT_004ea988);
    DAT_004e9f18 = iVar2;
  }
  return;
}

