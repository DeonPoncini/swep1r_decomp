#include "prototype.h"


void FUN_0045a460(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = DAT_004c4008 != 0;
  (&DAT_0050c918)[param_1] = 0;
  if (bVar3) {
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 1,1);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 2,2);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 4,4);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 8,8);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x10,0x10);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x20,0x20);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x40,0x40);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x80,0x80);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x100,0x100);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x200,0x200);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x400,0x400);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x800,0x800);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x1000,0x1000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x2000,0x2000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x4000,0x4000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x8000,0x8000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x10000,0x10000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x20000,0x20000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x40000,0x40000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x80000,0x80000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x100000,0x100000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x200000,0x200000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x400000,0x400000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x800000,0x800000);
    uVar1 = (&DAT_0050c908)[param_1];
    if ((uVar1 & 0x40000) == 0) {
      if ((uVar1 & 0x10000) == 0) {
        if ((uVar1 & 0x20000) != 0) {
          *(undefined4 *)(&DAT_0050c970 + param_1 * 4) = 1;
        }
      }
      else {
        *(undefined4 *)(&DAT_0050c970 + param_1 * 4) = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)(&DAT_0050c970 + param_1 * 4) = 0;
    }
    if ((uVar1 & 0x80000) == 0) {
      if ((uVar1 & 0x4000) == 0) {
        if ((uVar1 & 0x8000) != 0) {
          *(undefined4 *)(&DAT_0050c980 + param_1 * 4) = 1;
        }
      }
      else {
        *(undefined4 *)(&DAT_0050c980 + param_1 * 4) = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)(&DAT_0050c980 + param_1 * 4) = 0;
    }
    uVar2 = (&DAT_0050c918)[param_1];
    if (((uVar2 & 0x100000) != 0) && (*(int *)(&DAT_0050c970 + param_1 * 4) == -1)) {
      (&DAT_0050c908)[param_1] = uVar1 | 0x10000;
    }
    if (((uVar2 & 0x200000) != 0) && (*(int *)(&DAT_0050c970 + param_1 * 4) == 1)) {
      (&DAT_0050c908)[param_1] = (&DAT_0050c908)[param_1] | 0x20000;
    }
    if (((uVar2 & 0x400000) != 0) && (*(int *)(&DAT_0050c980 + param_1 * 4) == -1)) {
      (&DAT_0050c908)[param_1] = (&DAT_0050c908)[param_1] | 0x4000;
    }
    if (((uVar2 & 0x800000) != 0) && (*(int *)(&DAT_0050c980 + param_1 * 4) == 1)) {
      (&DAT_0050c908)[param_1] = (&DAT_0050c908)[param_1] | 0x8000;
    }
  }
  return;
}

