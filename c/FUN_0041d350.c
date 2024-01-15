#include "prototype.h"


uint FUN_0041d350(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (DAT_004eb3b8 != 0) {
    piVar2 = &DAT_00e9f448;
    do {
      if (param_1 == *piVar2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x2c;
    } while (uVar1 < DAT_004eb3b8);
  }
  return 0xffffffff;
}

