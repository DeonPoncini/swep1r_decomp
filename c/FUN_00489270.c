#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00489270(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *unaff_EDI;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_2[1];
  local_4 = param_2[2];
  DAT_00ec8ca0 = 1;
  _DAT_00ec8ca4 = 0;
  _DAT_00ec8ca8 = 0;
  _DAT_00ec8cf8 = 0;
  puVar4 = &DAT_00ec8d04;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar8 = 0;
  DAT_00ec8d04 = 0x7c;
  _DAT_00ec8d08 = 1;
  DAT_00ec8d6c = 0x200;
  piVar7 = &DAT_00ec8d04;
  iVar2 = (**(code **)(*DAT_0052d454 + 0x18))(DAT_0052d454,&DAT_00ec8d04,&DAT_00ec8d00,0);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*DAT_0052d454 + 0x10))(DAT_0052d454,0,&local_8);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*unaff_EDI + 0x20))(unaff_EDI,0,uVar8);
  if (iVar2 != 0) {
    (**(code **)(*piVar7 + 8))(piVar7);
    return 0;
  }
  iVar2 = (**(code **)(*DAT_00ec8d00 + 0x70))(DAT_00ec8d00);
  if (iVar2 != 0) {
    (**(code **)(iRam00000000 + 8))(0);
    return 0;
  }
  (**(code **)(iRam00000000 + 8))(0);
  iVar1 = (**(code **)(*DAT_00ec8d00 + 0x58))(DAT_00ec8d00);
  iVar2 = DAT_00ec8d10;
  if (iVar1 != 0) {
    return 0;
  }
  param_2[1] = DAT_00ec8d10;
  iVar1 = DAT_00ec8d0c;
  param_2[2] = DAT_00ec8d0c;
  param_2[4] = DAT_00ec8d14;
  if (((iVar2 == 0x140) && (iVar1 == 200)) || ((iVar2 == 0x280 && (param_2[2] == 400)))) {
    *param_2 = 0x3f400000;
  }
  else {
    *param_2 = 0x3f800000;
  }
  if ((DAT_00ec8d50 & 0x1828) != 0) {
    return 0;
  }
  piVar5 = unaff_EDI;
  if ((DAT_00ec8d50 & 0x40) != 0) {
    param_2[6] = 1;
    param_2[7] = DAT_00ec8d58;
    iVar2 = 0;
    for (uVar3 = DAT_00ec8d5c; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
      iVar2 = iVar2 + 1;
    }
    param_2[0xb] = iVar2;
    uVar8 = FUN_00484880((int)(0xff / (ulonglong)(DAT_00ec8d5c >> ((byte)iVar2 & 0x1f))));
    param_2[0xe] = uVar8;
    iVar2 = 0;
    for (; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
      iVar2 = iVar2 + 1;
    }
    param_2[8] = iVar2;
    iVar2 = 0;
    for (uVar3 = DAT_00ec8d60; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
      iVar2 = iVar2 + 1;
    }
    param_2[0xc] = iVar2;
    uVar8 = FUN_00484880((int)(0xff / (ulonglong)(DAT_00ec8d60 >> ((byte)iVar2 & 0x1f))));
    param_2[0xf] = uVar8;
    iVar2 = 0;
    for (; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
      iVar2 = iVar2 + 1;
    }
    param_2[9] = iVar2;
    iVar2 = 0;
    for (uVar3 = DAT_00ec8d64; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
      iVar2 = iVar2 + 1;
    }
    param_2[0xd] = iVar2;
    uVar8 = FUN_00484880((int)(0xff / (ulonglong)(DAT_00ec8d64 >> ((byte)iVar2 & 0x1f))));
    param_2[0x10] = uVar8;
    iVar2 = 0;
    for (; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
      iVar2 = iVar2 + 1;
    }
    param_2[10] = iVar2;
    piVar5 = unaff_EDI;
  }
  DAT_00ec8e0c = piVar5;
  DAT_00ec8e10 = piVar7;
  switch(param_2[7]) {
  case 8:
    param_2[5] = param_2[4];
    break;
  case 0x10:
    param_2[5] = (uint)param_2[4] >> 1;
    break;
  case 0x18:
    param_2[5] = (uint)param_2[4] / 3;
    break;
  case 0x20:
    param_2[5] = (uint)param_2[4] >> 2;
  }
  puVar4 = (undefined4 *)((uint)param_2[7] >> 3);
  param_2[3] = (int)puVar4 * param_2[1] * param_2[2];
  piVar7 = param_2 + 1;
  piVar5 = &DAT_00ec8cac;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar5 = piVar5 + 1;
  }
  _DAT_00ec8cb8 = DAT_00ec8d14;
  _DAT_00ec8cbc = DAT_00ec8d14 / (uint)puVar4;
  if ((DAT_00ec8d6c & 0x4000) != 0) {
    _DAT_00ec8ca8 = 1;
  }
  puVar6 = &DAT_00ec8e04;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  DAT_00ec8e04 = 0x7c;
  _DAT_00ec8e08 = 7;
  DAT_00ec8e6c = 0x2040;
  iVar2 = (**(code **)(*DAT_0052d454 + 0x18))(DAT_0052d454,&DAT_00ec8e04,&DAT_00ec8e00,0);
  if (iVar2 == 0) {
    DAT_00ec8da0 = 1;
    _DAT_00ec8da4 = 0;
    _DAT_00ec8da8 = 1;
    iVar2 = (**(code **)(*DAT_00ec8e00 + 0x58))(DAT_00ec8e00,&DAT_00ec8e04);
    if (iVar2 != 0) {
      return 0;
    }
    DAT_00ec8db0 = DAT_00ec8e0c;
    DAT_00ec8dac = DAT_00ec8e10;
    _DAT_00ec8db8 = DAT_00ec8e14;
    if ((DAT_00ec8e50 & 0x1828) == 0) {
      if ((DAT_00ec8e50 & 0x40) != 0) {
        _DAT_00ec8dc0 = 1;
        _DAT_00ec8dc4 = DAT_00ec8e58;
        _DAT_00ec8dd4 = 0;
        for (uVar3 = DAT_00ec8e5c; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
          _DAT_00ec8dd4 = _DAT_00ec8dd4 + 1;
        }
        _DAT_00ec8de0 =
             FUN_00484880((int)(0xff / (ulonglong)(DAT_00ec8e5c >> ((byte)_DAT_00ec8dd4 & 0x1f))));
        _DAT_00ec8dc8 = 0;
        for (; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
          _DAT_00ec8dc8 = _DAT_00ec8dc8 + 1;
        }
        _DAT_00ec8dd8 = 0;
        for (uVar3 = DAT_00ec8e60; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
          _DAT_00ec8dd8 = _DAT_00ec8dd8 + 1;
        }
        _DAT_00ec8de4 =
             FUN_00484880((int)(0xff / (ulonglong)(DAT_00ec8e60 >> ((byte)_DAT_00ec8dd8 & 0x1f))));
        _DAT_00ec8dcc = 0;
        for (; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
          _DAT_00ec8dcc = _DAT_00ec8dcc + 1;
        }
        _DAT_00ec8ddc = 0;
        for (uVar3 = DAT_00ec8e64; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
          _DAT_00ec8ddc = _DAT_00ec8ddc + 1;
        }
        _DAT_00ec8de8 =
             FUN_00484880((int)(0xff / (ulonglong)(DAT_00ec8e64 >> ((byte)_DAT_00ec8ddc & 0x1f))));
        _DAT_00ec8dd0 = 0;
        for (; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
          _DAT_00ec8dd0 = _DAT_00ec8dd0 + 1;
        }
        puVar4 = &DAT_00ec8d04;
      }
      _DAT_00ec8db8 = DAT_00ec8e14;
      DAT_004c86bc = 8;
      _DAT_00ec8dbc = DAT_00ec8e14 / (uint)puVar4;
      return 1;
    }
    return 0;
  }
  return 0;
}

