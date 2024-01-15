#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427d90(float *param_1,int param_2)

{
  int *piVar1;
  float *pfVar2;
  undefined4 uVar3;
  int *piVar4;
  float *pfVar5;
  
  if ((DAT_004b6d2c != 0) && (DAT_004eb450 != 0)) {
    FUN_00449e50();
    FUN_00422da0();
    FUN_00449ea0();
    if (-1 < DAT_004b9008) {
      piVar4 = &DAT_004b9008;
      do {
        if (-1 < *piVar4) {
          uVar3 = FUN_00422a90(*piVar4);
          FUN_00422e30(uVar3,0,0);
        }
        piVar1 = piVar4 + 1;
        piVar4 = piVar4 + 1;
      } while (-1 < *piVar1);
    }
    if (param_2 == 3) {
      if (param_1 == (float *)0x1) {
        pfVar5 = (float *)&DAT_004b8928;
      }
      else {
        pfVar5 = param_1;
        if (param_1 == (float *)0x4) {
          pfVar5 = (float *)&DAT_004b8cc8;
        }
      }
    }
    else {
      pfVar5 = (float *)(&PTR_DAT_004b8fa8)[(int)param_1 * 3 + param_2];
    }
    if (_DAT_004ac47c <= *pfVar5) {
      do {
        if (-1 < *(short *)(pfVar5 + 2)) {
          uVar3 = FUN_00422a90((int)*(short *)(pfVar5 + 2));
          FUN_00422e30(uVar3,0,0);
        }
        pfVar2 = pfVar5 + 3;
        pfVar5 = pfVar5 + 3;
      } while (_DAT_004ac47c <= *pfVar2);
    }
    if (-1 < *(short *)(&DAT_004b8780 + (int)param_1 * 2)) {
      uVar3 = FUN_00422a90((int)*(short *)(&DAT_004b8780 + (int)param_1 * 2));
      FUN_00422e30(uVar3,0,0);
    }
    FUN_00427f10();
  }
  return;
}

