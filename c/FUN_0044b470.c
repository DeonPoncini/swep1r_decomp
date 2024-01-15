#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0044b470(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return (float10)_DAT_004acc38;
  }
  if (*param_1 == 0) {
    return (float10)_DAT_004acc38;
  }
  return (float10)*(float *)(*param_1 + 0x114);
}

