#include "prototype.h"


void FUN_00465480(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = *param_1;
  while (iVar2 != -1) {
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar2 = *piVar1;
  }
  if (param_1[1] == 0x44617461) {
    iVar2 = param_1[2];
    param_1 = param_1 + 3;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        if (*param_1 == 0x4c537472) {
          local_c = param_1[1];
          local_8 = param_1[2];
          local_4 = param_1[3];
          FUN_0042c490(iVar3,&local_c);
          param_1 = param_1 + 4;
        }
        else {
          param_1 = param_1 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  return;
}

