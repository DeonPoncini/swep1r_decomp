#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484c30(int *param_1,float param_2)

{
  float local_8;
  float local_4;
  
  if (DAT_0050d548 != 0) {
    local_8 = _DAT_004ae188 - param_2;
    local_4 = param_2 - _DAT_004ae18c;
    if (local_8 <= _DAT_004ae188) {
      if (_DAT_004ae188 < local_4) {
        local_8 = local_8 / local_4;
        local_4 = 1.0;
      }
    }
    else {
      local_4 = local_4 / local_8;
      local_8 = 1.0;
    }
    if (local_8 < _DAT_004ae18c) {
      local_8 = -1.0;
    }
    else if (_DAT_004ae188 < local_8) {
      local_8 = 1.0;
    }
    if (local_4 < _DAT_004ae18c) {
      local_4 = -1.0;
    }
    else if (_DAT_004ae188 < local_4) {
      local_4 = 1.0;
    }
    (**(code **)(*param_1 + 0xe4))(param_1,2,&local_8);
  }
  return;
}

