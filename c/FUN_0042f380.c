#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f380(float param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1 * (float10)_DAT_004ac650 * (float10)_DAT_004ac658;
  fVar2 = (float10)fcos(fVar1);
  fVar1 = (float10)fsin(fVar1);
  *param_3 = (float)fVar2;
  *param_2 = (float)fVar1;
  return;
}

