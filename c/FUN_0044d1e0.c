#include "prototype.h"


void FUN_0044d1e0(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  
  iVar5 = 3;
  pfVar2 = (float *)(param_1 + 0x24);
  pfVar3 = (float *)(param_2 + 0x18);
  pfVar4 = param_3;
  do {
    iVar5 = iVar5 + -1;
    fVar1 = -(pfVar3[-6] * *param_3) + *pfVar2;
    *pfVar2 = fVar1;
    fVar1 = -(pfVar3[-3] * param_3[1]) + fVar1;
    *pfVar2 = fVar1;
    fVar1 = -(param_3[2] * *pfVar3) + fVar1;
    *pfVar2 = fVar1;
    *pfVar2 = *pfVar4 + fVar1;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (iVar5 != 0);
  return;
}

