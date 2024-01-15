#include "prototype.h"


bool FUN_00421c90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_104;
  undefined local_100 [256];
  
  local_104 = 0x10003;
  iVar1 = FUN_00421d80();
  if (iVar1 != 0) {
    FUN_0044e530(0,0);
    FUN_00421b20(0);
  }
  FUN_00484310(s___data_player__004b4f6c);
  FUN_0049eb80(local_100,&DAT_004b2524,s___data_player__004b4f6c,s_tgfd_dat_004b6d00);
  iVar1 = FUN_0049f1e0(local_100,&DAT_004b6cfc);
  if (iVar1 != 0) {
    iVar2 = FUN_004a0160(&local_104,1,4,iVar1);
    iVar3 = FUN_004a0160(&DAT_00e364a0,1,0xfd4,iVar1);
    FUN_0049f0f0(iVar1);
    return iVar3 != 0 && iVar2 != 0;
  }
  return false;
}

