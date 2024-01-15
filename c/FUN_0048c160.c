#include "prototype.h"


undefined4 FUN_0048c160(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0048c190(param_1,param_2,&param_2);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}

