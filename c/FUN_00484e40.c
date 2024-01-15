#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484e40(int *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = _DAT_004ae198;
  if ((_DAT_004ae198 <= *param_2) && (fVar2 = _DAT_004ae19c, *param_2 <= _DAT_004ae19c)) {
    fVar2 = *param_2;
  }
  bVar1 = _DAT_004ae1a0 <= param_2[1];
  *param_2 = fVar2;
  fVar3 = _DAT_004ae1a0;
  if ((bVar1) && (fVar3 = _DAT_004ae194, param_2[1] <= _DAT_004ae194)) {
    fVar3 = param_2[1];
  }
  bVar1 = _DAT_004ae198 <= param_2[2];
  param_2[1] = fVar3;
  fVar4 = _DAT_004ae198;
  if ((bVar1) && (fVar4 = _DAT_004ae19c, param_2[2] <= _DAT_004ae19c)) {
    fVar4 = param_2[2];
  }
  param_2[2] = fVar4;
  (**(code **)(*param_1 + 0x80))(param_1,fVar2,fVar4,-fVar3);
  return;
}

