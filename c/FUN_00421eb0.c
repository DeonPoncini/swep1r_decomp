#include "prototype.h"


undefined4 FUN_00421eb0(int param_1)

{
  if (DAT_004eb450 == 0) {
    return 0;
  }
  FUN_004226c0();
  if (param_1 == 0) {
    FUN_00485070(DAT_004eb414);
    SuspendThread(DAT_004eb478);
  }
  else {
    FUN_004232c0();
  }
  if (DAT_004eb464 != 0) {
    FUN_0048c050(DAT_004eb464);
    DAT_004eb464 = 0;
  }
  if (param_1 != 0) {
    FUN_00484a20();
  }
  DAT_004eb450 = 0;
  DAT_004eb474 = (uint)(param_1 == 0);
  return 1;
}

