#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_0044fc00(uint *param_1)

{
  uint uVar1;
  short sVar2;

  if (param_1 != (uint *)0x0) {
    uVar1 = param_1[2];
    *param_1 = *param_1 | 0x8000;
    if (uVar1 != 0) {
      sVar2 = __ftol();
      *(short *)(param_1 + 1) = sVar2;
      if (*(short *)(uVar1 + 4) < sVar2) {
        *(short *)(param_1 + 1) = sVar2 - *(short *)(uVar1 + 4);
      }
      if (*(short *)(param_1 + 1) < 0) {
        *(short *)(param_1 + 1) = *(short *)(uVar1 + 4) + *(short *)(param_1 + 1);
      }
      sVar2 = __ftol();
      *(short *)((int)param_1 + 6) = sVar2;
      if (*(short *)(uVar1 + 6) < sVar2) {
        *(short *)((int)param_1 + 6) = sVar2 - *(short *)(uVar1 + 6);
      }
      if (*(short *)((int)param_1 + 6) < 0) {
        *(short *)((int)param_1 + 6) = *(short *)(uVar1 + 6) + *(short *)((int)param_1 + 6);
      }
    }
  }
  return;
}



void FUN_0044fcc0(void)

{
  DAT_0050c764 = 0;
  DAT_0050c750 = 0;
  DAT_0050c758 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044fce0(char *param_1,float param_2)

{
  if ((param_1 != (char *)0x0) && (0.0 < param_2)) {
    if ((*param_1 == '~') && (param_1[1] == '_')) {
      DAT_0050c870 = 1;
      param_1 = param_1 + 2;
    }
    else {
      DAT_0050c870 = 0;
    }
    FUN_0049eb80(&DAT_0050c770,&DAT_004b2304,param_1);
    _DAT_004c3e40 = param_2;
    _DAT_004c3e44 = 0x3f800000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044fd50(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_8;
  undefined4 local_4;

  if (0.0 < _DAT_004c3e40) {
    if (DAT_0050c770 != '\0') {
      if (_DAT_004c3e44 <= 0.0) {
        uVar5 = 0xff;
        uVar3 = 0;
        uVar2 = FUN_004816b0(0,0xff);
        uVar4 = __ftol(uVar3,uVar5,uVar2);
        uVar2 = 0;
      }
      else {
        uVar2 = __ftol();
        uVar5 = 0xff;
        uVar4 = 0xff;
        uVar3 = uVar2;
      }
      FUN_0042d950(uVar2,uVar4,uVar3,uVar5);
      uVar3 = __ftol();
      FUN_0042d910(0x1a,uVar3);
      FUN_0042ec50(&DAT_0050c770);
      if (DAT_0050c870 != 0) {
        uVar3 = __ftol(0,0xff);
        FUN_0042d950(0,uVar3);
        FUN_0042d930(&local_4,&local_8);
        FUN_0042d910(local_4,local_8 + 5);
        FUN_0042ec50(&DAT_004b3bd8);
      }
      fVar1 = (float)_DAT_00e22a40 + (float)_DAT_00e22a40;
      _DAT_0050c874 = _DAT_0050c874 - fVar1;
      _DAT_004c3e44 = _DAT_004c3e44 - fVar1;
      if (_DAT_0050c874 < 0.0) {
        _DAT_0050c874 = 1.0;
      }
    }
    _DAT_004c3e40 = _DAT_004c3e40 - (float)_DAT_00e22a40;
  }
  return;
}



void FUN_0044fef0(undefined param_1,undefined2 param_2,undefined2 param_3)

{
  if (DAT_0050c764 < 0xbe) {
    (&DAT_00e2c080)[DAT_0050c764 * 2] = param_2;
    (&DAT_00e2c082)[DAT_0050c764 * 2] = param_3;
    (&DAT_00e345a0)[DAT_0050c764] = param_1;
    DAT_0050c764 = DAT_0050c764 + 1;
  }
  return;
}



void FUN_0044ff30(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char local_9;

  iVar2 = FUN_00445690();
  if (iVar2 == 0) {
    FUN_004816b0();
    FUN_004816b0();
  }
  if (DAT_0050c764 != 0) {
    FUN_0042d900(0);
    FUN_0042edc0(0x2e);
    local_9 = '.';
    uVar3 = __ftol();
    FUN_0042d950(0,0xff,0,uVar3);
    cVar4 = '\0';
    iVar2 = 0;
    if (0 < DAT_0050c764) {
      psVar5 = &DAT_00e2c080;
      do {
        cVar1 = (&DAT_00e345a0)[iVar2];
        if (cVar4 != cVar1) {
          cVar4 = cVar1;
          if (cVar1 == '\x01') {
            uVar3 = __ftol();
            uVar8 = 0xff;
            uVar7 = 0xff;
            uVar6 = 0;
          }
          else if (cVar1 == '\x02') {
            uVar3 = __ftol();
            uVar8 = 0;
            uVar7 = 0xff;
            uVar6 = 0xff;
          }
          else {
            if ((cVar1 < '\x03') && ('\x04' < cVar1)) goto LAB_004500be;
            if (local_9 != 'X') {
              FUN_0042edc0(0x58);
              local_9 = 'X';
            }
            if (cVar1 == '\x03') {
              uVar3 = __ftol();
              uVar8 = 0xff;
              uVar7 = 0;
              uVar6 = 0;
            }
            else {
              uVar3 = __ftol();
              uVar8 = 100;
              uVar7 = 0xff;
              uVar6 = 100;
            }
          }
          FUN_0042d950(uVar6,uVar7,uVar8,uVar3);
        }
LAB_004500be:
        FUN_0042eeb0((int)*psVar5,(int)psVar5[1],0x70);
        iVar2 = iVar2 + 1;
        psVar5 = psVar5 + 2;
      } while (iVar2 < DAT_0050c764);
    }
    FUN_00426910();
    DAT_0050c764 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00450100(void)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *local_4;

  iVar3 = 0;
  if (0 < DAT_0050c750) {
    puVar4 = &DAT_00e2c380;
    local_4 = &DAT_00e2b680;
    piVar2 = &DAT_00e2be80;
    puVar1 = &DAT_00e34860;
    do {
      FUN_0042d950((short)(char)(&DAT_00e2b480)[iVar3 * 4],(short)(char)(&DAT_00e2b481)[iVar3 * 4],
                   (short)(char)(&DAT_00e2b482)[iVar3 * 4],(short)(char)(&DAT_00e2b483)[iVar3 * 4]);
      FUN_0042d910(CONCAT22(extraout_var_00,*puVar1),
                   CONCAT22(extraout_var,(&DAT_00e34862)[iVar3 * 2]));
      if (*piVar2 != 0) {
        _DAT_0050c0b0 = 1;
        DAT_00e99750 = *local_4;
        DAT_00e99754 = local_4[1];
        DAT_00e99758 = local_4[2];
        DAT_00e9975c = local_4[3];
      }
      FUN_0042ec50(puVar4);
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 2;
      piVar2 = piVar2 + 1;
      local_4 = local_4 + 4;
      puVar4 = puVar4 + 0x80;
      _DAT_0050c0b0 = 0;
    } while (iVar3 < DAT_0050c750);
  }
  DAT_0050c750 = 0;
  return;
}



void FUN_004501f0(void)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined *puVar1;
  int iVar2;
  undefined2 *puVar3;

  iVar2 = 0;
  if (0 < DAT_0050c758) {
    puVar1 = &DAT_00e303a0;
    puVar3 = &DAT_00e34660;
    do {
      FUN_0042d950((short)(char)(&DAT_00e343a0)[iVar2 * 4],(short)(char)(&DAT_00e343a1)[iVar2 * 4],
                   (short)(char)(&DAT_00e343a2)[iVar2 * 4],(short)(char)(&DAT_00e343a3)[iVar2 * 4]);
      FUN_0042d910(CONCAT22(extraout_var_00,*puVar3),
                   CONCAT22(extraout_var,(&DAT_00e34662)[iVar2 * 2]));
      FUN_0042ec50(puVar1);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 2;
      puVar1 = puVar1 + 0x80;
    } while (iVar2 < DAT_0050c758);
  }
  DAT_0050c758 = 0;
  return;
}



void FUN_00450280(void)

{
  if ((DAT_0050c764 < 1) && (DAT_0050c750 < 1)) {
    return;
  }
  FUN_0044f5f0();
  FUN_00450100();
  FUN_0044ff30();
  FUN_00426910();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004502b0(void)

{
  if ((_DAT_004c3e40 <= 0.0) && (DAT_0050c758 < 1)) {
    return;
  }
  FUN_0044f5f0();
  FUN_0044fd50();
  FUN_004501f0();
  FUN_00426910();
  return;
}



void FUN_004502f0(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_00e2be80;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void FUN_00450310(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar1 = DAT_0050c750;
  if (((DAT_0050c750 < 0x80) && (DAT_0050c750 != 0)) && (param_1 != (int *)0x0)) {
    iVar2 = *param_1 * DAT_00ec86c4;
    iVar5 = param_1[2] * DAT_00ec86c4;
    iVar4 = param_1[1] * DAT_00ec85e8;
    iVar3 = param_1[3] * DAT_00ec85e8;
    *(undefined4 *)(&DAT_00e2be7c + DAT_0050c750 * 4) = 1;
    iVar1 = iVar1 * 0x10;
    *(int *)(&DAT_00e2b670 + iVar1) = iVar2 / 0x280;
    *(int *)(&DAT_00e2b674 + iVar1) = iVar4 / 0x1e0;
    *(int *)(&DAT_00e2b678 + iVar1) = iVar5 / 0x280;
    *(int *)(&DAT_00e2b67c + iVar1) = iVar3 / 0x1e0;
  }
  return;
}



void FUN_004503e0(undefined2 param_1,undefined2 param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined4 param_7,int param_8,int param_9)

{
  if (param_9 == 0) {
    if (DAT_0050c750 < 0x80) {
      if (param_8 < 0) {
        FUN_0049eb80(&DAT_00e2c380 + DAT_0050c750 * 0x80,&DAT_004b2304,param_7);
      }
      else {
        FUN_0049eb80(&DAT_00e2c380 + DAT_0050c750 * 0x80,s__f_d_s_004c3e48,param_8,param_7);
      }
      (&DAT_00e34860)[DAT_0050c750 * 2] = param_1;
      (&DAT_00e34862)[DAT_0050c750 * 2] = param_2;
      (&DAT_00e2b480)[DAT_0050c750 * 4] = param_3;
      (&DAT_00e2b481)[DAT_0050c750 * 4] = param_4;
      (&DAT_00e2b482)[DAT_0050c750 * 4] = param_5;
      (&DAT_00e2b483)[DAT_0050c750 * 4] = param_6;
      DAT_0050c750 = DAT_0050c750 + 1;
      return;
    }
  }
  else if (DAT_0050c758 < 0x20) {
    if (param_8 < 0) {
      FUN_0049eb80(&DAT_00e303a0 + DAT_0050c758 * 0x80,&DAT_004b2304,param_7);
    }
    else {
      FUN_0049eb80(&DAT_00e303a0 + DAT_0050c758 * 0x80,s__f_d_s_004c3e48,param_8,param_7);
    }
    (&DAT_00e34660)[DAT_0050c758 * 2] = param_1;
    (&DAT_00e34662)[DAT_0050c758 * 2] = param_2;
    (&DAT_00e343a0)[DAT_0050c758 * 4] = param_3;
    (&DAT_00e343a1)[DAT_0050c758 * 4] = param_4;
    (&DAT_00e343a2)[DAT_0050c758 * 4] = param_5;
    (&DAT_00e343a3)[DAT_0050c758 * 4] = param_6;
    DAT_0050c758 = DAT_0050c758 + 1;
  }
  return;
}



void FUN_00450530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_004503e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0xffffffff,0);
  return;
}



void FUN_00450560(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004503e0(param_1,param_2,0xffffffff,0xffffffff,0xffffffff,0xffffffff,param_3,0xffffffff,0);
  return;
}



void FUN_00450590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004503e0(param_2,param_3,0xffffffff,0xffffffff,0xffffffff,0xffffffff,param_4,param_1,0);
  return;
}



void FUN_004505c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_004503e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0xffffffff,1);
  return;
}



