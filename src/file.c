#include "prototype.h"

#include "types.h"

// this is file  handling functions

LPCRITICAL_SECTION FUN_0049f1a0(char* param_1, char* param_2,int param_3)
{
  LPCRITICAL_SECTION iVar1;
  LPCRITICAL_SECTION uVar2;

  iVar1 = FUN_004a3040();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_004a2e70(param_1,param_2,param_3,iVar1);
  FUN_004a1780(iVar1);
  return uVar2;
}


// this is the fopen function - but thread safe?
LPCRITICAL_SECTION FUN_0049f1e0(char* param_1,char* param_2)
{
  return FUN_0049f1a0(param_1,param_2,0x40);
}

// create a critical section for the file opening
LPCRITICAL_SECTION FUN_004a3040(void)
{
#if 0
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
#endif
  return (LPCRITICAL_SECTION) 0;
}


// file opening internals, mode checking
LPCRITICAL_SECTION FUN_004a2e70(char * param_1,char *param_2,int param_3,LPCRITICAL_SECTION param_4)
{
#if 0
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
#endif
  return (LPCRITICAL_SECTION)0;
}
