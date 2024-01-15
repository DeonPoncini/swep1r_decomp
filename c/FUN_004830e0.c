#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004830e0(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar1 = __ftol();
  sVar2 = __ftol();
  sVar3 = __ftol();
  sVar4 = __ftol();
  *(short *)(param_1 + 0x10) = (sVar3 - sVar1) * 2 + 8;
  *(short *)(param_1 + 0x18) = (sVar3 + sVar1) * 2;
  *(short *)(param_1 + 0x12) = (sVar4 - sVar2) * 2 + 8;
  *(short *)(param_1 + 0x1a) = (sVar4 + sVar2) * 2;
  if (DAT_0050c058 != 0) {
    *(undefined2 *)(param_1 + 0x10) = 0x500;
    *(undefined2 *)(param_1 + 0x12) = 0x3c0;
    *(ushort *)(param_1 + 0x18) = (-(ushort)((DAT_00e9a9b0 & 1) != 0) & 0xfb00) + 0x500;
    *(ushort *)(param_1 + 0x1a) = (-(ushort)((DAT_00e9a9b0 & 2) != 0) & 0xfc40) + 0x3c0;
  }
  *(undefined2 *)(param_1 + 0x14) = 0x92;
  *(undefined2 *)(param_1 + 0x1c) = 0x36c;
  return;
}

