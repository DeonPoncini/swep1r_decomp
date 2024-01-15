#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0047da10(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (_DAT_00e27104 <= *(float *)(param_1 + 0x20)) {
    if (*(float *)(param_1 + 0x20) < _DAT_00e27108) {
      uVar2 = 0xfe0000;
      goto LAB_0047dad2;
    }
    if (*(float *)(param_1 + 0x20) < _DAT_00e2710c) {
      uVar2 = 0xfc0000;
      goto LAB_0047dad2;
    }
    if (*(float *)(param_1 + 0x20) < _DAT_00e27110) {
      uVar2 = 0xf80000;
      goto LAB_0047dad2;
    }
    if (*(float *)(param_1 + 0x20) < _DAT_00e27114) {
      uVar2 = 0xf00000;
      goto LAB_0047dad2;
    }
    if (*(float *)(param_1 + 0x20) < _DAT_00e27118) {
      uVar2 = 0xe00000;
      goto LAB_0047dad2;
    }
    if (*(float *)(param_1 + 0x20) < _DAT_00e2711c) {
      uVar2 = 0xc00000;
      goto LAB_0047dad2;
    }
    if (*(float *)(param_1 + 0x20) < _DAT_00e27120) {
      uVar2 = 0x800000;
      goto LAB_0047dad2;
    }
  }
  else {
    uVar2 = 0xff0000;
LAB_0047dad2:
    if (_DAT_00e27100 <= *(float *)(param_1 + 0x2c)) {
      if (_DAT_00e27104 <= *(float *)(param_1 + 0x2c)) {
        if (_DAT_00e27108 <= *(float *)(param_1 + 0x2c)) {
          if (_DAT_00e2710c <= *(float *)(param_1 + 0x2c)) {
            if (_DAT_00e27110 <= *(float *)(param_1 + 0x2c)) {
              if (_DAT_00e27114 <= *(float *)(param_1 + 0x2c)) {
                if (_DAT_00e27118 <= *(float *)(param_1 + 0x2c)) {
                  if (*(float *)(param_1 + 0x2c) < _DAT_00e2711c) {
                    uVar2 = uVar2 & 0x7f0000;
                  }
                }
                else {
                  uVar2 = uVar2 & 0x3f0000;
                }
              }
              else {
                uVar2 = uVar2 & 0x1f0000;
              }
            }
            else {
              uVar2 = uVar2 & 0xf0000;
            }
          }
          else {
            uVar2 = uVar2 & 0x70000;
          }
        }
        else {
          uVar2 = uVar2 & 0x30000;
        }
      }
      else {
        uVar2 = uVar2 & 0x10000;
      }
      goto LAB_0047db92;
    }
  }
  uVar2 = 0;
LAB_0047db92:
  uVar3 = uVar2 << 8;
  uVar1 = (int)uVar2 >> 8;
  if (uVar2 != 0) {
    if ((*(float *)(param_1 + 0x28) < _DAT_00e270d0) || (_DAT_00e270d4 < *(float *)(param_1 + 0x1c))
       ) {
      uVar3 = 0;
    }
    if ((*(float *)(param_1 + 0x28) < _DAT_00e270d4) || (_DAT_00e270d8 < *(float *)(param_1 + 0x1c))
       ) {
      uVar2 = 0;
    }
    if ((*(float *)(param_1 + 0x28) < _DAT_00e270d8) || (_DAT_00e270dc < *(float *)(param_1 + 0x1c))
       ) {
      uVar1 = 0;
    }
  }
  uVar3 = uVar1 | uVar2 | uVar3;
  FUN_00431a50(param_1,0,0xff,0x10,3);
  FUN_00431a50(param_1,0,uVar3,0x10,2);
  return uVar3;
}

