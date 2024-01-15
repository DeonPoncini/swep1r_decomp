#include "prototype.h"


undefined4
FUN_00490e10(int param_1,int param_2,int param_3,int param_4,int param_5,undefined2 param_6,
            uint param_7)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_18;
  int local_14;
  uint local_10;
  
  iVar3 = FUN_00494980(param_1,&param_2,&param_3,&param_4,&param_5);
  if (iVar3 != 0) {
    piVar2 = *(int **)(param_1 + 4);
    if (piVar2[9] == 8) {
      local_18 = param_5 - param_3;
      local_14 = param_4 - param_2;
      local_10 = 0x80000000;
      iVar3 = ((local_14 < 1) - 1 & 2) - 1;
      iVar4 = ((local_18 < 1) - 1 & 2) - 1;
      if (iVar3 < 0) {
        local_18 = -local_18;
      }
      if (0 < iVar4) {
        local_14 = -local_14;
      }
      if ((param_7 & 0x80000000) != 0) {
        *(undefined *)(piVar2[6] * param_3 + piVar2[0x16] + param_2) = (undefined)param_6;
      }
      uVar7 = 0;
      while ((param_2 != param_4 || (param_3 != param_5))) {
        local_10 = local_10 >> 1;
        if (local_10 == 0) {
          local_10 = 0x80000000;
        }
        uVar1 = uVar7 + local_18;
        uVar7 = uVar7 + local_14;
        if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
            (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
          param_2 = param_2 + iVar3;
          uVar7 = uVar1;
        }
        else {
          param_3 = param_3 + iVar4;
        }
        if ((param_7 & local_10) != 0) {
          *(undefined *)
           (*(int *)(*(int *)(param_1 + 4) + 0x18) * param_3 +
            *(int *)(*(int *)(param_1 + 4) + 0x58) + param_2) = (undefined)param_6;
        }
      }
    }
    else {
      iVar3 = *piVar2;
      if (iVar3 == 1) {
        FUN_00488370(piVar2);
      }
      local_18 = param_5 - param_3;
      local_14 = param_4 - param_2;
      local_10 = 0x80000000;
      iVar4 = ((local_14 < 1) - 1 & 2) - 1;
      iVar5 = ((local_18 < 1) - 1 & 2) - 1;
      if (iVar4 < 0) {
        local_18 = -local_18;
      }
      if (0 < iVar5) {
        local_14 = -local_14;
      }
      if ((param_7 & 0x80000000) != 0) {
        *(undefined2 *)
         (*(int *)(*(int *)(param_1 + 4) + 0x58) +
         (*(int *)(*(int *)(param_1 + 4) + 0x1c) * param_3 + param_2) * 2) = param_6;
      }
      uVar7 = 0;
      iVar6 = param_2;
      iVar8 = param_3;
      while ((iVar6 != param_4 || (iVar8 != param_5))) {
        local_10 = local_10 >> 1;
        if (local_10 == 0) {
          local_10 = 0x80000000;
        }
        uVar1 = uVar7 + local_18;
        uVar7 = uVar7 + local_14;
        if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
            (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
          iVar6 = iVar6 + iVar4;
          uVar7 = uVar1;
        }
        else {
          iVar8 = iVar8 + iVar5;
        }
        if ((param_7 & local_10) != 0) {
          *(undefined2 *)
           (*(int *)(*(int *)(param_1 + 4) + 0x58) +
           (*(int *)(*(int *)(param_1 + 4) + 0x1c) * iVar8 + iVar6) * 2) = param_6;
        }
      }
      if (iVar3 == 1) {
        FUN_004883c0(*(undefined4 *)(param_1 + 4));
      }
    }
    return 1;
  }
  return 0;
}

