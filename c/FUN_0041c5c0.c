#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0041c5c0(int param_1,undefined4 *param_2,undefined4 param_3,char *param_4,undefined4 param_5
                )

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_108 [4];
  undefined4 local_f8;
  undefined local_f0 [62];
  undefined2 local_b2;
  undefined local_b0 [62];
  undefined2 local_72;
  char local_70 [31];
  undefined local_51;
  undefined local_50 [62];
  undefined2 local_12;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = 0;
  do {
    FUN_004210e0(iVar2);
    uVar1 = param_1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  puVar3 = local_108;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_0049ef50(local_f0,param_1,0x1f);
  local_b2 = 0;
  FUN_0049ef50(local_b0,param_2,0x1f);
  local_72 = 0;
  _strncpy(local_70,param_4,0x1f);
  local_51 = 0;
  FUN_0049ef50(local_50,param_3,0x1f);
  local_12 = 0;
  local_8 = param_5;
  local_f8 = 0x14;
  iVar2 = FUN_0049f820();
  param_2 = &param_1;
  param_4 = (char *)((float)iVar2 * _DAT_004ac424 * _DAT_004ac428);
  _DAT_004eb1f4 = (int)ROUND(ROUND((float)param_4));
  local_c = 1;
  param_1 = _DAT_004eb1f4;
  local_10 = _DAT_004eb1f4;
  if (DAT_004d5e00 == 0) {
    iVar2 = FUN_00404a20(local_108);
  }
  else {
    iVar2 = FUN_00486e60(local_108);
    if (iVar2 == 0) goto LAB_0041c6dc;
    FUN_00487180();
  }
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_0041c6dc:
  DAT_004eb1c8 = 1;
  _DAT_004eb1cc = 1;
  _DAT_00ec7624 = 0;
  DAT_00ec7620 = DAT_004d5e08;
  FUN_004871b0(0);
  DAT_004eb3b8 = 0;
  FUN_00421020(0,DAT_004d5e08);
  DAT_004eb3b4 = 0;
  FUN_0049ef50(&DAT_00e9f3c4,uVar1,0x1f);
  _DAT_00e9f402 = 0;
  FUN_0049ef50(&DAT_00e9f380,uVar1,0x1f);
  _DAT_00e9f3be = 0;
  return 0;
}

