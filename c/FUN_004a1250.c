#include "prototype.h"


uint FUN_004a1250(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  short *psVar5;
  
  iVar3 = FUN_004a3cc0();
  if (param_1 == (short *)0x0) {
    param_1 = *(short **)(iVar3 + 0x1c);
  }
  sVar4 = *param_1;
  if (sVar4 != 0) {
    sVar1 = *param_2;
    psVar5 = param_2;
    do {
      while ((sVar1 != 0 && (sVar1 != sVar4))) {
        sVar1 = psVar5[1];
        psVar5 = psVar5 + 1;
      }
      if (*psVar5 == 0) break;
      sVar4 = param_1[1];
      param_1 = param_1 + 1;
      sVar1 = *param_2;
      psVar5 = param_2;
    } while (sVar4 != 0);
  }
  sVar4 = *param_1;
  psVar5 = param_1;
  if (sVar4 != 0) {
    sVar1 = *param_2;
    psVar2 = param_2;
    do {
      while ((sVar1 != 0 && (sVar1 != sVar4))) {
        sVar1 = psVar2[1];
        psVar2 = psVar2 + 1;
      }
      if (*psVar2 != 0) {
        *psVar5 = 0;
        psVar5 = psVar5 + 1;
        break;
      }
      sVar4 = psVar5[1];
      psVar5 = psVar5 + 1;
      sVar1 = *param_2;
      psVar2 = param_2;
    } while (sVar4 != 0);
  }
  *(short **)(iVar3 + 0x1c) = psVar5;
  return -(uint)(param_1 != psVar5) & (uint)param_1;
}

