#include "prototype.h"


void FUN_004899a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_00529578 != (int *)0x0) {
    (**(code **)(*DAT_00ec8e00 + 0x20))(DAT_00ec8e00,0,DAT_00529578);
    (**(code **)(*DAT_00529578 + 8))(DAT_00529578);
  }
  if (DAT_00ec8d00 != (int *)0x0) {
    (**(code **)(*DAT_00ec8d00 + 8))(DAT_00ec8d00);
  }
  puVar2 = &DAT_00529578;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00ec8da0;
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00ec8ca0;
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

