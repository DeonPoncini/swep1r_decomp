#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405cf0(int param_1)

{
  if (param_1 < 0) {
    DAT_00e98ee0 = 0;
    _DAT_00ec8810 = 0;
    DAT_00e98ee2 = 0;
    _DAT_00ec8814 = 0;
    _DAT_00ec8818 = 0;
    _DAT_00ec881c = 0;
    _DAT_00e98ee4 = 0;
    _DAT_00e98ee8 = 0;
    _DAT_00e98eec = 0;
    _DAT_00e98ef0 = 0;
    param_1 = -param_1;
  }
  if (param_1 == 0) {
    _DAT_00ec87c8 = 0;
    DAT_00ec87c4 = 0;
    DAT_00ec87c0 = 0;
  }
  else {
    if (param_1 == 1) {
      _DAT_00ec87e0 = 0;
      _DAT_00ec87dc = 0;
      _DAT_00ec87d8 = 0;
      DAT_004d6b68 = 0;
      DAT_004d6b64 = 0;
      DAT_004d6b60 = 0;
      return;
    }
    if (param_1 == 2) {
      _DAT_00ec87f8 = 0;
      _DAT_00ec87f4 = 0;
      _DAT_00ec87f0 = 0;
      return;
    }
  }
  return;
}

