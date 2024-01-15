#include "prototype.h"


bool FUN_00404590(int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_004b2910 == 0) {
    return false;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return false;
  }
  (**(code **)(DAT_00ecc420 + 0x24))(*(undefined4 *)(param_1 + 0x150));
  puVar1 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(param_2);
  *(undefined4 **)(param_1 + 0x150) = puVar1;
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar1 = *(undefined *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(uint *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x150);
  iVar2 = (**(code **)(***(int ***)(param_1 + 4) + 0x18))
                    (**(int ***)(param_1 + 4),param_1 + 8,
                     CONCAT22((short)((-(uint)(param_4 != 0) & 0xe0000000) + 0x40000000 >> 0x10),
                              0x100));
  return -1 < iVar2;
}

