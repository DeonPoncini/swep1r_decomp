#include "prototype.h"


int FUN_0041abb0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00416d90(0,param_1,0xffffffff,0,0,0,0,FUN_0041ac00,0);
  FUN_00414b40(iVar1,500,0x32);
  *(undefined4 *)(iVar1 + 0x18) = 0xc;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 0x204;
  return iVar1;
}

