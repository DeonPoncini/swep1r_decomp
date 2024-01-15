#include "prototype.h"


undefined4 FUN_00406470(undefined1 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  bool bVar10;
  float10 fVar11;
  undefined4 local_130;
  int local_12c;
  int local_128;
  undefined1 *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined *local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined local_100 [256];
  
  local_120 = DAT_004b3df8;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_11c = DAT_004b3dfc;
  local_118 = PTR_DAT_004b3e00;
  if (param_3 == 0) {
    FUN_0049eb80(local_100,s__s_s__s__s_004b3dec,s___data_config__004b252c,param_2,param_2,
                 &DAT_004b3df8);
  }
  else {
    pbVar7 = &DAT_004b2638;
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar10 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_004064f2:
        iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_004064f7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar10 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_004064f2;
      pbVar2 = pbVar2 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_004064f7:
    if (iVar3 == 0) {
      FUN_0049eb80(&local_120,s_wheel_map_004b3ea4);
    }
    else {
      iVar3 = -1;
      pbVar2 = param_2;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
      if (iVar3 != -2) {
        FUN_0049eb80(&local_120,&DAT_004b2304,param_2);
      }
    }
    FUN_0049eb80(local_100,s__s_s_s_004b3e84,&DAT_00e9f300,s___data_config_default__004b3e8c,
                 &local_120);
  }
  iVar3 = FUN_004877b0(local_100);
  if (iVar3 == 0) {
    FUN_00487900();
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (param_1 == (undefined1 *)0x0)) {
    puVar8 = &DAT_00ec8880;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  if (((int)param_1 < 0) || (param_1 == (undefined1 *)0x1)) {
    DAT_00ec8790 = 0;
    DAT_00ec8794 = 0;
    DAT_00ec8798 = 0;
  }
  FUN_00407800(param_1);
  iVar4 = FUN_00487ae0();
  iVar3 = DAT_004d5e28;
  puVar6 = local_124;
  puVar9 = local_124;
  while (DAT_004d5e28 = iVar3, iVar4 != 0) {
    pbVar7 = &DAT_004b3e7c;
    pbVar2 = DAT_00ec8e84;
    do {
      bVar1 = *pbVar2;
      bVar10 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0040661d:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00406622;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar10 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0040661d;
      pbVar2 = pbVar2 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00406622:
    if (iVar4 == 0) break;
    uVar5 = 0;
    local_130 = local_130 & 0xffffff00;
    local_12c = 0;
    local_128 = -1;
    if (DAT_00ec8e80 != 0) {
      puVar8 = &DAT_00ec8e84;
      do {
        iVar3 = FUN_0049ec50(*puVar8,s_JOYSTICK_004b3de0);
        if (iVar3 == 0) {
          puVar9 = (undefined1 *)0x0;
          puVar6 = &DAT_004d5fc0;
        }
        else {
          iVar3 = FUN_0049ec50(*puVar8,s_MOUSE_004b3dd8);
          if (iVar3 == 0) {
            puVar9 = (undefined1 *)0x1;
            puVar6 = &DAT_004d6518;
          }
          else {
            iVar3 = FUN_0049ec50(*puVar8,s_KEYBOARD_004b3dcc);
            if (iVar3 == 0) {
              puVar9 = (undefined1 *)0x2;
              puVar6 = &DAT_004d6828;
            }
            else {
              iVar3 = FUN_0049ec50(*puVar8,&DAT_004b3e74);
              if (iVar3 == 0) {
                local_130 = local_130 | 4;
                local_12c = FUN_00407a90(puVar8[1],&DAT_004b2af0);
              }
              else {
                iVar3 = FUN_0049ec50(*puVar8,s_BUTTON_004b3e6c);
                if (iVar3 == 0) {
                  local_130 = local_130 | 8;
                  local_12c = FUN_00407a90(puVar8[1],&DAT_004b2b28);
                }
                else {
                  iVar3 = FUN_0049ec50(*puVar8,&PTR_DAT_004b3e68);
                  if (iVar3 == 0) {
                    local_130 = local_130 | 8;
                    local_12c = FUN_00407a90(puVar8[1],&DAT_004b2bd0);
                  }
                  else {
                    iVar3 = FUN_0049ec50(*puVar8,s_FUNCTION_004b3e5c);
                    if (iVar3 == 0) {
                      iVar3 = FUN_00407cd0(&local_130,puVar8[1],0);
                      if (iVar3 == 0) goto LAB_00406a20;
                    }
                    else {
                      iVar3 = FUN_0049ec50(*puVar8,s_AXIS_RANGE_004b3e50);
                      if (iVar3 == 0) {
                        iVar3 = FUN_0049ec50(puVar8[1],s_POSITIVE_004b3e44);
                        if (iVar3 == 0) {
                          local_130 = local_130 | 0x10;
                        }
                        else {
                          iVar3 = FUN_0049ec50(puVar8[1],s_NEGATIVE_004b3e38);
                          if (iVar3 != 0) goto LAB_00406a20;
                          local_130 = local_130 | 0x20;
                        }
                      }
                      else if ((((int)param_1 < 0) || (param_1 == puVar9)) &&
                              (iVar3 = FUN_0049ec50(*puVar8,s_FLIP_AXIS_004b3e2c), iVar3 == 0)) {
                        if (puVar9 == (undefined1 *)0x0) {
                          (&DAT_00ec8880)[local_12c] = 1;
                        }
                        else {
                          if (puVar9 != (undefined1 *)0x1) goto LAB_00406a20;
                          (&DAT_00ec8790)[local_12c] = 1;
                        }
                      }
                      else {
                        iVar3 = FUN_0049ec50(*puVar8,s_SENSITIVITY_004b3e20);
                        if (iVar3 == 0) {
                          fVar11 = (float10)FUN_0049ef90(puVar8[1]);
                          *(float *)(&DAT_00ec8780 + (int)puVar9 * 4) = (float)fVar11;
                        }
                        else {
                          iVar3 = FUN_0049ec50(*puVar8,s_DEADZONE_004b3e14);
                          if (iVar3 == 0) {
                            if (puVar9 == (undefined1 *)0x0) {
                              fVar11 = (float10)FUN_0049ef90(puVar8[1]);
                              DAT_00ec876c = (float)fVar11;
                            }
                          }
                          else {
                            iVar3 = FUN_0049ec50(*puVar8,s_ENABLED_004b3e0c);
                            if (iVar3 == 0) {
                              iVar3 = FUN_0049ec50(puVar8[1],&DAT_004b3e04);
                              if (puVar9 == (undefined1 *)0x0) {
                                if ((iVar3 != 0) || (DAT_004b294c == 0)) {
                                  DAT_004b2944 = 0;
                                }
                                else {
                                  DAT_004b2944 = 1;
                                }
                              }
                              else if ((puVar9 == (undefined1 *)0x1) &&
                                      ((iVar3 != 0 || (DAT_004d6b38 = 1, DAT_004b2950 == 0)))) {
                                DAT_004d6b38 = 0;
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
        }
        if (local_12c < 0) {
LAB_00406a20:
          FUN_00407800(param_1);
          FUN_00487900();
          return 0;
        }
        uVar5 = uVar5 + 1;
        puVar8 = puVar8 + 2;
      } while (uVar5 < DAT_00ec8e80);
    }
    if ((((int)param_1 < 0) || (param_1 == puVar9)) && (-1 < local_128)) {
      iVar3 = (&DAT_004d5e20)[(int)puVar9];
      *(uint *)(puVar6 + iVar3 * 0xc) = local_130;
      *(int *)(puVar6 + iVar3 * 0xc + 4) = local_12c;
      *(int *)(puVar6 + iVar3 * 0xc + 8) = local_128;
      (&DAT_004d5e20)[(int)puVar9] = (&DAT_004d5e20)[(int)puVar9] + 1;
    }
    iVar4 = FUN_00487ae0();
    iVar3 = DAT_004d5e28;
  }
  if (((int)param_1 < 0) || (param_1 == (undefined1 *)0x2)) {
    uVar5 = local_130 >> 8;
    local_130 = CONCAT31((int3)uVar5,10);
    DAT_004d5e28 = iVar3 + 1;
    *(uint *)(&DAT_004d6828 + iVar3 * 0xc) = local_130;
    (&DAT_004d682c)[iVar3 * 3] = 1;
    (&DAT_004d6830)[iVar3 * 3] = 10;
    iVar3 = iVar3 + 1;
  }
  if (((int)param_1 < 0) || (param_1 == (undefined1 *)0x0)) {
    (&DAT_004d5fc0)[DAT_004d5e20 * 0xc] = 0xff;
  }
  if (((int)param_1 < 0) || (param_1 == (undefined1 *)0x1)) {
    (&DAT_004d6518)[DAT_004d5e24 * 0xc] = 0xff;
  }
  if (((int)param_1 < 0) || (param_1 == (undefined1 *)0x2)) {
    (&DAT_004d6828)[iVar3 * 0xc] = 0xff;
  }
  FUN_00487900();
  return 1;
}

