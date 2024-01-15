#include "prototype.h"


int FUN_00440af0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = -1;
  iVar4 = 0;
  cVar1 = *(char *)(param_1 + 0x5e);
  if ((char)(&DAT_004bfee0)[cVar1] < '\x01') {
    return -1;
  }
  while ((iVar2 = FUN_00440aa0(param_1,cVar1,iVar4), iVar2 == 0 ||
         (iVar3 = iVar3 + 1, iVar3 != param_2))) {
    cVar1 = *(char *)(param_1 + 0x5e);
    iVar4 = iVar4 + 1;
    if ((char)(&DAT_004bfee0)[cVar1] <= iVar4) {
      return -1;
    }
  }
  return iVar4;
}

