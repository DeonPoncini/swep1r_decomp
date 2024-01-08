#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#include "kernel32.h"

#if 0
uint * FUN_0049ed50(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;

  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    uVar4 = (uint)param_1 & 3;
    while (uVar4 != 0) {
      if (*(char *)param_1 == cVar3) {
        return param_1;
      }
      if (*(char *)param_1 == '\0') {
        return (uint *)0x0;
      }
      uVar4 = (uint)(uint *)((int)param_1 + 1) & 3;
      param_1 = (uint *)((int)param_1 + 1);
    }
    while( true ) {
      while( true ) {
        uVar4 = *param_1;
        uVar9 = uVar4 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar7 = uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & 0x81010100) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (uint *)0x0;
          }
          if ((uVar4 + 0x7efefeff & 0x80000000) == 0) {
            return (uint *)0x0;
          }
        }
      }
      uVar4 = *param_1;
      if ((char)uVar4 == cVar3) {
        return param_1;
      }
      if ((char)uVar4 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar4 >> 8);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 1);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar4 >> 0x10);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 2);
      }
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar4 >> 0x18);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
    }
    return (uint *)0x0;
  }
  do {
    cVar6 = *(char *)param_1;
    do {
      while (puVar10 = param_1, param_1 = (uint *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (uint *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar5 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)(uint *)((int)puVar5 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar5 + 3);
      pcVar8 = pcVar8 + 2;
      puVar5 = (uint *)((int)puVar5 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



undefined4 * FUN_0049edd0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  bool bVar10;

  pcVar6 = (char *)0x0;
  if (DAT_00dfab38 == 0) {
    puVar2 = param_1;
    if (*(char *)param_1 != '\0') {
      do {
        cVar1 = *(char *)param_1;
        if (('@' < cVar1) && (cVar1 < '[')) {
          *(char *)param_1 = cVar1 + ' ';
        }
        pcVar6 = (char *)((int)param_1 + 1);
        param_1 = (undefined4 *)((int)param_1 + 1);
      } while (*pcVar6 != '\0');
      return puVar2;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_00ecd60c);
    bVar10 = DAT_00ecd608 != 0;
    if (bVar10) {
      InterlockedDecrement((LONG *)&DAT_00ecd60c);
      FUN_004a1670(0x13);
    }
    if (DAT_00dfab38 == 0) {
      if (bVar10) {
        FUN_004a16f0(0x13);
      }
      else {
        InterlockedDecrement((LONG *)&DAT_00ecd60c);
      }
      puVar2 = param_1;
      if (*(char *)param_1 != '\0') {
        do {
          cVar1 = *(char *)param_1;
          if (('@' < cVar1) && (cVar1 < '[')) {
            *(char *)param_1 = cVar1 + ' ';
          }
          pcVar6 = (char *)((int)param_1 + 1);
          param_1 = (undefined4 *)((int)param_1 + 1);
        } while (*pcVar6 != '\0');
        return puVar2;
      }
    }
    else {
      iVar3 = FUN_004a29a0(DAT_00dfab38,0x100,param_1,0xffffffff,0,0,0,1);
      if (((iVar3 != 0) && (pcVar6 = (char *)FUN_0049f270(iVar3), pcVar6 != (char *)0x0)) &&
         (iVar3 = FUN_004a29a0(DAT_00dfab38,0x100,param_1,0xffffffff,pcVar6,iVar3,0,1), iVar3 != 0))
      {
        uVar4 = 0xffffffff;
        pcVar7 = pcVar6;
        do {
          pcVar8 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        puVar2 = (undefined4 *)(pcVar8 + -uVar4);
        puVar9 = param_1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined *)puVar9 = *(undefined *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      if (bVar10) {
        FUN_004a16f0(0x13);
        FUN_0049f200(pcVar6);
        return param_1;
      }
      InterlockedDecrement((LONG *)&DAT_00ecd60c);
      FUN_0049f200(pcVar6);
    }
  }
  return param_1;
}



undefined4 * FUN_0049ef50(undefined4 *param_1,short *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;

  puVar4 = param_1;
  if (param_3 != 0) {
    do {
      sVar1 = *param_2;
      param_2 = param_2 + 1;
      *(short *)puVar4 = sVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
      if (sVar1 == 0) break;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    if ((param_3 != 0) && (uVar2 = param_3 - 1, uVar2 != 0)) {
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
      }
    }
  }
  return param_1;
}



float10 FUN_0049ef90(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined local_18 [24];

  while( true ) {
    if (DAT_004d1f9c < 2) {
      uVar2 = (byte)PTR_DAT_004d1d90[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_0049f440(*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = 0xffffffff;
  pbVar4 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  iVar3 = FUN_004a2bd0(local_18,param_1,~uVar2 - 1,0,0);
  return (float10)*(double *)(iVar3 + 0x10);
}



// Library Function - Single Match
//  _strncmp
//
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;

  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    _MaxCount = ~uVar5;
  }
  return _MaxCount;
}



int FUN_0049f040(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;

  while( true ) {
    if (DAT_004d1f9c < 2) {
      uVar2 = (byte)PTR_DAT_004d1d90[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_0049f440(*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  pbVar6 = param_1 + 1;
  if ((uVar2 == 0x2d) || (uVar4 = uVar2, uVar2 == 0x2b)) {
    uVar4 = (uint)*pbVar6;
    pbVar6 = param_1 + 2;
  }
  iVar5 = 0;
  while( true ) {
    if (DAT_004d1f9c < 2) {
      uVar3 = (byte)PTR_DAT_004d1d90[uVar4 * 2] & 4;
    }
    else {
      uVar3 = FUN_0049f440(uVar4,4);
    }
    if (uVar3 == 0) break;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar5 = (uVar4 - 0x30) + iVar5 * 10;
    uVar4 = (uint)bVar1;
  }
  if (uVar2 == 0x2d) {
    iVar5 = -iVar5;
  }
  return iVar5;
}



void FUN_0049f0e0(undefined4 param_1)

{
  FUN_0049f040(param_1);
  return;
}



undefined4 FUN_0049f0f0(int param_1)

{
  undefined4 uVar1;

  if ((*(byte *)(param_1 + 0xc) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 0xffffffff;
  }
  FUN_004a1710(param_1);
  uVar1 = FUN_0049f130(param_1);
  FUN_004a1780(param_1);
  return uVar1;
}



undefined4 FUN_0049f130(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 0xc) & 0x83) != 0) {
    uVar2 = FUN_004a2d30(param_1);
    FUN_004a2cb0(param_1);
    iVar1 = FUN_004a03e0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      return 0xffffffff;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_0049f200(*(int *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar2;
}



undefined4 FUN_0049f1a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_004a3040();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_004a2e70(param_1,param_2,param_3,iVar1);
  FUN_004a1780(iVar1);
  return uVar2;
}



void FUN_0049f1e0(undefined4 param_1,undefined4 param_2)

{
  FUN_0049f1a0(param_1,param_2,0x40);
  return;
}

// Library Function - Single Match
//  _strncpy
//
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;

  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      cVar3 = *_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = cVar3;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if (cVar3 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x0049f37e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_0049f3bb;
        goto LAB_0049f429;
      }
      *(undefined *)puVar5 = 0;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x0049f425:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_0049f429:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_0049f3bb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x0049f425;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x0049f425;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x0049f425;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x0049f37e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = *_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_0049f3bb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



uint FUN_0049f440(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_4;

  iVar2 = param_1;
  if (param_1 + 1U < 0x101) {
    return *(ushort *)(PTR_DAT_004d1d90 + param_1 * 2) & param_2;
  }
  if ((PTR_DAT_004d1d90[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    param_1._0_2_ = (ushort)(byte)param_1;
    uVar1 = 1;
  }
  else {
    param_1._0_2_ = CONCAT11((byte)param_1,(char)((uint)param_1 >> 8));
    param_1._0_3_ = (uint3)(ushort)param_1;
    uVar1 = 2;
  }
  iVar2 = FUN_004a3b00(1,&param_1,uVar1,&local_4,0,0,1);
  if (iVar2 == 0) {
    return 0;
  }
  return local_4 & 0xffff & param_2;
}



undefined4 * FUN_0049f4e0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;

  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    param_2 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar2 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar2 & 3) == 0) {
      uVar1 = param_3 >> 2;
      param_3 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar2 = *param_2;
          param_2 = param_2 + -1;
          puVar2 = puVar2 + -1;
        }
        switch(param_3) {
        case 0:
          return param_1;
        case 2:
          goto switchD_0049f697_caseD_2;
        case 3:
          goto switchD_0049f697_caseD_3;
        }
        goto switchD_0049f697_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_0049f697_caseD_0;
      case 1:
        goto switchD_0049f697_caseD_1;
      case 2:
        goto switchD_0049f697_caseD_2;
      case 3:
        goto switchD_0049f697_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar2 & 3);
        switch((uint)puVar2 & 3) {
        case 1:
          param_3 = uVar1 & 3;
          *(undefined *)((int)puVar2 + 3) = *(undefined *)((int)param_2 + 3);
          param_2 = (undefined4 *)((int)param_2 + -1);
          uVar1 = uVar1 >> 2;
          puVar2 = (undefined4 *)((int)puVar2 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar2 = *param_2;
              param_2 = param_2 + -1;
              puVar2 = puVar2 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0049f697_caseD_2;
            case 3:
              goto switchD_0049f697_caseD_3;
            }
            goto switchD_0049f697_caseD_1;
          }
          break;
        case 2:
          param_3 = uVar1 & 3;
          *(undefined *)((int)puVar2 + 3) = *(undefined *)((int)param_2 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar2 + 2) = *(undefined *)((int)param_2 + 2);
          param_2 = (undefined4 *)((int)param_2 + -2);
          puVar2 = (undefined4 *)((int)puVar2 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar2 = *param_2;
              param_2 = param_2 + -1;
              puVar2 = puVar2 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0049f697_caseD_2;
            case 3:
              goto switchD_0049f697_caseD_3;
            }
            goto switchD_0049f697_caseD_1;
          }
          break;
        case 3:
          param_3 = uVar1 & 3;
          *(undefined *)((int)puVar2 + 3) = *(undefined *)((int)param_2 + 3);
          *(undefined *)((int)puVar2 + 2) = *(undefined *)((int)param_2 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar2 + 1) = *(undefined *)((int)param_2 + 1);
          param_2 = (undefined4 *)((int)param_2 + -3);
          puVar2 = (undefined4 *)((int)puVar2 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar2 = *param_2;
              param_2 = param_2 + -1;
              puVar2 = puVar2 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0049f697_caseD_2;
            case 3:
              goto switchD_0049f697_caseD_3;
            }
            goto switchD_0049f697_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar2[7 - uVar1] = param_2[7 - uVar1];
    case 6:
      puVar2[6 - uVar1] = param_2[6 - uVar1];
    case 5:
      puVar2[5 - uVar1] = param_2[5 - uVar1];
    case 4:
      puVar2[4 - uVar1] = param_2[4 - uVar1];
    case 3:
      puVar2[3 - uVar1] = param_2[3 - uVar1];
    case 2:
      puVar2[2 - uVar1] = param_2[2 - uVar1];
    case 1:
      puVar2[1 - uVar1] = param_2[1 - uVar1];
      param_2 = param_2 + -uVar1;
      puVar2 = puVar2 + -uVar1;
    }
    switch(param_3) {
    case 1:
switchD_0049f697_caseD_1:
      *(undefined *)((int)puVar2 + 3) = *(undefined *)((int)param_2 + 3);
      return param_1;
    case 2:
switchD_0049f697_caseD_2:
      *(undefined *)((int)puVar2 + 3) = *(undefined *)((int)param_2 + 3);
      *(undefined *)((int)puVar2 + 2) = *(undefined *)((int)param_2 + 2);
      return param_1;
    case 3:
switchD_0049f697_caseD_3:
      *(undefined *)((int)puVar2 + 3) = *(undefined *)((int)param_2 + 3);
      *(undefined *)((int)puVar2 + 2) = *(undefined *)((int)param_2 + 2);
      *(undefined *)((int)puVar2 + 1) = *(undefined *)((int)param_2 + 1);
      return param_1;
    }
switchD_0049f697_caseD_0:
    return param_1;
  }
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    param_3 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
      switch(param_3) {
      case 0:
        return param_1;
      case 2:
        goto switchD_0049f515_caseD_2;
      case 3:
        goto switchD_0049f515_caseD_3;
      }
      goto switchD_0049f515_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_0049f515_caseD_0;
    case 1:
      goto switchD_0049f515_caseD_1;
    case 2:
      goto switchD_0049f515_caseD_2;
    case 3:
      goto switchD_0049f515_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        param_3 = uVar1 & 3;
        *(undefined *)param_1 = *(undefined *)param_2;
        *(undefined *)((int)param_1 + 1) = *(undefined *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)param_1 + 2) = *(undefined *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar2 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0049f515_caseD_2;
          case 3:
            goto switchD_0049f515_caseD_3;
          }
          goto switchD_0049f515_caseD_1;
        }
        break;
      case 2:
        param_3 = uVar1 & 3;
        *(undefined *)param_1 = *(undefined *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)param_1 + 1) = *(undefined *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar2 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0049f515_caseD_2;
          case 3:
            goto switchD_0049f515_caseD_3;
          }
          goto switchD_0049f515_caseD_1;
        }
        break;
      case 3:
        param_3 = uVar1 & 3;
        *(undefined *)param_1 = *(undefined *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar2 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0049f515_caseD_2;
          case 3:
            goto switchD_0049f515_caseD_3;
          }
          goto switchD_0049f515_caseD_1;
        }
      }
    }
  }
                    // WARNING: Could not find normalized switch variable to match jumptable
  switch(uVar1) {
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar2[uVar1 - 7] = param_2[uVar1 - 7];
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar2[uVar1 - 6] = param_2[uVar1 - 6];
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar2[uVar1 - 5] = param_2[uVar1 - 5];
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar2[uVar1 - 4] = param_2[uVar1 - 4];
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar2[uVar1 - 3] = param_2[uVar1 - 3];
  case 8:
  case 9:
  case 10:
  case 0xb:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar2[uVar1 - 2] = param_2[uVar1 - 2];
  case 4:
  case 5:
  case 6:
  case 7:
    puVar2[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar2 = puVar2 + uVar1;
  }
  switch(param_3) {
  case 1:
switchD_0049f515_caseD_1:
    *(undefined *)puVar2 = *(undefined *)param_2;
    return param_1;
  case 2:
switchD_0049f515_caseD_2:
    *(undefined *)puVar2 = *(undefined *)param_2;
    *(undefined *)((int)puVar2 + 1) = *(undefined *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_0049f515_caseD_3:
    *(undefined *)puVar2 = *(undefined *)param_2;
    *(undefined *)((int)puVar2 + 1) = *(undefined *)((int)param_2 + 1);
    *(undefined *)((int)puVar2 + 2) = *(undefined *)((int)param_2 + 2);
    return param_1;
  }
switchD_0049f515_caseD_0:
  return param_1;
}



uint FUN_0049f820(void)

{
  uint uVar1;
  int iVar2;

  iVar2 = FUN_004a3cc0();
  uVar1 = *(int *)(iVar2 + 0x14) * 0x343fd + 0x269ec3;
  *(uint *)(iVar2 + 0x14) = uVar1;
  return uVar1 >> 0x10 & 0x7fff;
}



undefined4 FUN_0049f850(undefined *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *local_20;
  int local_1c;
  undefined *local_18;
  undefined4 local_14;

  local_18 = param_1;
  local_20 = param_1;
  local_1c = param_2;
  local_14 = 0x42;
  uVar1 = FUN_004a1920(&local_20,param_3,&stack0x00000010);
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    *local_20 = 0;
    return uVar1;
  }
  FUN_004a17f0(0,&local_20);
  return uVar1;
}



