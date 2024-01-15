#include "prototype.h"


void FUN_004117b0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_004d8160;
  do {
    if (puVar1[3] == param_1) {
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[3] = 0;
    }
    puVar1 = puVar1 + 4;
  } while ((int)puVar1 < 0x4d8200);
  return;
}

