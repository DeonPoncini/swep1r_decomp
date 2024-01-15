#include "prototype.h"


undefined4 FUN_00485070(int *param_1)

{
  if (DAT_0050d548 == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  (**(code **)(*param_1 + 0x3c))(param_1);
  return 1;
}

