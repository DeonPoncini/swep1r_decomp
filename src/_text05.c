#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_0041c1d0(void)

{
  DWORD DVar1;
  DWORD DVar2;

  DVar2 = timeGetTime();
  if (DAT_004d5e00 != 0) {
    DVar1 = DAT_004eb230;
    if (DAT_004eb230 + DAT_004b6718 < DVar2) {
      if (DAT_004eb1e0 != 0) {
        FUN_0041da00();
      }
      DVar1 = DVar2;
      if (DAT_004eb1e4 != 0) {
        FUN_00420d10();
      }
    }
    DAT_004eb230 = DVar1;
    if (DAT_004eb1dc != 0) {
      FUN_0041e880();
      FUN_0041e920();
    }
    if (DAT_00ea0250 != 0) {
      DAT_004d6b44 = 0;
      DAT_004d6b48 = 0;
      DAT_004d6b40 = 0;
      DAT_00e98eb0 = 0;
      FUN_00405cf0(0xffffffff);
    }
  }
  return;
}



void FUN_0041c260(void)

{
  int *piVar1;
  int iVar2;

  iVar2 = 0;
  piVar1 = &DAT_00ea0260;
  do {
    *piVar1 = iVar2;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0xea02b0);
  DAT_00ea02b0 = 0;
  DAT_00ea02b4 = 0;
  DAT_00ea02b8 = 3;
  DAT_00ea02bc = 10000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041c2a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;

  uVar2 = DAT_00ea02b8;
  uVar1 = DAT_00ea02b0;
  if (DAT_004d5e00 != 0) {
    puVar4 = &DAT_00ea0260;
    puVar5 = &DAT_00ec7bc8;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    DAT_00ec7c18 = uVar1;
    DAT_00ec7c1c = DAT_00ea02b4;
    DAT_00ec7c20 = uVar2;
    DAT_00ec7c24 = DAT_00ea02bc;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x3a;
    _DAT_00ec7bc0 = 0x60;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,0);
    FUN_00411120(0x3a,&DAT_00ec7bc8);
  }
  return;
}



