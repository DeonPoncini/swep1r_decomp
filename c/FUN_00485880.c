#include "prototype.h"


undefined4 FUN_00485880(int param_1,int *param_2)

{
  if (param_1 < 0) {
    return 0;
  }
  if (DAT_0050feb4 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
    }
    return 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = *param_2 + (&DAT_0050f668)[param_1];
  }
  if ((DAT_0050feb0 != 0) && ((&DAT_0050e868)[param_1] != 0)) {
    DAT_0050feb0 = 0;
  }
  return (&DAT_0050e868)[param_1];
}

