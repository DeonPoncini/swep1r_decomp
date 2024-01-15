#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0049ec50(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  
  iVar2 = _DAT_00ecd60c;
  if (DAT_00dfab38 == 0) {
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) {
          return 0;
        }
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    bVar5 = (bVar5 < bVar3) * -2 + 1;
  }
  else {
    LOCK();
    _DAT_00ecd60c = _DAT_00ecd60c + 1;
    UNLOCK();
    bVar1 = 0 < DAT_00ecd608;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_00ecd60c = iVar2;
      FUN_004a1670(0x13);
    }
    uVar6 = (uint)bVar1;
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) goto LAB_0049ecff;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      bVar4 = FUN_0049fee0(bVar4,bVar5);
      bVar5 = FUN_0049fee0();
    } while (bVar4 == bVar5);
    bVar5 = (bVar4 < bVar5) * -2 + 1;
LAB_0049ecff:
    if (uVar6 == 0) {
      LOCK();
      _DAT_00ecd60c = _DAT_00ecd60c + -1;
      UNLOCK();
    }
    else {
      FUN_004a16f0(0x13);
    }
  }
  return bVar5;
}

