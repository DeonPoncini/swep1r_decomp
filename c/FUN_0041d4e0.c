#include "prototype.h"


void FUN_0041d4e0(int param_1,int param_2)

{
  int iVar1;
  
  if (DAT_004d5e00 != 0) {
    iVar1 = param_1 * 0xc;
    if (*(int *)(&DAT_004ea020 + iVar1) != 0) {
      if ((*(int *)(&DAT_004ea028 + iVar1) == 0) ||
         ((*(uint *)(&DAT_004ea024 + iVar1) >> ((byte)DAT_004eb3b4 & 0x1f) & 1) !=
          (uint)(param_2 != 0))) {
        *(undefined4 *)(&DAT_004ea028 + iVar1) = 1;
        FUN_0041d420(param_1,(uint)(param_2 != 0));
      }
    }
  }
  return;
}

