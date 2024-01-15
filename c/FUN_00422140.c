#include "prototype.h"


undefined4 FUN_00422140(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined local_140 [32];
  undefined local_120 [32];
  undefined local_100 [256];
  
  FUN_0049eb80(local_100,s__s_s__s_004b4830,s___data_config__004b252c,param_1,s_audio_cfg_004b749c);
  iVar1 = FUN_004877d0();
  if (iVar1 == 0) {
    FUN_00487960();
    return 0xffffffff;
  }
  FUN_0049eb80(local_120,s_AUDIO_004b7494);
  iVar1 = FUN_004879f0(s___________s_SETTINGS_004b4810,local_120);
  if (iVar1 == 0) {
    puVar2 = &DAT_004b480c;
    if (DAT_004b6d20 == 0) {
      puVar2 = &DAT_004b4808;
    }
    FUN_0049eb80(local_140,s_SYS__s_004b748c,puVar2);
    iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
    if (iVar1 == 0) {
      puVar2 = &DAT_004b480c;
      if (DAT_004b6d14 == 0) {
        puVar2 = &DAT_004b4808;
      }
      FUN_0049eb80(local_140,s_HIRES__s_004b7480,puVar2);
      iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
      if (iVar1 == 0) {
        puVar2 = &DAT_004b480c;
        if (DAT_0050d550 == 0) {
          puVar2 = &DAT_004b4808;
        }
        FUN_0049eb80(local_140,s_3D__s_004b7478,puVar2);
        iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
        if (iVar1 == 0) {
          puVar2 = &DAT_004b480c;
          if (DAT_004b6d18 == 0) {
            puVar2 = &DAT_004b4808;
          }
          FUN_0049eb80(local_140,s_DOPPLER__s_004b746c,puVar2);
          iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
          if (iVar1 == 0) {
            puVar2 = &DAT_004b480c;
            if (DAT_004b6d1c == 0) {
              puVar2 = &DAT_004b4808;
            }
            FUN_0049eb80(local_140,s_REFLECTIONS__s_004b47f8,puVar2);
            iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
            if (iVar1 == 0) {
              FUN_0049eb80(local_140,s_GAINMATCH__0_2f_004b745c,(double)DAT_004b6d24);
              iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
              if (iVar1 == 0) {
                puVar2 = &DAT_004b480c;
                if (DAT_004b6d28 == 0) {
                  puVar2 = &DAT_004b4808;
                }
                FUN_0049eb80(local_140,s_VOICE__s_004b7450,puVar2);
                iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                if (iVar1 == 0) {
                  puVar2 = &DAT_004b480c;
                  if (DAT_004eb45c == 0) {
                    puVar2 = &DAT_004b4808;
                  }
                  FUN_0049eb80(local_140,s_MUSIC__s_004b7444,puVar2);
                  iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                  if (iVar1 == 0) {
                    puVar2 = &DAT_004b480c;
                    if (DAT_004eb460 == 0) {
                      puVar2 = &DAT_004b4808;
                    }
                    FUN_0049eb80(local_140,s_REVERB__s_004b7438,puVar2);
                    iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                    if (iVar1 == 0) {
                      iVar1 = FUN_004879a0();
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

