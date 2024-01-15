#include "prototype.h"


undefined4 FUN_00431b00(int param_1,int param_2)

{
  if (param_2 == 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  if (param_2 == 2) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}

