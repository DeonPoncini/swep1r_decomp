#include "prototype.h"


void FUN_00420d10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_00414d90(0,0x30d42);
  for (iVar1 = *(int *)(iVar3 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = *(int *)(iVar1 + 0x56c);
    if ((&DAT_00ea04e0)[iVar2] == 0) {
      *(undefined4 *)(iVar1 + 0x560) = (&DAT_00ea05c4)[iVar2 * 4];
      *(undefined4 *)(iVar1 + 0x564) = (&DAT_00ea05c8)[iVar2 * 4];
      *(undefined4 *)(iVar1 + 0x568) = (&DAT_00ea05cc)[iVar2 * 4];
      *(int *)(iVar1 + 0x528) = (&DAT_00ea05c0)[iVar2 * 4] + -1;
    }
    else {
      *(undefined4 *)(iVar1 + 0x528) = 0x29a;
    }
  }
  FUN_0041b4d0(iVar3);
  return;
}

