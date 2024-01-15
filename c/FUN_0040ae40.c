#include "prototype.h"


undefined4 FUN_0040ae40(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  undefined local_100 [256];
  
  FUN_0049eb80(local_100,s__s_s__s_004b4830,s___data_config__004b252c,param_1,s_force_cfg_004b4d64);
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
LAB_0040aed4:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_0040aed9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_0040aed4;
      pbVar3 = pbVar3 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_0040aed9:
    if (iVar2 == 0) break;
    iVar2 = FUN_0049ec50(DAT_00ec8e84,s_FORCEFEEDBACK_004b4d54);
    if (iVar2 == 0) {
      iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_STRENGTH_004b4dbc);
      if (iVar2 == 0) {
        DAT_00ec83e0 = FUN_0049f0e0(DAT_00ec8e90);
      }
      else {
        iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_AUTOCENTER_004b4db0);
        if (iVar2 == 0) {
          DAT_00ec83e4 = FUN_0049f0e0(DAT_00ec8e90);
        }
        else {
          iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_COLLISIONS_004b4da4);
          if (iVar2 == 0) {
            DAT_00ec83e8 = FUN_0049f0e0(DAT_00ec8e90);
          }
          else {
            iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_DAMAGE_004b4d9c);
            if (iVar2 == 0) {
              DAT_00ec83ec = FUN_0049f0e0(DAT_00ec8e90);
            }
            else {
              iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_TERRAIN_004b4d94);
              if (iVar2 == 0) {
                DAT_00ec83f0 = FUN_0049f0e0(DAT_00ec8e90);
              }
              else {
                iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_PODACTIONS_004b4d88);
                if (iVar2 == 0) {
                  DAT_00ec83f4 = FUN_0049f0e0(DAT_00ec8e90);
                }
                else {
                  iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_GFORCES_004b4d80);
                  if (iVar2 == 0) {
                    iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                    DAT_00ec83f8 = (uint)(iVar2 == 0);
                  }
                  else {
                    iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_ENGINERUMBLE_004b4d70);
                    if (iVar2 == 0) {
                      iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                      DAT_00ec83fc = (uint)(iVar2 == 0);
                    }
                    else {
                      iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_ENABLED_004b3e0c);
                      if (iVar2 != 0) {
                        FUN_00487900();
                        return 0;
                      }
                      if ((DAT_004b4938 != 0) && (DAT_004b2914 != 0)) {
                        iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b3e04);
                        DAT_004b2910 = 1;
                        if (iVar2 == 0) goto LAB_0040b0d6;
                      }
                      DAT_004b2910 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_0040b0d6:
    iVar2 = FUN_00487ae0();
  }
  FUN_00487900();
  FUN_0040a680();
  return 1;
}

