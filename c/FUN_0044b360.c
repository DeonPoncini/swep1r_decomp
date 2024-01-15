#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b360(int *param_1,float param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 float param_6,float param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    while (iVar2 != 0) {
      FUN_004267a0(*param_1,param_3,param_4);
      if (param_5 == 0) {
        FUN_00426810(*param_1,0x4000000);
        iVar2 = *param_1;
        uVar3 = 0x2000000;
LAB_0044b3fd:
        FUN_00426820(iVar2,uVar3);
      }
      else {
        FUN_00426810(*param_1,0x2000010);
        FUN_00426820(*param_1,0x4000000);
        uVar3 = 0x40;
        iVar2 = *param_1;
        if (param_7 <= _DAT_004acc38) goto LAB_0044b3fd;
        FUN_00426810();
        FUN_00426900(*param_1,param_7);
      }
      if (_DAT_004acc38 <= param_2) {
        if (param_6 <= _DAT_004acc38) {
          FUN_00426840(*param_1,param_2);
        }
        else {
          FUN_00426890(*param_1,param_2,param_6);
        }
      }
      piVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      iVar2 = *piVar1;
    }
  }
  return;
}

