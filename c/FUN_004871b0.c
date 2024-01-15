#include "prototype.h"


undefined4 FUN_004871b0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  DAT_00510250 = 0;
  puVar3 = &DAT_0050fee0;
  for (iVar2 = 0xdc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (DAT_0051386c != 0) {
    uVar1 = (**(code **)(*DAT_00510254 + 0x30))(DAT_00510254,0,&LAB_004874a0,0,0);
    return uVar1;
  }
  if (param_1 < DAT_00513870) {
    uVar1 = (**(code **)(*DAT_00510254 + 0x30))
                      (DAT_00510254,&DAT_005117e8 + param_1 * 0x41,&LAB_004874a0,0,0x80);
    return uVar1;
  }
  return 0x80004005;
}

