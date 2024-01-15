#include "prototype.h"


undefined4 FUN_00406080(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  undefined8 uVar7;
  int local_194;
  byte *local_190;
  int local_18c;
  int local_188;
  int *local_184;
  undefined local_180 [32];
  undefined local_160 [32];
  undefined local_140 [32];
  undefined local_120 [32];
  undefined local_100 [256];
  
  FUN_0049eb80(local_100,s__s_s__s__s_004b3dec,s___data_config__004b252c,param_1,param_1,
               &DAT_004b3df8);
  iVar4 = FUN_004877d0();
  if (iVar4 == 0) {
    FUN_00487960();
    return 0xffffffff;
  }
  local_194 = 0;
  do {
    if (local_194 == 0) {
      local_190 = &DAT_004d5fc0;
      local_18c = 6;
      local_184 = &DAT_00ec8880;
      local_188 = DAT_004b2944;
      uVar7 = CONCAT44(s_JOYSTICK_004b3de0,local_160);
LAB_00406169:
      FUN_0049eb80(uVar7);
    }
    else {
      if (local_194 == 1) {
        local_190 = &DAT_004d6518;
        local_18c = 3;
        local_184 = &DAT_00ec8790;
        local_188 = DAT_004d6b38;
        uVar7 = CONCAT44(s_MOUSE_004b3dd8,local_160);
        goto LAB_00406169;
      }
      if (local_194 == 2) {
        local_190 = &DAT_004d6828;
        local_18c = 0;
        local_188 = DAT_004b2948;
        uVar7 = CONCAT44(s_KEYBOARD_004b3dcc,local_160);
        goto LAB_00406169;
      }
    }
    FUN_004879f0(s___________s_MAPPINGS_004b3db4);
    bVar1 = *local_190;
    pbVar5 = local_190;
    while (bVar1 != 0xff) {
      uVar2 = *(undefined4 *)(pbVar5 + 8);
      uVar3 = *(undefined4 *)(pbVar5 + 4);
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 0xc;
      FUN_0049eb80(local_140);
      if (((bVar1 & 8) == 0) || (local_194 == 2)) {
        if (((bVar1 & 8) == 0) || (local_194 != 2)) {
          if ((bVar1 & 4) != 0) {
            FUN_00407b00(uVar3);
            FUN_00421470();
            FUN_0049eb80(local_180,s_AXIS__s_004b3d98);
            if ((bVar1 & 0x10) == 0) {
              if ((bVar1 & 0x20) == 0) goto LAB_0040627b;
              uVar7 = CONCAT44(s_AXIS_RANGE_NEGATIVE_004b3d70,local_140);
            }
            else {
              uVar7 = CONCAT44(s_AXIS_RANGE_POSITIVE_004b3d84,local_140);
            }
            FUN_0049eb80(uVar7);
          }
        }
        else {
          FUN_00407b00(uVar3);
          FUN_00421470();
          FUN_0049eb80(local_180,s_KEY__s_004b3da0);
        }
      }
      else {
        FUN_00407b00(uVar3);
        FUN_00421470();
        FUN_0049eb80(local_180,s_BUTTON__s_004b3da8);
      }
LAB_0040627b:
      FUN_00407d90(uVar2);
      iVar4 = FUN_00421470();
      if (iVar4 != 0) {
        FUN_0049eb80(local_120,s_FUNCTION__s_004b3d64);
        iVar4 = FUN_004879f0(s___28s__28s__28s__28s_004b3d4c,local_160,local_180,local_120);
        if (iVar4 != 0) {
          FUN_00487960();
          return 0;
        }
      }
      bVar1 = *pbVar5;
    }
    FUN_004879f0();
    iVar4 = 0;
    piVar6 = local_184;
    if (0 < local_18c) {
      do {
        if (*piVar6 != 0) {
          FUN_00407b00(iVar4);
          FUN_00421470();
          FUN_0049eb80(local_180,s_AXIS__s_004b3d98);
          FUN_004879f0(s___28s__28sFLIP_AXIS_004b3d30,local_160);
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar4 < local_18c);
    }
    if ((local_194 < 2) && (*(int *)(&DAT_00ec8780 + local_194 * 4) != 0x3f800000)) {
      FUN_0049eb80(local_180,s_SENSITIVITY__0_2f_004b3d1c,
                   (double)*(float *)(&DAT_00ec8780 + local_194 * 4));
      FUN_004879f0(s___28s__28s_004b3d10,local_160);
    }
    if ((local_194 == 0) && (DAT_00ec876c != DAT_004b297c)) {
      FUN_0049eb80(local_180,s_DEADZONE__0_2f_004b3d00,(double)DAT_00ec876c);
      FUN_004879f0(s___28s__28s_004b3d10,local_160);
    }
    if (local_188 == 0) {
      uVar7 = CONCAT44(s_ENABLED_FALSE_004b3ce0,local_180);
    }
    else {
      uVar7 = CONCAT44(s_ENABLED_TRUE_004b3cf0,local_180);
    }
    FUN_0049eb80(uVar7);
    FUN_004879f0(s___28s__28s_004b3d10,local_160);
    local_194 = local_194 + 1;
    if (2 < local_194) {
      FUN_004879a0();
      FUN_00487960();
      return 1;
    }
  } while( true );
}

