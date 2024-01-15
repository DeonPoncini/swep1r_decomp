#include "prototype.h"


void FUN_004a3d40(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_004a3dd0();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_004d4238;
  do {
    if (param_1 == *puVar1) {
      puVar2 = (undefined4 *)FUN_004a3dc0();
      *puVar2 = (&DAT_004d423c)[iVar3 * 2];
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar1 < &DAT_004d43a0);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    puVar2 = (undefined4 *)FUN_004a3dc0();
    *puVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    puVar2 = (undefined4 *)FUN_004a3dc0();
    *puVar2 = 8;
    return;
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 0x16;
  return;
}

