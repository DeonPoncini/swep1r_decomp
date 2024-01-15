#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004083d0(void)

{
  byte bVar1;
  int local_8;
  int local_4;
  
  DAT_00ec8740 = 0;
  if ((DAT_004d6b40 == 0) || (DAT_004d6b6c != 0 && DAT_004d6b48 != 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  DAT_00ec8744 = -(uint)bVar1 & 2 | -(uint)((short)DAT_004d6b44 != 0) & 4;
  if (DAT_00ec8744 != DAT_00ec8748) {
    DAT_00ec8740 = 0x10000000;
    if (((DAT_00ec8744 ^ DAT_00ec8748) & 2) != 0) {
      DAT_00ec8740 = 0x10000002;
    }
    if (((DAT_00ec8744 ^ DAT_00ec8748) & 4) != 0) {
      DAT_00ec8740 = DAT_00ec8740 | 4;
    }
  }
  DAT_00ec8748 = DAT_00ec8744;
  FUN_004082e0(&local_8,&local_4);
  DAT_00ec874c = local_8;
  DAT_00ec8754 = local_4;
  if ((local_8 != DAT_00ec8750) || (local_4 != DAT_00ec8758)) {
    DAT_00ec8740 = DAT_00ec8740 | 0x80000001;
  }
  DAT_00ec8750 = local_8;
  DAT_00ec8764 = DAT_00ec87c4;
  DAT_00ec8758 = local_4;
  DAT_00ec875c = DAT_00ec87c0;
  if ((DAT_00ec87c0 != _DAT_00ec8760) || (DAT_00ec87c4 != _DAT_00ec8768)) {
    DAT_00ec8740 = DAT_00ec8740 | 0x20000001;
  }
  _DAT_00ec8760 = DAT_00ec87c0;
  _DAT_00ec8768 = DAT_00ec87c4;
  return;
}

