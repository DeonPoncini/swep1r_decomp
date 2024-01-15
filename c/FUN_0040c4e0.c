#include "prototype.h"


void FUN_0040c4e0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined local_18c [128];
  undefined local_10c [260];
  int local_8;
  
  iVar2 = FUN_00414d90(param_1,0x2732);
  if (iVar2 != 0) {
    FUN_00413800(iVar2);
    uVar3 = FUN_00484140(s___data_player__004b4f6c,3,&PTR_DAT_004b4f7c);
    iVar4 = FUN_00484220(uVar3,local_10c);
    while (iVar4 != 0) {
      if (local_8 == 0) {
        FUN_00484670(local_10c);
        FUN_004138f0(iVar2,local_10c,0,0x2733,0);
      }
      iVar4 = FUN_00484220(uVar3,local_10c);
    }
    FUN_0041b300(iVar2);
    FUN_004841e0(uVar3);
    uVar3 = FUN_00414d90(param_1,0x2731);
    FUN_00414e60(uVar3,0);
    uVar3 = FUN_00414d90(param_1,0x273a);
    iVar4 = -1;
    puVar6 = &DAT_00e364b4;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    } while (cVar1 != '\0');
    if (iVar4 == -2) {
      uVar5 = FUN_00421360(s__MONDOTEXT_H_0246__none__004b4f50);
      uVar5 = FUN_00421360(s__MONDOTEXT_H_0002_Current_Player_004b2214,uVar5);
      FUN_0049eb80(local_18c,uVar5);
      DAT_004b6c90 = 0xffffffff;
    }
    else {
      uVar5 = FUN_00421360(s__MONDOTEXT_H_0002_Current_Player_004b2214,&DAT_00e364b4);
      FUN_0049eb80(local_18c,uVar5);
      DAT_004b6c90 = 0;
      uVar5 = FUN_004136f0(iVar2,&DAT_00e364b4,1);
      FUN_00413610(uVar5);
    }
    FUN_00414b80(uVar3,local_18c,0);
  }
  return;
}

