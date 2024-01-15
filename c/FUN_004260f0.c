#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004260f0(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  short sVar4;
  short sVar5;
  float local_4;
  
  fVar3 = param_1;
  FUN_004259b0(&param_1,param_1,*(undefined4 *)((int)param_1 + 0x114),
               *(undefined4 *)((int)param_1 + 0x118));
  if ((*(uint *)((int)fVar3 + 0x100) & 0x20000000) != 0) {
    FUN_00425a60(&local_4,fVar3,(float)*(int *)((int)fVar3 + 0xec),
                 *(undefined4 *)((int)fVar3 + 0xe8));
    param_1 = (_DAT_004ac450 - *(float *)((int)fVar3 + 0xe4)) * local_4 +
              param_1 * *(float *)((int)fVar3 + 0xe4);
  }
  iVar1 = *(int *)((int)fVar3 + 0x124);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 8), iVar2 != 0)) {
    if (param_2 == 0) {
      param_2 = (int)*(short *)(iVar2 + 4);
      sVar4 = __ftol();
      *(short *)(iVar1 + 4) = sVar4;
      sVar5 = *(short *)(iVar2 + 4);
      if (sVar5 < sVar4) {
        do {
          *(short *)(iVar1 + 4) = *(short *)(iVar1 + 4) - sVar5;
          sVar5 = *(short *)(iVar2 + 4);
        } while (sVar5 < *(short *)(iVar1 + 4));
      }
      if (*(short *)(iVar1 + 4) < 0) {
        do {
          *(short *)(iVar1 + 4) = *(short *)(iVar1 + 4) + *(short *)(iVar2 + 4);
        } while (*(short *)(iVar1 + 4) < 0);
        return;
      }
    }
    else {
      param_2 = (int)*(short *)(iVar2 + 6);
      sVar4 = __ftol();
      *(short *)(iVar1 + 6) = sVar4;
      sVar5 = *(short *)(iVar2 + 6);
      if (sVar5 < sVar4) {
        do {
          *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) - sVar5;
          sVar5 = *(short *)(iVar2 + 6);
        } while (sVar5 < *(short *)(iVar1 + 6));
      }
      sVar5 = *(short *)(iVar1 + 6);
      while (sVar5 < 0) {
        *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + *(short *)(iVar2 + 6);
        sVar5 = *(short *)(iVar1 + 6);
      }
    }
  }
  return;
}

