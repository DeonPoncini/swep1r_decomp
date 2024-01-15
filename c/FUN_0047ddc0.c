#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047ddc0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined local_40 [64];
  
  DAT_0050cb48 = 0;
  puVar4 = &DAT_00e27000;
  for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  _DAT_0050cb44 = 0;
  uVar3 = 0;
  DAT_0050cb4c = param_1;
  if (DAT_0050cb40 != 0) {
    FUN_0047d890();
  }
  if (param_1 == 1) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0xfe);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    FUN_0047bee0(0);
    DAT_00e26fe0 = *piVar1;
    if (DAT_00e26fe0 != 0) {
      FUN_00431a50(DAT_00e26fe0,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0xfb);
    _DAT_00e25e64 = FUN_00448bd0(piVar1);
    FUN_0047bee0(1);
    _DAT_00e26fe4 = *piVar1;
    if (_DAT_00e26fe4 != 0) {
      FUN_00431a50(_DAT_00e26fe4,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0xc4);
    _DAT_00e25e68 = FUN_00448bd0(piVar1);
    FUN_0047bee0(2);
    DAT_00e26fe8 = *piVar1;
    if (DAT_00e26fe8 != 0) {
      FUN_00431a50(DAT_00e26fe8,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0xc5);
    _DAT_00e25e6c = FUN_00448bd0(piVar1);
    _DAT_00e26fcc = *(int *)(*(int *)(*piVar1 + 0x18) + 4);
    _DAT_00e26fd0 = **(undefined4 **)(*piVar1 + 0x18);
    _DAT_00e26fec = _DAT_00e26fcc;
    _DAT_00e26ff0 = _DAT_00e26fd0;
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 2) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0x9b);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    _DAT_00e26fc0 = *piVar1;
    DAT_00e26fe0 = _DAT_00e26fc0;
    piVar1 = (int *)FUN_00448780(0x132);
    _DAT_00e25e64 = FUN_00448bd0(piVar1);
    FUN_0047bee0(1);
    _DAT_00e26fe4 = *piVar1;
    if (_DAT_00e26fe4 != 0) {
      FUN_00431a50(_DAT_00e26fe4,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 3) {
    uVar3 = FUN_0047dd90();
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 4) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0x128);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    FUN_0047bee0(0);
    DAT_00e26fe0 = *piVar1;
    if (DAT_00e26fe0 != 0) {
      FUN_00431a50(DAT_00e26fe0,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0x127);
    _DAT_00e25e64 = FUN_00448bd0(piVar1);
    FUN_0047bee0(1);
    _DAT_00e26fe4 = *piVar1;
    if (_DAT_00e26fe4 != 0) {
      FUN_00431a50(_DAT_00e26fe4,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0x132);
    _DAT_00e25e6c = FUN_00448bd0(piVar1);
    FUN_0047bee0(3);
    _DAT_00e26fec = *piVar1;
    if (_DAT_00e26fec != 0) {
      FUN_00431a50(_DAT_00e26fec,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0x13d);
    _DAT_00e25e68 = FUN_00448bd0(piVar1);
    _DAT_00e26fc8 = *piVar1;
    DAT_00e26fe8 = _DAT_00e26fc8;
    piVar1 = (int *)FUN_00448780(0x137);
    _DAT_00e25e74 = FUN_00448bd0(piVar1);
    FUN_0047bee0(5);
    _DAT_00e26ff4 = *piVar1;
    if (_DAT_00e26ff4 != 0) {
      FUN_00431a50(_DAT_00e26ff4,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 5) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0x138);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    _DAT_00e26fc0 = *piVar1;
    DAT_00e26fe0 = _DAT_00e26fc0;
    piVar1 = (int *)FUN_00448780(0x13d);
    _DAT_00e25e68 = FUN_00448bd0(piVar1);
    _DAT_00e26fc8 = *piVar1;
    DAT_00e26fe8 = _DAT_00e26fc8;
    FUN_004310b0(local_40,0x4019999a,0x4019999a,0x4019999a);
    FUN_00431640(DAT_00e26fe8,local_40);
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 6) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0x133);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    FUN_0047bee0(0);
    DAT_00e26fe0 = *piVar1;
    if (DAT_00e26fe0 != 0) {
      FUN_00431a50(DAT_00e26fe0,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 7) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0x135);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    FUN_0047bee0(0);
    DAT_00e26fe0 = *piVar1;
    if (DAT_00e26fe0 != 0) {
      FUN_00431a50(DAT_00e26fe0,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 0) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0xfc);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    FUN_0047bee0(0);
    DAT_00e26fe0 = *piVar1;
    if (DAT_00e26fe0 != 0) {
      FUN_00431a50(DAT_00e26fe0,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0xfb);
    _DAT_00e25e64 = FUN_00448bd0(piVar1);
    FUN_0047bee0(1);
    _DAT_00e26fe4 = *piVar1;
    if (_DAT_00e26fe4 != 0) {
      FUN_00431a50(_DAT_00e26fe4,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0x134);
    _DAT_00e25e68 = FUN_00448bd0(piVar1);
    _DAT_00e26fc8 = *piVar1;
    DAT_00e26fe8 = _DAT_00e26fc8;
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  return uVar3;
}

