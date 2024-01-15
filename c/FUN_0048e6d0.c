#include "prototype.h"


undefined4 FUN_0048e6d0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *_Source;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  size_t _Count;
  int *piStack_128;
  int iStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint uStack_114;
  uint uStack_110;
  int iStack_100;
  int iStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined4 auStack_e4 [14];
  char acStack_ac [4];
  int iStack_a8;
  byte bStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined4 auStack_98 [14];
  byte abStack_60 [24];
  undefined auStack_48 [16];
  undefined auStack_38 [56];
  
  puVar3 = param_2;
  for (iVar6 = 0x25; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar6 = (**(code **)(DAT_00ecc428 + 0x30))(param_1,&DAT_004b5c4c);
  if (iVar6 == 0) {
    return 1;
  }
  iVar1 = (**(code **)(DAT_00ecc428 + 0x38))(iVar6,acStack_ac,0x4c);
  if ((((iVar1 == 0x4c) && (iVar1 = _strncmp(acStack_ac,&DAT_004d1a78,4), iVar1 == 0)) &&
      (iStack_a8 == 0x32)) && (iStack_a0 == iStack_9c)) {
    param_2[0x22] = iStack_a0;
    puVar3 = auStack_98;
    puVar9 = param_2 + 0x11;
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar9 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
    }
    param_2[0x23] = 0;
    uVar2 = FUN_0048a2d0(param_2 + 0x11);
    param_2[0x1f] = uVar2;
    FUN_0048a230(uVar2,auStack_38,&uStack_11c,&uStack_118);
    uVar8 = 0;
    if (param_2[0x22] != 0) {
      do {
        iVar1 = (**(code **)(DAT_00ecc428 + 0x38))(iVar6,abStack_60,0x18);
        if ((iVar1 != 0x18) ||
           (((abStack_60[0] & 8) != 0 &&
            (iVar1 = (**(code **)(DAT_00ecc428 + 0x38))(iVar6,auStack_48,0x10), iVar1 != 0x10))))
        goto LAB_0048ea56;
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)param_2[0x22]);
    }
    param_2[0x24] = 0;
    if (param_2[0x22] != 0) {
      puVar3 = (undefined4 *)(**(code **)(DAT_00ecc428 + 0x20))(param_2[0x22] * 0x94);
      param_2[0x24] = puVar3;
      if (puVar3 == (undefined4 *)0x0) goto LAB_0048ea56;
      for (uVar8 = param_2[0x22] * 0x25 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    uStack_120 = 0;
    if (param_2[0x22] != 0) {
      iStack_124 = 0;
      do {
        iVar1 = (**(code **)(DAT_00ecc428 + 0x38))(iVar6,&uStack_114,0x18);
        if (iVar1 != 0x18) goto LAB_0048ea56;
        param_2[0x21] = uStack_110;
        uStack_f4 = uStack_110;
        uStack_f8 = uStack_114;
        param_2[0x20] = uStack_114;
        puVar3 = param_2 + 0x11;
        puVar9 = auStack_e4;
        for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar9 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        }
        piStack_128 = (int *)0x0;
        if (iStack_100 != 0) {
          piStack_128 = (int *)(**(code **)(DAT_00ecc428 + 0x20))(iStack_100 * 4);
          iVar1 = iStack_100;
          piVar7 = piStack_128;
          if (piStack_128 == (int *)0x0) goto LAB_0048ea56;
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar7 = 0;
            piVar7 = piVar7 + 1;
          }
        }
        iVar1 = 0;
        piVar7 = piStack_128;
        if (0 < iStack_100) {
          do {
            iVar4 = FUN_004881c0(&uStack_f8,0,0);
            *piVar7 = iVar4;
            if (iVar4 == 0) goto LAB_0048ea56;
            FUN_00488370(iVar4);
            iVar4 = *piVar7;
            iStack_fc = iVar4;
            iVar5 = (**(code **)(DAT_00ecc428 + 0x38))
                              (iVar6,*(undefined4 *)(iVar4 + 0x58),*(undefined4 *)(iVar4 + 0x14));
            if (*(int *)(iVar4 + 0x14) != iVar5) goto LAB_0048ea56;
            FUN_004883c0(iVar4);
            if ((*(int *)(*piVar7 + 0x20) != 0) && (iVar4 = FUN_0048a2f0(), iVar4 != 0)) {
              iVar4 = FUN_00488670(auStack_38,*piVar7,uStack_11c,uStack_118);
              *piVar7 = iVar4;
            }
            uStack_f4 = uStack_f4 >> 1;
            uStack_f8 = uStack_f8 >> 1;
            iVar1 = iVar1 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar1 < iStack_100);
        }
        FUN_0048a5e0(iStack_124 + param_2[0x24],piStack_128,iStack_100,param_2[0x1f]);
        iVar1 = 0;
        piVar7 = piStack_128;
        if (0 < iStack_100) {
          do {
            FUN_00488310(*piVar7);
            iVar1 = iVar1 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar1 < iStack_100);
        }
        (**(code **)(DAT_00ecc428 + 0x24))(piStack_128);
        uStack_120 = uStack_120 + 1;
        iStack_124 = iStack_124 + 0x94;
      } while (uStack_120 < (uint)param_2[0x22]);
    }
    if ((bStack_a4 & 1) == 0) {
      _Count = 0x3f;
      _Source = (char *)FUN_00484860(param_1);
      _strncpy((char *)param_2,_Source,_Count);
      *(undefined *)((int)param_2 + 0x3f) = 0;
      (**(code **)(DAT_00ecc428 + 0x34))(iVar6);
      return 0;
    }
  }
LAB_0048ea56:
  if (iVar6 != 0) {
    (**(code **)(DAT_00ecc428 + 0x34))(iVar6);
  }
  return 1;
}

