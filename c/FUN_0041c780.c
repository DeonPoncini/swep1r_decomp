#include "prototype.h"


void FUN_0041c780(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined local_400 [1024];
  
  if ((DAT_004eb1f8 != 0) && (param_1 == DAT_004eb1fc)) {
    FUN_00423cb0(1);
  }
  iVar1 = FUN_0041d350(param_1);
  if (-1 < iVar1) {
    FUN_0041cae0(iVar1);
    if (DAT_004b6714 == -1) {
      FUN_0041df10(0xffffffff,1,0x6c6f7374,iVar1);
    }
    else {
      FUN_0041c990();
    }
    if (iVar1 <= DAT_004b671c) {
      DAT_004b671c = iVar1;
    }
    if ((DAT_004eb1c8 != 0) && ((&DAT_004ea8a0)[iVar1] == 0)) {
      uVar2 = FUN_0041bce0(iVar1);
      uVar2 = FUN_00421360(s__MONDOTEXT_H_0423__s_has_left_th_004b6770,uVar2);
      FUN_0049eb80(local_400,uVar2);
      FUN_0041c190(local_400);
      FUN_0041c870(iVar1);
      FUN_00411120(0x3e,iVar1);
    }
    (&DAT_004ea8a0)[iVar1] = 0;
  }
  return;
}

