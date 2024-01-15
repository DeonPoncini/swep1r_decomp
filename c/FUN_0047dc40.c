#include "prototype.h"


uint __thiscall FUN_0047dc40(int param_1_00,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int local_4;
  
  iVar1 = param_1;
  uVar2 = FUN_00431770(param_1);
  iVar3 = DAT_0050cb50;
  iVar7 = 0;
  param_1 = 0;
  if (uVar2 == 0x3064) {
    if ((DAT_0050cb40 != 0) && (DAT_0050cb50 == 0)) {
      param_1 = FUN_0047da10(iVar1);
    }
    iVar3 = FUN_00431780(iVar1);
    iVar7 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = FUN_00431850(iVar1,iVar7);
        if (iVar4 != 0) {
          iVar4 = FUN_004318b0(iVar4);
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x3c) != 0)) {
            uVar5 = FUN_00431b00(iVar1,2);
            FUN_0047d380(*(undefined4 *)(iVar4 + 0x3c),uVar5);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
      return param_1;
    }
  }
  else if ((uVar2 & 0x4000) != 0) {
    local_4 = param_1_00;
    if ((uVar2 & 0x8000) != 0) {
      DAT_0050cb50 = 1;
      local_4 = iVar3;
    }
    iVar3 = FUN_00431780(iVar1);
    if (0 < iVar3) {
      do {
        iVar4 = *(int *)(*(int *)(iVar1 + 0x18) + iVar7 * 4);
        if (iVar4 != 0) {
          uVar6 = FUN_0047dc40(iVar4);
          param_1 = param_1 | uVar6;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
    if ((DAT_0050cb40 != 0) && (DAT_0050cb50 == 0)) {
      FUN_00431a50(iVar1,0,0xff,0x10,3);
      FUN_00431a50(iVar1,0,param_1,0x10,2);
    }
    if ((uVar2 & 0x8000) != 0) {
      DAT_0050cb50 = local_4;
    }
  }
  return param_1;
}

