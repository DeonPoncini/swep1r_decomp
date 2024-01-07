#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
uint FUN_00486e60(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EDI;
  undefined4 uStack_118;
  undefined *puStack_114;
  undefined local_104 [240];
  int iStack_14;

  puStack_114 = local_104;
  uStack_118 = 0;
  uVar1 = (**(code **)(*DAT_00510254 + 0x58))(DAT_00510254);
  if (uVar1 == 0x8877001e) {
    iVar2 = (**(code **)(DAT_00ecc420 + 0x20))(unaff_EDI);
    uVar1 = (**(code **)(*DAT_00510254 + 0x58))(DAT_00510254,iVar2,&stack0xfffffef0);
    if (-1 < (int)uVar1) {
      *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iStack_14 + 0x10);
      FUN_004a1170(&uStack_118,0x80,u__s__S_004c8680,iStack_14 + 0x58,iStack_14 + 0x98);
      *(undefined4 **)(iVar2 + 0x30) = &uStack_118;
      iVar3 = FUN_004a1150(iStack_14 + 0xb8);
      if (iVar3 != 0) {
        *(int *)(iVar2 + 0x34) = iStack_14 + 0xb8;
      }
      *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iStack_14 + 0xf8);
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iStack_14 + 0xfc);
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iStack_14 + 0x100);
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0xe0c4;
      uVar1 = (**(code **)(*DAT_00510254 + 0x7c))(DAT_00510254,iVar2,0);
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
  }
  return uVar1;
}



int FUN_00486f50(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puStack_10;
  undefined local_4 [4];

  puStack_10 = local_4;
  uVar3 = 0;
  iVar1 = (**(code **)(*DAT_00510254 + 0x58))(DAT_00510254,0);
  if (iVar1 == -0x7788ffe2) {
    uVar2 = (**(code **)(DAT_00ecc420 + 0x20))(puStack_10);
    iVar1 = (**(code **)(*DAT_00510254 + 0x58))(DAT_00510254,uVar2,&puStack_10);
    if (-1 < iVar1) {
      FUN_004876d0(uVar2,uVar3);
      (**(code **)(DAT_00ecc420 + 0x24))(uVar2);
    }
  }
  return iVar1;
}



