#include "prototype.h"


void FUN_00488a90(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_64 [20];
  uint local_14;
  
  puVar1 = local_64;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_64[0] = 100;
  local_14 = DAT_004c86c0 & 0xffff;
  do {
    iVar2 = (**(code **)(*DAT_00529578 + 0x14))(DAT_00529578,0,0,0,0x3000000,local_64);
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 == -0x7789fe3e) {
      iVar2 = (**(code **)(*DAT_00529578 + 0x6c))(DAT_00529578);
    }
  } while (iVar2 == 0);
  return;
}

