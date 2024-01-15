#include "prototype.h"


void FUN_004172f0(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  uint uVar4;
  undefined uVar5;
  undefined3 uVar6;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  uVar6 = (undefined3)(uVar4 >> 8);
  if ((uVar4 & 2) == 0) {
    if ((uVar4 & 0x20) != 0) {
      FUN_00414be0(param_1,*(undefined *)(param_1 + 0x4d0),
                   CONCAT31(uVar6,*(undefined *)(param_1 + 0x4d1)),*(undefined *)(param_1 + 0x4d2),
                   *(undefined *)(param_1 + 0x4d3));
      FUN_00418cb0(param_1,1);
      return;
    }
    if ((uVar4 & 0x10) != 0) {
      FUN_00414be0(param_1,*(undefined *)(param_1 + 0x4c8),*(undefined *)(param_1 + 0x4c9),
                   CONCAT31(uVar6,*(undefined *)(param_1 + 0x4ca)),*(undefined *)(param_1 + 0x4cb));
      FUN_00418cb0(param_1,1);
      return;
    }
    uVar1 = *(undefined *)(param_1 + 0x4c7);
    uVar2 = *(undefined *)(param_1 + 0x4c6);
    uVar3 = *(undefined *)(param_1 + 0x4c5);
    uVar5 = *(undefined *)(param_1 + 0x4c4);
  }
  else {
    uVar1 = *(undefined *)(param_1 + 0x4cf);
    uVar2 = *(undefined *)(param_1 + 0x4ce);
    uVar3 = *(undefined *)(param_1 + 0x4cd);
    uVar5 = *(undefined *)(param_1 + 0x4cc);
  }
  FUN_00414be0(param_1,CONCAT31(uVar6,uVar5),uVar3,uVar2,CONCAT31(uVar6,uVar1));
  FUN_00418cb0(param_1,0);
  return;
}

