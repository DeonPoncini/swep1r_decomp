#include "prototype.h"


void FUN_0048ee10(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _strncpy((char *)param_1,s_UNKNOWN_004d1a98,0x3f);
  *(undefined *)((int)param_1 + 0x3f) = 0;
  param_1[0x1c] = 0;
  return;
}

