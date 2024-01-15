#include "prototype.h"


void FUN_0048c380(undefined *param_1,ushort *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      if (*param_2 == 0) break;
      if (*param_2 < 0x100) {
        *param_1 = *(undefined *)param_2;
      }
      else {
        *param_1 = 0x3f;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  if (iVar1 < param_3) {
    *param_1 = 0;
  }
  return;
}

