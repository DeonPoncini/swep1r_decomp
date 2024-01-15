#include "prototype.h"


undefined4 FUN_004877d0(char *param_1)

{
  if (DAT_00529508 != 0) {
    return 0;
  }
  DAT_00529508 = (**(code **)(DAT_00ecc420 + 0x30))(param_1,&DAT_004b6cfc);
  if (DAT_00529508 == 0) {
    DAT_00529508 = 0;
    return 0;
  }
  _strncpy(&DAT_005138b8,param_1,0x7f);
  DAT_00513937 = 0;
  return 1;
}

