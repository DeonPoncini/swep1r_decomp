#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462da0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  FUN_004285d0(0xa1,0);
  FUN_004285d0(0xa2,0);
  FUN_004285d0(0xa3,0);
  if ((*(byte *)(param_1 + 8) & 0xf) != 0) goto LAB_0046341c;
  if ((*(float *)(param_1 + 0xc) <= _DAT_004ad23c) || (_DAT_004ad250 <= *(float *)(param_1 + 0xc)))
  {
    if ((*(float *)(param_1 + 0xc) <= _DAT_004ad22c) || (_DAT_004ad23c <= *(float *)(param_1 + 0xc))
       ) {
      if ((_DAT_004ad218 < *(float *)(param_1 + 0xc)) && (*(float *)(param_1 + 0xc) < _DAT_004ad22c)
         ) {
        fVar1 = *(float *)(param_1 + 0xc);
        if (DAT_0050c5f0 == 0) {
          FUN_004816b0();
        }
        uVar2 = __ftol();
        if (DAT_0050c5f0 == 0) {
          FUN_004816b0();
        }
        uVar3 = __ftol();
        if (DAT_0050c5f0 == 0) {
          FUN_004816b0();
        }
        uVar4 = __ftol();
        uVar5 = __ftol();
        FUN_004285d0(0xa1,1);
        FUN_00428660(0xa1,0xa0,100);
        fVar1 = fVar1 + fVar1;
        FUN_004286f0(0xa1,fVar1,fVar1);
        FUN_00428740(0xa1,uVar2,uVar3,uVar4,uVar5);
        FUN_0042b640(*(undefined4 *)(param_1 + 0x28),0xffffffff,0xffffffff,0xff,0xff,0,0xff);
        if ((*(uint *)(param_1 + 8) & 0x400) != 0) {
          FUN_00426c80(0x59,7,0x3e800000,0x3f800000,0);
          uVar6 = *(uint *)(param_1 + 8) & 0xfffffbff;
          goto LAB_00463250;
        }
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0xc) - _DAT_004ad22c;
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar2 = __ftol();
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar3 = __ftol();
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar4 = __ftol();
      uVar5 = __ftol();
      FUN_004285d0(0xa2,1);
      FUN_00428660(0xa2,0xa0,100);
      fVar1 = fVar1 + fVar1;
      FUN_004286f0(0xa2,fVar1,fVar1);
      FUN_00428740(0xa2,uVar2,uVar3,uVar4,uVar5);
      FUN_0042b640(*(undefined4 *)(param_1 + 0x28),0xffffffff,0xffffffff,0xff,0x80,0,0xff);
      if ((*(uint *)(param_1 + 8) & 0x200) != 0) {
        FUN_00426c80(0x59,7,0x3e800000,0x3f800000,0);
        uVar6 = *(uint *)(param_1 + 8) & 0xfffffdff;
        goto LAB_00463250;
      }
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0xc) - _DAT_004ad23c;
    if (DAT_0050c5f0 == 0) {
      FUN_004816b0();
    }
    uVar2 = __ftol();
    if (DAT_0050c5f0 == 0) {
      FUN_004816b0();
    }
    uVar3 = __ftol();
    if (DAT_0050c5f0 == 0) {
      FUN_004816b0();
    }
    uVar4 = __ftol();
    uVar5 = __ftol();
    FUN_004285d0(0xa3,1);
    FUN_00428660(0xa3,0xa0,100);
    fVar1 = fVar1 + fVar1;
    FUN_004286f0(0xa3,fVar1,fVar1);
    FUN_00428740(0xa3,uVar2,uVar3,uVar4,uVar5);
    FUN_0042b640(*(undefined4 *)(param_1 + 0x28),0xffffffff,0xffffffff,0xff,0,0,0xff);
    if ((*(uint *)(param_1 + 8) & 0x100) != 0) {
      FUN_00426c80(0x59,7,0x3e800000,0x3f800000,0);
      uVar6 = *(uint *)(param_1 + 8) & 0xfffffeff;
LAB_00463250:
      *(uint *)(param_1 + 8) = uVar6;
    }
  }
  if (*(float *)(param_1 + 0xc) <= _DAT_004ad344) {
    if (*(float *)(param_1 + 0xc) <= _DAT_004ad23c) {
      if (*(float *)(param_1 + 0xc) <= _DAT_004ad22c) {
        FUN_0042b640(*(undefined4 *)(param_1 + 0x14),0xffffffff,0xffffffff,0xff,0xff,0,0xffffffff);
        uVar2 = *(undefined4 *)(param_1 + 0x20);
        uVar4 = 0xff;
        uVar3 = 0xff;
      }
      else {
        FUN_0042b640(*(undefined4 *)(param_1 + 0x10),0xffffffff,0xffffffff,0xff,0,0,0xffffffff);
        uVar2 = *(undefined4 *)(param_1 + 0x24);
        uVar4 = 0;
        uVar3 = 0xff;
      }
    }
    else {
      FUN_0042b640(*(undefined4 *)(param_1 + 0x10),0xffffffff,0xffffffff,0,0,0,0xffffffff);
      FUN_0042b640(*(undefined4 *)(param_1 + 0x14),0xffffffff,0xffffffff,0,0,0,0xffffffff);
      FUN_0042b640(*(undefined4 *)(param_1 + 0x18),0xffffffff,0xffffffff,0,0,0,0xffffffff);
      FUN_0042b640(*(undefined4 *)(param_1 + 0x1c),0xffffffff,0xffffffff,0,0,0,0xffffffff);
      FUN_0042b640(*(undefined4 *)(param_1 + 0x20),0xffffffff,0xffffffff,0,0,0,0xffffffff);
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      uVar4 = 0;
      uVar3 = 0;
    }
  }
  else {
    FUN_0042b640(*(undefined4 *)(param_1 + 0x10),0xffffffff,0xffffffff,0xff,0,0,0xffffffff);
    FUN_0042b640(*(undefined4 *)(param_1 + 0x14),0xffffffff,0xffffffff,0xff,0,0,0xffffffff);
    FUN_0042b640(*(undefined4 *)(param_1 + 0x18),0xffffffff,0xffffffff,0xff,0,0,0xffffffff);
    FUN_0042b640(*(undefined4 *)(param_1 + 0x1c),0xffffffff,0xffffffff,0xff,0,0,0xffffffff);
    FUN_0042b640(*(undefined4 *)(param_1 + 0x20),0xffffffff,0xffffffff,0xff,0,0,0xffffffff);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar4 = 0;
    uVar3 = 0xff;
  }
  FUN_0042b640(uVar2,0xffffffff,0xffffffff,uVar3,uVar4,0,0xffffffff);
LAB_0046341c:
  if (((byte)*(undefined4 *)(param_1 + 8) & 0xf) == 1) {
    FUN_004816b0();
    uVar2 = __ftol();
    FUN_0042b640(*(undefined4 *)(param_1 + 0x28),0xffffffff,0xffffffff,0,0xff,0,uVar2);
  }
  if (((byte)*(undefined4 *)(param_1 + 8) & 0xf) == 3) {
    FUN_0042b640(*(undefined4 *)(param_1 + 0x28),0xffffffff,0xffffffff,0,0xff,0,0);
  }
  return;
}

