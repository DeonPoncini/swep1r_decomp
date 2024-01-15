#include "prototype.h"


void FUN_0044d7c0(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar7 = 0;
  if (param_1 == 0) {
    return;
  }
  uVar3 = *(uint *)(DAT_00e67c04 + 0x158);
  uVar2 = FUN_00431b00(param_1,2);
  if ((uVar2 & uVar3) != uVar3) {
    return;
  }
  uVar3 = FUN_00431b00(param_1,2);
  if ((*(uint *)(DAT_00e67c04 + 0x15c) & uVar3) == 0) {
    return;
  }
  bVar1 = 10 < DAT_0050c710;
  DAT_0050c710 = DAT_0050c710 + 1;
  if (bVar1) {
    DAT_0050c710 = 0;
    FUN_00426910();
  }
  iVar4 = FUN_00431770(param_1);
  uVar5 = FUN_0044c440(*(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0xe));
  if (iVar4 < 0x5065) {
    if (iVar4 == 0x5064) {
      iVar4 = FUN_00431780(param_1);
      if (0 < iVar4) {
        do {
          iVar6 = *(int *)(*(int *)(param_1 + 0x18) + iVar7 * 4);
          if (((iVar6 != 0) &&
              (uVar3 = *(uint *)(DAT_00e67c04 + 0x158), uVar2 = FUN_00431b00(iVar6,2),
              (uVar2 & uVar3) == uVar3)) &&
             (uVar3 = FUN_00431b00(iVar6,2), (*(uint *)(DAT_00e67c04 + 0x15c) & uVar3) != 0)) {
            FUN_0044d7c0(iVar6);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar4);
      }
    }
    else if (iVar4 == 0x3064) {
      FUN_0044ca00(param_1);
    }
    goto LAB_0044dac0;
  }
  if (iVar4 < 0xd065) {
    if (iVar4 != 0xd064) {
      if (iVar4 == 0x5065) {
        iVar6 = FUN_00431780(param_1);
        iVar4 = *(int *)(param_1 + 0x1c);
        if (iVar4 == -2) goto LAB_0044dac0;
        if (iVar4 == -1) {
          if (0 < iVar6) {
            do {
              iVar4 = *(int *)(*(int *)(param_1 + 0x18) + iVar7 * 4);
              if (((iVar4 != 0) &&
                  (uVar3 = *(uint *)(DAT_00e67c04 + 0x158), uVar2 = FUN_00431b00(iVar4,2),
                  (uVar2 & uVar3) == uVar3)) &&
                 (uVar3 = FUN_00431b00(iVar4,2), (*(uint *)(DAT_00e67c04 + 0x15c) & uVar3) != 0)) {
                FUN_0044d7c0(iVar4);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar6);
          }
          goto LAB_0044dac0;
        }
        if ((iVar4 < 0) || (iVar6 <= iVar4)) goto LAB_0044dac0;
      }
      else if ((iVar4 != 0x5066) || (iVar4 = FUN_0044d740(param_1), iVar4 == -1)) goto LAB_0044dac0;
      iVar7 = *(int *)(*(int *)(param_1 + 0x18) + iVar4 * 4);
      if ((iVar7 != 0) &&
         ((uVar3 = *(uint *)(DAT_00e67c04 + 0x158), uVar2 = FUN_00431b00(iVar7,2),
          (uVar2 & uVar3) == uVar3 &&
          (uVar3 = FUN_00431b00(iVar7,2), (*(uint *)(DAT_00e67c04 + 0x15c) & uVar3) != 0)))) {
        FUN_0044d7c0(iVar7);
      }
      goto LAB_0044dac0;
    }
    puVar8 = (undefined4 *)(param_1 + 0x1c);
    uVar9 = 0;
  }
  else {
    if (iVar4 != 0xd065) {
      if (iVar4 == 0xd066) {
        FUN_0044d310(param_1);
      }
      goto LAB_0044dac0;
    }
    iVar7 = FUN_00431780(param_1);
    if (iVar7 < 1) goto LAB_0044dac0;
    if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
      puVar8 = (undefined4 *)(param_1 + 0x1c);
    }
    else {
      local_30 = *(undefined4 *)(param_1 + 0x1c);
      local_2c = *(undefined4 *)(param_1 + 0x20);
      local_28 = *(undefined4 *)(param_1 + 0x24);
      local_24 = *(undefined4 *)(param_1 + 0x28);
      local_20 = *(undefined4 *)(param_1 + 0x2c);
      local_1c = *(undefined4 *)(param_1 + 0x30);
      local_18 = *(undefined4 *)(param_1 + 0x34);
      local_14 = *(undefined4 *)(param_1 + 0x38);
      local_10 = *(undefined4 *)(param_1 + 0x3c);
      local_c = *(undefined4 *)(param_1 + 0x40);
      local_8 = *(undefined4 *)(param_1 + 0x44);
      local_4 = *(undefined4 *)(param_1 + 0x48);
      FUN_0044d1e0(&local_30,param_1 + 0x1c,param_1 + 0x4c);
      puVar8 = &local_30;
    }
    uVar9 = 1;
  }
  FUN_0044d240(uVar9,puVar8,param_1);
LAB_0044dac0:
  FUN_0044c4c0(uVar5);
  return;
}

