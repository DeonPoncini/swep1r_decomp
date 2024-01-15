#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004663e0(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined *puVar8;
  int *piVar9;
  int **ppiVar10;
  int iVar11;
  undefined4 *puVar12;
  int **ppiVar13;
  int *local_1ec;
  int local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0 [19];
  undefined auStack_194 [4];
  int local_190 [20];
  int aiStack_140 [20];
  undefined4 local_f0 [20];
  int aiStack_a0 [20];
  int local_50 [20];
  
  DAT_00e27240 = FUN_00445b40();
  FUN_00447300(0x54657374,*(undefined4 *)(param_1 + 0x1bc));
  FUN_00450db0(0x54657374);
  iVar3 = FUN_00445b40();
  DAT_00e27240 = iVar3 - DAT_00e27240;
  iVar3 = 0;
  puVar12 = &DAT_00e28860;
  for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  iVar7 = 0;
  do {
    (&DAT_00e27840)[iVar3] = 0;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x50);
  iVar3 = *(int *)(param_1 + 0x1bc);
  local_1e4 = 0;
  if (0 < iVar3) {
    ppiVar13 = (int **)(param_2 + 0x18);
    do {
      iVar4 = 0;
      if (0 < iVar3) {
        ppiVar10 = (int **)(param_2 + 0x18);
        do {
          if ((iVar7 != iVar4) && (**ppiVar13 == **ppiVar10)) {
            local_1e4 = 1;
          }
          iVar4 = iVar4 + 1;
          ppiVar10 = ppiVar10 + 0x22;
        } while (iVar4 < iVar3);
      }
      iVar7 = iVar7 + 1;
      ppiVar13 = ppiVar13 + 0x22;
    } while (iVar7 < iVar3);
  }
  _DAT_0050ca1c = local_1e4;
  local_1e8 = 0;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    local_1ec = &DAT_00e28860;
    puVar12 = local_f0;
    piVar6 = (int *)(param_2 + 0x18);
    do {
      iVar3 = FUN_00445b40();
      *local_1ec = iVar3;
      iVar3 = FUN_00421360(*(undefined4 *)(*piVar6 + 0x14));
      (&DAT_00e27840)[local_1e8 * 4] = *(undefined *)(iVar3 + 2);
      iVar3 = FUN_00421360(*(undefined4 *)(*piVar6 + 0x14));
      (&DAT_00e27841)[local_1e8 * 4] = *(undefined *)(iVar3 + 3);
      iVar7 = FUN_00421360(*(undefined4 *)(*piVar6 + 0x14));
      iVar3 = DAT_0050ca18;
      (&DAT_00e27842)[local_1e8 * 4] = *(undefined *)(iVar7 + 4);
      (&DAT_00e27843)[local_1e8 * 4] = 0;
      cVar2 = '\x03';
      if (piVar6[-5] == 0x4c6f636c) {
        cVar2 = (1 < iVar3) + '\x01';
      }
      if ((*(byte *)(param_1 + 8) & 0x20) == 0) {
        if (iVar3 == 0) {
          cVar2 = '\x03';
        }
      }
      else {
        cVar2 = '\x01';
      }
      if ((cVar2 == '\x02') || (cVar2 == '\x01')) {
        iVar3 = *piVar6;
        local_1e0[local_1e8] = 0;
        *puVar12 = 0;
        iVar3 = FUN_00448780(*(undefined4 *)(iVar3 + 4));
        aiStack_140[local_1e8] = iVar3;
        if (iVar3 == 0) {
          *(int *)(param_1 + 0x1bc) = local_1e8;
          DAT_0050ca2c = local_1e8;
        }
        else if ((cVar2 == '\x01') && (-1 < *(int *)(*piVar6 + 8))) {
          iVar7 = FUN_00448780(*(int *)(*piVar6 + 8));
          aiStack_a0[local_1e8] = iVar7;
          if (iVar7 == 0) {
            *(int *)(param_1 + 0x1bc) = local_1e8;
            DAT_0050ca2c = local_1e8;
          }
          else {
            FUN_00448c70(iVar3,iVar7);
          }
        }
      }
      else if (cVar2 == '\x03') {
        aiStack_140[local_1e8] = 0;
        *puVar12 = 0;
        local_1e0[local_1e8] = 0;
        puVar5 = (undefined4 *)FUN_00448780(*(undefined4 *)(*piVar6 + 0xc));
        if (puVar5 != (undefined4 *)0x0) {
          uVar1 = puVar5[1];
          local_1e0[local_1e8] = *puVar5;
          *puVar12 = uVar1;
        }
      }
      else if (cVar2 == '\x04') {
        iVar3 = *piVar6;
        aiStack_140[local_1e8] = 0;
        *puVar12 = 0;
        uVar1 = *(undefined4 *)(iVar3 + 0x10);
        local_1e0[local_1e8] = 0;
        puVar5 = (undefined4 *)FUN_00448780(uVar1);
        if (puVar5 != (undefined4 *)0x0) {
          uVar1 = *puVar5;
          *puVar12 = 0;
          local_1e0[local_1e8] = uVar1;
        }
      }
      iVar3 = FUN_00445b40();
      piVar6 = piVar6 + 0x22;
      puVar12 = puVar12 + 1;
      *local_1ec = iVar3 - *local_1ec;
      local_1e8 = local_1e8 + 1;
      local_1ec = local_1ec + 1;
    } while (local_1e8 < *(int *)(param_1 + 0x1bc));
  }
  iVar3 = *(int *)(param_1 + 0x1bc);
  if (0 < iVar3) {
    piVar6 = local_190;
    for (iVar7 = iVar3; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar6 = -1;
      piVar6 = piVar6 + 1;
    }
  }
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      iVar3 = *(int *)(param_1 + 0x1bc);
      FUN_004816b0();
      iVar4 = __ftol();
      iVar11 = -1;
      if (-1 < iVar4) {
        puVar8 = auStack_194;
        do {
          piVar6 = (int *)(puVar8 + 4);
          puVar8 = puVar8 + 4;
          iVar11 = iVar11 + 1;
          if (*piVar6 == -1) {
            iVar4 = iVar4 + -1;
          }
        } while (-1 < iVar4);
      }
      local_190[iVar11] = iVar7;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x1bc);
  iVar7 = 1;
  if (0 < iVar3) {
    piVar9 = local_50;
    piVar6 = (int *)(param_2 + 4);
    iVar4 = iVar3;
    do {
      if (((*(byte *)(piVar6 + 1) & 0x20) == 0) && (*piVar6 != 0x4c6f636c)) {
        *piVar9 = iVar7;
        iVar7 = iVar7 + 1;
      }
      else {
        *piVar9 = -1;
      }
      piVar6 = piVar6 + 0x22;
      piVar9 = piVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar7 = 0;
  if (0 < iVar3) {
    piVar6 = local_190;
    do {
      iVar3 = *piVar6;
      FUN_00465980(param_1,param_2 + iVar3 * 0x88,local_50[iVar3],aiStack_140[iVar3],
                   aiStack_a0[iVar3],local_1e0[iVar3],local_f0[iVar3],local_1e4);
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x1bc));
  }
  return;
}

