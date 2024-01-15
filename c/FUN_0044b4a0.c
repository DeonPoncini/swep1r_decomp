#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0044b4a0(int param_1,int *param_2)

{
  float10 fVar1;
  undefined local_40 [16];
  float local_30;
  undefined4 local_2c;
  
  if (param_2 == (int *)0x0) {
    return (float10)_DAT_004acc38;
  }
  if (*param_2 == 0) {
    return (float10)_DAT_004acc38;
  }
  if (param_1 == 0) {
    return (float10)_DAT_004acc38;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return (float10)_DAT_004acc38;
  }
  if (*(int *)(param_1 + 8) == 0) {
    return (float10)_DAT_004acc38;
  }
  FUN_004316a0(*(int *)(param_1 + 8),local_40);
  fVar1 = (float10)FUN_0042f560(-local_30,local_2c);
  return fVar1;
}

