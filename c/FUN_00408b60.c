#include "prototype.h"


undefined4 FUN_00408b60(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  undefined local_100 [256];
  
  FUN_0049eb80(local_100,s__s_s__s_004b4830,s___data_config__004b252c,param_1,s_video_cfg_004b4838);
  iVar2 = FUN_004877b0(local_100);
  if (iVar2 == 0) {
    FUN_00487900();
    return 0xffffffff;
  }
  iVar2 = FUN_00487ae0();
  if (iVar2 != 0) {
    do {
      pbVar4 = &DAT_004b3e7c;
      pbVar3 = DAT_00ec8e84;
      do {
        bVar1 = *pbVar3;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00408bef:
          iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_00408bf4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00408bef;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_00408bf4:
      if (iVar2 == 0) break;
      iVar2 = FUN_0049ec50(DAT_00ec8e84,s_VIDEO_004b4828);
      if (iVar2 == 0) {
        iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_REFLECTIONS_004b48b4);
        if (iVar2 == 0) {
          iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
          DAT_00ec86a0 = (uint)(iVar2 == 0);
        }
        else {
          iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_ZEFFECTS_004b48a8);
          if (iVar2 == 0) {
            iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
            DAT_00ec86a4 = (uint)(iVar2 == 0);
          }
          else {
            iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_DYNAMIC_LIGHTING_004b4894);
            if (iVar2 == 0) {
              iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
              DAT_00ec86a8 = (uint)(iVar2 == 0);
            }
            else {
              iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_VSYNC_004b488c);
              if (iVar2 == 0) {
                iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                DAT_00ec86ac = (uint)(iVar2 == 0);
              }
              else {
                iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_LENSFLARE_004b4880);
                if (iVar2 == 0) {
                  iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                  DAT_00ec86b0 = (uint)(iVar2 == 0);
                }
                else {
                  iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_ENGINEEXHAUST_004b4870);
                  if (iVar2 == 0) {
                    iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                    DAT_00ec86b4 = (uint)(iVar2 == 0);
                  }
                  else {
                    iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_TEXTURE_RES_004b4864);
                    if (iVar2 == 0) {
                      DAT_00ec86b8 = FUN_0049f0e0(DAT_00ec8e90);
                    }
                    else {
                      iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_MODEL_DETAIL_004b4854);
                      if (iVar2 == 0) {
                        DAT_00ec86bc = FUN_0049f0e0(DAT_00ec8e90);
                      }
                      else {
                        iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_DRAWDISTANCE_004b4844);
                        if (iVar2 != 0) {
                          FUN_00487900();
                          return 0;
                        }
                        DAT_00ec86c0 = FUN_0049f0e0(DAT_00ec8e90);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar2 = FUN_00487ae0();
      if (iVar2 == 0) {
        FUN_00487900();
        return 1;
      }
    } while( true );
  }
  FUN_00487900();
  return 1;
}

