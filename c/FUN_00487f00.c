#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00487f00(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 != 0) && (DAT_0052d44c <= param_1)) {
    return 0;
  }
  if (DAT_0052d440 != 0) {
    FUN_00488030();
  }
  if (param_2 == 0) {
    DAT_0052d450 = &DAT_00529518;
    uVar1 = FUN_0048c780(&DAT_00529518);
    iVar2 = FUN_00489270(uVar1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    DAT_0052d450 = &DAT_005295f8 + param_1 * 0x50;
    uVar1 = FUN_0048c780(DAT_0052d450);
    iVar2 = FUN_00489790(uVar1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  DAT_00529510 = CreateFontA((-(uint)(*(uint *)(DAT_0052d450 + 4) < 0x280) & 0xfffffff4) + 0x18,0,0,
                             0,400,0,0,0,0,0,0,0,2,s_Arial_004c9050);
  _DAT_00529568 = 0;
  _DAT_0052956c = 0;
  _DAT_00529570 = DAT_00ec8dac;
  _DAT_00529574 = DAT_00ec8db0;
  DAT_0052d440 = 1;
  DAT_0052d458 = param_2;
  FUN_00488410(&DAT_00ec8da0,0,0);
  FUN_00489ab0();
  if (param_2 != 0) {
    FUN_00488410(&DAT_00ec8da0,0,0);
  }
  return 1;
}

