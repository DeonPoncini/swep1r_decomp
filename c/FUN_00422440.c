#include "prototype.h"


undefined4 FUN_00422440(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  float10 fVar6;
  undefined local_100 [256];
  
  if (DAT_004eb450 != 0) {
    FUN_0049eb80(local_100,s__s_s__s_004b4830,s___data_config__004b252c,param_1,s_audio_cfg_004b749c
                );
    iVar2 = FUN_004877b0(local_100);
    if (iVar2 == 0) {
      FUN_00487900();
      return 0xffffffff;
    }
    iVar2 = FUN_00487ae0();
    while (iVar2 != 0) {
      pbVar4 = &DAT_004b3e7c;
      pbVar3 = DAT_00ec8e84;
      do {
        bVar1 = *pbVar3;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_004224df:
          iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_004224e4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_004224df;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_004224e4:
      if (iVar2 == 0) break;
      iVar2 = FUN_0049ec50(DAT_00ec8e84,s_AUDIO_004b7494);
      if (iVar2 == 0) {
        iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_HIRES_004b74d4);
        if (iVar2 == 0) {
          iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
          DAT_004b6d14 = (uint)(iVar2 == 0);
        }
        else {
          iVar2 = FUN_0049ec50(DAT_00ec8e8c,&PTR_DAT_004b74d0);
          if (iVar2 == 0) {
            iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
            DAT_004b6d20 = (uint)(iVar2 == 0);
          }
          else {
            iVar2 = FUN_0049ec50(DAT_00ec8e8c,&DAT_004b74cc);
            if (iVar2 == 0) {
              iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
              DAT_0050d550 = (uint)(iVar2 == 0);
            }
            else {
              iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_DOPPLER_004b74c4);
              if (iVar2 == 0) {
                iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                DAT_004b6d18 = (uint)(iVar2 == 0);
              }
              else {
                iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_GAINMATCH_004b74b8);
                if (iVar2 == 0) {
                  fVar6 = (float10)FUN_0049ef90(DAT_00ec8e90);
                  DAT_004b6d24 = (float)fVar6;
                  FUN_00484d40(DAT_004b6d24);
                }
                else {
                  iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_VOICE_004b74b0);
                  if (iVar2 == 0) {
                    iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                    DAT_004b6d28 = (uint)(iVar2 == 0);
                  }
                  else {
                    iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_MUSIC_004b74a8);
                    if (iVar2 == 0) {
                      iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                      DAT_004eb45c = (uint)(iVar2 == 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar2 = FUN_00487ae0();
    }
    FUN_00487900();
  }
  return 1;
}

