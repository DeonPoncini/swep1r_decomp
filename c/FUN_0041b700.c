#include "prototype.h"


undefined4 FUN_0041b700(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_004e9ebc != 0) {
    return 0;
  }
  puVar2 = &DAT_004e9d18;
  for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_004e9918;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004e9ec0 = 0;
  DAT_004b6710 = 1;
  FUN_0041ba00();
  DAT_004e9ebc = 1;
  return 1;
}

