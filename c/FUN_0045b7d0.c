#include "prototype.h"


undefined4 * FUN_0045b7d0(int param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  undefined uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined *puVar13;
  undefined1 *local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined local_5a;
  undefined4 local_58;
  undefined2 local_54;
  undefined local_52;
  int local_50 [20];
  
  uVar9 = 0xfffffff;
  if (param_2 != (int *)0x0) {
    iVar7 = (int)*(char *)(param_1 + 0x70);
    if (0 < iVar7) {
      puVar6 = &DAT_00e35a94;
      do {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 0x14;
        uVar9 = uVar9 | uVar3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (*(int *)(param_1 + 100) == 2) {
      FUN_004816b0();
      uVar5 = __ftol();
      *(undefined *)(param_1 + 0x73) = uVar5;
    }
    *(undefined *)(param_1 + 0x70) = 1;
    iVar7 = 1;
    if ('\x01' < *(char *)(param_1 + 0x72)) {
      do {
        bVar4 = false;
        FUN_004816b0();
        uVar5 = __ftol();
        *(undefined *)(iVar7 + 0x73 + param_1) = uVar5;
        if ((iVar7 == 1) &&
           (*(char *)(param_1 + 0x73) != (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc])) {
          *(undefined *)(param_1 + 0x74) = (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc];
        }
        else {
          iVar8 = 0;
          if (0 < iVar7) {
            bVar1 = *(byte *)(iVar7 + 0x73 + param_1);
            do {
              if (bVar1 == *(byte *)(iVar8 + 0x73 + param_1)) {
                bVar4 = true;
              }
              if ((1 << (bVar1 & 0x1f) & uVar9) == 0) {
                bVar4 = true;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar7);
          }
        }
      } while ((bVar4) || (iVar7 = iVar7 + 1, iVar7 < *(char *)(param_1 + 0x72)));
    }
    iVar7 = 0;
    if ('\0' < *(char *)(param_1 + 0x72)) {
      param_2 = local_50;
      local_64 = &DAT_00e35a60;
      piVar10 = &DAT_00e29bc4;
      do {
        piVar10[-1] = iVar7;
        cVar2 = *(char *)(param_1 + 0x70);
        *param_2 = iVar7;
        *piVar10 = ((cVar2 <= iVar7) - 1 & 0xb2e1a23) + 0x41414949;
        if (*(int *)(param_1 + 100) != 0) {
          *piVar10 = 0x41414949;
        }
        *(undefined *)(piVar10 + 3) = 0;
        *(undefined *)((int)piVar10 + 0xd) = 0;
        if (*piVar10 == 0x4c6f636c) {
          piVar10[2] = (int)local_64;
        }
        else {
          piVar10[2] = 0;
        }
        piVar10[4] = iVar7;
        piVar10[5] = (int)(&DAT_004c2700 + *(char *)(iVar7 + 0x73 + param_1) * 0x34);
        if (*piVar10 == 0x41414949) {
          piVar11 = &DAT_004c3114;
          piVar12 = piVar10 + 6;
          for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = *piVar11;
            piVar11 = piVar11 + 1;
            piVar12 = piVar12 + 1;
          }
          piVar10[0x10] = *(int *)(&DAT_004c2bd8 + *(char *)(iVar7 + 0x73 + param_1) * 0x3c);
          piVar10[0x12] = *(int *)(&DAT_004c2be0 + *(char *)(iVar7 + 0x73 + param_1) * 0x3c);
          piVar10[0x14] = *(int *)(&DAT_004c2be8 + *(char *)(iVar7 + 0x73 + param_1) * 0x3c);
        }
        else {
          if (piVar10[2] == 0) {
            local_60 = 0xffffffff;
            local_58 = 0;
            local_5c = 0xffff;
            local_54 = 0;
            local_5a = 0xff;
            local_52 = 0;
          }
          else {
            iVar8 = 0;
            puVar13 = (undefined *)(piVar10[2] + 0x48);
            do {
              *(undefined *)((int)&local_58 + iVar8) = puVar13[-7];
              *(undefined *)((int)&local_60 + iVar8) = *puVar13;
              iVar8 = iVar8 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar8 < 7);
          }
          cVar2 = *(char *)(iVar7 + 0x73 + param_1);
          FUN_00449d00(piVar10 + 6,&DAT_004c2bb0 + cVar2 * 0x3c,&local_58,&local_60);
          FUN_00449330(&DAT_00e2aee0,&DAT_004c2bb0 + cVar2 * 0x3c);
          FUN_00449330(&DAT_00e2aec0,piVar10 + 6);
        }
        iVar7 = iVar7 + 1;
        param_2 = param_2 + 1;
        piVar10 = piVar10 + 0x22;
        local_64 = local_64 + 0x50;
      } while (iVar7 < *(char *)(param_1 + 0x72));
    }
    iVar7 = FUN_0045bab0(param_1);
    iVar8 = 0;
    if ('\0' < *(char *)(param_1 + 0x72)) {
      puVar6 = &DAT_00e29bc8;
      do {
        if (iVar7 == iVar8) {
          uVar9 = *puVar6 | 0x20;
        }
        else {
          uVar9 = *puVar6 & 0xffffffdf;
        }
        *puVar6 = uVar9;
        iVar8 = iVar8 + 1;
        puVar6 = puVar6 + 0x22;
      } while (iVar8 < *(char *)(param_1 + 0x72));
    }
    FUN_00411370();
    return &DAT_00e29bc0;
  }
  return &DAT_00e29bc0;
}

