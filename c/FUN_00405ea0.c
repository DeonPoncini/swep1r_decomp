#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405ea0(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *local_c;
  int local_8;
  uint local_4;
  
  puVar3 = param_1;
  iVar5 = DAT_00ec8824;
  puVar8 = DAT_00ec879c;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = DAT_00ec879c;
    local_4 = _DAT_00ec887c;
    local_c = &DAT_004d5fc0;
    puVar6 = (undefined4 *)&DAT_004d5fc0;
    for (iVar4 = 0xc3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_8 = iVar5;
    DAT_00ec876c = DAT_004b297c;
    puVar6 = &DAT_004b2958;
    puVar7 = &DAT_00ec8880;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar6 = (undefined4 *)&DAT_004b2f80;
    if ((iVar5 != 0) && (4 < (int)puVar8)) {
      param_1 = (undefined4 *)0x4;
    }
  }
  else if (param_1 == (undefined4 *)0x1) {
    local_8 = 0;
    param_1 = DAT_00ec8770;
    local_4 = DAT_00ec8808;
    local_c = &DAT_004d6518;
    puVar8 = (undefined4 *)&DAT_004d6518;
    for (iVar5 = 0xc3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    DAT_00ec8790 = DAT_004b2970;
    DAT_00ec8794 = DAT_004b2974;
    DAT_00ec8798 = DAT_004b2978;
    puVar6 = (undefined4 *)&DAT_004b3290;
  }
  else {
    puVar6 = param_1;
    if (param_1 == (undefined4 *)0x2) {
      local_8 = 0;
      local_4 = 0;
      local_c = &DAT_004d6828;
      puVar6 = (undefined4 *)&DAT_004b35a0;
      param_1 = (undefined4 *)0x100;
      puVar8 = (undefined4 *)&DAT_004d6828;
      for (iVar5 = 0xc3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
  }
  (&DAT_004d5e20)[(int)puVar3] = 0;
  *(undefined4 *)(&DAT_00ec8780 + (int)puVar3 * 4) = 0x3f800000;
  bVar1 = *(byte *)puVar6;
  do {
    if (bVar1 == 0xff) {
      local_c[(&DAT_004d5e20)[(int)puVar3] * 0xc] = 0xff;
      return;
    }
    if (((*(byte *)puVar6 & 8) == 0) || ((int)param_1 <= (int)puVar6[1])) {
      if ((*(byte *)puVar6 & 8) != 0) {
        if ((int)puVar6[1] < 0x10) {
          bVar2 = false;
        }
        else {
          bVar2 = (int)puVar6[1] <= local_8 * 4 + 0xf;
        }
        if (bVar2) goto LAB_0040601e;
      }
      if (((*(byte *)puVar6 & 4) != 0) && ((local_4 & 1 << ((byte)puVar6[1] & 0x1f)) != 0))
      goto LAB_0040601e;
    }
    else {
LAB_0040601e:
      puVar8 = (undefined4 *)(local_c + (&DAT_004d5e20)[(int)puVar3] * 0xc);
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      puVar8[2] = puVar6[2];
      (&DAT_004d5e20)[(int)puVar3] = (&DAT_004d5e20)[(int)puVar3] + 1;
    }
    bVar1 = *(byte *)(puVar6 + 3);
    puVar6 = puVar6 + 3;
  } while( true );
}

