#include "prototype.h"


char * FUN_004845e0(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_004845b0(param_1);
  pcVar1 = _strrchr(pcVar1,0x2e);
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
  return pcVar1 + 1;
}

