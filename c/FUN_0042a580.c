#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0042a580(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 *param_4,
            float *param_5)

{
  int iVar1;
  char *pcVar2;
  
  *param_3 = 0;
  *param_4 = 0xffffd8f0;
  *param_5 = -10000.0;
  switch(param_1) {
  case 0:
    FUN_0049eb80(param_2,s_Debug_Level_004b939c);
    *param_4 = DAT_0050c040;
    return 1;
  case 1:
    if (((byte)DAT_0050c048 & 4) == 0) {
      FUN_0049eb80(param_2,s________004b9394);
      return 1;
    }
    if (DAT_0050ca28 != 0) {
      FUN_0049eb80(param_2,s_Invincibility_On_004b9380);
      return 1;
    }
    pcVar2 = s_Invincibility_Off_004b936c;
    break;
  case 2:
    if (((byte)DAT_0050c048 & 8) == 0) {
      FUN_0049eb80(param_2,s________004b9394);
      return 1;
    }
    FUN_0049eb80(param_2,s_AI_Level_x10_004b935c);
    *param_5 = DAT_004c707c * _DAT_004ac52c;
    return 1;
  case 3:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_0049eb80(param_2,s_AI_SPREAD_004b9350);
      *param_5 = DAT_004c7080;
      return 1;
    }
    pcVar2 = s________004b9394;
    break;
  case 4:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_0049eb80(param_2,s_Death_SpeedMin_004b9340);
      *param_5 = DAT_004c7bb8;
      return 1;
    }
    pcVar2 = s________004b9394;
    break;
  case 5:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_0049eb80(param_2,s_Death_SpeedDrop_004b9330);
      *param_5 = DAT_004c7bbc;
      return 1;
    }
    pcVar2 = s________004b9394;
    break;
  case 6:
    if (((byte)DAT_0050c048 & 0x10) != 0) {
      if (DAT_0050ca24 != 0) {
        FUN_0049eb80(param_2,s_Spline_Markers_On_004b931c);
        *param_5 = -99999.0;
        return 1;
      }
      pcVar2 = s_Spline_Markers_Off_004b9308;
LAB_0042a792:
      FUN_0049eb80(param_2,pcVar2);
      *param_5 = -99999.0;
      return 1;
    }
    pcVar2 = s________004b9394;
    break;
  case 7:
    if (((byte)DAT_0050c048 & 0x20) != 0) {
      if ((DAT_00e996dc & 0x4000) != 0) {
        FUN_0049eb80(param_2,s_Mirrored_Mode_On_004b92f4);
        *param_5 = -99999.0;
        return 1;
      }
      pcVar2 = s_Mirrored_Mode_Off_004b92e0;
      goto LAB_0042a792;
    }
    pcVar2 = s________004b9394;
    break;
  case 8:
    if (((byte)DAT_0050c048 & 2) == 0) {
      pcVar2 = s________004b9394;
    }
    else {
      iVar1 = FUN_00450aa0(0x54657374,DAT_0050c050);
      if (iVar1 == 0) {
        return 0;
      }
      if ((*(ushort *)(iVar1 + 6) & 0x100) != 0) {
        return 0;
      }
      pcVar2 = s_Edit_Vehicle_Stats_004b92cc;
    }
    break;
  default:
    FUN_0049eb80(param_2,s_Unimplemented_004b91cc);
    return 0;
  }
  FUN_0049eb80(param_2,pcVar2);
  return 1;
}

