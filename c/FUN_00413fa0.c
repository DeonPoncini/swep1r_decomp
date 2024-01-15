#include "prototype.h"


undefined4 FUN_00413fa0(int param_1)

{
  if (*(int *)(param_1 + 0x53c) != 0) {
    return *(undefined4 *)(param_1 + 0x540);
  }
  return 0xffffffff;
}

