#include "prototype.h"


void FUN_0047bc40(undefined4 param_1,undefined param_2,undefined param_3,undefined param_4,
                 int param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (0xf < param_5) {
    iVar1 = FUN_00450d20(0x546f7373);
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x6c) = param_6;
    *(undefined4 *)(iVar1 + 0x68) = param_6;
    *(undefined *)(iVar1 + 0x70) = param_2;
    *(undefined4 *)(iVar1 + 100) = param_7;
    *(undefined *)(iVar1 + 0x71) = param_3;
    *(undefined *)(iVar1 + 0x72) = param_4;
    *(char *)(iVar1 + 0x73) = (char)param_5;
    uVar2 = FUN_0042b560(*(undefined4 *)(iVar1 + 0x78));
    *(undefined4 *)(iVar1 + 0x74) = uVar2;
    FUN_0044bb10(iVar1 + 0x20,param_1);
    if (*(int *)(iVar1 + 0x78) != 0) {
      FUN_00431a50(*(int *)(iVar1 + 0x78),2,3,0x10,2);
    }
  }
  return;
}

