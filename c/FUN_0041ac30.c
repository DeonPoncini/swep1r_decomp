#include "prototype.h"


void FUN_0041ac30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  undefined local_100 [256];
  
  bVar7 = *(int *)(param_1 + 0x528) == 0x29a;
  bVar8 = (&DAT_00ea04e0)[*(int *)(param_1 + 0x56c)] != 0;
  bVar4 = bVar8 || bVar7;
  iVar1 = (&DAT_00ea02c0)[*(int *)(param_1 + 0x56c)];
  iVar2 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x28);
  if (!bVar8 && !bVar7) {
    FUN_0049eb80(local_100,&DAT_004b666c,*(int *)(param_1 + 0x528) + 1);
    FUN_004173c0(0,iVar2 + 5,iVar3 + 0x14,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_100,0,0,
                 0);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x56c);
  iVar5 = FUN_00420f70(uVar6);
  if (iVar5 == 0) {
    iVar5 = FUN_0041c4d0(*(undefined4 *)(param_1 + 0x1c));
    uVar6 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)[iVar5 * 0xd]);
  }
  else {
    uVar6 = FUN_0041bce0(uVar6);
  }
  FUN_0049eb80(local_100,&DAT_004b2304,uVar6);
  FUN_004173c0(6,iVar2 + 0x19,iVar3 + 10,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_100,0,0,0
              );
  iVar5 = FUN_0041c4d0(*(undefined4 *)(param_1 + 0x1c));
  uVar6 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)[iVar5 * 0xd]);
  iVar5 = FUN_0041c4d0(*(undefined4 *)(param_1 + 0x1c),uVar6);
  uVar6 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)[iVar5 * 0xd]);
  FUN_0049eb80(local_100,s__s__s_004b6708,uVar6);
  FUN_004173c0(0,iVar2 + 0x19,iVar3 + 0x23,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_100,0,0
               ,0);
  if (bVar4) {
LAB_0041ae0c:
    if (iVar1 == 0) {
      if (bVar8 || bVar7) {
        uVar6 = FUN_00421360(s__MONDOTEXT_H_0549_Retired_004b66b8);
        FUN_0049eb80(local_100,uVar6);
      }
      else {
        uVar6 = FUN_0041bc20(*(undefined4 *)(param_1 + 0x564));
        uVar6 = FUN_00421360(s__MONDOTEXT_H_0550_Current____s_004b6698,uVar6);
        FUN_0049eb80(local_100,uVar6);
      }
      goto LAB_0041ae7d;
    }
  }
  else if (iVar1 == 0) {
    uVar6 = FUN_00421360(s__MONDOTEXT_H_0548_Lap__d_004b66ec,*(int *)(param_1 + 0x560) + 1);
    FUN_0049eb80(local_100,uVar6);
    FUN_004173c0(0,iVar2 + 0xd2,iVar3 + 0x14,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_100,0
                 ,0,0);
    goto LAB_0041ae0c;
  }
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0531_Final_004b66d4);
  FUN_0049eb80(local_100,uVar6);
LAB_0041ae7d:
  FUN_004173c0(0,iVar2 + 0xd2,iVar3 + 0x1e,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_100,0,0
               ,0);
  if (!bVar8 && !bVar7) {
    uVar6 = FUN_0041bc20(*(undefined4 *)(param_1 + 0x568));
    uVar6 = FUN_00421360(s__MONDOTEXT_H_0551_Total____s_004b6678,uVar6);
    FUN_0049eb80(local_100,uVar6);
    FUN_004173c0(0,iVar2 + 0x154,iVar3 + 0x1e,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_100,
                 bVar4,bVar4,bVar4);
  }
  return;
}

