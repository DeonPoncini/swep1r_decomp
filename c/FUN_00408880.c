#include "prototype.h"


undefined4 FUN_00408880(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined local_140 [32];
  undefined local_120 [32];
  undefined local_100 [256];
  
  FUN_0049eb80(local_100,s__s_s__s_004b4830,s___data_config__004b252c,param_1,s_video_cfg_004b4838);
  iVar1 = FUN_004877d0(local_100);
  if (iVar1 == 0) {
    FUN_00487960();
    return 0xffffffff;
  }
  FUN_0049eb80(local_120,s_VIDEO_004b4828);
  iVar1 = FUN_004879f0(s___________s_SETTINGS_004b4810,local_120);
  if (iVar1 == 0) {
    puVar2 = &DAT_004b480c;
    if (DAT_00ec86a0 == 0) {
      puVar2 = &DAT_004b4808;
    }
    FUN_0049eb80(local_140,s_REFLECTIONS__s_004b47f8,puVar2);
    iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
    if (iVar1 == 0) {
      puVar2 = &DAT_004b480c;
      if (DAT_00ec86a4 == 0) {
        puVar2 = &DAT_004b4808;
      }
      FUN_0049eb80(local_140,s_ZEFFECTS__s_004b47ec,puVar2);
      iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
      if (iVar1 == 0) {
        puVar2 = &DAT_004b480c;
        if (DAT_00ec86a8 == 0) {
          puVar2 = &DAT_004b4808;
        }
        FUN_0049eb80(local_140,s_DYNAMIC_LIGHTING__s_004b47d8,puVar2);
        iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
        if (iVar1 == 0) {
          puVar2 = &DAT_004b480c;
          if (DAT_00ec86ac == 0) {
            puVar2 = &DAT_004b4808;
          }
          FUN_0049eb80(local_140,s_VSYNC__s_004b47cc,puVar2);
          iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
          if (iVar1 == 0) {
            puVar2 = &DAT_004b480c;
            if (DAT_00ec86b0 == 0) {
              puVar2 = &DAT_004b4808;
            }
            FUN_0049eb80(local_140,s_LENSFLARE__s_004b47bc,puVar2);
            iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
            if (iVar1 == 0) {
              puVar2 = &DAT_004b480c;
              if (DAT_00ec86b4 == 0) {
                puVar2 = &DAT_004b4808;
              }
              FUN_0049eb80(local_140,s_ENGINEEXHAUST__s_004b47a8,puVar2);
              iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
              if (iVar1 == 0) {
                FUN_0049eb80(local_140,s_TEXTURE_RES__i_004b4798,DAT_00ec86b8);
                iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                if (iVar1 == 0) {
                  FUN_0049eb80(local_140,s_MODEL_DETAIL__i_004b4788,DAT_00ec86bc);
                  iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                  if (iVar1 == 0) {
                    FUN_0049eb80(local_140,s__DRAWDISTANCE__i_004b4777 + 1,DAT_00ec86c0);
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

