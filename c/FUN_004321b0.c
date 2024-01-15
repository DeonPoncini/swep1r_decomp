#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004321b0(short param_1,short param_2,short param_3,short param_4,float param_5,
                 float param_6,int param_7,int param_8,float param_9)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float10 extraout_ST0;
  float10 fVar13;
  float10 extraout_ST0_00;
  float10 fVar14;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  short local_14;
  
  if ((DAT_0050c9fc == 0) || ((float)DAT_0050c9fc != param_9)) {
    if (DAT_0050ca00 == 0) {
      return;
    }
    if ((float)DAT_0050ca00 != param_9) {
      return;
    }
    param_9 = DAT_0050ca08;
  }
  else {
    param_9 = DAT_0050ca04;
  }
  puVar6 = (undefined4 *)FUN_0048dba0();
  if (param_7 == 1) {
    FUN_004320b0(DAT_00e996a4);
  }
  puVar12 = (undefined4 *)puVar6[6];
  *puVar6 = 0x2e;
  puVar6[1] = 1;
  puVar6[7] = DAT_00e996a4;
  puVar6[8] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  pfVar1 = (float *)puVar6[4];
  puVar11 = (undefined4 *)puVar6[5];
  fVar2 = *(float *)(*(int *)(DAT_00df7f2c + 0x48) + 4);
  if (param_8 == 1) {
    fVar2 = _DAT_004ac6e0;
  }
  iVar7 = (int)param_2;
  iVar10 = (int)param_4;
  iVar8 = (int)param_1;
  param_5 = param_5 / (float)(ulonglong)*(uint *)(puVar6[7] + 0x80);
  param_6 = param_6 / (float)(ulonglong)*(uint *)(puVar6[7] + 0x84);
  fVar3 = param_5 * _DAT_004ac6e4;
  fVar4 = param_6 * _DAT_004ac6e4;
  if ((float)_DAT_004ac6e8 <= param_9) {
    if ((float)_DAT_004ac6f8 <= param_9) {
      puVar6[2] = 5;
      fVar14 = (float10)iVar10;
      pfVar1[6] = (float)iVar8;
      pfVar1[7] = (float)iVar7;
      pfVar1[8] = fVar2;
      pfVar1[9] = (float)iVar8;
      pfVar1[10] = (float)iVar10;
      pfVar1[0xb] = fVar2;
      sVar5 = __ftol();
      param_9 = param_9 - _DAT_004ac708;
      fVar2 = (float)_DAT_004ac710;
      pfVar1[0xc] = (float)(sVar5 + iVar8);
      pfVar1[0xd] = (float)extraout_ST1_01;
      pfVar1[0xe] = (float)fVar14;
      puVar11[4] = param_5;
      puVar11[6] = param_5;
      puVar11[5] = 0;
      puVar11[7] = param_6;
      puVar11[9] = param_6;
      puVar11[8] = param_5 - param_9 * fVar2 * (param_5 - fVar3);
      fVar13 = extraout_ST0_01;
    }
    else {
      puVar6[2] = 4;
      fVar3 = (param_9 + param_9) - _DAT_004ac6e4;
      pfVar1[6] = (float)iVar8;
      pfVar1[7] = (float)iVar7;
      pfVar1[8] = fVar2;
      pfVar1[9] = (float)iVar8;
      sVar5 = __ftol();
      pfVar1[10] = (float)(sVar5 + iVar7);
      pfVar1[0xb] = (float)extraout_ST1_00;
      puVar11[4] = param_5;
      puVar11[5] = 0;
      puVar11[6] = param_5;
      puVar11[7] = param_6 * fVar3;
      fVar13 = extraout_ST0_00;
      fVar14 = extraout_ST1_00;
    }
  }
  else {
    puVar6[2] = 3;
    sVar5 = __ftol();
    fVar13 = (float10)iVar7;
    pfVar1[6] = (float)((int)param_3 - (int)sVar5);
    pfVar1[7] = (float)iVar7;
    pfVar1[8] = (float)extraout_ST1;
    puVar11[5] = 0;
    puVar11[4] = (float)((float10)param_5 * extraout_ST0);
    fVar14 = extraout_ST1;
  }
  local_14 = (short)(iVar7 + iVar10 >> 1);
  fVar2 = (float)(int)param_3;
  pfVar1[1] = (float)(int)local_14;
  pfVar1[2] = (float)fVar14;
  pfVar1[3] = fVar2;
  pfVar1[4] = (float)fVar13;
  pfVar1[5] = (float)fVar14;
  *pfVar1 = fVar2;
  puVar11[1] = fVar4;
  *puVar11 = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  iVar7 = (int)&DAT_00e37530 - (int)puVar12;
  iVar8 = 4;
  do {
    uVar9 = 0;
    puVar11 = puVar12;
    if (puVar6[2] != 0) {
      do {
        uVar9 = uVar9 + 1;
        *puVar11 = *(undefined4 *)(iVar7 + (int)puVar12);
        puVar11 = puVar11 + 4;
      } while (uVar9 < (uint)puVar6[2]);
    }
    puVar12 = puVar12 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_0048de10(puVar6[2],7);
  return;
}

