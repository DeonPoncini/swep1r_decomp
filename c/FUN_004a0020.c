#include "prototype.h"


uint FUN_004a0020(undefined4 *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  piVar1 = param_4;
  uVar6 = param_3 * param_2;
  if (uVar6 == 0) {
    return 0;
  }
  uVar7 = uVar6;
  if ((param_4[3] & 0x10cU) == 0) {
    param_4 = (int *)0x1000;
    uVar5 = 0x1000;
  }
  else {
    uVar5 = param_4[6];
    param_4 = (int *)uVar5;
  }
  do {
    if (((piVar1[3] & 0x10cU) == 0) || (uVar2 = piVar1[1], uVar2 == 0)) {
      if (uVar7 < uVar5) {
        iVar4 = FUN_004a40f0(piVar1);
        if (iVar4 == -1) {
          return (uVar6 - uVar7) / param_2;
        }
        *(char *)param_1 = (char)iVar4;
        uVar5 = piVar1[6];
        param_1 = (undefined4 *)((int)param_1 + 1);
        iVar4 = -1;
        param_4 = (int *)uVar5;
      }
      else {
        uVar2 = uVar7;
        if (uVar5 != 0) {
          uVar2 = uVar7 - uVar7 % uVar5;
        }
        iVar3 = FUN_004a41e0(piVar1[4],param_1,uVar2);
        if (iVar3 == 0) {
          piVar1[3] = piVar1[3] | 0x10;
          return (uVar6 - uVar7) / param_2;
        }
        if (iVar3 == -1) {
          piVar1[3] = piVar1[3] | 0x20;
          return (uVar6 - uVar7) / param_2;
        }
        iVar4 = -iVar3;
        param_1 = (undefined4 *)((int)param_1 + iVar3);
      }
    }
    else {
      if (uVar7 < uVar2) {
        uVar2 = uVar7;
      }
      iVar4 = -uVar2;
      puVar8 = (undefined4 *)*piVar1;
      puVar9 = param_1;
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined *)puVar9 = *(undefined *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + uVar2);
      piVar1[1] = piVar1[1] - uVar2;
      *piVar1 = *piVar1 + uVar2;
      uVar5 = (uint)param_4;
    }
    uVar7 = uVar7 + iVar4;
    if (uVar7 == 0) {
      return param_3;
    }
  } while( true );
}

