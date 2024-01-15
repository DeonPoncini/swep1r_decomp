#include "prototype.h"


void FUN_0048a450(uint param_1)

{
  int iVar1;
  
  if (DAT_0052e610 != param_1) {
    if (((param_1 ^ DAT_0052e610) & 0x600) != 0) {
      if ((param_1 & 0x400) == 0) {
        if ((param_1 & 0x200) == 0) {
          (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1b,0);
        }
        else {
          (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1b,1);
          (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x15,2);
        }
      }
      else {
        (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1b,1);
        (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x15,4);
      }
    }
    if (((param_1 ^ DAT_0052e610) & 0x2000) != 0) {
      if ((param_1 & 0x2000) == 0) {
        (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0xe,1);
      }
      else {
        (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0xe,0);
      }
    }
    if (((param_1 ^ DAT_0052e610) & 0x800) != 0) {
      if ((param_1 & 0x800) == 0) {
        (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0xd,1);
      }
      else {
        (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0xd,3);
      }
    }
    if (((param_1 ^ DAT_0052e610) & 0x1000) != 0) {
      if ((param_1 & 0x1000) == 0) {
        (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0xe,1);
      }
      else {
        (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0xe,3);
      }
    }
    if (((param_1 ^ DAT_0052e610) & 0x8000) != 0) {
      if (((param_1 & 0x8000) == 0) || (DAT_004c98b0 == 0)) {
        (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1c,0);
      }
      else {
        (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1c,1);
      }
    }
    if (((param_1 ^ DAT_0052e610) & 0x80) != 0) {
      DAT_0052e610 = param_1;
      iVar1 = FUN_0048b1b0(DAT_0052e614);
      if (iVar1 != 0) {
        return;
      }
    }
    DAT_0052e610 = param_1;
  }
  return;
}

