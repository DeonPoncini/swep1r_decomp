#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004325b0(short param_1,short param_2,short param_3,short param_4,float param_5,
                 float param_6,int param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint uVar4;
  float fVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)FUN_0048dba0();
  if (param_7 == 1) {
    FUN_004320b0(DAT_00e996a4);
  }
  *puVar6 = 0x2e;
  puVar6[1] = 1;
  puVar6[2] = 4;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  pfVar1 = (float *)puVar6[5];
  puVar6[7] = DAT_00e996a4;
  puVar6[8] = 0;
  puVar6[0xd] = 0;
  pfVar2 = (float *)puVar6[4];
  puVar3 = (undefined4 *)puVar6[6];
  fVar5 = *(float *)(*(int *)(DAT_00df7f2c + 0x48) + 4);
  if (param_8 == 1) {
    fVar5 = _DAT_004ac718;
  }
  pfVar2[2] = fVar5;
  pfVar2[5] = fVar5;
  pfVar2[8] = fVar5;
  pfVar2[0xb] = fVar5;
  *pfVar2 = (float)(int)param_1;
  pfVar2[1] = (float)(int)param_2;
  pfVar2[3] = (float)(int)param_1;
  pfVar2[4] = (float)(int)param_4;
  pfVar2[6] = (float)(int)param_3;
  pfVar2[7] = (float)(int)param_4;
  pfVar2[9] = (float)(int)param_3;
  pfVar2[10] = (float)(int)param_2;
  puVar3[0xc] = DAT_00e37530;
  puVar3[8] = DAT_00e37530;
  puVar3[4] = DAT_00e37530;
  *puVar3 = DAT_00e37530;
  puVar3[0xd] = DAT_00e37534;
  puVar3[9] = DAT_00e37534;
  puVar3[5] = DAT_00e37534;
  puVar3[1] = DAT_00e37534;
  puVar3[0xe] = DAT_00e37538;
  puVar3[10] = DAT_00e37538;
  puVar3[6] = DAT_00e37538;
  puVar3[2] = DAT_00e37538;
  puVar3[0xf] = DAT_00e3753c;
  puVar3[0xb] = DAT_00e3753c;
  puVar3[7] = DAT_00e3753c;
  puVar3[3] = DAT_00e3753c;
  uVar4 = *(uint *)(puVar6[7] + 0x80);
  pfVar1[1] = 0.0;
  *pfVar1 = param_5 / (float)(ulonglong)uVar4;
  pfVar1[2] = param_5 / (float)(ulonglong)*(uint *)(puVar6[7] + 0x80);
  uVar4 = *(uint *)(puVar6[7] + 0x84);
  pfVar1[4] = 0.0;
  pfVar1[3] = param_6 / (float)(ulonglong)uVar4;
  uVar4 = *(uint *)(puVar6[7] + 0x84);
  pfVar1[6] = 0.0;
  pfVar1[7] = 0.0;
  pfVar1[5] = param_6 / (float)(ulonglong)uVar4;
  FUN_0048de10(puVar6[2],7);
  return;
}

