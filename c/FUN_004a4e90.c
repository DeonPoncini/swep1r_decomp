#include "prototype.h"


undefined4 FUN_004a4e90(uint param_1,uint param_2,byte param_3)

{
  if (((&DAT_00dfac89)[param_1 & 0xff] & param_3) == 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(ushort *)(&DAT_004d1d9a + (param_1 & 0xff) * 2) & param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  return 1;
}

