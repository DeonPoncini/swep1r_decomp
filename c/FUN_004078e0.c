#include "prototype.h"


undefined4
FUN_004078e0(undefined1 *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6
            )

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  local_c = local_c & 0xffffff00;
  local_4 = 0;
  if (param_1 == (undefined1 *)0x0) {
    puVar4 = &DAT_004d5fc0;
  }
  else if (param_1 == (undefined1 *)0x1) {
    puVar4 = &DAT_004d6518;
  }
  else {
    puVar4 = &DAT_004d6828;
    if (param_1 != (undefined1 *)0x2) {
      puVar4 = param_1;
    }
  }
  local_8 = param_3;
  iVar3 = FUN_00407cd0(&local_c,param_2,1);
  if (iVar3 == 0) {
    return 0;
  }
  bVar2 = (byte)local_c;
  if (param_4 == 0) {
    bVar2 = (byte)local_c | 8;
  }
  else {
    local_c = local_c | 4;
    if (param_5 < 1) {
      if (-1 < param_5) goto LAB_00407976;
      bVar2 = (byte)local_c | 0x20;
    }
    else {
      bVar2 = bVar2 | 0x14;
    }
  }
  local_c = CONCAT31(local_c._1_3_,bVar2);
LAB_00407976:
  if (param_6 < 0) {
    iVar3 = (&DAT_004d5e20)[(int)param_1];
    *(uint *)(puVar4 + iVar3 * 0xc) = local_c;
    *(uint *)(puVar4 + iVar3 * 0xc + 4) = local_8;
    *(uint *)(puVar4 + iVar3 * 0xc + 8) = local_4;
    iVar3 = (&DAT_004d5e20)[(int)param_1];
    (&DAT_004d5e20)[(int)param_1] = iVar3 + 1;
    puVar4[(iVar3 + 1) * 0xc] = 0xff;
    return 1;
  }
  puVar1 = (uint *)(puVar4 + param_6 * 0xc);
  *puVar1 = local_c;
  puVar1[1] = local_8;
  puVar1[2] = local_4;
  return 1;
}

