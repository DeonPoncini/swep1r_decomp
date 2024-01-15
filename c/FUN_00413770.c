#include "prototype.h"


int FUN_00413770(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if (((byte)*(undefined4 *)(iVar1 + 0x18) & 0xc) == 0xc) {
      if (param_2 == 0) {
        return iVar1;
      }
      param_2 = param_2 + -1;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