void FUN_0049f8c0(uint param_1,uint param_2,uint param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_100;
  uint *local_fc;
  uint *local_f8;
  int local_f4;
  uint local_f0 [30];
  uint local_78 [30];

  if ((param_2 < 2) || (param_3 == 0)) {
    return;
  }
  local_100 = (param_2 - 1) * param_3 + param_1;
  local_fc = local_f0;
  local_f8 = local_78;
  local_f4 = 0;
LAB_0049f914:
  uVar1 = (local_100 - param_1) / param_3 + 1;
  if (8 < uVar1) {
    FUN_0049fad0((uVar1 >> 1) * param_3 + param_1,param_1,param_3);
    uVar3 = local_100 + param_3;
    uVar1 = param_1;
LAB_0049f98e:
    uVar1 = uVar1 + param_3;
    if (uVar1 <= local_100) goto code_r0x0049f998;
    goto LAB_0049f9a8;
  }
  FUN_0049fa70(param_1,local_100,param_3,param_4);
  goto LAB_0049f935;
code_r0x0049f998:
  iVar2 = (*param_4)(uVar1,param_1);
  if (iVar2 < 1) goto LAB_0049f98e;
LAB_0049f9a8:
  do {
    uVar3 = uVar3 - param_3;
    if (uVar3 <= param_1) break;
    iVar2 = (*param_4)(uVar3,param_1);
  } while (-1 < iVar2);
  if (uVar1 <= uVar3) {
    FUN_0049fad0(uVar1,uVar3,param_3);
    goto LAB_0049f98e;
  }
  FUN_0049fad0(param_1,uVar3,param_3);
  if ((int)((uVar3 - param_1) + -1) < (int)(local_100 - uVar1)) {
    if (uVar1 < local_100) {
      *local_f8 = uVar1;
      *local_fc = local_100;
      local_f4 = local_f4 + 1;
      local_f8 = local_f8 + 1;
      local_fc = local_fc + 1;
    }
    if (param_1 + param_3 < uVar3) {
      local_100 = uVar3 - param_3;
      goto LAB_0049f914;
    }
  }
  else {
    if (param_1 + param_3 < uVar3) {
      *local_f8 = param_1;
      *local_fc = uVar3 - param_3;
      local_f4 = local_f4 + 1;
      local_f8 = local_f8 + 1;
      local_fc = local_fc + 1;
    }
    param_1 = uVar1;
    if (uVar1 < local_100) goto LAB_0049f914;
  }
LAB_0049f935:
  local_f4 = local_f4 + -1;
  local_f8 = local_f8 + -1;
  local_fc = local_fc + -1;
  if (local_f4 < 0) {
    return;
  }
  local_100 = *local_fc;
  param_1 = *local_f8;
  goto LAB_0049f914;
}



