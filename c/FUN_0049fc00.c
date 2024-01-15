#include "prototype.h"


int FUN_0049fc00(char **param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  pcVar1 = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = (char *)0x0;
  }
  local_4 = FUN_004a3ff0(pcVar1,0,1);
  if (local_4 < 0) {
    return -1;
  }
  pcVar6 = param_1[3];
  if (((uint)pcVar6 & 0x108) == 0) {
    return local_4 - (int)param_1[1];
  }
  pcVar4 = *param_1;
  pcVar2 = param_1[2];
  local_8 = (int)pcVar4 - (int)pcVar2;
  if (((uint)pcVar6 & 3) == 0) {
    if (((uint)pcVar6 & 0x80) == 0) {
      puVar5 = (undefined4 *)FUN_004a3dc0();
      *puVar5 = 0x16;
      return -1;
    }
  }
  else {
    pcVar6 = pcVar2;
    if ((*(byte *)((&DAT_00ecd500)[(int)pcVar1 >> 5] + 4 + ((uint)pcVar1 & 0x1f) * 0x24) & 0x80) !=
        0) {
      for (; pcVar6 < pcVar4; pcVar6 = pcVar6 + 1) {
        if (*pcVar6 == '\n') {
          local_8 = local_8 + 1;
        }
      }
    }
  }
  if (local_4 == 0) {
    return local_8;
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) goto LAB_0049fd77;
  if (param_1[1] == (char *)0x0) {
    return local_4;
  }
  pcVar6 = pcVar4 + (int)param_1[1] + -(int)pcVar2;
  iVar7 = ((uint)pcVar1 & 0x1f) * 0x24;
  if ((*(byte *)(iVar7 + 4 + (&DAT_00ecd500)[(int)pcVar1 >> 5]) & 0x80) != 0) {
    iVar3 = FUN_004a3ff0(pcVar1,0,2);
    if (iVar3 == local_4) {
      pcVar4 = param_1[2];
      pcVar1 = pcVar6 + (int)pcVar4;
      for (; pcVar4 < pcVar1; pcVar4 = pcVar4 + 1) {
        if (*pcVar4 == '\n') {
          pcVar6 = pcVar6 + 1;
        }
      }
      if (((uint)param_1[3] & 0x2000) != 0) {
LAB_0049fd6e:
        pcVar6 = pcVar6 + 1;
      }
    }
    else {
      FUN_004a3ff0(pcVar1,local_4,0);
      if (((pcVar6 < (char *)0x201) && (((uint)param_1[3] & 8) != 0)) &&
         (((uint)param_1[3] & 0x400) == 0)) {
        pcVar6 = (char *)0x200;
      }
      else {
        pcVar6 = param_1[6];
      }
      if ((*(byte *)(iVar7 + 4 + (&DAT_00ecd500)[(int)pcVar1 >> 5]) & 4) != 0) goto LAB_0049fd6e;
    }
  }
  local_4 = local_4 - (int)pcVar6;
LAB_0049fd77:
  return local_4 + local_8;
}

