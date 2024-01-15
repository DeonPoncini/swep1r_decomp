#include "prototype.h"


void FUN_00440800(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined local_44 [12];
  undefined4 local_38 [14];
  
  iVar3 = DAT_00e295d0;
  iVar1 = DAT_00e295d0 * 0x38;
  iVar4 = (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[iVar1] * 0x10];
  DAT_00e35a98 = (DAT_00e35a98 - DAT_00e99220) + DAT_00e9935c;
  if (*(int *)(param_1 + 0x38) == 1) {
    (&DAT_00e2985e)[*(int *)(param_1 + 0x34) * 3] = (&DAT_00e35aa8)[iVar4];
  }
  puVar5 = (undefined4 *)(&DAT_00e2a6c0 + iVar1);
  puVar6 = local_38;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(&DAT_00e2b220 + iVar4 * 0x38);
  puVar6 = puVar5;
  puVar7 = (undefined4 *)(&DAT_00e2a6c0 + iVar1);
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = local_38;
  puVar7 = puVar5;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_0042f7d0(local_44,&DAT_00e2a6c4 + iVar3 * 0xe);
  FUN_0042f7d0(&DAT_00e2a6c4 + DAT_00e295d0 * 0xe,&DAT_00e2b224 + iVar4 * 0xe);
  FUN_0042f7d0(&DAT_00e2b224 + iVar4 * 0xe,local_44);
  (&DAT_00e35aa8)[iVar4] = (&DAT_00e2b221)[iVar4 * 0x38];
  iVar3 = DAT_00e295d0 + 0x62;
  *(undefined *)((int)&DAT_00e35aa0 + iVar4 + 1) = (&DAT_004c1cb9)[*(char *)puVar5 * 0x10];
  FUN_0045cf30(iVar3,iVar4 + 0x8e);
  DAT_0050c474 = 1;
  FUN_0044e560();
  FUN_0045cf60((int)*(char *)(param_1 + 0x73),
               (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
               (int)(char)(&DAT_004c1cb9)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
               (&DAT_00e2a6c1)[DAT_00e295d0 * 0x38]);
  FUN_0043eb50();
  return;
}