void FUN_0049fa70(uint param_1,uint param_2,int param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;

  if (param_1 < param_2) {
    uVar1 = param_3 + param_1;
    uVar3 = param_1;
    do {
      for (; uVar1 <= param_2; uVar1 = uVar1 + param_3) {
        iVar2 = (*param_4)(uVar1,uVar3);
        if (0 < iVar2) {
          uVar3 = uVar1;
        }
      }
      FUN_0049fad0(uVar3,param_2,param_3);
      param_2 = param_2 - param_3;
      uVar1 = param_3 + param_1;
      uVar3 = param_1;
    } while (param_1 < param_2);
  }
  return;
}



void FUN_0049fad0(undefined *param_1,undefined *param_2,int param_3)

{
  undefined uVar1;

  if ((param_1 != param_2) && (param_3 != 0)) {
    do {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



uint * FUN_0049fb10(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;

  uVar1 = (uint)param_1 & 3;
  while (uVar1 != 0) {
    if (*(char *)param_1 == param_2) {
      return param_1;
    }
    if (*(char *)param_1 == '\0') {
      return (uint *)0x0;
    }
    uVar1 = (uint)(uint *)((int)param_1 + 1) & 3;
    param_1 = (uint *)((int)param_1 + 1);
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



undefined4 FUN_0049fbd0(undefined4 param_1)

{
  undefined4 uVar1;

  FUN_004a1710(param_1);
  uVar1 = FUN_0049fc00(param_1);
  FUN_004a1780(param_1);
  return uVar1;
}



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



uint FUN_0049fdb0(undefined4 param_1,uint param_2,uint param_3,int param_4,code *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar3 = (param_3 - 1) * param_4 + param_2;
  bVar1 = param_2 <= uVar3;
  uVar4 = param_2;
  param_2 = uVar3;
  if (bVar1) {
    while (uVar3 = param_3 >> 1, uVar3 != 0) {
      uVar5 = uVar3;
      if ((param_3 & 1) == 0) {
        uVar5 = uVar3 - 1;
      }
      uVar5 = param_4 * uVar5 + uVar4;
      iVar2 = (*param_5)(param_1,uVar5);
      if (iVar2 == 0) {
        return uVar5;
      }
      if (iVar2 < 0) {
        param_2 = uVar5 - param_4;
        if ((param_3 & 1) == 0) {
          uVar3 = uVar3 - 1;
        }
      }
      else {
        uVar4 = uVar5 + param_4;
      }
      param_3 = uVar3;
      if (param_2 < uVar4) {
        return 0;
      }
    }
    if (param_3 != 0) {
      iVar2 = (*param_5)(param_1,uVar4);
      return ~-(uint)(iVar2 != 0) & uVar4;
    }
  }
  return 0;
}



int FUN_0049fe50(int param_1)

{
  bool bVar1;

  if (DAT_00dfab38 == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_00ecd60c);
    bVar1 = DAT_00ecd608 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_00ecd60c);
      FUN_004a1670(0x13);
    }
    param_1 = FUN_0049fee0(param_1);
    if (bVar1) {
      FUN_004a16f0(0x13);
      return param_1;
    }
    InterlockedDecrement((LONG *)&DAT_00ecd60c);
  }
  return param_1;
}



uint FUN_0049fee0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_8 [2];

  uVar1 = param_1;
  if (DAT_00dfab38 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_004d1f9c < 2) {
        uVar2 = (byte)PTR_DAT_004d1d90[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_0049f440(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_004d1d90[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      uVar3 = 1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._0_3_ = (uint3)(ushort)param_1;
      uVar3 = 2;
    }
    iVar4 = FUN_004a29a0(DAT_00dfab38,0x100,&param_1,uVar3,local_8,3,0,1);
    if (iVar4 == 0) {
      return uVar1;
    }
    if (iVar4 == 1) {
      return local_8[0] & 0xff;
    }
    param_1 = (local_8[0] >> 8 & 0xff) << 8 | local_8[0] & 0xff;
  }
  return param_1;
}



undefined4 FUN_0049ffe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;

  FUN_004a1710(param_4);
  uVar1 = FUN_004a0020(param_1,param_2,param_3,param_4);
  FUN_004a1780(param_4);
  return uVar1;
}



uint FUN_004a0020(undefined4 *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;

  piVar1 = param_4;
  uVar6 = param_3 * param_2;
  if (uVar6 == 0) {
    return 0;
  }
  uVar7 = uVar6;
  if ((param_4[3] & 0x10cU) == 0) {
    param_4 = (int *)0x1000;
    uVar5 = 0x1000;
  }
  else {
    uVar5 = param_4[6];
    param_4 = (int *)uVar5;
  }
  do {
    if (((piVar1[3] & 0x10cU) == 0) || (uVar2 = piVar1[1], uVar2 == 0)) {
      if (uVar7 < uVar5) {
        iVar4 = FUN_004a40f0(piVar1);
        if (iVar4 == -1) {
          return (uVar6 - uVar7) / param_2;
        }
        *(char *)param_1 = (char)iVar4;
        uVar5 = piVar1[6];
        param_1 = (undefined4 *)((int)param_1 + 1);
        iVar4 = -1;
        param_4 = (int *)uVar5;
      }
      else {
        uVar2 = uVar7;
        if (uVar5 != 0) {
          uVar2 = uVar7 - uVar7 % uVar5;
        }
        iVar3 = FUN_004a41e0(piVar1[4],param_1,uVar2);
        if (iVar3 == 0) {
          piVar1[3] = piVar1[3] | 0x10;
          return (uVar6 - uVar7) / param_2;
        }
        if (iVar3 == -1) {
          piVar1[3] = piVar1[3] | 0x20;
          return (uVar6 - uVar7) / param_2;
        }
        iVar4 = -iVar3;
        param_1 = (undefined4 *)((int)param_1 + iVar3);
      }
    }
    else {
      if (uVar7 < uVar2) {
        uVar2 = uVar7;
      }
      iVar4 = -uVar2;
      puVar8 = (undefined4 *)*piVar1;
      puVar9 = param_1;
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined *)puVar9 = *(undefined *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + uVar2);
      piVar1[1] = piVar1[1] - uVar2;
      *piVar1 = *piVar1 + uVar2;
      uVar5 = (uint)param_4;
    }
    uVar7 = uVar7 + iVar4;
    if (uVar7 == 0) {
      return param_3;
    }
  } while( true );
}



undefined4 FUN_004a0160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;

  FUN_004a1710(param_4);
  uVar1 = FUN_004a01a0(param_1,param_2,param_3,param_4);
  FUN_004a1780(param_4);
  return uVar1;
}