void FUN_004505f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;

  if (param_8 != 0) {
    uVar1 = FUN_00421360(&DAT_004c3e54);
    FUN_00450760(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
    return;
  }
  uVar1 = FUN_00421360(&DAT_004c3e50);
  FUN_00450760(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
  return;
}



void FUN_00450670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined local_100 [256];

  iVar1 = __ftol();
  iVar2 = __ftol();
  iVar3 = __ftol();
  if (iVar3 == 100) {
    iVar3 = 0;
    iVar2 = iVar2 + 1;
    if (iVar2 == 0x3c) {
      iVar1 = iVar1 + 1;
    }
  }
  if (iVar1 == 0) {
    FUN_0049eb80(local_100,s__s__2d___2d_004c3e5c,param_8,iVar2,iVar3);
  }
  else {
    FUN_0049eb80(local_100,s__s_d___2d___2d_004c3e68,param_8,iVar1);
  }
  FUN_00450530(param_1,param_2,param_4,param_5,param_6,param_7,local_100);
  return;
}



void FUN_00450760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined local_100 [256];

  iVar1 = __ftol();
  iVar2 = __ftol();
  iVar3 = __ftol();
  if (iVar3 == 1000) {
    iVar3 = 0;
    iVar2 = iVar2 + 1;
    if (iVar2 == 0x3c) {
      iVar1 = iVar1 + 1;
    }
  }
  if (iVar1 == 0) {
    FUN_0049eb80(local_100,s__s__2d___3d_004c3e78,param_8,iVar2,iVar3);
  }
  else {
    FUN_0049eb80(local_100,s__s_d___2d___3d_004c3e84,param_8,iVar1);
  }
  FUN_00450530(param_1,param_2,param_4,param_5,param_6,param_7,local_100);
  return;
}



void FUN_00450850(int param_1)

{
  int **ppiVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  undefined *puVar6;

  piVar2 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar6 = PTR_PTR_DAT_004bfec0;
  while (piVar2 != (int *)0x0) {
    if (*piVar2 == param_1) {
      piVar4 = (int *)piVar2[4];
      sVar5 = 0;
      if (0 < piVar2[2]) {
        do {
          iVar3 = *piVar2;
          *(short *)(piVar4 + 1) = sVar5;
          *piVar4 = iVar3;
          *(undefined2 *)((int)piVar4 + 6) = *(undefined2 *)(piVar2 + 1);
          piVar4 = (int *)((int)piVar4 + piVar2[3]);
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 < piVar2[2]);
      }
    }
    ppiVar1 = (int **)(puVar6 + 4);
    puVar6 = puVar6 + 4;
    piVar2 = *ppiVar1;
  }
  return;
}



void FUN_004508b0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;

  iVar2 = *(int *)PTR_PTR_DAT_004bfec0;
  puVar4 = PTR_PTR_DAT_004bfec0;
  while (iVar2 != 0) {
    pcVar3 = *(code **)(iVar2 + 0x14);
    if ((pcVar3 != (code *)0x0) && ((*(uint *)(iVar2 + 4) & (int)DAT_0050c87c) == 0)) {
      iVar6 = *(int *)(iVar2 + 0x10);
      sVar5 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        do {
          if ((*(ushort *)(iVar6 + 6) & 0x1100) == 0) {
            (*pcVar3)(iVar6);
          }
          iVar6 = iVar6 + *(int *)(iVar2 + 0xc);
          FUN_004270c0();
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 < *(int *)(iVar2 + 8));
      }
    }
    piVar1 = (int *)(puVar4 + 4);
    puVar4 = puVar4 + 4;
    iVar2 = *piVar1;
  }
  return;
}



void FUN_00450930(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;

  iVar2 = *(int *)PTR_PTR_DAT_004bfec0;
  puVar4 = PTR_PTR_DAT_004bfec0;
  while (iVar2 != 0) {
    pcVar3 = *(code **)(iVar2 + 0x18);
    if ((pcVar3 != (code *)0x0) && ((*(uint *)(iVar2 + 4) & (int)DAT_0050c87c) == 0)) {
      iVar6 = *(int *)(iVar2 + 0x10);
      sVar5 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        do {
          if ((*(ushort *)(iVar6 + 6) & 0x1100) == 0) {
            (*pcVar3)(iVar6);
          }
          iVar6 = iVar6 + *(int *)(iVar2 + 0xc);
          FUN_004270c0();
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 < *(int *)(iVar2 + 8));
      }
    }
    piVar1 = (int *)(puVar4 + 4);
    puVar4 = puVar4 + 4;
    iVar2 = *piVar1;
  }
  return;
}



void FUN_004509b0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;

  iVar2 = *(int *)PTR_PTR_DAT_004bfec0;
  puVar4 = PTR_PTR_DAT_004bfec0;
  while (iVar2 != 0) {
    pcVar3 = *(code **)(iVar2 + 0x1c);
    if ((pcVar3 != (code *)0x0) && ((*(uint *)(iVar2 + 4) & (int)DAT_0050c87c) == 0)) {
      iVar6 = *(int *)(iVar2 + 0x10);
      sVar5 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        do {
          if ((*(ushort *)(iVar6 + 6) & 0x1100) == 0) {
            (*pcVar3)(iVar6);
          }
          iVar6 = iVar6 + *(int *)(iVar2 + 0xc);
          FUN_004270c0();
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 < *(int *)(iVar2 + 8));
      }
    }
    piVar1 = (int *)(puVar4 + 4);
    puVar4 = puVar4 + 4;
    iVar2 = *piVar1;
  }
  return;
}



void FUN_00450a30(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;

  iVar2 = *(int *)PTR_PTR_DAT_004bfec0;
  puVar4 = PTR_PTR_DAT_004bfec0;
  while (iVar2 != 0) {
    pcVar3 = *(code **)(iVar2 + 0x20);
    if (pcVar3 != (code *)0x0) {
      iVar6 = *(int *)(iVar2 + 0x10);
      sVar5 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        do {
          if ((*(ushort *)(iVar6 + 6) & 0x1100) == 0) {
            (*pcVar3)(iVar6);
          }
          iVar6 = iVar6 + *(int *)(iVar2 + 0xc);
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 < *(int *)(iVar2 + 8));
      }
      FUN_004270c0();
    }
    piVar1 = (int *)(puVar4 + 4);
    puVar4 = puVar4 + 4;
    iVar2 = *piVar1;
  }
  return;
}



int FUN_00450aa0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined *puVar4;

  piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar4 = PTR_PTR_DAT_004bfec0;
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == param_1) {
      iVar2 = piVar1[4];
      sVar3 = 0;
      if (0 < piVar1[2]) {
        do {
          if (((*(ushort *)(iVar2 + 6) & 0x100) == 0) && (*(short *)(iVar2 + 4) == param_2)) {
            return iVar2;
          }
          iVar2 = iVar2 + piVar1[3];
          sVar3 = sVar3 + 1;
        } while ((int)sVar3 < piVar1[2]);
      }
    }
    piVar1 = *(int **)(puVar4 + 4);
    puVar4 = puVar4 + 4;
  } while( true );
}



int * FUN_00450b00(int param_1)

{
  int *piVar1;
  undefined *puVar2;

  piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar2 = PTR_PTR_DAT_004bfec0;
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  do {
    if (*piVar1 == param_1) {
      return (int *)piVar1[2];
    }
    piVar1 = *(int **)(puVar2 + 4);
    puVar2 = puVar2 + 4;
  } while (piVar1 != (int *)0x0);
  return piVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_00450b30(int param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;

  _DAT_0050c880 = (int *)0x0;
  piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar2 = PTR_PTR_DAT_004bfec0;
  if (piVar1 != (int *)0x0) {
    while (*piVar1 != param_1) {
      piVar1 = *(int **)(puVar2 + 4);
      puVar2 = puVar2 + 4;
      if (piVar1 == (int *)0x0) {
        return piVar1;
      }
    }
    if (param_2 < piVar1[2]) {
      _DAT_0050c880 = piVar1;
      _DAT_0050c878 = param_2;
      return (int *)(piVar1[3] * param_2 + piVar1[4]);
    }
  }
  return (int *)0x0;
}



void FUN_00450b90(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 local_40 [16];

  local_40[0] = param_1;
  local_40[1] = param_2;
  uVar1 = 8;
  do {
    *(undefined4 *)((int)local_40 + uVar1) = *(undefined4 *)(param_3 + -8 + uVar1);
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x40);
  FUN_00426910(0xee06,local_40);
  return;
}



void FUN_00450be0(undefined4 param_1,undefined4 param_2)

{
  FUN_00450b90(param_1,0x416c6c21,param_2);
  return;
}



void FUN_00450c00(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined *puVar2;

  if (param_1 != (int *)0x0) {
    piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
    if (piVar1 != (int *)0x0) {
      puVar2 = PTR_PTR_DAT_004bfec0;
      while (*piVar1 != *param_1) {
        piVar1 = *(int **)(puVar2 + 4);
        puVar2 = puVar2 + 4;
        if (piVar1 == (int *)0x0) {
          return;
        }
      }
      if (((code *)piVar1[9] != (code *)0x0) && ((*(ushort *)((int)param_1 + 6) & 0x100) == 0)) {
        (*(code *)piVar1[9])(param_1,param_2,param_2);
      }
    }
  }
  return;
}



void FUN_00450c50(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;

  piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar4 = PTR_PTR_DAT_004bfec0;
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if ((*piVar1 == param_1) || (param_1 == 0x416c6c21)) {
      pcVar2 = (code *)piVar1[9];
      if (pcVar2 != (code *)0x0) {
        iVar6 = piVar1[4];
        iVar5 = 0;
        if (0 < piVar1[2]) {
          do {
            if (((*(ushort *)(iVar6 + 6) & 0x100) == 0) &&
               (iVar3 = (*pcVar2)(iVar6,param_2,param_2), iVar3 == 2)) {
              return;
            }
            iVar6 = iVar6 + piVar1[3];
            iVar5 = iVar5 + 1;
          } while (iVar5 < piVar1[2]);
        }
      }
      if (param_1 != 0x416c6c21) {
        return;
      }
    }
    piVar1 = *(int **)(puVar4 + 4);
    puVar4 = puVar4 + 4;
  } while( true );
}



int * FUN_00450ce0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined *puVar2;

  piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar2 = PTR_PTR_DAT_004bfec0;
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  do {
    if (*piVar1 == param_1) {
      piVar1[4] = param_3;
      piVar1[2] = param_2;
      return (int *)(piVar1[3] * param_2);
    }
    piVar1 = *(int **)(puVar2 + 4);
    puVar2 = puVar2 + 4;
  } while (piVar1 != (int *)0x0);
  return piVar1;
}



int * FUN_00450d20(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_20 [8];

  piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar2 = PTR_PTR_DAT_004bfec0;
  if (piVar1 != (int *)0x0) {
    while (*piVar1 != param_1) {
      piVar1 = *(int **)(puVar2 + 4);
      puVar2 = puVar2 + 4;
      if (piVar1 == (int *)0x0) {
        return piVar1;
      }
    }
    if (piVar1[9] != 0) {
      piVar4 = (int *)piVar1[4];
      iVar3 = 0;
      if (0 < piVar1[2]) {
        do {
          if ((*(ushort *)((int)piVar4 + 6) & 0x100) != 0) {
            *(byte *)((int)piVar4 + 7) = *(byte *)((int)piVar4 + 7) & 0xfe;
            local_20[0] = 0x416c6f63;
            FUN_00450c00(piVar4,local_20);
            return piVar4;
          }
          piVar4 = (int *)((int)piVar4 + piVar1[3]);
          iVar3 = iVar3 + 1;
        } while (iVar3 < piVar1[2]);
        return (int *)0x0;
      }
    }
  }
  return (int *)0x0;
}



