#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463ec0(undefined4 param_1,int param_2,float param_3)

{
  float fVar1;
  
  FUN_0042c380(param_1,0,param_2,0x3f800000,param_3 * _DAT_004ad410,0xffffffff,0xffffffff,0xffffffc8
              );
  FUN_0042c380(param_1,1,param_2 + 1,0x3f400000,param_3,0xffffffff,0xffffffff,0xffffffc8);
  fVar1 = param_3 * _DAT_004ad3f0;
  FUN_0042c380(param_1,2,param_2 + 2,0x3f2147ae,fVar1,0xffffffb4,0xffffffff,0xffffffb4);
  FUN_0042c380(param_1,3,param_2 + 3,0x3edc28f6,param_3 + param_3,0xffffffff,0xffffffff,0xffffffc8);
  FUN_0042c380(param_1,4,param_2 + 4,0x3e800000,param_3 * _DAT_004ad48c,0xffffffff,0xffffffc8,
               0xffffffc8);
  FUN_0042c380(param_1,4,param_2 + 5,0xbe3851ec,fVar1,0xffffffff,0xffffffc8,0xffffffc8);
  FUN_0042c380(param_1,5,param_2 + 6,0xbedc28f6,param_3,0xffffffb4,0xffffffff,0xffffffb4);
  FUN_0042c380(param_1,6,param_2 + 7,0xbfaccccd,param_3 * _DAT_004ad228,0xffffffff,0xffffffb4,
               0xffffffb4);
  return;
}

