#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456800(undefined4 param_1,int param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int **ppiVar7;
  float local_54;
  float local_50;
  undefined local_4c [12];
  undefined local_40 [48];
  undefined local_10 [16];
  
  fVar2 = param_3 * _DAT_004ad04c;
  ppiVar7 = (int **)&DAT_00e299f4;
  pfVar6 = (float *)&DAT_00e98f4c;
  do {
    fVar4 = _DAT_004ad050;
    fVar3 = pfVar6[1] * _DAT_00e22a50 + *pfVar6;
    *pfVar6 = fVar3;
    if (fVar4 < fVar3) {
      *pfVar6 = fVar3 - _DAT_004ad050;
    }
    if (*pfVar6 < _DAT_004acf50) {
      *pfVar6 = *pfVar6 - _DAT_004ad054;
    }
    fVar4 = _DAT_004ad050;
    fVar3 = pfVar6[3] * _DAT_00e22a50 + pfVar6[2];
    pfVar6[2] = fVar3;
    if (fVar4 < fVar3) {
      pfVar6[2] = fVar3 - _DAT_004ad050;
    }
    if (pfVar6[2] < _DAT_004acf50) {
      pfVar6[2] = pfVar6[2] - _DAT_004ad054;
    }
    if ((*ppiVar7 != (int *)0x0) && (iVar5 = **ppiVar7, iVar5 != 0)) {
      FUN_00431a50(iVar5,2,0xfffffffc,0x10,3);
    }
    pfVar6 = pfVar6 + 0x17;
    ppiVar7 = ppiVar7 + 1;
  } while ((int)pfVar6 < 0xe9922c);
  pfVar6 = (float *)&DAT_00e293cc;
  do {
    fVar4 = _DAT_004ad050;
    fVar3 = _DAT_00e22a50 * pfVar6[1] + *pfVar6;
    *pfVar6 = fVar3;
    if (fVar4 < fVar3) {
      *pfVar6 = fVar3 - _DAT_004ad050;
    }
    if (*pfVar6 < _DAT_004acf50) {
      *pfVar6 = *pfVar6 - _DAT_004ad054;
    }
    fVar4 = _DAT_004ad050;
    fVar3 = _DAT_00e22a50 * pfVar6[1] + *pfVar6;
    *pfVar6 = fVar3;
    if (fVar4 < fVar3) {
      *pfVar6 = fVar3 - _DAT_004ad050;
    }
    if (*pfVar6 < _DAT_004acf50) {
      *pfVar6 = *pfVar6 - _DAT_004ad054;
    }
    pfVar6 = pfVar6 + 6;
  } while ((int)pfVar6 < 0xe29594);
  FUN_004565e0(param_2);
  FUN_0043e210();
  iVar5 = *(int *)(&DAT_00e299f4)[param_2];
  if (iVar5 != 0) {
    FUN_00431a50(iVar5,2,0xfffffffc,0x10,3);
    FUN_0044bb10(local_40,&DAT_00e2af60);
    FUN_0042f7d0(local_4c,&DAT_004c449c);
    FUN_00431410(local_40,local_40,(&DAT_00e98f4c)[param_2 * 0x17],DAT_00e298e0,DAT_00e298e4,
                 DAT_00e298e8);
    FUN_00431410(local_40,local_40,(&DAT_00e98f48)[param_2 * 0x17],DAT_00e298d0,DAT_00e298d4,
                 DAT_00e298d8);
    fVar3 = _DAT_004c45d0;
    if (param_2 == 6) {
      fVar3 = (float)_DAT_004ad058;
    }
    fVar2 = fVar2 * fVar3;
    FUN_00431450(local_40,fVar2,fVar2,fVar2,local_40);
    FUN_0042f7d0(local_10,local_4c);
    FUN_00431640(iVar5,local_40);
    FUN_00431a50(iVar5,2,3,0x10,2);
  }
  iVar5 = (&DAT_00e98f40)[param_2 * 0x17];
  if (iVar5 <= (int)(&DAT_00e98f44)[param_2 * 0x17]) {
    pfVar6 = (float *)(&DAT_00e293c4 + iVar5 * 0x18);
    do {
      iVar1 = **(int **)(&DAT_00e29a18 + (iVar5 - (&DAT_00e98f40)[param_2 * 0x17]) * 4);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        FUN_0044bb10(local_40,&DAT_00e2af60);
        FUN_0042f7d0(local_4c,&DAT_004c449c);
        FUN_0042f380(pfVar6[2],&local_50,&local_54);
        FUN_0042fa80(local_4c,local_4c,pfVar6[-1] * local_50 * param_3,&DAT_00e298c0);
        FUN_0042fa80(local_4c,local_4c,local_54 * param_3 * *pfVar6,&DAT_00e298d0);
        FUN_0042fa80(local_4c,local_4c,pfVar6[1] * local_54 * param_3,&DAT_00e298e0);
        FUN_00431410(local_40,local_40,pfVar6[2],DAT_00e298e0,DAT_00e298e4,DAT_00e298e8);
        FUN_00431410(local_40,local_40,(&DAT_00e98f48)[param_2 * 0x17],DAT_00e298d0,DAT_00e298d4,
                     DAT_00e298d8);
        fVar2 = pfVar6[4] * param_3;
        FUN_00431450(local_40,fVar2,fVar2,fVar2,local_40);
        FUN_0042f7d0(local_10,local_4c);
        FUN_00431640(iVar1,local_40);
        FUN_00431a50(iVar1,2,3,0x10,2);
      }
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 6;
    } while (iVar5 <= (int)(&DAT_00e98f44)[param_2 * 0x17]);
  }
  return;
}