void FUN_00450db0(int param_1)

{
  int **ppiVar1;
  int *piVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 local_8 [2];

  local_8[0] = 0x46726565;
  piVar2 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar4 = PTR_PTR_DAT_004bfec0;
  while (piVar2 != (int *)0x0) {
    if (*piVar2 == param_1) {
      iVar5 = piVar2[4];
      sVar3 = 0;
      if (0 < piVar2[2]) {
        do {
          if ((*(ushort *)(iVar5 + 6) & 0x100) == 0) {
            FUN_00450c00(iVar5,local_8);
            *(byte *)(iVar5 + 7) = *(byte *)(iVar5 + 7) | 1;
          }
          iVar5 = iVar5 + piVar2[3];
          sVar3 = sVar3 + 1;
        } while ((int)sVar3 < piVar2[2]);
      }
    }
    ppiVar1 = (int **)(puVar4 + 4);
    puVar4 = puVar4 + 4;
    piVar2 = *ppiVar1;
  }
  return;
}



void FUN_00450e30(int param_1)

{
  undefined4 local_20 [8];

  if ((param_1 != 0) && ((*(ushort *)(param_1 + 6) & 0x100) == 0)) {
    local_20[0] = 0x46726565;
    FUN_00450c00(param_1,local_20);
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
  }
  return;
}



int FUN_00450e70(int param_1,float *param_2,float param_3,int param_4,int param_5,float *param_6,
                int param_7,int param_8)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_1c;
  int local_18;

  iVar11 = 0;
  piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
  local_1c = 0;
  puVar10 = PTR_PTR_DAT_004bfec0;
  do {
    if (piVar1 == (int *)0x0) {
      return iVar11;
    }
    if (((*piVar1 == param_1) || (param_1 == 0x416c6c21)) && ((*(byte *)(piVar1 + 1) & 1) != 0)) {
      iVar12 = piVar1[4];
      local_18 = 0;
      if (0 < piVar1[2]) {
        do {
          if (((*(ushort *)(iVar12 + 6) & 0x100) == 0) && (iVar12 != param_4)) {
            fVar4 = *(float *)(iVar12 + 0x50) - *param_2;
            fVar2 = *(float *)(iVar12 + 0x54) - param_2[1];
            fVar5 = *(float *)(iVar12 + 0x58) - param_2[2];
            fVar3 = fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4;
            if (fVar3 < param_3) {
              iVar13 = 0;
              pfVar7 = param_6;
              if (0 < iVar11) {
                do {
                  if (fVar3 <= *pfVar7) break;
                  iVar13 = iVar13 + 1;
                  pfVar7 = pfVar7 + 1;
                } while (iVar13 < iVar11);
              }
              if (iVar13 < param_5) {
                if (iVar11 < param_5) {
                  local_1c = iVar11 + 1;
                  iVar8 = iVar11;
                  iVar11 = local_1c;
                }
                else {
                  iVar8 = param_5 + -1;
                }
                if (iVar13 < iVar8) {
                  pfVar7 = param_6 + iVar8;
                  iVar9 = iVar8 - iVar13;
                  puVar6 = (undefined4 *)(param_7 + iVar8 * 0xc);
                  do {
                    *(undefined4 *)((param_8 - (int)param_6) + (int)pfVar7) =
                         *(undefined4 *)((param_8 - (int)param_6) + -4 + (int)pfVar7);
                    *pfVar7 = pfVar7[-1];
                    *puVar6 = puVar6[-3];
                    puVar6[1] = puVar6[-2];
                    puVar6[2] = puVar6[-1];
                    pfVar7 = pfVar7 + -1;
                    iVar9 = iVar9 + -1;
                    puVar6 = puVar6 + -3;
                    iVar11 = local_1c;
                  } while (iVar9 != 0);
                }
                param_6[iVar13] = fVar3;
                *(int *)(param_8 + iVar13 * 4) = iVar12;
                *(float *)(param_7 + iVar13 * 0xc) = fVar4;
                iVar13 = param_7 + iVar13 * 0xc;
                *(float *)(iVar13 + 4) = fVar2;
                *(float *)(iVar13 + 8) = fVar5;
              }
            }
          }
          iVar12 = iVar12 + piVar1[3];
          local_18 = local_18 + 1;
        } while (local_18 < piVar1[2]);
      }
    }
    piVar1 = *(int **)(puVar10 + 4);
    puVar10 = puVar10 + 4;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00451020(int param_1,float param_2)

{
  int iVar1;
  float fVar2;

  fVar2 = _DAT_004c3ee8;
  iVar1 = *(int *)(param_1 + 0xf4);
  if (param_2 == -1.0) {
    _DAT_004c3ee8 = param_2;
  }
  if (param_2 == -2.0) {
    if (_DAT_004c3ee8 != -1.0) {
      _DAT_004c3ee8 = _DAT_004c3ee8 + (float)_DAT_00e22a40;
    }
  }
  else if (_DAT_004c3ee8 < param_2) {
    _DAT_004c3ee8 = param_2;
  }
  if (_DAT_004c3ee8 != -1.0) {
    if ((((6.0 <= _DAT_004c3ee8) && (fVar2 < 6.0)) && (param_2 < 100.0)) &&
       ((iVar1 != 0 && (**(int **)(*(int *)(iVar1 + 0x1e70) + 0x18) != 0xe)))) {
      FUN_00426c80(0x74,6,0x3e800000,0x3f000000,0);
    }
    if (_DAT_004c3ee8 < 6.0) {
      _DAT_0050caf8 = 0.0;
      return;
    }
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x60) & 0x20) != 0)) {
      _DAT_0050caf8 = _DAT_0050caf8 + (float)_DAT_00e22a40;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00451160(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  if (*(int *)(param_2 + 0x300) < 0) {
    return;
  }
  bVar4 = (*(uint *)(param_1 + 0x2e4) & 0x40) != 0;
  if (bVar4) {
    *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) & 0xffffffbf;
  }
  uVar1 = *(uint *)(param_1 + 0x2e4);
  if ((uVar1 & 1) != 0) {
    if ((uVar1 & 0x80000000) == 0) {
      if ((uVar1 & 2) != 0) {
        *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x2f4);
        *(uint *)(param_1 + 0x2e4) = uVar1 & 0xfffffffd;
        *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x2fc);
        *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x2f8);
        *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x300);
        *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x304);
        *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_1 + 0x308);
        *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x2e8);
        *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x2ec);
        *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x2f0);
      }
      *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x340);
      *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x344);
      *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x348);
      *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x34c);
      *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x350);
      *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x354);
      *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x334);
      *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x338);
      *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x33c);
    }
    else {
      *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x338);
      *(uint *)(param_1 + 0x2e4) = uVar1 & 0x7ffffffc;
      *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x33c);
      *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x334);
      *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x350);
      *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x34c);
      *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x354);
      *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x340);
      *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x344);
      *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x348);
      FUN_0042f9b0((undefined4 *)(param_1 + 0x2f4));
      bVar4 = true;
    }
  }
  if ((*(byte *)(param_1 + 0x2e4) & 8) != 0) {
    *(float *)(param_1 + 0x2f4) = *(float *)(param_2 + 0x50) - *(float *)(param_1 + 0x340);
    *(float *)(param_1 + 0x2f8) = *(float *)(param_2 + 0x54) - *(float *)(param_1 + 0x344);
    *(float *)(param_1 + 0x2fc) = *(float *)(param_2 + 0x58) - *(float *)(param_1 + 0x348);
    FUN_0042f9b0((float *)(param_1 + 0x2f4));
    bVar4 = true;
  }
  uVar1 = *(uint *)(param_1 + 0x2e4);
  if ((uVar1 & 4) != 0) {
    iVar3 = __ftol();
    if ((float10)0.0 <= (float10)50.0 - (extraout_ST1 - (float10)iVar3 * (float10)100.0)) {
      iVar3 = __ftol();
      fVar5 = (float10)50.0 - (extraout_ST0_00 - (float10)iVar3 * (float10)100.0);
    }
    else {
      iVar3 = __ftol();
      fVar5 = -((float10)50.0 - (extraout_ST0 - (float10)iVar3 * (float10)100.0));
    }
    fVar5 = fVar5 * (float10)0.02;
    *(float *)(param_1 + 0x300) = (float)((float10)*(float *)(param_1 + 0x34c) * fVar5);
    *(float *)(param_1 + 0x304) = (float)((float10)*(float *)(param_1 + 0x350) * fVar5);
    bVar4 = true;
    *(float *)(param_1 + 0x308) = (float)((float10)*(float *)(param_1 + 0x354) * fVar5);
  }
  if ((uVar1 & 1) != 0) {
    fVar2 = *(float *)(param_1 + 0x398) - ((float)_DAT_00e22a40 + (float)_DAT_00e22a40);
    *(float *)(param_1 + 0x398) = fVar2;
    if (fVar2 < 0.0) {
      *(undefined4 *)(param_1 + 0x398) = 0;
      *(uint *)(param_1 + 0x2e4) = uVar1 & 0xfffffffe;
    }
    *(float *)(param_1 + 0x2e8) =
         (1.0 - *(float *)(param_1 + 0x398)) * *(float *)(param_1 + 0x2e8) +
         *(float *)(param_1 + 0x398) * *(float *)(param_1 + 0x30c);
    *(float *)(param_1 + 0x2ec) =
         (1.0 - *(float *)(param_1 + 0x398)) * *(float *)(param_1 + 0x2ec) +
         *(float *)(param_1 + 0x398) * *(float *)(param_1 + 0x310);
    *(float *)(param_1 + 0x2f0) =
         (1.0 - *(float *)(param_1 + 0x398)) * *(float *)(param_1 + 0x2f0) +
         *(float *)(param_1 + 0x398) * *(float *)(param_1 + 0x314);
    *(float *)(param_1 + 0x300) =
         (1.0 - *(float *)(param_1 + 0x398)) * *(float *)(param_1 + 0x300) +
         *(float *)(param_1 + 0x398) * *(float *)(param_1 + 0x324);
    *(float *)(param_1 + 0x304) =
         (1.0 - *(float *)(param_1 + 0x398)) * *(float *)(param_1 + 0x304) +
         *(float *)(param_1 + 0x398) * *(float *)(param_1 + 0x328);
    *(float *)(param_1 + 0x308) =
         (1.0 - *(float *)(param_1 + 0x398)) * *(float *)(param_1 + 0x308) +
         *(float *)(param_1 + 0x398) * *(float *)(param_1 + 0x32c);
    bVar4 = true;
    *(float *)(param_1 + 0x2f4) =
         (1.0 - *(float *)(param_1 + 0x398)) * *(float *)(param_1 + 0x2f4) +
         *(float *)(param_1 + 0x398) * *(float *)(param_1 + 0x318);
    *(float *)(param_1 + 0x2f8) =
         (1.0 - *(float *)(param_1 + 0x398)) * *(float *)(param_1 + 0x2f8) +
         *(float *)(param_1 + 0x398) * *(float *)(param_1 + 0x31c);
    *(float *)(param_1 + 0x2fc) =
         (1.0 - *(float *)(param_1 + 0x398)) * *(float *)(param_1 + 0x2fc) +
         *(float *)(param_1 + 0x398) * *(float *)(param_1 + 800);
  }
  uVar1 = *(uint *)(param_1 + 0x2e4);
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0x20) == 0) goto LAB_00451737;
    *(uint *)(param_1 + 0x2e4) = uVar1 & 0xffffffdf;
    uVar6 = *(undefined4 *)(param_2 + 0x300);
    uVar7 = 0;
  }
  else {
    iVar3 = FUN_004816b0();
    local_24 = *(float *)(param_2 + 0x50) - *(float *)(param_2 + 0x13c0);
    local_20 = *(float *)(param_2 + 0x54) - *(float *)(param_2 + 0x13c4);
    local_1c = *(float *)(param_2 + 0x58) - *(float *)(param_2 + 0x13c8);
    local_10 = (float)iVar3 * 4.656613e-10 * 0.5 - -0.5;
    local_18 = local_10 * 200.0;
    local_10 = local_10 * 255.0;
    local_14 = local_18;
    FUN_0042f9b0(&local_24);
    *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) | 0x20;
    uVar6 = *(undefined4 *)(param_2 + 0x300);
    uVar7 = 1;
  }
  FUN_00483960(uVar6,uVar7,&local_18,&local_24);
