#include "prototype.h"


void FUN_00425900(int param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  
  (&DAT_00e9edc0)[DAT_0050b5ec] = param_1;
  DAT_0050b5ec = DAT_0050b5ec + 1;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((*(uint *)(param_1 + 0x100) & 0x20) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x108);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10c);
  }
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar2;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if ((((byte)*(uint *)(param_1 + 0x100) & 0xf) == 8) && (*(int *)(param_1 + 0x124) != 0)) {
    puVar1 = (ushort *)(*(int *)(param_1 + 0x124) + 0xc);
    *puVar1 = *puVar1 & 0xfff7;
  }
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 0x1000000;
  return;
}

