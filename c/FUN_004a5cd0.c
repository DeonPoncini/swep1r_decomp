#include "prototype.h"


int FUN_004a5cd0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  tm local_24;
  
  uVar3 = param_1 - 0x76c;
  if (((int)uVar3 < 0x46) || (0x8a < (int)uVar3)) {
    return -1;
  }
  param_3 = *(int *)(&DAT_004d511c + param_2 * 4) + param_3;
  if (((uVar3 & 3) == 0) && (2 < param_2)) {
    param_3 = param_3 + 1;
  }
  FUN_004a8e70();
  local_24.tm_hour = param_4;
  local_24.tm_mon = param_2 + -1;
  iVar1 = param_6 + (param_5 +
                    (param_4 + ((param_1 + -0x76d >> 2) + uVar3 * 0x16d + param_3) * 0x18) * 0x3c) *
                    0x3c + 0x7c558180 + DAT_004d5030;
  if (param_7 != 1) {
    if (param_7 != -1) {
      return iVar1;
    }
    if (DAT_004d5034 == 0) {
      return iVar1;
    }
    local_24.tm_year = uVar3;
    local_24.tm_yday = param_3;
    iVar2 = __isindst(&local_24);
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  return iVar1 + DAT_004d5038;
}

