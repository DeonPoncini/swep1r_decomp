#include "prototype.h"


void FUN_0049f200(LPVOID param_1)

{
  LPVOID lpMem;
  int iVar1;
  undefined4 local_4;
  
  lpMem = param_1;
  if (param_1 != (LPVOID)0x0) {
    FUN_004a1670(9);
    iVar1 = FUN_004a3400(lpMem,&local_4,&param_1);
    if (iVar1 != 0) {
      FUN_004a3460(local_4,param_1,iVar1);
      FUN_004a16f0(9);
      return;
    }
    FUN_004a16f0(9);
    HeapFree(DAT_00ecd604,0,lpMem);
  }
  return;
}

