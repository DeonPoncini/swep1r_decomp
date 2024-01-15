#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045cf60(int param_1,int param_2,undefined param_3,undefined param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined local_10 [8];
  undefined local_8 [8];
  
  DAT_00e29bcc = &DAT_00e35a60;
  DAT_00e29bd8 = &DAT_004c2700 + param_1 * 0x34;
  puVar1 = (undefined4 *)(&DAT_004c2bb0 + param_1 * 0x3c);
  iVar2 = 0;
  puVar4 = puVar1;
  puVar5 = &DAT_00e29bdc;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  do {
    local_10[iVar2] = *(undefined *)((int)&DAT_00e35aa0 + iVar2 + 1);
    local_8[iVar2] = (&DAT_00e35aa8)[iVar2];
    if (DAT_004d5e00 != 0) {
      local_10[iVar2] = 0;
      local_8[iVar2] = 0xff;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  FUN_00449d00(&DAT_00e29bdc,puVar1,local_10,local_8);
  FUN_00449330(&DAT_00e2aee0,puVar1);
  FUN_00449330(&DAT_00e2aec0,&DAT_00e29bdc);
  _DAT_00e2a6b0 = 0;
  puVar4 = &DAT_00e2aec0;
  puVar5 = &DAT_00e2af40;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  _DAT_00e2a6b4 = 0;
  _DAT_00e2a6b8 = 0;
  _DAT_00e2a6bc = 0;
  if (param_2 != -1) {
    local_10[param_2] = param_3;
    local_8[param_2] = param_4;
    FUN_00449d00(&DAT_00e29bdc,puVar1,local_10,local_8);
    FUN_00449330(&DAT_00e2af40,&DAT_00e29bdc);
    iVar2 = 0;
    do {
      local_10[iVar2] = DAT_00e29bcc[iVar2 + 0x41];
      local_8[iVar2] = DAT_00e29bcc[iVar2 + 0x48];
      iVar2 = iVar2 + 1;
    } while (iVar2 < 7);
    (&DAT_00e2a6b0)[param_2] = 1;
  }
  return;
}

