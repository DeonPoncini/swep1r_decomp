#include "prototype.h"


void FUN_0048d9a0(int param_1)

{
  undefined4 *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  
  puVar2 = (ushort *)(param_1 + -8);
  puVar1 = *(undefined4 **)(param_1 + -4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0049f200(puVar2);
    return;
  }
  if (((*puVar2 & 0x8000) == 0) || (0x420 < (ushort)((int)(puVar1 + -0x14bba6) >> 4))) {
    (**(code **)(DAT_00ecc420 + 0xc))(s_Attempting_to_dispose_a_bogus_or_004d1a3c);
  }
  else {
    uVar4 = *puVar2 & 0x7fff;
    if ((*(ushort *)((int)puVar2 + uVar4) & 0x8000) == 0) {
      uVar4 = uVar4 + *(ushort *)((int)puVar2 + uVar4);
    }
    puVar5 = (ushort *)((int)puVar2 - (uint)*(ushort *)(param_1 + -6));
    uVar3 = *puVar5;
    if ((uVar3 & 0x8000) == 0) {
      uVar4 = uVar4 + uVar3;
      puVar2 = puVar5;
    }
    uVar3 = (ushort)uVar4;
    *puVar2 = uVar3;
    *(ushort *)((int)puVar2 + (uVar4 & 0xffff) + 2) = uVar3;
    uVar4 = (uVar4 & 0xffff) - 8;
    if ((uint)puVar1[2] < uVar4) {
      if (uVar3 == 0x7bf8) {
        FUN_0049f200(*puVar1);
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1[1] = 0;
        return;
      }
      puVar1[2] = uVar4;
      puVar1[1] = puVar2;
      return;
    }
  }
  return;
}