undefined4 FUN_0041c330(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  puVar3 = &DAT_00ea0260;
  puVar1 = (undefined4 *)(param_1 + 0x28);
  do {
    puVar2 = puVar1;
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
    puVar1 = puVar2 + 1;
  } while ((int)puVar3 < 0xea02b0);
  DAT_00ea02b0 = puVar2[1];
  DAT_00ea02b4 = puVar2[2];
  DAT_00ea02b8 = puVar2[3];
  DAT_00ea02bc = puVar2[4];
  FUN_00411120(*(undefined2 *)(param_1 + 0x24),(undefined4 *)(param_1 + 0x28));
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041c390(void)

{
  if (DAT_004d5e00 != 0) {
    DAT_00ec7bc8 = DAT_004eb3b4;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x3b;
    _DAT_00ec7bc0 = 4;
    FUN_0041b760(&DAT_00ec7ba0,DAT_00ec7620,1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041c3f0(undefined4 param_1)

{
  if (DAT_004d5e00 != 0) {
    DAT_00ec7bc8 = DAT_004eb3b4;
    DAT_00ec7bcc = param_1;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x3d;
    _DAT_00ec7bc0 = 8;
    FUN_0041b760(&DAT_00ec7ba0,DAT_00ec7620,1,0);
    DAT_004eb234 = param_1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041c450(void)

{
  if (DAT_004d5e00 != 0) {
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x3c;
    _DAT_00ec7bc0 = 0;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,0);
  }
  return;
}



undefined4 FUN_0041c4d0(int param_1)

{
  return (&DAT_00ea0260)[param_1];
}



undefined4 FUN_0041c4e0(void)

{
  return DAT_00ea02b0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0041c4f0(void)

{
  int iVar1;
  undefined4 *puVar2;

  DAT_004e9eac = DAT_004e9eac | 1;
  puVar2 = &DAT_004ea8a0;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004eb1d4 = 0;
  DAT_004e9eb0 = DAT_004e9eb0 | 1;
  _DAT_004eb1d0 = 0;
  DAT_004eb1f8 = 0;
  FUN_0041b920();
  DAT_00ea05a0 = 0;
  DAT_00ea05a4 = 0;
  DAT_00ea05a8 = 0;
  DAT_00ea05ac = 0;
  DAT_00ea05b0 = 0;
  FUN_0041bd60();
  DAT_004b6714 = 0xffffffff;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041c570(void)

{
  FUN_0041bd90(0,0,0);
  DAT_004e9eac = DAT_004e9eac & 0xfffffffe;
  DAT_004e9eb0 = DAT_004e9eb0 & 0xfffffffe;
  _DAT_004eb1cc = 0;
  DAT_004eb1c8 = 0;
  FUN_004049e0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0041c5c0(int param_1,undefined4 *param_2,undefined4 param_3,char *param_4,undefined4 param_5
                )

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_108 [4];
  undefined4 local_f8;
  undefined local_f0 [62];
  undefined2 local_b2;
  undefined local_b0 [62];
  undefined2 local_72;
  char local_70 [31];
  undefined local_51;
  undefined local_50 [62];
  undefined2 local_12;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  iVar2 = 0;
  do {
    FUN_004210e0(iVar2);
    uVar1 = param_1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  puVar3 = local_108;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_0049ef50(local_f0,param_1,0x1f);
  local_b2 = 0;
  FUN_0049ef50(local_b0,param_2,0x1f);
  local_72 = 0;
  _strncpy(local_70,param_4,0x1f);
  local_51 = 0;
  FUN_0049ef50(local_50,param_3,0x1f);
  local_12 = 0;
  local_8 = param_5;
  local_f8 = 0x14;
  iVar2 = FUN_0049f820();
  param_2 = &param_1;
  param_4 = (char *)((float)iVar2 * 3.051851e-05 * 4.294967e+09);
  _DAT_004eb1f4 = (int)ROUND(ROUND((float)param_4));
  local_c = 1;
  param_1 = _DAT_004eb1f4;
  local_10 = _DAT_004eb1f4;
  if (DAT_004d5e00 == 0) {
    iVar2 = FUN_00404a20(local_108);
  }
  else {
    iVar2 = FUN_00486e60(local_108);
    if (iVar2 == 0) goto LAB_0041c6dc;
    FUN_00487180();
  }
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_0041c6dc:
  DAT_004eb1c8 = 1;
  _DAT_004eb1cc = 1;
  _DAT_00ec7624 = 0;
  DAT_00ec7620 = DAT_004d5e08;
  FUN_004871b0(0);
  DAT_004eb3b8 = 0;
  FUN_00421020(0,DAT_004d5e08);
  DAT_004eb3b4 = 0;
  FUN_0049ef50(&DAT_00e9f3c4,uVar1,0x1f);
  _DAT_00e9f402 = 0;
  FUN_0049ef50(&DAT_00e9f380,uVar1,0x1f);
  _DAT_00e9f3be = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041c760(void)

{
  _DAT_004eb1cc = 1;
  DAT_00ec7620 = 0;
  DAT_004eb1c8 = 0;
  return;
}



void FUN_0041c780(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined local_400 [1024];

  if ((DAT_004eb1f8 != 0) && (param_1 == DAT_004eb1fc)) {
    FUN_00423cb0(1);
  }
  iVar1 = FUN_0041d350(param_1);
  if (-1 < iVar1) {
    FUN_0041cae0(iVar1);
    if (DAT_004b6714 == -1) {
      FUN_0041df10(0xffffffff,1,0x6c6f7374,iVar1);
    }
    else {
      FUN_0041c990();
    }
    if (iVar1 <= DAT_004b671c) {
      DAT_004b671c = iVar1;
    }
    if ((DAT_004eb1c8 != 0) && ((&DAT_004ea8a0)[iVar1] == 0)) {
      uVar2 = FUN_0041bce0(iVar1);
      uVar2 = FUN_00421360(s__MONDOTEXT_H_0423__s_has_left_th_004b6770,uVar2);
      FUN_0049eb80(local_400,uVar2);
      FUN_0041c190(local_400);
      FUN_0041c870(iVar1);
      FUN_00411120(0x3e,iVar1);
    }
    (&DAT_004ea8a0)[iVar1] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041c870(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  if (param_1 < DAT_004eb3b8 - 1U) {
    _DAT_004b6720 = 0x1b207;
    iVar4 = 0x1b207;
    iVar3 = 0;
    do {
      iVar1 = FUN_00420f70(iVar3);
      if (iVar1 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x14);
    if (iVar4 != 0x1b207) {
      (&DAT_004ea8a0)[iVar4] = 1;
      uVar2 = FUN_0041d380(iVar4,1,0x72656a6e);
      FUN_0041df10(uVar2);
    }
  }
  return;
}



void FUN_0041c8e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;

  iVar3 = 0;
  piVar4 = &DAT_00ea04e0;
  do {
    iVar1 = FUN_00420f70(iVar3);
    if (((iVar1 != 0) && (iVar3 != DAT_004eb3b4)) && (*piVar4 == 0)) {
      DAT_004b6714 = iVar3;
      uVar2 = FUN_0041d380(iVar3,1,0x70727879);
      FUN_0041df10(uVar2);
      FUN_0041c940();
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)piVar4 < 0xea0530);
  return;
}



void FUN_0041c940(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;

  puVar3 = &DAT_004ea8f0;
  piVar2 = &DAT_00e29c44;
  do {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x60) & 0x80) != 0)) {
      *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xffffff7f | 0x40;
      *(undefined4 *)(*(int *)(iVar1 + 0x1e70) + 4) = 0x52454d4f;
      *puVar3 = 0x52454d4f;
    }
    piVar2 = piVar2 + 0x22;
    puVar3 = puVar3 + 1;
  } while ((int)piVar2 < 0xe2a6e4);
  return;
}



void FUN_0041c990(int param_1)

{
  int iVar1;

  if ((DAT_004eb1c8 != 0) || (DAT_004b6714 != -1)) {
    iVar1 = (&DAT_00e29c44)[param_1 * 0x22];
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xffffffbf | 0x80;
      *(undefined4 *)(*(int *)(iVar1 + 0x1e70) + 4) = 0x41414949;
      (&DAT_004ea8f0)[param_1] = 0x41414949;
    }
  }
  return;
}



void FUN_0041c9e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined local_400 [1024];

  iVar1 = FUN_0041d350(param_1);
  if (DAT_004eb1c8 != 0) {
    uVar2 = FUN_0041bce0(iVar1);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0424__s_has_joined_t_004b6798,uVar2);
    FUN_0049eb80(local_400,uVar2);
    FUN_0041c190(local_400);
  }
  (&DAT_004ea8a0)[iVar1] = 0;
  FUN_00411120(0x3f,iVar1);
  return;
}



void FUN_0041ca50(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined local_400 [1024];

  DAT_004eb388 = 1;
  DAT_004eb1c8 = 1;
  FUN_0041df10(0xffffffff,1,0x6374726c);
  uVar1 = FUN_0041d350(param_1);
  uVar2 = FUN_0041bce0(uVar1);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0425__s_is_now_the_h_004b67c4,uVar2);
  FUN_0049eb80(local_400,uVar2);
  FUN_0041c190(local_400);
  FUN_0041c2a0();
  FUN_00411120(0x40,uVar1);
  return;
}



void FUN_0041cae0(int param_1)

{
  if ((&DAT_00e9f448)[param_1 * 0x2c] == DAT_00ec7620) {
    DAT_00ec7620 = 0;
  }
  FUN_00420ff0(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041cb20(undefined4 param_1,int param_2,undefined4 param_3)

{
  DAT_00ec7bc8 = param_2;
  DAT_00ec7bcc = param_1;
  FUN_0049ef50(&DAT_00ec7bd0,&DAT_00e9f3c4 + param_2 * 0xb0,0xf);
  DAT_00ec7bc4 = 0x21;
  DAT_00ec7bec._2_2_ = 0;
  _DAT_00ec7ba4 = 0;
  _DAT_00ec7bc0 = 0x28;
  FUN_0041b760(&DAT_00ec7ba0,param_3,1,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041cbd0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *_Dest;
  uint *puVar4;
  uint *puVar5;
  char local_20 [15];
  undefined local_11;

  DAT_00ec7bc8 = DAT_00ec7620;
  DAT_00ec7bcc._0_2_ = (undefined2)DAT_004eb3b8;
  uVar3 = 0;
  _Dest = (uint *)((int)&DAT_00ec7bcc + 2);
  if (DAT_004eb3b8 != 0) {
    puVar5 = (uint *)&DAT_00e9f444;
    uVar2 = DAT_004eb3b8;
    puVar4 = _Dest;
    do {
      uVar1 = *puVar5;
      *puVar4 = uVar1;
      _Dest = puVar4 + 1;
      if ((uVar1 & 4) != 0) {
        FUN_0048c380(local_20,puVar5 + -0x20,0xf);
        local_11 = 0;
        _strncpy((char *)_Dest,local_20,0xf);
        *(undefined *)((int)puVar4 + 0x13) = 0;
        FUN_0048c380(local_20,puVar5 + -0x10,0xf);
        local_11 = 0;
        _strncpy((char *)(puVar4 + 5),local_20,0xf);
        uVar2 = puVar5[1];
        uVar1 = puVar5[2];
        *(undefined *)((int)puVar4 + 0x23) = 0;
        puVar4[9] = uVar2;
        uVar2 = DAT_004eb3b8;
        puVar4[10] = uVar1;
        _Dest = puVar4 + 0xb;
      }
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 0x2c;
      puVar4 = _Dest;
    } while (uVar3 < uVar2);
  }
  _DAT_00ec7bc0 = _Dest + -0x3b1ef2;
  _DAT_00ec7ba4 = 0;
  DAT_00ec7bc4 = 0x20;
  FUN_0041b760(&DAT_00ec7ba0,param_1,1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041cde0(undefined4 param_1)

{
  FUN_0049ef50(&DAT_00ec7bc8,&DAT_00e9f380,0xf);
  DAT_00ec7be4._2_2_ = 0;
  FUN_0049ef50(&DAT_00ec7be8,&DAT_00ec8c00,0x1f);
  DAT_00ec7c24._2_2_ = 0;
  DAT_00ec7c28 = DAT_00e9f364;
  _DAT_00ec7bc0 = 100;
  _DAT_00ec7ba4 = 0;
  DAT_00ec7bc4 = 0x22;
  FUN_0041b760(&DAT_00ec7ba0,param_1,1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041d060(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_00ec7bc8 = param_1;
  DAT_00ec7bcc = param_2;
  _DAT_00ec7bc0 = 8;
  _DAT_00ec7ba4 = 0;
  DAT_00ec7bc4 = 0x24;
  FUN_0041b760(&DAT_00ec7ba0,param_3,1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041d0c0(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;

  if ((DAT_004d5e00 != 0) && (param_1 != (char *)0x0)) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    if (0x7f < uVar2) {
      uVar2 = 0x80;
    }
    DAT_00ec7bc8 = param_2;
    DAT_00ec7bcc = param_3;
    DAT_00ec7bd0 = uVar2;
    _strncpy((char *)&DAT_00ec7bd4,param_1,uVar2 - 1);
    *(undefined *)((int)&DAT_00ec7bd0 + uVar2 + 3) = 0;
    _DAT_00ec7bc0 = uVar2 + 0xc;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 2;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,1);
  }
  return;
}



void FUN_0041d270(undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = FUN_0041d380(param_1);
  FUN_0041d2a0(uVar1);
  FUN_0041cae0(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041d2a0(undefined4 param_1)

{
  if (DAT_004eb1c8 != 0) {
    DAT_00ec7bc8 = param_1;
    _DAT_00ec7bc0 = 4;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x2a;
    FUN_0041b760(&DAT_00ec7ba0,param_1,1,1);
  }
  return;
}



uint FUN_0041d350(int param_1)

{
  uint uVar1;
  int *piVar2;

  uVar1 = 0;
  if (DAT_004eb3b8 != 0) {
    piVar2 = &DAT_00e9f448;
    do {
      if (param_1 == *piVar2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x2c;
    } while (uVar1 < DAT_004eb3b8);
  }
  return 0xffffffff;
}



undefined4 FUN_0041d380(uint param_1)

{
  if (param_1 < DAT_004eb3b8) {
    return (&DAT_00e9f448)[param_1 * 0x2c];
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041d3b0(int param_1)

{
  int iVar1;

  if (DAT_004d5e00 != 0) {
    iVar1 = param_1 * 0xc;
    *(undefined4 *)(&DAT_004ea020 + iVar1) = 0;
    *(undefined4 *)(&DAT_004ea024 + iVar1) = 0;
    *(undefined4 *)(&DAT_004ea028 + iVar1) = 0;
    *(undefined4 *)(&DAT_004ea020 + iVar1) = 1;
    if (DAT_004eb1c8 != 0) {
      DAT_00ec7bc8 = param_1;
      _DAT_00ec7ba4 = 0;
      DAT_00ec7bc4 = 0x2c;
      _DAT_00ec7bc0 = 4;
      FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041d420(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = DAT_004eb3b4;
  if (DAT_004d5e00 != 0) {
    iVar2 = param_1 * 0xc;
    if (*(int *)(&DAT_004ea020 + iVar2) != 0) {
      if (param_2 == 0) {
        uVar3 = *(uint *)(&DAT_004ea024 + iVar2) & ~(1 << ((byte)DAT_004eb3b4 & 0x1f));
      }
      else {
        uVar3 = *(uint *)(&DAT_004ea024 + iVar2) | 1 << ((byte)DAT_004eb3b4 & 0x1f);
      }
      *(uint *)(&DAT_004ea024 + iVar2) = uVar3;
      if (DAT_004eb1c8 == 0) {
        DAT_00ec7bc8 = param_1;
        DAT_00ec7bcc = uVar1;
        DAT_00ec7bd0 = param_2;
        _DAT_00ec7ba4 = 0;
        DAT_00ec7bc4 = 0x2d;
        _DAT_00ec7bc0 = 0xc;
        FUN_0041b760(&DAT_00ec7ba0,DAT_00ec7620,1,1);
      }
      FUN_0041e700(param_1);
    }
  }
  return;
}



void FUN_0041d4e0(int param_1,int param_2)

{
  int iVar1;

  if (DAT_004d5e00 != 0) {
    iVar1 = param_1 * 0xc;
    if (*(int *)(&DAT_004ea020 + iVar1) != 0) {
      if ((*(int *)(&DAT_004ea028 + iVar1) == 0) ||
         ((*(uint *)(&DAT_004ea024 + iVar1) >> ((byte)DAT_004eb3b4 & 0x1f) & 1) !=
          (uint)(param_2 != 0))) {
        *(undefined4 *)(&DAT_004ea028 + iVar1) = 1;
        FUN_0041d420(param_1,(uint)(param_2 != 0));
      }
    }
  }
  return;
}



undefined4 FUN_0041d640(int param_1)

{
  if (DAT_004d5e00 != 0) {
    FUN_0041b7f0();
    FUN_0041e700(param_1);
    if (*(int *)(&DAT_004ea020 + param_1 * 0xc) != 0) {
      if (*(int *)(&DAT_004ea020 + param_1 * 0xc) != 2) {
        return 0;
      }
      FUN_0041d690(param_1);
    }
  }
  return 1;
}



void FUN_0041d690(int param_1)

{
  param_1 = param_1 * 0xc;
  *(undefined4 *)(&DAT_004ea020 + param_1) = 0;
  *(undefined4 *)(&DAT_004ea024 + param_1) = 0;
  *(undefined4 *)(&DAT_004ea028 + param_1) = 0;
  *(undefined4 *)(&DAT_004ea020 + param_1) = 0;
  return;
}



undefined4 FUN_0041d6b0(void)

{
  return DAT_004d5e00;
}



undefined4 FUN_0041d6c0(void)

{
  return DAT_004eb1c8;
}



void FUN_0041d6d0(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_00e29bc0;
  for (iVar1 = 0x2a8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



undefined4 FUN_0041d6f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  int *piVar9;

  piVar9 = (int *)(param_1 + 0x28);
  if ((DAT_004d5e00 != 0) && (param_1 = *piVar9, 0 < param_1)) {
    do {
      iVar2 = piVar9[1];
      iVar7 = iVar2 * 0x1f28;
      *(int *)(&DAT_00ea0720 + iVar7) = piVar9[2];
      *(int *)(&DAT_00ea0730 + iVar7) = piVar9[3];
      *(int *)(&DAT_00ea0740 + iVar7) = piVar9[4];
      *(int *)(&DAT_00ea0750 + iVar7) = piVar9[5];
      *(int *)(&DAT_00ea0724 + iVar7) = piVar9[6];
      *(int *)(&DAT_00ea0734 + iVar7) = piVar9[7];
      *(int *)(&DAT_00ea0744 + iVar7) = piVar9[8];
      *(int *)(&DAT_00ea0754 + iVar7) = piVar9[9];
      *(int *)(&DAT_00ea0728 + iVar7) = piVar9[10];
      *(int *)(&DAT_00ea0738 + iVar7) = piVar9[0xb];
      *(int *)(&DAT_00ea0748 + iVar7) = piVar9[0xc];
      *(int *)(&DAT_00ea0758 + iVar7) = piVar9[0xd];
      *(int *)(&DAT_00ea072c + iVar7) = piVar9[0xe];
      *(int *)(&DAT_00ea073c + iVar7) = piVar9[0xf];
      *(int *)(&DAT_00ea074c + iVar7) = piVar9[0x10];
      *(int *)(&DAT_00ea075c + iVar7) = piVar9[0x11];
      (&DAT_00ec7640)[iVar2] = piVar9[0x12];
      (&DAT_00ea0360)[iVar2] = piVar9[0x13];
      (&DAT_00ea0420)[iVar2] = piVar9[0x14];
      (&DAT_00ea0480)[iVar2] = piVar9[0x15];
      iVar3 = piVar9[0x16];
      iVar4 = piVar9[0x17];
      iVar7 = piVar9[0x18];
      iVar5 = piVar9[0x19];
      iVar6 = piVar9[0x1a];
      *(int *)(&DAT_00ea03c0 + iVar2 * 4) = piVar9[0x1b];
      piVar1 = piVar9 + 0x1c;
      piVar9 = piVar9 + 0x1c;
      *(int *)(&DAT_00ea01a0 + iVar2 * 4) = *piVar1;
      if (iVar6 == 0x41414949) {
        (&DAT_00ea05c0)[iVar2 * 4] = 0x29a;
        (&DAT_00ea05c4)[iVar2 * 4] = 0;
        (&DAT_00ea05c8)[iVar2 * 4] = 0;
        (&DAT_00ea05cc)[iVar2 * 4] = 0;
      }
      else {
        (&DAT_00ea05c0)[iVar2 * 4] = iVar3;
        (&DAT_00ea05c4)[iVar2 * 4] = iVar4;
        (&DAT_00ea05c8)[iVar2 * 4] = iVar7;
        (&DAT_00ea05cc)[iVar2 * 4] = iVar5;
      }
      DVar8 = timeGetTime();
      *(DWORD *)(&DAT_00ea0200 + iVar2 * 4) = DVar8;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return 1;
}



void FUN_0041d8d0(int param_1)

{
  int iVar1;

  if (param_1 != 0) {
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x40000;
    iVar1 = **(int **)(param_1 + 0x1e70);
    FUN_0041df10(0xffffffff,1,0x68656c6c,iVar1);
    (&DAT_00ea05c0)[iVar1 * 4] = 0x29a;
    (&DAT_00ea05c4)[iVar1 * 4] = 0;
    (&DAT_00ea05c8)[iVar1 * 4] = 0;
    (&DAT_00ea05cc)[iVar1 * 4] = 0;
  }
  return;
}



void FUN_0041d930(int param_1)

{
  int iVar1;

  iVar1 = **(int **)(param_1 + 0x1e70);
  if (((*(byte *)(param_1 + 0x60) & 0x80) != 0) && ((*(uint *)(param_1 + 100) & 0x4000000) == 0)) {
    if ((*(uint *)(param_1 + 100) & 0x40000) == 0) {
      FUN_0041d8d0(param_1);
    }
    *(undefined4 *)(param_1 + 0x50) = (&DAT_00ec76d0)[iVar1 * 0x10];
    *(undefined4 *)(param_1 + 0x54) = (&DAT_00ec76d4)[iVar1 * 0x10];
    (&DAT_00ec76d8)[iVar1 * 0x10] = 0xc60ca000;
    *(undefined4 *)(param_1 + 0x58) = 0xc60ca000;
    (&DAT_00ea05c0)[iVar1 * 4] = 0x29a;
    (&DAT_00ea05c4)[iVar1 * 4] = 0;
    (&DAT_00ea05c8)[iVar1 * 4] = 0;
    (&DAT_00ea05cc)[iVar1 * 4] = 0;
    return;
  }
  FUN_0044bb10(&DAT_00ec76a0 + iVar1 * 0x10,param_1 + 0x20);
  (&DAT_00ec7640)[iVar1] = *(undefined4 *)(param_1 + 0x1a0);
  (&DAT_00ea0360)[iVar1] = *(undefined4 *)(param_1 + 0xe0);
  (&DAT_00ea0420)[iVar1] = *(undefined4 *)(param_1 + 0xe8);
  (&DAT_00ea0480)[iVar1] = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x78);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041da00(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;

  piVar3 = &DAT_00e29bc4;
  iVar6 = 0;
  iVar4 = 0;
  do {
    if ((*piVar3 == 0x4c6f636c) || (*piVar3 == 0x41414949)) {
      iVar4 = iVar4 + 1;
    }
    piVar3 = piVar3 + 0x22;
  } while ((int)piVar3 < 0xe2a664);
  if (iVar4 != 0) {
    _DAT_00ec7bc0 = &DAT_00ec7bcc;
    local_c = 0;
    local_8 = &DAT_00ea05c0;
    piVar5 = &DAT_00e29bc4;
    local_10 = &DAT_00ea0480;
    local_14 = &DAT_00ea0420;
    piVar3 = &DAT_00ec76b0;
    DAT_00ec7bc8 = iVar4;
    do {
      iVar4 = *piVar5;
      if ((iVar4 == 0x4c6f636c) || (iVar4 == 0x41414949)) {
        iVar1 = piVar3[-4];
        *_DAT_00ec7bc0 = iVar6;
        _DAT_00ec7bc0[1] = iVar1;
        _DAT_00ec7bc0[2] = *piVar3;
        _DAT_00ec7bc0[3] = piVar3[4];
        _DAT_00ec7bc0[4] = piVar3[8];
        _DAT_00ec7bc0[5] = piVar3[-3];
        _DAT_00ec7bc0[6] = piVar3[1];
        _DAT_00ec7bc0[7] = piVar3[5];
        _DAT_00ec7bc0[8] = piVar3[9];
        _DAT_00ec7bc0[9] = piVar3[-2];
        _DAT_00ec7bc0[10] = piVar3[2];
        _DAT_00ec7bc0[0xb] = piVar3[6];
        _DAT_00ec7bc0[0xc] = piVar3[10];
        _DAT_00ec7bc0[0xd] = piVar3[-1];
        _DAT_00ec7bc0[0xe] = piVar3[3];
        _DAT_00ec7bc0[0xf] = piVar3[7];
        _DAT_00ec7bc0[0x10] = piVar3[0xb];
        _DAT_00ec7bc0[0x11] = (&DAT_00ec7640)[iVar6];
        _DAT_00ec7bc0[0x12] = (&DAT_00ea0360)[iVar6];
        _DAT_00ec7bc0[0x13] = *local_14;
        _DAT_00ec7bc0[0x14] = *local_10;
        _DAT_00ec7bc0[0x15] = (int)*(short *)(piVar5 + 0x16);
        iVar2 = piVar5[0x1d];
        iVar1 = (&DAT_00e29c20)[local_c + iVar2];
        _DAT_00ec7bc0[0x16] = iVar2;
        _DAT_00ec7bc0[0x17] = iVar1;
        iVar1 = piVar5[0x20];
        _DAT_00ec7bc0[0x18] = piVar5[0x1c];
        _DAT_00ec7bc0[0x19] = iVar4;
        _DAT_00ec7bc0[0x1a] = *(uint *)(iVar1 + 0x60) & 0x87810;
        _DAT_00ec7bc0[0x1b] = *(uint *)(iVar1 + 100) & 0x1e840000;
        _DAT_00ec7bc0 = _DAT_00ec7bc0 + 0x1c;
        if (*local_8 != 0x29a) {
          *local_8 = (int)*(short *)(piVar5 + 0x16);
          local_8[1] = iVar2;
          local_8[2] = (&DAT_00e29c20)[local_c + iVar2];
          local_8[3] = piVar5[0x1c];
        }
      }
      local_14 = local_14 + 1;
      piVar3 = piVar3 + 0x10;
      local_10 = local_10 + 1;
      iVar6 = iVar6 + 1;
      local_c = local_c + 0x22;
      piVar5 = piVar5 + 0x22;
      local_8 = local_8 + 4;
    } while ((int)piVar3 < 0xec7bb0);
    _DAT_00ec7bc0 = _DAT_00ec7bc0 + -0x3b1ef2;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x32;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041dc30(undefined4 param_1)

{
  DAT_00ec7bc8 = DAT_004eb3b4;
  DAT_00ec7bcc = param_1;
  _DAT_00ec7ba4 = 0;
  DAT_00ec7bc4 = 0x33;
  _DAT_00ec7bc0 = 8;
  FUN_0041b760(&DAT_00ec7ba0,DAT_00ec7620,1,0);
  (&DAT_00ea0260)[DAT_004eb3b4] = param_1;
  FUN_00411120(0x33,&DAT_00ec7bc8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041dd50(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;

  if (DAT_004d5e00 != 0) {
    DAT_004eb21c = param_1;
    puVar3 = param_2;
    puVar5 = &DAT_00ea0320;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    DAT_004eb218 = 1;
    DAT_00ec7bc8 = param_2[2];
    DAT_00ec7bcc = param_2[3];
    DAT_00ec7bd0 = param_2[4];
    DAT_00ec7bd4 = param_2[5];
    DAT_00ec7bd8 = param_2[6];
    DAT_00ec7bdc = param_2[7];
    DAT_00ec7be0 = param_2[8];
    DAT_00ec7be4 = param_2[9];
    iVar2 = 0;
    _DAT_00ec7bc0 = &DAT_00ec7be8;
    if (0 < (int)param_2[2]) {
      do {
        *_DAT_00ec7bc0 = (int)*(char *)(iVar2 + 0x73 + param_1);
        _DAT_00ec7bc0 = _DAT_00ec7bc0 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_2[2]);
    }
    iVar2 = 0;
    if (0 < (int)param_2[2]) {
      piVar4 = &DAT_004ea8f0;
      do {
        iVar1 = *piVar4;
        piVar4 = piVar4 + 1;
        *_DAT_00ec7bc0 = iVar1;
        _DAT_00ec7bc0 = _DAT_00ec7bc0 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_2[2]);
    }
    _DAT_00ec7bc0 = _DAT_00ec7bc0 + -0x3b1ef2;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x36;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,0);
  }
  return;
}



void FUN_0041de50(int param_1,undefined4 param_2)

{
  (&DAT_004ea8f0)[param_1] = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041df10(undefined4 param_1,undefined4 param_2,int param_3,int param_4,float param_5,
                 float param_6_00,double param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 param_9)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined local_400 [1024];

  iVar4 = DAT_004eb3b4;
  if (DAT_004d5e00 != 0) {
    DAT_00ec7bc8 = DAT_004eb3b4;
    DAT_00ec7bcc = param_3;
    piVar3 = &DAT_00ec7bd0;
    if (param_3 < 0x6374726d) {
      if (param_3 != 0x6374726c) {
        if (param_3 != 0x5370726b) {
          DAT_00ec7bc8 = iVar4;
          return;
        }
        DAT_00ec7bd0 = param_4;
        DAT_00ec7bd4 = (float)(double)CONCAT44(param_6_00,param_5);
        DAT_00ec7bd8 = (float)param_6;
        DAT_00ec7bdc = *param_7;
        DAT_00ec7be0 = param_7[1];
        DAT_00ec7be4 = param_7[2];
        DAT_00ec7be8 = *param_8;
        DAT_00ec7bec = param_8[1];
        DAT_00ec7bf0 = param_8[2];
        DAT_00ec7bf4 = param_9;
        piVar3 = &DAT_00ec7bf8;
      }
    }
    else if (param_3 < 0x666c616e) {
      if (param_3 == 0x666c616d) {
        piVar3 = (int *)&DAT_00ec7bd4;
        DAT_00ec7bd0 = param_4;
      }
      else {
        if (param_3 != 0x66696e69) {
          DAT_00ec7bc8 = iVar4;
          return;
        }
        (&DAT_00ea02c0)[DAT_004eb3b4] = 1;
      }
    }
    else if (param_3 < 0x6c6f7375) {
      if (param_3 == 0x6c6f7374) {
        DAT_00ec7bd0 = param_4;
        piVar3 = (int *)&DAT_00ec7bd4;
      }
      else {
        if (param_3 != 0x68656c6c) {
          DAT_00ec7bc8 = iVar4;
          return;
        }
        piVar3 = (int *)&DAT_00ec7bd4;
        DAT_00ec7bd0 = param_4;
      }
    }
    else if (param_3 < 0x7072787a) {
      if (param_3 == 0x70727879) {
        DAT_00ec7bd0 = 0;
        piVar3 = &DAT_00e29bc4;
        do {
          if ((*piVar3 == 0x41414949) || (*piVar3 == 0x4c6f636c)) {
            DAT_00ec7bd0 = DAT_00ec7bd0 + 1;
          }
          piVar3 = piVar3 + 0x22;
        } while ((int)piVar3 < 0xe2a664);
        piVar3 = (int *)&DAT_00ec7bd4;
        iVar4 = 0;
        piVar1 = &DAT_00e29bc4;
        do {
          if ((*piVar1 == 0x41414949) || (*piVar1 == 0x4c6f636c)) {
            *piVar3 = iVar4;
            piVar3 = piVar3 + 1;
          }
          piVar1 = piVar1 + 0x22;
          iVar4 = iVar4 + 1;
        } while ((int)piVar1 < 0xe2a664);
      }
      else {
        if (param_3 != 0x706c6170) {
          DAT_00ec7bc8 = iVar4;
          return;
        }
        DAT_00ec7bd0 = param_4;
        piVar3 = (int *)&DAT_00ec7bd8;
        DAT_00ec7bd4 = (float)(double)CONCAT44(param_6_00,param_5);
      }
    }
    else if (param_3 < 0x72656a6f) {
      if (param_3 != 0x72656a6e) {
        if (param_3 != 0x71756974) {
          DAT_00ec7bc8 = iVar4;
          return;
        }
        (&DAT_00ea04e0)[DAT_004eb3b4] = 1;
        (&DAT_00ea05c0)[iVar4 * 4] = 0x29a;
        (&DAT_00ea05c4)[iVar4 * 4] = 0;
        (&DAT_00ea05c8)[iVar4 * 4] = 0;
        (&DAT_00ea05cc)[iVar4 * 4] = 0;
      }
    }
    else if (param_3 == 0x7461756e) {
      DAT_00ec7bd4 = param_5;
      DAT_00ec7bd0 = param_4;
      DAT_00ec7bd8 = param_6_00;
      piVar3 = &DAT_00ec7bdc;
    }
    else {
      if (param_3 != 0x74726967) {
        DAT_00ec7bc8 = iVar4;
        return;
      }
      DAT_00ec7bd0 = param_4;
      DAT_00ec7bd4 = param_5;
      piVar3 = (int *)&DAT_00ec7bd8;
    }
    _DAT_00ec7bc0 = piVar3 + -0x3b1ef2;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x17;
    FUN_0041b760(&DAT_00ec7ba0,param_1,1,param_2);
    if (param_3 == 0x71756974) {
      if ((DAT_004eb1c8 != 0) || (DAT_004b6714 == DAT_004eb3b4)) {
        FUN_0041c8e0();
      }
      iVar4 = DAT_004eb3b4;
      (&DAT_00ea04e0)[DAT_004eb3b4] = 1;
      uVar2 = FUN_0041bce0(iVar4);
      uVar2 = FUN_00421360(s__MONDOTEXT_H_0500__s_has_left_th_004b67ec,uVar2);
      FUN_0049eb80(local_400,uVar2);
      FUN_0041c190(local_400);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041e5a0(void)

{
  if (DAT_004d5e00 != 0) {
    DAT_00ec7bc8 = DAT_00ea05a0;
    DAT_00ec7bcc = DAT_00ea05a4;
    DAT_00ec7bd0 = DAT_00ea05a8;
    DAT_00ec7bd4 = DAT_00ea05ac;
    DAT_00ec7bd8 = DAT_00ea05b0;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x38;
    _DAT_00ec7bc0 = 0x14;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041e660(void)

{
  int iVar1;
  undefined4 *puVar2;

  if (DAT_004d5e00 != 0) {
    puVar2 = &DAT_00ea04e0;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_00ea02c0;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_004eb1e8 = 0;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x39;
    _DAT_00ec7bc0 = 0;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041e700(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  bVar1 = true;
  uVar4 = 0;
  do {
    iVar2 = FUN_00420f70(uVar4);
    if ((iVar2 != 0) &&
       ((*(uint *)(&DAT_004ea024 + param_1 * 0xc) & 1 << ((byte)uVar4 & 0x1f)) == 0)) {
      bVar1 = false;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x14);
  iVar3 = param_1 * 0xc;
  iVar2 = *(int *)(&DAT_004ea020 + iVar3);
  if (bVar1) {
    *(undefined4 *)(&DAT_004ea020 + iVar3) = 2;
  }
  if ((*(int *)(&DAT_004ea020 + iVar3) != iVar2) && (DAT_004eb1c8 != 0)) {
    DAT_00ec7bd0 = *(undefined4 *)(&DAT_004ea024 + iVar3);
    DAT_00ec7bcc = (uint)(*(int *)(&DAT_004ea020 + iVar3) == 2);
    DAT_00ec7bc8 = param_1;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x2e;
    _DAT_00ec7bc0 = 0xc;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,1);
  }
  return;
}



void FUN_0041e7c0(int param_1)

{
  if ((&DAT_004eb188)[param_1] != 0) {
    FUN_0049f200((&DAT_004eb188)[param_1]);
    (&DAT_004eb188)[param_1] = 0;
    (&DAT_004ea940)[param_1] = 0;
    (&DAT_004e9ed8)[param_1] = 0;
  }
  return;
}



void FUN_0041e800(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;

  iVar6 = 0;
  piVar2 = &DAT_004eb188;
  while (*piVar2 != 0) {
    piVar2 = piVar2 + 1;
    iVar6 = iVar6 + 1;
    if (0x4eb1c3 < (int)piVar2) {
      return;
    }
  }
  uVar4 = 0xffffffff;
  puVar3 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar1 != '\0');
  puVar3 = (undefined4 *)FUN_0049f270(~uVar4);
  uVar4 = 0xffffffff;
  (&DAT_004eb188)[iVar6] = puVar3;
  puVar7 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *(char *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  } while (cVar1 != '\0');
  for (uVar5 = ~uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar4 = ~uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined *)puVar3 = *(undefined *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  (&DAT_004ea940)[iVar6] = 0;
  (&DAT_004e9ed8)[iVar6] = 10000;
  DAT_004eb220 = timeGetTime();
  return;
}



void FUN_0041e880(void)

{
  uint uVar1;
  bool bVar2;
  DWORD DVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;

  DVar3 = timeGetTime();
  uVar9 = DVar3 - DAT_004eb220;
  iVar7 = 0;
  do {
    if ((&DAT_004eb188)[iVar7] != 0) {
      uVar1 = (&DAT_004e9ed8)[iVar7];
      uVar5 = uVar1;
      if (uVar9 <= uVar1) {
        uVar5 = uVar9;
      }
      (&DAT_004e9ed8)[iVar7] = uVar1 - uVar5;
      if (uVar1 - uVar5 == 0) {
        FUN_0041e7c0(iVar7);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xf);
  piVar8 = &DAT_004eb188;
  iVar7 = 1;
  do {
    if ((*piVar8 == 0) && (iVar7 < 0xf)) {
      piVar4 = piVar8 + 1;
      iVar6 = iVar7;
      do {
        if (*piVar4 != 0) {
          *piVar8 = (&DAT_004eb188)[iVar6];
          (&DAT_004eb188)[iVar6] = 0;
          break;
        }
        piVar4 = piVar4 + 1;
        iVar6 = iVar6 + 1;
      } while ((int)piVar4 < 0x4eb1c4);
    }
    piVar8 = piVar8 + 1;
    bVar2 = 0xe < iVar7;
    iVar7 = iVar7 + 1;
    if (bVar2) {
      DAT_004eb220 = DVar3;
      return;
    }
  } while( true );
}



void FUN_0041e920(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined local_400 [1024];

  uVar1 = DAT_004eb224;
  piVar3 = &DAT_004eb188;
  iVar2 = DAT_004eb228;
  do {
    if (*piVar3 != 0) {
      FUN_0049eb80(local_400,s__F0_s_004b6844,*piVar3);
      FUN_00450530(uVar1,iVar2,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_400);
      iVar2 = iVar2 + 0xf;
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x4eb1c4);
  if (DAT_00ea0250 != 0) {
    FUN_00450530(uVar1,iVar2,0xffffffff,0xffffffff,0xffffffff,0xffffffff,&DAT_004ea988);
    DAT_004e9f18 = iVar2;
  }
  return;
}



void FUN_0041e9b0(void)

{
  FUN_0041ea20();
  FUN_0041eb80();
  FUN_0041f0e0();
  FUN_0041f940();
  FUN_00420600();
  return;
}



bool FUN_0041e9d0(void)

{
  int iVar1;

  iVar1 = FUN_004207e0();
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00420830();
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_0041c5c0(&DAT_004d55cc,&DAT_004d55cc,&DAT_004d55cc,&DAT_004d55cc,0xb4);
  FUN_004208c0();
  FUN_00420810();
  return iVar1 == 0;
}



undefined4 FUN_0041ea20(void)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00413130(0,0,0x186a5,&LAB_0041ead0);
  if (iVar1 != 0) {
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0395__sHost_Multipl_004b6878,0x96,0x96,0x154,0x19,0x100000,0
                        );
    FUN_004132a0(iVar1,0x186a6,6,uVar2);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0396__sJoin_Multipl_004b684c,0x96,0xbe,0x154,0x19,0x100000,0
                        );
    FUN_004132a0(iVar1,0x186a7,6,uVar2);
    FUN_00411170(iVar1,4,0,0x1a4,2);
  }
  return 1;
}



undefined4 FUN_0041eb80(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  local_10 = 0x78;
  local_c = 0x5a;
  local_8 = 0x207;
  local_4 = 0x185;
  iVar1 = FUN_00413130(0,&local_10,0x186aa,&LAB_0041ede0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0398__sCreate_A_Gam_004b6918,0x15e,0x3c,0,0);
  FUN_004131c0(iVar1,0,6,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0399__sEnter_your_n_004b68f4,0xdc,0x82,0,0);
  uVar2 = FUN_004131c0(iVar1,0,6,uVar2);
  local_10 = 0;
  local_c = 0x9b;
  local_8 = 299;
  local_4 = 0xc2;
  uVar3 = FUN_00413430(iVar1,0x186ac,&local_10,0,0,0);
  FUN_00411440(uVar3,1,0);
  FUN_00413500(uVar3,0x10);
  FUN_00411390(uVar2,uVar3,1);
  FUN_00420a90(uVar3);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0400__sEnter_the_ga_004b68cc,0xdc,0xd2,0,0);
  uVar2 = FUN_004131c0(iVar1,0,6,uVar2);
  local_10 = 0;
  local_c = 0xeb;
  local_8 = 299;
  local_4 = 0x112;
  uVar3 = FUN_00413430(iVar1,0x186ad,&local_10,0,0,0);
  FUN_00411440(uVar3,1,0);
  FUN_00413500(uVar3,0x10);
  FUN_00411390(uVar2,uVar3,1);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0401__sEnter_a_pass_004b68a4,0xdc,0x122,0,0);
  uVar2 = FUN_004131c0(iVar1,0,6,uVar2);
  local_10 = 0;
  local_c = 0x13b;
  local_8 = 299;
  local_4 = 0x162;
  uVar3 = FUN_00413430(iVar1,0x186ae,&local_10,0,0,0);
  FUN_00411440(uVar3,1,0);
  FUN_00413500(uVar3,0x10);
  FUN_00411390(uVar2,uVar3,1);
  FUN_00411170(iVar1,3,0,0x1ae,2);
  uVar2 = FUN_00411210(iVar1,0x208,0x17c);
  FUN_004114b0(uVar2);
  return 1;
}



undefined4 FUN_0041f0e0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  local_10 = 0x78;
  local_c = 0x5a;
  local_8 = 0x207;
  local_4 = 0x185;
  iVar1 = FUN_00413130(0,&local_10,0x186ab,&LAB_0041f330);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0402__sJoin_A_Game_004b6968,400,0x28,0,0);
  FUN_004131c0(iVar1,0,6,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0399__sEnter_your_n_004b68f4,0xdc,0x78,0,0);
  uVar2 = FUN_004131c0(iVar1,0,6,uVar2);
  local_10 = 0;
  local_c = 0x91;
  local_8 = 299;
  local_4 = 0xb8;
  uVar3 = FUN_00413430(iVar1,0x186af,&local_10,0,0,0);
  FUN_00411440(uVar3,1,0);
  FUN_00413500(uVar3,0x10);
  FUN_00411390(uVar2,uVar3,1);
  FUN_00420a90(uVar3);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0401__sEnter_a_pass_004b68a4,0xdc,200,0,0);
  uVar2 = FUN_004131c0(iVar1,0,6,uVar2);
  local_10 = 0;
  local_c = 0xe1;
  local_8 = 299;
  local_4 = 0x108;
  uVar3 = FUN_00413430(iVar1,0x186b1,&local_10,0,0,0);
  FUN_00411440(uVar3,1,0);
  FUN_00413500(uVar3,0x10);
  FUN_00411390(uVar2,uVar3,1);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0403__sChoose_a_gam_004b693c,0xdc,0x118,0,0);
  uVar2 = FUN_004131c0(iVar1,0,6,uVar2);
  local_10 = 0;
  local_c = 0x131;
  local_8 = 299;
  local_4 = 0x1a8;
  uVar3 = FUN_00413520(iVar1,0x186b2,&local_10,0,0,0);
  FUN_00411440(uVar3,1,0);
  FUN_00411390(uVar2,uVar3,1);
  FUN_00411170(iVar1,3,0,0x1a4,2);
  uVar2 = FUN_00411210(iVar1,0x208,0x17c);
  FUN_004114b0(uVar2);
  return 1;
}



undefined4 FUN_0041f940(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  FUN_0041c260();
  local_10 = 0x82;
  local_c = 0x73;
  local_8 = 0x26b;
  local_4 = 0x1cb;
  iVar1 = FUN_00413130(0,&local_10,0x186b8,&LAB_0041fc70);
  if (iVar1 == 0) {
    return 0;
  }
  local_10 = 0x78;
  local_c = 0x73;
  local_8 = 0x141;
  local_4 = 0x11c;
  FUN_00413520(iVar1,0x186b3,&local_10,0,0,0);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0411__sRacer_004b6b5c,0x138,0x7d,0,0);
  FUN_004131c0(iVar1,0,6,uVar2);
  FUN_004131c0(iVar1,0x186b9,0,&DAT_004d55cc,0x172,0x82,0,0);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0412__sTrack_004b6b40,0x138,0x96,0,0);
  FUN_004131c0(iVar1,0,6,uVar2);
  FUN_004131c0(iVar1,0x186ba,0,&DAT_004d55cc,0x172,0x9b,0,0);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0414__sLaps_004b6b24,0x138,0xb9,0,0);
  FUN_004131c0(iVar1,0,6,uVar2);
  uVar2 = FUN_00413a90(iVar1,0x8b,0x172,0xaf,200,0x1000000,0);
  FUN_00413b30(uVar2,DAT_00ea02b8);
  FUN_00413fc0(iVar1,0x30d54,6,0,0x14a,0x32,0xdc,0x80000,0,0x40004,0);
  local_10 = 0x8c;
  local_c = 0x131;
  local_8 = 599;
  local_4 = 0x1a8;
  FUN_00413520(iVar1,0x186b4,&local_10,0,0x100000,0);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0416__sRetire_004b6b08,0,0x18b,0x8c,0x19,0x100000,0);
  FUN_004132a0(iVar1,0x186b6,6,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0417__sRace_004b6aec,0,0x1ae,0x8c,0x19,0x100000,0);
  FUN_004132a0(iVar1,0x186b5,6,uVar2);
  local_10 = 0x8c;
  local_c = 0x1ae;
  local_8 = 599;
  local_4 = 0x1d5;
  uVar2 = FUN_00413430(iVar1,0x186bb,&local_10,0,0x10000,0);
  FUN_00413500(uVar2,0x32);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0418__sPodracer_004b6acc,0,0x73,0x8c,0x19,0x100000,0);
  FUN_004132a0(iVar1,0x7e,6,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0419__sTracks_004b6ab0,0,0x91,0x8c,0x19,0x100000,0);
  FUN_004132a0(iVar1,0x7d,6,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0421__sBoot_004b6a94,0,0xaf,0x8c,0x19,0x100000,0);
  FUN_004132a0(iVar1,0x80,6,uVar2);
  return 1;
}



undefined4 FUN_00420600(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  iVar1 = FUN_00413130(0,0,0x30d41,&LAB_004206b0);
  if (iVar1 == 0) {
    return 0;
  }
  local_10 = 0x32;
  local_c = 0x96;
  local_8 = 0x24e;
  local_4 = 0x17c;
  iVar2 = FUN_00413520(iVar1,0x30d42,&local_10,0xffffffff,0x100000,0);
  *(undefined4 *)(iVar2 + 0x524) = 0;
  uVar3 = FUN_00421360(s__MONDOTEXT_H_0510__sReturn_to_lo_004b6c38,0xdc,0x1a4,200,0x19,0x100000,0);
  FUN_004132a0(iVar1,4,6,uVar3);
  return 1;
}



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



undefined4 FUN_004207e0(void)

{
  int iVar1;

  if (DAT_004eb394 == 0) {
    iVar1 = FUN_00486ad0();
    if (iVar1 != 0) {
      return 0;
    }
    DAT_004eb394 = 1;
  }
  return 1;
}



undefined4 FUN_00420810(void)

{
  if (DAT_004eb394 != 0) {
    FUN_00486b40();
    DAT_004eb394 = 0;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00420830(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  undefined local_118 [256];
  char local_18 [24];

  if (DAT_004eb398 == 0) {
    uVar1 = FUN_00486c00();
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        FUN_00486c10(uVar3,local_118);
        iVar2 = 0x10;
        bVar6 = true;
        pcVar4 = local_18;
        pcVar5 = "";
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          _DAT_004eb390 = uVar3;
          FUN_00404760(uVar3);
          DAT_004eb398 = 1;
          return 1;
        }
        uVar3 = uVar3 + 1;
        if (uVar1 <= uVar3) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}



void FUN_004208c0(void)

{
  if (DAT_004eb398 != 0) {
    FUN_0041c570();
    FUN_00420810();
    DAT_004eb398 = 0;
  }
  return;
}



void FUN_004208e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;

  uVar1 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)[param_1 * 0xd]);
  uVar1 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)[param_1 * 0xd],uVar1);
  FUN_0049f850(param_2,param_3,s__s__s_004b6708,uVar1);
  return;
}



void FUN_00420930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;

  uVar1 = FUN_00440620(param_1);
  FUN_0049f850(param_2,param_3,&DAT_004b2304,uVar1);
  return;
}



void FUN_00420960(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = FUN_00414d90(param_1,0x186bb);
  FUN_004151a0(uVar1,7,param_2,0);
  return;
}



void FUN_00420990(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined local_400 [1024];

  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar1 = FUN_004137a0(param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (iVar1 == DAT_004eb3b4) {
    uVar2 = FUN_00414d90(param_1,0x7e);
    FUN_00411490(uVar2);
    uVar2 = FUN_00414d90(param_1,0x80);
  }
  else {
    uVar2 = FUN_00414d90(param_1,0x7e);
    FUN_004114b0(uVar2);
    uVar2 = FUN_00414d90(param_1,0x80);
    if ((DAT_004eb388 != 0) && ((&DAT_004eb238)[iVar1] != 0)) {
      FUN_00411490(uVar2);
      goto LAB_004209f4;
    }
  }
  FUN_004114b0(uVar2);
LAB_004209f4:
  iVar3 = FUN_00414d90(param_1,0x186b9);
  if (iVar3 != 0) {
    uVar2 = FUN_0041c4d0(iVar1,local_400,0x400);
    FUN_004208e0(uVar2);
    FUN_00414b80(iVar3,local_400,0);
  }
  return;
}



void FUN_00420a90(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD local_204;
  undefined4 local_200 [64];
  undefined auStack_100 [256];

  puVar2 = local_200;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_204 = 0x100;
  GetComputerNameA((LPSTR)local_200,&local_204);
  FUN_0049d2e0(s_Last_Player_004b6c5c,auStack_100,0x100,local_200);
  FUN_00414b80(param_1,auStack_100,0);
  return;
}



void FUN_00420b00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD local_104;
  undefined4 local_100 [64];

  puVar2 = local_100;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_104 = 0x100;
  if (param_1 == 0) {
    puVar2 = local_100;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    GetComputerNameA((LPSTR)local_100,&local_104);
  }
  else {
    FUN_00414ba0(param_1,local_100,0x100);
  }
  FUN_0049d250(s_Last_Player_004b6c5c,local_100);
  return;
}



void FUN_00420b80(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  DWORD local_204;
  undefined4 local_200 [64];
  undefined auStack_100 [256];

  puVar3 = local_200;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_204 = 0x100;
  GetComputerNameA((LPSTR)local_200,&local_204);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0426__s_s_Game_004b6c74,local_200);
  FUN_0049eb80(auStack_100,uVar1);
  puVar3 = local_200;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_0049d2e0(s_Last_Game_004b6c68,local_200,0x100,auStack_100);
  FUN_00414b80(param_1,local_200,0);
  return;
}



void FUN_00420c20(undefined4 param_1)

{
  FUN_0049d250(s_Last_Game_004b6c68,param_1);
  return;
}



void FUN_00420c40(undefined4 param_1,int *param_2)

{
  (&DAT_004eb238)[*param_2] = param_2[1];
  FUN_00420c60(param_1);
  return;
}



void FUN_00420c60(undefined4 param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;

  iVar5 = 0;
  piVar4 = &DAT_004eb238;
  pbVar1 = &DAT_00e9f444;
  do {
    if (((*pbVar1 & 1) != 0) && (*piVar4 != 0)) {
      iVar5 = iVar5 + 1;
    }
    pbVar1 = pbVar1 + 0xb0;
    piVar4 = piVar4 + 1;
  } while ((int)pbVar1 < 0xea0204);
  uVar2 = FUN_00414d90(param_1,0x186b5);
  iVar3 = FUN_00420f90();
  if (iVar5 == iVar3) {
    FUN_00411490();
    return;
  }
  FUN_004114b0(uVar2);
  return;
}



void FUN_00420cc0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;

  uVar1 = FUN_00420f90();
  uVar2 = FUN_00414d90(0,0x30d42);
  FUN_00413800(uVar2);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      iVar3 = FUN_0041abb0(uVar4);
      *(uint *)(iVar3 + 0x56c) = uVar4;
      FUN_00413a30(uVar2,iVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}



void FUN_00420d10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = FUN_00414d90(0,0x30d42);
  for (iVar1 = *(int *)(iVar3 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = *(int *)(iVar1 + 0x56c);
    if ((&DAT_00ea04e0)[iVar2] == 0) {
      *(undefined4 *)(iVar1 + 0x560) = (&DAT_00ea05c4)[iVar2 * 4];
      *(undefined4 *)(iVar1 + 0x564) = (&DAT_00ea05c8)[iVar2 * 4];
      *(undefined4 *)(iVar1 + 0x568) = (&DAT_00ea05cc)[iVar2 * 4];
      *(int *)(iVar1 + 0x528) = (&DAT_00ea05c0)[iVar2 * 4] + -1;
    }
    else {
      *(undefined4 *)(iVar1 + 0x528) = 0x29a;
    }
  }
  FUN_0041b4d0(iVar3);
  return;
}



void FUN_00420d90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_400 [128];
  undefined2 local_200 [256];

  DAT_004eb1ec = 0;
  FUN_004049e0();
  DAT_004eb388 = 0;
  iVar2 = FUN_00414d90(0,0x186af);
  pcVar8 = *(char **)(iVar2 + 0x4d4);
  uVar4 = 0xffffffff;
  pcVar7 = pcVar8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (~uVar4 - 1 < 0x101) {
    uVar4 = 0xffffffff;
    pcVar7 = pcVar8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar2 = ~uVar4 - 1;
  }
  else {
    iVar2 = 0x100;
  }
  FUN_0048c340(local_200,pcVar8,iVar2);
  puVar6 = local_400;
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_200[iVar2] = 0;
  iVar2 = FUN_00414d90(0,0x186b1);
  pcVar8 = *(char **)(iVar2 + 0x4d4);
  if (pcVar8 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar7 = pcVar8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 < 0x101) {
      uVar4 = 0xffffffff;
      pcVar7 = pcVar8;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar2 = ~uVar4 - 1;
    }
    else {
      iVar2 = 0x100;
    }
    FUN_0048c340(local_400,pcVar8,iVar2);
    *(undefined2 *)((int)local_400 + iVar2 * 2) = 0;
  }
  iVar2 = FUN_00404960(DAT_004eb38c,local_200,local_400);
  if (iVar2 != 0) {
    if (iVar2 == -0x7788feb6) {
      uVar3 = FUN_00421360(s__MONDOTEXT_H_0406_OK_004b6a7c,0,0,1);
      pcVar8 = s__MONDOTEXT_H_0408_Your_join_requ_004b6988;
    }
    else if (iVar2 == -0x7788feac) {
      uVar3 = FUN_00421360(s__MONDOTEXT_H_0406_OK_004b6a7c,0,0,1);
      pcVar8 = s__MONDOTEXT_H_0409_Your_password_i_004b69c0;
    }
    else {
      uVar3 = FUN_00421360(s__MONDOTEXT_H_0406_OK_004b6a7c,0,0,1);
      pcVar8 = s__MONDOTEXT_H_0410_An_unknown_net_004b6a04;
    }
    uVar3 = FUN_00421360(pcVar8,uVar3);
    uVar3 = FUN_00421360(s__MONDOTEXT_H_0407_Error_004b69ec,uVar3);
    FUN_004145b0(param_1,0xffffffff,0xffffffff,uVar3);
    FUN_004208c0();
    FUN_00420810();
    DAT_004eb39c = 0;
    FUN_004336d0(1);
    FUN_00414e60(param_1,0);
    FUN_004117e0();
    FUN_00411820(0xb);
    return;
  }
  FUN_0041c4f0();
  FUN_0041c760(0);
  FUN_0041b700();
  FUN_0041cde0(DAT_00ec7620);
  return;
}



uint FUN_00420f70(int param_1)

{
  return *(uint *)(&DAT_00e9f444 + param_1 * 0xb0) & 1;
}



int FUN_00420f90(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;

  iVar1 = 0;
  if (DAT_004eb3b8 != 0) {
    pbVar2 = &DAT_00e9f444;
    iVar3 = DAT_004eb3b8;
    do {
      if ((*pbVar2 & 1) != 0) {
        iVar1 = iVar1 + 1;
      }
      pbVar2 = pbVar2 + 0xb0;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}



undefined4 FUN_00420fc0(void)

{
  int iVar1;

  iVar1 = FUN_00450aa0(0x48616e67,0);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x70) = 1;
    *(undefined *)(iVar1 + 0x71) = (undefined)DAT_004eb3b8;
  }
  return 1;
}



void FUN_00420ff0(int param_1)

{
  uint uVar1;

  uVar1 = *(uint *)(&DAT_00e9f444 + param_1 * 0xb0);
  (&DAT_00e9f448)[param_1 * 0x2c] = 0;
  *(uint *)(&DAT_00e9f444 + param_1 * 0xb0) = uVar1 & 0xfffffffe;
  return;
}



undefined4 FUN_00421020(int param_1,undefined4 param_2)

{
  uint uVar1;

  uVar1 = *(uint *)(&DAT_00e9f444 + param_1 * 0xb0);
  (&DAT_00e9f448)[param_1 * 0x2c] = param_2;
  (&DAT_00e9f46c)[param_1 * 0x2c] = 0;
  *(uint *)(&DAT_00e9f444 + param_1 * 0xb0) = uVar1 | 5;
  DAT_004eb3b8 = DAT_004eb3b8 + 1;
  FUN_00420fc0();
  return 1;
}



void FUN_00421070(int param_1)

{
  DAT_004eb3b4 = param_1;
  DAT_004eb3c0 = &DAT_00e9f3c0 + param_1 * 0xb0;
  FUN_0049ef50(&DAT_00e9f3c4 + param_1 * 0xb0,&DAT_00e9f380,0x1f);
  *(undefined2 *)(DAT_004eb3c0 + 0x42) = 0;
  FUN_0049ef50(DAT_004eb3c0 + 0x44,&DAT_00ec8c00,0x1f);
  *(undefined2 *)(DAT_004eb3c0 + 0x82) = 0;
  return;
}



void FUN_004210e0(uint param_1)

{
  int iVar1;

  iVar1 = param_1 * 0xb0;
  if (param_1 < 0x14) {
    (&DAT_00e9f448)[param_1 * 0x2c] = 0;
    *(undefined2 *)(&DAT_00e9f3c4 + iVar1) = 0;
    *(undefined2 *)(&DAT_00e9f404 + iVar1) = 0;
    *(uint *)(&DAT_00e9f444 + iVar1) = *(uint *)(&DAT_00e9f444 + iVar1) & 0xfffffffa;
  }
  return;
}



undefined4 FUN_00421120(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;

  iVar5 = 0;
  DAT_004eb3cc = 0;
  iVar1 = (**(code **)(DAT_00ecc420 + 0x30))(param_1,&DAT_004b5c4c);
  if (iVar1 == 0) {
    return 1;
  }
  (**(code **)(DAT_00ecc420 + 0x38))(iVar1,&param_1,4);
  (**(code **)(DAT_00ecc420 + 0x4c))(iVar1,0,2);
  iVar2 = FUN_0049fbd0(iVar1);
  (**(code **)(DAT_00ecc420 + 0x4c))(iVar1,0,0);
  DAT_004eb3c8 = (char *)(**(code **)(DAT_00ecc420 + 0x20))(iVar2);
  (**(code **)(DAT_00ecc420 + 0x38))(iVar1,DAT_004eb3c8,iVar2);
  (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
  if (param_1 == 0x454e4352) {
    iVar2 = iVar2 + -4;
    iVar1 = 0;
    if (0 < iVar2) {
      do {
        DAT_004eb3c8[iVar1] = DAT_004eb3c8[iVar1 + 4] ^ 0xdd;
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
  }
  pcVar6 = DAT_004eb3c8 + iVar2;
  pcVar3 = DAT_004eb3c8;
  do {
    if (pcVar3 < pcVar6) {
      do {
        if ((*pcVar3 == '\r') || (*pcVar3 == '\n')) break;
        pcVar3 = pcVar3 + 1;
      } while (pcVar3 < pcVar6);
      for (; (pcVar3 < pcVar6 && ((*pcVar3 == '\r' || (*pcVar3 == '\n')))); pcVar3 = pcVar3 + 1) {
      }
    }
    DAT_004eb3cc = DAT_004eb3cc + 1;
  } while (pcVar3 < pcVar6 + -1);
  DAT_004eb3c4 = (**(code **)(DAT_00ecc420 + 0x20))(DAT_004eb3cc * 4);
  pcVar6 = DAT_004eb3c8;
  do {
    for (pcVar3 = pcVar6;
        ((pcVar3 < DAT_004eb3c8 + iVar2 && (*pcVar3 != '\r')) && (*pcVar3 != '\n'));
        pcVar3 = pcVar3 + 1) {
    }
    if (pcVar3 < DAT_004eb3c8 + iVar2) {
      do {
        if ((*pcVar3 != '\r') && (*pcVar3 != '\n')) break;
        *pcVar3 = '\0';
        pcVar3 = pcVar3 + 1;
      } while (pcVar3 < DAT_004eb3c8 + iVar2);
    }
    FUN_004214c0(pcVar6,pcVar6);
    puVar4 = (undefined *)FUN_0049fb10(pcVar6,9);
    if (puVar4 != (undefined *)0x0) {
      *puVar4 = 0;
    }
    FUN_004ab5d0(pcVar6);
    *(char **)(DAT_004eb3c4 + iVar5) = pcVar6;
    iVar5 = iVar5 + 4;
    pcVar6 = pcVar3;
    if (DAT_004eb3c8 + iVar2 + -1 <= pcVar3) {
      FUN_0049f8c0(DAT_004eb3c4,DAT_004eb3cc,4,&LAB_004212f0);
      return 1;
    }
  } while( true );
}



void FUN_00421330(void)

{
  if (DAT_004eb3c8 != 0) {
    (**(code **)(DAT_00ecc420 + 0x24))(DAT_004eb3c8);
  }
  if (DAT_004eb3c4 != 0) {
    (**(code **)(DAT_00ecc420 + 0x24))(DAT_004eb3c4);
  }
  return;
}


char * FUN_00421470(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;

  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (*param_1 == '\0') {
    return param_1;
  }
  if (*param_1 != '/') {
    return param_1;
  }
  iVar2 = -1;
  pcVar3 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (iVar2 == -3) {
    return param_1;
  }
  iVar2 = FUN_0049fb10(param_1 + 1,0x2f);
  return (char *)(iVar2 + 1);
}



int FUN_004214c0(byte *param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;

  bVar5 = *param_2;
  pbVar6 = param_1;
  do {
    if (bVar5 == 0) {
      *pbVar6 = 0;
      return (int)pbVar6 - (int)param_1;
    }
    if (bVar5 != 0x5c) {
      *pbVar6 = bVar5;
      pbVar6 = pbVar6 + 1;
      goto switchD_00421552_caseD_23;
    }
    if (DAT_004d1f9c < 2) {
      uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[1] * 2] & 4;
    }
    else {
      uVar3 = FUN_0049f440((int)(char)param_2[1],4);
    }
    if (uVar3 == 0) {
      switch(param_2[1]) {
      case 0x22:
        *pbVar6 = 0x22;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      default:
switchD_00421552_caseD_23:
        param_2 = param_2 + 1;
        break;
      case 0x27:
        *pbVar6 = 0x27;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x3f:
        *pbVar6 = 0x3f;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x58:
      case 0x78:
        if (DAT_004d1f9c < 2) {
          uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[2] * 2] & 0x80;
        }
        else {
          uVar3 = FUN_0049f440((int)(char)param_2[2],0x80);
        }
        if (uVar3 != 0) {
          if (DAT_004d1f9c < 2) {
            uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[3] * 2] & 0x80;
          }
          else {
            uVar3 = FUN_0049f440((int)(char)param_2[3],0x80);
          }
          if (uVar3 != 0) {
            if (DAT_004d1f9c < 2) {
              uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[2] * 2] & 4;
            }
            else {
              uVar3 = FUN_0049f440((int)(char)param_2[2],4);
            }
            if (uVar3 == 0) {
              cVar1 = FUN_0049fe50((int)(char)param_2[2]);
              cVar1 = cVar1 + -0x57;
            }
            else {
              cVar1 = param_2[2] - 0x30;
            }
            if (DAT_004d1f9c < 2) {
              uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[3] * 2] & 4;
            }
            else {
              uVar3 = FUN_0049f440((int)(char)param_2[3],4);
            }
            if (uVar3 == 0) {
              cVar2 = FUN_0049fe50((int)(char)param_2[3]);
              *pbVar6 = cVar1 << 4 | cVar2 + 0xa9U;
              pbVar6 = pbVar6 + 1;
              param_2 = param_2 + 4;
            }
            else {
              *pbVar6 = cVar1 << 4 | param_2[3] - 0x30;
              pbVar6 = pbVar6 + 1;
              param_2 = param_2 + 4;
            }
            break;
          }
        }
        if (DAT_004d1f9c < 2) {
          uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[2] * 2] & 4;
        }
        else {
          uVar3 = FUN_0049f440((int)(char)param_2[2],4);
        }
        if (uVar3 == 0) goto switchD_00421552_caseD_23;
        if (DAT_004d1f9c < 2) {
          uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[2] * 2] & 4;
        }
        else {
          uVar3 = FUN_0049f440((int)(char)param_2[2],4);
        }
        if (uVar3 == 0) {
          cVar1 = FUN_0049fe50((int)(char)param_2[2]);
          *pbVar6 = cVar1 + 0xa9;
          pbVar6 = pbVar6 + 1;
          param_2 = param_2 + 3;
        }
        else {
          *pbVar6 = param_2[2] - 0x30;
          pbVar6 = pbVar6 + 1;
          param_2 = param_2 + 3;
        }
        break;
      case 0x5c:
        *pbVar6 = 0x5c;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x61:
        *pbVar6 = 7;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x62:
        *pbVar6 = 8;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x66:
        *pbVar6 = 0xc;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x6e:
        *pbVar6 = 10;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x72:
        *pbVar6 = 0xd;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x74:
        *pbVar6 = 9;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x76:
        *pbVar6 = 0xb;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
      }
    }
    else {
      iVar4 = 1;
      bVar5 = 0;
      do {
        bVar5 = bVar5 << 3 | param_2[iVar4] - 0x30;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      *pbVar6 = bVar5;
      pbVar6 = pbVar6 + 1;
      param_2 = param_2 + 4;
    }
    bVar5 = *param_2;
  } while( true );
}



void FUN_00421810(void)

{
  int iVar1;

  iVar1 = FUN_00421b90();
  if (iVar1 == 0) {
    FUN_00421b20(1);
    iVar1 = FUN_00421c90();
    if (iVar1 == 0) {
      (**(code **)(DAT_00ecc420 + 0x18))
                (s_elfSaveLoad_SaveThisGameStruct___004b6c94,
                 s_D__devel_QA5_pc_gnome_SpecPlat_r_004b6cb8,0x4f);
    }
  }
  FUN_0044e500(0,0);
  return;
}



bool FUN_00421850(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_154;
  undefined4 local_150 [20];
  undefined local_100 [256];

  local_154 = 0;
  iVar3 = 0;
  FUN_0049eb80(local_100,&DAT_004b2524,s___data_player__004b4f6c,param_1);
  FUN_00484600(local_100,&PTR_DAT_004b4f7c);
  iVar1 = FUN_0049f1e0(local_100,&DAT_004b5c4c);
  if (iVar1 == 0) {
    iVar3 = 1;
    goto LAB_004218f7;
  }
  iVar2 = FUN_0049ffe0(&local_154,1,4,iVar1);
  if ((iVar2 == 0) || (local_154 != 0x10003)) {
LAB_004218e2:
    iVar3 = 1;
  }
  else {
    iVar2 = FUN_0049ffe0(local_150,1,0x50,iVar1);
    if (iVar2 == 0) goto LAB_004218e2;
  }
  FUN_0049f0f0(iVar1);
LAB_004218f7:
  if (iVar3 == 0) {
    puVar4 = local_150;
    puVar5 = &DAT_00e364b4;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    DAT_004b6c90 = iVar3;
    DAT_00e364f0 = iVar3;
    FUN_0049eb80(&DAT_004eb3d0,&DAT_004b2304,local_150);
    FUN_0044e500(0,0);
  }
  return iVar3 == 0;
}



bool FUN_004219d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_154;
  undefined4 local_150 [20];
  undefined local_100 [256];

  local_154 = 0x10003;
  puVar4 = &DAT_00e364b4;
  puVar5 = local_150;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (DAT_004b6c90 < 0) {
    return false;
  }
  FUN_0049eb80(local_100,&DAT_004b2524,s___data_player__004b4f6c,param_1);
  FUN_00484600(local_100,&PTR_DAT_004b4f7c);
  iVar3 = FUN_0049f1e0(local_100,&DAT_004b6cfc);
  if (iVar3 != 0) {
    iVar1 = FUN_004a0160(&local_154,1,4,iVar3);
    iVar2 = FUN_004a0160(local_150,1,0x50,iVar3);
    FUN_0049f0f0(iVar3);
    return iVar2 != 0 && iVar1 != 0;
  }
  return false;
}


#endif

// player name handling
undefined4 FUN_00421b20(int param_1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_50 [20];

  puVar2 = (undefined4 *)&DAT_00e364b4;
  puVar3 = local_50;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
#if 0
  FUN_0044e320(&DAT_00e364a0);
#endif
  if (param_1 == 0) {
    puVar2 = local_50;
    puVar3 = (undefined4*)&DAT_00e364b4;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return 1;
  }
  DAT_004eb3d0 = DAT_004d55cc;
  DAT_004b6c90 = 0xffffffff;
  return 1;
}
