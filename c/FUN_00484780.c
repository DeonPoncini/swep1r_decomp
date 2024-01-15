#include "prototype.h"


undefined4 FUN_00484780(code *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  bVar3 = false;
  if (param_1 != (code *)0x0) {
    iVar4 = 0;
    cVar2 = *param_2;
    while (cVar2 != '\0') {
      if (cVar2 == '\\') {
        bVar3 = true;
        iVar5 = iVar4;
      }
      iVar1 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar2 = param_2[iVar1];
    }
    if (bVar3) {
      iVar5 = iVar5 + 1;
    }
    iVar5 = FUN_0049f850(&DAT_0050cd18,0x800,param_2 + iVar5);
    iVar4 = FUN_0049f850(&DAT_0050cd18 + iVar5,0x800 - iVar5,s___d___004c7d68,param_3);
    FUN_004a10e0(&DAT_0050cd18 + iVar5 + iVar4,(0x800 - iVar5) - iVar4,param_4,&stack0x00000014);
    (*param_1)(&DAT_0050cd18);
  }
  return 0;
}

