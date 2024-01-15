#include "prototype.h"


int FUN_0044e620(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0xb];
  if (iVar1 == 0) {
    return param_1[param_2 + 4];
  }
  if (param_2 != 0) {
    iVar1 = iVar1 >> ((byte)param_2 & 0x1f);
  }
  return (int)*(short *)(*(int *)(*param_1 + 0xc) + 0x42 + (iVar1 + param_1[param_2 + 4] * 0x2a) * 2
                        );
}

