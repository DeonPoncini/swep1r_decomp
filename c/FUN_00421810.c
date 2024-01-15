#include "prototype.h"


void FUN_00421810(void)

{
  int iVar1;
  
  iVar1 = FUN_00421b90();
  if (iVar1 == 0) {
    FUN_00421b20(1);
    iVar1 = FUN_00421c90();
    if (iVar1 == 0) {
      (**(code **)(DAT_00ecc420 + 0x18))
                (s_elfSaveLoad_SaveThisGameStruct___004b6c94,
                 s_D__devel_QA5_pc_gnome_SpecPlat_r_004b6cb8,0x4f);
    }
  }
  FUN_0044e500(0,0);
  return;
}

