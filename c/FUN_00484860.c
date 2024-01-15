#include "prototype.h"


char * FUN_00484860(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = _strrchr(param_1,0x5c);
  if (pcVar1 != (char *)0x0) {
    return pcVar1 + 1;
  }
  return param_1;
}

