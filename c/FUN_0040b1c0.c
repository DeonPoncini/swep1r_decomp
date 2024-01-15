#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b1c0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 uVar7;
  uint local_10;
  int local_c;
  
  iVar3 = DAT_004d78a8;
  local_10 = 0;
  local_c = 0;
  if ((*(uint *)(DAT_004d78a8 + 100) & 0x4000) != 0) {
    FUN_00409ee0(0x16,0xffffffff,0xffffffff,0xffffffff,0);
    FUN_00409ee0(9,0xffffffff,0xffffffff,0xffffffff,0);
    return;
  }
  if (_DAT_004ac3a0 <= *(float *)(DAT_004d78a8 + 0x244)) {
    FUN_0040a500(0x17,8000);
    DAT_004d78b0 = 0;
    iVar3 = DAT_004d78a8;
  }
  else {
    iVar2 = __ftol();
    iVar4 = iVar2 - DAT_004b4dcc;
    if (iVar4 < 0) {
      iVar4 = DAT_004b4dcc - iVar2;
    }
    if (19999 < iVar4) {
      FUN_0040a500(0x17,iVar2);
      iVar3 = DAT_004d78a8;
      DAT_004b4dcc = iVar2;
    }
    DAT_004d78b0 = 1;
  }
  iVar2 = 0;
  if ((*(byte *)(iVar3 + 100) & 1) == 0) {
    FUN_0040a0b0(9);
  }
  else {
    FUN_00409ee0(9,0xffffffff,0xffffffff,0xffffffff,0);
  }
  if ((*(uint *)(DAT_004d78a8 + 100) & 0x200) == 0) {
    FUN_0040a0b0(0xd);
    if ((((*(int *)(DAT_004d78a8 + 0x140) == 0) ||
         (*(float *)(DAT_004d78a8 + 0x1a0) <= _DAT_004ac3ac)) ||
        (iVar3 = FUN_004318b0(*(int *)(DAT_004d78a8 + 0x140)), iVar3 == 0)) ||
       ((*(byte *)(iVar3 + 0x2c) & 0x20) == 0)) goto LAB_0040b32d;
    uVar7 = 0xc;
  }
  else {
    uVar7 = 0xd;
  }
  FUN_00409ee0(uVar7,0xffffffff,0xffffffff,0xffffffff,0);
LAB_0040b32d:
  uVar5 = 0;
  fVar1 = -1.0;
  pfVar6 = (float *)(DAT_004d78a8 + 0x288);
  do {
    if (fVar1 < *pfVar6) {
      fVar1 = *pfVar6;
      local_10 = local_10 | (uint)pfVar6[6];
      if (uVar5 < 3) {
        local_c = local_c + 1;
      }
      else {
        iVar2 = iVar2 + 1;
      }
    }
    uVar5 = uVar5 + 1;
    pfVar6 = pfVar6 + 1;
  } while ((int)uVar5 < 6);
  if ((local_10 & 8) != 0) {
    FUN_00409ee0(0x1a,0xffffffff,(uint)(local_c < iVar2) * 0xb4 + 0x5a,0xffffffff,0);
    return;
  }
  FUN_0040a0b0(0x1a);
  return;
}