uint FUN_004a01a0(undefined4 *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;

  piVar1 = param_4;
  uVar5 = param_3 * param_2;
  if (uVar5 == 0) {
    return 0;
  }
  uVar6 = uVar5;
  if ((param_4[3] & 0x10cU) == 0) {
    param_4 = (int *)0x1000;
  }
  else {
    param_4 = (int *)param_4[6];
  }
  do {
    if (((piVar1[3] & 0x108U) == 0) || (uVar2 = piVar1[1], uVar2 == 0)) {
      if (uVar6 < param_4) {
        iVar3 = FUN_004a17f0((int)*(char *)param_1,piVar1);
        if (iVar3 == -1) goto LAB_004a02d4;
        param_4 = (int *)piVar1[6];
        param_1 = (undefined4 *)((int)param_1 + 1);
        uVar6 = uVar6 - 1;
        if ((int)param_4 < 1) {
          param_4 = (int *)0x1;
        }
      }
      else {
        if (((piVar1[3] & 0x108U) != 0) && (iVar3 = FUN_004a2d30(piVar1), iVar3 != 0)) {
LAB_004a02d4:
          return (uVar5 - uVar6) / param_2;
        }
        uVar2 = uVar6;
        if (param_4 != (int *)0x0) {
          uVar2 = uVar6 - uVar6 % (uint)param_4;
        }
        uVar4 = FUN_004a4490(piVar1[4],param_1,uVar2);
        if (uVar4 == 0xffffffff) {
LAB_004a02b9:
          piVar1[3] = piVar1[3] | 0x20;
          return (uVar5 - uVar6) / param_2;
        }
        uVar6 = uVar6 - uVar4;
        param_1 = (undefined4 *)((int)param_1 + uVar4);
        if (uVar4 < uVar2) goto LAB_004a02b9;
      }
    }
    else {
      if (uVar6 < uVar2) {
        uVar2 = uVar6;
      }
      uVar6 = uVar6 - uVar2;
      puVar7 = param_1;
      puVar8 = (undefined4 *)*piVar1;
      for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined *)puVar8 = *(undefined *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + uVar2);
      piVar1[1] = piVar1[1] - uVar2;
      *piVar1 = *piVar1 + uVar2;
    }
    if (uVar6 == 0) {
      return param_3;
    }
  } while( true );
}



