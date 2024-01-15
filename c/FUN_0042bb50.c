#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042bb50(int param_1,int param_2,int param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *piVar8;
  undefined *puVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  iVar10 = param_1;
  if (0x31 < (int)(&DAT_00e9a3c0)[param_3]) {
    FUN_004285d0(*(undefined2 *)(&DAT_004b94c8 + param_3),0);
    piVar8 = &DAT_004b94e0 + param_3 * 8;
    iVar10 = 8;
    do {
      if (*piVar8 != -1) {
        FUN_004285d0(*(undefined2 *)piVar8,0);
      }
      piVar8 = piVar8 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    return;
  }
  iVar7 = param_1 - DAT_00ec86c4 / 2;
  iVar6 = param_2 - DAT_00ec85e8 / 2;
  fVar4 = _DAT_004ac57c - (float)(&DAT_00e9a3c0)[param_3] * _DAT_004ac59c;
  fVar5 = fVar4 * *(float *)(&DAT_004b94d0 + param_3 * 4);
  fVar11 = (float10)FUN_00480670((float)(iVar7 * iVar7 + iVar6 * iVar6));
  fVar1 = (float)(fVar11 * (float10)_DAT_004ac5a0);
  if (fVar11 * (float10)_DAT_004ac5a0 <= (float10)_DAT_004ac57c) {
    __ftol();
  }
  __ftol();
  iVar6 = __ftol();
  if (DAT_00e9a830 < iVar6) {
    DAT_00e9a830 = iVar6;
  }
  FUN_004285d0(*(undefined2 *)(&DAT_004b94c8 + param_3),1);
  FUN_0042bb00(CONCAT22(extraout_var,*(undefined2 *)(&DAT_004b94c8 + param_3)),param_1,param_2);
  FUN_004286f0(CONCAT22(extraout_var_00,*(undefined2 *)(&DAT_004b94c8 + param_3)),fVar5,fVar5);
  iVar6 = FUN_00445690();
  if (iVar6 == 0) {
    iVar6 = 0xff;
  }
  else {
    FUN_004456a0();
    iVar6 = __ftol();
  }
  iVar6 = iVar6 * (char)(&DAT_004b94db)[param_3 * 4];
  FUN_00428740(CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(&DAT_004b94c8 + param_3)),
               (&DAT_004b94d8)[param_3 * 4],
               CONCAT31((int3)((uint)(iVar6 / 0xff) >> 8),(&DAT_004b94d9)[param_3 * 4]),
               CONCAT31((int3)((uint)iVar6 >> 8),(&DAT_004b94da)[param_3 * 4]),iVar6 / 0xff);
  if ((fVar1 <= _DAT_004ac5b0) && (iVar6 = FUN_004376b0(), iVar6 != 0)) {
    fVar12 = (float10)FUN_004456a0();
    fVar13 = (float10)_DAT_004ac5b0;
    fVar11 = (float10)_DAT_004ac5b4;
    fVar2 = (float10)_DAT_004ac568;
    fVar3 = (float10)_DAT_004ac57c;
    param_1 = 8;
    puVar9 = &DAT_00e9a6a1 + param_3 * 0x18;
    iVar6 = param_3 << 5;
    fVar5 = (float)(uint)(byte)(&DAT_004b94db)[param_3 * 4] * _DAT_004ac5a8;
    do {
      if (*(int *)((int)&DAT_004b94e0 + iVar6) != -1) {
        FUN_004285d0(*(undefined2 *)((int)&DAT_004b94e0 + iVar6),1);
        FUN_0042ba20(*(undefined4 *)((int)&DAT_004b94e0 + iVar6),iVar10,param_2,
                     *(undefined4 *)(&DAT_00e99780 + iVar6),*(undefined4 *)(&DAT_00e9a440 + iVar6),
                     fVar5 * (float)((fVar13 - (float10)fVar1) * fVar2 * (float10)fVar4 *
                                    (fVar3 - fVar12 * fVar11)),puVar9[-1],*puVar9,puVar9[1]);
      }
      puVar9 = puVar9 + 3;
      iVar6 = iVar6 + 4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    return;
  }
  piVar8 = &DAT_004b94e0 + param_3 * 8;
  iVar10 = 8;
  do {
    if (*piVar8 != -1) {
      FUN_004285d0(*(undefined2 *)piVar8,0);
    }
    piVar8 = piVar8 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  return;
}

