#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0042be60(void)

{
  char cVar1;
  float fVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iStack_30;
  short *psStack_2c;
  int iStack_28;
  float *pfStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  short *psStack_c;
  undefined auStack_8 [4];
  float fStack_4;
  
  FUN_00431c40(&iStack_20,&iStack_28,&psStack_2c,&fStack_4,auStack_8);
  psStack_c = (short *)(iStack_28 * DAT_00ec85e8 + (int)psStack_2c);
  pfStack_24 = (float *)0x0;
  do {
    if (-1 < *(int *)((int)&DAT_004b94c8 + (int)pfStack_24)) {
      iVar5 = *(int *)((int)&DAT_00e9a480 + (int)pfStack_24);
      if (iVar5 < -500) {
        *(undefined4 *)((int)&DAT_00e9a3c0 + (int)pfStack_24) = 0x32;
      }
      else {
        iStack_30 = 0;
        iStack_1c = -iVar5 + 0xc;
        iStack_18 = DAT_00ec86c4 + -8 + -iVar5;
        iStack_10 = -*(int *)((int)&DAT_00e9a488 + (int)pfStack_24);
        iStack_14 = iStack_10 + 0xc;
        iStack_10 = DAT_00ec85e8 + -8 + iStack_10;
        psVar3 = (short *)((int)psStack_2c +
                          (iVar5 + -4) * iStack_20 +
                          (*(int *)((int)&DAT_00e9a488 + (int)pfStack_24) + -4) * iStack_28);
        iVar5 = 0;
        do {
          iVar4 = 0;
          do {
            if (((((iVar4 < iStack_1c) || (iStack_18 <= iVar4)) || (iVar5 < iStack_14)) ||
                (iStack_10 <= iVar5)) ||
               (((psStack_2c <= psVar3 && (psVar3 < psStack_c)) &&
                (((iStack_20 == 1 && (*(char *)psVar3 != -1)) ||
                 ((iStack_20 == 2 && (*psVar3 != -1)))))))) {
              iStack_30 = iStack_30 + 1;
            }
            psVar3 = (short *)((int)psVar3 + iStack_20);
            iVar4 = iVar4 + 1;
          } while (iVar4 < 8);
          psVar3 = (short *)((int)psVar3 + iStack_28 + iStack_20 * -8);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
        *(int *)((int)&DAT_00e9a3c0 + (int)pfStack_24) = iStack_30;
      }
    }
    pfStack_24 = (float *)((int)pfStack_24 + 4);
  } while ((int)pfStack_24 < 8);
  switch(iStack_20) {
  case 1:
    fStack_4 = DAT_004b94b0;
    break;
  case 2:
    fStack_4 = DAT_004b94b4;
    break;
  case 3:
    fStack_4 = DAT_004b94bc;
    break;
  case 4:
    fStack_4 = DAT_004b94b8;
  }
  iVar5 = 0;
  do {
    *(undefined4 *)((int)&DAT_00e9a7e0 + iVar5) = 0xc47a0000;
    if (-1 < *(int *)((int)&DAT_00e9a720 + iVar5)) {
      fVar2 = _DAT_004ac5b8;
      if (0 < iStack_20) {
        pcVar7 = (char *)((int)psStack_2c +
                         iStack_20 +
                         iStack_20 * *(int *)((int)&DAT_00e9a720 + iVar5) +
                         *(int *)((int)&DAT_00e9a780 + iVar5) * iStack_28);
        iVar4 = iStack_20 * 8;
        iVar6 = iStack_20;
        do {
          cVar1 = (char)iVar4;
          iVar4 = iVar4 + -8;
          psStack_c = (short *)((uint)(byte)pcVar7[-1] << (cVar1 - 8U & 0x1f));
          pcVar7 = pcVar7 + -1;
          iVar6 = iVar6 + -1;
          fVar2 = fVar2 + (float)(int)psStack_c;
        } while (iVar6 != 0);
      }
      *(float *)((int)&DAT_00e9a7e0 + iVar5) = fVar2 * fStack_4;
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x50);
  iVar5 = 0;
  pfStack_24 = (float *)&DAT_00e99d80;
  do {
    if ((&DAT_00e9a6e0)[iVar5] != '\0') {
      iVar4 = (&DAT_00e99ce0)[iVar5];
      *pfStack_24 = -1000.0;
      if (-1 < iVar4) {
        fVar2 = _DAT_004ac5b8;
        if (0 < iStack_20) {
          pcVar7 = (char *)((int)psStack_2c +
                           iStack_20 + iStack_20 * iVar4 + (&DAT_00e99c40)[iVar5] * iStack_28);
          iVar4 = iStack_20 * 8;
          iVar6 = iStack_20;
          do {
            cVar1 = (char)iVar4;
            iVar4 = iVar4 + -8;
            psStack_c = (short *)((uint)(byte)pcVar7[-1] << (cVar1 - 8U & 0x1f));
            pcVar7 = pcVar7 + -1;
            iVar6 = iVar6 + -1;
            fVar2 = fVar2 + (float)(int)psStack_c;
          } while (iVar6 != 0);
        }
        *pfStack_24 = fVar2 * fStack_4;
      }
    }
    pfStack_24 = pfStack_24 + 1;
    iVar5 = iVar5 + 1;
  } while ((int)pfStack_24 < 0xe99e20);
  iVar5 = 0;
  if (0 < DAT_0050c088) {
    pfStack_24 = (float *)&DAT_00e9a8e0;
    do {
      iVar4 = (&DAT_00e9a8a0)[iVar5];
      *pfStack_24 = -1000.0;
      if (-1 < iVar4) {
        fVar2 = _DAT_004ac5b8;
        if (0 < iStack_20) {
          pcVar7 = (char *)((int)psStack_2c +
                           iStack_20 + iStack_20 * iVar4 + (&DAT_00e9a920)[iVar5] * iStack_28);
          iVar4 = iStack_20 * 8;
          iVar6 = iStack_20;
          do {
            cVar1 = (char)iVar4;
            iVar4 = iVar4 + -8;
            psStack_c = (short *)((uint)(byte)pcVar7[-1] << (cVar1 - 8U & 0x1f));
            pcVar7 = pcVar7 + -1;
            iVar6 = iVar6 + -1;
            fVar2 = fVar2 + (float)(int)psStack_c;
          } while (iVar6 != 0);
        }
        *pfStack_24 = fVar2 * fStack_4;
      }
      iVar5 = iVar5 + 1;
      pfStack_24 = pfStack_24 + 1;
    } while (iVar5 < DAT_0050c088);
  }
  FUN_00431cd0();
  return;
}

