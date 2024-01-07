#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"
#if 0
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045b5d0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;

  cVar1 = *(char *)(param_1 + 0x70);
  DAT_004c3fe8 = 0xffffffff;
  iVar2 = 0;
  DAT_004c3fec = 0xffffffff;
  _DAT_004c3ff0 = 0xffffffff;
  _DAT_004c3ff4 = 0xffffffff;
  if (0 < cVar1) {
    piVar3 = &DAT_004c3fe8;
    do {
      *piVar3 = iVar2;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < cVar1);
  }
  return;
}



undefined4 * FUN_0045b610(int param_1,int *param_2)

{
  undefined uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined1 *local_54;
  int local_50 [20];

  if (param_2 != (int *)0x0) {
    puVar2 = &DAT_00e29bc4;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0x22;
    } while ((int)puVar2 < 0xe2a664);
    iVar5 = (int)*(char *)(param_1 + 0x70);
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if ('\0' < *(char *)(param_1 + 0x72)) {
      param_2 = local_50;
      local_54 = &DAT_00e35a60;
      iVar5 = 0;
      piVar7 = &DAT_00e29bc4;
      do {
        uVar1 = FUN_0041c4d0(iVar5);
        *(undefined *)(iVar5 + 0x73 + param_1) = uVar1;
        piVar7[-1] = iVar5;
        *param_2 = iVar5;
        iVar3 = FUN_0041d6c0();
        if (iVar3 == 0) {
          if (iVar5 == DAT_004eb3b4) {
            *piVar7 = 0x4c6f636c;
            piVar7[2] = (int)local_54;
          }
          else {
            *piVar7 = 0x52454d4f;
            piVar7[2] = 0;
          }
        }
        else if (iVar5 == DAT_004eb3b4) {
          *piVar7 = 0x4c6f636c;
          piVar7[2] = (int)local_54;
          FUN_0041de50(iVar5,*piVar7);
        }
        else {
          iVar3 = FUN_00420f70(iVar5);
          piVar7[2] = 0;
          iVar3 = (-(uint)(iVar3 != 0) & 0x11040406) + 0x41414949;
          *piVar7 = iVar3;
          FUN_0041de50(iVar5,iVar3);
        }
        *(undefined *)(piVar7 + 3) = 0;
        *(undefined *)((int)piVar7 + 0xd) = 0;
        piVar7[4] = iVar5;
        iVar6 = iVar5 + 1;
        piVar7[5] = (int)(&DAT_004c2700 + *(char *)(iVar5 + 0x73 + param_1) * 0x34);
        local_54 = local_54 + 0x50;
        piVar8 = (int *)(&DAT_004c2bb0 + *(char *)(iVar5 + 0x73 + param_1) * 0x3c);
        piVar9 = piVar7 + 6;
        for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        }
        param_2 = param_2 + 1;
        iVar5 = iVar6;
        piVar7 = piVar7 + 0x22;
      } while (iVar6 < *(char *)(param_1 + 0x72));
    }
    iVar5 = FUN_0045bab0(param_1);
    iVar3 = 0;
    if ('\0' < *(char *)(param_1 + 0x72)) {
      puVar4 = &DAT_00e29bc8;
      do {
        if (iVar5 == iVar3) {
          uVar10 = *puVar4 | 0x20;
        }
        else {
          uVar10 = *puVar4 & 0xffffffdf;
        }
        *puVar4 = uVar10;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 0x22;
      } while (iVar3 < *(char *)(param_1 + 0x72));
    }
    FUN_00411370();
    return &DAT_00e29bc0;
  }
  return &DAT_00e29bc0;
}



