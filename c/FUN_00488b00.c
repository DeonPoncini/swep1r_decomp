#include "prototype.h"


bool FUN_00488b00(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uStack_5f0;
  undefined4 *puStack_5ec;
  undefined *puStack_5e8;
  undefined4 *puStack_5e4;
  int *piStack_5e0;
  undefined4 *puStack_5dc;
  undefined4 *puStack_5d8;
  int iStack_5d4;
  undefined4 *puStack_5d0;
  int *piStack_5cc;
  undefined4 local_5c0 [4];
  undefined4 auStack_5b0 [12];
  int iStack_580;
  undefined4 auStack_44c [255];
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_30;
  
  local_5c0[0] = 0;
  piStack_5cc = (int *)0x0;
  if (*(int *)(DAT_0052d448 + 0x108) == 0) {
    iStack_5d4 = DAT_0052d448 + 0x294;
  }
  else {
    iStack_5d4 = 0;
  }
  puStack_5d0 = local_5c0;
  puStack_5d8 = (undefined4 *)0x488b3a;
  iVar1 = DirectDrawCreate();
  if (iVar1 != 0) {
    return false;
  }
  puStack_5d8 = (undefined4 *)0x0;
  puVar2 = auStack_5b0;
  for (iVar1 = 0x5f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puStack_5dc = auStack_5b0;
  auStack_5b0[0] = 0x17c;
  piStack_5e0 = piStack_5cc;
  puStack_5e4 = (undefined4 *)0x488b6f;
  iVar1 = (**(code **)(*piStack_5cc + 0x2c))();
  if (iVar1 != 0) {
    return false;
  }
  DAT_00ec8d80 = iStack_580;
  puStack_5e4 = &DAT_0052d454;
  puStack_5e8 = &DAT_004af1c8;
  puStack_5ec = puStack_5d8;
  iVar1 = (**(code **)*puStack_5d8)();
  if (iVar1 != 0) {
    return false;
  }
  uStack_5f0 = 1;
  puVar2 = auStack_44c;
  for (iVar1 = 0x10a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  piVar3 = DAT_0052d454;
  iVar1 = (**(code **)(*DAT_0052d454 + 0x6c))(DAT_0052d454,auStack_44c);
  if (iVar1 != 0) {
    return false;
  }
  if (((iStack_50 == 0x1142) && (iStack_4c == 0x643d)) ||
     ((iStack_50 == 0x10d9 && (iStack_4c == 0x8626)))) {
    DAT_0052d45c = 1;
  }
  if ((iStack_50 == 0x121a) && ((iStack_4c == 1 || (iStack_4c == 2)))) {
    puStack_5e8 = (undefined *)0x1000;
    puStack_5e4 = (undefined4 *)0x0;
    piStack_5e0 = (int *)0x0;
    puStack_5dc = (undefined4 *)0x0;
    iVar1 = (**(code **)(*DAT_0052d454 + 0x5c))(DAT_0052d454,&puStack_5e8,&puStack_5ec,&puStack_5d8)
    ;
    if (iVar1 != 0) {
      return false;
    }
    DAT_00ec8d80 = DAT_00ec8d80 - (int)puStack_5ec;
  }
  iVar1 = (**(code **)(iRam00000001 + 8))(1);
  if (iVar1 != 0) {
    return false;
  }
  DAT_0052d44c = 0;
  iVar1 = (**(code **)(*DAT_0052d454 + 0x50))(DAT_0052d454,uStack_30,0x11,uStack_5f0,piVar3,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052d454 + 0x20))(DAT_0052d454,0,0,0,&LAB_00488f50);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052d454 + 0x50))(DAT_0052d454,uStack_30,8);
  return iVar1 == 0;
}