LAB_00451737:
  if (bVar4) {
    if (*(int *)(param_2 + 0x304) == 0) {
      FUN_00483840(*(undefined4 *)(param_2 + 0x300),param_1 + 0x2e8,param_1 + 0x300,param_1 + 0x2f4)
      ;
      return;
    }
    local_30 = *(undefined4 *)(param_1 + 0x2e8);
    local_28 = *(undefined4 *)(param_1 + 0x2f0);
    local_c = *(undefined4 *)(param_1 + 0x300);
    local_8 = *(undefined4 *)(param_1 + 0x304);
    local_4 = *(undefined4 *)(param_1 + 0x308);
    if (*(int *)(param_2 + 0x304) == 1) {
      local_30 = 0;
    }
    else {
      local_28 = 0;
    }
    local_2c = 0;
    FUN_00483840(*(undefined4 *)(param_2 + 0x300),&local_30,&local_c,param_1 + 0x2f4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00451800(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;

  if ((param_3 != 0) && (*(ushort *)(param_3 + 10) != 0)) {
    if ((*(ushort *)(param_3 + 10) & 0x10) == 0) {
      *(float *)(param_1 + 0x334) = (float)(uint)*(byte *)(param_3 + 0xc);
      *(float *)(param_1 + 0x338) = (float)(uint)*(byte *)(param_3 + 0xd);
      *(float *)(param_1 + 0x33c) = (float)(uint)*(byte *)(param_3 + 0xe);
      *(float *)(param_1 + 0x34c) = (float)(uint)*(byte *)(param_3 + 0xf);
      *(float *)(param_1 + 0x350) = (float)(uint)*(byte *)(param_3 + 0x10);
      *(float *)(param_1 + 0x354) = (float)(uint)*(byte *)(param_3 + 0x11);
      *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_3 + 0x20);
      *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_3 + 0x28);
      FUN_0042f9b0((undefined4 *)(param_1 + 0x358));
      puVar1 = (uint *)(param_1 + 0x330);
      if ((*(byte *)(param_3 + 10) & 4) == 0) {
        *puVar1 = *puVar1 & 0xfffffff7;
        FUN_0042f9b0(param_1 + 0x340);
      }
      else {
        *puVar1 = *puVar1 | 8;
      }
      if ((*(byte *)(param_3 + 10) & 8) == 0) {
        *puVar1 = *puVar1 & 0xfffffffb;
      }
      else {
        *puVar1 = *puVar1 | 4;
      }
      goto LAB_00451a40;
    }
    *(float *)(param_1 + 0x368) = (float)(uint)*(byte *)(param_3 + 0xc);
    *(float *)(param_1 + 0x36c) = (float)(uint)*(byte *)(param_3 + 0xd);
    *(float *)(param_1 + 0x370) = (float)(uint)*(byte *)(param_3 + 0xe);
    *(float *)(param_1 + 0x380) = (float)(uint)*(byte *)(param_3 + 0xf);
    *(float *)(param_1 + 900) = (float)(uint)*(byte *)(param_3 + 0x10);
    *(float *)(param_1 + 0x388) = (float)(uint)*(byte *)(param_3 + 0x11);
    *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_3 + 0x28);
    FUN_0042f9b0((undefined4 *)(param_1 + 0x38c));
    puVar1 = (uint *)(param_1 + 0x364);
    if ((*(byte *)(param_3 + 10) & 4) == 0) {
      *puVar1 = *puVar1 & 0xfffffff7;
      FUN_0042f9b0((undefined4 *)(param_1 + 0x374));
    }
    else {
      *puVar1 = *puVar1 | 8;
    }
    if ((*(byte *)(param_3 + 10) & 8) == 0) {
      *puVar1 = *puVar1 & 0xfffffffb;
    }
    else {
      *puVar1 = *puVar1 | 4;
    }
  }
  puVar5 = (undefined4 *)(param_1 + 0x364);
  puVar6 = (undefined4 *)(param_1 + 0x330);
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_00451a40:
  uVar3 = *(uint *)(param_1 + 0x2e4) & 0xfffffff3 | *(uint *)(param_1 + 0x330);
  *(uint *)(param_1 + 0x2e4) = uVar3;
  fVar2 = (float)_DAT_00e22a40;
  *(uint *)(param_1 + 0x2e4) = uVar3 | 3;
  *(float *)(param_1 + 0x398) = (fVar2 + fVar2) - -1.0;
  return;
}



void FUN_00451a80(int param_1)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;

  iVar2 = *(int *)(param_1 + 0xf4);
  *(uint *)(param_1 + 0x2a8) = *(uint *)(param_1 + 0x2a8) & 0xfffffff7;
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x140) == 0) {
    if ((*(uint *)(iVar2 + 100) & 0x200000) == 0) goto LAB_00451c6b;
    if ((*(uint *)(iVar2 + 100) & 0x200000) == 0) goto LAB_00451ad2;
    pbVar3 = *(byte **)(param_1 + 0x2a4);
  }
  else {
LAB_00451ad2:
    pbVar3 = (byte *)FUN_004318b0(*(int *)(iVar2 + 0x140));
  }
  if ((pbVar3 != (byte *)0x0) && ((*(uint *)(pbVar3 + 0x2c) & 0x800) != 0)) {
    *(uint *)(param_1 + 0x2a8) = *(uint *)(param_1 + 0x2a8) | 8;
  }
  if ((pbVar3 == *(byte **)(param_1 + 0x2a4)) && ((*(uint *)(iVar2 + 100) & 0x200000) == 0))
  goto LAB_00451c6b;
  *(uint *)(iVar2 + 100) = *(uint *)(iVar2 + 100) & 0xffdfffff;
  *(byte **)(param_1 + 0x2a4) = pbVar3;
  FUN_00451800(param_1,iVar2,pbVar3);
  iVar4 = FUN_0045d350();
  if (iVar4 < 2) {
    if ((pbVar3 == (byte *)0x0) || ((pbVar3[0x30] & 1) == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x7f;
    }
    FUN_004269f0(uVar6);
  }
  if (pbVar3 == (byte *)0x0) goto LAB_00451c6b;
  if ((*pbVar3 & 2) != 0) {
    *(uint *)(param_1 + 0x2a8) = *(uint *)(param_1 + 0x2a8) | 4;
  }
  if ((*pbVar3 & 4) != 0) {
    *(uint *)(param_1 + 0x2a8) = *(uint *)(param_1 + 0x2a8) & 0xfffffffb;
  }
  if ((pbVar3[2] & 2) == 0) {
LAB_00451be0:
    if ((pbVar3[2] & 1) != 0) {
      if (*(short *)(pbVar3 + 6) < 1) {
        uVar5 = *(uint *)(param_1 + 0x2a8) & 0xfffffffd;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x2a8) | 2;
      }
      *(uint *)(param_1 + 0x2a8) = uVar5;
      sVar1 = *(short *)(pbVar3 + 6);
      *(float *)(param_1 + 0x2e0) = (float)(int)sVar1;
      if (996.0 < (float)(int)sVar1) {
        *(undefined4 *)(param_1 + 0x2e0) = 0x44790000;
      }
      *(uint *)(param_1 + 0x2c8) = (uint)pbVar3[3];
      *(uint *)(param_1 + 0x2cc) = (uint)pbVar3[4];
      *(uint *)(param_1 + 0x2d0) = (uint)pbVar3[5];
    }
  }
  else {
    *(uint *)(param_1 + 0x2a8) = *(uint *)(param_1 + 0x2a8) | 1;
    *(float *)(param_1 + 0x2d8) = (float)(int)*(short *)(pbVar3 + 8);
    iVar4 = FUN_0045d350();
    if (iVar4 < 2) goto LAB_00451be0;
    if ((pbVar3[2] & 1) != 0) {
      if (1200.0 < *(float *)(param_1 + 0x2d8)) {
        *(undefined4 *)(param_1 + 0x2d8) = 0x44960000;
      }
      if (((byte)*(undefined4 *)(iVar2 + 0x60) & 0xf) != 2) {
        *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2d8);
      }
      goto LAB_00451be0;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x2ac) & ~*(uint *)(pbVar3 + 0x34);
  *(uint *)(param_1 + 0x2ac) = uVar5;
  *(uint *)(param_1 + 0x2ac) =
       (uint)(uint3)((uint3)((uint)*(undefined4 *)(pbVar3 + 0x38) >> 8) | (uint3)(uVar5 >> 8)) << 8;
LAB_00451c6b:
  if ((*(uint *)(iVar2 + 0x60) & 0x30000000) == 0) {
    uVar5 = *(uint *)(param_1 + 0x2e4) & 0xffffffef;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x2e4) | 0x10;
  }
  *(uint *)(param_1 + 0x2e4) = uVar5;
  if ((*(uint *)(iVar2 + 100) & 0x200000) != 0) {
    *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) | 0x40;
  }
  if (*(int *)(param_1 + 0x2e4) != 0) {
    FUN_00451160(param_1,iVar2);
  }
  *(uint *)(iVar2 + 100) = *(uint *)(iVar2 + 100) & 0xffdfffff;
  return;
}



void FUN_00451d60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x144);
  return;
}



