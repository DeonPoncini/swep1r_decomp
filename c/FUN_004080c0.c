#include "prototype.h"


void FUN_004080c0(undefined4 param_1,undefined2 param_2,undefined param_3)

{
  uint uVar1;
  
  if (DAT_004d6b54 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004d5e68);
    if ((byte)DAT_004d5e60 < 0x40) {
      uVar1 = DAT_004d5e60 & 0xff;
      (&DAT_004d6310)[uVar1 * 2] = param_1;
      (&DAT_004d6314)[uVar1 * 4] = param_2;
      (&DAT_004d6316)[uVar1 * 8] = param_3;
      DAT_004d5e60._0_1_ = (byte)DAT_004d5e60 + '\x01';
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004d5e68);
  }
  return;
}

