#include "prototype.h"


void FUN_0042b5e0(int param_1,short param_2,short param_3,short param_4,short param_5,short param_6,
                 short param_7)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0xc), iVar1 != 0)) {
    if (-1 < param_2) {
      *(char *)(iVar1 + 0x20) = (char)param_2;
    }
    if (-1 < param_3) {
      *(char *)(iVar1 + 0x21) = (char)param_3;
    }
    if (-1 < param_4) {
      *(char *)(iVar1 + 0x22) = (char)param_4;
    }
    if (-1 < param_5) {
      *(char *)(iVar1 + 0x23) = (char)param_5;
    }
    if (-1 < param_6) {
      *(char *)(iVar1 + 0x24) = (char)param_6;
    }
    if (-1 < param_7) {
      *(char *)(iVar1 + 0x25) = (char)param_7;
    }
  }
  return;
}