void FUN_00451ec0(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x80);
  if ((iVar1 != 2) && (iVar1 != 1)) {
    *(int *)(param_1 + 0x7c) = iVar1;
    return;
  }
  FUN_00451d60(param_1,iVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00451ef0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined local_3c8 [4];
  float local_3c4;
  float local_3c0;
  undefined local_3bc [12];
  int local_3b0;
  undefined local_3ac [12];
  float local_3a0 [3];
  float local_394;
  undefined local_390 [4];
  float local_38c [4];
  float local_37c;
  float local_378;
  undefined local_374 [4];
  float local_370;
  float local_36c;
  undefined local_368 [156];
  undefined local_2cc [56];
  float local_294;
  undefined local_28c [12];
  undefined local_280 [16];
  undefined local_270 [32];
  undefined local_250 [16];
  undefined local_240 [8];
  float local_238;
  undefined local_234 [8];
  float local_22c;
  undefined local_228 [12];
  undefined local_21c [156];
  float local_180;
  float local_17c;
  float local_140;
  float local_13c;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_40;

  local_3b0 = 0;
  iVar4 = *(int *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x2b0) = 0xbf800000;
  if (iVar4 != 0) {
    FUN_0044bb10(local_2cc,iVar4 + 0x20);
    local_294 = *(float *)(iVar4 + 0x250) + local_294;
    *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x70) + (float)_DAT_00e22a40;
    iVar1 = **(int **)(*(int *)(iVar4 + 0x1e70) + 0x18);
    iVar3 = iVar1 * 0x6c;
    FUN_0042f7d0(local_3ac,&DAT_004c7088 + iVar3);
    FUN_0042f830(local_3ac,local_3ac,&DAT_004c70a0 + iVar3);
    FUN_0042f7d0(local_3a0,&DAT_004c7094 + iVar3);
    FUN_0042f830(local_3a0,local_3a0,&DAT_004c70c4 + iVar3);
    local_3a0[0] = local_3a0[0] * 0.3;
    FUN_0042f7d0(local_3c8,&DAT_004c70d0 + iVar3);
    local_3c0 = *(float *)(iVar4 + 0x19b4) * 0.75 + local_3c0;
    local_3c4 = local_3c4 * -1.0;
    FUN_0042fa50(local_3c8,0x3f400000,local_3c8);
    FUN_0042f7d0(local_38c,local_3ac);
    local_38c[0] = local_38c[0] - -2.0;
    local_38c[1] = local_38c[1] - 2.0;
    local_38c[2] = local_38c[2] - 1.0;
    if (iVar1 == 0xe) {
      local_38c[0] = local_38c[0] - -2.0;
      local_38c[1] = local_38c[1] - 2.0;
      local_38c[2] = local_38c[2] - -4.0;
    }
    FUN_00430a00(local_38c,local_38c,local_2cc);
    FUN_0042f7d0(local_240,local_3ac);
    local_238 = local_238 - 2.0;
    FUN_00430a00(local_240,local_240,local_2cc);
    FUN_0042f7d0(local_38c + 3,local_3ac);
    local_38c[3] = local_38c[3] - 0.5;
    local_37c = local_37c - -2.5;
    local_378 = local_378 - 1.0;
    if (iVar1 == 0xe) {
      local_37c = local_37c - -2.0;
      local_378 = local_378 - -4.0;
    }
    FUN_00430a00(local_38c + 3,local_38c + 3,local_2cc);
    FUN_0042f7d0(local_234,local_3ac);
    local_22c = local_22c - 2.0;
    FUN_00430a00(local_234,local_234,local_2cc);
    FUN_0042f7d0(local_374,local_3a0);
    local_370 = local_370 - -5.0;
    local_36c = local_36c - -0.5;
    FUN_00430a00(local_374,local_374,local_2cc);
    FUN_0042f7d0(local_228,local_3ac);
    FUN_00430a00(local_228,local_228,local_2cc);
    FUN_0042f7d0(local_368,local_3c8);
    FUN_00430a00(local_368,local_368,local_2cc);
    FUN_0042f7b0(local_21c,0,0,local_3c0);
    FUN_00430a00(local_21c,local_21c,local_2cc);
    if (3.0 <= *(float *)(param_1 + 0x70)) {
      if (6.0 <= *(float *)(param_1 + 0x70)) {
        if (8.0 <= *(float *)(param_1 + 0x70)) {
          fVar2 = 1.0;
          iVar4 = 2;
          local_3b0 = 1;
        }
        else {
          iVar4 = 2;
          fVar2 = (*(float *)(param_1 + 0x70) - 6.0) * 0.5;
        }
      }
      else {
        iVar4 = 1;
        fVar2 = (*(float *)(param_1 + 0x70) - 3.0) * 0.3333333;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x70) * 0.3333333;
      iVar4 = 0;
    }
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    FUN_0042f380(fVar2 * 180.0 - 90.0,&local_394,local_390);
    fVar2 = local_394 * 0.5 - -0.5;
    FUN_0042f7b0(local_3bc,0,0,0);
    FUN_0042fa80(local_3bc,local_3bc,1.0 - fVar2,local_240 + iVar4 * 0xc);
    FUN_0042fa80(local_3bc,local_3bc,fVar2,local_234 + iVar4 * 0xc);
    FUN_0042f860(&local_100,local_38c + iVar4 * 3,local_3bc);
    FUN_0042f860(&local_f4,local_38c + iVar4 * 3 + 3,local_3bc);
    fVar5 = (float10)FUN_0042f9b0(&local_100);
    local_140 = (float)fVar5;
    fVar5 = (float10)FUN_0042f9b0(&local_f4);
    local_13c = (float)fVar5;
    fVar5 = (float10)FUN_0042f560(-local_100,local_fc);
    local_180 = (float)fVar5;
    fVar5 = (float10)FUN_0042f560(-local_f4,local_f0);
    local_17c = (float)fVar5;
    fVar5 = (float10)FUN_0042f3e0(local_f8);
    local_40 = (float)fVar5;
    fVar5 = (float10)FUN_0042f3e0(local_ec);
    FUN_00431020(local_280,(local_17c - local_180) * fVar2 + local_180,
                 (float)((fVar5 - (float10)local_40) * (float10)fVar2 + (float10)local_40),0);
    FUN_0042fa80(local_28c,local_3bc,(local_13c - local_140) * fVar2 + local_140,local_270);
    FUN_004313d0(local_280);
    FUN_0042f7d0(local_250,local_28c);
    FUN_0044bb10(param_1 + 0x20,local_280);
    FUN_004313d0(local_280);
    FUN_0042f7d0(local_250,local_3bc);
    FUN_0044bb10(param_1 + 0x108,local_280);
  }
  if (local_3b0 != 0) {
    FUN_00451d60(param_1,1);
  }
  return;
}



void FUN_004525d0(int param_1)

{
  FUN_00449090();
  *(undefined4 *)(param_1 + 0x70) = 0x41000000;
  FUN_00451ef0(param_1);
  FUN_00451020(param_1,0x447a0000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00452600(float param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined local_c [12];

  iVar3 = (int)param_1;
  iVar1 = *(int *)((int)param_1 + 0xf4);
  if (iVar1 != 0) {
    fVar2 = *(float *)((int)param_1 + 0x70) - (float)_DAT_00e22a40;
    *(float *)((int)param_1 + 0x70) = fVar2;
    iVar4 = *(int *)((int)param_1 + 0x6c);
    if (iVar4 == 0) {
      if (0.0 <= fVar2) {
        param_1 = 1.0 - fVar2;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x70) = 0x3fc00000;
        *(undefined4 *)((int)param_1 + 0x6c) = 2;
        puVar5 = (undefined4 *)(iVar1 + 0xac);
        puVar6 = (undefined4 *)((int)param_1 + 0x1b4);
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        *(float *)((int)param_1 + 0x1bc) = *(float *)((int)param_1 + 0x1bc) - 0.85;
        *(undefined4 *)((int)param_1 + 0x1b8) = 0;
        FUN_0044ed80((undefined4 *)((int)param_1 + 0x1b4),(int)param_1 + 0x1e4);
        *(undefined4 *)((int)param_1 + 0x1b8) = 0x3f088889;
        param_1 = 1.0;
      }
      iVar1 = iVar3 + 0x15c;
      FUN_0042f860(local_c,iVar3 + 0x168,iVar1);
      FUN_0042f9b0(local_c);
      FUN_0042fa80(&local_24,iVar1,param_1 * 30.0,local_c);
      *(undefined4 *)(iVar3 + 0x18c) = local_24;
      *(undefined4 *)(iVar3 + 400) = local_20;
      *(undefined4 *)(iVar3 + 0x194) = local_1c;
      FUN_0042f7d0(&local_18,iVar1);
    }
    else if (iVar4 == 2) {
      if (fVar2 < 0.0) {
        *(undefined4 *)((int)param_1 + 0x70) = 0;
        *(undefined4 *)((int)param_1 + 0x6c) = 3;
      }
      FUN_0044ed80((int)param_1 + 0x1b4,(int)param_1 + 0x1e4);
      FUN_0042f7d0(&local_18,iVar1 + 0x50);
      local_24 = *(undefined4 *)((int)param_1 + 0x214);
      local_20 = *(undefined4 *)((int)param_1 + 0x218);
      local_1c = *(undefined4 *)((int)param_1 + 0x21c);
    }
    else if (iVar4 == 3) {
      *(undefined4 *)(iVar1 + 0x30c) = 0x40400000;
      *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xffffbfff | 0x2000;
      FUN_00451ec0(param_1);
      local_24 = *(undefined4 *)((int)param_1 + 0x50);
      local_20 = *(undefined4 *)((int)param_1 + 0x54);
      local_18 = *(undefined4 *)((int)param_1 + 0x138);
      local_14 = *(undefined4 *)((int)param_1 + 0x13c);
      local_10 = *(undefined4 *)((int)param_1 + 0x140);
      local_1c = *(undefined4 *)((int)param_1 + 0x58);
    }
    *(undefined4 *)(iVar3 + 0x58) = local_1c;
    *(undefined4 *)(iVar3 + 0x50) = local_24;
    *(undefined4 *)(iVar3 + 0x20) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x34) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x48) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x5c) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x108) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x11c) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x130) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x144) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x54) = local_20;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x28) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined4 *)(iVar3 + 0x44) = 0;
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    *(undefined4 *)(iVar3 + 0x10c) = 0;
    *(undefined4 *)(iVar3 + 0x110) = 0;
    *(undefined4 *)(iVar3 + 0x114) = 0;
    *(undefined4 *)(iVar3 + 0x118) = 0;
    *(undefined4 *)(iVar3 + 0x120) = 0;
    *(undefined4 *)(iVar3 + 0x124) = 0;
    *(undefined4 *)(iVar3 + 0x128) = 0;
    *(undefined4 *)(iVar3 + 300) = 0;
    *(undefined4 *)(iVar3 + 0x134) = 0;
    *(undefined4 *)(iVar3 + 0x138) = local_18;
    *(undefined4 *)(iVar3 + 0x13c) = local_14;
    *(undefined4 *)(iVar3 + 0x140) = local_10;
    return;
  }
  FUN_00451ec0(param_1);
  return;
}



