#include "prototype.h"


void FUN_00417be0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined3 uVar5;
  undefined3 uVar6;
  
  iVar3 = param_2;
  iVar2 = param_1;
  if (param_2 == 9) {
    FUN_00417120(*(undefined4 *)(param_1 + 100),&param_1,&param_2);
    iVar4 = FUN_0042df70(*(undefined4 *)(iVar2 + 0x4d4),(&DAT_00e99720)[*(int *)(iVar2 + 0x4dc)]);
    iVar1 = iVar2 + 0x4e0;
    uVar6 = (undefined3)((uint)iVar1 >> 8);
    uVar5 = (undefined3)((uint)*(undefined4 *)(iVar2 + 0x4d4) >> 8);
    FUN_004173c0(*(undefined4 *)(iVar2 + 0x4dc),*(short *)(iVar2 + 0x24) + (short)param_1,
                 (CONCAT22((short)((uint)iVar1 >> 0x10),*(short *)(iVar2 + 0x28) + (short)param_2) -
                 iVar4) + -8,CONCAT31(uVar5,*(undefined *)(iVar2 + 0x4c0)),
                 CONCAT31(uVar6,*(undefined *)(iVar2 + 0x4c1)),
                 CONCAT31(uVar5,*(undefined *)(iVar2 + 0x4c2)),
                 CONCAT31(uVar6,*(undefined *)(iVar2 + 0x4c3)),*(undefined4 *)(iVar2 + 0x4d4),0,
                 iVar1,*(uint *)(iVar2 + 0x20) & 0x100);
  }
  FUN_00415850(iVar2,iVar3,param_3,param_4);
  return;
}

