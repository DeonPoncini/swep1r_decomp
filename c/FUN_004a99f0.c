#include "prototype.h"


uint FUN_004a99f0(uint param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((param_1 != 0xffffffff) &&
     ((pcVar1 = param_2[3], ((uint)pcVar1 & 1) != 0 ||
      ((((uint)pcVar1 & 0x80) != 0 && (((uint)pcVar1 & 2) == 0)))))) {
    if (param_2[2] == (char *)0x0) {
      FUN_004a6a10(param_2);
    }
    if (*param_2 == param_2[2]) {
      if (param_2[1] != (char *)0x0) {
        return 0xffffffff;
      }
      *param_2 = *param_2 + 1;
    }
    if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
      pcVar1 = *param_2;
      *param_2 = pcVar1 + -1;
      pcVar1[-1] = (char)param_1;
    }
    else {
      pcVar1 = *param_2;
      pcVar2 = pcVar1 + -1;
      *param_2 = pcVar2;
      if (*pcVar2 != (char)param_1) {
        *param_2 = pcVar1;
        return 0xffffffff;
      }
    }
    param_2[1] = param_2[1] + 1;
    param_2[3] = (char *)((uint)param_2[3] & 0xffffffef | 1);
    return param_1 & 0xff;
  }
  return 0xffffffff;
}

