#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045a840(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float local_c;
  float local_8;
  int local_4;
  
  iVar7 = 0;
  iVar9 = 0;
  do {
    FUN_0042f7b0((int)&DAT_00e2a6c4 + iVar9,0,0,0);
    if (iVar9 < 0x1c0) {
      FUN_0042f7b0((int)&DAT_00e2b224 + iVar9,0,0,0);
    }
    uVar11 = DAT_00e295cc;
    iVar9 = iVar9 + 0x38;
  } while (iVar9 < 0x7a8);
  if (*(int *)(param_1 + 0x38) == 0) {
    local_4 = DAT_00e295cc + 1;
    iVar9 = __ftol();
    if (uVar11 == 0) {
      DAT_00e295d0 = 0xffffffff;
      return;
    }
    DAT_00e295d0 = iVar9;
    if (DAT_0050c47c == 1) {
      iVar2 = 0;
      if (0 < (int)(uVar11 - 1)) {
        pcVar4 = &DAT_00e2a6c0;
        do {
          DAT_00e295d0 = iVar2;
          if ((char)(&DAT_004c1cbb)[*pcVar4 * 0x10] == DAT_0050c950) break;
          iVar2 = iVar2 + 1;
          pcVar4 = pcVar4 + 0x38;
          DAT_00e295d0 = iVar9;
        } while (iVar2 < (int)(uVar11 - 1));
      }
    }
    if (0 < (int)uVar11) {
      iVar9 = (iVar9 + 9) * 10;
      pfVar3 = (float *)&DAT_00e2a6c8;
      do {
        local_4 = iVar9;
        FUN_0042f380((float)iVar9,&local_8,&local_c);
        fVar1 = _DAT_004ad0c0 - local_8 * _DAT_004ad11c;
        pfVar3[-1] = _DAT_004acfa0 - local_c * _DAT_004ad11c;
        *pfVar3 = fVar1;
        pfVar3[1] = 106.0;
        FUN_0042f7d0(pfVar3 + 2,pfVar3 + -1);
        fVar12 = (float10)FUN_0042f560(pfVar3[-1] - _DAT_004acfa0,_DAT_004ad0c0 - *pfVar3);
        fVar1 = (_DAT_004ad064 - _DAT_0050c938) * _DAT_004ad050;
        pfVar3[8] = (float)(fVar12 - (float10)_DAT_004ad0c8);
        FUN_0042f380(fVar1,&local_8,&local_c);
        uVar11 = DAT_00e295cc;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -10;
        pfVar3[9] = local_c * _DAT_0050c93c * _DAT_004ad120;
        pfVar3 = pfVar3 + 0xe;
        local_4 = iVar9;
      } while (iVar7 < (int)uVar11);
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    puVar5 = &DAT_004c40a0;
    pcVar4 = &DAT_00e29860;
    do {
      if (*pcVar4 != -1) {
        iVar7 = (int)*pcVar4;
        (&DAT_00e2a6c4)[iVar7 * 0xe] = puVar5[-1];
        (&DAT_00e2a6c8)[iVar7 * 0xe] = *puVar5;
        (&DAT_00e2a6cc)[iVar7 * 0xe] = 0xc3020000;
        (&DAT_00e2a6ec)[iVar7 * 0xe] = 0;
        (&DAT_00e2a6e8)[iVar7 * 0xe] = 0;
      }
      pcVar4 = pcVar4 + 3;
      puVar5 = puVar5 + 8;
    } while ((int)pcVar4 < 0xe29890);
  }
  if (*(int *)(param_1 + 0x38) == 2) {
    uVar10 = 0;
    if (0 < (int)(uVar11 + 1)) {
      pfVar3 = (float *)&DAT_00e2b22c;
      do {
        uVar6 = (int)uVar10 >> 0x1f;
        pfVar3[-2] = _DAT_004ad128 -
                     (float)(((uVar10 ^ uVar6) - uVar6 & 1 ^ uVar6) - uVar6) * _DAT_004ad124;
        pfVar3[-1] = 40.0;
        *pfVar3 = _DAT_004ad130 - (float)((int)uVar10 / 2) * _DAT_004ad12c;
        pfVar3[8] = 0.0;
        pfVar3[7] = 0.0;
        if (uVar10 == uVar11) {
          *pfVar3 = *pfVar3 - _DAT_004ad134;
          pfVar3[7] = 90.0;
        }
        uVar10 = uVar10 + 1;
        pfVar3 = pfVar3 + 0xe;
      } while ((int)uVar10 < (int)(uVar11 + 1));
    }
  }
  puVar8 = &DAT_00e2b23c;
  puVar5 = &DAT_00e2a6c4;
  iVar7 = 0;
  do {
    FUN_0042f7d0((int)&DAT_00e2a6d0 + iVar7,puVar5);
    FUN_0042f7d0((int)&DAT_00e2a6dc + iVar7,puVar5);
    if ((int)puVar5 < 0xe2a884) {
      FUN_0042f7d0(&DAT_00e2b230 + iVar7,puVar5);
      FUN_0042f7d0(puVar8,puVar5);
    }
    puVar5 = puVar5 + 0xe;
    iVar7 = iVar7 + 0x38;
    puVar8 = puVar8 + 0x38;
  } while ((int)puVar5 < 0xe2ae6c);
  return;
}

