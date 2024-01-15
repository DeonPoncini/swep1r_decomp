#include "prototype.h"


undefined4
FUN_00429dc0(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 *param_4,
            float *param_5)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  *param_3 = 0;
  iVar1 = FUN_00450aa0(0x54657374,DAT_0050c050);
  if (iVar1 != 0) {
    *param_4 = 0xffffd8f0;
    switch(param_1) {
    case 0:
      uVar2 = FUN_00421360(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x1e70) + 0x18) + 0x18));
      uVar2 = FUN_00421360(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x1e70) + 0x18) + 0x14),uVar2);
      FUN_0049eb80(param_2,s_Name___s__s_004b92c0,uVar2);
      *param_5 = -99999.0;
      return 1;
    case 1:
      FUN_0049eb80(param_2,s_Anti_Skid_004b92b4);
      *param_5 = *(float *)(iVar1 + 0x6c);
      return 1;
    case 2:
      FUN_0049eb80(param_2,s_Turn_Response_004b92a4);
      *param_5 = *(float *)(iVar1 + 0x70);
      return 1;
    case 3:
      FUN_0049eb80(param_2,s_Max_Turn_Rate_004b9294);
      *param_5 = *(float *)(iVar1 + 0x74);
      return 1;
    case 4:
      FUN_0049eb80(param_2,s_Acceleration_004b9284);
      *param_5 = *(float *)(iVar1 + 0x78);
      return 1;
    case 5:
      FUN_0049eb80(param_2,s_Max_Speed_004b9278);
      *param_5 = *(float *)(iVar1 + 0x7c);
      return 1;
    case 6:
      FUN_0049eb80(param_2,s_AirBrake_Inv_004b9268);
      *param_5 = *(float *)(iVar1 + 0x80);
      return 1;
    case 7:
      FUN_0049eb80(param_2,s_Decel_Inv_004b925c);
      *param_5 = *(float *)(iVar1 + 0x84);
      return 1;
    case 8:
      FUN_0049eb80(param_2,s_Boost_Thrust_004b924c);
      *param_5 = *(float *)(iVar1 + 0x88);
      return 1;
    case 9:
      FUN_0049eb80(param_2,s_Heat_Rate_004b9240);
      *param_5 = *(float *)(iVar1 + 0x8c);
      return 1;
    case 10:
      FUN_0049eb80(param_2,s_Cool_Rate_004b9234);
      *param_5 = *(float *)(iVar1 + 0x90);
      return 1;
    case 0xb:
      FUN_0049eb80(param_2,s_Hover_Height_004b9224);
      *param_5 = *(float *)(iVar1 + 0x94);
      return 1;
    case 0xc:
      FUN_0049eb80(param_2,s_Repair_Rate_004b9218);
      *param_5 = *(float *)(iVar1 + 0x98);
      return 1;
    case 0xd:
      FUN_0049eb80(param_2,s_Bump_Mass_004b920c);
      *param_5 = *(float *)(iVar1 + 0x9c);
      return 1;
    case 0xe:
      FUN_0049eb80(param_2,s_Dmg_Immunity_004b91fc);
      *param_5 = *(float *)(iVar1 + 0xa0);
      return 1;
    case 0xf:
      FUN_0049eb80(param_2,s_ISect_Radius_004b91ec);
      *param_5 = *(float *)(iVar1 + 0xa8);
      return 1;
    case 0x10:
      FUN_0049eb80(param_2,s_AI_Look_Ahead_004b91dc);
      fVar3 = (float10)FUN_00480670(*(undefined4 *)(iVar1 + 0x108));
      *param_5 = (float)fVar3;
      return 1;
    default:
      FUN_0049eb80(param_2,s_Unimplemented_004b91cc);
      *param_5 = 0.0;
    }
  }
  return 0;
}

