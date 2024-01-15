#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042be60(void)

{
  char cVar1;
  float fVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_30;
  short *local_2c;
  int local_28;
  float *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  short *local_c;
  undefined local_8 [4];
  float local_4;
  
  FUN_00431c40(&local_20,&local_28,&local_2c,&local_4,local_8);
  local_c = (short *)(local_28 * DAT_00ec85e8 + (int)local_2c);
  local_24 = (float *)0x0;
  do {
    if (-1 < *(int *)((int)&DAT_004b94c8 + (int)local_24)) {
      iVar5 = *(int *)((int)&DAT_00e9a480 + (int)local_24);
      if (iVar5 < -500) {
        *(undefined4 *)((int)&DAT_00e9a3c0 + (int)local_24) = 0x32;
      }
      else {
        local_30 = 0;
        local_1c = -iVar5 + 0xc;
        local_18 = DAT_00ec86c4 + -8 + -iVar5;
        local_10 = -*(int *)((int)&DAT_00e9a488 + (int)local_24);
        local_14 = local_10 + 0xc;
        local_10 = DAT_00ec85e8 + -8 + local_10;
        psVar3 = (short *)((int)local_2c +
                          (iVar5 + -4) * local_20 +
                          (*(int *)((int)&DAT_00e9a488 + (int)local_24) + -4) * local_28);
        iVar5 = 0;
        do {
          iVar4 = 0;
          do {
            if (((((iVar4 < local_1c) || (local_18 <= iVar4)) || (iVar5 < local_14)) ||
                (local_10 <= iVar5)) ||
               (((local_2c <= psVar3 && (psVar3 < local_c)) &&
                (((local_20 == 1 && (*(char *)psVar3 != -1)) || ((local_20 == 2 && (*psVar3 != -1)))
                 ))))) {
              local_30 = local_30 + 1;
            }
            psVar3 = (short *)((int)psVar3 + local_20);
            iVar4 = iVar4 + 1;
          } while (iVar4 < 8);
          psVar3 = (short *)((int)psVar3 + local_28 + local_20 * -8);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
        *(int *)((int)&DAT_00e9a3c0 + (int)local_24) = local_30;
      }
    }
    local_24 = (float *)((int)local_24 + 4);
  } while ((int)local_24 < 8);
  switch(local_20) {
  case 1:
    local_4 = DAT_004b94b0;
    break;
  case 2:
    local_4 = DAT_004b94b4;
    break;
  case 3:
    local_4 = DAT_004b94bc;
    break;
  case 4:
    local_4 = DAT_004b94b8;
  }
  iVar5 = 0;
  do {
    *(undefined4 *)((int)&DAT_00e9a7e0 + iVar5) = 0xc47a0000;
    if (-1 < *(int *)((int)&DAT_00e9a720 + iVar5)) {
      fVar2 = _DAT_004ac5b8;
      if (0 < local_20) {
        pcVar7 = (char *)((int)local_2c +
                         local_20 +
                         local_20 * *(int *)((int)&DAT_00e9a720 + iVar5) +
                         *(int *)((int)&DAT_00e9a780 + iVar5) * local_28);
        iVar4 = local_20 * 8;
        iVar6 = local_20;
        do {
          cVar1 = (char)iVar4;
          iVar4 = iVar4 + -8;
          local_c = (short *)((uint)(byte)pcVar7[-1] << (cVar1 - 8U & 0x1f));
          pcVar7 = pcVar7 + -1;
          iVar6 = iVar6 + -1;
          fVar2 = fVar2 + (float)(int)local_c;
        } while (iVar6 != 0);
      }
      *(float *)((int)&DAT_00e9a7e0 + iVar5) = fVar2 * local_4;
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x50);
  iVar5 = 0;
  local_24 = (float *)&DAT_00e99d80;
  do {
    if ((&DAT_00e9a6e0)[iVar5] != '\0') {
      iVar4 = (&DAT_00e99ce0)[iVar5];
      *local_24 = -1000.0;
      if (-1 < iVar4) {
        fVar2 = _DAT_004ac5b8;
        if (0 < local_20) {
          pcVar7 = (char *)((int)local_2c +
                           local_20 + local_20 * iVar4 + (&DAT_00e99c40)[iVar5] * local_28);
          iVar4 = local_20 * 8;
          iVar6 = local_20;
          do {
            cVar1 = (char)iVar4;
            iVar4 = iVar4 + -8;
            local_c = (short *)((uint)(byte)pcVar7[-1] << (cVar1 - 8U & 0x1f));
            pcVar7 = pcVar7 + -1;
            iVar6 = iVar6 + -1;
            fVar2 = fVar2 + (float)(int)local_c;
          } while (iVar6 != 0);
        }
        *local_24 = fVar2 * local_4;
      }
    }
    local_24 = local_24 + 1;
    iVar5 = iVar5 + 1;
  } while ((int)local_24 < 0xe99e20);
  iVar5 = 0;
  if (0 < DAT_0050c088) {
    local_24 = (float *)&DAT_00e9a8e0;
    do {
      iVar4 = (&DAT_00e9a8a0)[iVar5];
      *local_24 = -1000.0;
      if (-1 < iVar4) {
        fVar2 = _DAT_004ac5b8;
        if (0 < local_20) {
          pcVar7 = (char *)((int)local_2c +
                           local_20 + local_20 * iVar4 + (&DAT_00e9a920)[iVar5] * local_28);
          iVar4 = local_20 * 8;
          iVar6 = local_20;
          do {
            cVar1 = (char)iVar4;
            iVar4 = iVar4 + -8;
            local_c = (short *)((uint)(byte)pcVar7[-1] << (cVar1 - 8U & 0x1f));
            pcVar7 = pcVar7 + -1;
            iVar6 = iVar6 + -1;
            fVar2 = fVar2 + (float)(int)local_c;
          } while (iVar6 != 0);
        }
        *local_24 = fVar2 * local_4;
      }
      iVar5 = iVar5 + 1;
      local_24 = local_24 + 1;
    } while (iVar5 < DAT_0050c088);
  }
  FUN_00431cd0();
  return;
}

