#include "prototype.h"


undefined4 FUN_0040ab80(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined local_140 [32];
  undefined local_120 [32];
  undefined local_100 [256];
  
  FUN_0049eb80(local_100,s__s_s__s_004b4830,s___data_config__004b252c,param_1,s_force_cfg_004b4d64);
  iVar1 = FUN_004877d0(local_100);
  if (iVar1 == 0) {
    FUN_00487960();
    return 0xffffffff;
  }
  FUN_0049eb80(local_120,s_FORCEFEEDBACK_004b4d54);
  iVar1 = FUN_004879f0(s___________s_SETTINGS_004b4810,local_120);
  if (iVar1 == 0) {
    FUN_0049eb80(local_140,s_STRENGTH__i_004b4d48,DAT_00ec83e0);
    iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
    if (iVar1 == 0) {
      FUN_0049eb80(local_140,s_AUTOCENTER__i_004b4d38,DAT_00ec83e4);
      iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
      if (iVar1 == 0) {
        FUN_0049eb80(local_140,s_COLLISIONS__i_004b4d28,DAT_00ec83e8);
        iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
        if (iVar1 == 0) {
          FUN_0049eb80(local_140,s_DAMAGE__i_004b4d1c,DAT_00ec83ec);
          iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
          if (iVar1 == 0) {
            FUN_0049eb80(local_140,s_TERRAIN__i_004b4d10,DAT_00ec83f0);
            iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
            if (iVar1 == 0) {
              FUN_0049eb80(local_140,s_PODACTIONS__i_004b4d00,DAT_00ec83f4);
              iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
              if (iVar1 == 0) {
                puVar2 = &DAT_004b480c;
                if (DAT_00ec83f8 == 0) {
                  puVar2 = &DAT_004b4808;
                }
                FUN_0049eb80(local_140,s_GFORCES__s_004b4cf4,puVar2);
                iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                if (iVar1 == 0) {
                  puVar2 = &DAT_004b480c;
                  if (DAT_00ec83fc == 0) {
                    puVar2 = &DAT_004b4808;
                  }
                  FUN_0049eb80(local_140,s_ENGINERUMBLE__s_004b4ce4,puVar2);
                  iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                  if (iVar1 == 0) {
                    pcVar3 = &DAT_004b3e04;
                    if (DAT_004b2910 == 0) {
                      pcVar3 = s_FALSE_004b4cdc;
                    }
                    FUN_0049eb80(local_140,s_ENABLED__s_004b4cd0,pcVar3);
                    iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                    if (iVar1 == 0) {
                      iVar1 = FUN_004879a0(s__end__004b3cd8);
                      if (iVar1 == 0) {
                        FUN_00487960();
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00487960();
  return 0;
}

