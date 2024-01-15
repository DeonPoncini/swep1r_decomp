#include "prototype.h"


undefined4 FUN_00489bd0(int **param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int local_74;
  int local_70;
  int *local_6c;
  int *local_68;
  undefined4 local_64 [20];
  undefined4 local_14;
  
  puVar2 = local_64;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_64[0] = 100;
  local_14 = param_2;
  if (param_3 == (int *)0x0) {
    local_6c = param_1[4];
    local_68 = param_1[3];
    local_74 = 0;
    local_70 = 0;
  }
  else {
    if (param_3[2] == 0) {
      return 1;
    }
    if (param_3[3] == 0) {
      return 1;
    }
    local_74 = *param_3;
    local_70 = param_3[1];
    local_6c = (int *)(local_74 + param_3[2]);
    local_68 = (int *)(local_70 + param_3[3]);
  }
  do {
    iVar1 = (**(code **)(**param_1 + 0x14))(*param_1,&local_74,0,0,0x1000400,local_64);
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == -0x7789fe3e) {
      if ((*(byte *)(param_1 + 0x1b) & 4) == 0) {
        iVar1 = (**(code **)(**param_1 + 0x6c))(*param_1);
      }
      else {
        iVar1 = (**(code **)(*DAT_00ec8d00 + 0x6c))(DAT_00ec8d00);
      }
    }
  } while (iVar1 == 0);
  return 1;
}

