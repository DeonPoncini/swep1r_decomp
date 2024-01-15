#include "prototype.h"


void FUN_0048b1b0(void)

{
  int iVar1;
  int iVar2;
  
  if (((byte)DAT_0052e610 & 0x80) == 0) {
    iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x10,1);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = 0;
    iVar2 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x11,1);
    if (iVar2 != 0) {
      return;
    }
  }
  else {
    iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x10,2);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = 0;
    iVar2 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x11,2);
    if (iVar2 != 0) {
      return;
    }
  }
  DAT_0052e614 = iVar1;
  if (DAT_0052e614 == 1) {
    (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x12,2);
    return;
  }
  if (DAT_0052e614 == 2) {
    (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x12,3);
    return;
  }
  (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x12,1);
  return;
}

