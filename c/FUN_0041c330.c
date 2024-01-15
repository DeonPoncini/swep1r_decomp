#include "prototype.h"


undefined4 FUN_0041c330(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_00ea0260;
  puVar1 = (undefined4 *)(param_1 + 0x28);
  do {
    puVar2 = puVar1;
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
    puVar1 = puVar2 + 1;
  } while ((int)puVar3 < 0xea02b0);
  DAT_00ea02b0 = puVar2[1];
  DAT_00ea02b4 = puVar2[2];
  DAT_00ea02b8 = puVar2[3];
  DAT_00ea02bc = puVar2[4];
  FUN_00411120(*(undefined2 *)(param_1 + 0x24),(undefined4 *)(param_1 + 0x28));
  return 1;
}

