#include "prototype.h"


void FUN_004575d0(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00431a50(*(int *)(param_1 + 0x28),2,3,0x10,2);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00431a50(*(int *)(param_1 + 0x30),2,3,0x10,2);
  }
  if (DAT_0050c930 == 5) {
    DAT_0050c930 = 0;
  }
  return;
}

