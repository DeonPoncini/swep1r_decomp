#include "prototype.h"


void FUN_00428740(short param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  int iVar1;
  
  if (param_1 == -0x67) {
    DAT_0050b704._0_1_ = param_2;
    DAT_0050b704._1_1_ = param_3;
    DAT_0050b704._2_1_ = param_4;
    DAT_0050b704._3_1_ = param_5;
    return;
  }
  if (param_1 == -0x68) {
    DAT_0050b708._0_1_ = param_2;
    DAT_0050b708._1_1_ = param_3;
    DAT_0050b708._2_1_ = param_4;
    DAT_0050b708._3_1_ = param_5;
    return;
  }
  if (-1 < param_1) {
    iVar1 = param_1 * 0x20;
    (&DAT_00e9ba78)[iVar1] = param_2;
    (&DAT_00e9ba79)[iVar1] = param_3;
    (&DAT_00e9ba7a)[iVar1] = param_4;
    (&DAT_00e9ba7b)[iVar1] = param_5;
  }
  return;
}

