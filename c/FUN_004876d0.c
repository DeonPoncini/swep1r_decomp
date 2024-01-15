#include "prototype.h"


void FUN_004876d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined local_100 [254];
  undefined2 local_2;
  
  FUN_0049ef50(local_100,*(undefined4 *)(param_1 + 0x30),0x7f);
  local_2 = 0;
  iVar1 = FUN_004a1250(local_100,&DAT_004c8698);
  if (iVar1 != 0) {
    FUN_0049ef50(param_2 + 0x16,iVar1,0x1f);
    *(undefined2 *)((int)param_2 + 0x96) = 0;
  }
  iVar1 = FUN_004a1250(0,&DAT_004c8694);
  if (iVar1 != 0) {
    FUN_0048c380(param_2 + 0x26,iVar1,0x1f);
    *(undefined *)((int)param_2 + 0xb7) = 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 0x10);
  param_2[3] = *(undefined4 *)(param_1 + 0x14);
  param_2[4] = *(undefined4 *)(param_1 + 0x28);
  param_2[5] = *(undefined4 *)(param_1 + 0x2c);
  param_2[0x3e] = *(undefined4 *)(param_1 + 0x40);
  param_2[0x3f] = *(undefined4 *)(param_1 + 0x48);
  param_2[0x40] = *(undefined4 *)(param_1 + 0x4c);
  return;
}

