#include "prototype.h"


void FUN_00427410(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00450b00(0x54657374);
  if (0 < iVar1) {
    iVar1 = FUN_0045d350();
    if (iVar1 == 0) {
      return;
    }
    if (DAT_004b6d28 == 0) {
      return;
    }
  }
  FUN_00426910(param_1,param_2);
  iVar1 = FUN_00427360(param_1,param_2);
  if (((iVar1 == 0) && (iVar1 = FUN_00427110(param_1,param_2,param_3), iVar1 != -1)) &&
     ((iVar2 = FUN_004273e0(iVar1), iVar2 == 0 || ((param_1 == 6 && (param_3 == 0x27)))))) {
    puVar3 = &DAT_00e67e60;
    do {
      if ((puVar3[-7] == iVar1) && (iVar2 = FUN_004850c0(*puVar3,0), iVar2 == 1)) {
        return;
      }
      puVar3 = puVar3 + 0x11;
    } while ((int)puVar3 < 0xe68080);
    FUN_004273b0(iVar1);
    if (param_4 == 0) {
      FUN_00426c80(iVar1,7,0x3e800000,0x3f800000,0);
    }
    else {
      FUN_00426d10(iVar1,7,0x3e800000,0x3f800000,param_4,0,1,0x41700000,0x469c4000);
    }
    FUN_00427530(param_1,param_2,iVar1,param_3);
  }
  return;
}

