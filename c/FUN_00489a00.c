#include "prototype.h"


int * FUN_00489a00(int **param_1)

{
  int iVar1;
  
  do {
    iVar1 = (**(code **)(**param_1 + 100))(*param_1,0,param_1 + 1,1,0);
    if (iVar1 == 0) {
      return param_1[10];
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
  return (int *)0x0;
}

