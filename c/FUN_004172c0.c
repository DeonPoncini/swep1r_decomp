#include "prototype.h"


undefined4 FUN_004172c0(int *param_1,int param_2,int param_3)

{
  if ((((*param_1 <= param_2) && (param_2 <= param_1[2])) && (param_1[1] <= param_3)) &&
     (param_3 <= param_1[3])) {
    return 1;
  }
  return 0;
}

