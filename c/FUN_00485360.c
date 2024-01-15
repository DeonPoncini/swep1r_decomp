#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00485360(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_0050fea8 != 0) {
    return 1;
  }
  puVar3 = &DAT_0050e028;
  for (iVar2 = 0x210; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_0050e868;
  for (iVar2 = 0x210; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_0050f0a8;
  for (iVar2 = 0x168; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_0050d568;
  for (iVar2 = 0x3c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_0050f648 = 0;
  DAT_0050f658 = 0;
  _DAT_0050f64c = 0;
  _DAT_0050f65c = 0;
  _DAT_0050f660 = 0;
  DAT_0050febc = 0;
  puVar3 = &DAT_0050d658;
  for (iVar2 = 0x274; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_00ec9ea0;
  for (iVar2 = 0x4e8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_00ecb240;
  for (iVar2 = 0x274; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _DAT_0050f650 = 0;
  DAT_0050fec8 = 0;
  DAT_0050fec0 = 0;
  uVar1 = FUN_0048c7a0(0x500,&DAT_0050feb8,0);
  iVar2 = DirectInputCreateA(uVar1);
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = (**(code **)(*DAT_0050feb8 + 0x10))(DAT_0050feb8,0,FUN_00486a10,0,1);
  if (iVar2 != 0) {
    return 1;
  }
  FUN_00485f20();
  FUN_00485c40();
  FUN_00486010();
  FUN_004855c0();
  DAT_0050fea8 = 1;
  return 0;
}