undefined4 FUN_00486fc0(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_retaddr;
  undefined *puStack_110;
  undefined local_104 [246];
  undefined2 uStack_e;
  undefined4 uStack_8;
  undefined4 uStack_4;

  puStack_110 = local_104;
  uVar4 = 0;
  iVar1 = (**(code **)(*DAT_00510254 + 0x58))(DAT_00510254,0);
  if (iVar1 == -0x7788ffe2) {
    puVar2 = (undefined *)(**(code **)(DAT_00ecc420 + 0x20))(puStack_110);
    if (puVar2 != (undefined *)0x0) {
      iVar1 = (**(code **)(*DAT_00510254 + 0x58))(DAT_00510254,puVar2,&puStack_110);
      if (-1 < iVar1) {
        if (unaff_retaddr == 0) {
          uVar3 = *(uint *)(puVar2 + 4) | 0x20;
        }
        else {
          uVar3 = *(uint *)(puVar2 + 4) & 0xffffffdf;
        }
        *(uint *)(puVar2 + 4) = uVar3;
        FUN_0049ef50(&stack0xfffffef4,*(undefined4 *)(puVar2 + 0x30),0x7f);
        uStack_e = 0;
        iVar1 = FUN_004a1210(&stack0xfffffef4,0x3a);
        if (iVar1 != 0) {
          FUN_004a1170(iVar1 + 2,0x20,&PTR_DAT_004c868c,uStack_8);
          *(undefined **)(puVar2 + 0x30) = &stack0xfffffef4;
          *(undefined4 *)(puVar2 + 0x28) = uStack_4;
          iVar1 = (**(code **)(*DAT_00510254 + 0x7c))(DAT_00510254,puVar2,0);
          if (-1 < iVar1) goto LAB_004870ab;
        }
      }
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
    puVar2 = puStack_110;
  }
LAB_004870ab:
  (**(code **)(DAT_00ecc420 + 0x24))(puVar2);
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_004870d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  int local_1c;

  puVar2 = local_50;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_50[0] = 0x50;
  iVar1 = param_1 * 0x104;
  local_50[2] = (&DAT_005117e8)[param_1 * 0x41];
  local_50[3] = *(undefined4 *)(&DAT_005117ec + iVar1);
  local_40 = *(undefined4 *)(&DAT_005117f0 + iVar1);
  local_3c = *(undefined4 *)(&DAT_005117f4 + iVar1);
  if (param_2 != 0) {
    iVar1 = FUN_004a1150(param_2);
    if (iVar1 != 0) {
      local_1c = param_2;
    }
  }
  iVar1 = (**(code **)(*DAT_00510254 + 0x60))(DAT_00510254,local_50,1);
  if (iVar1 < 0) {
    (**(code **)(*DAT_00510254 + 0x10))(DAT_00510254);
    return iVar1;
  }
  _DAT_00510258 = 0;
  DAT_0051386c = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00487180(void)

{
  if (DAT_0051386c != 0) {
    (**(code **)(*DAT_00510254 + 0x10))(DAT_00510254);
  }
  DAT_0051386c = 0;
  _DAT_00510258 = 0;
  return;
}



undefined4 FUN_004871b0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;

  DAT_00510250 = 0;
  puVar3 = &DAT_0050fee0;
  for (iVar2 = 0xdc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (DAT_0051386c != 0) {
    uVar1 = (**(code **)(*DAT_00510254 + 0x30))(DAT_00510254,0,&LAB_004874a0,0,0);
    return uVar1;
  }
  if (param_1 < DAT_00513870) {
    uVar1 = (**(code **)(*DAT_00510254 + 0x30))
                      (DAT_00510254,&DAT_005117e8 + param_1 * 0x41,&LAB_004874a0,0,0x80);
    return uVar1;
  }
  return 0x80004005;
}



void FUN_00487230(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_50 [6];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_1c;

  uVar3 = 0x41;
  if (param_1 != 0) {
    uVar3 = 0x51;
  }
  DAT_00513870 = 0;
  puVar1 = &DAT_005117e8;
  for (iVar2 = 0x820; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = local_50;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_50[0] = 0x50;
  puVar1 = (undefined4 *)FUN_0048c7e0();
  local_38 = *puVar1;
  local_34 = puVar1[1];
  local_30 = puVar1[2];
  local_2c = puVar1[3];
  if (param_2 != 0) {
    iVar2 = FUN_004a1150(param_2);
    if (iVar2 != 0) {
      local_1c = param_2;
    }
  }
  iVar2 = *DAT_00510254;
  uVar3 = FUN_0048c780(uVar3);
  (**(code **)(iVar2 + 0x34))(DAT_00510254,local_50,0,&LAB_00487450,uVar3);
  return;
}



undefined4 FUN_004872e0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  uVar1 = 0;
  local_c = 0;
  local_4 = 0;
  local_8 = param_1;
  local_10 = 0x10;
  (**(code **)(*DAT_00510254 + 0x18))(DAT_00510254,&param_1,&local_10,0,0,0,0);
  return uVar1;
}



void FUN_00487320(undefined4 param_1)

{
  (**(code **)(*DAT_00510254 + 0x24))(DAT_00510254,param_1);
  return;
}



undefined4 FUN_00487340(void)

{
  return DAT_00510250;
}



undefined4 FUN_00487350(int param_1)

{
  return *(undefined4 *)(&DAT_0050ff08 + param_1 * 0x2c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00487550(undefined4 *param_1,undefined4 *param_2)

{
  switch(*param_1) {
  case 3:
    *param_2 = param_1[2];
    return (-(uint)(param_1[1] != 1) & 0xfffffffa) + 5;
  default:
    return -1;
  case 5:
    *param_2 = param_1[2];
    return 2;
  case 0x31:
    return 1;
  case 0x101:
    _DAT_00510258 = 1;
    return 8;
  }
}



void FUN_004876d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined local_100 [254];
  undefined2 local_2;

  FUN_0049ef50(local_100,*(undefined4 *)(param_1 + 0x30),0x7f);
  local_2 = 0;
  iVar1 = FUN_004a1250(local_100,&DAT_004c8698);
  if (iVar1 != 0) {
    FUN_0049ef50(param_2 + 0x16,iVar1,0x1f);
    *(undefined2 *)((int)param_2 + 0x96) = 0;
  }
  iVar1 = FUN_004a1250(0,&DAT_004c8694);
  if (iVar1 != 0) {
    FUN_0048c380(param_2 + 0x26,iVar1,0x1f);
    *(undefined *)((int)param_2 + 0xb7) = 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 0x10);
  param_2[3] = *(undefined4 *)(param_1 + 0x14);
  param_2[4] = *(undefined4 *)(param_1 + 0x28);
  param_2[5] = *(undefined4 *)(param_1 + 0x2c);
  param_2[0x3e] = *(undefined4 *)(param_1 + 0x40);
  param_2[0x3f] = *(undefined4 *)(param_1 + 0x48);
  param_2[0x40] = *(undefined4 *)(param_1 + 0x4c);
  return;
}



void FUN_004877b0(undefined4 param_1)

{
  FUN_00487830(param_1,&DAT_004c86a0);
  return;
}



undefined4 FUN_004877d0(char *param_1)

{
  if (DAT_00529508 != 0) {
    return 0;
  }
  DAT_00529508 = (**(code **)(DAT_00ecc420 + 0x30))(param_1,&DAT_004b6cfc);
  if (DAT_00529508 == 0) {
    DAT_00529508 = 0;
    return 0;
  }
  _strncpy(&DAT_005138b8,param_1,0x7f);
  DAT_00513937 = 0;
  return 1;
}



undefined4 FUN_00487830(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;

  if (DAT_00529500 != 0) {
    FUN_00487c00();
  }
  pbVar4 = &DAT_004b7580;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00487872:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00487877;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00487872;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00487877:
  if (iVar3 == 0) {
    DAT_00529504 = 0;
  }
  else {
    DAT_00529504 = (**(code **)(DAT_00ecc420 + 0x30))(param_1,param_2);
    if (DAT_00529504 == 0) {
      DAT_00529504 = 0;
      if (DAT_00529500 != 0) {
        FUN_00487c90();
      }
      return 0;
    }
  }
  DAT_00ec9e84 = (**(code **)(DAT_00ecc420 + 0x20))(0x1000);
  _strncpy(&DAT_005143d8,(char *)param_1,0x7f);
  DAT_00514457 = 0;
  DAT_005284f8 = 0;
  DAT_00529500 = 1;
  return 1;
}



void FUN_00487900(void)

{
  if (DAT_00529500 != 0) {
    if (DAT_00529504 != 0) {
      (**(code **)(DAT_00ecc420 + 0x34))(DAT_00529504);
    }
    DAT_00529504 = 0;
    (**(code **)(DAT_00ecc420 + 0x24))(DAT_00ec9e84);
    if (DAT_0052950c != 0) {
      FUN_00487c90();
      return;
    }
    DAT_00529500 = 0;
  }
  return;
}



void FUN_00487960(void)

{
  if (DAT_00529508 != 0) {
    (**(code **)(DAT_00ecc420 + 0x34))(DAT_00529508);
    DAT_00529508 = 0;
    _strncpy(&DAT_005138b8,s_NOT_OPEN_004c86a4,0x7f);
    DAT_00513937 = 0;
  }
  return;
}



bool FUN_004879a0(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;

  if ((DAT_00529508 == 0) || (param_1 == (char *)0x0)) {
    return false;
  }
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = (**(code **)(DAT_00ecc420 + 0x40))(DAT_00529508,param_1,~uVar3 - 1);
  return ~uVar3 - 1 != iVar2;
}



bool FUN_004879f0(int param_1)

{
  int iVar1;
  int iVar2;

  if ((DAT_00529508 != 0) && (param_1 != 0)) {
    iVar1 = FUN_004a10e0(&DAT_00528500,0x1000,param_1,&stack0x00000008);
    iVar2 = (**(code **)(DAT_00ecc420 + 0x40))(DAT_00529508,&DAT_00528500,iVar1);
    return iVar2 != iVar1;
  }
  return true;
}



undefined4 FUN_00487a50(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;

  iVar3 = 0;
  DAT_00ec8e80 = 0;
  iVar1 = FUN_004a02f0(param_1,s___004c86b0);
  if (iVar1 == 0) {
    DAT_00ec8e80 = 0;
    return 0;
  }
  piVar4 = &DAT_00ec8e88;
  do {
    if (0xec9e88 < (int)piVar4) {
      return 1;
    }
    puVar2 = (undefined *)FUN_0049fb10(iVar1,0x3d);
    if (puVar2 == (undefined *)0x0) {
      piVar4[-1] = iVar1;
      *piVar4 = iVar1;
    }
    else {
      *puVar2 = 0;
      piVar4[-1] = iVar1;
      *piVar4 = (int)(puVar2 + 1);
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 2;
    iVar1 = FUN_004a02f0(0,s___004c86b0);
  } while (iVar1 != 0);
  DAT_00ec8e80 = iVar3;
  return 0;
}



undefined4 FUN_00487ae0(void)

{
  int iVar1;

  iVar1 = FUN_00487b20();
  if (iVar1 != 0) {
    while( true ) {
      iVar1 = FUN_00487a50(DAT_00ec9e84);
      if (iVar1 != 0) break;
      if (DAT_00ec8e80 != 0) {
        return 1;
      }
      iVar1 = FUN_00487b20();
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 0;
}



undefined4 FUN_00487b20(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;

  bVar2 = false;
  iVar6 = 0xfff;
  pcVar7 = DAT_00ec9e84;
  do {
    if (iVar6 == 0) {
      return 1;
    }
    iVar3 = (**(code **)(DAT_00ecc420 + 0x3c))(DAT_00529504,pcVar7,iVar6);
    if (iVar3 == 0) {
      return 0;
    }
    DAT_005284f8 = DAT_005284f8 + 1;
    cVar1 = *pcVar7;
    if ((((cVar1 != ';') && (cVar1 != '#')) && (cVar1 != '\n')) && (cVar1 != '\r')) {
      puVar4 = (undefined *)FUN_0049fb10(pcVar7,0x23);
      if (puVar4 != (undefined *)0x0) {
        *puVar4 = 0;
      }
      FUN_0049edd0(pcVar7);
      uVar5 = 0xffffffff;
      pcVar8 = DAT_00ec9e84;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      if (DAT_00ec9e84[uVar5 - 3] == '\\') {
        iVar6 = 0x1000 - (uVar5 - 1);
        pcVar7 = DAT_00ec9e84 + (uVar5 - 3);
      }
      else {
        bVar2 = true;
        if ((DAT_00ec9e84[uVar5 - 2] == '\r') || (DAT_00ec9e84[uVar5 - 2] == '\n')) {
          DAT_00ec9e84[uVar5 - 2] = '\0';
        }
      }
    }
    if (bVar2) {
      return 1;
    }
  } while( true );
}



void FUN_00487c00(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;

  uVar3 = 0xffffffff;
  pcVar7 = &DAT_005143d8;
  do {
    pcVar8 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  puVar6 = (undefined4 *)(pcVar8 + -uVar3);
  puVar9 = (undefined4 *)(&DAT_00513938 + DAT_0052950c * 0x80);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar2 = DAT_005284f8, uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar9 = *(undefined *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  DAT_005284f8 = 0;
  *(undefined4 *)(&DAT_00514388 + DAT_0052950c * 4) = uVar2;
  uVar2 = DAT_00529504;
  DAT_00529504 = 0;
  *(undefined4 *)(&DAT_00514338 + DAT_0052950c * 4) = DAT_00ec9e84;
  *(undefined4 *)(&DAT_005284a8 + DAT_0052950c * 4) = uVar2;
  puVar6 = &DAT_00ec8e80;
  puVar9 = (undefined4 *)(&DAT_00514458 + DAT_0052950c * 0x1004);
  for (iVar5 = 0x401; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  DAT_0052950c = DAT_0052950c + 1;
  return;
}



void FUN_00487c90(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;

  if (DAT_0052950c != 0) {
    iVar5 = DAT_0052950c + -1;
    uVar2 = 0xffffffff;
    pcVar7 = &DAT_00513938 + iVar5 * 0x80;
    do {
      pcVar8 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    puVar6 = (undefined4 *)(pcVar8 + -uVar2);
    puVar9 = (undefined4 *)&DAT_005143d8;
    DAT_0052950c = iVar5;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    DAT_00529504 = *(undefined4 *)(&DAT_005284a8 + iVar5 * 4);
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)puVar9 = *(undefined *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    DAT_005284f8 = *(undefined4 *)(&DAT_00514388 + iVar5 * 4);
    DAT_00ec9e84 = *(undefined4 *)(&DAT_00514338 + iVar5 * 4);
    puVar6 = (undefined4 *)(&DAT_00514458 + iVar5 * 0x1004);
    puVar9 = &DAT_00ec8e80;
    for (iVar4 = 0x401; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00487d20(void)

{
  int iVar1;
  undefined4 *puVar2;

  if (DAT_0052d438 == 0) {
    puVar2 = &DAT_00ec8ca0;
    for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_00ec8da0;
    for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_00529578;
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_0052d438 = 1;
    DAT_0052d444 = 0;
    iVar1 = DirectDrawEnumerateA(&LAB_00488d70,0);
    if (iVar1 != 0) {
      return 0;
    }
    DAT_0052951c = 0x280;
    _DAT_00529520 = 0x1e0;
  }
  return 1;
}



void FUN_00487da0(void)

{
  int iVar1;
  undefined4 *puVar2;

  if (DAT_0052d43c != 0) {
    FUN_00487e80();
  }
  DAT_0052d44c = 0;
  puVar2 = &DAT_0052a9f8;
  for (iVar1 = 0xa90; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00ec8ca0;
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00ec8da0;
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00529578;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0052d450 = 0;
  DAT_0052d444 = 0;
  DAT_0052d438 = 0;
  return;
}



undefined4 FUN_00487e00(uint param_1)

{
  undefined4 uVar1;
  int iVar2;

  if (DAT_0052d43c != 0) {
    FUN_00487e80();
  }
  if (DAT_0052d444 < param_1) {
    return 0;
  }
  DAT_00529514 = param_1;
  DAT_0052d448 = &DAT_0052a9f8 + param_1 * 0xa9;
  uVar1 = FUN_0048c780();
  iVar2 = FUN_00488b00(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_0049f8c0(&DAT_005295f8,DAT_0052d44c,0x50,&LAB_00488850);
  DAT_0052d43c = 1;
  return 1;
}



void FUN_00487e80(void)

{
  int iVar1;
  undefined4 *puVar2;

  if ((DAT_0052d438 == 1) && (DAT_0052d43c != 0)) {
    if (DAT_0052d440 != 0) {
      FUN_00488030();
    }
    FUN_00488d10();
    DAT_00529514 = 0;
    puVar2 = &DAT_00ec8ca0;
    for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_00ec8da0;
    for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_00529578;
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_0052d448 = 0;
    PTR_FUN_004c86b8 = FUN_00423cb0;
    DAT_0052d43c = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00487f00(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  if ((param_2 != 0) && (DAT_0052d44c <= param_1)) {
    return 0;
  }
  if (DAT_0052d440 != 0) {
    FUN_00488030();
  }
  if (param_2 == 0) {
    DAT_0052d450 = &DAT_00529518;
    uVar1 = FUN_0048c780(&DAT_00529518);
    iVar2 = FUN_00489270(uVar1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    DAT_0052d450 = &DAT_005295f8 + param_1 * 0x50;
    uVar1 = FUN_0048c780(DAT_0052d450);
    iVar2 = FUN_00489790(uVar1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  DAT_00529510 = CreateFontA((-(uint)(*(uint *)(DAT_0052d450 + 4) < 0x280) & 0xfffffff4) + 0x18,0,0,
                             0,400,0,0,0,0,0,0,0,2,s_Arial_004c9050);
  _DAT_00529568 = 0;
  _DAT_0052956c = 0;
  _DAT_00529570 = DAT_00ec8dac;
  _DAT_00529574 = DAT_00ec8db0;
  DAT_0052d440 = 1;
  DAT_0052d458 = param_2;
  FUN_00488410(&DAT_00ec8da0,0,0);
  FUN_00489ab0();
  if (param_2 != 0) {
    FUN_00488410(&DAT_00ec8da0,0,0);
  }
  return 1;
}



void FUN_00488030(void)

{
  if (DAT_0052d440 != 0) {
    FUN_004899a0();
  }
  if (DAT_00529510 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_00529510);
    DAT_00529510 = (HGDIOBJ)0x0;
  }
  DAT_0052d440 = 0;
  return;
}



undefined4 FUN_00488070(void)

{
  return DAT_0052d444;
}



undefined4 FUN_00488080(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;

  if (param_1 < DAT_0052d444) {
    puVar2 = &DAT_0052a9f8 + param_1 * 0xa9;
    for (iVar1 = 0xa9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  return 1;
}



undefined4 FUN_004880c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  if (DAT_0052d444 != 0) {
    puVar2 = &DAT_0052a9f8 + DAT_00529514 * 0xa9;
    for (iVar1 = 0xa9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
    return 0;
  }
  return 1;
}



void FUN_00488100(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  if (DAT_0052d43c == 0) {
    return;
  }
  if (DAT_0052d440 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar2 = *DAT_0052d454;
  uVar1 = FUN_0048c780(DAT_004c86bc);
  iVar2 = (**(code **)(iVar2 + 0x50))(DAT_0052d454,uVar1);
  if (iVar2 != 0) {
    return;
  }
  if (DAT_0052d458 == 0) {
    if (DAT_00ec8e00 == (int *)0x0) goto LAB_004881a3;
    iVar2 = (**(code **)(*DAT_00ec8e00 + 0x6c))(DAT_00ec8e00);
  }
  else {
    if ((DAT_0052d454 != (int *)0x0) &&
       (iVar2 = (**(code **)(*DAT_0052d454 + 0x54))
                          (DAT_0052d454,*(undefined4 *)(DAT_0052d450 + 4),
                           *(undefined4 *)(DAT_0052d450 + 8),*(undefined4 *)(DAT_0052d450 + 0x1c),0,
                           0), iVar2 != 0)) {
      return;
    }
    if (DAT_00ec8d00 == (int *)0x0) goto LAB_004881a3;
    iVar2 = (**(code **)(*DAT_00ec8d00 + 0x6c))(DAT_00ec8d00);
  }
  if (iVar2 != 0) {
    return;
  }
LAB_004881a3:
  if (DAT_00529578 != (int *)0x0) {
    (**(code **)(*DAT_00529578 + 0x6c))(DAT_00529578);
  }
  return;
}



undefined4 * FUN_004881c0(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;

  puVar2 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(0xe0);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2[0x16] = 0;
  puVar2[1] = 0;
  piVar6 = puVar2 + 3;
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *param_1;
    param_1 = param_1 + 1;
    piVar6 = piVar6 + 1;
  }
  iVar4 = puVar2[3];
  uVar5 = (uint)puVar2[9] >> 3;
  puVar2[0x17] = 0;
  uVar3 = uVar5 * iVar4;
  puVar2[6] = uVar3;
  puVar2[7] = uVar3 / uVar5;
  iVar4 = uVar5 * puVar2[4] * iVar4;
  puVar2[5] = iVar4;
  if ((param_2 != 0) && (DAT_0052d43c != 0)) {
    puVar2[2] = 0;
    puVar1 = puVar2 + 0x19;
    *puVar2 = 1;
    puVar7 = puVar1;
    for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *puVar1 = 0x7c;
    puVar2[0x1a] = 7;
    puVar2[0x33] = 0x40;
    if (param_3 == 0) {
      puVar2[0x33] = 0x840;
    }
    puVar2[0x1c] = puVar2[3];
    puVar2[0x1b] = puVar2[4];
    iVar4 = (**(code **)(*DAT_0052d454 + 0x18))(DAT_0052d454,puVar1,puVar2 + 0x18,0);
    if (iVar4 != 0) {
      return (undefined4 *)0x0;
    }
    piVar6 = (int *)puVar2[0x18];
    iVar4 = (**(code **)(*piVar6 + 0x58))(piVar6,puVar2 + 0x19);
    if (iVar4 != 0) {
      return (undefined4 *)0x0;
    }
    if ((puVar2[0x33] & 0x4000) != 0) {
      puVar2[2] = 1;
    }
    puVar2[6] = puVar2[0x1d];
    puVar2[7] = (uint)puVar2[0x1d] / uVar5;
    return puVar2;
  }
  *puVar2 = 0;
  puVar2[2] = 0;
  iVar4 = (**(code **)(DAT_00ecc420 + 0x20))(iVar4);
  puVar2[0x16] = iVar4;
  if (iVar4 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2[1] = 1;
  return puVar2;
}



void FUN_00488310(int *param_1)

{
  int *piVar1;

  if (*param_1 == 0) {
    if (param_1[0x16] != 0) {
      (**(code **)(DAT_00ecc420 + 0x24))(param_1[0x16]);
      param_1[0x16] = 0;
    }
  }
  else if ((*param_1 == 1) && (piVar1 = (int *)param_1[0x18], piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x18] = 0;
    (**(code **)(DAT_00ecc420 + 0x24))(param_1);
    return;
  }
  (**(code **)(DAT_00ecc420 + 0x24))(param_1);
  return;
}



undefined4 FUN_00488370(int *param_1)

{
  int iVar1;

  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return 1;
    }
    if (((param_1[0x33] & 0x20U) != 0) && ((param_1[0x33] & 0x200000U) != 0)) {
      return 0;
    }
    iVar1 = FUN_00489a00(param_1 + 0x18);
    param_1[0x16] = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  param_1[1] = param_1[1] + 1;
  return 1;
}



int FUN_004883c0(int *param_1)

{
  int iVar1;

  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      param_1[1] = param_1[1] + -1;
    }
  }
  else if (*param_1 == 1) {
    if (param_1[1] == 0) {
      return 0;
    }
    iVar1 = FUN_00489a60(param_1 + 0x18);
    if (iVar1 != 0) {
      return iVar1;
    }
    param_1[1] = param_1[1] + -1;
    return 0;
  }
  return 1;
}



bool FUN_00488410(int *param_1,undefined4 param_2,int *param_3)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;

  if (*param_1 == 0) {
    iVar2 = param_1[9];
    if (iVar2 == 8) {
      uVar1 = (undefined)param_2;
      if (param_3 == (int *)0x0) {
        uVar3 = param_1[5];
        puVar5 = (undefined4 *)param_1[0x16];
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar5 = puVar5 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined *)puVar5 = uVar1;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        return true;
      }
      local_8 = 0;
      puVar5 = (undefined4 *)(param_1[7] * param_3[1] + param_1[0x16] + *param_3);
      if (0 < param_3[3]) {
        do {
          uVar3 = param_3[2];
          puVar6 = puVar5;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar6 = puVar6 + 1;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined *)puVar6 = uVar1;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          puVar5 = (undefined4 *)((int)puVar5 + param_1[6]);
          local_8 = local_8 + 1;
        } while (local_8 < param_3[3]);
      }
    }
    else if (iVar2 == 0x10) {
      if (param_3 == (int *)0x0) {
        puVar5 = (undefined4 *)param_1[0x16];
        uVar3 = (uint)param_1[5] >> 1;
        if ((uVar3 & 1) == 0) {
          for (uVar3 = (uint)param_1[5] >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar5 = CONCAT22((undefined2)param_2,(undefined2)param_2);
            puVar5 = puVar5 + 1;
          }
        }
        else {
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined2 *)puVar5 = (undefined2)param_2;
            puVar5 = (undefined4 *)((int)puVar5 + 2);
          }
        }
        return true;
      }
      local_8 = 0;
      puVar5 = (undefined4 *)(param_1[0x16] + (param_1[7] * param_3[1] + *param_3) * 2);
      if (0 < param_3[3]) {
        do {
          uVar3 = param_3[2];
          puVar6 = puVar5;
          if ((uVar3 & 1) == 0) {
            for (uVar3 = uVar3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar6 = CONCAT22((undefined2)param_2,(undefined2)param_2);
              puVar6 = puVar6 + 1;
            }
          }
          else {
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined2 *)puVar6 = (undefined2)param_2;
              puVar6 = (undefined4 *)((int)puVar6 + 2);
            }
          }
          puVar5 = (undefined4 *)((int)puVar5 + param_1[6]);
          local_8 = local_8 + 1;
        } while (local_8 < param_3[3]);
        return true;
      }
    }
    else if (iVar2 == 0x20) {
      if (param_3 == (int *)0x0) {
        puVar5 = (undefined4 *)param_1[0x16];
        for (uVar3 = (uint)param_1[5] >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = param_2;
          puVar5 = puVar5 + 1;
        }
        return true;
      }
      local_8 = 0;
      puVar5 = (undefined4 *)(param_1[0x16] + (param_1[7] * param_3[1] + *param_3) * 4);
      if (0 < param_3[3]) {
        do {
          puVar6 = puVar5;
          for (iVar2 = param_3[2]; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = param_2;
            puVar6 = puVar6 + 1;
          }
          puVar5 = (undefined4 *)((int)puVar5 + param_1[6]);
          local_8 = local_8 + 1;
        } while (local_8 < param_3[3]);
        return true;
      }
    }
  }
  else if (*param_1 == 1) {
    if (((param_1[0x33] & 0x20U) != 0) && ((param_1[0x33] & 0x200000U) != 0)) {
      return false;
    }
    iVar2 = FUN_00489bd0(param_1 + 0x18,param_2,param_3);
    return iVar2 == 0;
  }
  return true;
}



int FUN_00488670(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  bool bVar7;
  undefined4 local_4c [5];
  int local_38 [14];

  iVar1 = 0x38;
  bVar7 = true;
  piVar4 = param_1;
  piVar6 = (int *)(param_2 + 0x20);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar7 = *(char *)piVar4 == *(char *)piVar6;
    piVar4 = (int *)((int)piVar4 + 1);
    piVar6 = (int *)((int)piVar6 + 1);
  } while (bVar7);
  if (bVar7) {
    return param_2;
  }
  if ((*(int *)(param_2 + 0x20) == 0) && (*param_1 == 0)) {
    return param_2;
  }
  iVar1 = param_2;
  if (*(int *)(param_2 + 0x24) != param_1[1]) {
    puVar3 = (undefined4 *)(param_2 + 0xc);
    puVar5 = local_4c;
    for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    piVar4 = param_1;
    piVar6 = local_38;
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    iVar1 = FUN_004881c0(local_4c,0,0);
    if (iVar1 == 0) {
      FUN_00484780(*(undefined4 *)(DAT_00ecc420 + 0x10),s_D__devel_QA5_pc_gnome_SpecPlat_r_004c9058,
                   0x47a,s_Unable_to_allocate_memory_for_ne_004c90a8,0,0,0,0);
      return 0;
    }
  }
  FUN_00488370(param_2);
  FUN_00488370(iVar1);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 0x10)) {
    do {
      FUN_0048d1c0(iVar2 * *(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x58),param_1,
                   iVar2 * *(int *)(param_2 + 0x18) + *(int *)(param_2 + 0x58),param_2 + 0x20,
                   *(undefined4 *)(iVar1 + 0xc),param_3,param_4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0x10));
  }
  FUN_004883c0(param_2);
  FUN_004883c0(iVar1);
  piVar4 = (int *)(iVar1 + 0x20);
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *param_1;
    param_1 = param_1 + 1;
    piVar4 = piVar4 + 1;
  }
  if (iVar1 != param_2) {
    FUN_00488310(param_2);
  }
  return iVar1;
}



undefined4 FUN_004887c0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  LPCSTR pCVar4;
  int unaff_retaddr;
  HDC hdc;
  LPCSTR local_4;

  hdc = DAT_00ec8e00;
  iVar2 = (**(code **)(DAT_00ec8e00->unused + 0x44))(DAT_00ec8e00,&local_4);
  if (iVar2 != 0) {
    return 0;
  }
  SetBkMode(hdc,1);
  SelectObject(hdc,DAT_00529510);
  SetTextColor(hdc,0xffff);
  uVar3 = 0xffffffff;
  pCVar4 = local_4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pCVar4;
    pCVar4 = pCVar4 + 1;
  } while (cVar1 != '\0');
  TextOutA(hdc,unaff_retaddr,param_1,local_4,~uVar3 - 1);
  (**(code **)(DAT_00ec8e00->unused + 0x68))(DAT_00ec8e00,hdc);
  return 1;
}



bool FUN_00488880(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_10 = 0x1000;
  iVar1 = (**(code **)(*DAT_0052d454 + 0x5c))(DAT_0052d454,&local_10,param_1,param_2);
  return iVar1 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004888d0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_8c;
  int iStack_4;

  uStack_8c = 0;
  puVar3 = &DAT_0052957c;
  for (iVar2 = 0x1f; piVar1 = DAT_0052d454, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _DAT_00529584 = DAT_00ec8db0;
  _DAT_00529588 = DAT_00ec8dac;
  _DAT_005295e4 = (-(uint)(param_2 != 0) & 0xffffc800) + 0x24000;
  DAT_0052957c = 0x7c;
  _DAT_00529580 = 0x1007;
  puVar3 = &DAT_005295c4;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&DAT_0052957c,&DAT_00529578);
  if (iVar2 != 0) {
    return 1;
  }
  if (param_2 == 0) {
    puVar3 = &uStack_8c;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uStack_8c = 0x7c;
    iVar2 = (**(code **)(*DAT_00529578 + 100))(DAT_00529578,0,&uStack_8c,1,0);
    if (iVar2 == 0) {
      (**(code **)(*DAT_00529578 + 0x80))(DAT_00529578,0);
    }
    else {
      _DAT_005295e4 = 0x800;
      DAT_004c86c0._0_2_ = 0;
      iStack_4 = 1;
      iVar2 = (**(code **)(*DAT_0052d454 + 0x18))(DAT_0052d454,&DAT_0052957c,&DAT_00529578,0);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  if ((iStack_4 != 1) &&
     (iVar2 = (**(code **)(*DAT_00ec8e00 + 0xc))(DAT_00ec8e00,DAT_00529578), iVar2 != 0)) {
    return 1;
  }
  iVar2 = (**(code **)(*DAT_00529578 + 0x58))(DAT_00529578,&DAT_0052957c);
  if (iVar2 == 0) {
    if (((*(uint *)(DAT_0052d448 + 0x11c) & 0x10000000) == 0) ||
       (PTR_FUN_004c86b8 = FUN_00488a90, iStack_4 == 1)) {
      PTR_FUN_004c86b8 = FUN_00423cb0;
    }
    FUN_00488a90();
    return 0;
  }
  return 1;
}



undefined4 FUN_00488a80(void)

{
  return DAT_00529578;
}



void FUN_00488a90(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_64 [20];
  uint local_14;

  puVar1 = local_64;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_64[0] = 100;
  local_14 = DAT_004c86c0 & 0xffff;
  do {
    iVar2 = (**(code **)(*DAT_00529578 + 0x14))(DAT_00529578,0,0,0,0x3000000,local_64);
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 == -0x7789fe3e) {
      iVar2 = (**(code **)(*DAT_00529578 + 0x6c))(DAT_00529578);
    }
  } while (iVar2 == 0);
  return;
}



bool FUN_00488b00(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uStack_5e4;
  undefined4 *puStack_5e0;
  undefined *puStack_5dc;
  undefined4 *puStack_5d8;
  int *piStack_5d4;
  int **ppiStack_5d0;
  undefined4 *puStack_5cc;
  int *local_5c0 [7];
  undefined4 local_5a4 [12];
  int iStack_574;
  undefined4 auStack_440 [255];
  int iStack_44;
  int iStack_40;
  undefined4 uStack_24;

  local_5c0[0] = (int *)0x0;
  puStack_5cc = (undefined4 *)0x0;
  if (*(int *)(DAT_0052d448 + 0x108) == 0) {
    piStack_5d4 = (int *)(DAT_0052d448 + 0x294);
  }
  else {
    piStack_5d4 = (int *)0x0;
  }
  ppiStack_5d0 = local_5c0;
  puStack_5d8 = (undefined4 *)0x488b3a;
  iVar1 = DirectDrawCreate();
  if (iVar1 != 0) {
    return false;
  }
  puStack_5cc = (undefined4 *)0x0;
  puVar2 = local_5a4;
  for (iVar1 = 0x5f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  ppiStack_5d0 = (int **)local_5a4;
  local_5a4[0] = 0x17c;
  piStack_5d4 = local_5c0[0];
  puStack_5d8 = (undefined4 *)0x488b6f;
  iVar1 = (**(code **)(*local_5c0[0] + 0x2c))();
  if (iVar1 != 0) {
    return false;
  }
  DAT_00ec8d80 = iStack_574;
  puStack_5d8 = &DAT_0052d454;
  puStack_5dc = &DAT_004af1c8;
  puStack_5e0 = puStack_5cc;
  iVar1 = (**(code **)*puStack_5cc)();
  if (iVar1 != 0) {
    return false;
  }
  uStack_5e4 = 1;
  puVar2 = auStack_440;
  for (iVar1 = 0x10a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  piVar3 = DAT_0052d454;
  iVar1 = (**(code **)(*DAT_0052d454 + 0x6c))(DAT_0052d454,auStack_440);
  if (iVar1 != 0) {
    return false;
  }
  if (((iStack_44 == 0x1142) && (iStack_40 == 0x643d)) ||
     ((iStack_44 == 0x10d9 && (iStack_40 == 0x8626)))) {
    DAT_0052d45c = 1;
  }
  if ((iStack_44 == 0x121a) && ((iStack_40 == 1 || (iStack_40 == 2)))) {
    puStack_5dc = (undefined *)0x1000;
    puStack_5d8 = (undefined4 *)0x0;
    piStack_5d4 = (int *)0x0;
    ppiStack_5d0 = (int **)0x0;
    iVar1 = (**(code **)(*DAT_0052d454 + 0x5c))(DAT_0052d454,&puStack_5dc,&puStack_5e0,&puStack_5cc)
    ;
    if (iVar1 != 0) {
      return false;
    }
    DAT_00ec8d80 = DAT_00ec8d80 - (int)puStack_5e0;
  }
  iVar1 = (**(code **)(iRam00000001 + 8))(1);
  if (iVar1 != 0) {
    return false;
  }
  DAT_0052d44c = 0;
  iVar1 = (**(code **)(*DAT_0052d454 + 0x50))(DAT_0052d454,uStack_24,0x11,uStack_5e4,piVar3,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052d454 + 0x20))(DAT_0052d454,0,0,0,&LAB_00488f50);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052d454 + 0x50))(DAT_0052d454,uStack_24,8);
  return iVar1 == 0;
}



void FUN_00488d10(void)

{
  int iVar1;
  undefined4 uVar2;

  if (DAT_0052d454 != (int *)0x0) {
    iVar1 = *DAT_0052d454;
    uVar2 = FUN_0048c780(8);
    (**(code **)(iVar1 + 0x50))(DAT_0052d454,uVar2);
    (**(code **)(*DAT_0052d454 + 0x4c))(DAT_0052d454);
    (**(code **)(*DAT_0052d454 + 8))(DAT_0052d454);
    DAT_0052d454 = (int *)0x0;
  }
  DAT_004c86bc = 8;
  DAT_0052d44c = 0;
  return;
}



undefined4 FUN_00489260(void)

{
  return DAT_0052d454;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00489270(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *unaff_EDI;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 local_8;
  undefined4 local_4;

  local_8 = param_2[1];
  local_4 = param_2[2];
  DAT_00ec8ca0 = 1;
  _DAT_00ec8ca4 = 0;
  _DAT_00ec8ca8 = 0;
  _DAT_00ec8cf8 = 0;
  puVar4 = &DAT_00ec8d04;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar8 = 0;
  DAT_00ec8d04 = 0x7c;
  _DAT_00ec8d08 = 1;
  DAT_00ec8d6c = 0x200;
  piVar7 = &DAT_00ec8d04;
  iVar2 = (**(code **)(*DAT_0052d454 + 0x18))(DAT_0052d454,&DAT_00ec8d04,&DAT_00ec8d00,0);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*DAT_0052d454 + 0x10))(DAT_0052d454,0,&local_8);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*unaff_EDI + 0x20))(unaff_EDI,0,uVar8);
  if (iVar2 != 0) {
    (**(code **)(*piVar7 + 8))(piVar7);
    return 0;
  }
  iVar2 = (**(code **)(*DAT_00ec8d00 + 0x70))(DAT_00ec8d00);
  if (iVar2 != 0) {
    (**(code **)(iRam00000000 + 8))(0);
    return 0;
  }
  (**(code **)(iRam00000000 + 8))(0);
  iVar1 = (**(code **)(*DAT_00ec8d00 + 0x58))(DAT_00ec8d00);
  iVar2 = DAT_00ec8d10;
  if (iVar1 != 0) {
    return 0;
  }
  param_2[1] = DAT_00ec8d10;
  iVar1 = DAT_00ec8d0c;
  param_2[2] = DAT_00ec8d0c;
  param_2[4] = DAT_00ec8d14;
  if (((iVar2 == 0x140) && (iVar1 == 200)) || ((iVar2 == 0x280 && (param_2[2] == 400)))) {
    *param_2 = 0x3f400000;
  }
  else {
    *param_2 = 0x3f800000;
  }
  if ((DAT_00ec8d50 & 0x1828) != 0) {
    return 0;
  }
  piVar5 = unaff_EDI;
  if ((DAT_00ec8d50 & 0x40) != 0) {
    param_2[6] = 1;
    param_2[7] = DAT_00ec8d58;
    iVar2 = 0;
    for (uVar3 = DAT_00ec8d5c; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
      iVar2 = iVar2 + 1;
    }
    param_2[0xb] = iVar2;
    uVar8 = FUN_00484880((int)(0xff / (ulonglong)(DAT_00ec8d5c >> ((byte)iVar2 & 0x1f))));
    param_2[0xe] = uVar8;
    iVar2 = 0;
    for (; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
      iVar2 = iVar2 + 1;
    }
    param_2[8] = iVar2;
    iVar2 = 0;
    for (uVar3 = DAT_00ec8d60; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
      iVar2 = iVar2 + 1;
    }
    param_2[0xc] = iVar2;
    uVar8 = FUN_00484880((int)(0xff / (ulonglong)(DAT_00ec8d60 >> ((byte)iVar2 & 0x1f))));
    param_2[0xf] = uVar8;
    iVar2 = 0;
    for (; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
      iVar2 = iVar2 + 1;
    }
    param_2[9] = iVar2;
    iVar2 = 0;
    for (uVar3 = DAT_00ec8d64; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
      iVar2 = iVar2 + 1;
    }
    param_2[0xd] = iVar2;
    uVar8 = FUN_00484880((int)(0xff / (ulonglong)(DAT_00ec8d64 >> ((byte)iVar2 & 0x1f))));
    param_2[0x10] = uVar8;
    iVar2 = 0;
    for (; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
      iVar2 = iVar2 + 1;
    }
    param_2[10] = iVar2;
    piVar5 = unaff_EDI;
  }
  DAT_00ec8e0c = piVar5;
  DAT_00ec8e10 = piVar7;
  switch(param_2[7]) {
  case 8:
    param_2[5] = param_2[4];
    break;
  case 0x10:
    param_2[5] = (uint)param_2[4] >> 1;
    break;
  case 0x18:
    param_2[5] = (uint)param_2[4] / 3;
    break;
  case 0x20:
    param_2[5] = (uint)param_2[4] >> 2;
  }
  puVar4 = (undefined4 *)((uint)param_2[7] >> 3);
  param_2[3] = (int)puVar4 * param_2[1] * param_2[2];
  piVar7 = param_2 + 1;
  piVar5 = &DAT_00ec8cac;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar5 = piVar5 + 1;
  }
  _DAT_00ec8cb8 = DAT_00ec8d14;
  _DAT_00ec8cbc = DAT_00ec8d14 / (uint)puVar4;
  if ((DAT_00ec8d6c & 0x4000) != 0) {
    _DAT_00ec8ca8 = 1;
  }
  puVar6 = &DAT_00ec8e04;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  DAT_00ec8e04 = 0x7c;
  _DAT_00ec8e08 = 7;
  DAT_00ec8e6c = 0x2040;
  iVar2 = (**(code **)(*DAT_0052d454 + 0x18))(DAT_0052d454,&DAT_00ec8e04,&DAT_00ec8e00,0);
  if (iVar2 == 0) {
    DAT_00ec8da0 = 1;
    _DAT_00ec8da4 = 0;
    _DAT_00ec8da8 = 1;
    iVar2 = (**(code **)(*DAT_00ec8e00 + 0x58))(DAT_00ec8e00,&DAT_00ec8e04);
    if (iVar2 != 0) {
      return 0;
    }
    DAT_00ec8db0 = DAT_00ec8e0c;
    DAT_00ec8dac = DAT_00ec8e10;
    _DAT_00ec8db8 = DAT_00ec8e14;
    if ((DAT_00ec8e50 & 0x1828) == 0) {
      if ((DAT_00ec8e50 & 0x40) != 0) {
        _DAT_00ec8dc0 = 1;
        _DAT_00ec8dc4 = DAT_00ec8e58;
        _DAT_00ec8dd4 = 0;
        for (uVar3 = DAT_00ec8e5c; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
          _DAT_00ec8dd4 = _DAT_00ec8dd4 + 1;
        }
        _DAT_00ec8de0 =
             FUN_00484880((int)(0xff / (ulonglong)(DAT_00ec8e5c >> ((byte)_DAT_00ec8dd4 & 0x1f))));
        _DAT_00ec8dc8 = 0;
        for (; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
          _DAT_00ec8dc8 = _DAT_00ec8dc8 + 1;
        }
        _DAT_00ec8dd8 = 0;
        for (uVar3 = DAT_00ec8e60; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
          _DAT_00ec8dd8 = _DAT_00ec8dd8 + 1;
        }
        _DAT_00ec8de4 =
             FUN_00484880((int)(0xff / (ulonglong)(DAT_00ec8e60 >> ((byte)_DAT_00ec8dd8 & 0x1f))));
        _DAT_00ec8dcc = 0;
        for (; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
          _DAT_00ec8dcc = _DAT_00ec8dcc + 1;
        }
        _DAT_00ec8ddc = 0;
        for (uVar3 = DAT_00ec8e64; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
          _DAT_00ec8ddc = _DAT_00ec8ddc + 1;
        }
        _DAT_00ec8de8 =
             FUN_00484880((int)(0xff / (ulonglong)(DAT_00ec8e64 >> ((byte)_DAT_00ec8ddc & 0x1f))));
        _DAT_00ec8dd0 = 0;
        for (; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
          _DAT_00ec8dd0 = _DAT_00ec8dd0 + 1;
        }
        puVar4 = &DAT_00ec8d04;
      }
      _DAT_00ec8db8 = DAT_00ec8e14;
      DAT_004c86bc = 8;
      _DAT_00ec8dbc = DAT_00ec8e14 / (uint)puVar4;
      return 1;
    }
    return 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00489790(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;

  DAT_004c86bc = 0x11;
  iVar2 = (**(code **)(*DAT_0052d454 + 0x50))(DAT_0052d454,param_1,0x11);
  if (iVar2 != 0) {
    return 0;
  }
  puVar1 = (undefined4 *)(unaff_EBX + 4);
  iVar2 = (**(code **)(*DAT_0052d454 + 0x54))
                    (DAT_0052d454,*puVar1,*(undefined4 *)(unaff_EBX + 8),
                     *(undefined4 *)(unaff_EBX + 0x1c),0,0);
  if (iVar2 != 0) {
    return 0;
  }
  _DAT_00ec8ca4 = 0;
  _DAT_00ec8ca8 = 0;
  DAT_00ec8ca0 = 1;
  puVar3 = puVar1;
  puVar4 = &DAT_00ec8cac;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_00ec8cf8 = 0;
  puVar3 = &DAT_00ec8d04;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_00ec8d04 = 0x7c;
  DAT_00ec8d10 = *puVar1;
  DAT_00ec8d0c = *(undefined4 *)(unaff_EBX + 8);
  _DAT_00ec8d18 = 1;
  _DAT_00ec8d08 = 0x21;
  DAT_00ec8d6c = 0x2218;
  iVar2 = (**(code **)(*DAT_0052d454 + 0x18))(DAT_0052d454,&DAT_00ec8d04,&DAT_00ec8d00,0);
  if (iVar2 != 0) {
    return 0;
  }
  piVar5 = DAT_00ec8d00;
  iVar2 = (**(code **)(*DAT_00ec8d00 + 0x58))(DAT_00ec8d00,&DAT_00ec8d04);
  if (iVar2 != 0) {
    return 0;
  }
  _DAT_00ec8cb8 = DAT_00ec8d14;
  _DAT_00ec8cbc = DAT_00ec8d14 / (*(uint *)(unaff_EBX + 0x1c) >> 3);
  if ((DAT_00ec8d6c & 0x4000) != 0) {
    _DAT_00ec8ca8 = 1;
  }
  _DAT_00ec8da4 = 0;
  _DAT_00ec8da8 = 0;
  DAT_00ec8da0 = 1;
  puVar3 = puVar1;
  puVar4 = &DAT_00ec8dac;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_00ec8df8 = 0;
  puVar3 = &DAT_00ec8e04;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_00ec8e04 = 0x7c;
  DAT_00ec8e10 = *puVar1;
  DAT_00ec8e0c = *(undefined4 *)(unaff_EBX + 8);
  _DAT_00ec8e08 = 0x21;
  DAT_00ec8e6c = 0x2004;
  _DAT_00ec8e18 = 1;
  iVar2 = (**(code **)(*DAT_00ec8d00 + 0x30))(DAT_00ec8d00,&DAT_00ec8e6c,&DAT_00ec8e00);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*DAT_00ec8e00 + 0x58))(DAT_00ec8e00,&DAT_00ec8e04);
  if (iVar2 != 0) {
    return 0;
  }
  if ((DAT_00ec8e6c & 0x4000) != 0) {
    _DAT_00ec8da8 = 1;
  }
  _DAT_00ec8db8 = DAT_00ec8e14;
  _DAT_00ec8dbc = DAT_00ec8e14 / (uint)piVar5;
  return 1;
}



void FUN_004899a0(void)

{
  int iVar1;
  undefined4 *puVar2;

  if (DAT_00529578 != (int *)0x0) {
    (**(code **)(*DAT_00ec8e00 + 0x20))(DAT_00ec8e00,0,DAT_00529578);
    (**(code **)(*DAT_00529578 + 8))(DAT_00529578);
  }
  if (DAT_00ec8d00 != (int *)0x0) {
    (**(code **)(*DAT_00ec8d00 + 8))(DAT_00ec8d00);
  }
  puVar2 = &DAT_00529578;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00ec8da0;
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00ec8ca0;
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



int * FUN_00489a00(int **param_1)

{
  int iVar1;

  do {
    iVar1 = (**(code **)(**param_1 + 100))(*param_1,0,param_1 + 1,1,0);
    if (iVar1 == 0) {
      return param_1[10];
    }
    if (iVar1 == -0x7789fe3e) {
      if ((*(byte *)(param_1 + 0x1b) & 4) == 0) {
        iVar1 = (**(code **)(**param_1 + 0x6c))(*param_1);
      }
      else {
        iVar1 = (**(code **)(*DAT_00ec8d00 + 0x6c))(DAT_00ec8d00);
      }
    }
  } while (iVar1 == 0);
  return (int *)0x0;
}



undefined4 FUN_00489a60(int **param_1)

{
  int iVar1;

  do {
    iVar1 = (**(code **)(**param_1 + 0x80))(*param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == -0x7789fe3e) {
      if ((*(byte *)(param_1 + 0x1b) & 4) == 0) {
        iVar1 = (**(code **)(**param_1 + 0x6c))(*param_1);
      }
      else {
        iVar1 = (**(code **)(*DAT_00ec8d00 + 0x6c))(DAT_00ec8d00);
      }
    }
  } while (iVar1 == 0);
  return 1;
}



undefined4 FUN_00489ab0(void)

{
  int iVar1;
  HWND hWnd;
  tagPOINT local_28;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;

  if (DAT_0050b5cc == 1) {
    DAT_0050b5cc = 0;
    return 0;
  }
  while( true ) {
    if (DAT_0052d458 == 0) {
      hWnd = (HWND)FUN_0048c780();
      local_28.y = 0;
      local_28.x = 0;
      ClientToScreen(hWnd,&local_28);
      local_10 = local_28.x;
      local_8 = local_28.x + DAT_00ec8dac;
      local_18 = DAT_00ec8dac;
      local_c = local_28.y;
      local_4 = local_28.y + DAT_00ec8db0;
      local_20 = 0;
      local_1c = 0;
      local_14 = DAT_00ec8db0;
      iVar1 = (**(code **)(*DAT_00ec8d00 + 0x14))
                        (DAT_00ec8d00,&local_10,DAT_00ec8e00,&local_20,0x1000000,0);
    }
    else {
      iVar1 = (**(code **)(*DAT_00ec8d00 + 0x2c))(DAT_00ec8d00,0,0);
    }
    if (iVar1 == 0) break;
    if (((iVar1 == -0x7789fe3e) &&
        ((iVar1 = (**(code **)(*DAT_00ec8d00 + 0x6c))(DAT_00ec8d00), iVar1 != 0 ||
         ((iVar1 = 0, DAT_0052d458 == 0 &&
          (iVar1 = (**(code **)(*DAT_00ec8e00 + 0x6c))(DAT_00ec8e00), iVar1 != 0)))))) ||
       ((iVar1 != -0x7789fde4 && (iVar1 != 0)))) {
      return 1;
    }
  }
  return 0;
}



void FUN_00489bc0(void)

{
  if (PTR_FUN_004c86b8 != (undefined *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00489bc9. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)PTR_FUN_004c86b8)();
    return;
  }
  return;
}



undefined4 FUN_00489bd0(int **param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int local_74;
  int local_70;
  int *local_6c;
  int *local_68;
  undefined4 local_64 [20];
  undefined4 local_14;

  puVar2 = local_64;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_64[0] = 100;
  local_14 = param_2;
  if (param_3 == (int *)0x0) {
    local_6c = param_1[4];
    local_68 = param_1[3];
    local_74 = 0;
    local_70 = 0;
  }
  else {
    if (param_3[2] == 0) {
      return 1;
    }
    if (param_3[3] == 0) {
      return 1;
    }
    local_74 = *param_3;
    local_70 = param_3[1];
    local_6c = (int *)(local_74 + param_3[2]);
    local_68 = (int *)(local_70 + param_3[3]);
  }
  do {
    iVar1 = (**(code **)(**param_1 + 0x14))(*param_1,&local_74,0,0,0x1000400,local_64);
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == -0x7789fe3e) {
      if ((*(byte *)(param_1 + 0x1b) & 4) == 0) {
        iVar1 = (**(code **)(**param_1 + 0x6c))(*param_1);
      }
      else {
        iVar1 = (**(code **)(*DAT_00ec8d00 + 0x6c))(DAT_00ec8d00);
      }
    }
  } while (iVar1 == 0);
  return 1;
}



void FUN_00489cd0(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  FUN_00489bd0(&DAT_00ec8e00,((param_1 & 0xf8) << 5 | param_2 & 0xfc) << 3 | (param_3 & 0xff) >> 3,
               param_4);
  return;
}



void FUN_00489d20(undefined4 param_1)

{
  FUN_0048d4a0(param_1,&DAT_00ec8da0);
  return;
}



undefined4 FUN_00489d40(void)

{
  return DAT_0052d44c;
}



undefined4 FUN_00489d50(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;

  if (param_1 < DAT_0052d44c) {
    puVar2 = (undefined4 *)(&DAT_005295f8 + param_1 * 0x50);
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  return 1;
}



undefined4 FUN_00489d90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  if (DAT_0052d450 != (undefined4 *)0x0) {
    puVar2 = DAT_0052d450;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
    return 0;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00489dc0(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_0052d570;
  for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_0052d870;
  for (iVar1 = 0x368; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0052e638 = (undefined4 *)FUN_00489260();
  if (DAT_0052e638 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)*DAT_0052e638)(DAT_0052e638,&DAT_004af278,&DAT_0052e640);
  if (iVar1 != 0) {
    return 0;
  }
  DAT_0052d56c = 0;
  iVar1 = (**(code **)(*DAT_0052e640 + 0xc))(DAT_0052e640,&LAB_0048b540,0);
  if (iVar1 != 0) {
    return 0;
  }
  if (DAT_0052d56c == 0) {
    return 0;
  }
  _DAT_0052e64c = 1;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00489e40(void)

{
  int iVar1;
  undefined4 *puVar2;

  if (DAT_0052e650 != 0) {
    FUN_0048a1c0();
  }
  if (DAT_0052e640 != (int *)0x0) {
    (**(code **)(*DAT_0052e640 + 8))(DAT_0052e640);
  }
  DAT_0052e644 = 0;
  puVar2 = &DAT_0052d570;
  for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_0052d870;
  for (iVar1 = 0x368; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0052e640 = (int *)0x0;
  DAT_0052d56c = 0;
  _DAT_0052e64c = 0;
  return;
}



undefined4 FUN_00489ea0(void)

{
  return DAT_0052d56c;
}



undefined4 * FUN_00489eb0(void)

{
  return &DAT_0052d870;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00489ec0(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined local_51c [284];
  undefined local_400 [1024];

  if ((DAT_0052e650 == 0) && (param_1 < DAT_0052d56c)) {
    _DAT_0052d55c = param_1;
    DAT_0052e618 = &DAT_0052d870 + param_1 * 0xda;
    if ((&DAT_0052d878)[param_1 * 0xda] != 0) {
      FUN_0048b4b0(local_51c);
      iVar1 = FUN_004888d0(local_51c,*DAT_0052e618 == 0,(DAT_0052d4cc & 0x8000) != 0);
      if (iVar1 == 0) {
        puVar2 = local_400 + 2;
        iVar1 = 0x100;
        do {
          puVar2[1] = 0x80;
          *puVar2 = 0xfe;
          puVar2[-1] = 0xfe;
          puVar2[-2] = 0xfe;
          puVar2 = puVar2 + 4;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = (**(code **)(*DAT_0052e638 + 0x14))(DAT_0052e638,0x4c,local_400,&DAT_0052e63c,0);
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(*DAT_0052e640 + 0x20))
                              (DAT_0052e640,DAT_0052e618 + 0x8e,DAT_00ec8e00,&DAT_0052e644,0),
           iVar1 == 0)) {
          _DAT_0052d460 = 0xfc;
          iVar1 = (**(code **)(*DAT_0052e644 + 0xc))(DAT_0052e644,&DAT_0052d460,&stack0xfffffadc);
          if (iVar1 == 0) {
            DAT_0052e61c = 0;
            DAT_0052e620 = 0;
            iVar1 = (**(code **)(*DAT_0052e644 + 0x20))(DAT_0052e644,&LAB_0048b770,0);
            if ((((iVar1 == 0) && (DAT_0052e61c != 0)) && (DAT_0052e620 != 0)) &&
               (iVar1 = FUN_0048b3c0(), iVar1 != 0)) {
              DAT_0052e624 = 0x200;
              if (DAT_0052e618[0xc] != 0) {
                DAT_0052e624 = DAT_0052e618[0xc];
              }
              DAT_004c98b4 = 1;
              DAT_0052e62c = 0;
              DAT_0052e630 = 0;
              DAT_0052e634 = 0;
              DAT_0052d564 = FUN_0048add0(&DAT_004ae850);
              DAT_0052d568 = FUN_0048add0(&DAT_004ae888);
              iVar1 = DAT_0052d568 * 0x60;
              if (((&DAT_0052d59c)[DAT_0052d568 * 0x18] == 0) && (DAT_0052e618[3] != 0)) {
                *(undefined4 *)(&DAT_0052d5a8 + iVar1) = 1;
                *(undefined4 *)(&DAT_0052d5ac + iVar1) = 0;
              }
              DAT_0052d560 = FUN_0048add0(&DAT_004ae8c0);
              iVar1 = DAT_0052d560 * 0x60;
              if (((&DAT_0052d59c)[DAT_0052d560 * 0x18] == 0) && (DAT_0052e618[3] != 0)) {
                *(undefined4 *)(&DAT_0052d5a8 + iVar1) = 1;
                *(undefined4 *)(&DAT_0052d5ac + iVar1) = 0;
              }
              iVar1 = FUN_0048aeb0();
              if ((iVar1 != 0) &&
                 (iVar1 = FUN_00488880(DAT_0052e618 + 0x4d,DAT_0052e618 + 0x4e), iVar1 == 0)) {
                DAT_0052e650 = 1;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_0048a140(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;

  if ((DAT_0052d4cc & 0x100) != 0) {
    iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x23,3);
    if (iVar1 == 0) {
      return 2;
    }
  }
  if ((DAT_0052d4cc & 0x80) != 0) {
    uVar2 = (**(code **)(*DAT_0052e644 + 0x60))(DAT_0052e644,4,0);
    uVar3 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x23,0);
    if ((uVar2 | uVar3) == 0) {
      return 1;
    }
  }
  return 0;
}



uint FUN_0048a1a0(void)

{
  return (DAT_0052d4ec & 0xff) >> 3 & 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0048a1c0(void)

{
  FUN_0048ac50();
  if (DAT_0052e63c != (int *)0x0) {
    (**(code **)(*DAT_0052e63c + 8))(DAT_0052e63c);
    DAT_0052e63c = (int *)0x0;
  }
  if (DAT_0052e648 != (int *)0x0) {
    (**(code **)(*DAT_0052e648 + 8))(DAT_0052e648);
    DAT_0052e648 = (int *)0x0;
  }
  if (DAT_0052e644 != (int *)0x0) {
    (**(code **)(*DAT_0052e644 + 8))(DAT_0052e644);
    DAT_0052e644 = (int *)0x0;
  }
  DAT_0052e61c = 0;
  _DAT_0052d55c = 0;
  DAT_0052e618 = 0;
  DAT_0052e620 = 0;
  DAT_0052e650 = 0;
  return;
}



void FUN_0048a230(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;

  if (param_1 == 1) {
    *param_3 = *(undefined4 *)(&DAT_0052d5a8 + DAT_0052d568 * 0x60);
    *param_4 = *(undefined4 *)(&DAT_0052d5ac + DAT_0052d568 * 0x60);
    iVar1 = DAT_0052d568;
  }
  else if (param_1 == 2) {
    *param_3 = *(undefined4 *)(&DAT_0052d5a8 + DAT_0052d560 * 0x60);
    *param_4 = *(undefined4 *)(&DAT_0052d5ac + DAT_0052d560 * 0x60);
    iVar1 = DAT_0052d560;
  }
  else {
    *param_3 = 0;
    iVar1 = DAT_0052d564;
  }
  puVar3 = &DAT_0052d570 + iVar1 * 0x18;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



undefined4 FUN_0048a2d0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) != 1) {
    return 2;
  }
  return 1;
}



undefined4 FUN_0048a2f0(void)

{
  return DAT_0052e61c;
}



void FUN_0048a300(void)

{
  DAT_004c98b4 = DAT_004c98b4 + 1;
  (**(code **)(*DAT_0052e644 + 0x24))(DAT_0052e644);
  DAT_0052e628 = 0;
  return;
}



void FUN_0048a330(void)

{
  (**(code **)(*DAT_0052e644 + 0x28))(DAT_0052e644);
  DAT_0052e628 = 0;
  return;
}



void FUN_0048a350(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;

  if (param_4 <= DAT_0052e624) {
    FUN_0048a450(param_2);
    if (param_1 != DAT_0052e628) {
      iVar1 = (**(code **)(*DAT_0052e644 + 0x98))(DAT_0052e644,0,param_1);
      if (iVar1 == 0) {
        DAT_0052e628 = param_1;
      }
    }
    (**(code **)(*DAT_0052e644 + 0x74))(DAT_0052e644,4,0x1c4,param_3,param_4,param_5,param_6,0x18);
  }
  return;
}



void FUN_0048a3c0(void)

{
  int iVar1;

  FUN_0048a450(DAT_0052e610 & 0xffff79ff);
  iVar1 = (**(code **)(*DAT_0052e644 + 0x98))(DAT_0052e644,0,0);
  if (iVar1 == 0) {
    DAT_0052e628 = 0;
  }
  return;
}



void FUN_0048a3f0(undefined4 param_1,uint param_2)

{
  if (param_2 <= DAT_0052e624) {
    (**(code **)(*DAT_0052e644 + 0x70))(DAT_0052e644,3,0x1c4,param_1,param_2,4);
  }
  return;
}



void FUN_0048a420(undefined4 param_1,uint param_2)

{
  if (param_2 <= DAT_0052e624) {
    (**(code **)(*DAT_0052e644 + 0x70))(DAT_0052e644,1,0x1c4,param_1,param_2,4);
  }
  return;
}



void FUN_0048a450(uint param_1)

{
  int iVar1;

  if (DAT_0052e610 != param_1) {
    if (((param_1 ^ DAT_0052e610) & 0x600) != 0) {
      if ((param_1 & 0x400) == 0) {
        if ((param_1 & 0x200) == 0) {
          (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1b,0);
        }
        else {
          (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1b,1);
          (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x15,2);
        }
      }
      else {
        (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1b,1);
        (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x15,4);
      }
    }
    if (((param_1 ^ DAT_0052e610) & 0x2000) != 0) {
      if ((param_1 & 0x2000) == 0) {
        (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0xe,1);
      }
      else {
        (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0xe,0);
      }
    }
    if (((param_1 ^ DAT_0052e610) & 0x800) != 0) {
      if ((param_1 & 0x800) == 0) {
        (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0xd,1);
      }
      else {
        (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0xd,3);
      }
    }
    if (((param_1 ^ DAT_0052e610) & 0x1000) != 0) {
      if ((param_1 & 0x1000) == 0) {
        (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0xe,1);
      }
      else {
        (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0xe,3);
      }
    }
    if (((param_1 ^ DAT_0052e610) & 0x8000) != 0) {
      if (((param_1 & 0x8000) == 0) || (DAT_004c98b0 == 0)) {
        (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1c,0);
      }
      else {
        (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1c,1);
      }
    }
    if (((param_1 ^ DAT_0052e610) & 0x80) != 0) {
      DAT_0052e610 = param_1;
      iVar1 = FUN_0048b1b0(DAT_0052e614);
      if (iVar1 != 0) {
        return;
      }
    }
    DAT_0052e610 = param_1;
  }
  return;
}



void FUN_0048a5e0(undefined4 *param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  int *unaff_EBP;
  uint uVar6;
  int *unaff_ESI;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_EDI;
  uint *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int local_1c4;
  code *local_1c0;
  int iStack_1bc;
  int local_1b8;
  int local_1b4;
  int *piStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  uint local_19c;
  int local_198;
  undefined4 local_194 [4];
  int aiStack_184 [4];
  undefined4 local_174 [6];
  uint local_15c;
  undefined4 local_12c [8];
  undefined *local_10c;
  uint auStack_108 [4];
  int iStack_f8;
  int iStack_e4;
  int aiStack_8c [4];
  undefined4 local_7c [28];
  int *piStack_c;
  uint uStack_4;

  for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  local_1c4 = 0;
  local_1c0 = (code *)0x0;
  if (DAT_0052e61c == 0) {
    return;
  }
  iVar2 = *param_2;
  local_198 = iVar2;
  FUN_0048a9e0(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&local_1b4,&local_1b8);
  local_19c = (uint)(*(int *)(iVar2 + 0x24) * local_1b8 * local_1b4) >> 3;
  if (DAT_0052e614 == 0) {
    param_3 = 1;
  }
  iVar4 = DAT_0052d568;
  if ((param_4 != 1) && (iVar4 = DAT_0052d560, param_4 != 2)) {
    iVar4 = DAT_0052d564;
  }
  puVar7 = (undefined4 *)(&DAT_0052d5b0 + iVar4 * 0x60);
  puVar10 = local_194;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar7 = local_174;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_174[0] = 0x7c;
  local_174[1] = 0x1007;
  local_10c = (undefined *)0x1800;
  local_174[3] = *(undefined4 *)(iVar2 + 0xc);
  uVar6 = 0;
  local_174[2] = *(undefined4 *)(iVar2 + 0x10);
  local_1c4 = 0;
  puVar7 = local_194;
  puVar10 = local_12c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  if (1 < param_3) {
    local_174[1] = 0x21007;
    local_10c = &LAB_00401808;
    local_15c = param_3;
  }
  puVar7 = local_174;
  puVar10 = local_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar2 = (**(code **)(*DAT_0052e638 + 0x18))(DAT_0052e638,local_174,&local_1c4,0);
  if ((iVar2 == 0) &&
     (iVar2 = (**(code **)*unaff_EDI)(unaff_EDI,&DAT_004af328,&stack0xfffffe34), iVar2 == 0)) {
    uVar5 = uStack_4;
    if (uStack_4 != 0) {
      do {
        puVar9 = auStack_108;
        for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        auStack_108[0] = 0x7c;
        iVar2 = (**(code **)(*unaff_EDI + 100))(unaff_EDI,0,auStack_108,1,0);
        if (iVar2 != 0) goto LAB_0048a9bb;
        iVar2 = *(int *)(*param_2 + 0x20);
        if (((iVar2 != 0) && (0 < iVar2)) && (iVar2 < 3)) {
          FUN_00488370(*param_2);
          uVar1 = 0;
          if (auStack_108[2] != 0) {
            do {
              puVar7 = (undefined4 *)(*(int *)(*param_2 + 0x18) * uVar1 + *(int *)(*param_2 + 0x58))
              ;
              puVar10 = (undefined4 *)(iStack_f8 * uVar1 + iStack_e4);
              for (uVar5 = auStack_108[3] * 2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar10 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar10 = puVar10 + 1;
              }
              uVar1 = uVar1 + 1;
              for (uVar5 = auStack_108[3] * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined *)puVar10 = *(undefined *)puVar7;
                puVar7 = (undefined4 *)((int)puVar7 + 1);
                puVar10 = (undefined4 *)((int)puVar10 + 1);
              }
              uVar5 = uStack_4;
            } while (uVar1 < auStack_108[2]);
          }
          FUN_004883c0(*param_2);
        }
        iVar2 = (**(code **)(*unaff_EDI + 0x80))(unaff_EDI,0);
        if (iVar2 != 0) goto LAB_0048a9bb;
        if (uVar6 < uVar5 - 1) {
          local_1c0 = FUN_00401000;
          iStack_1bc = iVar2;
          local_1b8 = iVar2;
          local_1b4 = iVar2;
          iVar2 = (**(code **)(*unaff_EDI + 0x30))(unaff_EDI,&local_1c0,&stack0xfffffe2c);
          if (iVar2 != 0) goto LAB_0048a9bb;
        }
        uVar6 = uVar6 + 1;
        param_2 = param_2 + 1;
      } while (uVar6 < uVar5);
    }
    if ((local_1c4 != *(int *)(iStack_1a8 + 0xc)) || (unaff_EBX != *(int *)(iStack_1a8 + 0x10))) {
      aiStack_8c[3] = local_1c4;
      iVar2 = (**(code **)(*DAT_0052e638 + 0x18))(DAT_0052e638,aiStack_8c,&stack0xfffffe30,0);
      if ((iVar2 != 0) ||
         (iVar2 = (**(code **)*unaff_ESI)(unaff_ESI,&DAT_004af328,&piStack_1b0), iVar2 != 0))
      goto LAB_0048a9bb;
      uVar6 = 0;
      if (uStack_4 != 0) {
        do {
          iVar2 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,0,unaff_EDI,0,0x1000000,0);
          if (iVar2 != 0) goto LAB_0048a9bb;
          if (uVar6 < uStack_4 - 1) {
            local_1c0 = FUN_00401000;
            iStack_1bc = 0;
            local_1b8 = 0;
            local_1b4 = 0;
            iVar2 = (**(code **)(*unaff_ESI + 0x30))(unaff_ESI,&local_1c0,&stack0xfffffe30);
            if (iVar2 != 0) goto LAB_0048a9bb;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uStack_4);
      }
      if (unaff_ESI != (int *)0x0) {
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      }
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      piVar8 = aiStack_8c;
      piVar11 = aiStack_184;
      for (iVar2 = 0x1f; unaff_EBP = piStack_1b0, iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar11 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar11 = piVar11 + 1;
      }
    }
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    piStack_c[0x1f] = (int)unaff_EBP;
    piVar8 = aiStack_184;
    piVar11 = piStack_c;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar11 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar11 = piVar11 + 1;
    }
    piStack_c[0x21] = iStack_1ac;
  }
  else {
LAB_0048a9bb:
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      return;
    }
  }
  return;
}



void FUN_0048a9e0(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;

  uVar2 = *(uint *)(DAT_0052e618 + 0x20);
  if ((uVar2 <= param_1) && (uVar2 = *(uint *)(DAT_0052e618 + 0x28), param_1 <= uVar2)) {
    uVar2 = param_1;
  }
  uVar1 = *(uint *)(DAT_0052e618 + 0x24);
  if ((*(uint *)(DAT_0052e618 + 0x24) <= param_2) &&
     (uVar1 = *(uint *)(DAT_0052e618 + 0x2c), param_2 <= *(uint *)(DAT_0052e618 + 0x2c))) {
    uVar1 = param_2;
  }
  if ((*(int *)(DAT_0052e618 + 0x1c) != 0) && (uVar2 != uVar1)) {
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    *param_3 = uVar1;
    *param_4 = uVar1;
    return;
  }
  *param_3 = uVar2;
  *param_4 = uVar1;
  return;
}



void FUN_0048aa40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;

  piVar1 = (int *)param_1[0x1f];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[0x20] != 0) {
    FUN_0048ba90(param_1);
    (**(code **)(*(int *)param_1[0x20] + 8))((int *)param_1[0x20]);
  }
  for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

#endif
