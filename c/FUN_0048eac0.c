#include "prototype.h"


void FUN_0048eac0(undefined4 param_1)

{
  if (DAT_00deb10c != (code *)0x0) {
    (*DAT_00deb10c)(param_1);
    return;
  }
  FUN_0048eb00(param_1);
  (**(code **)(DAT_00ecc428 + 0x24))(param_1);
  return;
}

