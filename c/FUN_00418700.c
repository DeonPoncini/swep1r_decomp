#include "prototype.h"


undefined4 FUN_00418700(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined auStack_c [4];
  uint local_8;
  undefined4 uStack_4;
  
  puVar4 = param_2;
  if (param_4 < 1) {
    return 0;
  }
  do {
    iVar1 = (**(code **)(DAT_00ecc420 + 0x38))(param_1,&local_8,1);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    if ((local_8 & 0x80) == 0) {
      iVar1 = (local_8 & 0x7f) + 1;
      param_4 = param_4 - iVar1;
      iVar1 = iVar1 * param_3;
      (**(code **)(DAT_00ecc420 + 0x38))(param_1,puVar4,iVar1);
      puVar4 = (undefined4 *)((int)puVar4 + iVar1);
    }
    else {
      uVar2 = (local_8 & 0x7f) + 1;
      param_4 = param_4 - uVar2;
      switch(param_3) {
      case 1:
        (**(code **)(DAT_00ecc420 + 0x38))(param_1,auStack_c,1);
        puVar5 = puVar4;
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = CONCAT22(CONCAT11(auStack_c[0],auStack_c[0]),CONCAT11(auStack_c[0],auStack_c[0])
                            );
          puVar5 = puVar5 + 1;
        }
        puVar4 = (undefined4 *)((int)puVar4 + uVar2);
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined *)puVar5 = auStack_c[0];
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        break;
      case 2:
        (**(code **)(DAT_00ecc420 + 0x38))(param_1,&param_2,2);
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined2 *)puVar4 = param_2._0_2_;
          puVar4 = (undefined4 *)((int)puVar4 + 2);
        }
        break;
      case 3:
        (**(code **)(DAT_00ecc420 + 0x38))(param_1,auStack_c,1);
        (**(code **)(DAT_00ecc420 + 0x38))(param_1,&param_2,2);
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined *)puVar4 = auStack_c[0];
          *(undefined2 *)((int)puVar4 + 1) = param_2._0_2_;
          puVar4 = (undefined4 *)((int)puVar4 + 3);
        }
        break;
      case 4:
        (**(code **)(DAT_00ecc420 + 0x38))(param_1,&uStack_4,4);
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = uStack_4;
          puVar4 = puVar4 + 1;
        }
      }
    }
  } while (0 < param_4);
  return 0;
}

