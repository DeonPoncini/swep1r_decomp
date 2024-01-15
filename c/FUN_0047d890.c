#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047d890(void)

{
  float fVar1;
  float fVar2;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  if (DAT_0050cb40 == 1) {
    local_14 = -8500.0;
    local_4 = 3500.0;
    local_8 = 2500.0;
    local_c = -5500.0;
  }
  else if (DAT_0050cb40 == 2) {
    local_14 = -9300.0;
    local_4 = 9000.0;
    local_8 = 7500.0;
    local_c = -7500.0;
  }
  fVar1 = (local_4 - local_14) * _DAT_004adeec;
  fVar2 = (local_8 - local_c) * _DAT_004adee8;
  _DAT_00e270d0 = local_c;
  _DAT_00e270d4 = local_c + fVar2;
  _DAT_00e270dc = local_8;
  _DAT_00e27100 = local_14;
  _DAT_00e270d8 = local_8 - fVar2;
  _DAT_00e27104 = local_14 + fVar1;
  _DAT_00e27108 = local_14 - fVar1 * _DAT_004adef0;
  _DAT_00e2710c = local_14 - fVar1 * _DAT_004adef4;
  _DAT_00e27110 = local_14 - fVar1 * _DAT_004adef8;
  _DAT_00e27114 = local_14 - fVar1 * _DAT_004adefc;
  _DAT_00e27118 = local_14 - fVar1 * _DAT_004adf00;
  _DAT_00e2711c = local_4 - fVar1;
  _DAT_00e27120 = local_4;
  _DAT_00e27124 = fVar2 * _DAT_004adebc;
  _DAT_00e27128 = fVar1 * _DAT_004adebc;
  return;
}

