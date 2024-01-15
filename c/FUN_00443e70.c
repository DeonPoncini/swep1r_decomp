#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443e70(byte param_1)

{
  undefined local_40 [48];
  float local_10;
  float local_c;
  float local_8;
  
  if ((param_1 & 1) != 0) {
    FUN_00445500(local_40);
    if ((param_1 & 2) == 0) {
      _DAT_00e98e60 = local_10 + _DAT_00e98e60;
      DAT_00e98e64 = local_c + DAT_00e98e64;
      DAT_00e98e68 = local_8 + DAT_00e98e68;
    }
    else {
      FUN_00430a00(&DAT_00e98e60,&DAT_00e98e60,local_40);
      if (DAT_00e98e1c != 2) {
        FUN_00430980(&DAT_00e98290,&DAT_00e98290,local_40);
        return;
      }
    }
  }
  return;
}

