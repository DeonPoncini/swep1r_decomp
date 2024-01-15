#include "prototype.h"


undefined4 FUN_00421b20(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_50 [20];
  
  puVar2 = &DAT_00e364b4;
  puVar3 = local_50;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0044e320(&DAT_00e364a0);
  if (param_1 == 0) {
    puVar2 = local_50;
    puVar3 = &DAT_00e364b4;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return 1;
  }
  DAT_004eb3d0 = DAT_004d55cc;
  DAT_004b6c90 = 0xffffffff;
  return 1;
}

