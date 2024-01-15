#include "prototype.h"


void FUN_00420b80(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  DWORD local_204;
  undefined4 local_200 [64];
  undefined auStack_100 [256];
  
  puVar3 = local_200;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_204 = 0x100;
  GetComputerNameA((LPSTR)local_200,&local_204);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0426__s_s_Game_004b6c74,local_200);
  FUN_0049eb80(auStack_100,uVar1);
  puVar3 = local_200;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_0049d2e0(s_Last_Game_004b6c68,local_200,0x100,auStack_100);
  FUN_00414b80(param_1,local_200,0);
  return;
}

