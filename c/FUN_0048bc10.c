#include "prototype.h"


uint FUN_0048bc10(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  puVar1 = (uint *)(**(code **)(DAT_00ecc420 + 0x20))(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  iVar2 = FUN_00487d20();
  uVar8 = 0;
  if (iVar2 == 0) {
    FUN_0048be20(puVar1);
    return 0;
  }
  uVar3 = FUN_00488070();
  *puVar1 = uVar3;
  puVar1[1] = 0;
  if (uVar3 != 0) {
    puVar4 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(uVar3 * 0x2b4);
    puVar1[1] = (uint)puVar4;
    if (*puVar1 != 0) {
      do {
        puVar7 = puVar4;
        for (iVar2 = 0xad; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        iVar2 = FUN_00488080(uVar8,puVar4);
        if ((iVar2 != 0) || (iVar2 = FUN_00487e00(uVar8), iVar2 == 0)) {
          FUN_0048be20(puVar1);
          return 0;
        }
        iVar2 = FUN_00489d40();
        puVar4[0xa9] = iVar2;
        puVar4[0xaa] = 0;
        if (iVar2 != 0) {
          iVar2 = (**(code **)(DAT_00ecc420 + 0x20))(iVar2 * 0x50);
          puVar4[0xaa] = iVar2;
          uVar3 = 0;
          if (puVar4[0xa9] != 0) {
            do {
              iVar5 = FUN_00489d50(uVar3,iVar2);
              if (iVar5 == 0) {
                iVar2 = iVar2 + 0x50;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < (uint)puVar4[0xa9]);
          }
          if (puVar4[0x41] == 0) {
            puVar4[0xab] = 0;
            puVar4[0xac] = 0;
          }
          else {
            iVar2 = FUN_00489dc0();
            if (iVar2 == 0) {
              FUN_0048be20(puVar1);
              return 0;
            }
            iVar2 = FUN_00489ea0();
            puVar4[0xab] = iVar2;
            puVar4[0xac] = 0;
            if (iVar2 != 0) {
              uVar6 = (**(code **)(DAT_00ecc420 + 0x20))(iVar2 * 0x368);
              puVar4[0xac] = uVar6;
              iVar2 = puVar4[0xab];
              puVar7 = (undefined4 *)FUN_00489eb0();
              puVar9 = (undefined4 *)puVar4[0xac];
              for (uVar3 = (uint)(iVar2 * 0x368) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(undefined *)puVar9 = *(undefined *)puVar7;
                puVar7 = (undefined4 *)((int)puVar7 + 1);
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
            }
            FUN_00489e40();
          }
        }
        FUN_00487e80();
        puVar4 = puVar4 + 0xad;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *puVar1);
    }
  }
  FUN_00487da0();
  return -(uint)(*puVar1 != 0) & (uint)puVar1;
}

