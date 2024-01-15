#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00484720(undefined4 param_1)

{
  undefined2 in_FPUControlWord;
  
  DAT_00ecc420 = param_1;
  DAT_00ec8c80 = in_FPUControlWord;
  DAT_00ec8c84 = CONCAT11(0xb,(char)in_FPUControlWord);
  DAT_00ec8c82 = CONCAT11(7,(char)in_FPUControlWord);
  _DAT_0050d518 = 1;
  return in_FPUControlWord;
}

