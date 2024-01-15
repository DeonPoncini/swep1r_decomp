#include "prototype.h"


uint FUN_004851a0(undefined4 param_1,undefined4 *param_2,int *param_3,uint *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  bool bVar5;
  uint uStack_14;
  undefined auStack_10 [2];
  ushort uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  uint uStack_4;
  
  uVar1 = param_1;
  (**(code **)(DAT_00ecc420 + 0x38))(param_1,&param_1,4);
  iVar2 = 4;
  bVar5 = true;
  puVar3 = &param_1;
  pcVar4 = &DAT_004c7eb8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *(char *)puVar3 == *pcVar4;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    return 0;
  }
  (**(code **)(DAT_00ecc420 + 0x4c))(uVar1,4,1);
  (**(code **)(DAT_00ecc420 + 0x38))(uVar1,&param_1,4);
  iVar2 = 4;
  bVar5 = true;
  puVar3 = &param_1;
  pcVar4 = &DAT_004c7eb0;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *(char *)puVar3 == *pcVar4;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    return 0;
  }
  (**(code **)(DAT_00ecc420 + 0x4c))(uVar1,4,1);
  (**(code **)(DAT_00ecc420 + 0x38))(uVar1,&uStack_14,4);
  (**(code **)(DAT_00ecc420 + 0x38))(uVar1,auStack_10,0x10);
  *param_2 = CONCAT22(uStack_a,uStack_c);
  *param_3 = (int)((ulonglong)(uStack_4 & 0xffff) / (ulonglong)(longlong)(int)(uint)uStack_e) << 3;
  *param_4 = (uint)(uStack_e == 2);
  if (0x10 < uStack_14) {
    (**(code **)(DAT_00ecc420 + 0x4c))(uVar1,uStack_14 - 0x10,1);
  }
  (**(code **)(DAT_00ecc420 + 0x38))(uVar1,&param_1,4);
  iVar2 = 4;
  bVar5 = true;
  puVar3 = &param_1;
  pcVar4 = &DAT_004c7ea8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *(char *)puVar3 == *pcVar4;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  do {
    if (bVar5) {
      (**(code **)(DAT_00ecc420 + 0x38))(uVar1,&uStack_14,4);
      uVar1 = (**(code **)(DAT_00ecc420 + 0x48))(uVar1);
      *param_5 = uVar1;
      return uStack_14;
    }
    (**(code **)(DAT_00ecc420 + 0x38))(uVar1,&uStack_14,4);
    (**(code **)(DAT_00ecc420 + 0x4c))(uVar1,uStack_14 + 4,1);
    iVar2 = 4;
    bVar5 = true;
    puVar3 = &param_1;
    pcVar4 = &DAT_004c7ea8;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *(char *)puVar3 == *pcVar4;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
  } while( true );
}