uint FUN_004a02f0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 local_20 [8];

  iVar3 = FUN_004a3cc0();
  puVar6 = local_20;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    *(byte *)((int)local_20 + (uint)(bVar1 >> 3)) =
         *(byte *)((int)local_20 + (uint)(bVar1 >> 3)) | '\x01' << (bVar1 & 7);
  } while (bVar1 != 0);
  if (param_1 == (byte *)0x0) {
    param_1 = *(byte **)(iVar3 + 0x18);
  }
  bVar1 = *param_1;
  bVar2 = *(byte *)((int)local_20 + (uint)(bVar1 >> 3)) & (byte)(1 << (bVar1 & 7));
  while ((bVar2 != 0 && (bVar1 != 0))) {
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
    bVar2 = *(byte *)((int)local_20 + (uint)(bVar1 >> 3)) & (byte)(1 << (bVar1 & 7));
  }
  bVar1 = *param_1;
  pbVar5 = param_1;
  do {
    if (bVar1 == 0) {
LAB_004a03bf:
      *(byte **)(iVar3 + 0x18) = pbVar5;
      return -(uint)(param_1 != pbVar5) & (uint)param_1;
    }
    if ((*(byte *)((int)local_20 + (uint)(bVar1 >> 3)) & (byte)(1 << (bVar1 & 7))) != 0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      goto LAB_004a03bf;
    }
    bVar1 = pbVar5[1];
    pbVar5 = pbVar5 + 1;
  } while( true );
}



