#include "prototype.h"


void FUN_004329c0(short param_1,short param_2,short param_3,short param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)FUN_0048dba0();
  *puVar6 = 0x2e;
  puVar6[1] = 1;
  puVar6[2] = 4;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  uVar5 = DAT_00e996a4;
  puVar6[8] = 0;
  puVar6[7] = uVar5;
  puVar6[0xd] = 0;
  fVar1 = *(float *)(*(int *)(DAT_00df7f2c + 0x48) + 4);
  pfVar2 = (float *)puVar6[4];
  puVar3 = (undefined4 *)puVar6[5];
  puVar4 = (undefined4 *)puVar6[6];
  *pfVar2 = (float)(int)param_1;
  pfVar2[2] = fVar1;
  pfVar2[3] = (float)(int)param_1;
  pfVar2[5] = fVar1;
  pfVar2[1] = (float)(int)param_2;
  pfVar2[6] = (float)(int)param_3;
  pfVar2[7] = (float)(int)param_4;
  pfVar2[4] = (float)(int)param_4;
  pfVar2[8] = fVar1;
  pfVar2[9] = (float)(int)param_3;
  pfVar2[10] = (float)(int)param_2;
  pfVar2[0xb] = fVar1;
  puVar4[0xc] = DAT_00e37530;
  puVar4[8] = DAT_00e37530;
  puVar4[4] = DAT_00e37530;
  *puVar4 = DAT_00e37530;
  puVar4[0xd] = DAT_00e37534;
  puVar4[9] = DAT_00e37534;
  puVar4[5] = DAT_00e37534;
  puVar4[1] = DAT_00e37534;
  puVar4[0xe] = DAT_00e37538;
  puVar4[10] = DAT_00e37538;
  puVar4[6] = DAT_00e37538;
  puVar4[2] = DAT_00e37538;
  puVar4[0xf] = DAT_00e3753c;
  puVar4[0xb] = DAT_00e3753c;
  puVar4[7] = DAT_00e3753c;
  puVar4[3] = DAT_00e3753c;
  puVar3[1] = param_6;
  *puVar3 = param_5;
  puVar3[2] = param_5;
  puVar3[3] = param_8;
  puVar3[5] = param_8;
  puVar3[4] = param_7;
  puVar3[6] = param_7;
  puVar3[7] = param_6;
  FUN_0048de10(puVar6[2],7);
  return;
}

