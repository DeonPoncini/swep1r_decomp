#include "prototype.h"


uint FUN_004a40f0(byte **param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined *puVar4;
  
  pbVar3 = param_1[3];
  if ((((uint)pbVar3 & 0x83) != 0) && (((uint)pbVar3 & 0x40) == 0)) {
    if (((uint)pbVar3 & 2) != 0) {
      param_1[3] = (byte *)((uint)pbVar3 | 0x20);
      return 0xffffffff;
    }
    param_1[3] = (byte *)((uint)pbVar3 | 1);
    if (((uint)pbVar3 & 0x10c) == 0) {
      FUN_004a6a10(param_1);
    }
    else {
      *param_1 = param_1[2];
    }
    pbVar3 = (byte *)FUN_004a41e0(param_1[4],param_1[2],param_1[6]);
    param_1[1] = pbVar3;
    if ((pbVar3 != (byte *)0x0) && (pbVar3 != (byte *)0xffffffff)) {
      if (((uint)param_1[3] & 0x82) == 0) {
        pbVar2 = param_1[4];
        if (pbVar2 == (byte *)0xffffffff) {
          puVar4 = &DAT_004d43a0;
        }
        else {
          puVar4 = (undefined *)((&DAT_00ecd500)[(int)pbVar2 >> 5] + ((uint)pbVar2 & 0x1f) * 0x24);
        }
        if ((puVar4[4] & 0x82) == 0x82) {
          param_1[3] = (byte *)((uint)param_1[3] | 0x2000);
        }
      }
      if (((param_1[6] == (byte *)0x200) && (((uint)param_1[3] & 8) != 0)) &&
         (((uint)param_1[3] & 0x400) == 0)) {
        param_1[6] = (byte *)0x1000;
      }
      param_1[1] = pbVar3 + -1;
      bVar1 = **param_1;
      *param_1 = *param_1 + 1;
      return (uint)bVar1;
    }
    param_1[1] = (byte *)0x0;
    param_1[3] = (byte *)((uint)param_1[3] | (-(uint)(pbVar3 != (byte *)0x0) & 0x10) + 0x10);
  }
  return 0xffffffff;
}