undefined4 FUN_004a03e0(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  if ((param_1 < DAT_00ecd600) &&
     ((*(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_004a4a30(param_1);
    uVar1 = FUN_004a0450(param_1);
    FUN_004a4aa0(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004a3dd0();
  *puVar2 = 0;
  return 0xffffffff;
}



undefined4 FUN_004a0450(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;

  iVar1 = FUN_004a49e0(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_004a49e0(1);
      iVar2 = FUN_004a49e0(2);
      if (iVar1 == iVar2) goto LAB_004a04a6;
    }
    hObject = (HANDLE)FUN_004a49e0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_004a04a8;
    }
  }
LAB_004a04a6:
  DVar4 = 0;
LAB_004a04a8:
  FUN_004a4940(param_1);
  *(undefined *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_004a3d40(DVar4);
    return 0xffffffff;
  }
  return 0;
}



int FUN_004a04e0(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;

  if ((param_1 < DAT_00ecd600) &&
     ((*(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_004a4a30(param_1);
    iVar1 = FUN_004a4070(param_1,0,1);
    if (iVar1 == -1) {
      FUN_004a4aa0(param_1);
      return -1;
    }
    iVar2 = FUN_004a4070(param_1,0,2);
    if (iVar1 != iVar2) {
      FUN_004a4070(param_1,iVar1,0);
    }
    FUN_004a4aa0(param_1);
    return iVar2;
  }
  puVar3 = (undefined4 *)FUN_004a3dc0();
  *puVar3 = 9;
  puVar3 = (undefined4 *)FUN_004a3dd0();
  *puVar3 = 0;
  return -1;
}



void FUN_004a0590(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004a05b0(param_1,param_2,0x40,param_3);
  return;
}



uint FUN_004a05b0(LPCSTR param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  HANDLE hFile;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  int iVar7;
  bool bVar8;
  byte local_11;
  uint local_10;
  _SECURITY_ATTRIBUTES local_c;

  bVar8 = (param_2 & 0x80) == 0;
  local_c.nLength = 0xc;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar8) {
    local_11 = 0;
  }
  else {
    local_11 = 0x10;
  }
  local_c.bInheritHandle = (BOOL)bVar8;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_00dfab74 != 0x8000)))) {
    local_11 = local_11 | 0x80;
  }
  uVar1 = param_2 & 3;
  if (uVar1 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar1 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar1 != 2) goto switchD_004a0648_caseD_11;
    local_10 = 0xc0000000;
  }
  switch(param_3) {
  case 0x10:
    DVar6 = 0;
    break;
  default:
    goto switchD_004a0648_caseD_11;
  case 0x20:
    DVar6 = 1;
    break;
  case 0x30:
    DVar6 = 2;
    break;
  case 0x40:
    DVar6 = 3;
  }
  uVar1 = param_2 & 0x700;
  if (uVar1 < 0x101) {
    if (uVar1 == 0x100) {
      dwCreationDisposition = 4;
    }
    else {
      if (uVar1 != 0) goto switchD_004a0648_caseD_11;
LAB_004a06b6:
      dwCreationDisposition = 3;
    }
  }
  else if (uVar1 < 0x301) {
    if (uVar1 == 0x300) {
      dwCreationDisposition = 2;
    }
    else {
      if (uVar1 != 0x200) goto switchD_004a0648_caseD_11;
LAB_004a06d6:
      dwCreationDisposition = 5;
    }
  }
  else {
    if (uVar1 < 0x501) {
      if (uVar1 != 0x500) {
        if (uVar1 != 0x400) {
switchD_004a0648_caseD_11:
          puVar5 = (undefined4 *)FUN_004a3dc0();
          *puVar5 = 0x16;
          puVar5 = (undefined4 *)FUN_004a3dd0();
          *puVar5 = 0;
          return 0xffffffff;
        }
        goto LAB_004a06b6;
      }
    }
    else {
      if (uVar1 == 0x600) goto LAB_004a06d6;
      if (uVar1 != 0x700) goto switchD_004a0648_caseD_11;
    }
    dwCreationDisposition = 1;
  }
  dwFlagsAndAttributes = 0x80;
  if (((param_2 & 0x100) != 0) && (((byte)param_4 & ~(byte)DAT_00dfaa74 & 0x80) == 0)) {
    dwFlagsAndAttributes = 1;
  }
  if ((param_2 & 0x40) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x4000000;
    local_10 = local_10 | 0x10000;
  }
  if ((param_2 & 0x1000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      dwFlagsAndAttributes = dwFlagsAndAttributes | 0x10000000;
    }
  }
  else {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x8000000;
  }
  uVar1 = FUN_004a4720();
  if (uVar1 == 0xffffffff) {
    puVar5 = (undefined4 *)FUN_004a3dc0();
    *puVar5 = 0x18;
    puVar5 = (undefined4 *)FUN_004a3dd0();
    *puVar5 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,DVar6,&local_c,dwCreationDisposition,dwFlagsAndAttributes,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar6 = GetFileType(hFile);
    if (DVar6 != 0) {
      if (DVar6 == 2) {
        local_11 = local_11 | 0x40;
      }
      else if (DVar6 == 3) {
        local_11 = local_11 | 8;
      }
      FUN_004a4890(uVar1,hFile);
      iVar7 = (uVar1 & 0x1f) * 0x24;
      *(byte *)(iVar7 + 4 + (&DAT_00ecd500)[(int)uVar1 >> 5]) = local_11 | 1;
      if ((((local_11 & 0x48) == 0) && ((local_11 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        iVar2 = FUN_004a4070(uVar1,0xffffffff,2);
        if (iVar2 == -1) {
          piVar3 = (int *)FUN_004a3dd0();
          if (*piVar3 != 0x83) {
LAB_004a0896:
            FUN_004a03e0(uVar1);
            FUN_004a4aa0(uVar1);
            return 0xffffffff;
          }
        }
        else {
          param_3 = param_3 & 0xffffff00;
          iVar4 = FUN_004a4260(uVar1,&param_3,1);
          if ((((iVar4 == 0) && ((char)param_3 == '\x1a')) &&
              (iVar2 = FUN_004a4ad0(uVar1,iVar2), iVar2 == -1)) ||
             (iVar2 = FUN_004a4070(uVar1,0,0), iVar2 == -1)) goto LAB_004a0896;
        }
      }
      if (((local_11 & 0x48) == 0) && ((param_2 & 8) != 0)) {
        *(byte *)(iVar7 + 4 + (&DAT_00ecd500)[(int)uVar1 >> 5]) =
             *(byte *)(iVar7 + 4 + (&DAT_00ecd500)[(int)uVar1 >> 5]) | 0x20;
      }
      FUN_004a4aa0(uVar1);
      return uVar1;
    }
    CloseHandle(hFile);
  }
  DVar6 = GetLastError();
  FUN_004a3d40(DVar6);
  FUN_004a4aa0(uVar1);
  return 0xffffffff;
}



undefined4 FUN_004a0950(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;

  FUN_004a1710(param_1);
  uVar1 = FUN_004a0990(param_1,param_2,param_3);
  FUN_004a1780(param_1);
  return uVar1;
}



int FUN_004a0990(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;

  if (((*(uint *)(param_1 + 0xc) & 0x83) != 0) &&
     (((param_3 == 0 || (param_3 == 1)) || (param_3 == 2)))) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_0049fc00(param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_004a2d30(param_1);
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        *(undefined4 *)(param_1 + 0x18) = 0x200;
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar1 & 0xfffffffc;
    }
    iVar2 = FUN_004a3ff0(*(undefined4 *)(param_1 + 0x10),param_2,param_3);
    return (iVar2 != -1) - 1;
  }
  puVar3 = (undefined4 *)FUN_004a3dc0();
  *puVar3 = 0x16;
  return -1;
}



// WARNING: Unable to track spacebase fully for stack

void FUN_004a0a30(void)

{
  uint in_EAX;
  undefined *puVar1;
  undefined4 unaff_retaddr;

  puVar1 = &stack0x00000004;
  if (0xfff < in_EAX) {
    do {
      puVar1 = puVar1 + -0x1000;
      in_EAX = in_EAX - 0x1000;
    } while (0xfff < in_EAX);
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004a0a60(void)

{
  byte bVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  HMODULE pHVar5;
  byte *pbVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar8;
  _STARTUPINFOA local_60;
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  byte *pbVar7;

  local_8 = 0xffffffff;
  puStack_c = &DAT_004af9c8;
  puStack_10 = &LAB_004a59d8;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  local_1c = &stack0xffffff88;
  DVar2 = GetVersion();
  _DAT_00dfaa84 = DVar2 >> 8 & 0xff;
  _DAT_00dfaa80 = DVar2 & 0xff;
  _DAT_00dfaa7c = _DAT_00dfaa80 * 0x100 + _DAT_00dfaa84;
  _DAT_00dfaa78 = DVar2 >> 0x10;
  iVar3 = FUN_004a3120();
  if (iVar3 == 0) {
    FUN_004a0c40(0x1c);
  }
  iVar3 = FUN_004a3c40();
  if (iVar3 == 0) {
    FUN_004a0c40(0x10);
  }
  local_8 = 0;
  FUN_004a3de0();
  FUN_004a58d0();
  DAT_00ecd610 = (byte *)GetCommandLineA();
  DAT_00dfaac0 = FUN_004a5270();
  if ((DAT_00dfaac0 == 0) || (DAT_00ecd610 == (byte *)0x0)) {
    FUN_0049ea40(0xffffffff);
  }
  FUN_004a4fc0();
  FUN_004a4ed0();
  FUN_0049ea10();
  pbVar6 = DAT_00ecd610;
  if (*DAT_00ecd610 == 0x22) {
    while( true ) {
      pbVar7 = pbVar6;
      pbVar6 = pbVar7 + 1;
      bVar1 = *pbVar6;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar3 = FUN_004a4e70(bVar1);
      if (iVar3 != 0) {
        pbVar6 = pbVar7 + 2;
      }
    }
    if (*pbVar6 == 0x22) {
      pbVar6 = pbVar7 + 2;
    }
  }
  else {
    for (; 0x20 < *pbVar6; pbVar6 = pbVar6 + 1) {
    }
  }
  for (; (*pbVar6 != 0 && (*pbVar6 < 0x21)); pbVar6 = pbVar6 + 1) {
  }
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = local_60._48_4_ & 0xffff;
  }
  uVar8 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar8 = FUN_004238d0(pHVar5,uVar8,pbVar6,uVar4);
  FUN_0049ea40(uVar8);
  *unaff_FS_OFFSET = local_14;
  return;
}



// Library Function - Single Match
//  __amsg_exit
//
// Library: Visual Studio 1998 Release

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_00dfaac8 == 1) {
    FUN_004a5ab0();
  }
  FUN_004a5af0(param_1);
  (*(code *)PTR___exit_004d1fb0)(0xff);
  return;
}



void FUN_004a0c40(undefined4 param_1)

{
  if (DAT_00dfaac8 == 1) {
    FUN_004a5ab0();
  }
  FUN_004a5af0(param_1);
                    // WARNING: Subroutine does not return
  ExitProcess(0xff);
}



HANDLE FUN_004a0c70(LPCSTR param_1,uint *param_2)

{
  char cVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  undefined local_140 [12];
  undefined auStack_134 [8];
  undefined auStack_12c [12];
  uint uStack_120;
  char acStack_114 [276];

  pvVar2 = FindFirstFileA(param_1,(LPWIN32_FIND_DATAA)local_140);
  if (pvVar2 == (HANDLE)0xffffffff) {
    DVar3 = GetLastError();
    switch(DVar3) {
    case 2:
    case 3:
    case 0x12:
      puVar4 = (undefined4 *)FUN_004a3dc0();
      *puVar4 = 2;
      return (HANDLE)0xffffffff;
    default:
      puVar4 = (undefined4 *)FUN_004a3dc0();
      *puVar4 = 0x16;
      return (HANDLE)0xffffffff;
    case 8:
      puVar4 = (undefined4 *)FUN_004a3dc0();
      *puVar4 = 0xc;
      return (HANDLE)0xffffffff;
    }
  }
  *param_2 = -(uint)(local_140._0_4_ != 0x80) & local_140._0_4_;
  uVar5 = FUN_004a0ef0(local_140 + 4);
  param_2[1] = uVar5;
  uVar5 = FUN_004a0ef0(auStack_134);
  param_2[2] = uVar5;
  uVar5 = FUN_004a0ef0(auStack_12c);
  param_2[3] = uVar5;
  uVar5 = 0xffffffff;
  pcVar8 = acStack_114;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  param_2[4] = uStack_120;
  puVar7 = (uint *)(pcVar9 + -uVar5);
  puVar10 = param_2 + 5;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined *)puVar10 = *(undefined *)puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
    puVar10 = (uint *)((int)puVar10 + 1);
  }
  return pvVar2;
}



