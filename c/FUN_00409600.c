#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409600(int param_1,short param_2,short param_3,short param_4,short param_5,short param_6,
                 short param_7,short param_8,short param_9,short param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = param_1 * 0x10;
  (&DAT_004b4348)[param_1 * 4] = (float)(int)param_8;
  (&DAT_004b434c)[param_1 * 4] = (float)(int)param_9;
  *(float *)(&DAT_004b4350 + iVar5) = (float)(int)param_10;
  (&DAT_004b4418)[param_1 * 4] = (float)(int)param_5 * _DAT_004ac358;
  fVar1 = (float)(int)param_6 * _DAT_004ac358;
  fVar2 = (float)(int)param_3 * _DAT_004ac358;
  fVar3 = (float)(int)param_7 * _DAT_004ac358;
  fVar4 = (float)(int)param_4 * _DAT_004ac358;
  (&DAT_004b4688)[param_1 * 4] = (float)(int)param_2 * _DAT_004ac358;
  (&DAT_004b441c)[param_1 * 4] = fVar1;
  (&DAT_004b468c)[param_1 * 4] = fVar2;
  *(float *)(&DAT_004b4420 + iVar5) = fVar3;
  *(undefined4 *)(&DAT_004b4424 + iVar5) = 0x3f800000;
  *(float *)(&DAT_004b4690 + iVar5) = fVar4;
  *(undefined4 *)(&DAT_004b4694 + iVar5) = 0x3f800000;
  return;
}

