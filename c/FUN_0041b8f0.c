#include "prototype.h"


undefined4 FUN_0041b8f0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0x24) < 100) &&
     ((code *)(&DAT_004e9d18)[*(ushort *)(param_1 + 0x24)] != (code *)0x0)) {
    uVar1 = (*(code *)(&DAT_004e9d18)[*(ushort *)(param_1 + 0x24)])(param_1);
    return uVar1;
  }
  return 1;
}

