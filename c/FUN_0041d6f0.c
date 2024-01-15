#include "prototype.h"


undefined4 FUN_0041d6f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  int *piVar9;
  
  piVar9 = (int *)(param_1 + 0x28);
  if ((DAT_004d5e00 != 0) && (param_1 = *piVar9, 0 < param_1)) {
    do {
      iVar2 = piVar9[1];
      iVar7 = iVar2 * 0x1f28;
      *(int *)(&DAT_00ea0720 + iVar7) = piVar9[2];
      *(int *)(&DAT_00ea0730 + iVar7) = piVar9[3];
      *(int *)(&DAT_00ea0740 + iVar7) = piVar9[4];
      *(int *)(&DAT_00ea0750 + iVar7) = piVar9[5];
      *(int *)(&DAT_00ea0724 + iVar7) = piVar9[6];
      *(int *)(&DAT_00ea0734 + iVar7) = piVar9[7];
      *(int *)(&DAT_00ea0744 + iVar7) = piVar9[8];
      *(int *)(&DAT_00ea0754 + iVar7) = piVar9[9];
      *(int *)(&DAT_00ea0728 + iVar7) = piVar9[10];
      *(int *)(&DAT_00ea0738 + iVar7) = piVar9[0xb];
      *(int *)(&DAT_00ea0748 + iVar7) = piVar9[0xc];
      *(int *)(&DAT_00ea0758 + iVar7) = piVar9[0xd];
      *(int *)(&DAT_00ea072c + iVar7) = piVar9[0xe];
      *(int *)(&DAT_00ea073c + iVar7) = piVar9[0xf];
      *(int *)(&DAT_00ea074c + iVar7) = piVar9[0x10];
      *(int *)(&DAT_00ea075c + iVar7) = piVar9[0x11];
      (&DAT_00ec7640)[iVar2] = piVar9[0x12];
      (&DAT_00ea0360)[iVar2] = piVar9[0x13];
      (&DAT_00ea0420)[iVar2] = piVar9[0x14];
      (&DAT_00ea0480)[iVar2] = piVar9[0x15];
      iVar3 = piVar9[0x16];
      iVar4 = piVar9[0x17];
      iVar7 = piVar9[0x18];
      iVar5 = piVar9[0x19];
      iVar6 = piVar9[0x1a];
      *(int *)(&DAT_00ea03c0 + iVar2 * 4) = piVar9[0x1b];
      piVar1 = piVar9 + 0x1c;
      piVar9 = piVar9 + 0x1c;
      *(int *)(&DAT_00ea01a0 + iVar2 * 4) = *piVar1;
      if (iVar6 == 0x41414949) {
        (&DAT_00ea05c0)[iVar2 * 4] = 0x29a;
        (&DAT_00ea05c4)[iVar2 * 4] = 0;
        (&DAT_00ea05c8)[iVar2 * 4] = 0;
        (&DAT_00ea05cc)[iVar2 * 4] = 0;
      }
      else {
        (&DAT_00ea05c0)[iVar2 * 4] = iVar3;
        (&DAT_00ea05c4)[iVar2 * 4] = iVar4;
        (&DAT_00ea05c8)[iVar2 * 4] = iVar7;
        (&DAT_00ea05cc)[iVar2 * 4] = iVar5;
      }
      DVar8 = timeGetTime();
      *(DWORD *)(&DAT_00ea0200 + iVar2 * 4) = DVar8;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return 1;
}

