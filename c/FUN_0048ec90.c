#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048ec90(float *param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  
  fVar1 = *param_1;
  if (*param_1 < _DAT_004af784) {
    fVar1 = -fVar1;
  }
  fVar3 = _DAT_004af784;
  if (param_2 <= fVar1) {
    fVar3 = *param_1;
  }
  bVar2 = param_1[1] < _DAT_004af784;
  *param_1 = fVar3;
  fVar1 = param_1[1];
  if (bVar2) {
    fVar1 = -fVar1;
  }
  fVar3 = _DAT_004af784;
  if (param_2 <= fVar1) {
    fVar3 = param_1[1];
  }
  bVar2 = param_1[2] < _DAT_004af784;
  param_1[1] = fVar3;
  fVar1 = param_1[2];
  if (bVar2) {
    fVar1 = -fVar1;
  }
  if (param_2 <= fVar1) {
    param_1[2] = param_1[2];
    return;
  }
  param_1[2] = _DAT_004af784;
  return;
}

