#include "prototype.h"


void FUN_004285d0(short param_1,int param_2)

{
  if (param_1 == -0xc9) {
    DAT_0050b700 = (uint)(param_2 != 0);
    return;
  }
  if (param_1 == -0x67) {
    DAT_0050b704._3_1_ = -(param_2 != 0);
    return;
  }
  if (param_1 == -0x68) {
    DAT_0050b708._3_1_ = -(param_2 != 0);
    return;
  }
  if (-1 < param_1) {
    if (param_2 != 0) {
      *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) = *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) | 0x20;
      return;
    }
    *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) =
         *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) & 0xffffffdf;
  }
  return;
}