void FUN_004528b0(float param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined local_58 [20];
  undefined4 local_44;
  undefined local_40 [16];
  undefined local_30 [16];
  undefined local_20 [16];
  undefined local_10 [8];
  float local_8;

  iVar5 = (int)param_1;
  iVar3 = *(int *)((int)param_1 + 0xf4);
  if (iVar3 != 0) {
    uVar4 = *(uint *)(iVar3 + 0x60);
    *(undefined4 *)((int)param_1 + 0x2b0) = 0x42c80000;
    if (*(int *)((int)param_1 + 0x7c) == 5) {
      *(undefined4 *)((int)param_1 + 0x2b0) = 0x42f00000;
    }
    FUN_0044bb10(local_40,iVar3 + 0x20);
    local_8 = *(float *)(iVar3 + 0x250) + local_8;
    piVar1 = (int *)((int)param_1 + 0x7c);
    param_1 = (*(float *)(iVar3 + 0xa8) - 3.0) * 0.5;
    if ((*piVar1 != 5) &&
       (param_1 = param_1 * 1.9, **(int **)(*(int *)(iVar3 + 0x1e70) + 0x18) == 0xe)) {
      param_1 = param_1 * 0.3;
    }
    if (**(int **)(*(int *)(iVar3 + 0x1e70) + 0x18) == 0xe) {
      FUN_0042fa80(local_10,local_10,param_1,local_20);
    }
    else if ((uVar4 & 0x6000000) == 0) {
      local_8 = *(float *)(iVar3 + 0x48) * param_1 + local_8;
    }
    if (**(int **)(*(int *)(iVar3 + 0x1e70) + 0x18) == 10) {
      FUN_0042fa80(local_10,local_10,0x40400000,local_30);
    }
    if ((*(uint *)(iVar3 + 100) & 0x18000) != 0) {
      FUN_00430b80(iVar3 + 0x490,local_58);
      FUN_00431390(local_40,local_44,0,0x3f800000,0,local_40);
    }
    iVar2 = iVar5 + 0x20;
    FUN_0044bb10(iVar2,local_40);
    FUN_0044bb10(iVar5 + 0x108,local_40);
    if ((*(uint *)(iVar3 + 0x60) & 0x100000) != 0) {
      FUN_0042fa80(iVar5 + 0x138,local_10,0xbf800000,local_30);
      FUN_0042fa50(iVar5 + 0x30,0xbf800000,iVar5 + 0x30);
      FUN_0042fa50(iVar2,0xbf800000,iVar2);
      return;
    }
    FUN_0042fa80(iVar5 + 0x138,local_10,0x3f800000,local_30);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00452aa0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float *pfVar11;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined local_a4 [48];
  float local_74;
  float local_70;
  float local_6c;
  undefined local_64 [16];
  float local_54 [2];
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined local_24 [8];
  float local_1c;
  undefined local_18 [20];
  float local_4;

  iVar4 = *(int *)(param_1 + 0xf4);
  if (iVar4 == 0) {
    return;
  }
  uVar7 = *(uint *)(iVar4 + 0x60) & 0x20;
  local_c0 = (undefined4 *)(uint)(uVar7 == 0);
  if ((uVar7 != 0) && (*(float *)(iVar4 + 0x1a0) < 50.0)) {
    FUN_0042fa80(param_1 + 0x254,param_1 + 0x254,(float)_DAT_00e22a40 * -20.0,iVar4 + 0x30);
  }
  bVar9 = (*(uint *)(iVar4 + 0x60) & 0x6000000) == 0;
  local_d0 = (float)(uint)!bVar9;
  *(undefined4 *)(param_1 + 0x2b0) = 0x42c80000;
  iVar8 = **(int **)(*(int *)(iVar4 + 0x1e70) + 0x18);
  if (bVar9) {
    iVar8 = iVar8 * 0x6c;
    local_dc = *(float *)(&DAT_004c70d4 + iVar8);
    local_d8 = *(float *)(iVar4 + 0x19b4) * 0.75 + *(float *)(&DAT_004c70d8 + iVar8);
  }
  else {
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(&DAT_004c70d4 + iVar8 * 0x6c);
    local_d8 = *(float *)(&DAT_004c70d8 + **(int **)(*(int *)(iVar4 + 0x1e70) + 0x18) * 0x6c);
    *(float *)(param_1 + 0x14c) = local_d8;
    local_d8 = local_d8 + *(float *)(iVar4 + 0x19b4) * 0.75;
    *(float *)(param_1 + 0x14c) = local_d8;
    local_dc = *(float *)(param_1 + 0x148);
  }
  fVar10 = local_d8;
  if (*(int *)(param_1 + 0x7c) == 2) {
    local_dc = local_dc + local_dc;
    local_d8 = local_d8 + local_d8;
    if (30.0 < local_dc) {
      local_dc = 30.0;
    }
    if (15.0 < local_d8) {
      local_d8 = 15.0;
    }
    fVar10 = 8.0;
  }
  fVar5 = (*(float *)(iVar4 + 0x1a0) - 200.0) * 0.002631579;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  if (1.0 < fVar5) {
    fVar5 = 1.0;
  }
  fVar5 = fVar5 * 0.3 - -0.75;
  local_dc = local_dc * fVar5;
  local_d8 = local_d8 * fVar5;
  fVar10 = fVar10 * fVar5;
  iVar8 = FUN_0045d350();
  if (iVar8 == 2) {
    local_dc = local_dc * 1.3;
  }
  local_b0 = *(float *)(param_1 + 0x294) - *(float *)(param_1 + 0x254);
  local_ac = *(float *)(param_1 + 0x298) - *(float *)(param_1 + 600);
  local_a8 = *(float *)(param_1 + 0x29c) - *(float *)(param_1 + 0x25c);
  FUN_0042f9b0(&local_b0);
  iVar8 = *(int *)(param_1 + 0xf4);
  local_dc = ((1.0 - (*(float *)(iVar8 + 0x34) * local_ac +
                     *(float *)(iVar8 + 0x30) * local_b0 + *(float *)(iVar8 + 0x38) * local_a8)) *
              0.5 - -1.0) * local_dc;
  if (bVar9) {
    local_dc = (local_dc + *(float *)(param_1 + 0x148)) * 0.5;
    local_d8 = (local_d8 + *(float *)(param_1 + 0x14c)) * 0.5;
    *(float *)(param_1 + 0x148) = local_dc;
    *(float *)(param_1 + 0x14c) = local_d8;
  }
  FUN_0044bb10(local_64,*(int *)(param_1 + 0xf4) + 0x20);
  local_2c = local_2c + *(float *)(iVar4 + 0x250);
  FUN_0044bb10(local_a4,local_64);
  FUN_0042f860(&local_cc,param_1 + 0x254,&local_74);
  if (local_d0 != 0.0) {
    FUN_0042fa80(&local_cc,&local_cc,
                 -(local_c4 * local_3c + local_c8 * local_40 + local_cc * local_44),&local_44);
    FUN_0042f8c0(&local_cc);
    FUN_0042f9b0(&local_cc);
    FUN_0042fa80(&local_74,&local_74,local_dc,&local_cc);
    FUN_0042fa80(&local_74,&local_74,local_d8,&local_44);
    FUN_0042f7d0(local_24,&local_74);
    local_bc = local_34;
    local_b8 = local_30;
    pfVar11 = &local_44;
    local_b4 = local_2c;
    goto LAB_00452fd3;
  }
  local_c4 = local_d0;
  FUN_0042f8c0(&local_cc);
  FUN_0042f9b0(&local_cc);
  if (local_c0 == (undefined4 *)0x0) {
    FUN_0042fa80(&local_74,&local_74,local_dc,&local_cc);
    local_6c = local_d8 + local_6c;
  }
  else if (DAT_0050c8a4 == 0) {
    local_dc = local_dc * -0.9;
LAB_00452e39:
    local_6c = local_d8 + local_6c;
    local_74 = local_74 - local_dc;
  }
  else {
    if (DAT_0050c8a4 == 1) {
      local_dc = local_dc * -0.8;
    }
    else {
      if (DAT_0050c8a4 == 2) {
        local_dc = local_dc * 0.6;
        goto LAB_00452e39;
      }
      local_dc = local_dc * 0.7;
    }
    local_6c = local_d8 + local_6c;
    local_70 = local_70 - local_dc;
  }
  FUN_0042f7d0(local_24,&local_74);
  local_b4 = fVar10 + local_2c;
  local_bc = local_34;
  local_b8 = local_30;
  pfVar11 = local_54;
  fVar10 = *(float *)(iVar4 + 0x1e8) * 20.0;
LAB_00452fd3:
  FUN_0042fa80(&local_bc,&local_bc,fVar10,pfVar11);
  if ((local_d0 == 0.0) && (local_4c < 0.0)) {
    fVar10 = local_4c * local_4c * 30.0;
    if (20.0 < fVar10) {
      fVar10 = 20.0;
    }
    local_1c = local_1c + fVar10;
  }
  FUN_00430b80(*(int *)(param_1 + 0xf4) + 0x20,local_18);
  local_d8 = local_4 * 0.005555556;
  if (local_d0 == 0.0) {
    local_d8 = local_d8 * local_d8 * local_d8 * 180.0;
    fVar10 = local_d8;
    if (local_d8 < 0.0) {
      fVar10 = -local_d8;
    }
    local_4 = local_4 * 0.25;
    fVar5 = local_4;
    if (local_4 < 0.0) {
      fVar5 = -local_4;
    }
    if (fVar10 <= fVar5) {
      local_d8 = local_4;
    }
  }
  else {
    local_d8 = local_d8 * 180.0;
  }
  FUN_00431020(local_a4,0,0,local_d8);
  FUN_0042f7d0(&local_74,local_24);
  FUN_0044bb10((undefined4 *)(param_1 + 0x224),local_a4);
  FUN_0044bb10(local_a4,*(int *)(param_1 + 0xf4) + 0x20);
  FUN_0042f7d0(&local_74,&local_bc);
  FUN_0044bb10((undefined4 *)(param_1 + 0x264),local_a4);
  local_c0 = (undefined4 *)(param_1 + 0x20);
  puVar1 = (undefined4 *)(param_1 + 0x50);
  *local_c0 = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x230);
  puVar2 = (undefined4 *)(param_1 + 0x30);
  *puVar2 = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x23c);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x244);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x250);
  *puVar1 = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 600);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x264);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x268);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x26c);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x270);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x274);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x278);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x27c);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x280);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x284);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x288);
  puVar3 = (undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x28c);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x290);
  *puVar3 = *(undefined4 *)(param_1 + 0x294);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x298);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x29c);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x2a0);
  if ((*(uint *)(iVar4 + 0x60) & 0x100000) != 0) {
    FUN_0044bb10(local_64,iVar4 + 0x20);
    puVar6 = local_c0;
    local_2c = local_2c + *(float *)(iVar4 + 0x250);
    FUN_0044bb10(local_c0,local_64);
    FUN_0044bb10((undefined4 *)(param_1 + 0x108),local_64);
    FUN_0042fa50(puVar2,0xbf800000,puVar2);
    FUN_0042fa50(puVar6,0xbf800000,puVar6);
    FUN_0042fa80(puVar3,puVar3,0xbf800000,local_54);
    FUN_0042fa80(puVar1,puVar1,*(float *)(iVar4 + 0xa8) + *(float *)(iVar4 + 0xa8),local_54);
    FUN_0042fa80(puVar3,puVar3,*(float *)(iVar4 + 0xa8) * 0.2,&local_44);
    FUN_0042fa80(puVar1,puVar1,*(float *)(iVar4 + 0xa8) * 0.2,&local_44);
  }
  return;
}



