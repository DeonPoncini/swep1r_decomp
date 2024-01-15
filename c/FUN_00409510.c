#include "prototype.h"


void FUN_00409510(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0x270;
  puVar3 = &DAT_004b4348 + param_1 * 4;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined4 *)(DAT_00ec85ec + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x27c);
  iVar2 = 0x18;
  puVar3 = &DAT_004b4418 + param_1 * 4;
  do {
    uVar1 = *puVar3;
    iVar2 = iVar2 + 4;
    puVar3 = puVar3 + 1;
    *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x70) + -4 + iVar2) = uVar1;
  } while (iVar2 < 0x28);
  *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x70) + 8) = 1;
  FUN_004903a0(DAT_00df7f2c,&DAT_004b4688 + param_1 * 4);
  if (1 < param_2) {
    iVar2 = 0x27c;
    puVar3 = (undefined4 *)(&DAT_004b44e8 + param_1 * 0x10);
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      *(undefined4 *)(DAT_00ec85ec + iVar2) = uVar1;
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x288);
    iVar2 = 0x18;
    puVar3 = (undefined4 *)(&DAT_004b45b8 + param_1 * 0x10);
    do {
      uVar1 = *puVar3;
      iVar2 = iVar2 + 4;
      puVar3 = puVar3 + 1;
      *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x74) + -4 + iVar2) = uVar1;
    } while (iVar2 < 0x28);
    *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x74) + 8) = 1;
    return;
  }
  *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x74) + 8) = 0;
  return;
}

