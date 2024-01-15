#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483590(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  if (DAT_00ec86c0 == 3) {
    param_5 = param_5 * _DAT_004ae0b8;
  }
  if (DAT_00ec86c0 == 1) {
    param_5 = param_5 * _DAT_004ae0bc;
  }
  if ((float)_DAT_004ae0c0 < param_2) {
    *(float *)(&DAT_00dfb174 + param_1 * 0x16c) = param_2;
  }
  if ((float)_DAT_004ae0c0 < param_3) {
    *(float *)(&DAT_00dfb178 + param_1 * 0x16c) = param_3;
  }
  if ((float)_DAT_004ae0c0 < param_4) {
    *(float *)(&DAT_00dfb180 + param_1 * 0x16c) = param_4;
  }
  if ((float)_DAT_004ae0c0 < param_5) {
    *(float *)(&DAT_00dfb184 + param_1 * 0x16c) = param_5;
  }
  if ((float)_DAT_004ae0c0 <= param_6) {
    *(float *)(&DAT_00dfb17c + param_1 * 0x16c) = param_6;
  }
  FUN_00482ee0(&DAT_00dfb040 + param_1 * 0x16c);
  return;
}

