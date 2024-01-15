#include "prototype.h"


bool FUN_0048aeb0(void)

{
  int iVar1;
  
  DAT_0052e610 = 0;
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,7,1);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0xe,1);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x17,4);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,4,1);
  if (iVar1 != 0) {
    return false;
  }
  DAT_0052e610 = DAT_0052e610 | 1;
  iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x10,2);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x11,2);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x12,1);
  if (iVar1 != 0) {
    return false;
  }
  DAT_0052e610 = DAT_0052e610 | 0x80;
  DAT_0052e614 = 0;
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1f,1);
  if (iVar1 != 0) {
    return false;
  }
  DAT_0052e610 = DAT_0052e610 | 0x10;
  iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0xd,1);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0xe,1);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1b,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x15,2);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x13,5);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x14,6);
  if (iVar1 != 0) {
    return false;
  }
  DAT_0052e610 = DAT_0052e610 | 0x200;
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0xf,1);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x19,6);
  if (iVar1 != 0) {
    return false;
  }
  if ((*(int *)(&DAT_0052d5a8 + DAT_0052d568 * 0x60) != 0) ||
     (*(int *)(&DAT_0052d5a8 + DAT_0052d560 * 0x60) != 0)) {
    iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x29,1);
    if (iVar1 != 0) {
      return false;
    }
  }
  if (*(int *)(DAT_0052e618 + 0x14) == 0) {
    iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x21,0);
    if (iVar1 != 0) {
      return false;
    }
  }
  else {
    iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x21,1);
    if (iVar1 != 0) {
      return false;
    }
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,9,2);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0xb,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1d,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1c,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,8,3);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1a,1);
  if (iVar1 != 0) {
    return false;
  }
  DAT_0052e610 = DAT_0052e610 | 2;
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,2,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x16,1);
  return iVar1 == 0;
}

