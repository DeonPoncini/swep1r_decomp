#include "prototype.h"

#include "types.h"

#include <stdarg.h>

// sprintf entry point
int FUN_0049eb80(char *param_1,char* param_2, char* param_3, ...)
{
  undefined4 uVar1;
  char *local_20;
  int local_1c;
  //char *local_18;
  //undefined4 local_14;

  //local_18 = param_1;
  local_20 = param_1;
  //local_14 = 0x42;
  local_1c = 0x7fffffff;

  // pass in variable arguments
  va_list argptr;
  va_start(argptr, param_3);
  uVar1 = FUN_004a1920(&local_20,param_2, argptr);
  va_end(argptr);

  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    *local_20 = 0;
    return uVar1;
  }
#if 0
  FUN_004a17f0(0,&local_20);
#endif
  return uVar1;
}

int FUN_004a1920(char** param_1,char *param_2, char* param_3)
{
#if 0
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
#endif
  return 0;
}

#if 0
// functions related to string manipulation
// this joins a string by interpolating like printf
// so if you have "some string %s", "extra" it will return a complete string
// "some string extra"
char * FUN_00421360(char *param_1)

{
  char cVar1;
  undefined *puVar2;
  char **ppcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *local_104;
  char local_100 [256];

  local_104 = local_100;
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if ((*param_1 != '\0') && (*param_1 == '/')) {
    iVar4 = -1;
    pcVar6 = param_1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -3) {
      iVar4 = FUN_0049fb10(param_1 + 1,0x2f);
      if (DAT_004eb3c8 == 0) {
        return (char *)(iVar4 + 1);
      }
      _strncpy(local_100,param_1 + 1,0xfe);
      puVar2 = (undefined *)FUN_0049fb10(local_100,0x2f);
      if (puVar2 != (undefined *)0x0) {
        *puVar2 = 0;
      }
      FUN_004ab5d0(local_100);
      ppcVar3 = (char **)FUN_0049fdb0(&local_104,DAT_004eb3c4,DAT_004eb3cc,4,&LAB_004212f0);
      if (ppcVar3 == (char **)0x0) {
        return (char *)(iVar4 + 1);
      }
      pcVar6 = *ppcVar3;
      uVar5 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (pcVar6[~uVar5] != '\0') {
        return pcVar6 + ~uVar5;
      }
    }
  }
  return param_1;
}

#endif
