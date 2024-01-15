#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004603f0(undefined4 param_1_00,uint param_1)

{
  float10 fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  iVar2 = FUN_0045d350(param_1_00);
  if (iVar2 < 2) {
    if ((param_1 & 1) == 0) {
      FUN_004285d0(5,1);
      FUN_00428660(5,0,0x15);
      FUN_004286f0(5,0x43a00000,0x40000000);
      FUN_00428740(5,0x59,0xffffff8c,0x36,0x40);
      FUN_004285d0(6,0);
      FUN_004285d0(0xd,1);
      FUN_00428660(0xd,0,0x17);
      FUN_004286f0(0xd,0x42a00000,0x3f800000);
      FUN_00428740(0xd,0,0x6e,0xffffff8f,0xfffffffe);
      FUN_004285d0(0,1);
      FUN_00428660(0,0x12,0x22);
      FUN_00428740(0,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(0xb,1);
      FUN_00428660(0xb,0x42,0x23);
      FUN_004286f0(0xb,0x41ac0000,0x3f800000);
      FUN_00428740(0xb,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(4,1);
      FUN_00428660(4,0x6d,0x23);
      FUN_00428740(4,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(0xc,1);
      FUN_00428660(0xc,0xd3,0x23);
      FUN_004286f0(0xc,0x41ac0000,0x3f800000);
      FUN_00428740(0xc,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(1,1);
      FUN_00428660(1,0xfe,0x22);
      FUN_00428740(1,0x59,0xffffff8c,0x36,0xfffffffe);
    }
    else {
      FUN_004285d0(6,1);
      FUN_00428660(6,0x17,0xdc);
      FUN_004286f0(6,0x43870000,0x40000000);
      FUN_00428740(6,0x59,0xffffff8c,0x36,0x40);
      FUN_004285d0(5,1);
      FUN_00428660(5,0x17,0x14);
      FUN_004286f0(5,0x43870000,0x40000000);
      FUN_00428740(5,0x59,0xffffff8c,0x36,0x40);
      FUN_004285d0(0xd,0);
      FUN_004285d0(0,0);
      FUN_004285d0(0xb,0);
      FUN_004285d0(4,0);
      FUN_004285d0(0xc,0);
      FUN_004285d0(1,0);
    }
    FUN_004285d0(3,1);
    FUN_00428660(3,0xe5,0xb4);
    FUN_00428740(3,0,0x6e,0xffffff8f,0xfffffffe);
    FUN_004285d0(2,1);
    FUN_00428660(2,0xf3,0xb4);
    FUN_004286f0(2,0x40c00000,0x3f800000);
    FUN_00428740(2,0,0x6e,0xffffff8f,0xfffffffe);
    FUN_004285d0(10,1);
    FUN_00428660(10,0x10b,0xb4);
    FUN_00428740(10,0,0x6e,0xffffff8f,0xfffffffe);
    if ((param_1 & 4) == 0) {
      if ((param_1 & 2) == 0) {
        fVar4 = (float10)_DAT_004ad218;
      }
      else {
        fVar4 = (float10)FUN_004456a0();
        fVar4 = ((float10)_DAT_004ad22c - fVar4) + ((float10)_DAT_004ad22c - fVar4);
        if ((float10)_DAT_004ad22c < fVar4) {
          fVar4 = (float10)_DAT_004ad22c;
        }
        fVar4 = ((float10)_DAT_004ad22c - (float10)DAT_004c5298) * fVar4;
      }
      fVar1 = (float10)_DAT_004ad358;
      FUN_004285d0(7,1);
      uVar3 = __ftol();
      FUN_00428660(7,0x113,uVar3);
      FUN_004286f0(7,0x3f800000,(float)(fVar4 * fVar1) * _DAT_004ad228);
      FUN_00428740(7,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(9,1);
      uVar3 = __ftol();
      FUN_00428660(9,0x113,uVar3);
      FUN_00428740(9,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(8,0);
    }
    else {
      FUN_004285d0(7,1);
      FUN_00428660(7,0x16,0x15);
      FUN_004286f0(7,0x3f800000,0x42c70000);
      FUN_00428740(7,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(8,1);
      FUN_00428660(8,0x11b,0x15);
      FUN_004286f0(8,0x3f800000,0x42c70000);
      FUN_00428740(8,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(9,1);
      FUN_00428660(9,0x113,0xa0);
      FUN_00428740(9,0x59,0xffffff8c,0x36,0xfffffffe);
    }
    FUN_004285d0(0x19,_DAT_004ad218 < DAT_004c5298);
    FUN_00428660(0x19,0xe8,0x3c);
    FUN_004286f0(0x19,0x417a0000,0x407a0000);
    uVar3 = __ftol();
    FUN_00428740(0x19,0,0x37,0x47,uVar3);
  }
  return;
}

