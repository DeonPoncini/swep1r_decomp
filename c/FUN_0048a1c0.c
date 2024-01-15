#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048a1c0(void)

{
  FUN_0048ac50();
  if (DAT_0052e63c != (int *)0x0) {
    (**(code **)(*DAT_0052e63c + 8))(DAT_0052e63c);
    DAT_0052e63c = (int *)0x0;
  }
  if (DAT_0052e648 != (int *)0x0) {
    (**(code **)(*DAT_0052e648 + 8))(DAT_0052e648);
    DAT_0052e648 = (int *)0x0;
  }
  if (DAT_0052e644 != (int *)0x0) {
    (**(code **)(*DAT_0052e644 + 8))(DAT_0052e644);
    DAT_0052e644 = (int *)0x0;
  }
  DAT_0052e61c = 0;
  _DAT_0052d55c = 0;
  DAT_0052e618 = 0;
  DAT_0052e620 = 0;
  DAT_0052e650 = 0;
  return;
}

