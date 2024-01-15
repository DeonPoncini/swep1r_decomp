#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d0c0(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if ((DAT_004d5e00 != 0) && (param_1 != (char *)0x0)) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    if (0x7f < uVar2) {
      uVar2 = 0x80;
    }
    DAT_00ec7bc8 = param_2;
    DAT_00ec7bcc = param_3;
    DAT_00ec7bd0 = uVar2;
    _strncpy((char *)&DAT_00ec7bd4,param_1,uVar2 - 1);
    *(undefined *)((int)&DAT_00ec7bd0 + uVar2 + 3) = 0;
    _DAT_00ec7bc0 = uVar2 + 0xc;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 2;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,1);
  }
  return;
}

