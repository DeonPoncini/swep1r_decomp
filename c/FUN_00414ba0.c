#include "prototype.h"


char * FUN_00414ba0(int param_1,char *param_2,int param_3)

{
  if ((param_2 != (char *)0x0) && (*(char **)(param_1 + 0x4d4) != (char *)0x0)) {
    _strncpy(param_2,*(char **)(param_1 + 0x4d4),param_3 - 1);
    param_2[param_3 + -1] = '\0';
    return param_2;
  }
  return *(char **)(param_1 + 0x4d4);
}

