#include "prototype.h"


void FUN_00411390(int param_1,int param_2,uint param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((((param_3 & 2) == 0) || ((param_3 & 8) == 0)) &&
       (((param_3 & 1) == 0 || ((param_3 & 4) == 0)))) {
      if ((param_3 & 2) != 0) {
        FUN_00414b60(param_1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_2 + 0x28));
      }
      if ((param_3 & 8) != 0) {
        FUN_00414b60(param_1,*(undefined4 *)(param_1 + 0x24),
                     (*(int *)(param_2 + 0x30) - *(int *)(param_1 + 0x30)) +
                     *(int *)(param_1 + 0x28));
      }
      if ((param_3 & 1) != 0) {
        FUN_00414b60(param_1,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_1 + 0x28));
      }
      if ((param_3 & 4) != 0) {
        FUN_00414b60(param_1,(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x2c)) +
                             *(int *)(param_2 + 0x2c),*(undefined4 *)(param_1 + 0x28));
      }
    }
  }
  return;
}

