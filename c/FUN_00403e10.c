#include "prototype.h"


void FUN_00403e10(undefined *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_004b2910 != 0) {
    iVar3 = 6;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    puVar2 = (undefined4 *)(param_1 + 0x198);
    do {
      puVar2[1] = 0xffffffff;
      *(undefined *)(puVar2 + 2) = 0;
      puVar2[8] = 0xffffffff;
      puVar2[-0x54] = 0;
      puVar2[-0x53] = 0;
      *puVar2 = 0;
      FUN_004046e0(puVar2 + -0x54);
      puVar2 = puVar2 + 0x5d;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_004d55d0 = (&DAT_00eca0e4)[DAT_004d6b3c * 0x9d];
    if ((&DAT_00ec9ec5)[DAT_004d6b3c * 0x274] == '\x06') {
      DAT_004d55d4 = 1;
    }
    else {
      uVar1 = FUN_0049edd0(&DAT_00ec9fcc + DAT_004d6b3c * 0x274,&DAT_004b2638);
      iVar3 = FUN_0049ed50(uVar1);
      if (iVar3 != 0) {
        DAT_004d55d4 = 1;
      }
    }
    if (((&DAT_00eca0ec)[DAT_004d6b3c * 0x9d] & 0x100) == 0) {
      DAT_004b2914 = 0;
      DAT_004b2910 = 0;
    }
  }
  return;
}

