#include "prototype.h"


undefined4 FUN_00487e00(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0052d43c != 0) {
    FUN_00487e80();
  }
  if (DAT_0052d444 < param_1) {
    return 0;
  }
  DAT_00529514 = param_1;
  DAT_0052d448 = &DAT_0052a9f8 + param_1 * 0xa9;
  uVar1 = FUN_0048c780();
  iVar2 = FUN_00488b00(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_0049f8c0(&DAT_005295f8,DAT_0052d44c,0x50,&LAB_00488850);
  DAT_0052d43c = 1;
  return 1;
}