undefined4 * FUN_0045b7d0(int param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  undefined uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined *puVar13;
  undefined1 *local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined local_5a;
  undefined4 local_58;
  undefined2 local_54;
  undefined local_52;
  int local_50 [20];

  uVar9 = 0xfffffff;
  if (param_2 != (int *)0x0) {
    iVar7 = (int)*(char *)(param_1 + 0x70);
    if (0 < iVar7) {
      puVar6 = &DAT_00e35a94;
      do {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 0x14;
        uVar9 = uVar9 | uVar3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (*(int *)(param_1 + 100) == 2) {
      FUN_004816b0();
      uVar5 = __ftol();
      *(undefined *)(param_1 + 0x73) = uVar5;
    }
    *(undefined *)(param_1 + 0x70) = 1;
    iVar7 = 1;
    if ('\x01' < *(char *)(param_1 + 0x72)) {
      do {
        bVar4 = false;
        FUN_004816b0();
        uVar5 = __ftol();
        *(undefined *)(iVar7 + 0x73 + param_1) = uVar5;
        if ((iVar7 == 1) &&
           (*(char *)(param_1 + 0x73) != (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc])) {
          *(undefined *)(param_1 + 0x74) = (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc];
        }
        else {
          iVar8 = 0;
          if (0 < iVar7) {
            bVar1 = *(byte *)(iVar7 + 0x73 + param_1);
            do {
              if (bVar1 == *(byte *)(iVar8 + 0x73 + param_1)) {
                bVar4 = true;
              }
              if ((1 << (bVar1 & 0x1f) & uVar9) == 0) {
                bVar4 = true;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar7);
          }
        }
      } while ((bVar4) || (iVar7 = iVar7 + 1, iVar7 < *(char *)(param_1 + 0x72)));
    }
    iVar7 = 0;
    if ('\0' < *(char *)(param_1 + 0x72)) {
      param_2 = local_50;
      local_64 = &DAT_00e35a60;
      piVar10 = &DAT_00e29bc4;
      do {
        piVar10[-1] = iVar7;
        cVar2 = *(char *)(param_1 + 0x70);
        *param_2 = iVar7;
        *piVar10 = ((cVar2 <= iVar7) - 1 & 0xb2e1a23) + 0x41414949;
        if (*(int *)(param_1 + 100) != 0) {
          *piVar10 = 0x41414949;
        }
        *(undefined *)(piVar10 + 3) = 0;
        *(undefined *)((int)piVar10 + 0xd) = 0;
        if (*piVar10 == 0x4c6f636c) {
          piVar10[2] = (int)local_64;
        }
        else {
          piVar10[2] = 0;
        }
        piVar10[4] = iVar7;
        piVar10[5] = (int)(&DAT_004c2700 + *(char *)(iVar7 + 0x73 + param_1) * 0x34);
        if (*piVar10 == 0x41414949) {
          piVar11 = &DAT_004c3114;
          piVar12 = piVar10 + 6;
          for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = *piVar11;
            piVar11 = piVar11 + 1;
            piVar12 = piVar12 + 1;
          }
          piVar10[0x10] = *(int *)(&DAT_004c2bd8 + *(char *)(iVar7 + 0x73 + param_1) * 0x3c);
          piVar10[0x12] = *(int *)(&DAT_004c2be0 + *(char *)(iVar7 + 0x73 + param_1) * 0x3c);
          piVar10[0x14] = *(int *)(&DAT_004c2be8 + *(char *)(iVar7 + 0x73 + param_1) * 0x3c);
        }
        else {
          if (piVar10[2] == 0) {
            local_60 = 0xffffffff;
            local_58 = 0;
            local_5c = 0xffff;
            local_54 = 0;
            local_5a = 0xff;
            local_52 = 0;
          }
          else {
            iVar8 = 0;
            puVar13 = (undefined *)(piVar10[2] + 0x48);
            do {
              *(undefined *)((int)&local_58 + iVar8) = puVar13[-7];
              *(undefined *)((int)&local_60 + iVar8) = *puVar13;
              iVar8 = iVar8 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar8 < 7);
          }
          cVar2 = *(char *)(iVar7 + 0x73 + param_1);
          FUN_00449d00(piVar10 + 6,&DAT_004c2bb0 + cVar2 * 0x3c,&local_58,&local_60);
          FUN_00449330(&DAT_00e2aee0,&DAT_004c2bb0 + cVar2 * 0x3c);
          FUN_00449330(&DAT_00e2aec0,piVar10 + 6);
        }
        iVar7 = iVar7 + 1;
        param_2 = param_2 + 1;
        piVar10 = piVar10 + 0x22;
        local_64 = local_64 + 0x50;
      } while (iVar7 < *(char *)(param_1 + 0x72));
    }
    iVar7 = FUN_0045bab0(param_1);
    iVar8 = 0;
    if ('\0' < *(char *)(param_1 + 0x72)) {
      puVar6 = &DAT_00e29bc8;
      do {
        if (iVar7 == iVar8) {
          uVar9 = *puVar6 | 0x20;
        }
        else {
          uVar9 = *puVar6 & 0xffffffdf;
        }
        *puVar6 = uVar9;
        iVar8 = iVar8 + 1;
        puVar6 = puVar6 + 0x22;
      } while (iVar8 < *(char *)(param_1 + 0x72));
    }
    FUN_00411370();
    return &DAT_00e29bc0;
  }
  return &DAT_00e29bc0;
}



int FUN_0045bab0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;

  iVar1 = -1;
  if (*(int *)(param_1 + 100) == 0) {
    iVar5 = (int)*(char *)(param_1 + 0x72);
    iVar2 = 0;
    if (0 < iVar5) {
      piVar4 = &DAT_00e29bc4;
      do {
        if ((*(char *)(iVar2 + 0x73 + param_1) == (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc])
           && (*piVar4 == 0x41414949)) {
          iVar1 = iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 0x22;
      } while (iVar2 < iVar5);
    }
    if (iVar1 == -1) {
      piVar4 = &DAT_00e29bc4;
      iVar2 = iVar1;
      iVar3 = 0;
      do {
        iVar1 = iVar3;
        if (iVar5 <= iVar1) {
          return iVar2;
        }
        iVar3 = iVar1;
        if (*piVar4 != 0x41414949) {
          iVar3 = iVar1 + 1;
          piVar4 = piVar4 + 0x22;
          iVar1 = iVar2;
        }
        iVar2 = iVar1;
      } while (iVar1 == -1);
    }
  }
  else {
    iVar2 = 0;
    if (0 < *(char *)(param_1 + 0x72)) {
      do {
        if (*(char *)(iVar2 + 0x73 + param_1) == (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc]) {
          iVar1 = iVar2;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(char *)(param_1 + 0x72));
    }
    if (iVar1 == -1) {
      return 0;
    }
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045bb60(void)

{
  _DAT_004c3fd8 = 0xffffffff;
  _DAT_004c3fdc = 0xffffffff;
  _DAT_004c3fe0 = 0xffffffff;
  _DAT_004c3fe4 = 0xffffffff;
  return;
}



void FUN_0045bd90(int param_1)

{
  int iVar1;

  iVar1 = 0;
  *(undefined *)(param_1 + 0x6c) = 1;
  *(undefined *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined *)(param_1 + 0x6d) = 0;
  *(undefined *)(param_1 + 0x6e) = 0;
  *(undefined *)(param_1 + 0x6f) = 0;
  *(undefined *)(param_1 + 0x72) = 0xc;
  *(undefined *)(param_1 + 0x8f) = 3;
  *(undefined *)(param_1 + 0x90) = 2;
  *(undefined *)(param_1 + 0x91) = 2;
  do {
    *(char *)(iVar1 + 0x73 + param_1) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x17);
  return;
}



void FUN_0045bde0(int param_1,short param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = (int)param_2;
  iVar2 = *(int *)(param_1 + 0x34);
  bVar1 = false;
  iVar4 = iVar2 + iVar3;
  if (param_3 == 0) {
    if (iVar4 < 0) {
      return;
    }
    if (0x27 < iVar4) {
      return;
    }
    if ((&DAT_004c4028)[iVar4 * 0x10] != (&DAT_004c4028)[iVar2 * 0x10]) {
      return;
    }
  }
  iVar4 = iVar4 - iVar3;
  do {
    iVar4 = iVar4 + iVar3;
    if (iVar4 < 0) {
      iVar4 = 0x27;
    }
    else if (0x27 < iVar4) {
      iVar4 = 0;
    }
  } while ((&DAT_004c4028)[iVar4 * 0x10] != (&DAT_004c4028)[iVar2 * 0x10]);
  iVar3 = iVar4 * 0x20;
  if (*(int *)(iVar3 + 0x4c402c) != 0) {
    iVar2 = FUN_0042f7f0(&DAT_004c4010 + iVar3,&DAT_004c4010 + iVar2 * 0x20);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_0042f7f0(&DAT_004c401c + iVar3,&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20),
       iVar2 == 0)) {
      bVar1 = true;
      FUN_0045c010(&DAT_004c4010 + iVar3,&DAT_004c401c + iVar3,1,0,0);
    }
  }
  *(int *)(param_1 + 0x34) = iVar4;
  if (bVar1) {
    FUN_0045bf20(param_1);
  }
  return;
}



void FUN_0045bee0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  *(int *)(param_1 + 0x34) = param_2;
  FUN_0045c010(&DAT_004c4010 + param_2 * 0x20,&DAT_004c401c + param_2 * 0x20,1,0,param_4);
  if (param_3 != -1) {
    DAT_004bfedc = param_3;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045bf20(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_24;
  float local_20;
  undefined local_18 [12];
  undefined local_c [12];

  iVar1 = (int)param_1;
  FUN_0042f7d0(local_c,&DAT_004c4010 + *(int *)((int)param_1 + 0x34) * 0x20);
  FUN_0042f7d0(&local_24,&DAT_004c401c + *(int *)((int)param_1 + 0x34) * 0x20);
  iVar3 = 0;
  if ('\0' < *(char *)((int)param_1 + 0x70)) {
    param_1 = &DAT_00e29970;
    do {
      FUN_0045cb80(iVar1,iVar3);
      iVar2 = FUN_00450b30(0x456c6d6f,iVar3 + 0x1c);
      if (iVar2 != 0) {
        FUN_0044afb0(*param_1,local_18);
        fVar4 = (float10)FUN_0042f560(_DAT_00e298a0 - local_24,local_20 - _DAT_00e298a4);
        FUN_00468800(iVar3 + 0x1c,0x14,local_18,&DAT_00e298a0,*(undefined4 *)(iVar2 + 0x68),
                     (float)fVar4);
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (iVar3 < *(char *)(iVar1 + 0x70));
  }
  return;
}



void FUN_0045c010(undefined4 param_1,undefined4 param_2,short param_3,int param_4,int param_5)

{
  undefined local_c [12];

  if (param_5 == 0) {
    FUN_0044bb10(&DAT_00e2b3e0,&DAT_00e2af60);
    FUN_0044bb10(&DAT_00e2ae80,&DAT_00e298c0);
  }
  FUN_0042f7d0(&DAT_00e29b90,param_1);
  FUN_0042f7d0(&DAT_00e2b470,param_2);
  DAT_0050c930 = param_3;
  if ((param_3 == 3) && (param_4 != 0)) {
    FUN_0042f860(local_c,&DAT_00e298f0,&DAT_00e2af90);
    FUN_0042f830(&DAT_00e29b90,&DAT_00e2b470,local_c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045c0b0(int param_1)

{
  float fVar1;
  undefined local_18 [12];
  undefined local_c [12];

  FUN_0042f7d0(local_18,&DAT_00e298f0);
  FUN_0042f7d0(local_c,&DAT_00e2af90);
  if (DAT_004c4004 != 0) {
    _DAT_0050c8b4 = _DAT_00e2b470 - _DAT_00e2b410;
    _DAT_0050c8c4 = _DAT_00e2b474 - _DAT_00e2b414;
    _DAT_0050c8e4 = _DAT_00e2b478 - _DAT_00e2b418;
    _DAT_0050c8b8 = _DAT_00e29b90 - _DAT_00e2aeb0;
    _DAT_0050c8b0 = _DAT_00e29b94 - _DAT_00e2aeb4;
    _DAT_0050c8bc = _DAT_00e29b98 - _DAT_00e2aeb8;
    _DAT_0050c8e0 = 0.0;
    DAT_0050c8c0 = 0.5;
    if ((((_DAT_0050c8b4 < 500.0) && (-500.0 < _DAT_0050c8b4)) && (_DAT_0050c8c4 < 500.0)) &&
       ((-500.0 < _DAT_0050c8c4 && (*(int *)(param_1 + 0x38) == 1)))) {
      DAT_0050c8c0 = 0.3;
    }
    DAT_004c4004 = 0;
  }
  if (DAT_0050c8c0 <= _DAT_0050c8e0) {
    DAT_0050c930 = 5;
    if (*(int *)(param_1 + 8) == 8) {
      DAT_0050c930 = 0;
    }
    DAT_004c4004 = 1;
    if (DAT_0050c940 != 0) {
      DAT_0050c940 = 0;
      DAT_0050c934 = (uint)(DAT_0050c934 == 0);
      if (((*(int *)(param_1 + 0x38) == 1) && (*(int *)(param_1 + 0x34) != 3)) &&
         (DAT_0050c934 != 0)) {
        DAT_0050c468 = 1;
      }
    }
    FUN_0044bb10(&DAT_00e2b3e0,&DAT_00e2af60);
    FUN_0044bb10(&DAT_00e2ae80,&DAT_00e298c0);
    if ((DAT_004bfedc != -1) && (DAT_0050c468 == 0)) {
      DAT_0050c934 = 0;
      return;
    }
  }
  else {
    _DAT_0050c8e0 = _DAT_0050c8e0 + _DAT_00e22a50;
    if (DAT_0050c8c0 < _DAT_0050c8e0) {
      _DAT_0050c8e0 = DAT_0050c8c0;
    }
    fVar1 = _DAT_0050c8e0 / DAT_0050c8c0;
    _DAT_00e2af90 = (_DAT_00e2b470 - _DAT_00e2b410) * fVar1 + _DAT_00e2b410;
    _DAT_00e2af94 = (_DAT_00e2b474 - _DAT_00e2b414) * fVar1 + _DAT_00e2b414;
    _DAT_00e2af98 = (_DAT_00e2b478 - _DAT_00e2b418) * fVar1 + _DAT_00e2b418;
    if (DAT_0050c930 != 3) {
      _DAT_00e298f0 = (_DAT_00e29b90 - _DAT_00e2aeb0) * fVar1 + _DAT_00e2aeb0;
      _DAT_00e298f4 = (_DAT_00e29b94 - _DAT_00e2aeb4) * fVar1 + _DAT_00e2aeb4;
      _DAT_00e298f8 = (_DAT_00e29b98 - _DAT_00e2aeb8) * fVar1 + _DAT_00e2aeb8;
      return;
    }
  }
  return;
}



void FUN_0045c3c0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined local_c [12];

  iVar1 = FUN_0042f7f0(&DAT_0050c998,&DAT_00e2b470);
  if (iVar1 == 0) {
    FUN_0042f7d0(&DAT_0050c998,&DAT_00e2b470);
    FUN_0042f860(local_c,&DAT_00e2af90,&DAT_00e298f0);
    fVar3 = (float10)FUN_0042f8c0(local_c);
    if ((float10)500.0 < fVar3) {
      FUN_0042f9b0(local_c);
      FUN_0042fa80(&DAT_00e2af90,&DAT_00e298f0,0x43fa0000,local_c);
    }
  }
  iVar1 = FUN_0045c560(param_1,&DAT_0050c994,&DAT_00e2b470,&DAT_00e2af90,&DAT_00e2b410,0x3fc00000);
  iVar2 = FUN_0045c560(param_1,&DAT_0050c990,&DAT_00e29b90,&DAT_00e298f0,&DAT_00e2aeb0,0x3f800000);
  if ((iVar2 != 0) && (iVar1 != 0)) {
    DAT_0050c930 = 5;
    DAT_004c400c = 1;
    if (*(int *)(param_1 + 8) == 8) {
      DAT_0050c930 = 0;
    }
    if (DAT_0050c940 != 0) {
      DAT_0050c934 = (uint)(DAT_0050c934 == 0);
      DAT_0050c940 = 0;
      if (((*(int *)(param_1 + 0x38) == 1) && (*(int *)(param_1 + 0x34) != 3)) &&
         (DAT_0050c934 != 0)) {
        DAT_0050c468 = 1;
      }
    }
    FUN_0044bb10(&DAT_00e2b3e0,&DAT_00e2af60);
    FUN_0044bb10(&DAT_00e2ae80,&DAT_00e298c0);
    if (((DAT_004bfedc != -1) && (DAT_0050c468 == 0)) && (DAT_0050c934 = 0, DAT_0050c944 == 0)) {
      FUN_00454d40(param_1,DAT_004bfedc);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4
FUN_0045c560(int param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            float param_6)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float local_44;
  float local_40;
  undefined local_3c [12];
  undefined local_30 [12];
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];

  pfVar5 = param_2;
  fVar1 = _DAT_00e22a50 * 60000.0;
  iVar2 = *(int *)(param_1 + 8);
  local_44 = *param_2;
  local_40 = 1600.0;
  if ((((iVar2 == 0x11) || (iVar2 == 0x12)) || ((iVar2 == 8 && (5.0 <= _DAT_0050c95c)))) ||
     ((iVar2 == 3 && (DAT_0050c944 == 0)))) {
    param_2 = (float *)(fVar1 * 0.2);
    local_40 = 320.0;
  }
  else {
    param_2 = (float *)fVar1;
    if (iVar2 == 0x10) {
      param_2 = (float *)(fVar1 * 0.05);
      local_40 = 80.0;
    }
  }
  FUN_0042f7d0(local_c,param_4);
  _DAT_0050c9a4 = 0;
  fVar3 = (float)param_2 * param_6;
  FUN_0042f860(local_30,param_3,param_5);
  fVar6 = (float10)FUN_0042f8c0(local_30);
  FUN_0042f860(local_24,param_5,param_4);
  FUN_0042f8c0(local_24);
  FUN_0042f860(local_3c,param_3,param_4);
  fVar7 = (float10)FUN_0042f8c0(local_3c);
  fVar1 = (float)fVar7;
  fVar4 = fVar3 * 6.0;
  if ((float)(fVar6 * (float10)0.5) < fVar3 * 6.0) {
    fVar4 = (float)(fVar6 * (float10)0.5);
  }
  if ((fVar1 < fVar4) || (fVar3 <= local_44)) {
    if (((fVar1 < fVar4) || (local_44 < fVar3)) && ((fVar1 < fVar4 && (1.0 < fVar1)))) {
      if ((DAT_004bfedc != -1) && (*(int *)(param_1 + 8) != 0x12)) {
        return 1;
      }
      fVar6 = (float10)FUN_00480670(fVar1 / (local_40 * param_6));
      local_44 = (float)(fVar6 * (float10)(local_40 * param_6));
    }
  }
  else {
    local_44 = local_44 - param_6 * _DAT_00e22a50 * -2000.0;
    if (fVar3 < local_44) {
      local_44 = fVar3;
    }
  }
  if (1.0 < fVar1) {
    FUN_0042f9b0(local_3c);
    FUN_0042fa80(param_4,param_4,local_44 * _DAT_00e22a50,local_3c);
    FUN_0042f860(local_18,param_3,param_4);
    fVar6 = (float10)FUN_0042f890(local_3c,local_18);
    if ((float10)0.0 <= fVar6) {
      *pfVar5 = local_44;
      return 0;
    }
  }
  FUN_0042f7d0(param_4,param_3);
  *pfVar5 = 0.0;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045c810(int param_1)

{
  int iVar1;
  float local_20;
  undefined local_1c [4];
  undefined local_18 [12];
  undefined local_c [12];

  if (DAT_0050c470 != 0) {
    DAT_0050c930 = 0;
    FUN_0042f7b0(&DAT_0050c9b0,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 8) == 8) {
    DAT_0050c930 = 0;
    return;
  }
  FUN_0042f7d0(local_c,&DAT_00e298f0);
  DAT_0050c9a8 = DAT_0050c9a8 - _DAT_00e22a50 * -40.0;
  if (360.0 < DAT_0050c9a8) {
    DAT_0050c9a8 = DAT_0050c9a8 - 360.0;
  }
  if ((DAT_004c400c == '\0') && (DAT_0050c9cc == '\x05')) {
    iVar1 = FUN_0042f7f0(&DAT_0050c9b0,&DAT_00e29b90);
    if (iVar1 != 0) {
      iVar1 = FUN_0042f7f0(&DAT_0050c9c0,&DAT_00e2b470);
      if (iVar1 != 0) goto LAB_0045c961;
    }
  }
  DAT_004c400c = '\0';
  FUN_0043e210();
  FUN_0044bb10(&DAT_00e29b60,&DAT_00e298c0);
  FUN_0044bb10(&DAT_00e2b440,&DAT_00e2af60);
  FUN_0042f7d0(&DAT_0050c9b0,&DAT_00e29b90);
  FUN_0042f7d0(&DAT_0050c9c0,&DAT_00e2b470);
  DAT_0050c9cc = '\x05';
  FUN_004816b0();
  iVar1 = __ftol();
  DAT_0050c9a8 = (float)iVar1 * 180.0;
LAB_0045c961:
  FUN_0042f380(DAT_0050c9a8,&local_20,local_1c);
  FUN_0042f7d0(local_18,&DAT_0050c9b0);
  FUN_0042fa80(local_18,local_18,local_20 * 8.0,&DAT_00e29b60);
  FUN_0042f7d0(&DAT_00e298f0,local_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045c9d0(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  undefined local_18 [12];
  undefined local_c [12];

  if (param_2 == 0) {
    FUN_0042f7d0(&DAT_00e2b470,&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20);
    FUN_0042f7d0(&DAT_00e29b90,&DAT_004c4010 + *(int *)(param_1 + 0x34) * 0x20);
  }
  else {
    if (DAT_004bfedc != -1) {
      FUN_0042f860(local_18,&DAT_00e2b470,&DAT_00e29b90);
      FUN_0042fa80(&DAT_00e2b470,&DAT_00e2b470,0x41200000,local_18);
    }
    FUN_0042fac0(&DAT_00e29b90,0x3eaaa64c,&DAT_00e29b90,0x3f2aacda,&DAT_00e2b470);
    if (*(int *)(param_1 + 0x34) == 1) {
      FUN_0042f7d0(&DAT_00e29b90,&DAT_004c4558);
      fVar2 = (float10)FUN_0045cf00();
      iVar1 = FUN_004816b0();
      _DAT_00e29b90 = ((float)iVar1 * 4.656613e-10 * 10.0 - -180.0) * (float)fVar2 + _DAT_00e29b90;
      iVar1 = FUN_004816b0();
      _DAT_00e29b94 = ((float)iVar1 * 4.656613e-10 * 125.0 - 375.0) + _DAT_00e29b94;
      iVar1 = FUN_004816b0();
      _DAT_00e29b98 = (float)iVar1 * 4.656613e-10 * 30.0 - -40.0;
      FUN_0042f7d0(&DAT_00e2b470,&DAT_004c4558);
      FUN_0042f860(local_c,&DAT_00e2b470,&DAT_00e29b90);
      FUN_0042f830(&DAT_00e2b470,&DAT_00e2b470,local_c);
    }
  }
  DAT_0050c930 = 1;
  DAT_0050c940 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045cb80(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 local_48 [3];
  undefined local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];

  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  FUN_0042f7d0(local_c,&DAT_004c4010 + *(int *)(param_1 + 0x34) * 0x20);
  FUN_0042f7d0(local_18,&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20);
  if (*(int *)(param_1 + 0x34) == 0x24) {
    puVar2 = &DAT_004c4490;
  }
  else if (*(int *)(param_1 + 8) == 8) {
    puVar2 = &DAT_004c43dc;
  }
  else if ((((DAT_0050c934 == 0) || (param_2 != 0)) || (*(int *)(param_1 + 8) != 7)) ||
          ((DAT_0050c930 != 0 && (DAT_0050c930 != 5)))) {
    FUN_0042f860(local_48,local_18,local_c);
    if (param_2 == 0) {
      puVar3 = local_48;
      puVar1 = &local_30;
    }
    else {
      puVar3 = &local_30;
      puVar1 = local_48;
    }
    FUN_0042f9f0(local_24,puVar1,puVar3);
    FUN_0042f9b0(local_24);
    FUN_0042f9b0(local_48);
    FUN_0042fa50(local_48,0x40400000,local_48);
    FUN_0042f830(local_3c,local_48,local_24);
    FUN_0042fa50(local_3c,0x42700000,local_3c);
    FUN_0042f830(local_3c,local_c,local_3c);
    puVar2 = local_3c;
  }
  else {
    puVar2 = local_18;
  }
  FUN_0042f7d0(&DAT_00e298a0,puVar2);
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 0:
  case 3:
    _DAT_00e298a8 = 0xc2700000;
    return;
  case 1:
    _DAT_00e298a8 = 0xc3110000;
    break;
  case 2:
    _DAT_00e298a8 = 0xc31d0000;
    return;
  }
  return;
}



void FUN_0045cd50(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined2 *puVar5;

  pcVar4 = &DAT_00e29861;
  puVar5 = &DAT_004c40a8;
  do {
    pcVar4[-1] = -1;
    *puVar5 = 0xffff;
    FUN_004816b0();
    cVar1 = __ftol();
    *pcVar4 = '\x01' - cVar1;
    FUN_004816b0();
    cVar1 = __ftol();
    puVar5 = puVar5 + 0x10;
    pcVar4[1] = 'f' - cVar1;
    pcVar4 = pcVar4 + 3;
  } while ((int)puVar5 < 0x4c42a8);
  iVar3 = 0;
  do {
    if (0xf < iVar3) {
      return;
    }
    do {
      FUN_004816b0();
      iVar2 = __ftol();
    } while ((&DAT_00e29860)[iVar2 * 3] != -1);
    (&DAT_00e29860)[iVar2 * 3] = (char)iVar3;
    iVar3 = iVar3 + 1;
    (&DAT_004c40a8)[iVar2 * 0x10] = 4;
  } while (iVar3 < 7);
  return;
}



void FUN_0045ce10(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;

  iVar1 = FUN_00450b30(0x456c6d6f,param_2);
  if (iVar1 != 0) {
    (&DAT_00e29600)[param_2] = iVar1;
    FUN_00454bc0(param_1,0xffffffff,param_2,1);
    FUN_004686b0(iVar1,(&DAT_00e29900)[param_2],(&DAT_00e2afa0)[param_2],param_3);
    *(int *)(iVar1 + 0xc) = param_2;
    *(undefined4 *)(iVar1 + 0xbc) = param_4;
    if (param_3 == 1) {
      *(undefined4 *)(iVar1 + 0xbc) = 0x42b40000;
    }
  }
  return;
}



void FUN_0045ce90(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  FUN_00445aa0(param_1);
  iVar3 = 0;
  do {
    iVar1 = FUN_00450b30(0x456c6d6f,iVar3);
    if (iVar1 != 0) {
      iVar2 = FUN_00445b50(*(undefined4 *)(iVar1 + 0x30));
      if (iVar2 != 0) {
        iVar2 = FUN_00445b50(*(undefined4 *)(iVar1 + 0x34));
        if (iVar2 != 0) goto LAB_0045ceed;
      }
      if ((*(ushort *)(iVar1 + 6) & 0x100) == 0) {
        *(ushort *)(iVar1 + 6) = *(ushort *)(iVar1 + 6) | 0x100;
      }
    }
LAB_0045ceed:
    iVar3 = iVar3 + 1;
    if (0x3b < iVar3) {
      return;
    }
  } while( true );
}



float10 __fastcall FUN_0045cf00(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = FUN_004816b0(param_1);
  iVar2 = __ftol(uVar1);
  return (float10)(iVar2 * 2 + -1);
}



void FUN_0045cf30(int param_1,int param_2)

{
  undefined4 uVar1;

  uVar1 = (&DAT_00e29900)[param_1];
  (&DAT_00e29900)[param_1] = (&DAT_00e29900)[param_2];
  (&DAT_00e29900)[param_2] = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045cf60(int param_1,int param_2,undefined param_3,undefined param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined local_10 [8];
  undefined local_8 [8];

  DAT_00e29bcc = &DAT_00e35a60;
  DAT_00e29bd8 = &DAT_004c2700 + param_1 * 0x34;
  puVar1 = (undefined4 *)(&DAT_004c2bb0 + param_1 * 0x3c);
  iVar2 = 0;
  puVar4 = puVar1;
  puVar5 = &DAT_00e29bdc;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  do {
    local_10[iVar2] = *(undefined *)((int)&DAT_00e35aa0 + iVar2 + 1);
    local_8[iVar2] = (&DAT_00e35aa8)[iVar2];
    if (DAT_004d5e00 != 0) {
      local_10[iVar2] = 0;
      local_8[iVar2] = 0xff;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  FUN_00449d00(&DAT_00e29bdc,puVar1,local_10,local_8);
  FUN_00449330(&DAT_00e2aee0,puVar1);
  FUN_00449330(&DAT_00e2aec0,&DAT_00e29bdc);
  _DAT_00e2a6b0 = 0;
  puVar4 = &DAT_00e2aec0;
  puVar5 = &DAT_00e2af40;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  _DAT_00e2a6b4 = 0;
  _DAT_00e2a6b8 = 0;
  _DAT_00e2a6bc = 0;
  if (param_2 != -1) {
    local_10[param_2] = param_3;
    local_8[param_2] = param_4;
    FUN_00449d00(&DAT_00e29bdc,puVar1,local_10,local_8);
    FUN_00449330(&DAT_00e2af40,&DAT_00e29bdc);
    iVar2 = 0;
    do {
      local_10[iVar2] = DAT_00e29bcc[iVar2 + 0x41];
      local_8[iVar2] = DAT_00e29bcc[iVar2 + 0x48];
      iVar2 = iVar2 + 1;
    } while (iVar2 < 7);
    (&DAT_00e2a6b0)[param_2] = 1;
  }
  return;
}



void FUN_0045d0b0(int param_1,undefined4 param_2)

{
  if (DAT_0050ca34 == 0) {
    DAT_0050ca34 = 1;
    FUN_004258e0();
    *(undefined4 *)(param_1 + 0xc) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x128) = param_2;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff6 | 6;
    FUN_00450db0(0x54657374);
    FUN_00450db0(0x546f7373);
    FUN_00450db0(0x536d6f6b);
    FUN_00450db0(0x54726967);
    FUN_00450db0(0x43687372);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045d130(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  float10 extraout_ST0;
  char *local_108;
  undefined **local_104;
  char local_100 [256];

  iVar3 = __ftol();
  uVar4 = 0x49;
  _DAT_0050ca48 = (float)(extraout_ST0 + (float10)_DAT_00e22a40);
  if (DAT_0050ca40 == 2) {
    uVar4 = 0x6f;
  }
  if (DAT_0050ca40 == 3) {
    uVar4 = 0x3b;
  }
  if (DAT_0050ca40 == 4) {
    uVar4 = 0xb1;
  }
  if (DAT_0050ca40 == 5) {
    uVar4 = 0x4b;
  }
  iVar9 = DAT_0050ca40;
  if (1 < uVar4) {
    iVar10 = 0;
    pcVar5 = (char *)(uVar4 - 1);
    local_104 = &PTR_s_Lead_Tester_004c4db4;
    pcVar11 = pcVar5;
    local_108 = pcVar5;
    do {
      if (iVar9 == 1) {
        pcVar5 = *(char **)((int)&PTR_DAT_004c4ac8 + iVar10);
        pcVar11 = *(char **)((int)&PTR_s_Project_Leaders_Design_004c4acc + iVar10);
      }
      if (iVar9 == 2) {
        pcVar5 = *(char **)((int)&PTR_DAT_004c4bf0 + iVar10);
        pcVar11 = *(char **)((int)&PTR_s_Voice_Department_Manager_004c4bf4 + iVar10);
      }
      if (iVar9 == 3) {
        pcVar5 = local_104[-1];
        pcVar11 = *local_104;
      }
      if (iVar9 == 4) {
        pcVar5 = *(char **)((int)&PTR_DAT_004c4ea0 + iVar10);
        pcVar11 = *(char **)((int)&PTR_s_Production_Manager_004c4ea4 + iVar10);
      }
      if (iVar9 == 5) {
        pcVar5 = *(char **)((int)&PTR_DAT_004c5168 + iVar10);
        pcVar11 = *(char **)((int)&PTR_s_Lucas_Licensing_004c516c + iVar10);
      }
      cVar2 = *pcVar5;
      if (cVar2 == '\0') {
        iVar3 = iVar3 + 0x28;
      }
      else if (cVar2 == '\\') {
        iVar3 = iVar3 + 0x18;
      }
      else {
        iVar3 = iVar3 + 0xc;
      }
      if ((-10 < iVar3) && (iVar3 < 0xfa)) {
        if (cVar2 == '\0') {
          FUN_0049eb80(local_100,s__f4_o_c_s_004c6d70,pcVar11);
          pcVar6 = local_100;
          cVar2 = local_100[0];
          while (cVar2 != '\0') {
            if (*pcVar6 == '\\') {
              *pcVar6 = ' ';
            }
            pcVar1 = pcVar6 + 1;
            pcVar6 = pcVar6 + 1;
            cVar2 = *pcVar1;
          }
          uVar7 = 0xbe;
          uVar8 = 0xbe;
        }
        else {
          FUN_0049eb80(local_100,s__k_c_s_004c6d68,pcVar11);
          pcVar6 = local_100;
          cVar2 = local_100[0];
          while (cVar2 != '\0') {
            if (*pcVar6 == '\\') {
              *pcVar6 = ' ';
            }
            pcVar1 = pcVar6 + 1;
            pcVar6 = pcVar6 + 1;
            cVar2 = *pcVar1;
          }
          uVar7 = 0xff;
          uVar8 = 0xff;
        }
        FUN_00450530(0xa0,iVar3,uVar8,uVar7,0xffffffff,0xffffffff,local_100);
        iVar9 = DAT_0050ca40;
      }
      iVar10 = iVar10 + 4;
      local_104 = local_104 + 1;
      local_108 = local_108 + -1;
    } while (local_108 != (char *)0x0);
  }
  if (iVar3 < 1) {
    if ((iVar9 != 5) && (DAT_0050ca44 == 0)) {
      FUN_0045d0b0(param_1,0x46696e69);
      return;
    }
    FUN_0045d0b0(param_1,0x41627274);
  }
  return;
}



char FUN_0045d350(void)

{
  if (DAT_00e2899c == 0) {
    return '\0';
  }
  if (DAT_00e27820 == 0) {
    return '\x01';
  }
  if (DAT_00e2781c == 0) {
    return '\x02';
  }
  return (DAT_00e27890 != 0) + '\x03';
}



float10 FUN_0045d390(void)

{
  int iVar1;
  float10 fVar2;

  iVar1 = FUN_00450b30(0x54657374,0);
  if (iVar1 == 0) {
    return (float10)-1.0;
  }
  if (DAT_00e2899c == 0) {
    return (float10)-1.0;
  }
  fVar2 = (float10)FUN_0047f810(*(int *)(DAT_00e2899c + 0x84) + 0xac);
  return fVar2;
}



int FUN_0045d3d0(int param_1)

{
  if (DAT_00e2899c == param_1) {
    return 0;
  }
  if (DAT_00e27820 == param_1) {
    return 1;
  }
  if (DAT_00e2781c == param_1) {
    return 2;
  }
  return (-(uint)(DAT_00e27890 != param_1) & 0xfffffffc) + 3;
}



float10 FUN_0045d410(int param_1)

{
  float10 fVar1;
  float10 fVar2;

  fVar1 = (float10)*(float *)(*(int *)(param_1 + 0x84) + 0xe8);
  fVar2 = fVar1 - (float10)*(float *)(*(int *)(param_1 + 0x84) + 0xe0);
  if (fVar2 < (float10)0.0) {
    fVar2 = -fVar2;
  }
  if ((float10)0.5 < fVar2) {
    fVar2 = (float10)1.0 - fVar2;
  }
  fVar2 = ((float10)*(int *)(param_1 + 0x78) + fVar1) - fVar2;
  if (fVar2 < (float10)0.0) {
    fVar2 = (float10)0.0;
  }
  return fVar2;
}



float10 FUN_0045d480(int param_1)

{
  float10 fVar1;

  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    fVar1 = (float10)FUN_0045d410(param_1);
    return fVar1;
  }
  return (float10)10000.0 - (float10)*(float *)(param_1 + 0x74);
}



void FUN_0045d4a0(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  int local_8c;
  float local_84;
  float local_80;
  float local_7c;
  int local_78;
  int local_74;
  int local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_54;
  float local_50 [20];

  iVar6 = 0;
  local_68 = -1.0;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    iVar7 = 0;
    pfVar5 = local_50;
    do {
      *(undefined2 *)(DAT_00e28960 + 0x5c + iVar7) = 0xffff;
      iVar8 = *(int *)(DAT_00e28960 + 0x84 + iVar7);
      *(uint *)(iVar8 + 0x60) = *(uint *)(iVar8 + 0x60) & 0xffff7fff;
      iVar8 = *(int *)(DAT_00e28960 + 0x84 + iVar7);
      *(uint *)(iVar8 + 0x60) = *(uint *)(iVar8 + 0x60) & 0xfffeffff;
      fVar9 = (float10)FUN_0045d480(DAT_00e28960 + iVar7);
      *pfVar5 = (float)fVar9;
      iVar8 = DAT_00e28960 + iVar7;
      if (iVar8 == DAT_00e2899c) {
        local_94 = (float)fVar9;
        local_8c = iVar6;
      }
      if (iVar8 == DAT_00e27820) {
        local_90 = (float)fVar9;
        local_6c = iVar6;
      }
      if ((*(uint *)(*(int *)(iVar8 + 0x84) + 0x60) & 0x100) != 0) {
        if ((*(byte *)(iVar8 + 8) & 2) == 0) {
          local_68 = (float)fVar9;
        }
        else {
          fVar9 = (float10)FUN_0045d410(iVar8);
          local_68 = (float)fVar9;
        }
      }
      iVar6 = iVar6 + 1;
      pfVar5 = pfVar5 + 1;
      iVar7 = iVar7 + 0x88;
    } while (iVar6 < *(int *)(param_1 + 0x1bc));
  }
  iVar6 = local_6c;
  fVar2 = local_90;
  local_84 = 10000.0;
  local_80 = 10000.0;
  local_5c = -1;
  local_7c = 10000.0;
  local_a0 = 10000.0;
  local_9c = 10000.0;
  local_98 = 10000.0;
  local_78 = -1;
  local_74 = -1;
  iVar7 = 1;
  local_60 = -1;
  if ((DAT_00e27820 != 0) && (local_94 <= local_90)) {
    local_6c = local_8c;
    local_90 = local_94;
    local_8c = iVar6;
    local_94 = fVar2;
  }
  local_64 = 0;
  iVar6 = *(int *)(param_1 + 0x1bc);
  iVar8 = -1;
  if (0 < iVar6) {
    do {
      fVar2 = 0.0;
      iVar8 = -1;
      iVar4 = 0;
      if (0 < iVar6) {
        pfVar5 = local_50;
        do {
          if (fVar2 < *pfVar5) {
            fVar2 = *pfVar5;
            iVar8 = iVar4;
          }
          iVar4 = iVar4 + 1;
          pfVar5 = pfVar5 + 1;
        } while (iVar4 < iVar6);
      }
      if (iVar8 != -1) {
        iVar6 = iVar8 * 0x88;
        if ((*(byte *)(DAT_00e28960 + 8 + iVar6) & 2) != 0) {
          fVar9 = (float10)FUN_0045d410(DAT_00e28960 + iVar6);
          local_50[iVar8] = (float)fVar9;
        }
        if (iVar7 == 1) {
          local_54 = local_50[iVar8];
        }
        pfVar5 = local_50 + iVar8;
        *(float *)(*(int *)(DAT_00e28960 + 0x84 + iVar6) + 0x128) = local_54 - *pfVar5;
        fVar3 = local_98;
        fVar2 = local_7c;
        if (DAT_00e2899c == 0) {
          *(undefined4 *)(*(int *)(DAT_00e28960 + 0x84 + iVar6) + 0x130) = 0xc2c80000;
        }
        else if (DAT_00e27820 == 0) {
          if (local_8c == iVar8) {
            *(undefined4 *)(*(int *)(DAT_00e28960 + 0x84 + iVar6) + 0x130) = 0;
          }
          else {
            fVar3 = local_94 - *pfVar5;
            *(float *)(*(int *)(DAT_00e28960 + 0x84 + iVar6) + 0x130) = fVar3;
            if (fVar3 < 0.0) {
              fVar3 = -fVar3;
            }
            if (local_a0 <= fVar3) {
              if (local_9c <= fVar3) {
                if (local_98 <= fVar3) {
LAB_0045d926:
                  fVar3 = local_98;
                  fVar2 = local_7c;
                }
              }
              else {
                local_98 = local_9c;
                local_9c = fVar3;
                fVar3 = local_98;
                local_74 = iVar8;
              }
            }
            else {
              local_98 = local_9c;
              local_74 = local_78;
              local_9c = local_a0;
              local_a0 = fVar3;
              fVar3 = local_98;
              local_78 = iVar8;
            }
          }
        }
        else if (local_8c == iVar8) {
          *(undefined4 *)(*(int *)(DAT_00e28960 + 0x84 + iVar6) + 0x130) = 0;
          *(float *)(*(int *)(DAT_00e28960 + 0x84 + iVar6) + 0x134) = local_90 - local_94;
        }
        else if (local_6c == iVar8) {
          *(undefined4 *)(*(int *)(DAT_00e28960 + 0x84 + iVar6) + 0x134) = 0;
          *(float *)(*(int *)(DAT_00e28960 + 0x84 + iVar6) + 0x130) = local_94 - local_90;
        }
        else {
          fVar3 = local_94 - *pfVar5;
          fVar2 = local_90 - *pfVar5;
          *(float *)(*(int *)(DAT_00e28960 + 0x84 + iVar6) + 0x130) = fVar3;
          *(float *)(*(int *)(DAT_00e28960 + 0x84 + iVar6) + 0x134) = fVar2;
          if (fVar3 < 0.0) {
            fVar3 = -fVar3;
          }
          if (local_a0 <= fVar3) {
            if (local_9c <= fVar3) {
              if (fVar3 < local_98) {
                local_98 = fVar3;
              }
            }
            else {
              local_98 = local_9c;
              local_9c = fVar3;
              local_74 = iVar8;
            }
          }
          else {
            local_98 = local_9c;
            local_74 = local_78;
            local_9c = local_a0;
            local_a0 = fVar3;
            local_78 = iVar8;
          }
          if (fVar2 < 0.0) {
            fVar2 = -fVar2;
          }
          fVar3 = local_98;
          if (local_84 <= fVar2) {
            if (local_80 <= fVar2) {
              if (local_7c <= fVar2) goto LAB_0045d926;
            }
            else {
              local_7c = local_80;
              local_80 = fVar2;
              fVar2 = local_7c;
              local_5c = iVar8;
            }
          }
          else {
            local_7c = local_80;
            local_5c = local_60;
            local_80 = local_84;
            local_84 = fVar2;
            fVar2 = local_7c;
            local_60 = iVar8;
          }
        }
        local_7c = fVar2;
        local_98 = fVar3;
        fVar2 = *pfVar5;
        iVar8 = *(int *)(DAT_00e28960 + 0x84 + iVar6);
        *pfVar5 = 0.0;
        *(float *)(iVar8 + 300) = local_68 - fVar2;
        *(short *)(DAT_00e28960 + 0x5c + iVar6) = (short)iVar7;
        iVar7 = iVar7 + 1;
      }
      local_64 = local_64 + 1;
      iVar6 = *(int *)(param_1 + 0x1bc);
      iVar8 = local_60;
    } while (local_64 < iVar6);
  }
  if (DAT_00e27820 != 0) {
    if ((iVar8 != -1) && (local_50[iVar8] < (float)*(int *)(param_1 + 0x1c8) - 0.1)) {
      puVar1 = (uint *)(*(int *)(DAT_00e28960 + 0x84 + iVar8 * 0x88) + 0x60);
      *puVar1 = *puVar1 | 0x10000;
    }
    if ((local_5c != -1) && (local_50[local_5c] < (float)*(int *)(param_1 + 0x1c8) - 0.1)) {
      puVar1 = (uint *)(*(int *)(DAT_00e28960 + 0x84 + local_5c * 0x88) + 0x60);
      *puVar1 = *puVar1 | 0x10000;
    }
  }
  if ((local_78 != -1) && (local_50[local_78] < (float)*(int *)(param_1 + 0x1c8) - 0.1)) {
    iVar6 = *(int *)(DAT_00e28960 + 0x84 + local_78 * 0x88);
    *(uint *)(iVar6 + 0x60) = *(uint *)(iVar6 + 0x60) | 0x8000;
    puVar1 = (uint *)(*(int *)(DAT_00e28960 + 0x84 + local_78 * 0x88) + 0x60);
    *puVar1 = *puVar1 & 0xfffeffff;
  }
  if ((local_74 != -1) && (local_50[local_74] < (float)*(int *)(param_1 + 0x1c8) - 0.1)) {
    iVar6 = *(int *)(DAT_00e28960 + 0x84 + local_74 * 0x88);
    *(uint *)(iVar6 + 0x60) = *(uint *)(iVar6 + 0x60) | 0x8000;
    puVar1 = (uint *)(*(int *)(DAT_00e28960 + 0x84 + local_74 * 0x88) + 0x60);
    *puVar1 = *puVar1 & 0xfffeffff;
  }
  return;
}



void FUN_0045dad0(int param_1,int param_2)

{
  int iVar1;

  if (param_2 != 0) {
    *(int *)(param_1 + 0x1e0) = param_2;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1e0);
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 5) {
    return;
  }
  if (iVar1 == 4) {
    *(undefined4 *)(param_1 + 0x1e0) = 5;
    *(undefined4 *)(param_1 + 0x1e4) = 0x3f800000;
  }
  FUN_004831d0(0,8,8,0x138,0xe8);
  FUN_00483230(2,0xffffffff);
  if ((*(byte *)(param_1 + 8) & 0x60) == 0) {
    iVar1 = FUN_0045d350();
    FUN_004285d0(0xffffff37,0);
    switch(*(undefined4 *)(param_1 + 0x1e0)) {
    case 1:
      FUN_00483230(1,5);
      FUN_004831d0(1,8,8,0x138,0xe8);
      FUN_00483590(1,0x42c80000,0xbf800000,0xbf800000,0xbf800000,0xbf800000);
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      return;
    case 2:
      FUN_00483230(1,5);
      FUN_004831d0(1,8,0x30,0x138,0xc0);
      FUN_004831d0(0,8,0x30,0x138,0xc0);
      FUN_00483590(1,0x42340000,0xbf800000,DAT_004c4a60,DAT_004c4a5c,0xbf800000);
      return;
    case 3:
    case 4:
    case 5:
      goto switchD_0045db73_caseD_3;
    default:
      return;
    }
  }
  FUN_00483230(1,7);
LAB_0045dd22:
  FUN_004831d0(1,8,8,0x138,0xe8);
  FUN_00483590(1,0x42c80000,0xbf800000,0xbf800000,0xbf800000,0xbf800000);
  return;
switchD_0045db73_caseD_3:
  FUN_00483230(1,7);
  if ((iVar1 != 1) && (iVar1 != 0)) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00483230(2,8);
    FUN_004831d0(1,8,8,0x138,0x77);
    FUN_004831d0(2,8,0x79,0x138,0xe8);
    if (DAT_0050ca14 != 0) {
      FUN_00483590(1,0x42f00000,0xbf800000,0xbf800000,0xbf800000,0xbf800000);
      FUN_00483590(2,0x42f00000,0xbf800000,0xbf800000,0xbf800000,0xbf800000);
      return;
    }
    FUN_00483590(1,0x42c80000,0xbf800000,0xbf800000,0xbf800000,0xbf800000);
    FUN_00483590(2,0x42c80000,0xbf800000,0xbf800000,0xbf800000,0xbf800000);
    return;
  }
  goto LAB_0045dd22;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045dd80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_40 [16];

  FUN_00408800();
  _DAT_004b9578 = 0x44bb8000;
  FUN_00427d70();
  iVar3 = 0;
  do {
    FUN_004276a0(iVar3,0xff0000);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x14);
  FUN_00408640(10);
  DAT_004b91c8 = 1;
  FUN_00428740(0xffffff99,0,0,0,0xffffffff);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(DAT_00e28960 + 0x84 + iVar2);
      if (iVar1 != 0) {
        *(undefined4 *)(DAT_00e28960 + 0x80 + iVar2) = *(undefined4 *)(iVar1 + 0x2c4);
      }
      *(undefined4 *)(DAT_00e28960 + 0x84 + iVar2) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x88;
    } while (iVar3 < *(int *)(param_1 + 0x1bc));
  }
  FUN_00408640(0x14);
  FUN_00447350(0x54657374);
  FUN_00447350(0x546f7373);
  FUN_00447350(0x536d6f6b);
  FUN_00447350(0x54726967);
  FUN_00447350(0x43687372);
  FUN_00408640(0x1e);
  thunk_FUN_00449e30(1);
  FUN_0045dad0(param_1,1);
  FUN_00408640(0x28);
  FUN_004269f0(0);
  DAT_0050ccf8 = 0;
  DAT_0050cd00 = 0;
  DAT_0050ccfc = 0;
  DAT_0050cd04 = 0;
  DAT_0050ccf0 = 0;
  FUN_00408640(0x32);
  FUN_0042d500();
  FUN_0042c460();
  FUN_0042d470();
  FUN_00408640(0x3c);
  FUN_0042c3e0();
  FUN_0042c400();
  FUN_00408640(0x46);
  FUN_00428370();
  FUN_00449260();
  DAT_00e996dc = DAT_00e996dc & 0xffffbfff;
  FUN_00483fc0(0);
  FUN_00408640(0x50);
  FUN_00428a60(1,0,0,0);
  FUN_00428a60(5,0,0,0);
  if (((DAT_0050c9f8 & 2) != 0) && (param_2 == 0x46696e69)) {
    FUN_00466bd0(param_1,DAT_00e28960);
    FUN_004804a0();
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff3 | 3;
    return;
  }
  FUN_00408640(0x5a);
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 0x10;
  local_40[0] = 0x52536574;
  FUN_00450c50(0x634d616e,local_40);
  FUN_00408640(0x62);
  if (DAT_0050ca2c != 0) {
    param_2 = 0x41627274;
  }
  local_40[0] = param_2;
  FUN_00450c50(0x416c6c21,local_40);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045dfe0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;

  DAT_004b2940 = 1;
  FUN_00427ea0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1c0),0);
  FUN_004277f0(1,*(undefined4 *)(param_1 + 0x1ac));
  DAT_0050ca10 = 1;
  _DAT_004b9578 = 0x44bb8000;
  local_40 = 0x53776565;
  local_3c = 0;
  FUN_00450c50(0x634d616e,&local_40);
  uVar2 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar2 & 0xfffffff0;
  *(undefined4 *)(param_1 + 0xc) = 0x404ccccd;
  if ((uVar2 & 0x20) == 0) {
    uVar2 = uVar2 & 0xfffffff0 | 0xf00;
  }
  else {
    uVar2 = uVar2 & 0xfffff0f0;
  }
  *(uint *)(param_1 + 8) = uVar2;
  if ((*(byte *)(param_1 + 8) & 0x20) == 0) {
    FUN_004457b0();
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
  }
  FUN_0045dad0(param_1,4);
  if ((*(byte *)(param_1 + 8) & 0x20) == 0) {
    FUN_00428740(0xffffff99,0,0,0,0);
  }
  iVar3 = FUN_0041d6b0();
  if ((iVar3 != 0) && ((*(byte *)(param_1 + 8) & 0x60) == 0)) {
    FUN_0041d3b0(1);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(DAT_00e28960 + 0x84 + iVar4);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 100) = *(uint *)(iVar1 + 100) & 0xffffefff;
        *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xfffffff1 | 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x88;
    } while (iVar3 < *(int *)(param_1 + 0x1bc));
  }
  return;
}



uint FUN_0045e120(uint param_1)

{
  int iVar1;

  if ((DAT_0050ca3c != 0) && (DAT_0050ca44 == 0)) {
    return 0;
  }
  if (DAT_0050ca18 < 2) {
    param_1 = param_1 & DAT_00e98eb0;
  }
  else {
    iVar1 = FUN_00445690();
    if (iVar1 != 0) {
      return (&DAT_00e98eb0)[DAT_0050ca4c] & param_1;
    }
    if ((param_1 & DAT_00e98eb0) != 0) {
      DAT_0050ca4c = 0;
      return 1;
    }
    if ((DAT_00e98eb4 & param_1) != 0) {
      DAT_0050ca4c = 1;
      return 1;
    }
  }
  return param_1;
}



void FUN_0045e1a0(int param_1)

{
  int iVar1;

  iVar1 = FUN_0045e120(0x40);
  if (iVar1 != 0) {
    if (DAT_0050ca18 < 2) {
      iVar1 = *(int *)(param_1 + 0x124) + 1;
      *(int *)(param_1 + 0x124) = iVar1;
      if (4 < iVar1) {
        *(undefined4 *)(param_1 + 0x124) = 0;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x124) + 1;
      *(int *)(param_1 + 0x124) = iVar1;
      if (7 < iVar1) {
        *(undefined4 *)(param_1 + 0x124) = 4;
        return;
      }
    }
  }
  return;
}



void FUN_0045e970(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  float local_1c4;
  undefined local_1c0 [448];

  local_1c4 = -0.01;
  iVar2 = 0;
  puVar4 = local_1c0;
  do {
    FUN_0044eeb0(*(int *)(param_2 + 0x84) + 0xac,puVar4,local_1c4);
    if (iVar2 < 2) {
      fVar1 = -0.01;
    }
    else {
      fVar1 = -0.03;
    }
    local_1c4 = local_1c4 - fVar1;
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 0x40;
  } while (iVar2 < 7);
  puVar4 = local_1c0;
  iVar2 = 6;
  piVar3 = (int *)(param_1 + 0x10);
  do {
    FUN_00431640(*piVar3,puVar4);
    if (*piVar3 != 0) {
      FUN_00431a50(*piVar3,2,3,0x10,2);
    }
    FUN_0042b640(*piVar3,0xffffffff,0xffffffff,0,0xff,0,0xffffffff);
    piVar3 = piVar3 + 1;
    puVar4 = puVar4 + 0x40;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void FUN_0045ef70(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_10;
  int local_c;
  short *local_8;

  local_c = 0;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    local_10 = 0;
    local_8 = &DAT_0050c9d0;
    iVar5 = param_1;
    do {
      iVar1 = DAT_00e28960 + local_10;
      if (((*(byte *)(*(int *)(DAT_00e28960 + 0x84 + local_10) + 0x60) & 0x20) != 0) &&
         (sVar2 = *(short *)(iVar1 + 0x5c), 0 < sVar2)) {
        if (*local_8 < sVar2) {
          if ((sVar2 == 2) || (iVar3 = FUN_004816b0(), (float)iVar3 * 4.656613e-10 < 0.25)) {
            iVar6 = *(int *)(param_1 + 0x1bc);
            iVar3 = -1;
            iVar4 = 0;
            if (0 < iVar6) {
              do {
                iVar5 = DAT_00e28960 + iVar4 * 0x88;
                sVar2 = *(short *)(DAT_00e28960 + 0x5c + iVar4 * 0x88);
                if (((0 < sVar2) && (iVar1 != iVar5)) &&
                   ((int)sVar2 == *(short *)(iVar1 + 0x5c) + -1)) {
                  iVar3 = **(int **)(iVar5 + 0x18);
                  iVar4 = iVar6;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar6);
            }
            if (((iVar3 != -1) &&
                (iVar6 = *(int *)(iVar5 + 0x84), (*(byte *)(iVar6 + 0x60) & 0x20) == 0)) &&
               (((*(uint *)(iVar6 + 100) & 0x4000000) == 0 &&
                (((double)*(int *)(iVar6 + 0x1998) < 500.0 && (DAT_004d5e00 == 0)))))) {
              if (iVar3 == 0xe) {
                iVar4 = FUN_004816b0();
                if (0.5 <= (float)iVar4 * 4.656613e-10) {
                  iVar6 = iVar6 + 0x50;
                  uVar11 = 3;
                  uVar10 = 0x19;
                  uVar9 = 0x18;
                  uVar8 = 0x17;
                  uVar7 = 0x17;
                  iVar3 = 0xe;
                }
                else {
                  iVar6 = iVar6 + 0x50;
                  uVar11 = 0x15;
                  uVar10 = 0x14;
                  uVar9 = 0x13;
                  uVar8 = 0x12;
                  uVar7 = 0x12;
                }
              }
              else {
                iVar4 = FUN_004816b0();
                if (0.5 <= (float)iVar4 * 4.656613e-10) {
                  iVar6 = iVar6 + 0x50;
                  uVar11 = 3;
                  uVar10 = 0x19;
                  uVar9 = 0x18;
                  uVar8 = 0x17;
                  uVar7 = 0x17;
                }
                else {
                  iVar6 = iVar6 + 0x50;
                  uVar11 = 0x15;
                  uVar10 = 0x14;
                  uVar9 = 0x13;
                  uVar8 = 0x12;
                  uVar7 = 0x11;
                }
              }
LAB_0045f1e3:
              FUN_00427590(1,iVar3,uVar7,uVar8,uVar9,uVar10,uVar11,iVar6);
            }
          }
        }
        else if ((sVar2 < *local_8) &&
                ((sVar2 == 1 || (iVar3 = FUN_004816b0(), (float)iVar3 * 4.656613e-10 < 0.25)))) {
          iVar3 = -1;
          iVar4 = 0;
          iVar6 = *(int *)(param_1 + 0x1bc);
          if (0 < iVar6) {
            do {
              iVar5 = DAT_00e28960 + iVar4 * 0x88;
              sVar2 = *(short *)(DAT_00e28960 + 0x5c + iVar4 * 0x88);
              if (((0 < sVar2) && (iVar1 != iVar5)) && ((int)sVar2 == *(short *)(iVar1 + 0x5c) + 1))
              {
                iVar3 = **(int **)(iVar5 + 0x18);
                iVar4 = iVar6;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar6);
          }
          if (((iVar3 != -1) &&
              (iVar6 = *(int *)(iVar5 + 0x84), (*(byte *)(iVar6 + 0x60) & 0x20) == 0)) &&
             (((*(uint *)(iVar6 + 100) & 0x4000000) == 0 &&
              (((double)*(int *)(iVar6 + 0x1998) < 500.0 && (DAT_004d5e00 == 0)))))) {
            iVar6 = iVar6 + 0x50;
            uVar11 = 0x14;
            uVar10 = 3;
            uVar9 = 0x17;
            uVar8 = 1;
            uVar7 = 0x15;
            goto LAB_0045f1e3;
          }
        }
      }
      *local_8 = *(short *)(iVar1 + 0x5c);
      local_c = local_c + 1;
      local_10 = local_10 + 0x88;
      local_8 = local_8 + 1;
    } while (local_c < *(int *)(param_1 + 0x1bc));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045f230(int param_1)

{
  int iVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined *puVar18;
  int local_640;
  int local_638;
  float local_634;
  float local_630;
  float local_62c;
  undefined4 local_628;
  undefined local_624 [16];
  float local_614;
  float local_610;
  float local_608;
  float local_604;
  undefined4 local_600;
  int local_5fc;
  float local_5f4;
  undefined local_5f0 [1520];

  iVar13 = 0;
  local_5fc = 0;
  if (DAT_0050ca18 != 0) {
    if (DAT_0050ca18 < 2) {
      if (4 < *(int *)(param_1 + 0x124)) {
        *(undefined4 *)(param_1 + 0x124) = 2;
      }
    }
    else if (*(int *)(param_1 + 0x124) < 4) {
      *(undefined4 *)(param_1 + 0x124) = 5;
    }
    iVar12 = *(int *)(param_1 + 0x124);
    if (iVar12 == 0) {
      iVar12 = *(int *)(param_1 + 0x1bc);
      local_634 = 0.0;
      if (1 < iVar12) {
        if (0 < iVar12) {
          puVar8 = (uint *)(DAT_00e28960 + 8);
          do {
            if ((((*puVar8 & 1) != 0) && ((*puVar8 & 2) == 0)) && (puVar8[-1] == 0x4c6f636c)) {
              local_634 = *(float *)(puVar8[0x1f] + 0xe0);
            }
            puVar8 = puVar8 + 0x22;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        fVar14 = (float10)FUN_0047e870();
        if (((float10)0.0 < fVar14) && (0 < *(int *)(param_1 + 0x1bc))) {
          iVar12 = 0x2b;
          do {
            iVar1 = DAT_00e28960 + iVar13;
            if (((0.0 < (float)fVar14) && ((*(uint *)(iVar1 + 8) & 1) != 0)) &&
               ((*(uint *)(iVar1 + 8) & 2) == 0)) {
              fVar3 = local_634 - *(float *)(*(int *)(iVar1 + 0x84) + 0xe0);
              if (0.5 < fVar3) {
                fVar3 = fVar3 - 1.0;
              }
              if (fVar3 < -0.5) {
                fVar3 = fVar3 - -1.0;
              }
              fVar3 = fVar3 * (float)fVar14 * 0.02222222 - -119.0;
              if (((**(int **)(iVar1 + 0x18) != -1) && (fVar3 <= 164.0)) && (74.0 <= fVar3)) {
                if (iVar1 == DAT_00e2899c) {
                  FUN_004285d0(iVar12,1);
                  uVar9 = __ftol();
                  FUN_00428660(iVar12,0x112,uVar9);
                  FUN_004286f0(iVar12,0x3f400000,0x3f400000);
                  uVar9 = 0xffffffdc;
                }
                else {
                  FUN_004285d0(iVar12,1);
                  uVar9 = __ftol();
                  FUN_00428660(iVar12,0x114,uVar9);
                  FUN_004286f0(iVar12,0x3f000000,0x3f000000);
                  uVar9 = 0xffffff80;
                }
                FUN_00428740(iVar12,0xffffffff,0xffffffff,0xffffffff,uVar9);
                sVar2 = *(short *)(iVar1 + 0x5c);
                if (0 < sVar2) {
                  if (iVar1 == DAT_00e2899c) {
                    FUN_0049eb80(local_624,s__f4_s_d_004c6dd4,(int)sVar2);
                    uVar9 = 0;
                  }
                  else {
                    FUN_0049eb80(local_624,s__f4_s_d_004c6dd4,(int)sVar2);
                    uVar9 = 0xffffffff;
                  }
                  uVar9 = __ftol(0xffffffff,0xffffffff,uVar9,0xffffffff,local_624);
                  FUN_00450530(0x11c,uVar9);
                }
              }
            }
            iVar13 = iVar13 + 0x88;
            iVar1 = iVar12 + -0x2a;
            iVar12 = iVar12 + 1;
          } while (iVar1 < *(int *)(param_1 + 0x1bc));
        }
      }
    }
    else if (iVar12 == 1) {
      if (0 < *(int *)(param_1 + 0x1bc)) {
        local_638 = 0;
        iVar13 = 0x2b;
        do {
          iVar12 = DAT_00e28960 + local_638;
          uVar10 = *(uint *)(DAT_00e28960 + 8 + local_638);
          if ((((uVar10 & 1) != 0) && ((uVar10 & 2) == 0)) && (**(int **)(iVar12 + 0x18) != -1)) {
            FUN_00428740(iVar13,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
            FUN_004285d0(iVar13,1);
            uVar7 = __ftol();
            uVar10 = (uint)uVar7;
            uVar7 = __ftol();
            uVar11 = (uint)uVar7;
            FUN_00428660(iVar13,uVar11,uVar10);
            FUN_004286f0(iVar13,0x3f800000,0x3f800000);
            if ((1 < *(int *)(param_1 + 0x1bc)) && (sVar2 = *(short *)(iVar12 + 0x5c), 0 < sVar2)) {
              if (iVar12 == DAT_00e2899c) {
                FUN_0049eb80(local_624,s__f3_o_d_004c6dcc,(int)sVar2);
                puVar18 = local_624;
                uVar17 = 0xffffffff;
                uVar16 = 0;
                uVar15 = 0xffffffff;
                uVar9 = 0xffffffff;
                uVar10 = __ftol(0xffffffff,0xffffffff,0,0xffffffff,puVar18);
                uVar11 = __ftol(uVar10);
              }
              else {
                FUN_0049eb80(local_624,s__f4_o_d_004c6dc4,(int)sVar2);
                puVar18 = local_624;
                uVar17 = 0xffffffff;
                uVar16 = 0xffffffff;
                uVar15 = 0xffffffff;
                uVar9 = 0xffffffff;
              }
              FUN_00450530(uVar11,uVar10,uVar9,uVar15,uVar16,uVar17,puVar18);
            }
          }
          local_638 = local_638 + 0x88;
          iVar12 = iVar13 + -0x2a;
          iVar13 = iVar13 + 1;
        } while (iVar12 < *(int *)(param_1 + 0x1bc));
      }
    }
    else if ((iVar12 == 2) || (iVar12 == 3)) {
      local_600 = DAT_00dfb254;
      local_608 = DAT_00dfb24c;
      local_604 = DAT_00dfb250;
      local_5fc = 1;
      local_630 = DAT_00dfb22c;
      local_62c = DAT_00dfb230;
      local_628 = 0;
      FUN_0042f9b0(&local_630);
      local_610 = -local_630;
      local_614 = local_62c;
      if (*(int *)(param_1 + 0x124) == 2) {
        fVar3 = 1500.0;
        local_634 = 1500.0;
        if ((*(int *)(param_1 + 0x1ac) == 1) && (*(int *)(param_1 + 0x1c0) == 3)) {
          local_640 = 0x40400000;
        }
        else {
          local_640 = 0x40a00000;
        }
      }
      else {
        fVar3 = 500.0;
        local_640 = 0x41000000;
        local_634 = 500.0;
      }
      if ((DAT_00e996dc & 0x4000) != 0) {
        fVar3 = -fVar3;
      }
      iVar13 = FUN_00480170(*(undefined4 *)(param_1 + 0x2c),&local_608,local_634,0xaa,local_5f0,
                            local_640);
      if (0 < iVar13) {
        if (0xaa < iVar13) {
          iVar13 = 0xaa;
        }
        if (0 < iVar13) {
          do {
            uVar9 = __ftol();
            uVar9 = __ftol(uVar9);
            FUN_0044fef0(0,uVar9);
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
      local_640 = 0;
      do {
        fVar4 = ((float)local_640 - 1.5) * local_634 * 0.05;
        local_5f4 = (fVar4 * *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xd8)) - local_604;
        fVar6 = (((fVar4 * *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xd4)) - local_608) *
                25.0) / fVar3;
        fVar4 = (local_5f4 * 25.0) / local_634;
        fVar5 = fVar4 * local_610 + fVar6 * local_614;
        fVar4 = fVar6 * local_630 + fVar4 * local_62c;
        if ((((fVar5 < 25.0) && (-fVar5 < 25.0)) && (fVar4 < 25.0)) && (-fVar4 < 25.0)) {
          uVar9 = __ftol();
          uVar9 = __ftol(uVar9);
          FUN_0044fef0(1,uVar9);
        }
        local_640 = local_640 + 1;
      } while (local_640 < 4);
      iVar13 = 0;
      if (0 < *(int *)(param_1 + 0x1bc)) {
        iVar12 = 0;
        do {
          iVar1 = DAT_00e28960 + iVar12;
          if (((iVar1 != DAT_00e2899c) && ((*(uint *)(iVar1 + 8) & 1) != 0)) &&
             ((*(uint *)(iVar1 + 8) & 2) == 0)) {
            fVar6 = ((*(float *)(*(int *)(iVar1 + 0x84) + 0x50) - local_608) * 25.0) / fVar3;
            fVar4 = ((*(float *)(*(int *)(iVar1 + 0x84) + 0x54) - local_604) * 25.0) / local_634;
            fVar5 = fVar4 * local_610 + fVar6 * local_614;
            fVar4 = fVar6 * local_630 + fVar4 * local_62c;
            if (((fVar5 < 25.0) && (-fVar5 < 25.0)) && ((fVar4 < 25.0 && (-fVar4 < 25.0)))) {
              if (*(int *)(param_1 + 0x124) == 2) {
                uVar9 = __ftol();
                uVar9 = __ftol(uVar9);
                uVar15 = 2;
              }
              else {
                uVar9 = __ftol();
                uVar9 = __ftol(uVar9);
                uVar15 = 3;
              }
              FUN_0044fef0(uVar15,uVar9);
            }
          }
          iVar13 = iVar13 + 1;
          iVar12 = iVar12 + 0x88;
        } while (iVar13 < *(int *)(param_1 + 0x1bc));
      }
      if ((DAT_00e2899c != 0) && ((*(byte *)(DAT_00e2899c + 8) & 1) != 0)) {
        fVar3 = ((*(float *)(*(int *)(DAT_00e2899c + 0x84) + 0x50) - local_608) * 25.0) / fVar3;
        local_634 = ((*(float *)(*(int *)(DAT_00e2899c + 0x84) + 0x54) - local_604) * 25.0) /
                    local_634;
        fVar4 = local_634 * local_610 + fVar3 * local_614;
        fVar3 = fVar3 * local_630 + local_634 * local_62c;
        if ((fVar4 < 25.0) && (((-fVar4 < 25.0 && (fVar3 < 25.0)) && (-fVar3 < 25.0)))) {
          uVar9 = __ftol();
          uVar9 = __ftol(uVar9);
          FUN_0044fef0(4,uVar9);
        }
      }
    }
    else if ((((iVar12 != 4) && (iVar12 != 6)) && ((iVar12 == 5 || (iVar12 == 7)))) &&
            (0 < *(int *)(param_1 + 0x1bc))) {
      iVar12 = 0;
      iVar13 = 0x2b;
      do {
        uVar10 = *(uint *)(DAT_00e28960 + 8 + iVar12);
        iVar1 = DAT_00e28960 + iVar12;
        if (((uVar10 & 1) != 0) && ((uVar10 & 2) == 0)) {
          FUN_0045d410(iVar1);
          if ((**(int **)(iVar1 + 0x18) != -1) &&
             ((*(uint *)(*(int *)(iVar1 + 0x84) + 100) & 0x4040000) == 0)) {
            FUN_004285d0(iVar13,1);
            uVar9 = __ftol();
            uVar9 = __ftol(uVar9);
            FUN_00428660(iVar13,uVar9);
            FUN_004286f0(iVar13,0x3f800000,0x3f800000);
          }
          sVar2 = *(short *)(iVar1 + 0x5c);
          if (0 < sVar2) {
            if (iVar1 == DAT_00e2899c) {
              FUN_0049eb80(local_624,s__f3_o_d_004c6dcc,(int)sVar2);
              uVar9 = __ftol(0xffffffff,0xffffffff,0,0xffffffff,local_624);
            }
            else if (iVar1 == DAT_00e27820) {
              FUN_0049eb80(local_624,s__f3_o_d_004c6dcc,(int)sVar2);
              uVar9 = __ftol(0,0xffffffff,0xffffffff,0xffffffff,local_624);
            }
            else {
              FUN_0049eb80(local_624,s__f3_o_d_004c6dcc,(int)sVar2);
              uVar9 = __ftol(0xffffffbe,0xffffffbe,0xffffffbe,0xffffffff,local_624);
            }
            uVar9 = __ftol(uVar9);
            FUN_00450530(uVar9);
          }
        }
        iVar12 = iVar12 + 0x88;
        iVar1 = iVar13 + -0x2a;
        iVar13 = iVar13 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x1bc));
    }
    fVar3 = (float)_DAT_00e22a40;
    if (local_5fc == 0) {
      DAT_004c5298 = DAT_004c5298 - (fVar3 + fVar3);
      if (DAT_004c5298 < 0.0) {
        DAT_004c5298 = 0.0;
      }
    }
    else {
      DAT_004c5298 = DAT_004c5298 - fVar3 * -2.0;
      if (1.0 < DAT_004c5298) {
        DAT_004c5298 = 1.0;
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045fe70(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 local_11c;
  byte local_114;
  byte bStack_113;
  byte bStack_112;
  undefined uStack_111;
  undefined uStack_110;
  undefined uStack_10f;
  undefined local_10c;
  undefined uStack_10b;
  undefined uStack_10a;
  undefined uStack_109;
  undefined uStack_108;
  undefined uStack_107;
  undefined uStack_106;
  undefined4 local_104;
  undefined local_100 [256];

  cVar4 = (-(param_5 != 0) & 4U) + 0x11;
  iVar3 = param_3;
  if (1 < DAT_0050ca18) {
    iVar3 = param_3 + 0x1f;
  }
  FUN_004285d0(cVar4,1);
  FUN_00428660(cVar4,iVar3,param_4);
  FUN_00428740(cVar4,0x59,0xffffff8c,0x36,0xfffffffe);
  iVar3 = FUN_00445690();
  if (iVar3 == 0) {
    if ((*(uint *)(param_2 + 0x60) & 0x200000) == 0) {
      fVar1 = *(float *)(param_1 + 0x1d8 + param_5 * 4) - (float)_DAT_00e22a40 * 4.0;
      *(float *)(param_1 + 0x1d8 + param_5 * 4) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_1 + 0x1d8 + param_5 * 4) = 0;
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x1d8 + param_5 * 4) - (float)_DAT_00e22a40 * -4.0;
      *(float *)(param_1 + 0x1d8 + param_5 * 4) = fVar1;
      if (1.0 < fVar1) {
        *(undefined4 *)(param_1 + 0x1d8 + param_5 * 4) = 0x3f800000;
      }
    }
  }
  if (DAT_0050c5f0 == 0) {
    FUN_004816b0();
  }
  FUN_004285d0(0xe,0);
  if ((*(uint *)(param_2 + 0x60) & 0x800000) == 0) {
    if (param_5 == 0) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = 0x14;
    }
    FUN_004285d0(uVar2,0);
    local_11c = __ftol();
    FUN_0046bc50(param_2,&local_114,&local_10c,&local_104);
  }
  else {
    local_11c = __ftol();
    local_114 = 0xff;
    bStack_113 = 0;
    bStack_112 = 0;
    local_10c = 0;
    uStack_10b = 0xff;
    uStack_10a = 0;
    uStack_109 = 0xe6;
    local_104 = 0x3f800000;
  }
  if ((1 < DAT_0050ca18) && (local_11c = __ftol(), 0xff < (short)local_11c)) {
    local_11c = 0xff;
  }
  if (0.0 < _DAT_004c4a58) {
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0522_Net_play__Pres_004b5ac4);
    FUN_0049eb80(local_100,s__f4_s_c_s_004c6dfc,uVar2);
    uVar2 = __ftol(local_100);
    FUN_004816b0(0xffffffff,0xffffffff,uVar2);
    uVar2 = __ftol();
    FUN_00450530(0xa0,0xdc,uVar2);
    _DAT_004c4a58 = _DAT_004c4a58 - (float)_DAT_00e22a40 * 0.3333;
  }
  cVar4 = (-(param_5 != 0) & 4U) + 0x12;
  FUN_004285d0(cVar4,1);
  FUN_00428660(cVar4,param_3 + 0x18,param_4 + -7);
  FUN_00428740(cVar4,CONCAT13(uStack_111,CONCAT12(bStack_112,CONCAT11(bStack_113,local_114))),
               CONCAT13(uStack_110,CONCAT12(uStack_111,CONCAT11(bStack_112,bStack_113))),
               CONCAT13(uStack_10f,CONCAT12(uStack_110,CONCAT11(uStack_111,bStack_112))),local_11c);
  if (((((DAT_0050ca18 < 2) && (*(int *)(param_1 + 0x1ac) == 0)) && (*(int *)(param_1 + 0x1c0) == 0)
       ) && ((0x78 < local_114 && (0x78 < bStack_113)))) &&
     ((bStack_112 < 0x78 &&
      ((iVar3 = FUN_00445690(), iVar3 == 0 &&
       (DAT_0050ca58 = DAT_0050ca58 + 1, (DAT_0050ca58 & 1) != 0)))))) {
    uVar2 = FUN_00421360(s__SCREENTEXT_380___Boost_004c6de4);
    FUN_0049eb80(local_100,s__f4_c_s_004c6ddc,uVar2);
    FUN_004816b0(local_11c,local_100);
    uVar2 = __ftol();
    FUN_00450530(0xf4,0xa2,0xffffffff,0xffffffff,uVar2);
  }
  cVar4 = (-(param_5 != 0) & 4U) + 0xf;
  FUN_004285d0(cVar4,1);
  FUN_00428660(cVar4,param_3 + 0x22,param_4 + 6);
  FUN_00428740(cVar4,CONCAT13(uStack_109,CONCAT12(uStack_10a,CONCAT11(uStack_10b,local_10c))),
               CONCAT13(uStack_108,CONCAT12(uStack_109,CONCAT11(uStack_10a,uStack_10b))),
               CONCAT13(uStack_107,CONCAT12(uStack_108,CONCAT11(uStack_109,uStack_10a))),
               CONCAT13(uStack_106,CONCAT12(uStack_107,CONCAT11(uStack_108,uStack_109))));
  DAT_0050ca04 = local_104;
  cVar4 = (-(param_5 != 0) & 4U) + 0x10;
  if ((*(uint *)(param_2 + 0x60) & 0x800000) == 0) {
    FUN_004285d0(cVar4,0);
    return;
  }
  fVar1 = *(float *)(param_2 + 0x218);
  FUN_004285d0(cVar4,1);
  FUN_00428660(cVar4,param_3 + 0x22,param_4 + 6);
  FUN_00428740(cVar4,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  DAT_0050ca08 = 1.0 - fVar1 * 0.01;
  return;
}



void FUN_00460320(void)

{
  undefined4 uVar1;
  float10 fVar2;

  fVar2 = (float10)FUN_004456a0();
  if (fVar2 <= (float10)0.0) {
    FUN_004285d0(0x1a,0);
    return;
  }
  FUN_004285d0(0x1a,1);
  uVar1 = __ftol(90.0 - (1.0 - (float)fVar2) * 80.0);
  FUN_00428660(0x1a,0xa0,uVar1);
  FUN_004286f0(0x1a,0x42020000,0x407a0000);
  uVar1 = __ftol();
  FUN_00428740(0x1a,0,0x37,0x47,uVar1);
  uVar1 = __ftol();
  uVar1 = __ftol(0xdc,uVar1);
  FUN_00484020(0x5f,uVar1);
  return;
}



void __thiscall FUN_004603f0(undefined4 param_1_00,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;

  iVar1 = FUN_0045d350(param_1_00);
  if (iVar1 < 2) {
    if ((param_1 & 1) == 0) {
      FUN_004285d0(5,1);
      FUN_00428660(5,0,0x15);
      FUN_004286f0(5,0x43a00000,0x40000000);
      FUN_00428740(5,0x59,0xffffff8c,0x36,0x40);
      FUN_004285d0(6,0);
      FUN_004285d0(0xd,1);
      FUN_00428660(0xd,0,0x17);
      FUN_004286f0(0xd,0x42a00000,0x3f800000);
      FUN_00428740(0xd,0,0x6e,0xffffff8f,0xfffffffe);
      FUN_004285d0(0,1);
      FUN_00428660(0,0x12,0x22);
      FUN_00428740(0,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(0xb,1);
      FUN_00428660(0xb,0x42,0x23);
      FUN_004286f0(0xb,0x41ac0000,0x3f800000);
      FUN_00428740(0xb,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(4,1);
      FUN_00428660(4,0x6d,0x23);
      FUN_00428740(4,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(0xc,1);
      FUN_00428660(0xc,0xd3,0x23);
      FUN_004286f0(0xc,0x41ac0000,0x3f800000);
      FUN_00428740(0xc,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(1,1);
      FUN_00428660(1,0xfe,0x22);
      FUN_00428740(1,0x59,0xffffff8c,0x36,0xfffffffe);
    }
    else {
      FUN_004285d0(6,1);
      FUN_00428660(6,0x17,0xdc);
      FUN_004286f0(6,0x43870000,0x40000000);
      FUN_00428740(6,0x59,0xffffff8c,0x36,0x40);
      FUN_004285d0(5,1);
      FUN_00428660(5,0x17,0x14);
      FUN_004286f0(5,0x43870000,0x40000000);
      FUN_00428740(5,0x59,0xffffff8c,0x36,0x40);
      FUN_004285d0(0xd,0);
      FUN_004285d0(0,0);
      FUN_004285d0(0xb,0);
      FUN_004285d0(4,0);
      FUN_004285d0(0xc,0);
      FUN_004285d0(1,0);
    }
    FUN_004285d0(3,1);
    FUN_00428660(3,0xe5,0xb4);
    FUN_00428740(3,0,0x6e,0xffffff8f,0xfffffffe);
    FUN_004285d0(2,1);
    FUN_00428660(2,0xf3,0xb4);
    FUN_004286f0(2,0x40c00000,0x3f800000);
    FUN_00428740(2,0,0x6e,0xffffff8f,0xfffffffe);
    FUN_004285d0(10,1);
    FUN_00428660(10,0x10b,0xb4);
    FUN_00428740(10,0,0x6e,0xffffff8f,0xfffffffe);
    if ((param_1 & 4) == 0) {
      if ((param_1 & 2) == 0) {
        fVar3 = (float10)0.0;
      }
      else {
        fVar3 = (float10)FUN_004456a0();
        fVar3 = ((float10)1.0 - fVar3) + ((float10)1.0 - fVar3);
        if ((float10)1.0 < fVar3) {
          fVar3 = (float10)1.0;
        }
        fVar3 = ((float10)1.0 - (float10)DAT_004c5298) * fVar3;
      }
      FUN_004285d0(7,1);
      uVar2 = __ftol();
      FUN_00428660(7,0x113,uVar2);
      FUN_004286f0(7,0x3f800000,(float)(fVar3 * (float10)90.0) * 0.5);
      FUN_00428740(7,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(9,1);
      uVar2 = __ftol();
      FUN_00428660(9,0x113,uVar2);
      FUN_00428740(9,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(8,0);
    }
    else {
      FUN_004285d0(7,1);
      FUN_00428660(7,0x16,0x15);
      FUN_004286f0(7,0x3f800000,0x42c70000);
      FUN_00428740(7,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(8,1);
      FUN_00428660(8,0x11b,0x15);
      FUN_004286f0(8,0x3f800000,0x42c70000);
      FUN_00428740(8,0x59,0xffffff8c,0x36,0xfffffffe);
      FUN_004285d0(9,1);
      FUN_00428660(9,0x113,0xa0);
      FUN_00428740(9,0x59,0xffffff8c,0x36,0xfffffffe);
    }
    FUN_004285d0(0x19,0.0 < DAT_004c5298);
    FUN_00428660(0x19,0xe8,0x3c);
    FUN_004286f0(0x19,0x417a0000,0x407a0000);
    uVar2 = __ftol();
    FUN_00428740(0x19,0,0x37,0x47,uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00460950(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined4 local_110;
  undefined local_100 [256];

  local_110 = 0xa4;
  iVar10 = FUN_0045d350();
  iVar2 = *(int *)(param_1 + 0x84);
  uVar11 = (uint)(param_1 == DAT_00e27820);
  iVar12 = FUN_00445690();
  if ((iVar12 == 0) &&
     (fVar1 = *(float *)(iVar2 + 0x2b8) - (float)_DAT_00e22a40, *(float *)(iVar2 + 0x2b8) = fVar1,
     fVar1 < 0.0)) {
    *(undefined4 *)(iVar2 + 0x2b8) = 0;
  }
  FUN_004603f0();
  fVar1 = *(float *)(*(int *)(param_1 + 0x84) + 0x1a0);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  uVar13 = FUN_00421360(s__f2_c_s__0f_004c6ee0,(double)fVar1);
  FUN_0049eb80(local_100,uVar13);
  uVar13 = __ftol(0,0xffffffc3,0xfffffffe,0xfffffffe,local_100);
  uVar13 = __ftol(uVar13);
  FUN_00450530(uVar13);
  iVar12 = *(int *)(param_1 + 0x78);
  uVar9 = 0;
  bVar4 = false;
  bVar5 = false;
  uVar19 = uVar11;
  if (0 < iVar12) {
    fVar1 = *(float *)(param_1 + 0x5c + iVar12 * 4);
    fVar3 = 1.0 - *(float *)(param_1 + 0x60 + iVar12 * 4) * 0.25;
    if ((fVar3 <= 0.0) || (1.0 <= fVar3)) {
      iVar12 = FUN_00427670((int)*(char *)(param_1 + 0x10),0x100000);
      if ((iVar12 != 0) && (iVar12 = FUN_00427360(6,0), iVar12 == 0)) {
        FUN_004276a0((int)*(char *)(param_1 + 0x10),0x100000);
      }
    }
    else {
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar13 = __ftol();
      uVar14 = __ftol();
      iVar12 = __ftol();
      iVar12 = iVar12 * 8;
      if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      uVar6 = __ftol();
      uVar19 = (uint)uVar6;
      uVar15 = FUN_00421360();
      uVar15 = __ftol(fVar1,uVar13,uVar14,0x40,iVar12,uVar15);
      FUN_00450670(uVar19,uVar15);
      uVar15 = FUN_00421360();
      uVar13 = __ftol(uVar13,uVar14,0x40,iVar12,uVar15);
      FUN_00450530(uVar19,uVar13);
      if ((fVar1 <= *(float *)(param_2 + 0x1d0)) && (uVar16 = __ftol(), (uVar16 & 1) != 0)) {
        uVar13 = FUN_00421360();
        uVar13 = __ftol(0xffffffc8,0xffffffff,0,iVar12,uVar13);
        FUN_00450530(uVar19,uVar13);
        iVar17 = FUN_00427670((int)*(char *)(param_1 + 0x10),0x100000);
        iVar12 = param_1;
        if (iVar17 == 0) {
          FUN_00427410(6,0,0x27,0);
          FUN_00427690((int)*(char *)(param_1 + 0x10),0x100000);
        }
      }
      bVar4 = true;
      if (*(int *)(param_1 + 0x78) + 1 == *(int *)(param_2 + 0x1c8)) {
        if (DAT_0050ca18 < 2) {
          if (0.0 < (fVar3 - 0.5) + (fVar3 - 0.5)) {
            iVar12 = __ftol();
            uVar19 = iVar12 * 4;
            if (0xff < (int)uVar19) {
              uVar19 = 0xff;
            }
            if (DAT_0050c5f0 == 0) {
              FUN_004816b0();
            }
            uVar13 = __ftol();
            if (DAT_0050c5f0 == 0) {
              FUN_004816b0();
            }
            uVar14 = __ftol();
            if (DAT_0050c5f0 == 0) {
              FUN_004816b0();
            }
            iVar12 = __ftol();
            uVar15 = FUN_00421360();
            FUN_00450530(0xa0,0x46,uVar13,uVar14,iVar12,uVar19,uVar15);
          }
        }
        else {
          uVar16 = __ftol();
          uVar18 = (int)uVar16 >> 0x1f;
          if (((uVar16 ^ uVar18) - uVar18 & 1 ^ uVar18) != uVar18) {
            bVar5 = true;
          }
        }
      }
      uVar9 = (undefined2)((uint)iVar12 >> 0x10);
    }
  }
  if ((!bVar4) && (iVar10 < 2)) {
    _DAT_0050ca5c = 0;
    uVar7 = __ftol();
    uVar13 = FUN_00421360();
    uVar13 = __ftol(*(undefined4 *)(param_1 + 0x74),0xffffffff,0xffffffff,0xffffffff,0xffffffbe,
                    uVar13);
    FUN_00450670(CONCAT22(uVar9,uVar7),uVar13);
    uVar13 = FUN_00421360();
    uVar13 = __ftol(0xffffffff,0xffffffff,0xffffffff,0xffffffbe,uVar13);
    FUN_00450530(CONCAT22(uVar9,uVar7),uVar13);
  }
  if ((*(int *)(param_2 + 0x124) == 6) || (*(int *)(param_2 + 0x124) == 7)) {
    uVar13 = __ftol(*(undefined4 *)(param_1 + 0x74),0xffffffff,0xffffffff,0xffffffff,0xffffffbe,
                    s__f3_r_s_004c6e50);
    FUN_00450670(0x121,uVar13);
  }
  iVar10 = *(int *)(param_2 + 0x1c8);
  iVar12 = *(int *)(param_1 + 0x78) + 1;
  if (iVar10 < iVar12) {
    iVar12 = iVar10;
  }
  uVar13 = FUN_00421360(s__f3_c_s_d__d_004c6e40,iVar12,iVar10);
  FUN_0049eb80(local_100,uVar13);
  uVar9 = (undefined2)(uVar19 >> 0x10);
  if ((DAT_0050ca18 < 2) || (!bVar5)) {
    uVar7 = __ftol();
    uVar8 = __ftol();
    uVar14 = CONCAT22(uVar9,uVar8);
    FUN_00450530(uVar14,uVar7,0xffffffff,0xffffffff,0xffffffff,0xffffffbe,local_100);
    uVar9 = __ftol();
    uVar13 = FUN_00421360();
    uVar20 = CONCAT44(uVar13,0xffffffbe);
    uVar15 = 0xffffffff;
    uVar13 = 0xffffffff;
  }
  else {
    uVar7 = __ftol();
    uVar8 = __ftol();
    uVar14 = CONCAT22(uVar9,uVar8);
    FUN_00450530(uVar14,uVar7,0xffffffff,0x3f,0x3f,0xffffffff,local_100);
    uVar9 = __ftol();
    uVar13 = FUN_00421360();
    uVar20 = CONCAT44(uVar13,0xffffffff);
    uVar15 = 0x3f;
    uVar13 = 0x3f;
  }
  FUN_00450530(uVar14,uVar9,0xffffffff,uVar13,uVar15,uVar20);
  iVar10 = *(int *)(param_2 + 0x124);
  if (((iVar10 != 1) && (iVar10 != 6)) && (iVar10 != 7)) {
    if (0 < *(short *)(param_1 + 0x5c)) {
      uVar13 = FUN_00421360(s__f3_c_s_d__d_004c6e40,(int)*(short *)(param_1 + 0x5c),
                            *(undefined4 *)(param_2 + 0x1bc));
      FUN_0049eb80(local_100,uVar13);
      FUN_00450530(0x116,uVar7,0xffffffff,0xffffffff,0xffffffff,0xffffffbe,local_100);
    }
    uVar13 = FUN_00421360();
    FUN_00450530(0x116,uVar9,0xffffffff,0xffffffff,0xffffffff,0xffffffbe,uVar13);
  }
  if ((1 < DAT_0050ca18) && (uVar11 == 0)) {
    local_110 = 0x36;
  }
  FUN_0045fe70(param_2,iVar2,0xe1,local_110,uVar11);
  if ((DAT_0050c040 != 0) && (DAT_0050c610 != 0)) {
    FUN_00450530(0xa0,0x14,0xffffffff,0,0,0xffffffff,s__c_oZOT_004c6e08);
  }
  return;
}



void FUN_004610f0(void)

{
  FUN_004285d0(0x17,1);
  FUN_00428660(0x17,0,0x76);
  FUN_004286f0(0x17,0x43a00000,0x40800000);
  FUN_00428740(0x17,0,0,0,0xffffffff);
  FUN_00484020(0x14,0x75,300,0x7b);
  return;
}



void FUN_00461150(int param_1)

{
  int iVar1;

  iVar1 = FUN_0045d350();
  if (iVar1 == 2) {
    if (param_1 != DAT_00e27820) {
      iVar1 = 0;
      do {
        FUN_004285d0(iVar1 + 0x23,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 6);
      FUN_004285d0(0x29,0);
      FUN_004285d0(0x2a,0);
      return;
    }
    iVar1 = 0;
    do {
      FUN_004285d0(iVar1 + 0x1b,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
  }
  else {
    iVar1 = 0;
    do {
      FUN_004285d0(iVar1 + 0x1b,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
  }
  FUN_004285d0(0x21,0);
  FUN_004285d0(0x22,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004611f0(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined2 uVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  int *piVar21;
  int local_c0;
  float local_b8;
  int local_b0;
  float local_ac;
  undefined4 local_a4;
  uint *local_9c;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  int aiStack_60 [6];
  int local_48 [6];
  int aiStack_30 [6];
  int local_18 [6];

  iVar18 = *(int *)(param_1 + 0x84);
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_a4 = 0x3e800000;
  local_b8 = 0.0;
  uVar2 = *(uint *)(iVar18 + 0x60);
  if ((uVar2 & 0x1000) == 0) {
    if ((uVar2 & 0x4000) == 0) {
      bVar3 = *(float *)(iVar18 + 0x218) < 50.0 ||
              (0.0 < *(float *)(iVar18 + 0x2b8) ||
              ((*(uint *)(iVar18 + 100) & 0x4000) != 0 || (uVar2 & 0x2000) != 0));
      pbVar20 = (byte *)(iVar18 + 0x2a0);
      iVar10 = 6;
      do {
        if (0.6 < *(float *)(pbVar20 + -0x18)) {
          bVar3 = true;
        }
        if ((*pbVar20 & 0x1c) != 0) {
          bVar3 = true;
        }
        pbVar20 = pbVar20 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if ((uVar2 & 0x400) != 0) {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined4 *)(&DAT_0050ca68 + param_2 * 4) = 0x40800000;
        *(undefined4 *)(&DAT_004c52a8 + param_2 * 4) = 0x40a00000;
      }
    }
    else {
      *(undefined4 *)(&DAT_0050ca68 + param_2 * 4) = 0xbf800000;
    }
  }
  else {
    *(undefined4 *)(&DAT_0050ca60 + param_2 * 4) = 0x3f800000;
    *(undefined4 *)(&DAT_0050ca68 + param_2 * 4) = 0;
  }
  iVar10 = FUN_00445690();
  if (iVar10 == 0) {
    fVar1 = *(float *)(&DAT_004c52a0 + param_2 * 4) - (float)_DAT_00e22a40 * 1.5;
    *(float *)(&DAT_004c52a0 + param_2 * 4) = fVar1;
    if (fVar1 <= 0.0) {
      *(float *)(&DAT_004c52a0 + param_2 * 4) = fVar1 - -1.0;
    }
    fVar1 = *(float *)(iVar18 + 0x2b8) - (float)_DAT_00e22a40;
    *(float *)(iVar18 + 0x2b8) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(iVar18 + 0x2b8) = 0;
    }
    fVar1 = *(float *)(&DAT_0050ca68 + param_2 * 4) * (float)_DAT_00e22a40 +
            *(float *)(&DAT_0050ca60 + param_2 * 4);
    *(float *)(&DAT_0050ca60 + param_2 * 4) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(&DAT_0050ca60 + param_2 * 4) = 0x3f800000;
      *(undefined4 *)(&DAT_0050ca68 + param_2 * 4) = 0;
    }
    if ((0.0 < *(float *)(&DAT_0050ca60 + param_2 * 4)) &&
       (fVar1 = *(float *)(&DAT_004c52a8 + param_2 * 4), fVar4 = (float)_DAT_00e22a40,
       *(float *)(&DAT_004c52a8 + param_2 * 4) = fVar1 - fVar4, fVar1 - fVar4 <= 0.0)) {
      *(undefined4 *)(&DAT_0050ca68 + param_2 * 4) = 0xc0800000;
    }
  }
  if (*(float *)(&DAT_0050ca60 + param_2 * 4) <= 0.0) {
    *(undefined4 *)(&DAT_0050ca60 + param_2 * 4) = 0;
    *(undefined4 *)(&DAT_0050ca68 + param_2 * 4) = 0;
    if (param_2 == 0) {
      iVar18 = 0;
      do {
        FUN_004285d0(iVar18 + 0x1b,0);
        iVar18 = iVar18 + 1;
      } while (iVar18 < 6);
      FUN_004285d0(0x21,0);
      FUN_004285d0(0x22,0);
      return;
    }
    iVar18 = 0;
    do {
      FUN_004285d0(iVar18 + 0x23,0);
      iVar18 = iVar18 + 1;
    } while (iVar18 < 6);
    FUN_004285d0(0x29,0);
    FUN_004285d0(0x2a,0);
    return;
  }
  iVar10 = FUN_00445690();
  if (iVar10 == 0) {
    iVar10 = 6;
    puVar11 = (uint *)(iVar18 + 0x2a0);
    do {
      iVar10 = iVar10 + -1;
      *puVar11 = *puVar11 ^ 2;
      puVar11 = puVar11 + 1;
    } while (iVar10 != 0);
  }
  local_8c = 0;
  local_7c = 0xff;
  if (DAT_0050c5f0 == 0) {
    FUN_004816b0();
  }
  __ftol();
  local_70 = 0;
  local_80 = 0xff;
  local_78 = 0xff;
  if (DAT_0050c5f0 == 0) {
    FUN_004816b0();
  }
  __ftol();
  if ((*(uint *)(iVar18 + 0x60) & 0x2000) != 0) {
    pbVar20 = (byte *)(iVar18 + 0x2a0);
    iVar18 = 0;
    do {
      if ((*pbVar20 & 2) == 0) {
        *(undefined4 *)((int)local_18 + iVar18) = 200;
        *(undefined4 *)((int)aiStack_30 + iVar18) = 200;
        *(undefined4 *)((int)aiStack_60 + iVar18) = 200;
      }
      else {
        *(undefined4 *)((int)local_18 + iVar18) = 100;
        *(undefined4 *)((int)aiStack_30 + iVar18) = 100;
        if (DAT_0050c5f0 == 0) {
          FUN_004816b0();
          uVar12 = __ftol();
          *(undefined4 *)((int)aiStack_60 + iVar18) = uVar12;
        }
        else {
          uVar12 = __ftol();
          *(undefined4 *)((int)aiStack_60 + iVar18) = uVar12;
        }
      }
      *(undefined4 *)((int)local_48 + iVar18) = 0xff;
      iVar18 = iVar18 + 4;
      pbVar20 = pbVar20 + 4;
    } while (iVar18 < 0x18);
    goto LAB_0046207a;
  }
  if (((*(uint *)(iVar18 + 0x60) & 0x5000) != 0) || ((*(uint *)(iVar18 + 100) & 0x4000) != 0)) {
    piVar21 = local_48;
    for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
      *piVar21 = 0xff;
      piVar21 = piVar21 + 1;
    }
    piVar21 = local_18;
    for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
      *piVar21 = 0xff;
      piVar21 = piVar21 + 1;
    }
    iVar18 = 0;
    do {
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      iVar10 = __ftol();
      *(int *)((int)aiStack_30 + iVar18) = iVar10;
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      iVar13 = __ftol();
      *(int *)((int)aiStack_60 + iVar18) = iVar13;
      if (iVar10 < iVar13) {
        *(int *)((int)aiStack_60 + iVar18) = iVar10;
      }
      iVar18 = iVar18 + 4;
    } while (iVar18 < 0x18);
    goto LAB_0046207a;
  }
  bVar5 = false;
  local_9c = (uint *)(iVar18 + 0x2a0);
  bVar3 = false;
  iVar10 = 0;
  puVar11 = local_9c;
  do {
    uVar2 = *puVar11;
    if ((uVar2 & 4) != 0) {
      if (iVar10 < 3) {
        bVar3 = true;
      }
      else {
        bVar5 = true;
      }
    }
    if ((uVar2 & 0x10) != 0) {
      bVar8 = true;
    }
    if (1.0 <= (float)puVar11[-6]) {
      bVar7 = true;
    }
    if ((uVar2 & 8) != 0) {
      bVar6 = true;
    }
    iVar10 = iVar10 + 1;
    puVar11 = puVar11 + 1;
  } while (iVar10 < 6);
  if (bVar3) {
    local_7c = 0;
    local_8c = 0xff;
    if (DAT_0050c5f0 == 0) {
      FUN_004816b0();
    }
    __ftol();
  }
  if (bVar5) {
    local_78 = 0;
    local_70 = 0xff;
    if (DAT_0050c5f0 == 0) {
      FUN_004816b0();
    }
    __ftol();
  }
  local_80 = 0xff;
  local_b0 = 0;
  do {
    local_c0 = 3;
    do {
      local_ac = (float)local_9c[-6];
      if (local_ac < 0.0) {
        local_ac = 0.0;
      }
      if (1.0 < local_ac) {
        local_ac = 1.0;
      }
      iVar13 = __ftol();
      iVar10 = __ftol();
      iVar19 = 0;
      if ((0.8 < local_ac) && (iVar14 = FUN_004816b0(), 0.5 < (float)iVar14 * 4.656613e-10)) {
        iVar13 = 0x80;
        iVar10 = 0;
      }
      iVar14 = 100;
      if (1.0 <= local_ac) {
        iVar13 = __ftol();
        iVar19 = __ftol();
        iVar14 = iVar13;
        iVar10 = iVar19;
      }
      uVar2 = *local_9c;
      if ((uVar2 & 8) == 0) {
        if ((*(float *)(iVar18 + 0x2b8) <= 0.0) || ((uVar2 & 1) == 0)) {
          *local_9c = uVar2 & 0xfffffffe;
        }
        else if ((uVar2 & 2) != 0) {
          iVar13 = 0xff;
          iVar19 = 0x96;
          iVar10 = 0xff;
          iVar14 = 0xff;
        }
      }
      uVar2 = *local_9c;
      if (((uVar2 & 4) != 0) && ((uVar2 & 2) != 0)) {
        iVar13 = 0x80;
        iVar19 = 0xff;
        iVar10 = 0x80;
        iVar14 = 200;
      }
      if ((uVar2 & 8) != 0) {
        if (((bVar3) || (bVar5)) && ((uVar2 & 2) != 0)) {
          iVar13 = 0x80;
          iVar19 = 0xff;
          iVar10 = 0x80;
          iVar14 = 200;
        }
        else {
          iVar13 = __ftol();
          iVar10 = __ftol();
          iVar19 = __ftol();
          iVar14 = __ftol();
        }
      }
      if (iVar13 < 0) {
        iVar13 = 0;
      }
      if (0xff < iVar13) {
        iVar13 = 0xff;
      }
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      if (0xff < iVar10) {
        iVar10 = 0xff;
      }
      if (iVar19 < 0) {
        iVar19 = 0;
      }
      if (0xff < iVar19) {
        iVar19 = 0xff;
      }
      if (iVar14 < 0) {
        iVar14 = 0;
      }
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      local_9c = local_9c + 1;
      *(int *)((int)local_18 + local_b0) = iVar13;
      *(int *)((int)aiStack_30 + local_b0) = iVar10;
      *(int *)((int)aiStack_60 + local_b0) = iVar19;
      *(int *)((int)local_48 + local_b0) = iVar14;
      local_b0 = local_b0 + 4;
      local_c0 = local_c0 + -1;
    } while (local_c0 != 0);
  } while (local_b0 < 0x18);
  if (bVar6) {
    uVar12 = __ftol();
    uVar15 = FUN_00421360(s__SCREENTEXT_433__c_sENGINE_n_cFI_004c6f84);
    uVar12 = __ftol(0xffffffff,0xffffff80,0,uVar12,uVar15);
    FUN_00450530(0x36,uVar12);
  }
  if (20.0 <= *(float *)(iVar18 + 0x218)) {
    if (*(float *)(iVar18 + 0x218) < 50.0) {
      local_8c = __ftol();
      local_80 = __ftol();
      local_7c = __ftol();
      uVar12 = __ftol();
      if ((*(uint *)(iVar18 + 0x60) & 0x800000) != 0) {
        uVar15 = FUN_00421360(s__SCREENTEXT_435__c_sTEMP_n_cWARN_004c6f40);
        uVar12 = __ftol(local_8c,local_80,local_7c,uVar12,uVar15);
        FUN_00450530(0x36,uVar12);
      }
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      __ftol();
      local_78 = local_7c;
      local_70 = local_8c;
      if ((*(uint *)(iVar18 + 0x60) & 0x800000) != 0) {
        local_a4 = 0x3e4ccccd;
        local_b8 = 0.5;
      }
    }
  }
  else {
    uVar12 = __ftol();
    if ((!bVar6) && ((*(uint *)(iVar18 + 0x60) & 0x800000) != 0)) {
      uVar15 = FUN_00421360(s__SCREENTEXT_434__c_sOVERHEAT_004c6f64);
      uVar12 = __ftol(0xffffffff,0xffffff80,0,uVar12,uVar15);
      FUN_00450530(0x36,uVar12);
    }
    local_8c = 0xff;
    local_70 = 0xff;
    local_7c = 0;
    local_80 = 0x80;
    local_78 = 0;
    if ((*(uint *)(iVar18 + 0x60) & 0x800000) != 0) {
      local_a4 = 0x3e99999a;
      local_b8 = 0.75;
    }
  }
  if (bVar7) {
    uVar12 = __ftol();
    uVar15 = __ftol();
    uVar16 = FUN_00421360(s__SCREENTEXT_432__c_sWarning_004c6f24);
    uVar12 = __ftol(uVar12,uVar15,uVar15,uVar12,uVar16);
    FUN_00450530(0x36,uVar12);
  }
  iVar10 = DAT_0050c5f0;
  if ((*(uint *)(iVar18 + 0x60) & 0x400) == 0) {
    *(undefined4 *)(&DAT_0050ca70 + param_2 * 4) = 0;
  }
  else {
    if (((bVar3) || (bVar5)) || (bVar8)) {
      *(undefined4 *)(&DAT_0050ca70 + param_2 * 4) = 0;
      if (iVar10 == 0) {
        FUN_004816b0();
      }
      uVar12 = FUN_00421360(s__SCREENTEXT_436__c_sRepair_004c6eec);
      uVar12 = __ftol(uVar12);
      uVar16 = 0xffffffff;
      uVar15 = 0xffffff80;
    }
    else {
      if (*(float *)(&DAT_0050ca70 + param_2 * 4) <= 0.0) {
        FUN_00426c80(0x46,7,0x3e800000,0x3f800000,0);
      }
      fVar1 = *(float *)(&DAT_0050ca70 + param_2 * 4);
      fVar4 = (float)_DAT_00e22a40;
      *(float *)(&DAT_0050ca70 + param_2 * 4) = fVar1 + fVar4;
      if (0.8 <= fVar1 + fVar4) goto LAB_00461e6d;
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar12 = FUN_00421360(s__SCREENTEXT_437__c_sRepair_004c6f08);
      uVar12 = __ftol(uVar12);
      uVar16 = 0x40;
      uVar15 = 0x40;
    }
    uVar12 = __ftol(uVar15,0xffffff80,uVar16,uVar12);
    FUN_00450530(0x36,uVar12);
  }
LAB_00461e6d:
  iVar10 = FUN_00445690();
  if (iVar10 == 0) {
    if (bVar6) {
      if ((double)_DAT_0050ca78 < _DAT_00e22a38 - 2.0) {
        _DAT_0050ca7c = (float)_DAT_00e22a38;
        FUN_00426c80(0x87,7,0x3e800000,0x3f800000,0);
      }
      if ((double)_DAT_0050ca7c < _DAT_00e22a38 - 1.799999952316284) {
        FUN_00426c80(0x86,6,0x3e800000,0x3f800000,1);
      }
      _DAT_0050ca78 = (float)_DAT_00e22a38;
    }
    if (0.0 < local_b8) {
      FUN_00426c80(0x83,7,local_a4,local_b8,1);
    }
    if (((*(uint *)(iVar18 + 0x60) & 0x400) != 0) && (((bVar3 || (bVar5)) || (bVar8)))) {
      if ((double)_DAT_0050ca80 < _DAT_00e22a38 - 2.0) {
        _DAT_0050ca84 = (float)_DAT_00e22a38;
        FUN_00426c80(0x85,7,0x3e800000,0x3f800000,0);
      }
      if ((double)_DAT_0050ca84 < _DAT_00e22a38 - 1.799999952316284) {
        FUN_00426c80(0x75,6,0x3e800000,0x3f800000,1);
      }
      _DAT_0050ca80 = (float)_DAT_00e22a38;
    }
  }
LAB_0046207a:
  local_b8 = 0.0;
  do {
    iVar18 = 0;
    do {
      iVar13 = iVar18 + (int)local_b8 * 3;
      iVar10 = iVar13 + 0x1b;
      if (param_2 != 0) {
        iVar10 = iVar13 + 0x23;
      }
      FUN_004285d0(iVar10,1);
      if ((DAT_00e996dc & 0x4000) == 0) {
        uVar12 = __ftol();
      }
      else {
        uVar12 = __ftol();
      }
      uVar12 = __ftol(uVar12);
      FUN_00428660(iVar10,uVar12);
      FUN_004286f0(iVar10,0x3f400000,0x3f400000);
      uVar12 = __ftol();
      FUN_00428740(iVar10,*(undefined *)(local_18 + iVar13),*(undefined *)(aiStack_30 + iVar13),
                   *(undefined *)(aiStack_60 + iVar13),uVar12);
      iVar18 = iVar18 + 1;
    } while (iVar18 < 3);
    local_b8 = (float)((int)local_b8 + 1);
  } while ((int)local_b8 < 2);
  cVar17 = (-(param_2 != 0) & 8U) + 0x21;
  FUN_004285d0(cVar17,1);
  uVar9 = __ftol();
  uVar15 = CONCAT22((short)((uint)iVar18 >> 0x10),uVar9);
  uVar12 = __ftol(uVar15);
  FUN_00428660(cVar17,uVar12);
  FUN_004286f0(cVar17,0x3f400000,0x3f400000);
  uVar12 = __ftol();
  FUN_00428740(cVar17,local_8c,local_80,local_7c,uVar12);
  cVar17 = (-(param_2 != 0) & 8U) + 0x22;
  FUN_004285d0(cVar17,1);
  uVar12 = __ftol(uVar15);
  FUN_00428660(cVar17,uVar12);
  FUN_004286f0(cVar17,0x3f400000,0x3f400000);
  uVar12 = __ftol();
  FUN_00428740(cVar17,local_70,local_80,local_78,uVar12);
  return;
}

#endif
