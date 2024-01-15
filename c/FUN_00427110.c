#include "prototype.h"


undefined4 FUN_00427110(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  short sVar2;
  
  if ((DAT_004eb450 != 0) && (param_3 != 0xffffffff)) {
    switch(param_1) {
    case 0:
      if (param_2 < 0) {
        return 0xffffffff;
      }
      if (0x16 < param_2) {
        return 0xffffffff;
      }
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0x32 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b7fb0 + param_3 * 2);
      break;
    case 1:
      if (param_2 < 0) {
        return 0xffffffff;
      }
      if (0x16 < param_2) {
        return 0xffffffff;
      }
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0x25 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b8018 + param_3 * 2);
      break;
    case 2:
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0x38 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b8068 + param_3 * 2);
      break;
    case 3:
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (4 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b80e0 + param_3 * 2);
      break;
    case 4:
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0x67 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b80f0 + param_3 * 2);
      break;
    case 5:
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0xa8 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b81c0 + param_3 * 2);
      break;
    case 6:
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0x68 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b8318 + param_3 * 2);
      break;
    case 7:
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0xa7 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b83f0 + param_3 * 2);
      break;
    default:
      goto switchD_00427145_caseD_8;
    }
    if (-1 < sVar2) {
                    /* WARNING: Could not recover jumptable at 0x00427272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(&DAT_00427344 + (uint)(byte)(&DAT_00427350)[param_1] * 4))();
      return uVar1;
    }
  }
switchD_00427145_caseD_8:
  return 0xffffffff;
}

