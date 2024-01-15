#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00409800(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50 [20];
  
  FUN_00489ab0();
  FUN_00408640(0x1a);
  FUN_00489cd0(DAT_00e229a8,DAT_00e229aa,DAT_00e229ac,0);
  FUN_00408640(0x1c);
  DAT_00ec86c4 = DAT_00ec8e10;
  DAT_00ec85e8 = DAT_00ec8e0c;
  DAT_00ec86e0 = FUN_00490a50(0,&DAT_00ec8da0,0,0,DAT_00ec8e10,DAT_00ec8e0c);
  FUN_00490a30(*(undefined4 *)(param_1 + 0x20));
  FUN_00490a40(*(undefined4 *)(param_1 + 0x24));
  FUN_00490a20(1);
  FUN_00408640(0x1d);
  DAT_00ec85ec = FUN_0048fad0(0x42960000,0,0x3da3d70a,0x41700000,0x3f800000);
  FUN_0048fc50(DAT_00ec85ec,DAT_00ec86e0);
  FUN_00408640(0x1e);
  FUN_0048fc70(DAT_00ec85ec);
  puVar3 = &DAT_004af880;
  puVar4 = &DAT_00ec8580;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_00ec8550 = 0xc47a0000;
  _DAT_00ec8554 = 0xc4fa0000;
  _DAT_00ec8558 = 0x45fa0000;
  _DAT_00ec8730 = 0;
  _DAT_00ec8734 = 0;
  _DAT_00ec8738 = 0;
  FUN_00490060(&DAT_00ec8580);
  FUN_00408640(0x20);
  iVar2 = FUN_00489d90(local_50);
  if (iVar2 != 0) {
    return 0;
  }
  FUN_0048fd10(DAT_00ec85ec,local_50[0]);
  FUN_004903d0(DAT_00ec85ec,0x3ecccccd,0x3f4ccccd);
  FUN_00408640(0x22);
  FUN_0048fc50(DAT_00ec85ec,DAT_00ec86e0);
  FUN_004904f0(DAT_00ec85ec);
  FUN_00490510(&DAT_004d6b78);
  FUN_00490510(&DAT_004d6ba8);
  _DAT_004d6b7c = 0;
  _DAT_004d6bac = 0;
  _DAT_004d6b90 = 0x3f800000;
  _DAT_004d6bc0 = 0x3f800000;
  _DAT_004d6b98 = 0;
  _DAT_004d6b94 = 0;
  _DAT_004d6bc8 = 0;
  _DAT_004d6bc4 = 0;
  local_78 = 0;
  local_6c = 0;
  local_74 = 0x42c80000;
  local_68 = 0x42c80000;
  local_70 = 0xc1a00000;
  local_64 = 0xc1a00000;
  FUN_00408640(0x24);
  FUN_00490450(DAT_00ec85ec,&DAT_004d6b78,&local_78);
  FUN_00490450(DAT_00ec85ec,&DAT_004d6ba8,&local_6c);
  local_60 = 0;
  local_5c = 0;
  local_58 = 0x3f000000;
  local_54 = 0x3f800000;
  FUN_004903a0(DAT_00ec85ec,&local_60);
  uVar1 = FUN_00408640(0x26);
  DAT_004b4318 = 1;
  return uVar1;
}

