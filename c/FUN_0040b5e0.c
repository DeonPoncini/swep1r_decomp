#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b5e0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(DAT_004d78a8 + 100) & 0x2000) == 0) {
    uVar2 = *(uint *)(DAT_004d78a8 + 0x60) & 0x800000;
    if ((uVar2 == 0) || (DAT_004d78c8 != 0)) {
      if ((uVar2 == 0) && (DAT_004d78c8 != 0)) {
        FUN_00409ee0(8,0xffffffff,0xffffffff,0xffffffff,0);
        DAT_004d78c8 = 0;
      }
    }
    else {
      FUN_00409ee0(7,0xffffffff,0xffffffff,0xffffffff,0);
      DAT_004d78c8 = 1;
    }
  }
  else {
    FUN_00409ee0(6,0xffffffff,0xffffffff,0xffffffff,0);
  }
  if (((*(uint *)(DAT_004d78a8 + 100) & 8) == 0) || (_DAT_00ec8854 == _DAT_004ac390)) {
    iVar1 = FUN_0040a0b0(2);
    if (iVar1 != 0) {
      DAT_004d78ac = 0;
    }
  }
  else if ((*(uint *)(DAT_004d78a8 + 100) & 0x200) == 0) {
    FUN_00409ee0(2,0xffffffff,0xffffffff,0xffffffff,0);
  }
  iVar1 = DAT_004d78a8;
  if (*(float *)(DAT_004d78a8 + 0x208) != (float)_DAT_004ac3c0) {
    if (_DAT_004d78c4 != (float)_DAT_004ac3c0) {
      uVar2 = __ftol();
      uVar3 = __ftol();
      if (-1 < (int)(uVar2 ^ uVar3)) goto LAB_0040b71c;
    }
    if (_DAT_004ac390 <= *(float *)(iVar1 + 0x208)) {
      uVar4 = 0x10e;
    }
    else {
      uVar4 = 0x5a;
    }
    FUN_00409ee0(10,0xffffffff,uVar4,0xffffffff,0);
  }
LAB_0040b71c:
  _DAT_004d78c4 = (float)*(undefined4 *)(DAT_004d78a8 + 0x208);
  return;
}

