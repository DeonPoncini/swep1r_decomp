#define _SIZE_T_DEFINED
#include "types.h"

#include <stddef.h>

#include "prototype.h"
#include "constants.h"
#include "global.h"

#include "kernel32.h"

// functions related to allocating memory

// feel confident this is malloc
LPVOID FUN_0049f270(undefined4 param_1)

{
  return (LPVOID) FUN_0049f290(param_1,DAT_00dfab64);
}

// malloc implementation
LPVOID FUN_0049f290(uint param_1,bool param_2)
{
  LPVOID iVar1 = NULL;

    // this is about 4GB max allocation
    // for 32 bit memory makes sense
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      // allocate enough for the pointer to delete itself?
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        iVar1 = FUN_0049f2e0(param_1);
      }
      else {
        iVar1 = NULL;
      }
      if (iVar1 != NULL) {
        return iVar1;
      }
      // if false, we don't try and malloc again
      if (param_2 == false) {
        return NULL;
      }
      // otherwise
      if (FUN_004a3950(param_1)) {
          iVar1 = (LPVOID)1;
      } else {
          iVar1 = NULL;
      }
    } while (iVar1 != NULL);
  }
  return NULL;
}

// allocate memory
LPVOID FUN_0049f2e0(uint param_1)
{
  LPVOID pvVar1;
  uint dwBytes;

  dwBytes = (param_1 + 0xfU) & 0xfffffff0;
  if (dwBytes <= DAT_004d422c) {
    // take a critical section
    FUN_004a1670(9);
    pvVar1 = (LPVOID)FUN_004a34c0((param_1 + 0xfU) >> 4);
    // leave critical section
    FUN_004a16f0(9);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
  }
  pvVar1 = HeapAlloc(DAT_00ecd604,0,dwBytes);
  return pvVar1;
}

bool FUN_004a3950(undefined4 param_1)
{
  int iVar1;

  if (DAT_00dfab68 != (code *)0x0) {
    iVar1 = (*DAT_00dfab68)(param_1);
    if (iVar1 != 0) {
      return true;
    }
  }
  return false;
}

// free implementation to release memory
void FUN_0049f200(LPVOID param_1)
{
  LPVOID lpMem;
  undefined* iVar1;
  int* local_4;

  lpMem = param_1;
  if (param_1 != NULL) {
    FUN_004a1670(9);
    iVar1 = FUN_004a3400(lpMem,&local_4,(uint*)&param_1);
    if (iVar1 != 0) {
      FUN_004a3460(local_4,param_1,iVar1);
      FUN_004a16f0(9);
      return;
    }
    FUN_004a16f0(9);
    HeapFree(DAT_00ecd604,0,lpMem);
  }
  return;
}

// create the heap to manage
bool FUN_004a3120(void)
{
  undefined** iVar1;

  DAT_00ecd604 = HeapCreate(0,0x1000,0);
  if (DAT_00ecd604 == NULL) {
    return false;
  }
  iVar1 = FUN_004a3160();
  if (iVar1 == NULL) {
    HeapDestroy(DAT_00ecd604);
    return false;
  }
  return true;
}

