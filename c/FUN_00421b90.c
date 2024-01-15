#include "prototype.h"


bool FUN_00421b90(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int local_104;
  undefined local_100 [256];
  
  local_104 = 0;
  iVar4 = 0;
  FUN_0049eb80(local_100,&DAT_004b2524,s___data_player__004b4f6c,s_tgfd_dat_004b6d00);
  iVar2 = FUN_0049f1e0(local_100,&DAT_004b5c4c);
  if (iVar2 == 0) {
    iVar4 = 1;
    goto LAB_00421c24;
  }
  iVar3 = FUN_0049ffe0(&local_104,1,4,iVar2);
  if ((iVar3 == 0) || (local_104 != 0x10003)) {
LAB_00421c0f:
    iVar4 = 1;
  }
  else {
    iVar3 = FUN_0049ffe0(&DAT_00e364a0,1,0xfd4,iVar2);
    if (iVar3 == 0) goto LAB_00421c0f;
  }
  FUN_0049f0f0(iVar2);
LAB_00421c24:
  if (iVar4 == 0) {
    FUN_0049eb80(&DAT_004eb3d0,&DAT_004b2304,&DAT_00e364b4);
    iVar2 = -1;
    pcVar5 = &DAT_004eb3d0;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    DAT_004b6c90 = (iVar2 != -2) - 1;
    DAT_00e364f0 = iVar4;
    iVar2 = FUN_00421d80();
    if (iVar2 != 0) {
      FUN_0044e530(0,0);
      FUN_00421b20(0);
    }
  }
  return iVar4 == 0;
}

