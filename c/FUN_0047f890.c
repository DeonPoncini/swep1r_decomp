#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047f890(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __ftol();
  iVar2 = FUN_0044e620(param_1,0);
  return *(undefined4 *)(&DAT_00e23240 + (iVar1 + iVar2 * 10) * 4);
}

