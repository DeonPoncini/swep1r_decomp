#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b290(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined uVar4;
  int iVar5;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_0045bb60();
  FUN_0045b5d0(param_1);
  FUN_00408640(0x3c);
  if (*(int *)(param_1 + 100) == 2) {
    *(undefined *)(param_1 + 0x70) = 1;
    *(undefined *)(param_1 + 0x72) = 3;
    do {
      do {
        FUN_004816b0();
        cVar3 = __ftol();
        *(char *)(param_1 + 0x5d) = cVar3;
      } while (cVar3 == '\x13');
    } while ((*(int *)(&DAT_004bfee8 + cVar3 * 0xc) == -1) || ((&DAT_004bfef0)[cVar3 * 0xc] != '\0')
            );
  }
  if (DAT_0050ca3c != 0) {
    if ((*(byte *)(param_1 + 0x14) & 8) != 0) {
      *(undefined1 *)(param_1 + 0x5d) = (&DAT_00e29890)[DAT_0050c960];
    }
    *(undefined4 *)(param_1 + 100) = 1;
    _DAT_00e364a8 = _DAT_00e364a8 | 0x40;
  }
  iVar5 = FUN_0041d6b0();
  if (iVar5 != 0) {
    FUN_0041bd90(1,10,0x78);
    *(undefined *)(param_1 + 0x6c) = 0;
    uVar4 = FUN_00420f90();
    *(undefined *)(param_1 + 0x70) = uVar4;
    cVar3 = FUN_00420f90();
    *(char *)(param_1 + 0x72) = cVar3 + (char)DAT_00ea02b4;
    *(undefined *)(param_1 + 0x5d) = (undefined)DAT_00ea02b0;
    *(undefined *)(param_1 + 0x8f) = (undefined)DAT_00ea02b8;
  }
  if (DAT_0050ca3c != 0) {
    uVar4 = (&DAT_00e29890)[DAT_0050c960];
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined *)(param_1 + 0x5d) = uVar4;
    _DAT_00e364a8 = _DAT_00e364a8 | 0x40;
  }
  FUN_00408640(0x46);
  iVar5 = FUN_0041d6b0();
  if (iVar5 == 0) {
    local_3c = FUN_0045b7d0(param_1,param_2);
  }
  else {
    local_3c = FUN_0045b610(param_1,param_2);
  }
  local_38 = (int)*(char *)(param_1 + 0x72);
  if (*(int *)(param_1 + 100) == 2) {
    local_38 = 3;
  }
  else if (DAT_0050ca3c != 0) {
    local_38 = 2;
  }
  local_28 = 0xffffffff;
  local_20 = 0;
  iVar5 = *(char *)(param_1 + 0x5d) * 0xc;
  local_2c = *(int *)(&DAT_004bfeec + iVar5);
  local_30 = *(int *)(&DAT_004bfee8 + iVar5);
  if (*(int *)(param_1 + 100) == 2) {
    local_20 = 0x1e;
  }
  else if (DAT_0050ca3c != 0) {
    local_20 = 1000000;
  }
  local_1c = (int)*(char *)(param_1 + 0x8f);
  if (*(char *)(param_1 + 0x6c) != '\0') {
    local_1c = 3;
  }
  local_c = (int)*(char *)(param_1 + 0x6e);
  iVar1 = local_c + *(char *)(param_1 + 0x5d) * 2;
  local_18 = *(undefined4 *)(&DAT_00e366bc + iVar1 * 4);
  local_14 = *(undefined4 *)(&DAT_00e365f4 + iVar1 * 4);
  local_10 = *(char *)(param_1 + 0x90) + -2;
  if (*(char *)(param_1 + 0x6c) != '\0') {
    local_10 = 0;
  }
  local_8 = (int)(char)(&DAT_00e37404)[iVar1];
  if ((local_30 == -1) ||
     (cVar3 = (&DAT_004bfef1)[iVar5], cVar2 = (&DAT_004bfef0)[iVar5], local_2c == -1)) {
    local_30 = DAT_004bffa8;
    local_2c = DAT_004bffac;
    cVar3 = DAT_004bffb1;
    cVar2 = DAT_004bffb0;
  }
  local_24 = (int)cVar2;
  local_34 = (int)cVar3;
  if (param_3 == 0) {
    iVar5 = FUN_0041d6b0();
    if ((iVar5 != 0) && (*(int *)(param_1 + 100) != 2)) {
      iVar5 = FUN_0041d6c0();
      if (iVar5 != 0) {
        FUN_0041dd50(param_1,&local_40);
      }
    }
  }
  FUN_00408640(0x50);
  FUN_0041bd50(1);
  local_40 = 0x4265676e;
  FUN_00408640(0x5a);
  if (*(int *)(param_1 + 0x68) < 0) {
    thunk_FUN_00449e30((char)(&DAT_004bfef1)[*(char *)(param_1 + 0x5d) * 0xc] + 8);
    FUN_00450c50(0x4a646765,&local_40);
    FUN_0045b210(param_1);
    return;
  }
  FUN_00445aa0(1);
  FUN_00447300(0x5363656e,1);
  local_3c = *(undefined4 *)(param_1 + 0x68);
  FUN_00450c50(0x5363656e,&local_40);
  return;
}

