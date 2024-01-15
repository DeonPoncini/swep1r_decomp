#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0045a420(float param_1,float param_2)

{
  undefined local_4 [4];
  
  FUN_0042f380((param_1 / param_2) * _DAT_004ad114,local_4,&param_1);
  return ((float10)_DAT_004acf54 - (float10)param_1) * (float10)_DAT_004ad118 * (float10)param_2;
}

