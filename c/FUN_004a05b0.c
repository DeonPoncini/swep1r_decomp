#include "prototype.h"


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

