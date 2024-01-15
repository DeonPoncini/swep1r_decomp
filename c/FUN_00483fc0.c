#include "prototype.h"


void FUN_00483fc0(undefined4 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_00dfb040;
  do {
    FUN_00431a00(puVar1,param_1);
    puVar1 = puVar1 + 0x16c;
  } while ((int)puVar1 < 0xdfb5f0);
  return;
}

