#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409450(short param_1,short param_2,short param_3,short param_4)

{
  DAT_00ec8564 = (float)(int)param_1 * _DAT_004ac358;
  DAT_00ec8568 = (float)(int)param_2 * _DAT_004ac358;
  DAT_00ec856c = (float)(int)param_3 * _DAT_004ac358;
  _DAT_00ec8570 = (float)(int)param_4 * _DAT_004ac358;
  FUN_0048b340(DAT_00ec8564,DAT_00ec8568,DAT_00ec856c,DAT_00ec8578,DAT_00ec857c);
  return;
}

