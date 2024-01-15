#include "prototype.h"


uint * FUN_00448780(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_14;
  int local_10;
  uint local_c [3];
  
  FUN_0042d680(3);
  FUN_0042d680(0);
  DAT_0050c600 = 1;
  DAT_0050c628 = 0;
  DAT_0050c62c = 0;
  DAT_0050c630 = 0;
  DAT_00e981e0 = 0;
  DAT_00e98240 = 0;
  DAT_00e98248 = 0;
  FUN_0042d640(0,0,&local_14,4);
  local_14 = (local_14 & 0xff00 | local_14 << 0x10) << 8 |
             (local_14 & 0xff0000 | local_14 >> 0x10) >> 8;
  if ((-1 < param_1) && (param_1 < (int)local_14)) {
    FUN_0042d640(0,param_1 * 8 + 4,local_c,0xc);
    iVar3 = 3;
    puVar8 = local_c;
    do {
      uVar5 = *puVar8;
      iVar3 = iVar3 + -1;
      *puVar8 = (uVar5 & 0xff00 | uVar5 << 0x10) << 8 | (uVar5 >> 0x10 | uVar5 & 0xff0000) >> 8;
      puVar8 = puVar8 + 1;
    } while (iVar3 != 0);
    iVar3 = local_c[1] - local_c[0];
    uVar5 = local_c[2] - local_c[1];
    if (iVar3 < 0x25801) {
      FUN_0042d640(0,local_c[0],&DAT_00e6b180,iVar3);
      iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar3) {
        puVar8 = &DAT_00e6b180;
        do {
          uVar6 = *puVar8;
          iVar3 = iVar3 + -1;
          *puVar8 = (uVar6 & 0xff00 | uVar6 << 0x10) << 8 | (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8;
          puVar8 = puVar8 + 1;
        } while (iVar3 != 0);
      }
      local_10 = FUN_00445b40();
      puVar8 = (uint *)(local_10 + 7U & 0xfffffff8);
      FUN_0042d640(0,local_c[1],puVar8,0xc);
      uVar6 = *puVar8;
      if (((uVar6 & 0xff00 | uVar6 << 0x10) << 8 | (uVar6 >> 0x10 | uVar6 & 0xff0000) >> 8) ==
          0x436f6d70) {
        uVar6 = puVar8[2];
        iVar3 = uVar5 - 0xc;
        uVar5 = (uVar6 & 0xff00 | uVar6 << 0x10) << 8 | (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8;
        iVar1 = FUN_00445bf0();
        if (iVar1 < (int)(uVar5 + 8)) {
          DAT_0050c610 = 1;
          FUN_0042d6f0(3);
          FUN_0042d6f0(0);
          return (uint *)0x0;
        }
        uVar6 = DAT_00e981e4 - iVar3 & 0xfffffff8;
        if (uVar5 + (int)puVar8 <= uVar6) {
          FUN_0042d640(0,local_c[1] + 0xc,uVar6,iVar3);
          FUN_0042d520(uVar6,puVar8);
          FUN_00445b20(uVar5 + (int)puVar8);
LAB_00448a31:
          iVar3 = 0;
          DAT_00e9822c = local_10;
          DAT_00e6b164 = FUN_00445b40();
          local_10 = FUN_00445b40();
          if (DAT_0050c604 != 0) {
            FUN_00445b40();
            FUN_00445b40();
            FUN_00445b40();
            FUN_00445b40();
          }
          puVar7 = puVar8;
          if (0 < (int)uVar5 >> 2) {
            do {
              if (((&DAT_00e6b180)[iVar3 >> 5] & 1 << (0x1f - ((byte)iVar3 & 0x1f) & 0x1f)) != 0) {
                uVar6 = *puVar7;
                uVar4 = (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8;
                uVar2 = (uVar6 & 0xff00 | uVar6 << 0x10) << 8 | uVar4;
                *puVar7 = uVar2;
                if ((uVar6 << 0x10 & 0xff0000) == 0xa0000) {
                  FUN_00447490((uVar6 & 0xff00) << 8 | uVar4,puVar7,puVar7 + 1);
                }
                else if (uVar2 != 0) {
                  *puVar7 = uVar2 + (int)puVar8;
                }
              }
              puVar7 = puVar7 + 1;
              iVar3 = iVar3 + 1;
            } while (iVar3 < (int)uVar5 >> 2);
          }
          FUN_004485d0(puVar8);
          uVar5 = *puVar8;
          if ((((uVar5 == 0x4d6f646c) || (uVar5 == 0x5472616b)) || (uVar5 == 0x506f6464)) ||
             (((uVar5 == 0x50617274 || (uVar5 == 0x5363656e)) ||
              ((uVar5 == 0x4d416c74 || (uVar5 == 0x50757070)))))) {
            puVar8 = puVar8 + 1;
          }
          else {
            FUN_00426910(uVar5);
          }
          if (DAT_0050c604 != 0) {
            FUN_00445b40();
            FUN_00445b40();
            FUN_00445b40();
            FUN_00445b40();
          }
          iVar3 = FUN_00445b40();
          DAT_00e98240 = iVar3 - local_10;
          DAT_00e981e0 = DAT_00e6b164 - DAT_00e9822c;
          FUN_0042d6f0(3);
          FUN_0042d6f0(0);
          return puVar8;
        }
        FUN_0042d6f0(3);
      }
      else {
        iVar3 = FUN_00445bf0();
        if ((int)(uVar5 + 8) <= iVar3) {
          FUN_0042d640(0,local_c[1],puVar8,uVar5);
          FUN_00445b20(uVar5 + (int)puVar8);
          goto LAB_00448a31;
        }
        FUN_0042d6f0(3);
      }
      FUN_0042d6f0(0);
      DAT_0050c610 = 1;
      return (uint *)0x0;
    }
  }
  FUN_0042d6f0(3);
  FUN_0042d6f0(0);
  return (uint *)0x0;
}

