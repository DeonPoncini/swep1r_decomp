#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428bd0(short param_1)

{
  if (DAT_0050c038 != -1) {
    *(uint *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c) =
         *(uint *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c) & 0xfffffffe;
  }
  if (param_1 == -1) {
    DAT_0050c038 = 0xffffffff;
    return;
  }
  DAT_0050c038 = (int)param_1;
  _DAT_0050c034 = (uint *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c);
  *_DAT_0050c034 = *_DAT_0050c034 | 1;
  DAT_0050c03c = 0;
  return;
}