void FUN_004533a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined local_c0 [48];
  float local_90;
  float local_8c;
  float local_88;
  undefined local_80 [48];
  float local_50;
  float local_48;
  undefined local_40 [48];
  float local_10;
  float local_c;
  float local_8;

  iVar2 = *(int *)(param_1 + 0xf4);
  if (iVar2 == 0) {
    uVar4 = FUN_00450aa0(0x54657374,0);
    *(undefined4 *)(param_1 + 0xf4) = uVar4;
    return;
  }
  FUN_0044bb10(local_c0,iVar2 + 0x20);
  local_88 = *(float *)(iVar2 + 0x250) + local_88;
  puVar1 = (undefined4 *)(param_1 + 0x84);
  puVar6 = (undefined4 *)(iVar2 + 0xac);
  puVar7 = puVar1;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_0044ed80(puVar1,param_1 + 0xb4);
  FUN_0044eeb0(puVar1,local_40,0xbc23d70a);
  local_10 = local_10 - *(float *)(param_1 + 0xe4);
  local_c = local_c - *(float *)(param_1 + 0xe8);
  local_8 = local_8 - *(float *)(param_1 + 0xec);
  fVar3 = local_8 * local_8 + local_c * local_c + local_10 * local_10;
  if (0.001 < fVar3) {
    fVar3 = ((local_8 * local_88 + local_c * local_8c + local_10 * local_90) -
            (local_c * *(float *)(param_1 + 0xe8) +
            local_10 * *(float *)(param_1 + 0xe4) + local_8 * *(float *)(param_1 + 0xec))) / fVar3;
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) - fVar3 * 0.01;
  FUN_0044ed80(puVar1,param_1 + 0xb4);
  FUN_0044bb10(local_80,param_1 + 0xb4);
  local_48 = local_88 - -5.0;
  local_50 = local_50 - -7.0;
  FUN_0044bb10(param_1 + 0x20,local_80);
  FUN_0044bb10(local_80,*(int *)(param_1 + 0xf4) + 0x20);
  FUN_0044bb10(param_1 + 0x108,local_80);
  *(undefined4 *)(param_1 + 0x2b0) = 0x42700000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004535c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_88;
  undefined local_80 [16];
  undefined local_70 [8];
  undefined4 local_68;
  undefined local_60 [16];
  undefined local_50 [16];
  undefined local_40 [16];
  undefined local_30 [16];
  undefined local_20 [16];
  undefined local_10 [16];

  iVar1 = FUN_0045d350();
  if (iVar1 == 1) {
    _DAT_0050c8a8 = _DAT_0050c8a8 - (float)_DAT_00e22a40 * -3.0;
    local_88 = 0x40000000;
  }
  else {
    local_88 = 0x3fc00000;
    iVar1 = FUN_0045d350();
    _DAT_0050c8a8 = (3.0 / (float)iVar1) * (float)_DAT_00e22a40 + _DAT_0050c8a8;
  }
  if (1.0 < _DAT_0050c8a8) {
    _DAT_0050c8a8 = -1.0;
  }
  iVar1 = *(int *)(param_1 + 0xf4);
  if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x60) & 0x8000000) != 0)) &&
     (*(int *)(iVar1 + 0x254) != 0)) {
    FUN_004313d0(local_40);
    FUN_0042f860(local_30,param_1 + 0x138,param_1 + 0x50);
    FUN_0042f7d0(local_20,param_1 + 0x40);
    FUN_0042f9f0(local_40,local_30,local_20);
    FUN_0042f9f0(local_20,local_40,local_30);
    FUN_0042f9b0(local_40);
    FUN_0042f9b0(local_30);
    FUN_0042f9b0(local_20);
    FUN_0042f7d0(local_10,param_1 + 0x50);
    if (*(int *)(iVar1 + 0x254) != 0) {
      FUN_00431a50(*(int *)(iVar1 + 0x254),2,3,0x10,2);
    }
    uVar2 = __ftol();
    FUN_0042b640(*(undefined4 *)(iVar1 + 0x254),0,0,0x59,0x8c,0x36,uVar2);
    FUN_004313d0(local_80);
    FUN_0042f860(local_70,iVar1 + 600,iVar1 + 0x50);
    local_68 = 0;
    FUN_0042f9b0(local_70);
    FUN_0042f9f0(local_80,local_70,local_60);
    FUN_0042f9f0(local_60,local_80,local_70);
    FUN_0042f9b0(local_80);
    FUN_0042f9b0(local_60);
    FUN_00431450(local_80,0xbc75c28f,0x3c75c28f,0xbbf5c28f,local_80);
    FUN_0042f7d0(local_50,local_10);
    FUN_0042fa80(local_50,local_50,0x40a00000,local_30);
    FUN_0042fa80(local_50,local_50,local_88,local_20);
    FUN_0042fa80(local_50,local_50,0,local_40);
    FUN_0042fa80(local_50,local_50,_DAT_0050c8a8 * 100.0,local_70);
    FUN_00431640(*(undefined4 *)(iVar1 + 0x254),local_80);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004538d0(float param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  float local_10;

  iVar6 = (int)param_1;
  if (DAT_0050c894 == 0) {
    if ((*(byte *)((int)param_1 + 0x2a8) & 1) == 0) {
      param_1 = -1.0;
    }
    else {
      if (0.0 < *(float *)((int)param_1 + 0x2d8)) {
        if (*(float *)((int)param_1 + 0x2d4) <= *(float *)((int)param_1 + 0x2d8)) {
          fVar1 = *(float *)((int)param_1 + 0x2d4) - (float)_DAT_00e22a40 * -2000.0;
          *(float *)((int)param_1 + 0x2d4) = fVar1;
          if (*(float *)((int)param_1 + 0x2d8) < fVar1) {
            *(undefined4 *)((int)param_1 + 0x2d4) = *(undefined4 *)((int)param_1 + 0x2d8);
            goto LAB_0045399a;
          }
        }
        else {
          fVar1 = *(float *)((int)param_1 + 0x2d4) - (float)_DAT_00e22a40 * 2000.0;
          *(float *)((int)param_1 + 0x2d4) = fVar1;
          if (fVar1 < *(float *)((int)param_1 + 0x2d8)) {
            *(undefined4 *)((int)param_1 + 0x2d4) = *(undefined4 *)((int)param_1 + 0x2d8);
LAB_0045399a:
            *(undefined4 *)((int)param_1 + 0x2d8) = 0xbf800000;
          }
        }
      }
      param_1 = *(float *)((int)param_1 + 0x2d4);
    }
    local_10 = *(float *)(iVar6 + 0x2b4);
  }
  else {
    local_10 = DAT_004c3ee0;
    param_1 = DAT_004c3edc;
  }
  if (DAT_0050c898 == 0) {
    DAT_004c3ed8 = *(float *)(iVar6 + 0x2b0);
  }
  fVar10 = DAT_004c3ed8;
  fVar1 = *(float *)(iVar6 + 0x2b8);
  DAT_004c3edc = param_1;
  DAT_004c3ee0 = local_10;
  if (DAT_0050c890 == 0) {
    uVar8 = *(uint *)(iVar6 + 0x2a8) & 2;
    if ((uVar8 != 0) && (0.0 <= *(float *)(iVar6 + 0x2e0))) {
      if (*(float *)(iVar6 + 0x2dc) <= *(float *)(iVar6 + 0x2e0)) {
        fVar4 = *(float *)(iVar6 + 0x2dc) - (float)_DAT_00e22a40 * -5.0;
        *(float *)(iVar6 + 0x2dc) = fVar4;
        if (*(float *)(iVar6 + 0x2e0) < fVar4) {
          *(undefined4 *)(iVar6 + 0x2dc) = *(undefined4 *)(iVar6 + 0x2e0);
          goto LAB_00453abc;
        }
      }
      else {
        fVar4 = *(float *)(iVar6 + 0x2dc) - (float)_DAT_00e22a40 * 5.0;
        *(float *)(iVar6 + 0x2dc) = fVar4;
        if (fVar4 < *(float *)(iVar6 + 0x2e0)) {
          *(undefined4 *)(iVar6 + 0x2dc) = *(undefined4 *)(iVar6 + 0x2e0);
LAB_00453abc:
          *(undefined4 *)(iVar6 + 0x2e0) = 0xbf800000;
        }
      }
    }
    DAT_004c3ee4 = __ftol();
    DAT_0050c89c = uVar8;
  }
  uVar8 = DAT_0050c89c;
  uVar5 = DAT_004c3ee4;
  if ((((0.0 <= fVar10) || (0.0 <= fVar1)) || (0.0 <= local_10)) || (0.0 <= param_1)) {
    if ((DAT_0050ca14 == 0) || ((DAT_00dfb318 & 1) == 0)) {
      uVar9 = *(undefined4 *)(iVar6 + 0x74);
    }
    else {
      uVar9 = *(undefined4 *)(iVar6 + 0x74);
      fVar10 = 120.0;
    }
    FUN_00483590(uVar9,fVar10,0xbf800000,local_10,param_1,fVar1);
  }
  uVar2 = *(uint *)(iVar6 + 0x2a8);
  if ((uVar2 & 0x10) != 0) {
    *(undefined4 *)(iVar6 + 700) = *(undefined4 *)(iVar6 + 0x2c8);
    *(undefined4 *)(iVar6 + 0x2c0) = *(undefined4 *)(iVar6 + 0x2cc);
    *(undefined4 *)(iVar6 + 0x2c4) = *(undefined4 *)(iVar6 + 0x2d0);
    goto LAB_00453cc7;
  }
  iVar3 = *(int *)(iVar6 + 0x2c8);
  if (iVar3 < *(int *)(iVar6 + 700)) {
    iVar7 = __ftol();
    *(int *)(iVar6 + 700) = iVar7;
    if (iVar7 < iVar3) {
LAB_00453bfd:
      *(int *)(iVar6 + 700) = iVar3;
    }
  }
  else if (*(int *)(iVar6 + 700) < iVar3) {
    iVar7 = __ftol();
    *(int *)(iVar6 + 700) = iVar7;
    if (iVar3 < iVar7) goto LAB_00453bfd;
  }
  iVar3 = *(int *)(iVar6 + 0x2cc);
  if (iVar3 < *(int *)(iVar6 + 0x2c0)) {
    iVar7 = __ftol();
    *(int *)(iVar6 + 0x2c0) = iVar7;
    if (iVar7 < iVar3) {
LAB_00453c5f:
      *(int *)(iVar6 + 0x2c0) = iVar3;
    }
  }
  else if (*(int *)(iVar6 + 0x2c0) < iVar3) {
    iVar7 = __ftol();
    *(int *)(iVar6 + 0x2c0) = iVar7;
    if (iVar3 < iVar7) goto LAB_00453c5f;
  }
  iVar3 = *(int *)(iVar6 + 0x2d0);
  if (iVar3 < *(int *)(iVar6 + 0x2c4)) {
    iVar7 = __ftol();
    *(int *)(iVar6 + 0x2c4) = iVar7;
    if (iVar3 <= iVar7) goto LAB_00453cc7;
  }
  else {
    if (iVar3 <= *(int *)(iVar6 + 0x2c4)) goto LAB_00453cc7;
    iVar7 = __ftol();
    *(int *)(iVar6 + 0x2c4) = iVar7;
    if (iVar7 <= iVar3) goto LAB_00453cc7;
  }
  *(int *)(iVar6 + 0x2c4) = iVar3;
LAB_00453cc7:
  if (uVar8 == 0) {
    FUN_0044e0c0(0);
  }
  else {
    *(uint *)(iVar6 + 0x2a8) = uVar2 & 0xffffffef;
    FUN_0044e0c0(1);
    FUN_0044e0e0(uVar5,1000,*(undefined4 *)(iVar6 + 700),*(undefined4 *)(iVar6 + 0x2c0),
                 *(undefined4 *)(iVar6 + 0x2c4),0xff);
    FUN_00483a60(*(undefined4 *)(iVar6 + 700),*(undefined4 *)(iVar6 + 0x2c0),
                 *(undefined4 *)(iVar6 + 0x2c4));
  }
  FUN_00466e40(iVar6 + 0x50,*(undefined4 *)(iVar6 + 0x2a8));
  if (DAT_0050ccf0 != 0) {
    if ((*(byte *)(iVar6 + 0x2a8) & 4) == 0) {
      (&DAT_00e226fe)[*(int *)(iVar6 + 0x74) * 6] = 1;
    }
    else {
      (&DAT_00e226fe)[*(int *)(iVar6 + 0x74) * 6] = 0;
    }
    if (uVar8 != 0) {
      (&DAT_00e226f4)[*(int *)(iVar6 + 0x74) * 6] = 1;
      (&DAT_00e226f6)[*(int *)(iVar6 + 0x74) * 6] = (short)uVar5;
      (&DAT_00e226f8)[*(int *)(iVar6 + 0x74) * 6] = *(undefined2 *)(iVar6 + 700);
      (&DAT_00e226fa)[*(int *)(iVar6 + 0x74) * 6] = *(undefined2 *)(iVar6 + 0x2c0);
      (&DAT_00e226fc)[*(int *)(iVar6 + 0x74) * 6] = *(undefined2 *)(iVar6 + 0x2c4);
      return;
    }
    (&DAT_00e226f4)[*(int *)(iVar6 + 0x74) * 6] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00453e00(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined local_70 [20];
  undefined4 local_5c;
  undefined local_58 [24];
  undefined local_40 [64];

  if (*(int *)(param_1 + 0x7c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x74) < 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0xf4);
  if (iVar3 == 0) goto LAB_00453efe;
  if (DAT_0050ca3c == 0) {
    if (((*(byte *)(iVar3 + 0x60) & 0x20) != 0) ||
       (_DAT_0050c8a0 = _DAT_0050c8a0 - (float)_DAT_00e22a40, 0.0 < _DAT_0050c8a0))
    goto LAB_00453efe;
    iVar2 = FUN_004816b0();
    _DAT_0050c8a0 = (float)iVar2 * 4.656613e-10 * 7.0 - -3.0;
    FUN_004816b0();
    iVar2 = __ftol();
    DAT_0050c8a4 = iVar2 % 7;
    *(int *)(param_1 + 0x7c) = (int)*(short *)(&DAT_004c3ef0 + DAT_0050c8a4 * 2);
    uVar1 = *(uint *)(iVar3 + 0x60) & 0xffefffff;
    *(uint *)(iVar3 + 0x60) = uVar1;
    if (DAT_0050c8a4 != 6) goto LAB_00453efe;
    uVar1 = uVar1 | 0x100000;
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = 4;
    uVar1 = *(uint *)(iVar3 + 0x60) & 0xffefffff;
  }
  *(uint *)(iVar3 + 0x60) = uVar1;
LAB_00453efe:
  *(undefined4 *)(param_1 + 0x2b8) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x2b4) = 0x3f000000;
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 1:
  case 2:
    FUN_00452aa0(param_1);
    break;
  case 4:
  case 5:
    FUN_004528b0(param_1);
    break;
  case 6:
    FUN_004533a0(param_1);
    break;
  case 7:
    FUN_00451ef0(param_1);
    break;
  case 8:
  case 9:
    FUN_00452600(param_1);
  }
  FUN_00430b80(param_1 + 0x20,local_70);
  FUN_00481220(local_70,param_1 + 0x138,local_40,local_58,local_5c);
  FUN_0044bb10(param_1 + 0x20,local_40);
  iVar3 = FUN_004294e0(*(undefined4 *)(param_1 + 0x78));
  if (iVar3 != 0) {
    if (DAT_0050ca3c == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x2ac);
      uVar4 = *(undefined4 *)(param_1 + 0x74);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x74);
      uVar5 = 0xffffff00;
    }
    uVar4 = FUN_004318d0(uVar4,4,uVar5);
    FUN_00431a10(uVar4);
    uVar4 = FUN_004318d0(*(undefined4 *)(param_1 + 0x74),3,*(undefined4 *)(param_1 + 0x2ac));
    FUN_00431a10(uVar4);
    FUN_004538d0(param_1);
    if ((*(byte *)(param_1 + 0x2a8) & 8) != 0) {
      FUN_0042d440();
      FUN_004535c0(param_1);
      return;
    }
    FUN_0042d450();
    FUN_004535c0(param_1);
  }
  return;
}



