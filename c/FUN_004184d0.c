#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004184d0(void)

{
  float fVar1;
  uint uVar2;
  undefined2 extraout_var;
  uint uVar3;
  uint local_10;
  uint local_c;
  uint local_8;
  undefined4 uStack_4;
  
  uVar2 = __ftol();
  FUN_004285d0(0xfa,0);
  if (DAT_004d87bc != 0) {
    FUN_00417120(0x3f1,&local_10,&local_c);
    FUN_00428660(0xfa,DAT_004d79f0,CONCAT22(extraout_var,DAT_004d7c4c));
    if (DAT_00ec86c4 == 0x200) {
      local_8 = DAT_004d8780;
      fVar1 = (float)(ulonglong)DAT_004d8788 * (float)_DAT_004ac408;
    }
    else {
      local_8 = DAT_004d8788;
      fVar1 = (float)(ulonglong)DAT_004d8788;
    }
    uStack_4 = 0;
    FUN_004286f0(0xfa,fVar1 / (float)(ulonglong)local_10,
                 (float)(ulonglong)DAT_004d8780 / (float)(ulonglong)local_c);
    FUN_00428740(0xfa,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    uVar3 = DAT_004d8784;
    if (uVar2 <= DAT_004d8784) {
      uVar3 = uVar2;
    }
    DAT_004d8784 = DAT_004d8784 - uVar3;
    if (DAT_004d8784 == 0) {
      DAT_004d8784 = 0xfa;
      DAT_004d87c0 = (uint)(DAT_004d87c0 == 0);
    }
    FUN_004285d0(0xfa,DAT_004d87c0);
    FUN_004287e0(0xfa,0x800);
    FUN_004287e0(0xfa,0x10000);
  }
  return;
}

