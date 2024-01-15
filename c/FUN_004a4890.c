#include "prototype.h"


undefined4 FUN_004a4890(uint param_1,HANDLE param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 < DAT_00ecd600) {
    piVar1 = &DAT_00ecd500 + ((int)param_1 >> 5);
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (*(int *)(*piVar1 + iVar3) == -1) {
      if (DAT_004d1fb4 == 1) {
        if (param_1 == 0) {
          SetStdHandle(0xfffffff6,param_2);
        }
        else {
          if (param_1 == 1) {
            SetStdHandle(0xfffffff5,param_2);
            *(HANDLE *)(*piVar1 + iVar3) = param_2;
            return 0;
          }
          if (param_1 == 2) {
            SetStdHandle(0xfffffff4,param_2);
            *(HANDLE *)(*piVar1 + iVar3) = param_2;
            return 0;
          }
        }
      }
      *(HANDLE *)(*piVar1 + iVar3) = param_2;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004a3dd0();
  *puVar2 = 0;
  return 0xffffffff;
}

