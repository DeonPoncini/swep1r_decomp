#include "prototype.h"


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

