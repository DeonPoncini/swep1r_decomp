#include "prototype.h"


undefined4 FUN_00440990(char *param_1,char *param_2)

{
  if ((DAT_0050c048 & 0x4000) == 0) {
    return 0;
  }
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}

