#include "prototype.h"


void FUN_00479d40(int param_1)

{
  float local_38;
  float local_34;
  float local_30;
  undefined local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0042fa80(local_2c,param_1 + 0x50,0x40c00000,(float *)(param_1 + 0x144));
  local_38 = -*(float *)(param_1 + 0x144);
  local_34 = -*(float *)(param_1 + 0x148);
  local_30 = -*(float *)(param_1 + 0x14c);
  FUN_00477850(param_1,0x3e4ccccd,0,local_2c,&local_38,2);
  FUN_0041df10(0xffffffff,0,0x5370726b,**(undefined4 **)(param_1 + 0x1e70),0xa0000000,0x3fc99999,0,0
               ,local_2c,&local_38,2);
  local_18 = *(undefined4 *)(param_1 + 0x150);
  local_20 = 0x48697474;
  local_1c = 0x56684c74;
  FUN_00450c00(param_1,&local_20);
  return;
}

