#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_004a16f0(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_004d1fc0 + param_1 * 4));
  return;
}



void FUN_004a1710(uint param_1)

{
  if ((0x4d45f7 < param_1) && (param_1 < 0x4d4859)) {
    FUN_004a1670(((int)(param_1 - 0x4d45f8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



void FUN_004a1750(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_004a1670(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



void FUN_004a1780(uint param_1)

{
  if ((0x4d45f7 < param_1) && (param_1 < 0x4d4859)) {
    FUN_004a16f0(((int)(param_1 - 0x4d45f8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



void FUN_004a17c0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_004a16f0(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



uint FUN_004a17f0(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;

  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_004a1913:
    param_2[3] = uVar1 | 0x20;
    return 0xffffffff;
  }
  iVar7 = 0;
  if ((uVar1 & 1) != 0) {
    param_2[1] = 0;
    if ((uVar1 & 0x10) == 0) goto LAB_004a1913;
    *param_2 = param_2[2];
    param_2[3] = uVar1 & 0xfffffffe;
  }
  uVar1 = param_2[3];
  param_2[1] = 0;
  param_2[3] = uVar1 & 0xffffffef | 2;
  if ((uVar1 & 0x10c) == 0) {
    if ((param_2 == (int *)&DAT_004d4618) || (param_2 == (int *)&DAT_004d4638)) {
      iVar5 = FUN_004a6a70(uVar2);
      if (iVar5 != 0) goto LAB_004a1863;
    }
    FUN_004a6a10(piVar4);
  }
LAB_004a1863:
  if ((piVar4[3] & 0x108U) == 0) {
    iVar5 = 1;
    iVar7 = FUN_004a4490(uVar2,&param_1,1);
  }
  else {
    iVar3 = piVar4[2];
    iVar5 = *piVar4 - iVar3;
    *piVar4 = iVar3 + 1;
    piVar4[1] = piVar4[6] + -1;
    if (iVar5 < 1) {
      if (uVar2 == 0xffffffff) {
        puVar6 = &DAT_004d43a0;
      }
      else {
        puVar6 = (undefined *)((&DAT_00ecd500)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
      }
      if ((puVar6[4] & 0x20) != 0) {
        FUN_004a3ff0(uVar2,0,2);
      }
      *(undefined *)piVar4[2] = (undefined)param_1;
    }
    else {
      iVar7 = FUN_004a4490(uVar2,iVar3,iVar5);
      *(undefined *)piVar4[2] = (undefined)param_1;
    }
  }
  if (iVar7 != iVar5) {
    piVar4[3] = piVar4[3] | 0x20;
    return 0xffffffff;
  }
  return param_1 & 0xff;
}



int FUN_004a1920(undefined4 param_1,char *param_2,undefined4 *param_3)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  short *psVar5;
  int iVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint local_24c;
  short *local_248;
  int local_244;
  int local_240;
  undefined local_23a;
  char local_239;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined local_214 [4];
  undefined4 local_210;
  undefined4 local_20c;
  int local_204;
  undefined local_200 [511];
  undefined local_1;

  local_220 = 0;
  puVar9 = (undefined *)0x0;
  local_240 = 0;
  cVar7 = *param_2;
  param_2 = param_2 + 1;
  local_21c = CONCAT31(local_21c._1_3_,cVar7);
  do {
    if ((cVar7 == '\0') || (local_240 < 0)) {
      return local_240;
    }
    if ((cVar7 < ' ') || ('x' < cVar7)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (byte)(&DAT_004af9b8)[cVar7] & 0xf;
    }
    local_220 = (int)(char)(&DAT_004af9d8)[uVar2 * 8 + local_220] >> 4;
    switch(local_220) {
    case 0:
switchD_004a199d_caseD_0:
      local_230 = 0;
      if ((PTR_DAT_004d1d90[(local_21c & 0xff) * 2 + 1] & 0x80) != 0) {
        FUN_004a22b0((int)cVar7,param_1,&local_240);
        cVar7 = *param_2;
        param_2 = param_2 + 1;
      }
      FUN_004a22b0((int)cVar7,param_1,&local_240);
      break;
    case 1:
      local_218 = 0;
      local_228 = 0;
      local_234 = 0;
      local_238 = 0;
      local_24c = 0;
      local_244 = -1;
      local_230 = 0;
      break;
    case 2:
      switch(cVar7) {
      case ' ':
        local_24c = local_24c | 2;
        break;
      case '#':
        local_24c = local_24c | 0x80;
        break;
      case '+':
        local_24c = local_24c | 1;
        break;
      case '-':
        local_24c = local_24c | 4;
        break;
      case '0':
        local_24c = local_24c | 8;
      }
      break;
    case 3:
      if (cVar7 == '*') {
        local_234 = FUN_004a67d0(&param_3);
        if (local_234 < 0) {
          local_24c = local_24c | 4;
          local_234 = -local_234;
        }
      }
      else {
        local_234 = cVar7 + -0x30 + local_234 * 10;
      }
      break;
    case 4:
      local_244 = 0;
      break;
    case 5:
      if (cVar7 == '*') {
        local_244 = FUN_004a67d0(&param_3);
        if (local_244 < 0) {
          local_244 = -1;
        }
      }
      else {
        local_244 = cVar7 + -0x30 + local_244 * 10;
      }
      break;
    case 6:
      switch(cVar7) {
      case 'I':
        if ((*param_2 != '6') || (param_2[1] != '4')) {
          local_220 = 0;
          goto switchD_004a199d_caseD_0;
        }
        param_2 = param_2 + 2;
        local_24c = local_24c | 0x8000;
        break;
      case 'h':
        local_24c = local_24c | 0x20;
        break;
      case 'l':
        local_24c = local_24c | 0x10;
        break;
      case 'w':
        local_24c = local_24c | 0x800;
      }
      break;
    case 7:
      switch(cVar7) {
      case 'C':
        if ((local_24c & 0x830) == 0) {
          local_24c = local_24c | 0x800;
        }
      case 'c':
        if ((local_24c & 0x810) == 0) {
          local_200[0] = FUN_004a67d0(&param_3);
          puVar9 = (undefined *)0x1;
        }
        else {
          uVar3 = FUN_004a2380(&param_3);
          puVar9 = (undefined *)FUN_004a6aa0(local_200,uVar3);
          if ((int)puVar9 < 0) {
            local_248 = (short *)local_200;
            local_228 = 1;
            break;
          }
        }
        local_248 = (short *)local_200;
        break;
      case 'E':
      case 'G':
        local_218 = 1;
        cVar7 = cVar7 + ' ';
      case 'e':
      case 'f':
      case 'g':
        local_248 = (short *)local_200;
        if (local_244 < 0) {
          local_244 = 6;
        }
        else if ((local_244 == 0) && (cVar7 == 'g')) {
          local_244 = 1;
        }
        local_210 = *param_3;
        local_20c = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR_FUN_004d2088)(&local_210,local_200,(int)cVar7,local_244,local_218);
        if (((local_24c & 0x80) != 0) && (local_244 == 0)) {
          (*(code *)PTR_FUN_004d2094)(local_200);
        }
        if ((cVar7 == 'g') && ((local_24c & 0x80) == 0)) {
          (*(code *)PTR_FUN_004d208c)(local_200);
        }
        uVar2 = local_24c | 0x40;
        if (local_200[0] == '-') {
          local_248 = (short *)(local_200 + 1);
          uVar2 = local_24c | 0x140;
        }
        local_24c = uVar2;
        uVar2 = 0xffffffff;
        psVar5 = local_248;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar7 = *(char *)psVar5;
          psVar5 = (short *)((int)psVar5 + 1);
        } while (cVar7 != '\0');
        puVar9 = (undefined *)(~uVar2 - 1);
        break;
      case 'S':
        if ((local_24c & 0x830) == 0) {
          local_24c = local_24c | 0x800;
        }
      case 's':
        iVar11 = 0x7fffffff;
        if (local_244 != -1) {
          iVar11 = local_244;
        }
        local_248 = (short *)FUN_004a67d0(&param_3);
        if ((local_24c & 0x810) == 0) {
          psVar5 = local_248;
          if (local_248 == (short *)0x0) {
            psVar5 = (short *)PTR_DAT_004d2080;
            local_248 = (short *)PTR_DAT_004d2080;
          }
          for (; (iVar11 != 0 && (iVar11 = iVar11 + -1, *(char *)psVar5 != '\0'));
              psVar5 = (short *)((int)psVar5 + 1)) {
          }
          puVar9 = (undefined *)((int)psVar5 - (int)local_248);
        }
        else {
          if (local_248 == (short *)0x0) {
            local_248 = (short *)PTR_DAT_004d2084;
          }
          local_230 = 1;
          for (psVar5 = local_248; (iVar11 != 0 && (iVar11 = iVar11 + -1, *psVar5 != 0));
              psVar5 = psVar5 + 1) {
          }
          puVar9 = (undefined *)((int)psVar5 - (int)local_248 >> 1);
        }
        break;
      case 'X':
        goto switchD_004a1bb1_caseD_58;
      case 'Z':
        psVar5 = (short *)FUN_004a67d0(&param_3);
        if ((psVar5 == (short *)0x0) ||
           (local_248 = *(short **)(psVar5 + 2), local_248 == (short *)0x0)) {
          uVar2 = 0xffffffff;
          local_248 = (short *)PTR_DAT_004d2080;
          pcVar10 = PTR_DAT_004d2080;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar7 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar7 != '\0');
          puVar9 = (undefined *)(~uVar2 - 1);
        }
        else if ((local_24c & 0x800) == 0) {
          puVar9 = (undefined *)(int)*psVar5;
          local_230 = 0;
        }
        else {
          local_230 = 1;
          puVar9 = (undefined *)((uint)(int)*psVar5 >> 1);
        }
        break;
      case 'd':
      case 'i':
        local_22c = 10;
        local_24c = local_24c | 0x40;
        goto LAB_004a1ee7;
      case 'n':
        piVar4 = (int *)FUN_004a67d0(&param_3);
        if ((local_24c & 0x20) == 0) {
          local_228 = 1;
          *piVar4 = local_240;
        }
        else {
          local_228 = 1;
          *(undefined2 *)piVar4 = (undefined2)local_240;
        }
        break;
      case 'o':
        local_22c = 8;
        if ((local_24c & 0x80) != 0) {
          local_24c = local_24c | 0x200;
        }
        goto LAB_004a1ee7;
      case 'p':
        local_244 = 8;
switchD_004a1bb1_caseD_58:
        local_224 = 7;
LAB_004a1ea2:
        local_22c = 0x10;
        if ((local_24c & 0x80) != 0) {
          local_23a = 0x30;
          local_239 = (char)local_224 + 'Q';
          local_238 = 2;
        }
        goto LAB_004a1ee7;
      case 'u':
        local_22c = 10;
LAB_004a1ee7:
        if ((local_24c & 0x8000) == 0) {
          if ((local_24c & 0x20) == 0) {
            if ((local_24c & 0x40) == 0) {
              uVar2 = FUN_004a67d0(&param_3);
              uVar12 = (ulonglong)uVar2;
            }
            else {
              iVar11 = FUN_004a67d0(&param_3);
              uVar12 = (ulonglong)iVar11;
            }
          }
          else if ((local_24c & 0x40) == 0) {
            uVar2 = FUN_004a67d0(&param_3);
            uVar12 = (ulonglong)(uVar2 & 0xffff);
          }
          else {
            sVar1 = FUN_004a67d0(&param_3);
            uVar12 = (ulonglong)(int)sVar1;
          }
        }
        else {
          uVar12 = FUN_004a67f0(&param_3);
        }
        if ((((local_24c & 0x40) != 0) && ((longlong)uVar12 < 0x100000000)) &&
           ((longlong)uVar12 < 0)) {
          uVar12 = CONCAT44(-((int)(uVar12 >> 0x20) + (uint)((int)uVar12 != 0)),-(int)uVar12);
          local_24c = local_24c | 0x100;
        }
        uVar2 = (uint)(uVar12 >> 0x20);
        if ((local_24c & 0x8000) == 0) {
          uVar2 = 0;
        }
        lVar13 = CONCAT44(uVar2,(uint)uVar12);
        if (local_244 < 0) {
          local_244 = 1;
        }
        else {
          local_24c = local_24c & 0xfffffff7;
        }
        if (((uint)uVar12 | uVar2) == 0) {
          local_238 = 0;
        }
        psVar5 = (short *)&local_1;
        iVar11 = local_244;
        while ((iVar6 = local_22c, local_244 = iVar11 + -1, 0 < iVar11 || (lVar13 != 0))) {
          local_204 = local_22c >> 0x1f;
          iVar11 = __aullrem(lVar13,local_22c,local_204);
          iVar11 = iVar11 + 0x30;
          lVar13 = __aulldiv(lVar13,iVar6,local_204);
          if (0x39 < iVar11) {
            iVar11 = iVar11 + local_224;
          }
          *(char *)psVar5 = (char)iVar11;
          psVar5 = (short *)((int)psVar5 + -1);
          iVar11 = local_244;
        }
        puVar9 = &local_1 + -(int)psVar5;
        local_248 = (short *)((int)psVar5 + 1);
        if (((local_24c & 0x200) != 0) &&
           ((*(char *)local_248 != '0' || (puVar9 == (undefined *)0x0)))) {
          puVar9 = &stack0x00000000 + -(int)psVar5;
          *(char *)psVar5 = '0';
          local_248 = psVar5;
        }
        break;
      case 'x':
        local_224 = 0x27;
        goto LAB_004a1ea2;
      }
      if (local_228 == 0) {
        if ((local_24c & 0x40) != 0) {
          if ((local_24c & 0x100) == 0) {
            if ((local_24c & 1) == 0) {
              if ((local_24c & 2) == 0) goto LAB_004a207f;
              local_23a = 0x20;
            }
            else {
              local_23a = 0x2b;
            }
          }
          else {
            local_23a = 0x2d;
          }
          local_238 = 1;
        }
LAB_004a207f:
        iVar11 = (local_234 - (int)puVar9) - local_238;
        if ((local_24c & 0xc) == 0) {
          FUN_004a2300(0x20,iVar11,param_1,&local_240);
        }
        FUN_004a2340(&local_23a,local_238,param_1,&local_240);
        if (((local_24c & 8) != 0) && ((local_24c & 4) == 0)) {
          FUN_004a2300(0x30,iVar11,param_1,&local_240);
        }
        if ((local_230 == 0) || (psVar5 = local_248, puVar8 = puVar9, (int)puVar9 < 1)) {
          FUN_004a2340(local_248,puVar9,param_1,&local_240);
        }
        else {
          do {
            puVar8 = puVar8 + -1;
            iVar6 = FUN_004a6aa0(local_214,*psVar5);
            if (iVar6 < 1) break;
            FUN_004a2340(local_214,iVar6,param_1,&local_240);
            psVar5 = psVar5 + 1;
          } while (puVar8 != (undefined *)0x0);
        }
        if ((local_24c & 4) != 0) {
          FUN_004a2300(0x20,iVar11,param_1,&local_240);
        }
      }
    }
    cVar7 = *param_2;
    param_2 = param_2 + 1;
    local_21c = CONCAT31(local_21c._1_3_,cVar7);
  } while( true );
}



void FUN_004a22b0(uint param_1,int *param_2,int *param_3)

{
  int iVar1;

  iVar1 = param_2[1];
  param_2[1] = iVar1 + -1;
  if (iVar1 + -1 < 0) {
    param_1 = FUN_004a17f0(param_1,param_2);
  }
  else {
    *(char *)*param_2 = (char)param_1;
    param_1 = param_1 & 0xff;
    *param_2 = *param_2 + 1;
  }
  if (param_1 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}



void FUN_004a2300(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      FUN_004a22b0(param_1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}



void FUN_004a2340(char *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;

  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      FUN_004a22b0((int)cVar1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}



undefined4 FUN_004a2380(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;

  puVar1 = (undefined2 *)*param_1;
  puVar2 = puVar1 + 2;
  *param_1 = puVar2;
  return CONCAT22((short)((uint)puVar2 >> 0x10),*puVar1);
}



// Library Function - Single Match
//  __setdefaultprecision
//
// Library: Visual Studio 1998 Release

void __setdefaultprecision(void)

{
  FUN_004a6cc0(0x10000,0x30000);
  return;
}



// WARNING: Removing unreachable block (ram,0x004a2401)

undefined4 FUN_004a23c0(void)

{
  return 0;
}



void FUN_004a2410(void)

{
  HMODULE hModule;
  FARPROC pFVar1;

  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_004a23c0();
  return;
}



void FUN_004a2440(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;

  iVar3 = FUN_0049fe50((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_004d1f9c < 2) {
        uVar4 = (byte)PTR_DAT_004d1d90[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_0049f440((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_004d1fa0;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



void FUN_004a24a0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;

  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != DAT_004d1fa0))) {
    pcVar2 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar2;
  }
  pcVar2 = param_1 + 1;
  if (*param_1 != '\0') {
    cVar1 = *pcVar2;
    while (((cVar1 != '\0' && (cVar1 != 'e')) && (cVar1 != 'E'))) {
      pcVar3 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar3;
    }
    cVar1 = pcVar2[-1];
    pcVar3 = pcVar2;
    while (pcVar4 = pcVar3 + -1, cVar1 == '0') {
      cVar1 = pcVar3[-2];
      pcVar3 = pcVar4;
    }
    if (*pcVar4 == DAT_004d1fa0) {
      pcVar4 = pcVar3 + -2;
    }
    cVar1 = *pcVar2;
    pcVar4 = pcVar4 + 1;
    *pcVar4 = cVar1;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    }
  }
  return;
}



int FUN_004a2590(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int local_28 [4];
  undefined local_18 [24];

  FUN_004a73d0(*param_1,param_1[1],local_28,local_18);
  FUN_004a7330((uint)(local_28[0] == 0x2d) + param_2 + (uint)(0 < param_3),param_3 + 1,local_28);
  FUN_004a2610(param_2,param_3,param_4,local_28,0);
  return param_2;
}



undefined * FUN_004a2610(undefined *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;

  if (param_5 != '\0') {
    FUN_004a2970(param_1 + (*param_4 == 0x2d),0 < param_2);
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  if (0 < param_2) {
    *puVar1 = puVar1[1];
    puVar1 = puVar1 + 1;
    *puVar1 = DAT_004d1fa0;
  }
  puVar3 = (undefined4 *)(puVar1 + param_2 + (uint)(param_5 == '\0'));
  *puVar3 = 0x30302b65;
  *(undefined2 *)(puVar3 + 1) = 0x30;
  if (param_3 != 0) {
    *(undefined *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar2 = param_4[1] + -1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      *(undefined *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar2) {
      *(char *)((int)puVar3 + 2) = *(char *)((int)puVar3 + 2) + (char)(iVar2 / 100);
      iVar2 = iVar2 % 100;
    }
    if (9 < iVar2) {
      *(char *)((int)puVar3 + 3) = *(char *)((int)puVar3 + 3) + (char)(iVar2 / 10);
      iVar2 = iVar2 % 10;
    }
    *(char *)(puVar3 + 1) = *(char *)(puVar3 + 1) + (char)iVar2;
  }
  return param_1;
}



int FUN_004a2710(undefined4 *param_1,int param_2,int param_3)

{
  int local_28;
  int local_24;
  undefined local_18 [24];

  FUN_004a73d0(*param_1,param_1[1],&local_28,local_18);
  FUN_004a7330((uint)(local_28 == 0x2d) + param_2,local_24 + param_3,&local_28);
  FUN_004a2780(param_2,param_3,&local_28,0);
  return param_2;
}



undefined * FUN_004a2780(undefined *param_1,uint param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;

  iVar1 = param_3[1];
  uVar3 = iVar1 - 1;
  if ((param_4 != '\0') && (iVar2 = *param_3, uVar3 == param_2)) {
    param_1[uVar3 + (iVar2 == 0x2d)] = 0x30;
    param_1[iVar1 + (uint)(iVar2 == 0x2d)] = 0;
  }
  puVar4 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = 0x2d;
    puVar4 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_004a2970(puVar4,1);
    *puVar4 = 0x30;
    puVar4 = puVar4 + 1;
  }
  else {
    puVar4 = puVar4 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_004a2970(puVar4,1);
    *puVar4 = DAT_004d1fa0;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (SBORROW4(param_2,-iVar1) == (int)(param_2 + iVar1) < 0)) {
        param_2 = -iVar1;
      }
      FUN_004a2970(puVar4 + 1,param_2);
      puVar5 = (undefined4 *)(puVar4 + 1);
      for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = 0x30303030;
        puVar5 = puVar5 + 1;
      }
      for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
        *(undefined *)puVar5 = 0x30;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
  }
  return param_1;
}



void FUN_004a2840(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int local_28;
  int local_24;
  undefined local_18 [24];

  FUN_004a73d0(*param_1,param_1[1],&local_28,local_18);
  iVar1 = local_24 + -1;
  pcVar3 = (char *)((uint)(local_28 == 0x2d) + param_2);
  FUN_004a7330(pcVar3,param_3,&local_28);
  local_24 = local_24 + -1;
  if ((-5 < local_24) && (local_24 < param_3)) {
    if (iVar1 < local_24) {
      cVar2 = *pcVar3;
      while (cVar2 != '\0') {
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      }
      pcVar3[-1] = '\0';
    }
    FUN_004a2780(param_2,param_3,&local_28,1);
    return;
  }
  FUN_004a2610(param_2,param_3,param_4,&local_28,1);
  return;
}



void FUN_004a2900(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if ((param_3 != 0x65) && (param_3 != 0x45)) {
    if (param_3 == 0x66) {
      FUN_004a2710(param_1,param_2,param_4);
      return;
    }
    FUN_004a2840(param_1,param_2,param_4,param_5);
    return;
  }
  FUN_004a2590(param_1,param_2,param_4,param_5);
  return;
}



void FUN_004a2970(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;

  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_0049f4e0(param_1 + param_2,param_1,~uVar2);
  }
  return;
}



int FUN_004a29a0(LCID param_1,uint param_2,LPCSTR param_3,LPCWSTR param_4,LPWSTR param_5,int param_6
                ,UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;

  if (DAT_00dfab5c == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_00dfab5c = 2;
    }
    else {
      DAT_00dfab5c = 1;
    }
  }
  iVar1 = (int)param_4;
  if (0 < (int)param_4) {
    iVar1 = FUN_004ab170(param_3,param_4);
  }
  if (DAT_00dfab5c == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,iVar1,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_00dfab5c != 1) {
    return DAT_00dfab5c;
  }
  param_4 = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_00dfab48;
  }
  iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,iVar1,(LPWSTR)0x0,0);
  if (iVar2 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_0049f270(iVar2 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar1 = MultiByteToWideChar(param_7,1,param_3,iVar1,lpWideCharStr,iVar2);
  if ((iVar1 != 0) &&
     (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar2,(LPWSTR)0x0,0), iVar1 != 0)) {
    if ((param_2 & 0x400) == 0) {
      param_4 = (LPCWSTR)FUN_0049f270(iVar1 * 2);
      if ((param_4 == (LPCWSTR)0x0) ||
         (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar2,param_4,iVar1), iVar2 == 0))
      goto LAB_004a2ba8;
      if (param_6 == 0) {
        iVar1 = WideCharToMultiByte(param_7,0x220,param_4,iVar1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                   );
        iVar2 = iVar1;
      }
      else {
        iVar1 = WideCharToMultiByte(param_7,0x220,param_4,iVar1,(LPSTR)param_5,param_6,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar2 = iVar1;
      }
    }
    else {
      if (param_6 == 0) goto LAB_004a2b0f;
      if (param_6 < iVar1) goto LAB_004a2ba8;
      iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar2,param_5,param_6);
    }
    if (iVar2 != 0) {
LAB_004a2b0f:
      FUN_0049f200(lpWideCharStr);
      FUN_0049f200(param_4);
      return iVar1;
    }
  }
LAB_004a2ba8:
  FUN_0049f200(lpWideCharStr);
  FUN_0049f200(param_4);
  return 0;
}



void FUN_004a2bd0(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_14;
  uint local_10;
  undefined local_c [12];

  iVar1 = param_2;
  uVar4 = 0;
  uVar2 = FUN_004a8490(local_c,&param_2,param_2,0,0,0,0);
  if ((uVar2 & 4) == 0) {
    iVar3 = FUN_004a7270(local_c,&local_14);
    if (((uVar2 & 2) != 0) || (iVar3 == 1)) {
      uVar4 = 0x80;
    }
    if (((uVar2 & 1) != 0) || (iVar3 == 2)) {
      uVar4 = uVar4 | 0x100;
    }
  }
  else {
    uVar4 = 0x200;
    local_14 = 0;
    local_10 = 0;
  }
  *param_1 = uVar4;
  param_1[1] = param_2 - iVar1;
  param_1[4] = local_14;
  param_1[5] = local_10;
  return;
}



void FUN_004a2cb0(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_0049f200(param_1[2]);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



undefined4 FUN_004a2d30(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  uVar3 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    iVar4 = *param_1 - param_1[2];
    if (0 < iVar4) {
      iVar2 = FUN_004a4490(param_1[4],param_1[2],iVar4);
      uVar1 = param_1[3];
      if (iVar2 == iVar4) {
        if ((uVar1 & 0x80) != 0) {
          param_1[1] = 0;
          param_1[3] = uVar1 & 0xfffffffd;
          *param_1 = param_1[2];
          return 0;
        }
      }
      else {
        uVar3 = 0xffffffff;
        param_1[3] = uVar1 | 0x20;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar3;
}



undefined4 * FUN_004a2e70(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;

  cVar1 = *param_2;
  bVar3 = false;
  bVar4 = false;
  if (cVar1 == 'a') {
    uVar5 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar5 = 0;
      uVar7 = DAT_00dfaf20 | 1;
      goto LAB_004a2ead;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar7 = DAT_00dfaf20 | 2;
LAB_004a2ead:
  param_2 = param_2 + 1;
  bVar2 = true;
  cVar1 = *param_2;
  do {
    if ((cVar1 == '\0') || (!bVar2)) {
      iVar6 = FUN_004a05b0(param_1,uVar5,param_3,0x1a4);
      if (-1 < iVar6) {
        DAT_00dfaeb8 = DAT_00dfaeb8 + 1;
        param_4[3] = uVar7;
        param_4[1] = 0;
        *param_4 = 0;
        param_4[2] = 0;
        param_4[7] = 0;
        param_4[4] = iVar6;
        return param_4;
      }
      return (undefined4 *)0x0;
    }
    switch(cVar1) {
    case '+':
      if ((uVar5 & 2) != 0) break;
      uVar5 = uVar5 & 0xfffffffe | 2;
      uVar7 = uVar7 & 0xfffffffc | 0x80;
      goto LAB_004a2f5e;
    case 'D':
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_004a2f5e;
      }
      break;
    case 'R':
      if (!bVar4) {
        bVar4 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_004a2f5e;
      }
      break;
    case 'S':
      if (!bVar4) {
        bVar4 = true;
        uVar5 = uVar5 | 0x20;
        goto LAB_004a2f5e;
      }
      break;
    case 'T':
      if ((uVar5 & 0x1000) == 0) {
        uVar5 = uVar5 | 0x1000;
        goto LAB_004a2f5e;
      }
      break;
    case 'b':
      if ((uVar5 & 0xc000) == 0) {
        uVar5 = uVar5 | 0x8000;
        goto LAB_004a2f5e;
      }
      break;
    case 'c':
      if (!bVar3) {
        bVar3 = true;
        uVar7 = uVar7 | 0x4000;
        goto LAB_004a2f5e;
      }
      break;
    case 'n':
      if (!bVar3) {
        bVar3 = true;
        uVar7 = uVar7 & 0xffffbfff;
        goto LAB_004a2f5e;
      }
      break;
    case 't':
      if ((uVar5 & 0xc000) == 0) {
        uVar5 = uVar5 | 0x4000;
        goto LAB_004a2f5e;
      }
    }
    bVar2 = false;
LAB_004a2f5e:
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  } while( true );
}



undefined4 * FUN_004a3040(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;

  puVar4 = (undefined4 *)0x0;
  FUN_004a1670(2);
  iVar3 = 0;
  if (0 < DAT_00ecd4e0) {
    do {
      iVar1 = *(int *)(DAT_00ecc4c0 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        uVar2 = FUN_0049f270(0x38);
        *(undefined4 *)(DAT_00ecc4c0 + iVar3) = uVar2;
        if (*(int *)(DAT_00ecc4c0 + iVar3) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_00ecc4c0 + iVar3) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_00ecc4c0 + iVar3) + 0x20));
          puVar4 = *(undefined4 **)(DAT_00ecc4c0 + iVar3);
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_004a1750(iVar3,iVar1);
        iVar1 = *(int *)(DAT_00ecc4c0 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_00ecc4c0 + iVar3 * 4);
          break;
        }
        FUN_004a17c0(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00ecd4e0);
  }
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4[7] = 0;
    puVar4[4] = 0xffffffff;
  }
  FUN_004a16f0(2);
  return puVar4;
}



undefined4 FUN_004a3120(void)

{
  int iVar1;

  DAT_00ecd604 = HeapCreate(0,0x1000,0);
  if (DAT_00ecd604 == (HANDLE)0x0) {
    return 0;
  }
  iVar1 = FUN_004a3160();
  if (iVar1 == 0) {
    HeapDestroy(DAT_00ecd604);
    return 0;
  }
  return 1;
}



undefined ** FUN_004a3160(void)

{
  bool bVar1;
  undefined4 *lpAddress;
  LPVOID pvVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **lpMem;
  undefined4 *puVar5;

  if (DAT_004d2218 == -1) {
    lpMem = &PTR_LOOP_004d2208;
  }
  else {
    lpMem = (undefined **)HeapAlloc(DAT_00ecd604,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = (undefined4 *)VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (undefined4 *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_004d2208) {
        if (PTR_LOOP_004d2208 == (undefined *)0x0) {
          PTR_LOOP_004d2208 = (undefined *)&PTR_LOOP_004d2208;
        }
        if (PTR_LOOP_004d220c == (undefined *)0x0) {
          PTR_LOOP_004d220c = (undefined *)&PTR_LOOP_004d2208;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_004d2208;
        lpMem[1] = PTR_LOOP_004d220c;
        PTR_LOOP_004d220c = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)(lpMem + 6);
      lpMem[3] = (undefined *)(lpMem + 0x26);
      iVar3 = 0;
      ppuVar4 = lpMem + 6;
      do {
        bVar1 = 0xf < iVar3;
        iVar3 = iVar3 + 1;
        *ppuVar4 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar4[1] = (undefined *)0xf1;
        ppuVar4 = ppuVar4 + 2;
      } while (iVar3 < 0x400);
      puVar5 = lpAddress;
      for (iVar3 = 0x4000; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      if (lpAddress < lpMem[4] + 0x10000) {
        do {
          lpAddress[1] = 0xf0;
          *lpAddress = lpAddress + 2;
          *(undefined *)(lpAddress + 0x3e) = 0xff;
          lpAddress = lpAddress + 0x400;
        } while (lpAddress < lpMem[4] + 0x10000);
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_004d2208) {
    HeapFree(DAT_00ecd604,0,lpMem);
  }
  return (undefined **)0x0;
}



void FUN_004a32d0(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_004d4228 == param_1) {
    PTR_LOOP_004d4228 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_004d2208) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_00ecd604,0,param_1);
    return;
  }
  DAT_004d2218 = 0xffffffff;
  return;
}



void FUN_004a3330(int param_1)

{
  BOOL BVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;

  puVar5 = PTR_LOOP_004d220c;
  do {
    puVar6 = puVar5;
    if (*(int *)(puVar5 + 0x10) != -1) {
      iVar4 = 0;
      piVar2 = (int *)(puVar5 + 0x2010);
      iVar3 = 0x3ff000;
      do {
        if (*piVar2 == 0xf0) {
          BVar1 = VirtualFree((LPVOID)(*(int *)(puVar5 + 0x10) + iVar3),0x1000,0x4000);
          if (BVar1 != 0) {
            *piVar2 = -1;
            DAT_00dfab60 = DAT_00dfab60 + -1;
            if ((*(int **)(puVar5 + 0xc) == (int *)0x0) || (piVar2 < *(int **)(puVar5 + 0xc))) {
              *(int **)(puVar5 + 0xc) = piVar2;
            }
            iVar4 = iVar4 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        piVar2 = piVar2 + -2;
      } while (-1 < iVar3);
      puVar6 = *(undefined **)(puVar5 + 4);
      if ((iVar4 != 0) && (*(int *)(puVar5 + 0x18) == -1)) {
        iVar3 = 1;
        piVar2 = (int *)(puVar5 + 0x20);
        do {
          if (*piVar2 != -1) break;
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_004a32d0(puVar5);
        }
      }
    }
    if ((puVar6 == PTR_LOOP_004d220c) || (puVar5 = puVar6, param_1 < 1)) {
      return;
    }
  } while( true );
}



int FUN_004a3400(undefined *param_1,int **param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;

  ppuVar1 = &PTR_LOOP_004d2208;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_004d2208) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = (int *)ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



void FUN_004a3460(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;

  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_00dfab60 = DAT_00dfab60 + 1, DAT_00dfab60 == 0x20)) {
    FUN_004a3330(0x10);
  }
  return;
}



int * FUN_004a34c0(uint param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  int *local_4;

  local_4 = (int *)PTR_LOOP_004d4228;
  do {
    if (local_4[4] != -1) {
      piVar9 = (int *)local_4[2];
      iVar8 = ((int)piVar9 + (-0x18 - (int)local_4) >> 3) * 0x1000 + local_4[4];
      for (; piVar9 < local_4 + 0x806; piVar9 = piVar9 + 2) {
        if (((int)param_1 <= *piVar9) && (param_1 < (uint)piVar9[1])) {
          piVar3 = (int *)FUN_004a3700(iVar8,*piVar9,param_1);
          if (piVar3 != (int *)0x0) {
            PTR_LOOP_004d4228 = (undefined *)local_4;
            *piVar9 = *piVar9 - param_1;
            local_4[2] = (int)piVar9;
            return piVar3;
          }
          piVar9[1] = param_1;
        }
        iVar8 = iVar8 + 0x1000;
      }
      piVar3 = (int *)local_4[2];
      iVar8 = local_4[4];
      for (piVar9 = local_4 + 6; piVar9 < piVar3; piVar9 = piVar9 + 2) {
        if (((int)param_1 <= *piVar9) && (param_1 < (uint)piVar9[1])) {
          piVar4 = (int *)FUN_004a3700(iVar8,*piVar9,param_1);
          if (piVar4 != (int *)0x0) {
            PTR_LOOP_004d4228 = (undefined *)local_4;
            *piVar9 = *piVar9 - param_1;
            local_4[2] = (int)piVar9;
            return piVar4;
          }
          piVar9[1] = param_1;
        }
        iVar8 = iVar8 + 0x1000;
      }
    }
    local_4 = (int *)*local_4;
  } while (local_4 != (int *)PTR_LOOP_004d4228);
  ppuVar7 = &PTR_LOOP_004d2208;
  while ((ppuVar7[4] == (undefined *)0xffffffff || (ppuVar7[3] == (undefined *)0x0))) {
    ppuVar7 = (undefined **)*ppuVar7;
    if (ppuVar7 == &PTR_LOOP_004d2208) {
      puVar5 = (undefined *)FUN_004a3160();
      if (puVar5 == (undefined *)0x0) {
        return (int *)0x0;
      }
      piVar9 = *(int **)(puVar5 + 0x10);
      *(char *)(piVar9 + 2) = (char)param_1;
      PTR_LOOP_004d4228 = puVar5;
      *piVar9 = (int)piVar9 + param_1 + 8;
      piVar9[1] = 0xf0 - param_1;
      *(uint *)(puVar5 + 0x18) = *(int *)(puVar5 + 0x18) - (param_1 & 0xff);
      return piVar9 + 0x40;
    }
  }
  ppuVar2 = (undefined **)ppuVar7[3];
  puVar5 = *ppuVar2;
  piVar9 = (int *)(ppuVar7[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar7) >> 3) * 0x1000);
  ppuVar6 = ppuVar2;
  for (iVar8 = 0; (puVar5 == (undefined *)0xffffffff && (iVar8 < 0x10)); iVar8 = iVar8 + 1) {
    puVar5 = ppuVar6[2];
    ppuVar6 = ppuVar6 + 2;
  }
  piVar3 = (int *)VirtualAlloc(piVar9,iVar8 << 0xc,0x1000,4);
  if (piVar3 != piVar9) {
    return (int *)0x0;
  }
  ppuVar6 = ppuVar2;
  if (0 < iVar8) {
    piVar3 = piVar9 + 1;
    do {
      *piVar3 = 0xf0;
      piVar3[-1] = (int)(piVar3 + 1);
      *(undefined *)(piVar3 + 0x3d) = 0xff;
      *ppuVar6 = (undefined *)0xf0;
      ppuVar6[1] = (undefined *)0xf1;
      piVar3 = piVar3 + 0x400;
      ppuVar6 = ppuVar6 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  ppuVar1 = ppuVar7 + 0x806;
  bVar10 = ppuVar6 < ppuVar1;
  if (bVar10) {
    do {
      if (*ppuVar6 == (undefined *)0xffffffff) break;
      ppuVar6 = ppuVar6 + 2;
    } while (ppuVar6 < ppuVar1);
    bVar10 = ppuVar6 < ppuVar1;
  }
  PTR_LOOP_004d4228 = (undefined *)ppuVar7;
  ppuVar7[3] = (undefined *)(-(uint)bVar10 & (uint)ppuVar6);
  *(char *)(piVar9 + 2) = (char)param_1;
  ppuVar7[2] = (undefined *)ppuVar2;
  *ppuVar2 = *ppuVar2 + -param_1;
  piVar9[1] = piVar9[1] - param_1;
  *piVar9 = (int)piVar9 + param_1 + 8;
  return piVar9 + 0x40;
}



int FUN_004a3700(int **param_1,int *param_2,int *param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int *piVar5;
  int **ppiVar6;

  ppiVar2 = (int **)*param_1;
  if (param_3 <= param_1[1]) {
    *(char *)ppiVar2 = (char)param_3;
    if ((int **)((int)ppiVar2 + (int)param_3) < param_1 + 0x3e) {
      *param_1 = (int *)((int)*param_1 + (int)param_3);
      param_1[1] = (int *)((int)param_1[1] - (int)param_3);
    }
    else {
      param_1[1] = (int *)0x0;
      *param_1 = (int *)(param_1 + 2);
    }
    return (int)(ppiVar2 + 2) * 0x10 + (int)param_1 * -0xf;
  }
  ppiVar3 = (int **)((int)param_1[1] + (int)ppiVar2);
  ppiVar6 = ppiVar2;
  if (*(char *)ppiVar3 != '\0') {
    ppiVar6 = ppiVar3;
  }
  if ((int **)((int)ppiVar6 + (int)param_3) < param_1 + 0x3e) {
    do {
      if (*(byte *)ppiVar6 == 0) {
        ppiVar3 = (int **)((int)ppiVar6 + 1);
        piVar5 = (int *)0x1;
        cVar1 = *(char *)((int)ppiVar6 + 1);
        while (cVar1 == '\0') {
          ppiVar3 = (int **)((int)ppiVar3 + 1);
          piVar5 = (int *)((int)piVar5 + 1);
          cVar1 = *(char *)ppiVar3;
        }
        if (param_3 <= piVar5) {
          if (param_1 + 0x3e <= (int **)((int)ppiVar6 + (int)param_3)) {
            *param_1 = (int *)(param_1 + 2);
            goto LAB_004a384f;
          }
          *param_1 = (int *)(int **)((int)ppiVar6 + (int)param_3);
          param_1[1] = (int *)((int)piVar5 - (int)param_3);
          goto LAB_004a3856;
        }
        if (ppiVar6 == ppiVar2) {
          param_1[1] = piVar5;
        }
        else {
          param_2 = (int *)((int)param_2 - (int)piVar5);
          if (param_2 < param_3) {
            return 0;
          }
        }
      }
      else {
        ppiVar3 = (int **)((int)ppiVar6 + (uint)*(byte *)ppiVar6);
      }
      ppiVar6 = ppiVar3;
    } while ((int **)((int)ppiVar3 + (int)param_3) < param_1 + 0x3e);
  }
  ppiVar3 = param_1 + 2;
  ppiVar6 = ppiVar3;
  if (ppiVar3 < ppiVar2) {
    while ((int **)((int)ppiVar6 + (int)param_3) < param_1 + 0x3e) {
      if (*(byte *)ppiVar6 == 0) {
        ppiVar4 = (int **)((int)ppiVar6 + 1);
        piVar5 = (int *)0x1;
        cVar1 = *(char *)((int)ppiVar6 + 1);
        while (cVar1 == '\0') {
          ppiVar4 = (int **)((int)ppiVar4 + 1);
          piVar5 = (int *)((int)piVar5 + 1);
          cVar1 = *(char *)ppiVar4;
        }
        if (param_3 <= piVar5) {
          if ((int **)((int)ppiVar6 + (int)param_3) < param_1 + 0x3e) {
            *param_1 = (int *)(int **)((int)ppiVar6 + (int)param_3);
            param_1[1] = (int *)((int)piVar5 - (int)param_3);
          }
          else {
            *param_1 = (int *)ppiVar3;
LAB_004a384f:
            param_1[1] = (int *)0x0;
          }
LAB_004a3856:
          *(char *)ppiVar6 = (char)param_3;
          return (int)(ppiVar6 + 2) * 0x10 + (int)param_1 * -0xf;
        }
        param_2 = (int *)((int)param_2 - (int)piVar5);
        if (param_2 < param_3) {
          return 0;
        }
      }
      else {
        ppiVar4 = (int **)((int)ppiVar6 + (uint)*(byte *)ppiVar6);
      }
      ppiVar6 = ppiVar4;
      if (ppiVar2 <= ppiVar4) {
        return 0;
      }
    }
  }
  return 0;
}



undefined4 FUN_004a3880(int param_1,int **param_2,int **param_3,uint param_4)

{
  int **ppiVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int **ppiVar8;

  uVar5 = 0;
  piVar3 = (int *)(param_1 + 0x18 + ((int)param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  uVar7 = (uint)*(byte *)param_3;
  if (uVar7 <= param_4) {
    if ((uVar7 < param_4) && (ppiVar1 = (int **)(param_4 + (int)param_3), ppiVar1 <= param_2 + 0x3e)
       ) {
      for (ppiVar8 = (int **)(uVar7 + (int)param_3);
          (ppiVar8 < ppiVar1 && (*(char *)ppiVar8 == '\0')); ppiVar8 = (int **)((int)ppiVar8 + 1)) {
      }
      if (ppiVar8 == ppiVar1) {
        *(char *)param_3 = (char)param_4;
        if ((param_3 <= *param_2) && (*param_2 < ppiVar1)) {
          if (ppiVar1 < param_2 + 0x3e) {
            *param_2 = (int *)ppiVar1;
            piVar6 = (int *)0x0;
            cVar4 = *(char *)ppiVar1;
            while (cVar4 == '\0') {
              iVar2 = (int)piVar6 + 1;
              piVar6 = (int *)((int)piVar6 + 1);
              cVar4 = *(char *)(iVar2 + (int)ppiVar1);
            }
            param_2[1] = piVar6;
          }
          else {
            param_2[1] = (int *)0x0;
            *param_2 = (int *)(param_2 + 2);
          }
        }
        *piVar3 = *piVar3 + (uVar7 - param_4);
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  *(char *)param_3 = (char)param_4;
  piVar3[1] = 0xf1;
  *piVar3 = *piVar3 + (uVar7 - param_4);
  return 1;
}



undefined4 FUN_004a3950(undefined4 param_1)

{
  int iVar1;

  if (DAT_00dfab68 != (code *)0x0) {
    iVar1 = (*DAT_00dfab68)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



BOOL FUN_004a3970(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6
                 )

{
  BOOL BVar1;
  int cbMultiByte;
  LPCSTR lpMultiByteStr;
  int iVar2;
  LPWORD lpCharType;
  int local_4;

  lpCharType = (LPWORD)0x0;
  if (DAT_00dfab6c == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_00dfab6c = 2;
    }
    else {
      DAT_00dfab6c = 1;
    }
  }
  if (DAT_00dfab6c != 1) {
    local_4 = DAT_00dfab6c;
    if (DAT_00dfab6c == 2) {
      local_4 = 0;
      if (param_5 == 0) {
        param_5 = DAT_00dfab48;
      }
      cbMultiByte = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = (LPCSTR)FUN_004a8cc0(1,cbMultiByte);
      if (lpMultiByteStr == (LPCSTR)0x0) {
        return 0;
      }
      iVar2 = WideCharToMultiByte(param_5,0x220,param_2,param_3,lpMultiByteStr,cbMultiByte,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar2 != 0) &&
         (lpCharType = (LPWORD)FUN_0049f270(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (param_6 == 0) {
          param_6 = DAT_00dfab38;
        }
        lpCharType[param_3] = 0xffff;
        lpCharType[param_3 + -1] = 0xffff;
        local_4 = GetStringTypeA(param_6,param_1,lpMultiByteStr,cbMultiByte,lpCharType);
        if ((lpCharType[param_3 + -1] == 0xffff) || (lpCharType[param_3] != 0xffff)) {
          local_4 = 0;
        }
        else {
          FUN_0049f4e0(param_4,lpCharType,param_3 * 2);
        }
      }
      FUN_0049f200(lpMultiByteStr);
      FUN_0049f200(lpCharType);
    }
    return local_4;
  }
  BVar1 = GetStringTypeW(param_1,param_2,param_3,param_4);
  return BVar1;
}



BOOL FUN_004a3b00(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
                 int param_7)

{
  BOOL BVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  WORD local_2;

  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_00dfab70 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_00dfab70 = 2;
    }
    else {
      DAT_00dfab70 = 1;
    }
  }
  if (DAT_00dfab70 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_00dfab38;
    }
    BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
    return BVar1;
  }
  param_6 = DAT_00dfab70;
  if (DAT_00dfab70 == 1) {
    param_6 = 0;
    if (param_5 == 0) {
      param_5 = DAT_00dfab48;
    }
    iVar2 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar2 != 0) {
      lpWideCharStr = (LPCWSTR)FUN_004a8cc0(2,iVar2);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        iVar2 = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,iVar2);
        if (iVar2 != 0) {
          BVar1 = GetStringTypeW(param_1,lpWideCharStr,iVar2,param_4);
          FUN_0049f200(lpWideCharStr);
          return BVar1;
        }
      }
    }
    FUN_0049f200(lpWideCharStr);
  }
  return param_6;
}



undefined4 FUN_004a3c40(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;

  FUN_004a1640();
  DAT_004d4230 = TlsAlloc();
  if (DAT_004d4230 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_004a8cc0(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_004d4230,lpTlsValue);
      if (BVar1 != 0) {
        FUN_004a3ca0(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}



void FUN_004a3ca0(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_004d43c8;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



DWORD * FUN_004a3cc0(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;

  dwErrCode = GetLastError();
  lpTlsValue = (DWORD *)TlsGetValue(DAT_004d4230);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_004a8cc0(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_004d4230,lpTlsValue);
      if (BVar1 != 0) {
        FUN_004a3ca0(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        SetLastError(dwErrCode);
        return lpTlsValue;
      }
    }
    __amsg_exit(0x10);
  }
  SetLastError(dwErrCode);
  return lpTlsValue;
}



void FUN_004a3d40(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;

  puVar1 = (uint *)FUN_004a3dd0();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_004d4238;
  do {
    if (param_1 == *puVar1) {
      puVar2 = (undefined4 *)FUN_004a3dc0();
      *puVar2 = (&DAT_004d423c)[iVar3 * 2];
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar1 < &DAT_004d43a0);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    puVar2 = (undefined4 *)FUN_004a3dc0();
    *puVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    puVar2 = (undefined4 *)FUN_004a3dc0();
    *puVar2 = 8;
    return;
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 0x16;
  return;
}



int FUN_004a3dc0(void)

{
  int iVar1;

  iVar1 = FUN_004a3cc0();
  return iVar1 + 8;
}



int FUN_004a3dd0(void)

{
  int iVar1;

  iVar1 = FUN_004a3cc0();
  return iVar1 + 0xc;
}



void FUN_004a3de0(void)

{
  HANDLE *ppvVar1;
  byte bVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  HANDLE *ppvVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  UINT *pUVar9;
  UINT UStack_48;
  _STARTUPINFOA local_44;

  puVar3 = (undefined4 *)FUN_0049f270(0x480);
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_00ecd600 = 0x20;
  DAT_00ecd500 = puVar3;
  if (puVar3 < puVar3 + 0x120) {
    do {
      *(undefined *)(puVar3 + 1) = 0;
      *puVar3 = 0xffffffff;
      *(undefined *)((int)puVar3 + 5) = 10;
      puVar3[2] = 0;
      puVar3 = puVar3 + 9;
    } while (puVar3 < DAT_00ecd500 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UStack_48 = *(UINT *)local_44.lpReserved2;
    pUVar9 = (UINT *)((int)local_44.lpReserved2 + 4);
    ppvVar5 = (HANDLE *)((int)pUVar9 + UStack_48);
    if (0x7ff < (int)UStack_48) {
      UStack_48 = 0x800;
    }
    if ((int)DAT_00ecd600 < (int)UStack_48) {
      piVar7 = &DAT_00ecd504;
      do {
        puVar3 = (undefined4 *)FUN_0049f270(0x480);
        if (puVar3 == (undefined4 *)0x0) {
          UStack_48 = DAT_00ecd600;
          break;
        }
        *piVar7 = (int)puVar3;
        DAT_00ecd600 = DAT_00ecd600 + 0x20;
        if (puVar3 < puVar3 + 0x120) {
          do {
            *(undefined *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
            puVar3 = puVar3 + 9;
          } while (puVar3 < (undefined4 *)(*piVar7 + 0x480));
        }
        piVar7 = piVar7 + 1;
      } while ((int)DAT_00ecd600 < (int)UStack_48);
    }
    uVar8 = 0;
    if (0 < (int)UStack_48) {
      do {
        if (((*ppvVar5 != (HANDLE)0xffffffff) && ((*(byte *)pUVar9 & 1) != 0)) &&
           (((*(byte *)pUVar9 & 8) != 0 || (DVar4 = GetFileType(*ppvVar5), DVar4 != 0)))) {
          ppvVar1 = (HANDLE *)((int)(&DAT_00ecd500)[(int)uVar8 >> 5] + (uVar8 & 0x1f) * 0x24);
          *ppvVar1 = *ppvVar5;
          *(byte *)(ppvVar1 + 1) = *(byte *)pUVar9;
        }
        uVar8 = uVar8 + 1;
        pUVar9 = (UINT *)((int)pUVar9 + 1);
        ppvVar5 = ppvVar5 + 1;
      } while ((int)uVar8 < (int)UStack_48);
    }
  }
  iVar6 = 0;
  do {
    ppvVar5 = (HANDLE *)(DAT_00ecd500 + iVar6 * 9);
    if (DAT_00ecd500[iVar6 * 9] == -1) {
      *(undefined *)(ppvVar5 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile == (HANDLE)0xffffffff) || (DVar4 = GetFileType(hFile), DVar4 == 0)) {
        bVar2 = *(byte *)(ppvVar5 + 1) | 0x40;
        goto LAB_004a3fce;
      }
      *ppvVar5 = hFile;
      if ((DVar4 & 0xff) == 2) {
        bVar2 = *(byte *)(ppvVar5 + 1) | 0x40;
        goto LAB_004a3fce;
      }
      if ((DVar4 & 0xff) == 3) {
        bVar2 = *(byte *)(ppvVar5 + 1) | 8;
        goto LAB_004a3fce;
      }
    }
    else {
      bVar2 = *(byte *)(ppvVar5 + 1) | 0x80;
LAB_004a3fce:
      *(byte *)(ppvVar5 + 1) = bVar2;
    }
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_00ecd600);
      return;
    }
  } while( true );
}



undefined4 FUN_004a3ff0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  if ((param_1 < DAT_00ecd600) &&
     ((*(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_004a4a30(param_1);
    uVar1 = FUN_004a4070(param_1,param_2,param_3);
    FUN_004a4aa0(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004a3dd0();
  *puVar2 = 0;
  return 0xffffffff;
}



DWORD FUN_004a4070(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  undefined4 *puVar1;
  DWORD DVar2;
  DWORD DVar3;

  hFile = (HANDLE)FUN_004a49e0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar1 = (undefined4 *)FUN_004a3dc0();
    *puVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar2 == 0xffffffff) {
    DVar3 = GetLastError();
  }
  else {
    DVar3 = 0;
  }
  if (DVar3 != 0) {
    FUN_004a3d40(DVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}



uint FUN_004a40f0(byte **param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined *puVar4;

  pbVar3 = param_1[3];
  if ((((uint)pbVar3 & 0x83) != 0) && (((uint)pbVar3 & 0x40) == 0)) {
    if (((uint)pbVar3 & 2) != 0) {
      param_1[3] = (byte *)((uint)pbVar3 | 0x20);
      return 0xffffffff;
    }
    param_1[3] = (byte *)((uint)pbVar3 | 1);
    if (((uint)pbVar3 & 0x10c) == 0) {
      FUN_004a6a10(param_1);
    }
    else {
      *param_1 = param_1[2];
    }
    pbVar3 = (byte *)FUN_004a41e0(param_1[4],param_1[2],param_1[6]);
    param_1[1] = pbVar3;
    if ((pbVar3 != (byte *)0x0) && (pbVar3 != (byte *)0xffffffff)) {
      if (((uint)param_1[3] & 0x82) == 0) {
        pbVar2 = param_1[4];
        if (pbVar2 == (byte *)0xffffffff) {
          puVar4 = &DAT_004d43a0;
        }
        else {
          puVar4 = (undefined *)((&DAT_00ecd500)[(int)pbVar2 >> 5] + ((uint)pbVar2 & 0x1f) * 0x24);
        }
        if ((puVar4[4] & 0x82) == 0x82) {
          param_1[3] = (byte *)((uint)param_1[3] | 0x2000);
        }
      }
      if (((param_1[6] == (byte *)0x200) && (((uint)param_1[3] & 8) != 0)) &&
         (((uint)param_1[3] & 0x400) == 0)) {
        param_1[6] = (byte *)0x1000;
      }
      param_1[1] = pbVar3 + -1;
      bVar1 = **param_1;
      *param_1 = *param_1 + 1;
      return (uint)bVar1;
    }
    param_1[1] = (byte *)0x0;
    param_1[3] = (byte *)((uint)param_1[3] | (-(uint)(pbVar3 != (byte *)0x0) & 0x10) + 0x10);
  }
  return 0xffffffff;
}



undefined4 FUN_004a41e0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  if ((param_1 < DAT_00ecd600) &&
     ((*(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_004a4a30(param_1);
    uVar1 = FUN_004a4260(param_1,param_2,param_3);
    FUN_004a4aa0(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004a3dd0();
  *puVar2 = 0;
  return 0xffffffff;
}



int FUN_004a4260(uint param_1,char *param_2,DWORD param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  BOOL BVar4;
  DWORD DVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char cStack_9;
  DWORD local_8;
  int *local_4;

  iVar8 = 0;
  if (param_3 != 0) {
    piVar1 = &DAT_00ecd500 + ((int)param_1 >> 5);
    iVar7 = (param_1 & 0x1f) * 0x24;
    bVar3 = *(byte *)(iVar7 + 4 + (&DAT_00ecd500)[(int)param_1 >> 5]);
    if ((bVar3 & 2) == 0) {
      pcVar10 = param_2;
      if (((bVar3 & 0x48) != 0) &&
         (cVar2 = *(char *)(iVar7 + (&DAT_00ecd500)[(int)param_1 >> 5] + 5), cVar2 != '\n')) {
        *param_2 = cVar2;
        param_3 = param_3 - 1;
        pcVar10 = param_2 + 1;
        iVar8 = 1;
        *(undefined *)(iVar7 + 5 + *piVar1) = 10;
      }
      local_4 = piVar1;
      BVar4 = ReadFile(*(HANDLE *)(iVar7 + *piVar1),pcVar10,param_3,&local_8,(LPOVERLAPPED)0x0);
      if (BVar4 != 0) {
        iVar8 = iVar8 + local_8;
        bVar3 = *(byte *)(iVar7 + 4 + *piVar1);
        if ((bVar3 & 0x80) != 0) {
          if ((local_8 == 0) || (*param_2 != '\n')) {
            bVar3 = bVar3 & 0xfb;
          }
          else {
            bVar3 = bVar3 | 4;
          }
          *(byte *)(iVar7 + 4 + *piVar1) = bVar3;
          pcVar9 = param_2 + iVar8;
          pcVar10 = param_2;
          pcVar11 = param_2;
          if (param_2 < pcVar9) {
            while (cVar2 = *pcVar11, cVar2 != '\x1a') {
              if (cVar2 == '\r') {
                if (pcVar11 < pcVar9 + -1) {
                  if (pcVar11[1] == '\n') {
                    pcVar11 = pcVar11 + 2;
                    *pcVar10 = '\n';
                    goto LAB_004a4438;
                  }
                  *pcVar10 = '\r';
                  pcVar10 = pcVar10 + 1;
                  pcVar11 = pcVar11 + 1;
                }
                else {
                  DVar5 = 0;
                  pcVar11 = pcVar11 + 1;
                  BVar4 = ReadFile(*(HANDLE *)(iVar7 + *local_4),&cStack_9,1,&local_8,
                                   (LPOVERLAPPED)0x0);
                  if (BVar4 == 0) {
                    DVar5 = GetLastError();
                  }
                  if ((DVar5 == 0) && (local_8 != 0)) {
                    if ((*(byte *)(iVar7 + 4 + *local_4) & 0x48) == 0) {
                      if ((pcVar10 == param_2) && (cStack_9 == '\n')) {
                        *pcVar10 = '\n';
                        goto LAB_004a4438;
                      }
                      FUN_004a4070(param_1,0xffffffff,1);
                      if (cStack_9 != '\n') goto LAB_004a4435;
                    }
                    else {
                      if (cStack_9 == '\n') {
                        *pcVar10 = '\n';
                        goto LAB_004a4438;
                      }
                      *pcVar10 = '\r';
                      pcVar10 = pcVar10 + 1;
                      *(char *)(iVar7 + 5 + *local_4) = cStack_9;
                    }
                  }
                  else {
LAB_004a4435:
                    *pcVar10 = '\r';
LAB_004a4438:
                    pcVar10 = pcVar10 + 1;
                  }
                }
              }
              else {
                *pcVar10 = cVar2;
                pcVar10 = pcVar10 + 1;
                pcVar11 = pcVar11 + 1;
              }
              if (pcVar9 <= pcVar11) {
                return (int)pcVar10 - (int)param_2;
              }
            }
            bVar3 = *(byte *)(iVar7 + 4 + *local_4);
            if ((bVar3 & 0x40) == 0) {
              *(byte *)(iVar7 + 4 + *local_4) = bVar3 | 2;
            }
          }
          iVar8 = (int)pcVar10 - (int)param_2;
        }
        return iVar8;
      }
      DVar5 = GetLastError();
      if (DVar5 == 5) {
        puVar6 = (undefined4 *)FUN_004a3dc0();
        *puVar6 = 9;
        puVar6 = (undefined4 *)FUN_004a3dd0();
        *puVar6 = 5;
        return -1;
      }
      if (DVar5 != 0x6d) {
        FUN_004a3d40(DVar5);
        return -1;
      }
    }
  }
  return 0;
}



undefined4 FUN_004a4490(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  if ((param_1 < DAT_00ecd600) &&
     ((*(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_004a4a30(param_1);
    uVar1 = FUN_004a4510(param_1,param_2,param_3);
    FUN_004a4aa0(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004a3dd0();
  *puVar2 = 0;
  return 0xffffffff;
}



int FUN_004a4510(uint param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  DWORD local_41c;
  DWORD local_414;
  DWORD local_410;
  int local_40c;
  int *local_408;
  char local_404 [1028];

  local_41c = 0;
  local_40c = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = &DAT_00ecd500 + ((int)param_1 >> 5);
  iVar6 = (param_1 & 0x1f) * 0x24;
  local_408 = piVar1;
  if ((*(byte *)(iVar6 + 4 + *piVar1) & 0x20) != 0) {
    FUN_004a4070(param_1,0,2);
  }
  if ((*(byte *)((HANDLE *)(*piVar1 + iVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + iVar6),param_2,param_3,&local_410,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      local_414 = GetLastError();
    }
    else {
      local_41c = local_410;
      local_414 = 0;
    }
  }
  else {
    local_414 = 0;
    pcVar7 = param_2;
    if (param_3 != 0) {
      do {
        pcVar3 = local_404;
        do {
          if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\n') {
            *pcVar3 = '\r';
            local_40c = local_40c + 1;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar3 - (int)local_404 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)(iVar6 + *local_408),local_404,(int)pcVar3 - (int)local_404,
                          &local_410,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          local_414 = GetLastError();
          break;
        }
        local_41c = local_41c + local_410;
        if (((int)local_410 < (int)pcVar3 - (int)local_404) ||
           (param_3 <= (uint)((int)pcVar7 - (int)param_2))) break;
      } while( true );
    }
  }
  if (local_41c != 0) {
    return local_41c - local_40c;
  }
  if (local_414 == 0) {
    if (((*(byte *)(iVar6 + 4 + *local_408) & 0x40) != 0) && (*param_2 == '\x1a')) {
      return 0;
    }
    puVar5 = (undefined4 *)FUN_004a3dc0();
    *puVar5 = 0x1c;
    puVar5 = (undefined4 *)FUN_004a3dd0();
    *puVar5 = 0;
    return -1;
  }
  if (local_414 != 5) {
    FUN_004a3d40(local_414);
    return -1;
  }
  puVar5 = (undefined4 *)FUN_004a3dc0();
  *puVar5 = 9;
  puVar5 = (undefined4 *)FUN_004a3dd0();
  *puVar5 = 5;
  return -1;
}



int FUN_004a4720(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  int local_4;

  local_8 = -1;
  FUN_004a1670(0x12);
  local_4 = 0;
  iVar2 = 0;
  piVar3 = &DAT_00ecd500;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_0049f270(0x480);
      if (puVar1 != (undefined4 *)0x0) {
        DAT_00ecd600 = DAT_00ecd600 + 0x20;
        (&DAT_00ecd500)[local_4] = puVar1;
        if (puVar1 < puVar1 + 0x120) {
          do {
            *(undefined *)(puVar1 + 1) = 0;
            *puVar1 = 0xffffffff;
            *(undefined *)((int)puVar1 + 5) = 10;
            puVar1[2] = 0;
            puVar1 = puVar1 + 9;
          } while (puVar1 < (undefined4 *)((&DAT_00ecd500)[local_4] + 0x480));
        }
        local_8 = local_4 << 5;
        FUN_004a4a30(local_8);
      }
      break;
    }
    if (puVar1 < puVar1 + 0x120) {
      do {
        if ((*(byte *)(puVar1 + 1) & 1) == 0) {
          if (puVar1[2] == 0) {
            FUN_004a1670(0x11);
            if (puVar1[2] == 0) {
              InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
              puVar1[2] = puVar1[2] + 1;
            }
            FUN_004a16f0(0x11);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
          if ((*(byte *)(puVar1 + 1) & 1) == 0) {
            *puVar1 = 0xffffffff;
            local_8 = ((int)puVar1 - *piVar3) / 0x24 + iVar2;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
        }
        puVar1 = puVar1 + 9;
      } while (puVar1 < (undefined4 *)(*piVar3 + 0x480));
    }
    if (local_8 != -1) break;
    piVar3 = piVar3 + 1;
    local_4 = local_4 + 1;
    iVar2 = iVar2 + 0x20;
  } while ((int)piVar3 < 0xecd600);
  FUN_004a16f0(0x12);
  return local_8;
}



undefined4 FUN_004a4890(uint param_1,HANDLE param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;

  if (param_1 < DAT_00ecd600) {
    piVar1 = &DAT_00ecd500 + ((int)param_1 >> 5);
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (*(int *)(*piVar1 + iVar3) == -1) {
      if (DAT_004d1fb4 == 1) {
        if (param_1 == 0) {
          SetStdHandle(0xfffffff6,param_2);
        }
        else {
          if (param_1 == 1) {
            SetStdHandle(0xfffffff5,param_2);
            *(HANDLE *)(*piVar1 + iVar3) = param_2;
            return 0;
          }
          if (param_1 == 2) {
            SetStdHandle(0xfffffff4,param_2);
            *(HANDLE *)(*piVar1 + iVar3) = param_2;
            return 0;
          }
        }
      }
      *(HANDLE *)(*piVar1 + iVar3) = param_2;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004a3dd0();
  *puVar2 = 0;
  return 0xffffffff;
}



undefined4 FUN_004a4940(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;

  if (param_1 < DAT_00ecd600) {
    iVar1 = (&DAT_00ecd500)[(int)param_1 >> 5];
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (((*(byte *)(iVar1 + 4 + iVar3) & 1) != 0) && (*(int *)(iVar1 + iVar3) != -1)) {
      if (DAT_004d1fb4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_004a49a7;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_004a49a7:
      *(undefined4 *)((&DAT_00ecd500)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004a3dd0();
  *puVar2 = 0;
  return 0xffffffff;
}



undefined4 FUN_004a49e0(uint param_1)

{
  undefined4 *puVar1;

  if ((param_1 < DAT_00ecd600) &&
     ((*(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00ecd500)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)FUN_004a3dc0();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_004a3dd0();
  *puVar1 = 0;
  return 0xffffffff;
}



void FUN_004a4a30(uint param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_00ecd500)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_004a1670(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_004a16f0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_00ecd500)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



void FUN_004a4aa0(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_00ecd500)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



int FUN_004a4ad0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  HANDLE hFile;
  BOOL BVar6;
  DWORD DVar7;
  DWORD *pDVar8;
  int iVar9;
  int iVar10;
  undefined4 in_stack_00001008;
  int in_stack_0000100c;

  FUN_004a0a30();
  iVar10 = 0;
  iVar1 = FUN_004a4070(in_stack_00001008,0,1);
  if ((iVar1 == -1) || (iVar2 = FUN_004a4070(in_stack_00001008,0,2), iVar2 == -1)) {
    return -1;
  }
  iVar2 = in_stack_0000100c - iVar2;
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      FUN_004a4070(in_stack_00001008,in_stack_0000100c,0);
      hFile = (HANDLE)FUN_004a49e0(in_stack_00001008);
      BVar6 = SetEndOfFile(hFile);
      iVar10 = (BVar6 != 0) - 1;
      if (iVar10 == -1) {
        puVar5 = (undefined4 *)FUN_004a3dc0();
        *puVar5 = 0xd;
        DVar7 = GetLastError();
        pDVar8 = (DWORD *)FUN_004a3dd0();
        *pDVar8 = DVar7;
      }
    }
    FUN_004a4070(in_stack_00001008,iVar1,0);
    return iVar10;
  }
  puVar5 = (undefined4 *)&stack0x00000004;
  for (iVar9 = 0x400; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar3 = FUN_004a8d70(in_stack_00001008,0x8000);
  while( true ) {
    iVar9 = 0x1000;
    if (iVar2 < 0x1000) {
      iVar9 = iVar2;
    }
    iVar9 = FUN_004a4510(in_stack_00001008,&stack0x00000004,iVar9);
    if (iVar9 == -1) break;
    iVar2 = iVar2 - iVar9;
    if (iVar2 < 1) {
LAB_004a4b8a:
      FUN_004a8d70(in_stack_00001008,uVar3);
      FUN_004a4070(in_stack_00001008,iVar1,0);
      return iVar10;
    }
  }
  piVar4 = (int *)FUN_004a3dd0();
  if (*piVar4 == 5) {
    puVar5 = (undefined4 *)FUN_004a3dc0();
    *puVar5 = 0xd;
  }
  iVar10 = -1;
  goto LAB_004a4b8a;
}



LONG FUN_004a4c20(undefined4 param_1,_EXCEPTION_POINTERS *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  LONG LVar6;
  int iVar7;
  int iVar8;

  iVar4 = FUN_004a3cc0();
  piVar5 = (int *)FUN_004a4e30(param_1,*(undefined4 *)(iVar4 + 0x50));
  if ((piVar5 == (int *)0x0) || (pcVar1 = (code *)piVar5[2], pcVar1 == (code *)0x0)) {
    LVar6 = UnhandledExceptionFilter(param_2);
    return LVar6;
  }
  if (pcVar1 == (code *)0x5) {
    piVar5[2] = 0;
    return 1;
  }
  if (pcVar1 == (code *)0x1) {
    return -1;
  }
  uVar2 = *(undefined4 *)(iVar4 + 0x54);
  *(_EXCEPTION_POINTERS **)(iVar4 + 0x54) = param_2;
  if (piVar5[1] != 8) {
    piVar5[2] = 0;
    (*pcVar1)(piVar5[1]);
    *(undefined4 *)(iVar4 + 0x54) = uVar2;
    return -1;
  }
  if (DAT_004d4440 < DAT_004d4444 + DAT_004d4440) {
    iVar8 = DAT_004d4440 * 0xc;
    iVar7 = DAT_004d4440;
    do {
      iVar7 = iVar7 + 1;
      *(undefined4 *)(*(int *)(iVar4 + 0x50) + 8 + iVar8) = 0;
      iVar8 = iVar8 + 0xc;
    } while (iVar7 < DAT_004d4444 + DAT_004d4440);
  }
  iVar7 = *piVar5;
  uVar3 = *(undefined4 *)(iVar4 + 0x58);
  if (iVar7 == -0x3fffff72) {
    *(undefined4 *)(iVar4 + 0x58) = 0x83;
    (*pcVar1)(8,*(undefined4 *)(iVar4 + 0x58));
    *(undefined4 *)(iVar4 + 0x58) = uVar3;
    *(undefined4 *)(iVar4 + 0x54) = uVar2;
    return -1;
  }
  if (iVar7 == -0x3fffff70) {
    *(undefined4 *)(iVar4 + 0x58) = 0x81;
    (*pcVar1)(8,*(undefined4 *)(iVar4 + 0x58));
    *(undefined4 *)(iVar4 + 0x58) = uVar3;
    *(undefined4 *)(iVar4 + 0x54) = uVar2;
    return -1;
  }
  if (iVar7 != -0x3fffff6f) {
    if (iVar7 == -0x3fffff6d) {
      *(undefined4 *)(iVar4 + 0x58) = 0x85;
      (*pcVar1)(8,*(undefined4 *)(iVar4 + 0x58));
      *(undefined4 *)(iVar4 + 0x58) = uVar3;
      *(undefined4 *)(iVar4 + 0x54) = uVar2;
      return -1;
    }
    if (iVar7 != -0x3fffff73) {
      if (iVar7 != -0x3fffff71) {
        if (iVar7 == -0x3fffff6e) {
          *(undefined4 *)(iVar4 + 0x58) = 0x8a;
        }
        (*pcVar1)(8,*(undefined4 *)(iVar4 + 0x58));
        *(undefined4 *)(iVar4 + 0x58) = uVar3;
        *(undefined4 *)(iVar4 + 0x54) = uVar2;
        return -1;
      }
      *(undefined4 *)(iVar4 + 0x58) = 0x86;
      (*pcVar1)(8,*(undefined4 *)(iVar4 + 0x58));
      *(undefined4 *)(iVar4 + 0x58) = uVar3;
      *(undefined4 *)(iVar4 + 0x54) = uVar2;
      return -1;
    }
    *(undefined4 *)(iVar4 + 0x58) = 0x82;
    (*pcVar1)(8,*(undefined4 *)(iVar4 + 0x58));
    *(undefined4 *)(iVar4 + 0x58) = uVar3;
    *(undefined4 *)(iVar4 + 0x54) = uVar2;
    return -1;
  }
  *(undefined4 *)(iVar4 + 0x58) = 0x84;
  (*pcVar1)(8,*(undefined4 *)(iVar4 + 0x58));
  *(undefined4 *)(iVar4 + 0x58) = uVar3;
  *(undefined4 *)(iVar4 + 0x54) = uVar2;
  return -1;
}



int * FUN_004a4e30(int param_1,int *param_2)

{
  int *piVar1;

  piVar1 = param_2;
  if (*param_2 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (param_2 + DAT_004d444c * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_004d444c * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



void FUN_004a4e70(undefined4 param_1)

{
  FUN_004a4e90(param_1,0,4);
  return;
}



undefined4 FUN_004a4e90(uint param_1,uint param_2,byte param_3)

{
  if (((&DAT_00dfac89)[param_1 & 0xff] & param_3) == 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(ushort *)(&DAT_004d1d9a + (param_1 & 0xff) * 2) & param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  return 1;
}

#endif
