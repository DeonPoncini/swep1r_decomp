#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443f10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 != 0) {
    if (DAT_00e98e70 != 0) {
      DAT_00e98e70 = 0;
      FUN_00443c50(param_3,&DAT_00e98e30,param_2,&DAT_00e985a0,&DAT_00e98e10);
    }
    fVar2 = _DAT_00e98e30 + _DAT_00e985b0;
    fVar3 = _DAT_00e98e34 + _DAT_00e985b0;
    fVar4 = _DAT_00e98e38 + _DAT_00e985b0;
    fVar5 = _DAT_00e98e30 - _DAT_00e985b0;
    fVar6 = _DAT_00e98e34 - _DAT_00e985b0;
    fVar7 = _DAT_00e98e38 - _DAT_00e985b0;
    if (((float *)(param_1 + 0x1c) == (float *)0x0) ||
       ((((fVar5 <= *(float *)(param_1 + 0x28) && (*(float *)(param_1 + 0x1c) <= fVar2)) &&
         (fVar6 <= *(float *)(param_1 + 0x2c))) &&
        (((*(float *)(param_1 + 0x20) <= fVar3 && (fVar7 <= *(float *)(param_1 + 0x30))) &&
         (*(float *)(param_1 + 0x24) <= fVar4)))))) {
      iVar8 = FUN_00431780(param_1);
      iVar9 = 0;
      if (0 < iVar8) {
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar9 * 4);
          if (((fVar5 <= *(float *)(iVar1 + 0x14)) && (*(float *)(iVar1 + 8) <= fVar2)) &&
             ((fVar6 <= *(float *)(iVar1 + 0x18) &&
              (((*(float *)(iVar1 + 0xc) <= fVar3 && (fVar7 <= *(float *)(iVar1 + 0x1c))) &&
               (*(float *)(iVar1 + 0x10) <= fVar4)))))) {
            FUN_004439f0(iVar1);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      if (DAT_00e98250 != 0) {
        FUN_00443e70(param_3);
        DAT_00e98250 = 0;
      }
    }
  }
  return;
}

