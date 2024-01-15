#include "prototype.h"


void FUN_0048aa80(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *local_8c;
  int *local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c [26];
  uint local_14;
  
  local_8c = (int *)0x0;
  local_88 = (int *)0x0;
  if (param_1[0x1f] != 0) {
    if (*(uint *)(DAT_0052e618 + 0x138) < (uint)param_1[0x21]) {
      FUN_0048bb50(param_1[0x21]);
    }
    puVar2 = param_1;
    puVar3 = local_7c;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_14 = local_14 & 0xfffff7ff | 0x4004000;
    iVar1 = (**(code **)(*DAT_0052e638 + 0x18))(DAT_0052e638,local_7c,&local_8c,0);
    while (iVar1 == -0x7789fe84) {
      iVar1 = FUN_0048bb50(param_1[0x21]);
      if (iVar1 == 0) {
        local_8c = (int *)0x0;
        goto LAB_0048abd7;
      }
      iVar1 = (**(code **)(*DAT_0052e638 + 0x18))(DAT_0052e638,local_7c,&local_8c,0);
    }
    if (iVar1 == 0) {
      if (*(int *)(&DAT_0052d5a8 + param_2 * 0x60) != 0) {
        uStack_84 = *(undefined4 *)(&DAT_0052d5ac + param_2 * 0x60);
        uStack_80 = uStack_84;
        (**(code **)(*local_8c + 0x74))(local_8c,8,&uStack_84);
      }
      iVar1 = (**(code **)*local_8c)(local_8c,&DAT_004af328,&local_88);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*local_88 + 0x14))(local_88,param_1[0x1f]);
        while (iVar1 == -0x7789fe84) {
          iVar1 = FUN_0048bb50(param_1[0x21]);
          if (iVar1 == 0) goto LAB_0048abd7;
          iVar1 = (**(code **)(*local_88 + 0x14))(local_88,param_1[0x1f]);
        }
        if (iVar1 == 0) {
          param_1[0x20] = local_88;
          (**(code **)(*local_8c + 8))(local_8c);
          param_1[0x22] = DAT_004c98b4;
          FUN_0048ba20(param_1);
          return;
        }
      }
      else {
        local_88 = (int *)0x0;
      }
    }
  }
LAB_0048abd7:
  if (local_8c != (int *)0x0) {
    (**(code **)(*local_8c + 8))(local_8c);
  }
  if (local_88 != (int *)0x0) {
    (**(code **)(*local_88 + 8))(local_88);
  }
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  return;
}

