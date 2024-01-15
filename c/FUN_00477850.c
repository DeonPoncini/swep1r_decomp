#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00477850(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,float param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float local_8;
  
  if (param_6 == 1.401298e-45) {
    iVar3 = 0x41;
    uVar2 = 0x10000000;
  }
  else {
    iVar3 = 0x42;
    uVar2 = 0x20000000;
  }
  local_8 = param_2;
  param_6 = param_2;
  if ((float)_DAT_004add10 < param_2) {
    param_6 = 0.2;
  }
  iVar1 = FUN_004816b0();
  if ((float)iVar1 * _DAT_004add18 < (float)_DAT_004adcd0) {
    iVar1 = FUN_004816b0();
    local_8 = (float)iVar1 * _DAT_004add18 * _DAT_004adc60 - _DAT_004add1c;
    param_6 = local_8 * param_6;
    local_8 = local_8 * param_2;
  }
  iVar3 = iVar3 * 0x40 + 0x350 + param_1;
  FUN_00481100(iVar3,param_4,param_5,param_1 + 0x30,param_3);
  FUN_00431450(iVar3,local_8,param_6,param_6,iVar3);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | uVar2;
  return;
}

