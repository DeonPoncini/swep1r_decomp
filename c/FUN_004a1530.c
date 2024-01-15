#include "prototype.h"


char * FUN_004a1530(char *param_1,int param_2,byte **param_3)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 < 1) {
    return (char *)0x0;
  }
  FUN_004a1710(param_3);
  param_2 = param_2 + -1;
  pcVar3 = param_1;
  if (param_2 != 0) {
    while( true ) {
      pbVar1 = param_3[1];
      param_3[1] = pbVar1 + -1;
      if ((int)(pbVar1 + -1) < 0) {
        uVar2 = FUN_004a40f0(param_3);
      }
      else {
        uVar2 = (uint)**param_3;
        *param_3 = *param_3 + 1;
      }
      if (uVar2 == 0xffffffff) break;
      *pcVar3 = (char)uVar2;
      pcVar3 = pcVar3 + 1;
      if (((char)uVar2 == '\n') || (param_2 = param_2 + -1, param_2 == 0)) goto LAB_004a1588;
    }
    if (pcVar3 == param_1) {
      FUN_004a1780(param_3);
      return (char *)0x0;
    }
  }
LAB_004a1588:
  *pcVar3 = '\0';
  FUN_004a1780(param_3);
  return param_1;
}

