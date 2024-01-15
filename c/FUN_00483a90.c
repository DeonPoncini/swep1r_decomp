#include "prototype.h"


void FUN_00483a90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (DAT_0050ccf0 != 0) {
    if (param_1 == 1) {
      if (DAT_0050ccf8 != 0) {
        FUN_00431a50(DAT_0050ccf8,2,0xfffffffc,0x10,3);
      }
      if (DAT_0050cd00 != 0) {
        FUN_00431a50(DAT_0050cd00,2,0xfffffffc,0x10,3);
      }
      if (DAT_0050ccfc != 0) {
        FUN_00431a50(DAT_0050ccfc,2,3,0x10,2);
      }
      if (DAT_0050cd04 == 0) goto LAB_00483b7a;
      uVar2 = 2;
      uVar1 = 3;
    }
    else {
      if (DAT_0050ccf8 != 0) {
        FUN_00431a50(DAT_0050ccf8,2,3,0x10,2);
      }
      if (DAT_0050cd00 != 0) {
        FUN_00431a50(DAT_0050cd00,2,3,0x10,2);
      }
      if (DAT_0050ccfc != 0) {
        FUN_00431a50(DAT_0050ccfc,2,0xfffffffc,0x10,3);
      }
      if (DAT_0050cd04 == 0) goto LAB_00483b7a;
      uVar2 = 3;
      uVar1 = 0xfffffffc;
    }
    FUN_00431a50(DAT_0050cd04,2,uVar1,0x10,uVar2);
  }
LAB_00483b7a:
  FUN_0044e000(&DAT_00e229b0);
  FUN_0044db70(&DAT_00e229b0,&DAT_00dfb040 + param_1 * 0x16c);
  return;
}