undefined4 FUN_004a0da0(HANDLE param_1,uint *param_2)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  undefined local_140 [12];
  undefined auStack_134 [8];
  undefined auStack_12c [12];
  uint uStack_120;
  char acStack_114 [276];

  BVar2 = FindNextFileA(param_1,(LPWIN32_FIND_DATAA)local_140);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    switch(DVar3) {
    case 2:
    case 3:
    case 0x12:
      puVar4 = (undefined4 *)FUN_004a3dc0();
      *puVar4 = 2;
      return 0xffffffff;
    default:
      puVar4 = (undefined4 *)FUN_004a3dc0();
      *puVar4 = 0x16;
      return 0xffffffff;
    case 8:
      puVar4 = (undefined4 *)FUN_004a3dc0();
      *puVar4 = 0xc;
      return 0xffffffff;
    }
  }
  *param_2 = -(uint)(local_140._0_4_ != 0x80) & local_140._0_4_;
  uVar5 = FUN_004a0ef0(local_140 + 4);
  param_2[1] = uVar5;
  uVar5 = FUN_004a0ef0(auStack_134);
  param_2[2] = uVar5;
  uVar5 = FUN_004a0ef0(auStack_12c);
  param_2[3] = uVar5;
  uVar5 = 0xffffffff;
  pcVar8 = acStack_114;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  param_2[4] = uStack_120;
  puVar7 = (uint *)(pcVar9 + -uVar5);
  puVar10 = param_2 + 5;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined *)puVar10 = *(undefined *)puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
    puVar10 = (uint *)((int)puVar10 + 1);
  }
  return 0;
}



undefined4 FUN_004a0ec0(HANDLE param_1)

{
  BOOL BVar1;
  undefined4 *puVar2;

  BVar1 = FindClose(param_1);
  if (BVar1 == 0) {
    puVar2 = (undefined4 *)FUN_004a3dc0();
    *puVar2 = 0x16;
    return 0xffffffff;
  }
  return 0;
}



undefined4 FUN_004a0ef0(FILETIME *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  _FILETIME local_18;
  _SYSTEMTIME _Stack_10;

  if ((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) {
    BVar1 = FileTimeToLocalFileTime(param_1,&local_18);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_18,&_Stack_10);
      if (BVar1 != 0) {
        uVar2 = FUN_004a5cd0(_Stack_10.wYear,_Stack_10.wMonth,_Stack_10.wDay,_Stack_10.wHour,
                             _Stack_10.wMinute,_Stack_10.wSecond,0xffffffff);
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}



// Library Function - Single Match
//  _strrchr
//
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;

  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



// Library Function - Single Match
//  _strncat
//
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;

  if (_Count != 0) {
    uVar4 = (uint)_Dest & 3;
    puVar5 = (uint *)_Dest;
    while (uVar4 != 0) {
      bVar1 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      if (bVar1 == 0) goto LAB_004a100b;
      uVar4 = (uint)puVar5 & 3;
    }
    do {
      do {
        puVar6 = puVar5;
        puVar5 = puVar6 + 1;
      } while (((*puVar6 ^ 0xffffffff ^ *puVar6 + 0x7efefeff) & 0x81010100) == 0);
      uVar4 = *puVar6;
      if ((char)uVar4 == '\0') goto LAB_004a101b;
      if ((char)(uVar4 >> 8) == '\0') {
        puVar6 = (uint *)((int)puVar6 + 1);
        goto LAB_004a101b;
      }
      if ((uVar4 & 0xff0000) == 0) {
        puVar6 = (uint *)((int)puVar6 + 2);
        goto LAB_004a101b;
      }
    } while ((uVar4 & 0xff000000) != 0);
LAB_004a100b:
    puVar6 = (uint *)((int)puVar5 + -1);
LAB_004a101b:
    if (((uint)_Source & 3) == 0) {
      uVar3 = _Count >> 2;
    }
    else {
      do {
        bVar1 = *_Source;
        uVar4 = (uint)bVar1;
        _Source = (char *)((int)_Source + 1);
        if (bVar1 == 0) goto LAB_004a106a;
        *(byte *)puVar6 = bVar1;
        puVar6 = (uint *)((int)puVar6 + 1);
        _Count = _Count - 1;
        if (_Count == 0) goto LAB_004a1060;
      } while (((uint)_Source & 3) != 0);
      uVar3 = _Count >> 2;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar2 = *(uint *)_Source;
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar4 == '\0') {
LAB_004a106a:
          *(byte *)puVar6 = (byte)uVar4;
          return _Dest;
        }
        if ((char)(uVar4 >> 8) == '\0') {
          *(short *)puVar6 = (short)uVar4;
          return _Dest;
        }
        if ((uVar4 & 0xff0000) == 0) {
          *(short *)puVar6 = (short)uVar4;
          *(byte *)((int)puVar6 + 2) = 0;
          return _Dest;
        }
        if ((uVar4 & 0xff000000) == 0) {
          *puVar6 = uVar4;
          return _Dest;
        }
      }
      *puVar6 = uVar4;
      puVar6 = puVar6 + 1;
    }
    for (_Count = _Count & 3; _Count != 0; _Count = _Count - 1) {
      bVar1 = *_Source;
      _Source = (char *)((int)_Source + 1);
      *(byte *)puVar6 = bVar1;
      puVar6 = (uint *)((int)puVar6 + 1);
      if (bVar1 == 0) {
        return _Dest;
      }
    }
LAB_004a1060:
    *(byte *)puVar6 = (byte)_Count;
  }
  return _Dest;
}



undefined4 FUN_004a10e0(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined *local_20;
  int local_1c;
  undefined *local_18;
  undefined4 local_14;

  local_18 = param_1;
  local_20 = param_1;
  local_1c = param_2;
  local_14 = 0x42;
  uVar1 = FUN_004a1920(&local_20,param_3,param_4);
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    *local_20 = 0;
    return uVar1;
  }
  FUN_004a17f0(0,&local_20);
  return uVar1;
}



int FUN_004a1150(short *param_1)

{
  short sVar1;
  short *psVar2;

  sVar1 = *param_1;
  psVar2 = param_1 + 1;
  while (sVar1 != 0) {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}



undefined4 FUN_004a1170(undefined *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *local_20;
  int local_1c;
  undefined *local_18;
  undefined4 local_14;

  local_18 = param_1;
  local_20 = param_1;
  local_14 = 0x42;
  local_1c = param_2 * 2;
  uVar1 = FUN_004a5dc0(&local_20,param_3,&stack0x00000010);
  local_1c = local_1c + -1;
  if (local_1c < 0) {
    FUN_004a17f0(0,&local_20);
  }
  else {
    *local_20 = 0;
    local_20 = local_20 + 1;
  }
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    *local_20 = 0;
    return uVar1;
  }
  FUN_004a17f0(0,&local_20);
  return uVar1;
}



uint FUN_004a1210(short *param_1,short param_2)

{
  short sVar1;
  short *psVar2;

  sVar1 = *param_1;
  psVar2 = param_1 + 1;
  while (sVar1 != 0) {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  }
  do {
    psVar2 = psVar2 + -1;
    if (psVar2 == param_1) break;
  } while (*psVar2 != param_2);
  return (uint)psVar2 & (*psVar2 != param_2) - 1;
}



