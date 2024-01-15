#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00423cc0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_100 [256];
  
  _DAT_0050b5a0 = 1;
  FUN_00424430(param_1);
  FUN_0048c3d0(&DAT_00e9f280);
  _DAT_00e9f288 = &LAB_00484820;
  _DAT_00e9f290 = &LAB_00484820;
  _DAT_00e9f294 = &LAB_00484820;
  FUN_00484720(&DAT_00e9f280);
  FUN_00421120(s___data_racer_tab_004b7bb4);
  FUN_004238a0();
  FUN_004081c0();
  FUN_00410fd0();
  _DAT_0050b598 = GetModuleHandleA((LPCSTR)0x0);
  FUN_0049d060(0x80000002,s_Software_LucasArts_Entertainment_004b7b64);
  DAT_0050b560 = FUN_0049d230(s_FullScreen_004b7b58,DAT_0050b560);
  DAT_0050b564 = FUN_0049d230(s_Fix_Flicker_004b7b4c,DAT_0050b564);
  DAT_0050b568 = 0;
  DAT_0050b56c = FUN_0049d230(s_UseFett_004b7b44,DAT_0050b56c);
  iVar1 = FUN_0048bc10();
  if (iVar1 == 0) {
    MessageBoxA((HWND)0x0,s_Direct3D_Failure_No_3D_Hardware_F_004b4900,s_Racer_Error_004b4928,0x30);
    return 0;
  }
  FUN_004246c0(1);
  FUN_004238a0();
  FUN_00424180(iVar1,&DAT_0050b560);
  _DAT_0050b58c = 1;
  if (DAT_0050b5b0 != 0) {
    uVar2 = FUN_0048c780(&DAT_0050b560);
    _DAT_0050b58c = FUN_004246d0(uVar2);
    return 0;
  }
  FUN_004246c0(0);
  if ((DAT_0050b560 == 0) && (DAT_0050b568 == 0)) {
    ShowWindow(DAT_0050b59c,3);
  }
  DAT_0050cb68 = DAT_0050b568;
  FUN_0048be20(iVar1);
  FUN_00490950(&DAT_00e9f280);
  DAT_0050b59c = (HWND)FUN_0048c780();
  FUN_00425500();
  FUN_00484310(s___data_config__004b252c);
  FUN_0049eb80(auStack_100,&DAT_004b2524,s___data_config__004b252c,s_current_004b2640);
  FUN_00484310(auStack_100);
  iVar1 = FUN_00409b10(&DAT_0050b560);
  if (iVar1 != 0) {
    FUN_0049eb80(s_Unknown_error_004b75f8,s_Unable_to_open_display_for_3D____004b7b20,&DAT_00ecbc20)
    ;
    FUN_00424150();
    return 0;
  }
  FUN_004238a0();
  FUN_00408510();
  FUN_00408640(0);
  uVar2 = FUN_004112e1();
  return uVar2;
}