// more memory allocation
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
        *ppuVar4 = (undefined *)((int)(((bVar1 - 1) & 0xf1) - 1));
        ppuVar4[1] = (undefined *)0xf1;
        ppuVar4 = ppuVar4 + 2;
      } while (iVar3 < 0x400);
      puVar5 = lpAddress;
      for (iVar3 = 0x4000; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      if (lpAddress < (undefined4*)(lpMem[4] + 0x10000)) {
        do {
          lpAddress[1] = 0xf0;
          *lpAddress = (undefined4)(uint) lpAddress + 2;
          *(undefined *)(lpAddress + 0x3e) = 0xff;
          lpAddress = lpAddress + 0x400;
        } while (lpAddress < (undefined4*)(lpMem[4] + 0x10000));
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

// some sort of memory allocation mode
// we set DAT_004d2218 to -1 to indicate this buffer is being used
// for malloc, rather than the HeapAlloc
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

// some complex memory allocation
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
      piVar9 = (int *)(int)local_4[2];
      iVar8 = (int)((int)(piVar9 + (-0x18 - (int)local_4)) >> 3) * 0x1000 + local_4[4];
      for (; piVar9 < local_4 + 0x806; piVar9 = piVar9 + 2) {
        if (((int)param_1 <= *piVar9) && (param_1 < (uint)piVar9[1])) {
          piVar3 = (int *)(int)FUN_004a3700((int**)(int)iVar8,(int*)(int)*piVar9,(int*)(int)param_1);
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
      piVar3 = (int *)(int)local_4[2];
      iVar8 = local_4[4];
      for (piVar9 = local_4 + 6; piVar9 < piVar3; piVar9 = piVar9 + 2) {
        if (((int)param_1 <= *piVar9) && (param_1 < (uint)piVar9[1])) {
          piVar4 = (int *)(int)FUN_004a3700((int**)(int)iVar8,(int*)(int)*piVar9,(int*)(int)param_1);
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
    local_4 = (int *)(int)*local_4;
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
      *piVar9 = (int)(piVar9 + param_1 + 8);
      piVar9[1] = 0xf0 - param_1;
      *(uint *)(puVar5 + 0x18) = *(int *)(puVar5 + 0x18) - (param_1 & 0xff);
      return piVar9 + 0x40;
    }
  }
  ppuVar2 = (undefined **)ppuVar7[3];
  puVar5 = *ppuVar2;
  piVar9 = (int *)(int)(ppuVar7[4] + (((int)ppuVar2 + (-0x18 - (int)ppuVar7)) >> 3) * 0x1000);
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
  ppuVar7[3] = (undefined *)(uint)(-(uint)bVar10 & (uint)(uint)ppuVar6);
  *(char *)(piVar9 + 2) = (char)param_1;
  ppuVar7[2] = (undefined *)ppuVar2;
  *ppuVar2 = *ppuVar2 + -param_1;
  piVar9[1] = piVar9[1] - param_1;
  *piVar9 = (int)piVar9 + param_1 + 8;
  return piVar9 + 0x40;
}

// some free internals
undefined* FUN_004a3400(undefined *param_1,int **param_2,uint *param_3)
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
  if (((uint)(uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)(uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = (int *)ppuVar1;
  uVar2 = (uint)(uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return (undefined*)(int)((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}

void FUN_004a3460(int* param_1,LPVOID param_2,byte *param_3)
{
  int *piVar1;
  int iVar2;

  iVar2 = ((int)param_2 - *(int *)(param_1 + 0x10)) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_00dfab60 = DAT_00dfab60 + 1, DAT_00dfab60 == 0x20)) {
    FUN_004a3330(0x10);
  }
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
          BVar1 = VirtualFree((LPVOID)(int)(*(int *)(puVar5 + 0x10) + iVar3),0x1000,0x4000);
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
          FUN_004a32d0((undefined**)puVar5);
        }
      }
    }
    if ((puVar6 == PTR_LOOP_004d220c) || (puVar5 = puVar6, param_1 < 1)) {
      return;
    }
  } while( true );
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
    *(char *)ppiVar2 = (char)(int)param_3;
    if ((int **)(int)((int)ppiVar2 + (int)param_3) < param_1 + 0x3e) {
      *param_1 = (int *)(int)((int)*param_1 + (int)param_3);
      param_1[1] = (int *)(int)((int)param_1[1] - (int)param_3);
    }
    else {
      param_1[1] = (int *)0x0;
      *param_1 = (int *)(param_1 + 2);
    }
    return (int)(ppiVar2 + 2) * 0x10 + (int)param_1 * -0xf;
  }
  ppiVar3 = (int **)(int)((int)param_1[1] + (int)ppiVar2);
  ppiVar6 = ppiVar2;
  if (*(char *)ppiVar3 != '\0') {
    ppiVar6 = ppiVar3;
  }
  if ((int **)(int)((int)ppiVar6 + (int)param_3) < param_1 + 0x3e) {
    do {
      if (*(byte *)ppiVar6 == 0) {
        ppiVar3 = (int **)(int)((int)ppiVar6 + 1);
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
          *(char *)ppiVar6 = (char)(int)param_3;
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
