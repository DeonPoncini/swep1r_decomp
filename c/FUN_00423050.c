#include "prototype.h"


int FUN_00423050(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined local_80 [128];
  
  if (param_1 == 0) {
    return 0;
  }
  pcVar1 = s___data_wavs_22K_004b759c;
  if (DAT_004b6d14 == 0) {
    pcVar1 = s___data_wavs_11K_004b758c;
  }
  FUN_0049eb80(local_80,s__s_c_s_004b74dc,pcVar1,0x5c,param_1);
  iVar2 = (**(code **)(DAT_00ecc420 + 0x30))(local_80,&DAT_004b5c4c);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_004851a0(iVar2,&uStack_8c,&uStack_84,&uStack_94,&iStack_88);
  iVar4 = iStack_88;
  if ((iVar3 != 0) && (iVar4 = FUN_00484aa0(uStack_94,uStack_8c,uStack_84,iVar3,0), iVar4 != 0)) {
    iVar3 = FUN_00485110(iVar4,iVar3,&uStack_90);
    if (iVar3 == 0) {
      return 0;
    }
    uVar5 = (**(code **)(DAT_00ecc420 + 0x38))(iVar2,iVar3,uStack_90);
    iVar3 = FUN_00485170(iVar4,iVar3,uVar5);
    if (iVar3 != 0) {
      (**(code **)(DAT_00ecc420 + 0x34))(iVar2);
      return iVar4;
    }
  }
  (**(code **)(DAT_00ecc420 + 0x34))(iVar2);
  if (iVar4 != 0) {
    FUN_004850a0(iVar4);
  }
  return 0;
}

