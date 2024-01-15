#include "prototype.h"


bool FUN_00409b10(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined local_50 [4];
  undefined4 local_4c [19];
  
  iVar1 = FUN_00408b60(s_current_004b2640);
  if (iVar1 < 0) {
    FUN_00408820();
    FUN_00408880(s_current_004b2640);
  }
  if (*param_1 != 0) {
    DAT_0050b5c8 = 0;
  }
  iVar1 = FUN_00487d20();
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_00487e00(param_1[4]);
  if (iVar1 == 0) {
    return true;
  }
  DAT_004b7a34 = param_1[4];
  iVar1 = FUN_00487f00(param_1[5],*param_1 == 0);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_00489d90(local_50);
  if (iVar1 != 0) {
    return true;
  }
  puVar3 = local_4c;
  puVar4 = &DAT_00ec8600;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_004238a0();
  if (iVar1 == 0) {
    FUN_0049ce60(DAT_00ec8600,DAT_00ec8604);
  }
  iVar1 = FUN_00489dc0();
  if (iVar1 == 0) {
    MessageBoxA((HWND)0x0,s_Direct3D_Failure_No_3D_Hardware_F_004b4900,s_Racer_Error_004b4928,0);
    FUN_0049eb80(s_Unknown_error_004b75f8,s_ERROR__No_3D_Hardware_Found___s_004b48e0,&DAT_00ecbc20);
    return true;
  }
  puVar3 = &DAT_00ec8700;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_7c = 1;
  local_80 = 1;
  local_84 = 1;
  uVar2 = FUN_0048ad50(&local_84);
  iVar1 = FUN_0048ad10(uVar2,&local_84);
  if ((iVar1 == 0) || (local_84 == 0)) {
    FUN_00487e80();
    FUN_00489e40();
    FUN_00487da0();
  }
  else {
    iVar1 = FUN_00489ec0(param_1[6]);
    if (iVar1 != 0) {
      DAT_004d79d8 = FUN_0048a140();
      DAT_004b431c = FUN_0048a1a0();
      if (DAT_004b431c == 0) {
        DAT_00ec86b0 = 0;
        DAT_00ec86b4 = 0;
      }
      iVar1 = FUN_004909b0();
      return iVar1 == 0;
    }
  }
  return true;
}

