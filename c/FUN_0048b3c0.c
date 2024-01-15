#include "prototype.h"


bool FUN_0048b3c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_40;
  undefined4 uStack_34;
  
  uStack_40 = 0;
  iVar1 = (**(code **)(*DAT_0052e640 + 0x18))(DAT_0052e640,&DAT_0052e648);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x14))(DAT_0052e644,DAT_0052e648);
  if (iVar1 != 0) {
    return false;
  }
  puVar2 = &uStack_40;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  uStack_34 = DAT_00ec8dac;
  uStack_40 = 0x2c;
  iVar1 = (**(code **)(*DAT_0052e648 + 0x44))(DAT_0052e648,&uStack_40);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x30))(DAT_0052e644,DAT_0052e648);
  return iVar1 == 0;
}

