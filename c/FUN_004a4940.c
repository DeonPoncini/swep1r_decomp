#include "prototype.h"


undefined4 FUN_004a4940(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00ecd600) {
    iVar1 = (&DAT_00ecd500)[(int)param_1 >> 5];
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (((*(byte *)(iVar1 + 4 + iVar3) & 1) != 0) && (*(int *)(iVar1 + iVar3) != -1)) {
      if (DAT_004d1fb4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_004a49a7;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_004a49a7:
      *(undefined4 *)((&DAT_00ecd500)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004a3dd0();
  *puVar2 = 0;
  return 0xffffffff;
}