void FUN_00454060(int param_1)

{
  char local_40 [64];

  if (param_1 != 0) {
    local_40[0] = '\0';
    if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
      FUN_0049eb80(local_40,s__sZOn_004c3f90,local_40);
    }
    if ((*(byte *)(param_1 + 0x2c) & 2) != 0) {
      FUN_0049eb80(local_40,s__sZOff_004c3f88,local_40);
    }
    if ((*(byte *)(param_1 + 0x2c) & 4) != 0) {
      FUN_0049eb80(local_40,s__sFast_004c3f80,local_40);
    }
    if ((*(byte *)(param_1 + 0x2c) & 8) != 0) {
      FUN_0049eb80(local_40,s__sSlow_004c3f78,local_40);
    }
    if ((*(byte *)(param_1 + 0x2c) & 0x10) != 0) {
      FUN_0049eb80(local_40,s__sSwst_004c3f70,local_40);
    }
    if ((*(byte *)(param_1 + 0x2c) & 0x20) != 0) {
      FUN_0049eb80(local_40,s__sSlip_004c3f68,local_40);
    }
    if ((*(byte *)(param_1 + 0x2c) & 0x40) != 0) {
      FUN_0049eb80(local_40,s__sDust_004c3f60,local_40);
    }
    if ((*(byte *)(param_1 + 0x2c) & 0x80) != 0) {
      FUN_0049eb80(local_40,s__sSnow_004c3f58,local_40);
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x100) != 0) {
      FUN_0049eb80(local_40,s__sWet_004c3f50,local_40);
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x200) != 0) {
      FUN_0049eb80(local_40,s__sRuff_004c3f48,local_40);
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x400) != 0) {
      FUN_0049eb80(local_40,s__sSwmp_004c3f40,local_40);
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x800) != 0) {
      FUN_0049eb80(local_40,s__sNSnw_004c3f38,local_40);
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x1000) != 0) {
      FUN_0049eb80(local_40,s__sMirr_004c3f30,local_40);
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x2000) != 0) {
      FUN_0049eb80(local_40,s__sLava_004c3f28,local_40);
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x4000) != 0) {
      FUN_0049eb80(local_40,s__sFall_004c3f20,local_40);
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x8000) != 0) {
      FUN_0049eb80(local_40,s__sSoft_004c3f18,local_40);
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x10000) != 0) {
      FUN_0049eb80(local_40,s__sNRSp_004c3f10,local_40);
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x20000) != 0) {
      FUN_0049eb80(local_40,s__sFlat_004c3f08,local_40);
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x20000000) != 0) {
      FUN_0049eb80(local_40,s__sSide_004c3f00,local_40);
    }
    if (local_40[0] != '\0') {
      FUN_00450560(0x14,200,local_40);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004542e0(int param_1)

{
  float fVar1;

  FUN_00453e00(param_1);
  if (0.0 < *(float *)(param_1 + 0x3a4)) {
    fVar1 = *(float *)(param_1 + 0x39c) + *(float *)(param_1 + 0x3a0) * (float)_DAT_00e22a40;
    *(float *)(param_1 + 0x39c) = fVar1;
    if ((*(float *)(param_1 + 0x3a4) < fVar1) || (*(float *)(param_1 + 0x3a4) < -fVar1)) {
      *(float *)(param_1 + 0x3a0) = -*(float *)(param_1 + 0x3a0);
      if (*(float *)(param_1 + 0x39c) <= 0.0) {
        *(float *)(param_1 + 0x39c) = -*(float *)(param_1 + 0x3a4);
      }
      else {
        *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(param_1 + 0x3a4);
      }
    }
    *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x39c);
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x39c) * 0.5 + *(float *)(param_1 + 0x58);
    FUN_00426c80(7,7,0x3e800000,0x3f800000,1);
  }
  if (((*(int *)(param_1 + 0x7c) != 0) && (-1 < *(int *)(param_1 + 0x74))) && (DAT_0050c88c != 0)) {
    FUN_00454060(*(undefined4 *)(param_1 + 0x2a4));
  }
  return;
}



void FUN_00454bc0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;

  (&DAT_00e29900)[param_3] = 0;
  (&DAT_00e29160)[param_3] = 0;
  (&DAT_00e2afa0)[param_3] = 0;
  puVar1 = (undefined4 *)FUN_00448780(param_1);
  if (-1 < param_2) {
    uVar2 = FUN_00448780(param_2);
    FUN_00448c70(puVar1,uVar2);
  }
  if (puVar1 != (undefined4 *)0x0) {
    if (0x96 < param_3) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    (&DAT_00e29900)[param_3] = puVar1;
    (&DAT_00e29160)[param_3] = *puVar1;
    if (param_4 != 0) {
      uVar2 = FUN_00448bd0(puVar1);
      (&DAT_00e2afa0)[param_3] = uVar2;
    }
  }
  FUN_00483fc0(&DAT_00e2a660);
  FUN_004337d0();
  return;
}



void FUN_00454c60(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_00e29160;
  for (iVar1 = 0x97; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00e29900;
  for (iVar1 = 0x97; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_004258e0();
  return;
}



void FUN_00454c90(void)

{
  undefined4 uVar1;
  int iVar2;

  FUN_004258e0();
  iVar2 = 0;
  do {
    if (*(int *)((int)&DAT_00e29900 + iVar2) != 0) {
      uVar1 = FUN_00448bd0(*(int *)((int)&DAT_00e29900 + iVar2));
      *(undefined4 *)((int)&DAT_00e2afa0 + iVar2) = uVar1;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x25c);
  return;
}



void FUN_00454cc0(void)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;

  ppiVar3 = (int **)&DAT_00e29914;
  do {
    piVar1 = *ppiVar3;
    if (piVar1 != (int *)0x0) {
      piVar2 = &DAT_00e29160;
      do {
        if (*piVar2 == *piVar1) {
          *piVar2 = 0;
        }
        piVar2 = piVar2 + 1;
      } while ((int)piVar2 < 0xe293bc);
      *ppiVar3 = (int *)0x0;
    }
    ppiVar3 = ppiVar3 + 1;
  } while ((int)ppiVar3 < 0xe29b5c);
  FUN_004258e0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00454d10(void)

{
  FUN_00431b20(&DAT_00e2a660,0x5064);
  _DAT_00e2a674 = 0x97;
  _DAT_00e2a678 = &DAT_00e29160;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00454d40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined local_100 [256];

  DAT_0050c530 = 1;
  if (param_1 == 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (*(uint *)(param_1 + 0x14) == 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    DAT_0050c468 = 0;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
    DAT_004bfedc = 0xffffffff;
    DAT_004c4000 = 1;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x5c) = 1;
    if (((DAT_0050c944 != 0) || (*(int *)(param_1 + 0x38) == 3)) ||
       ((*(int *)(param_1 + 0xc) != 3 && (*(int *)(param_1 + 8) != 3)))) {
      if (*(int *)(param_1 + 8) != 0) {
        FUN_004586e0(param_1);
        FUN_00459150(param_1);
      }
      _DAT_00e295d8 = 0;
      DAT_00e295dc = 0;
      DAT_00e295e0 = 0;
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 4;
    }
  }
  if (DAT_0050c968 != 0) {
    FUN_00414e60(DAT_0050c968,0);
  }
  DAT_0050c968 = 0;
  if (DAT_004d5e00 != 0) goto LAB_00454e83;
  switch(param_2) {
  case 3:
    uVar2 = 0x84;
    break;
  case 4:
    uVar2 = 0x87;
    break;
  default:
    goto switchD_00454e2b_caseD_5;
  case 7:
    uVar2 = 0x85;
    break;
  case 8:
    uVar2 = 0x88;
    break;
  case 9:
    DAT_004d6b6c = 1;
    uVar2 = 0x81;
    break;
  case 0xc:
    uVar2 = 0x82;
    break;
  case 0xd:
    uVar2 = 0x83;
  }
  DAT_0050c968 = FUN_00414d90(0,uVar2);
switchD_00454e2b_caseD_5:
  if (DAT_0050c968 != 0) {
    FUN_00414e60(DAT_0050c968,1);
  }
LAB_00454e83:
  DAT_004d6b48 = 0;
  DAT_004d6b40 = 0;
  DAT_00ec8748 = 0;
  DAT_00ec8744 = 0;
  FUN_004336f0(param_1);
  iVar1 = FUN_0041d6b0();
  if ((iVar1 != 0) && (iVar1 = FUN_0041d6c0(), iVar1 != 0)) {
    if (param_2 == 3) {
      DAT_00ea05a0 = 3;
      pcVar3 = s_Setting_hanger_state_to_HANGAR_S_004c4680;
    }
    else if (param_2 == 0xc) {
      DAT_00ea05a0 = 0xc;
      pcVar3 = s_Setting_hanger_state_to_HANGAR_S_004c46b0;
    }
    else if (param_2 == 0xd) {
      DAT_00ea05a0 = 0xd;
      pcVar3 = s_Setting_hanger_state_to_HANGAR_S_004c46e4;
    }
    else {
      DAT_00ea05a0 = 0x13;
      pcVar3 = s_Setting_hanger_state_to_HANGAR_S_004c4718;
    }
    FUN_00426910(pcVar3);
    FUN_0041e5a0();
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    pcVar3 = s_LEGAL_004c4678;
    break;
  case 1:
    pcVar3 = s_SPLASH_004c4670;
    break;
  case 2:
    pcVar3 = s_ENTER_NAME_004c4664;
    break;
  case 3:
    pcVar3 = s_MAIN_MENU_004c4650;
    break;
  case 4:
    pcVar3 = s_JUNKYARD_004c4644;
    break;
  case 5:
    pcVar3 = s_POST_RACE_INFO_004c4634;
    break;
  default:
    pcVar3 = s__Unknown_state__004c45dc;
    break;
  case 7:
    pcVar3 = s_WATTO_004c465c;
    break;
  case 8:
    pcVar3 = s_LOOK_AT_VEHICLE_004c4620;
    break;
  case 9:
    pcVar3 = s_SELECT_VEHICLE_004c4610;
    break;
  case 0xc:
    pcVar3 = s_SELECT_PLANET_004c4600;
    break;
  case 0xd:
    pcVar3 = s_SELECT_TRACK_004c45f0;
  }
  FUN_0049eb80(local_100,pcVar3);
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
  case 2:
  case 5:
  case 9:
  case 0xc:
  case 0xd:
    FUN_00427690(0,0x80000000);
    break;
  default:
    FUN_004276a0(0,0x80000000);
  }
  if (*(int *)(param_1 + 8) == 4) {
    if (*(int *)(param_1 + 0x3c) != 1) {
      FUN_00427690(0,0x20);
      FUN_004276a0(0,1);
    }
  }
  else if ((*(int *)(param_1 + 8) == 7) &&
          ((*(int *)(param_1 + 0x3c) != 0 || (*(int *)(param_1 + 0xc) == 3)))) {
    FUN_00427690(0,0x20);
    FUN_00427690(0,1);
  }
  DAT_00e2a67c = *(undefined4 *)(param_1 + 8);
  if (DAT_004bfecc != -1) {
    *(int *)(param_1 + 0x10) = DAT_004bfecc;
  }
  return;
}

#endif
