#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481c30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6,float param_7,undefined4 param_8)

{
  int iVar1;
  char *_Str1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  int local_8;
  undefined local_4 [4];
  
  if (DAT_0050ccc8 == 0) {
    local_8 = 0;
    puVar12 = &DAT_0050cbc8;
    do {
      FUN_0042f380((float)local_8 * _DAT_004ae010 * _DAT_004ae014,puVar12,local_4);
      puVar12 = puVar12 + 4;
      local_8 = local_8 + 1;
    } while ((int)puVar12 < 0x50ccc8);
    DAT_0050ccc8 = 1;
  }
  uVar4 = FUN_00431770(param_1);
  if ((uVar4 & 0x4000) == 0) {
    if (uVar4 == 0x3064) {
      _Str1 = *(char **)(**(int **)(param_1 + 0x18) + 0x30);
      iVar5 = _strncmp(_Str1,(char *)&PTR_DAT_004c3c14,3);
      if (iVar5 == 0) {
        puVar2 = *(undefined4 **)(_Str1 + 0x4c);
        puVar6 = *(undefined4 **)(_Str1 + 0x58);
        fVar3 = _DAT_004ae018;
        if (param_6 < param_7) {
          fVar3 = _DAT_004ae01c - (param_6 / param_7) * (param_6 / param_7);
        }
        if (fVar3 < _DAT_004ae020) {
          puVar6 = puVar2 + 2;
          puVar8 = &DAT_004c7c34;
          do {
            puVar7 = puVar8 + 3;
            puVar6[-2] = puVar8[-1];
            puVar6[-1] = *puVar8;
            *puVar6 = *(undefined4 *)(((int)&DAT_004c7c30 - (int)puVar2) + (int)puVar6);
            puVar6 = puVar6 + 3;
            puVar8 = puVar7;
          } while ((int)puVar7 < 0x4c7c7c);
          return;
        }
        *(undefined4 *)(_Str1 + 0x74) = 0x1b;
        *(undefined4 *)(_Str1 + 0x7c) = 0x30;
        iVar13 = (int)&DAT_004c7c78 - (int)puVar6;
        iVar5 = (int)&DAT_004c7c30 - (int)puVar2;
        param_6 = 1.121039e-44;
        puVar8 = puVar2;
        do {
          iVar11 = 3;
          do {
            iVar9 = 3;
            do {
              *puVar8 = *(undefined4 *)(iVar5 + (int)puVar8);
              puVar8 = puVar8 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            iVar9 = 4;
            do {
              *puVar6 = *(undefined4 *)(iVar13 + (int)puVar6);
              puVar6 = puVar6 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          iVar5 = iVar5 + -0x24;
          iVar13 = iVar13 + -0x30;
          param_6 = (float)((int)param_6 + -1);
        } while (param_6 != 0.0);
        param_6 = 4.203895e-45;
        puVar7 = puVar6;
        puVar10 = puVar8;
        do {
          iVar5 = 3;
          do {
            *puVar10 = *(undefined4 *)(((int)&DAT_004c7c54 - (int)puVar8) + (int)puVar10);
            puVar10 = puVar10 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          iVar5 = 4;
          do {
            *puVar7 = *(undefined4 *)(((int)&DAT_004c7ca8 - (int)puVar6) + (int)puVar7);
            puVar7 = puVar7 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          param_6 = (float)((int)param_6 + -1);
        } while (param_6 != 0.0);
        puVar6 = puVar2 + 9;
        local_8 = 1;
        do {
          iVar5 = __ftol();
          __ftol();
          iVar13 = __ftol();
          iVar11 = 3;
          puVar8 = puVar6;
          do {
            puVar8[1] = (float)iVar5;
            *puVar8 = *puVar8;
            puVar6 = puVar8 + 3;
            iVar11 = iVar11 + -1;
            puVar8[2] = (float)puVar8[2] + (float)iVar13;
            puVar8 = puVar6;
          } while (iVar11 != 0);
          local_8 = local_8 + 1;
        } while (local_8 < 8);
        iVar5 = *(int *)(_Str1 + 0x6c);
        iVar13 = 1;
        do {
          iVar11 = iVar13 + 4;
          iVar9 = iVar13 + 1;
          FUN_00481be0(puVar2,iVar5,iVar13 + -1,iVar9,iVar11);
          FUN_00481be0(puVar2,iVar5 + 0x48,iVar11,iVar13 + 2,iVar13 + -1);
          iVar1 = iVar13 + 3;
          FUN_00481be0(puVar2,iVar5 + 0x90,iVar13 + 2,iVar1,iVar13);
          FUN_00481be0(puVar2,iVar5 + 0xd8,iVar13,iVar13 + -1,iVar13 + 2);
          iVar14 = iVar5 + 0x168;
          FUN_00481be0(puVar2,iVar5 + 0x120,iVar9,iVar13,iVar1);
          iVar5 = iVar5 + 0x1b0;
          FUN_00481be0(puVar2,iVar14,iVar1,iVar11,iVar9);
          iVar13 = iVar1;
        } while (iVar1 < 0x19);
      }
    }
  }
  else {
    iVar5 = FUN_00431780(param_1);
    iVar13 = 0;
    if (0 < iVar5) {
      do {
        FUN_00481c30(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar13 * 4),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8);
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar5);
      return;
    }
  }
  return;
}

