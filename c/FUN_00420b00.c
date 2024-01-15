#include "prototype.h"


void FUN_00420b00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD local_104;
  undefined4 local_100 [64];
  
  puVar2 = local_100;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_104 = 0x100;
  if (param_1 == 0) {
    puVar2 = local_100;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    GetComputerNameA((LPSTR)local_100,&local_104);
  }
  else {
    FUN_00414ba0(param_1,local_100,0x100);
  }
  FUN_0049d250(s_Last_Player_004b6c5c,local_100);
  return;
}

