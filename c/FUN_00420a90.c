#include "prototype.h"


void FUN_00420a90(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD local_204;
  undefined4 local_200 [64];
  undefined auStack_100 [256];
  
  puVar2 = local_200;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_204 = 0x100;
  GetComputerNameA((LPSTR)local_200,&local_204);
  FUN_0049d2e0(s_Last_Player_004b6c5c,auStack_100,0x100,local_200);
  FUN_00414b80(param_1,auStack_100,0);
  return;
}

