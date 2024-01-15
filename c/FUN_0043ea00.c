#include "prototype.h"


void FUN_0043ea00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    iVar1 = param_2 * 0x50;
    (&DAT_00e35a80)[iVar1] = 0;
    (&DAT_00e35a98)[param_2 * 0x14] = 400;
    *(undefined *)(&DAT_00e35aa0 + param_2 * 0x14) = 1;
    (&DAT_00e35a83)[iVar1] = 0;
    (&DAT_00e35a94)[param_2 * 0x14] = 0x22e01;
    (&DAT_00e35a9c)[param_2 * 0x14] = 0;
    (&DAT_00e35a81)[iVar1] = 1;
    (&DAT_00e35a84)[iVar1] = 0;
    (&DAT_00e35a82)[iVar1] = (char)param_2;
    *(undefined4 *)(&DAT_00e35a8a + param_2 * 0x28) = 0;
    *(undefined4 *)(&DAT_00e35a8e + param_2 * 0x28) = 0;
    (&DAT_00e35a85)[iVar1] = 1;
    (&DAT_00e35a86)[iVar1] = 1;
    (&DAT_00e35a87)[iVar1] = 1;
    (&DAT_00e35a88)[iVar1] = 0;
    iVar2 = 0;
    do {
      *(undefined *)(iVar2 + 0xe35aa1 + iVar1) = 0;
      (&DAT_00e35aa8)[iVar1 + iVar2] = 0xff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 7);
    puVar3 = (undefined4 *)(&DAT_00e35a60 + iVar1);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  else if (param_1 == 1) {
    iVar2 = param_2 * 0x50;
    (&DAT_00e364d4)[iVar2] = 0;
    (&DAT_00e364d6)[iVar2] = (char)param_2;
    *(undefined4 *)(&DAT_00e364ec + iVar2) = 400;
    (&DAT_00e364f4)[iVar2] = 1;
    (&DAT_00e364d7)[iVar2] = 0;
    *(undefined4 *)(&DAT_00e364e8 + iVar2) = 0x22e01;
    (&DAT_00e364f0)[param_2 * 0x14] = 0;
    (&DAT_00e364d5)[iVar2] = 1;
    iVar1 = 0;
    (&DAT_00e364d8)[iVar2] = 0;
    *(undefined4 *)(&DAT_00e364de + iVar2) = 0;
    *(undefined4 *)(&DAT_00e364e2 + iVar2) = 0;
    (&DAT_00e364d9)[iVar2] = 1;
    (&DAT_00e364da)[iVar2] = 1;
    (&DAT_00e364db)[iVar2] = 1;
    (&DAT_00e364dc)[iVar2] = 0;
    do {
      (&DAT_00e364f5)[iVar2 + iVar1] = 0;
      (&DAT_00e364fc)[iVar2 + iVar1] = 0xff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 7);
    puVar3 = &DAT_00e364b4 + param_2 * 0x14;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    (&DAT_00e36503)[iVar2] = 0;
    return;
  }
  return;
}

