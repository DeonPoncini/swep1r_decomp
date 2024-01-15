#include "prototype.h"


void FUN_0045a7f0(int param_1,int param_2,uint param_3)

{
  if (param_2 != 0) {
    if (((&DAT_0050c908)[param_1] & param_3) == 0) {
      (&DAT_0050c918)[param_1] = (&DAT_0050c918)[param_1] | param_3;
    }
    (&DAT_0050c908)[param_1] = param_3 | (&DAT_0050c908)[param_1];
    return;
  }
  (&DAT_0050c908)[param_1] = (&DAT_0050c908)[param_1] & ~param_3;
  return;
}

