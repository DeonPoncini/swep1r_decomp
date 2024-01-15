#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485630(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_0050feb4 != 0) {
    puVar2 = &DAT_0050e028;
    for (iVar1 = 0x210; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_0050f668;
    for (iVar1 = 0x210; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_0050feb0 = 1;
    DAT_0050fecc = timeGetTime();
    DAT_0050fed8 = DAT_0050fecc - DAT_0050fed0;
    _DAT_004c8174 = _DAT_004ae2c8 / (float)(ulonglong)DAT_0050fed8;
    puVar2 = &DAT_0050d568;
    for (iVar1 = 0x3c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    _DAT_004c8178 = _DAT_004c8174 * _DAT_004ae2cc;
    FUN_00486170();
    if (DAT_0050fec4 != 0) {
      FUN_00486340();
    }
    FUN_00486710();
    DAT_0050fed0 = DAT_0050fecc;
  }
  return;
}

