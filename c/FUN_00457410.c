#include "prototype.h"


void FUN_00457410(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20 [8];
  
  DAT_004b2940 = 1;
  FUN_00405cf0(1);
  FUN_0040a0b0(0x11);
  FUN_00408800();
  FUN_00450db0(0x456c6d6f);
  FUN_00408640(10);
  FUN_00447350(0x456c6d6f);
  FUN_00408640(0x14);
  FUN_0044fcc0();
  FUN_00408640(0x1e);
  FUN_004285d0(0xffffff99,0);
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  FUN_00428370();
  FUN_00408640(0x28);
  FUN_00454c60();
  FUN_00408640(0x32);
  FUN_00483fc0(0);
  FUN_0045b290(param_1,param_2,param_3);
  FUN_00408640(0x62);
  local_20[0] = 0x53746f70;
  FUN_00450c50(0x48616e67,local_20);
  local_20[0] = 0x57616b65;
  if (*(int *)(param_1 + 0x68) < 0) {
    if (((((1 << ((&DAT_004bfef1)[*(char *)(param_1 + 0x5d) * 0xc] & 0x1f) & DAT_00e364f0) == 0) &&
         (DAT_004d5e00 == 0)) && (DAT_0050ca3c == 0)) && (*(int *)(param_1 + 100) == 0)) {
      FUN_004252a0((&PTR_s_PlanetTAT_znm_004b7a08)
                   [(char)(&DAT_004bfef1)[*(char *)(param_1 + 0x5d) * 0xc]]);
      DAT_00e35a9c = DAT_00e35a9c | 1 << ((&DAT_004bfef1)[*(char *)(param_1 + 0x5d) * 0xc] & 0x1f);
    }
    FUN_00450c50(0x4a646765,local_20);
    return;
  }
  FUN_00450c50(0x5363656e,local_20);
  return;
}

