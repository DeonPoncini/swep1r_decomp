#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466bd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar11 = 0;
  DAT_0050c530 = 0;
  sVar7 = 0;
  psVar4 = &DAT_0050c9d0;
  do {
    *psVar4 = sVar7;
    psVar4 = psVar4 + 1;
    sVar7 = sVar7 + 1;
  } while ((int)psVar4 < 0x50c9f8);
  FUN_00445aa0(1);
  DAT_00e289a8 = FUN_00445b40();
  DAT_00e288b4 = 0;
  DAT_0050ca2c = 0;
  FUN_00426910();
  FUN_004258e0();
  FUN_0042d470();
  FUN_0042c460();
  FUN_0042c3e0();
  FUN_0042c400();
  iVar9 = 0;
  iVar12 = 0;
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  DAT_00e28960 = param_2;
  DAT_00e2899c = 0;
  DAT_00e27820 = 0;
  DAT_00e2781c = 0;
  DAT_00e27890 = 0;
  DAT_0050ca18 = 0;
  iVar5 = param_2;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    do {
      iVar10 = iVar9;
      iVar13 = iVar12;
      iVar1 = DAT_00e2781c;
      iVar2 = DAT_00e27820;
      iVar3 = DAT_00e2899c;
      if ((((*(int *)(iVar5 + 4) == 0x4c6f636c) &&
           (DAT_0050ca18 = DAT_0050ca18 + 1, iVar10 = iVar5, iVar3 = iVar5, iVar9 != 0)) &&
          (iVar10 = iVar9, iVar2 = iVar5, iVar3 = DAT_00e2899c, DAT_00e27820 != 0)) &&
         ((iVar13 = iVar5, iVar1 = iVar5, iVar2 = DAT_00e27820, iVar12 != 0 &&
          (iVar13 = iVar12, iVar1 = DAT_00e2781c, iVar11 == 0)))) {
        iVar11 = iVar5;
        DAT_00e27890 = iVar5;
      }
      DAT_00e2899c = iVar3;
      DAT_00e27820 = iVar2;
      DAT_00e2781c = iVar1;
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 0x88;
      iVar9 = iVar10;
      iVar12 = iVar13;
    } while (iVar8 < *(int *)(param_1 + 0x1bc));
  }
  DAT_0050ccf8 = 0;
  DAT_0050cd00 = 0;
  DAT_0050ccfc = 0;
  DAT_0050cd04 = 0;
  DAT_0050ccf0 = 0;
  DAT_0050ca14 = 0;
  if (1 < DAT_0050ca18) {
    DAT_004b91c8 = 0;
    DAT_0050ccf0 = 1;
    if (*(int *)(param_1 + 0x1ac) == 6) {
      DAT_0050ca14 = 1;
    }
  }
  if ((*(int *)(param_1 + 0x1ac) == 3) && (*(int *)(param_1 + 0x1c0) == 2)) {
    DAT_0050cb40 = 1;
  }
  else if ((*(int *)(param_1 + 0x1ac) != 1) || (DAT_0050cb40 = 2, *(int *)(param_1 + 0x1c0) != 0)) {
    DAT_0050cb40 = 0;
  }
  FUN_00465510(param_1);
  FUN_00464630(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1c0),param_1);
  FUN_00465d00(param_1);
  FUN_00465d50(param_1);
  FUN_00466370(param_1);
  FUN_004667e0(param_1);
  FUN_004663e0(param_1,param_2);
  FUN_00427d70();
  iVar11 = 0;
  do {
    FUN_004276a0(iVar11,0xff0000);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x14);
  DAT_00e28a60 = FUN_00445b40();
  _DAT_00e27894 = FUN_00445bf0();
  _DAT_00e2875c = DAT_00e28a60 - DAT_00e289a8;
  _DAT_00e28760 = (0x400000 - _DAT_00e2875c) - _DAT_00e27894;
  piVar6 = &DAT_00e28860;
  do {
    iVar11 = *piVar6;
    piVar6 = piVar6 + 1;
    _DAT_00e2875c = _DAT_00e2875c - iVar11;
  } while ((int)piVar6 < 0xe288b0);
  _DAT_00e2875c = _DAT_00e2875c - (DAT_00e27240 + DAT_00e288b4 + DAT_00e289a4);
  FUN_00445b90();
  return;
}

