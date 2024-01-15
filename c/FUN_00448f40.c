#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448f40(void)

{
  FUN_004270f0(0x42480000,0x43960000);
  FUN_00448d40();
  FUN_00448d60();
  FUN_00445c00();
  if (DAT_004c17e0 == -1) {
    FUN_00447300(0x634d616e,6);
    FUN_00447300(0x4a646765,1);
    FUN_00447300(0x48616e67,1);
  }
  else {
    FUN_00448d90();
  }
  DAT_00e996dc = DAT_00e996dc & 0xfffff7ff;
  FUN_00483a60(0,0,0);
  FUN_0044e0e0(0x3e4,1000,0xff,0xff,0xff,0xff);
  _DAT_0050cb78 = 1;
  DAT_00e996dc = DAT_00e996dc | 1;
  return;
}

