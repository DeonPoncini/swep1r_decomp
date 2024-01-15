#include "prototype.h"


int FUN_00431790(int param_1,int param_2)

{
  if (param_1 == 0) {
    return param_1;
  }
  return *(int *)(*(int *)(param_1 + 0x18) + param_2 * 4);
}

