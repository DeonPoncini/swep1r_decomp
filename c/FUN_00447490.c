#include "prototype.h"


void FUN_00447490(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint local_c [3];
  
  if ((param_1 < 0) || (DAT_00e9823c <= param_1)) {
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    if ((undefined4 *)(&DAT_00e93860)[param_1] != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(&DAT_00e93860)[param_1];
      *param_3 = *(undefined4 *)((&DAT_00e93860)[param_1] + 4);
      return;
    }
    FUN_0042d640(3,param_1 * 8 + 4,local_c,0xc);
    iVar3 = 3;
    puVar2 = local_c;
    do {
      uVar1 = *puVar2;
      iVar3 = iVar3 + -1;
      *puVar2 = (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8;
      puVar2 = puVar2 + 1;
    } while (iVar3 != 0);
    FUN_00447370(local_c,param_2,param_3,1);
    FUN_00446c20(param_2,param_3);
    (&DAT_00e93860)[param_1] = param_2;
    if (param_1 == 0x4e9) {
      DAT_0050c620 = *param_2;
    }
    if (param_1 == 0x4ea) {
      DAT_0050c624 = *param_2;
    }
    if (param_1 == 0x3a8) {
      DAT_0050c618 = *param_2;
    }
    if (param_1 == 0x160) {
      DAT_0050c61c = *param_2;
    }
    if (param_1 == 0x76) {
      FUN_00431df0(*param_2);
      return;
    }
  }
  return;
}

