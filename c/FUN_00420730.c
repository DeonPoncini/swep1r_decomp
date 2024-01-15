#include "prototype.h"


undefined4 FUN_00420730(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if ((param_2 != 0) && (iVar2 = FUN_00414d90(param_1,param_2), iVar2 != 0)) {
    if (*(char **)(iVar2 + 0x4d4) == (char *)0x0) {
      return 0;
    }
    iVar3 = -1;
    pcVar4 = *(char **)(iVar2 + 0x4d4);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 == -2) {
      return 0;
    }
  }
  if ((param_3 != 0) && (iVar2 = FUN_00414d90(param_1,param_3), iVar2 != 0)) {
    if (*(char **)(iVar2 + 0x4d4) == (char *)0x0) {
      return 0;
    }
    iVar3 = -1;
    pcVar4 = *(char **)(iVar2 + 0x4d4);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 == -2) {
      return 0;
    }
  }
  if ((param_4 == 0) || (iVar2 = FUN_00414d90(param_1,param_4), iVar2 == 0)) {
    return 1;
  }
  if (*(char **)(iVar2 + 0x4d4) != (char *)0x0) {
    iVar3 = -1;
    pcVar4 = *(char **)(iVar2 + 0x4d4);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      return 1;
    }
  }
  return 0;
}

