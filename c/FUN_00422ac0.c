#include "prototype.h"


undefined4 FUN_00422ac0(int param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char local_280 [128];
  undefined local_200 [512];
  
  iVar6 = 0;
  if ((*(uint *)(param_1 + 0x24) & 1) != 0) {
    return 0;
  }
  if ((PTR_IMAGE_DOS_HEADER_004b6d10 < (undefined *)(DAT_004eb44c + *(int *)(param_1 + 0x28))) &&
     ((*(uint *)(param_1 + 0x24) & 8) == 0)) {
    FUN_00422f60(*(int *)(param_1 + 0x28) + 0x19000);
  }
  iVar5 = DAT_004eb414;
  if ((*(byte *)(param_1 + 0x24) & 8) == 0) {
    iVar5 = FUN_00484aa0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x28),
                         DAT_004b6d30);
    if (iVar5 == 0) goto LAB_00422cd2;
    DAT_004eb44c = DAT_004eb44c + *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x48) = iVar5;
  bVar1 = false;
  pcVar2 = s___data_wavs_22K___data_wavs_22K__004b7558;
  if (DAT_004b6d14 == 0) {
    pcVar2 = s___data_wavs_11K___data_wavs_11K__004b751c;
  }
  FUN_0049eb80(local_200,s__s__s_s__s_s_004b74e4,pcVar2,&DAT_00e9f300,s___data_wavs_Music_004b74f4,
               &DAT_004d55cc,s___data_wavs_Voice_004b7508);
  puVar3 = local_200;
  do {
    puVar3 = (undefined *)FUN_0048c2d0(puVar3,local_280,0x80,&DAT_004b3b5c);
    if (local_280[0] != '\0') {
      FUN_0049eb80(local_280,s__s_c_s_004b74dc,local_280,0x5c,param_1);
      iVar6 = (**(code **)(DAT_00ecc420 + 0x30))(local_280,&DAT_004b5c4c);
      if (iVar6 != 0) {
        bVar1 = true;
        break;
      }
    }
  } while (puVar3 != (undefined *)0x0);
  if (bVar1) {
    if ((*(byte *)(param_1 + 0x24) & 8) != 0) {
      uVar4 = FUN_004083c1();
      return uVar4;
    }
    (**(code **)(DAT_00ecc420 + 0x4c))(iVar6,*(undefined4 *)(param_1 + 0x3c),0);
    iVar5 = FUN_00422f00(iVar6,param_1);
    if (iVar5 != 0) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
      (**(code **)(DAT_00ecc420 + 0x34))(iVar6);
      return 1;
    }
  }
LAB_00422cd2:
  if (iVar6 != 0) {
    (**(code **)(DAT_00ecc420 + 0x34))(iVar6);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_004850a0(*(int *)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 0;
}

