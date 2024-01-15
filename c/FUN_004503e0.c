#include "prototype.h"


void FUN_004503e0(undefined2 param_1,undefined2 param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined4 param_7,int param_8,int param_9)

{
  if (param_9 == 0) {
    if (DAT_0050c750 < 0x80) {
      if (param_8 < 0) {
        FUN_0049eb80(&DAT_00e2c380 + DAT_0050c750 * 0x80,&DAT_004b2304,param_7);
      }
      else {
        FUN_0049eb80(&DAT_00e2c380 + DAT_0050c750 * 0x80,s__f_d_s_004c3e48,param_8,param_7);
      }
      (&DAT_00e34860)[DAT_0050c750 * 2] = param_1;
      (&DAT_00e34862)[DAT_0050c750 * 2] = param_2;
      (&DAT_00e2b480)[DAT_0050c750 * 4] = param_3;
      (&DAT_00e2b481)[DAT_0050c750 * 4] = param_4;
      (&DAT_00e2b482)[DAT_0050c750 * 4] = param_5;
      (&DAT_00e2b483)[DAT_0050c750 * 4] = param_6;
      DAT_0050c750 = DAT_0050c750 + 1;
      return;
    }
  }
  else if (DAT_0050c758 < 0x20) {
    if (param_8 < 0) {
      FUN_0049eb80(&DAT_00e303a0 + DAT_0050c758 * 0x80,&DAT_004b2304,param_7);
    }
    else {
      FUN_0049eb80(&DAT_00e303a0 + DAT_0050c758 * 0x80,s__f_d_s_004c3e48,param_8,param_7);
    }
    (&DAT_00e34660)[DAT_0050c758 * 2] = param_1;
    (&DAT_00e34662)[DAT_0050c758 * 2] = param_2;
    (&DAT_00e343a0)[DAT_0050c758 * 4] = param_3;
    (&DAT_00e343a1)[DAT_0050c758 * 4] = param_4;
    (&DAT_00e343a2)[DAT_0050c758 * 4] = param_5;
    (&DAT_00e343a3)[DAT_0050c758 * 4] = param_6;
    DAT_0050c758 = DAT_0050c758 + 1;
  }
  return;
}

