#include "prototype.h"


undefined4 FUN_00421020(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_00e9f444 + param_1 * 0xb0);
  (&DAT_00e9f448)[param_1 * 0x2c] = param_2;
  (&DAT_00e9f46c)[param_1 * 0x2c] = 0;
  *(uint *)(&DAT_00e9f444 + param_1 * 0xb0) = uVar1 | 5;
  DAT_004eb3b8 = DAT_004eb3b8 + 1;
  FUN_00420fc0();
  return 1;
}

