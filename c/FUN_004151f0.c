#include "prototype.h"


void FUN_004151f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar3;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 uVar4;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  int iVar5;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined2 uVar6;
  undefined2 extraout_var_20;
  int iVar7;
  int *piVar8;
  
  if (((DAT_004d879c != 0) && ((*(byte *)(param_1 + 0x20) & 0x40) != 0)) &&
     (iVar7 = 0, 0 < *(int *)(param_1 + 0x5c))) {
    piVar8 = (int *)(param_1 + 100);
    do {
      if ((*piVar8 != 0) && (piVar8[1] == 0)) {
        iVar1 = FUN_00412f20(*piVar8);
        piVar8[1] = iVar1;
      }
      uVar2 = FUN_00417010(*piVar8);
      FUN_004282f0(CONCAT22(extraout_var_03,*(undefined2 *)(piVar8 + 1)),uVar2);
      FUN_00428660(CONCAT22(extraout_var_04,*(undefined2 *)(piVar8 + 1)),
                   *(short *)(piVar8 + 10) + *(short *)(piVar8 + 4),
                   *(short *)(piVar8 + 0xb) + *(short *)(piVar8 + 5));
      uVar3 = (undefined2)((uint)piVar8[-1] >> 0x10);
      uVar4 = extraout_var_05;
      uVar6 = extraout_var_12;
      if ((piVar8[-1] & 0x80000U) != 0) {
        iVar1 = ((*(int *)(param_1 + 0x30) - piVar8[7]) + piVar8[5]) - *(int *)(param_1 + 0x28);
        FUN_00428660(CONCAT22((short)((uint)*(int *)(param_1 + 0x28) >> 0x10),
                              *(undefined2 *)(piVar8 + 1)),
                     CONCAT22((short)((uint)piVar8[5] >> 0x10),*(undefined2 *)(param_1 + 0x24)),
                     CONCAT22((short)(iVar1 >> 0x11),
                              (short)(iVar1 >> 1) + *(short *)(param_1 + 0x28)));
        uVar3 = extraout_var;
        uVar4 = extraout_var_06;
        uVar6 = extraout_var_13;
      }
      if ((piVar8[-1] & 0x40000U) != 0) {
        iVar1 = ((*(int *)(param_1 + 0x2c) - piVar8[6]) + piVar8[4]) - *(int *)(param_1 + 0x24);
        FUN_00428660(CONCAT22((short)((uint)piVar8[4] >> 0x10),*(undefined2 *)(piVar8 + 1)),
                     CONCAT22((short)(iVar1 >> 0x11),
                              (short)(iVar1 >> 1) + *(short *)(param_1 + 0x24)),
                     CONCAT22(uVar6,*(undefined2 *)(param_1 + 0x28)));
        uVar3 = extraout_var_00;
        uVar4 = extraout_var_07;
        uVar6 = extraout_var_14;
      }
      if ((piVar8[-1] & 0x100000U) != 0) {
        iVar5 = ((*(int *)(param_1 + 0x30) - piVar8[7]) + piVar8[5]) - *(int *)(param_1 + 0x28);
        iVar1 = ((*(int *)(param_1 + 0x2c) - piVar8[6]) + piVar8[4]) - *(int *)(param_1 + 0x24);
        FUN_00428660(CONCAT22((short)((uint)piVar8[4] >> 0x10),*(undefined2 *)(piVar8 + 1)),
                     CONCAT22((short)(iVar1 >> 0x11),
                              (short)(iVar1 >> 1) + *(short *)(param_1 + 0x24)),
                     CONCAT22((short)(iVar5 >> 0x11),
                              (short)(iVar5 >> 1) + *(short *)(param_1 + 0x28)));
        uVar3 = extraout_var_01;
        uVar4 = extraout_var_08;
        uVar6 = extraout_var_15;
      }
      if ((piVar8[-1] & 0x200000U) != 0) {
        FUN_004287e0(CONCAT22(uVar6,*(undefined2 *)(piVar8 + 1)),8);
        uVar3 = extraout_var_02;
        uVar4 = extraout_var_09;
        uVar6 = extraout_var_16;
      }
      if ((piVar8[-1] & 0x400000U) != 0) {
        FUN_004287e0(CONCAT22(uVar3,*(undefined2 *)(piVar8 + 1)),4);
        uVar4 = extraout_var_10;
        uVar6 = extraout_var_17;
      }
      if ((piVar8[-1] & 0x800000U) != 0) {
        FUN_004287e0(CONCAT22(uVar4,*(undefined2 *)(piVar8 + 1)),0x8000);
        uVar6 = extraout_var_18;
      }
      if ((piVar8[-1] & 0x1000000U) != 0) {
        FUN_004287e0(CONCAT22(uVar6,*(undefined2 *)(piVar8 + 1)),0x800);
        uVar6 = extraout_var_19;
      }
      FUN_004286f0(CONCAT22(uVar6,*(undefined2 *)(piVar8 + 1)),piVar8[2],piVar8[3]);
      iVar1 = 100;
      if ((*(uint *)(param_1 + 0x20) & 0x100) == 0) {
        iVar1 = (int)*(char *)((int)piVar8 + 0x33);
      }
      FUN_00428740(CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(piVar8 + 1)),
                   *(undefined *)(piVar8 + 0xc),*(undefined *)((int)piVar8 + 0x31),
                   CONCAT31((int3)((uint)iVar1 >> 8),*(undefined *)((int)piVar8 + 0x32)),iVar1);
      FUN_004285d0(CONCAT22(extraout_var_11,*(undefined2 *)(piVar8 + 1)),1);
      FUN_004287e0(CONCAT22(extraout_var_20,*(undefined2 *)(piVar8 + 1)),0x10000);
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 0xe;
    } while (iVar7 < *(int *)(param_1 + 0x5c));
  }
  return;
}