uint FUN_004a1250(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  short *psVar5;

  iVar3 = FUN_004a3cc0();
  if (param_1 == (short *)0x0) {
    param_1 = *(short **)(iVar3 + 0x1c);
  }
  sVar4 = *param_1;
  if (sVar4 != 0) {
    sVar1 = *param_2;
    psVar5 = param_2;
    do {
      while ((sVar1 != 0 && (sVar1 != sVar4))) {
        sVar1 = psVar5[1];
        psVar5 = psVar5 + 1;
      }
      if (*psVar5 == 0) break;
      sVar4 = param_1[1];
      param_1 = param_1 + 1;
      sVar1 = *param_2;
      psVar5 = param_2;
    } while (sVar4 != 0);
  }
  sVar4 = *param_1;
  psVar5 = param_1;
  if (sVar4 != 0) {
    sVar1 = *param_2;
    psVar2 = param_2;
    do {
      while ((sVar1 != 0 && (sVar1 != sVar4))) {
        sVar1 = psVar2[1];
        psVar2 = psVar2 + 1;
      }
      if (*psVar2 != 0) {
        *psVar5 = 0;
        psVar5 = psVar5 + 1;
        break;
      }
      sVar4 = psVar5[1];
      psVar5 = psVar5 + 1;
      sVar1 = *param_2;
      psVar2 = param_2;
    } while (sVar4 != 0);
  }
  *(short **)(iVar3 + 0x1c) = psVar5;
  return -(uint)(param_1 != psVar5) & (uint)param_1;
}



// Library Function - Single Match
//  _strpbrk
//
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;

  uStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = (char *)((byte *)_Control + 1);
    pbVar2 = (byte *)((int)&uStack_28 + ((int)(uint)bVar1 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)(uint)bVar1;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((*(byte *)((int)&uStack_28 + ((int)(char *)(uint)bVar1 >> 3)) >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}



// Library Function - Single Match
//  _strspn
//
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

size_t __cdecl _strspn(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;

  uStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = (char *)((byte *)_Control + 1);
    pbVar2 = (byte *)((int)&uStack_28 + ((int)(uint)bVar1 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (bVar1 & 7);
  }
  sVar3 = 0xffffffff;
  do {
    sVar3 = sVar3 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar3;
    }
    _Str = (char *)((byte *)_Str + 1);
  } while ((*(byte *)((int)&uStack_28 + ((int)(uint)bVar1 >> 3)) >> (bVar1 & 7) & 1) != 0);
  return sVar3;
}



undefined4 * FUN_004a1380(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_8;
  undefined4 local_4;

  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_0049f270(param_2);
    return puVar1;
  }
  if (param_2 == 0) {
    FUN_0049f200(param_1);
    return (undefined4 *)0x0;
  }
  uVar4 = param_2;
  if (param_2 < 0xffffffe1) {
    if (param_2 == 0) {
      param_2 = 0x10;
      uVar4 = param_2;
    }
    else {
      param_2 = param_2 + 0xf & 0xfffffff0;
      uVar4 = param_2;
    }
  }
  do {
    puVar1 = (undefined4 *)0x0;
    if (uVar4 < 0xffffffe1) {
      FUN_004a1670(9);
      pbVar2 = (byte *)FUN_004a3400(param_1,&local_4,&local_8);
      if (pbVar2 == (byte *)0x0) {
        FUN_004a16f0(9);
        puVar1 = (undefined4 *)HeapReAlloc(DAT_00ecd604,0,param_1,uVar4);
      }
      else {
        if (uVar4 < DAT_004d422c) {
          iVar3 = FUN_004a3880(local_4,local_8,pbVar2,uVar4 >> 4);
          puVar1 = param_1;
          if (iVar3 != 0) goto LAB_004a1485;
          puVar1 = (undefined4 *)FUN_004a34c0(uVar4 >> 4);
          if (puVar1 != (undefined4 *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            puVar6 = param_1;
            puVar7 = puVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined *)puVar7 = *(undefined *)puVar6;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            FUN_004a3460(local_4,local_8,pbVar2);
            uVar4 = param_2;
            goto LAB_004a1485;
          }
LAB_004a1489:
          puVar1 = (undefined4 *)HeapAlloc(DAT_00ecd604,0,uVar4);
          if (puVar1 != (undefined4 *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            puVar6 = param_1;
            puVar7 = puVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined *)puVar7 = *(undefined *)puVar6;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            FUN_004a3460(local_4,local_8,pbVar2);
            uVar4 = param_2;
          }
        }
        else {
LAB_004a1485:
          if (puVar1 == (undefined4 *)0x0) goto LAB_004a1489;
        }
        FUN_004a16f0(9);
      }
    }
    if ((puVar1 != (undefined4 *)0x0) || (DAT_00dfab64 == 0)) {
      return puVar1;
    }
    iVar3 = FUN_004a3950(uVar4);
    if (iVar3 == 0) {
      return (undefined4 *)0x0;
    }
  } while( true );
}



char * FUN_004a1530(char *param_1,int param_2,byte **param_3)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;

  if (param_2 < 1) {
    return (char *)0x0;
  }
  FUN_004a1710(param_3);
  param_2 = param_2 + -1;
  pcVar3 = param_1;
  if (param_2 != 0) {
    while( true ) {
      pbVar1 = param_3[1];
      param_3[1] = pbVar1 + -1;
      if ((int)(pbVar1 + -1) < 0) {
        uVar2 = FUN_004a40f0(param_3);
      }
      else {
        uVar2 = (uint)**param_3;
        *param_3 = *param_3 + 1;
      }
      if (uVar2 == 0xffffffff) break;
      *pcVar3 = (char)uVar2;
      pcVar3 = pcVar3 + 1;
      if (((char)uVar2 == '\n') || (param_2 = param_2 + -1, param_2 == 0)) goto LAB_004a1588;
    }
    if (pcVar3 == param_1) {
      FUN_004a1780(param_3);
      return (char *)0x0;
    }
  }
LAB_004a1588:
  *pcVar3 = '\0';
  FUN_004a1780(param_3);
  return param_1;
}



short * FUN_004a15c0(short *param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;

  if (param_2 < 1) {
    return (short *)0x0;
  }
  FUN_004a1710(param_3);
  param_2 = param_2 + -1;
  psVar2 = param_1;
  if (param_2 != 0) {
    while( true ) {
      sVar1 = FUN_004a6810(param_3);
      if (sVar1 == -1) break;
      *psVar2 = sVar1;
      psVar2 = psVar2 + 1;
      if ((sVar1 == 10) || (param_2 = param_2 + -1, param_2 == 0)) goto LAB_004a1610;
    }
    if (psVar2 == param_1) {
      FUN_004a1780(param_3);
      return (short *)0x0;
    }
  }
LAB_004a1610:
  *psVar2 = 0;
  FUN_004a1780(param_3);
  return param_1;
}

#endif
