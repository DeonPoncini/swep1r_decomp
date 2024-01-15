#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432d30(void)

{
  undefined4 *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  float *pfVar16;
  int *piVar17;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  uint *puVar21;
  undefined2 *puVar22;
  uint *puVar23;
  undefined4 *puVar24;
  float *pfVar25;
  byte bVar26;
  uint param_1;
  float param_2;
  float *param_3;
  float param_4;
  int param_5;
  uint param_7;
  uint param_8;
  char cStack00000026;
  char cStack00000029;
  char cStack0000002a;
  uint param_11;
  int param_12;
  uint param_15;
  uint param_16;
  int *in_stack_00024050;
  int in_stack_00024054;
  byte **in_stack_00024058;
  uint in_stack_0002405c;
  char cVar15;
  
  FUN_004a0a30();
  uVar18 = 0;
  pbVar3 = *in_stack_00024058;
  bVar7 = false;
  param_5 = 0;
  param_7 = 0;
  param_4 = 1.0;
  param_2 = 1.0;
  param_15 = 0;
  bVar26 = 0;
  param_16 = 1;
  if (pbVar3 == (byte *)0x0) goto LAB_00432f8f;
  iVar9 = *(int *)(pbVar3 + 0xc);
  iVar13 = *(int *)(pbVar3 + 8);
  if (iVar13 == 0) {
    param_15 = FUN_00409040(pbVar3);
  }
  else {
    param_15 = *(uint *)(iVar13 + 0x38);
    if (*(int *)(iVar13 + 0x1c) != 0) {
      bVar2 = *(byte *)(*(int *)(iVar13 + 0x1c) + 3);
      if ((bVar2 & 0x10) != 0) {
        param_4 = 2.0;
      }
      if ((bVar2 & 1) != 0) {
        param_2 = 2.0;
      }
      if (((bVar2 & 0x20) != 0) && ((bVar2 & 2) != 0)) {
        param_5 = 1;
      }
    }
  }
  if (iVar9 != 0) {
    uVar18 = *(uint *)(iVar9 + 0x18) | *(uint *)(iVar9 + 0x1c);
    uVar8 = 0;
    do {
      if ((*(char *)(uVar8 + 6 + iVar9) == '\x03') || (*(char *)(iVar9 + 0xe + uVar8) == '\x03')) {
        bVar26 = 1;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
    uVar8 = 4;
    do {
      if ((*(char *)(uVar8 + 6 + iVar9) == '\x03') || (*(char *)(iVar9 + 0xe + uVar8) == '\x03')) {
        bVar26 = bVar26 | 2;
        in_stack_0002405c = in_stack_0002405c | 2;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 8);
    if (DAT_0050c618 != param_15) {
      if ((uVar18 & 0x30) == 0) {
        in_stack_0002405c = in_stack_0002405c | 0x20;
      }
      if ((uVar18 == 0xc81049f8) || (uVar18 == 0xc8104b50)) {
LAB_00432f36:
        in_stack_0002405c = in_stack_0002405c | 0x21;
      }
      else if (uVar18 == 0xc1841c8) {
        if (param_15 != 0) {
          FUN_00431cf0(param_15);
        }
        in_stack_0002405c = in_stack_0002405c | 0x421;
      }
      else if ((DAT_0050c620 != param_15) && (DAT_0050c624 != param_15)) {
        if ((uVar18 == 0xc81041d8) || (uVar18 == 0xc81049d8)) goto LAB_00432f36;
        if (uVar18 == 0xf0a2008) {
          in_stack_0002405c = in_stack_0002405c | 0x20;
        }
        else if (uVar18 == 0xc184950) {
          in_stack_0002405c = in_stack_0002405c | 0x20;
          bVar26 = bVar26 | 4;
        }
        else if ((((uVar18 != 0xc180079) && (DAT_0050c61c != param_15)) && (uVar18 != 0xc8104340))
                && (((uVar18 & 0x800) == 0 && (param_15 != 0)))) {
          if (*(int *)(param_15 + 0x7c) == 1) {
            FUN_00431ef0(param_15);
          }
          if (*(int *)(param_15 + 0x7c) == 2) {
            FUN_00431fd0(param_15);
          }
        }
      }
    }
    if (uVar18 == 0xf0a2008) {
      param_5 = 1;
    }
    if (param_5 != 0) {
      in_stack_0002405c = in_stack_0002405c | 0xc;
    }
  }
  if ((uVar18 != 0xc81041c8) && ((*pbVar3 & 0x11) != 0)) {
    bVar7 = true;
    param_16 = 3;
  }
LAB_00432f8f:
  puVar22 = (undefined2 *)in_stack_00024058[0xd];
  uVar18 = (uint)*(short *)((int)in_stack_00024058 + 0x3a);
  *(uint *)(in_stack_00024054 + 0x74) = uVar18;
  iVar9 = FUN_00408e60(pbVar3,uVar18 * 0xc);
  *(int *)(in_stack_00024054 + 0x4c) = iVar9;
  *(uint *)(in_stack_00024054 + 0x78) = uVar18;
  pfVar10 = (float *)FUN_00408e60(pbVar3,uVar18 * 8);
  *(float **)(in_stack_00024054 + 0x50) = pfVar10;
  param_3 = (float *)FUN_00408e60(pbVar3,uVar18 << 4);
  *(float **)(in_stack_00024054 + 0x54) = param_3;
  uVar11 = FUN_00408e60(pbVar3,uVar18 << 4);
  *(undefined4 *)(in_stack_00024054 + 0x58) = uVar11;
  uVar11 = FUN_00408e60(pbVar3,uVar18 * 0xc);
  *(undefined4 *)(in_stack_00024054 + 0x70) = uVar11;
  *(undefined4 *)(in_stack_00024054 + 0x44) = 4;
  *(uint *)(in_stack_00024054 + 0x48) = param_16;
  *(byte *)(in_stack_00024054 + 0x88) = bVar26;
  FUN_00430a90(in_stack_00024054 + 0x5c,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  if (uVar18 != 0) {
    fVar5 = param_4 * _DAT_004ac738;
    param_4 = 0.0;
    pfVar25 = (float *)(iVar9 + 8);
    fVar6 = param_2 * _DAT_004ac738;
    param_2 = 0.0;
    pfVar19 = pfVar10;
    param_8 = uVar18;
    do {
      pfVar25[-2] = (float)(int)CONCAT11((char)*puVar22,(char)((ushort)*puVar22 >> 8));
      pfVar25[-1] = (float)(int)CONCAT11((char)puVar22[1],(char)((ushort)puVar22[1] >> 8));
      *pfVar25 = (float)(int)CONCAT11((char)puVar22[2],(char)((ushort)puVar22[2] >> 8));
      *pfVar19 = (float)(int)CONCAT11((char)puVar22[4],(char)((ushort)puVar22[4] >> 8)) / fVar5;
      pfVar19[1] = (float)(int)CONCAT11((char)puVar22[5],(char)((ushort)puVar22[5] >> 8)) / fVar6;
      if (bVar7) {
        *param_3 = 1.0;
        param_3[1] = 1.0;
        param_3[2] = 1.0;
        param_3[3] = 1.0;
        *(float *)((int)param_2 + *(int *)(in_stack_00024054 + 0x70)) =
             (float)(int)(char)*(byte *)(puVar22 + 6) * _DAT_004ac73c;
        *(float *)((int)param_2 + 4 + *(int *)(in_stack_00024054 + 0x70)) =
             (float)(int)(char)*(byte *)((int)puVar22 + 0xd) * _DAT_004ac73c;
        *(float *)((int)param_2 + 8 + *(int *)(in_stack_00024054 + 0x70)) =
             (float)(int)(char)*(byte *)(puVar22 + 7) * _DAT_004ac73c;
        FUN_00492440((int)param_2 + *(int *)(in_stack_00024054 + 0x70));
      }
      else {
        uVar8 = 0;
        pfVar16 = param_3;
        do {
          iVar9 = uVar8 + 0xc;
          uVar8 = uVar8 + 1;
          *pfVar16 = (float)(uint)*(byte *)(iVar9 + (int)puVar22) * _DAT_004ac730;
          pfVar16 = pfVar16 + 1;
        } while (uVar8 < 4);
      }
      pfVar16 = (float *)((int)param_4 + *(int *)(in_stack_00024054 + 0x58));
      pfVar19 = pfVar19 + 2;
      pfVar25 = pfVar25 + 3;
      *pfVar16 = *param_3;
      pfVar16[1] = param_3[1];
      pfVar16[2] = param_3[2];
      pfVar16[3] = param_3[3];
      param_2 = (float)((int)param_2 + 0xc);
      puVar22 = puVar22 + 8;
      param_4 = (float)((int)param_4 + 0x10);
      param_3 = param_3 + 4;
      param_8 = param_8 - 1;
    } while (param_8 != 0);
  }
  uVar8 = uVar18;
  if (param_5 != 0) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pfVar10 = *pfVar10 - _DAT_004ac728;
      pfVar10[1] = pfVar10[1] - _DAT_004ac728;
      pfVar10 = pfVar10 + 2;
    }
  }
  bVar7 = false;
  iVar9 = 0;
  piVar17 = in_stack_00024050;
  do {
    iVar13 = *piVar17 << 0x18;
    if (iVar13 == 0x5000000) {
      iVar9 = iVar9 + 0x18;
    }
    else if (iVar13 == 0x6000000) {
      iVar9 = iVar9 + 0x30;
    }
    else if (iVar13 == -0x21000000) {
      bVar7 = true;
    }
    piVar17 = piVar17 + 2;
  } while (!bVar7);
  uVar8 = FUN_00408e60(pbVar3,iVar9);
  bVar7 = false;
  iVar9 = param_5;
  do {
    iVar13 = *in_stack_00024050;
    iVar4 = in_stack_00024050[1];
    uVar12 = iVar13 << 0x18;
    cVar14 = (char)((uint)iVar13 >> 8) >> 1;
    cStack00000026 = (char)((uint)iVar13 >> 0x10);
    cVar15 = (char)(iVar13 >> 0x19);
    if (uVar12 < 0x5000001) {
      if (uVar12 == 0x5000000) {
        uVar20 = cVar14 + param_5;
        param_3 = (float *)((cStack00000026 >> 1) + param_5);
        uVar12 = cVar15 + param_5;
        if (uVar18 < uVar20) {
          uVar20 = 0;
        }
        if (uVar18 < param_3) {
          param_3 = (float *)0x0;
        }
        if (uVar18 < uVar12) {
          uVar12 = 0;
        }
        iVar9 = param_7 * 0x48;
        FUN_004923c0(&stack0x0000004c + iVar9);
        *(uint *)(&stack0x00000058 + iVar9) = param_16;
        *(uint *)(&stack0x00000060 + iVar9) = uVar8;
        *(uint *)(&stack0x0000004c + iVar9) = param_7;
        *(uint *)(&stack0x00000050 + iVar9) = in_stack_0002405c;
        *(undefined4 *)(&stack0x00000054 + iVar9) = 4;
        *(undefined4 *)(&stack0x0000005c + iVar9) = 3;
        **(uint **)(&stack0x00000060 + iVar9) = uVar20;
        *(float **)(*(int *)(&stack0x00000060 + iVar9) + 4) = param_3;
        *(uint *)(*(int *)(&stack0x00000060 + iVar9) + 8) = uVar12;
        *(uint *)(&stack0x00000064 + iVar9) = uVar8 + 0xc;
        uVar8 = uVar8 + 0x18;
        param_7 = param_7 + 1;
        **(uint **)(&stack0x00000064 + iVar9) = uVar20;
        *(float **)(*(int *)(&stack0x00000064 + iVar9) + 4) = param_3;
        *(uint *)(*(int *)(&stack0x00000064 + iVar9) + 8) = uVar12;
        *(uint *)(&stack0x00000068 + iVar9) = param_15;
        iVar9 = param_5;
      }
      else if (uVar12 == 0x1000000) {
        _DAT_00e996a0 = in_stack_00024050[1] + *(short *)((int)in_stack_00024058 + 0x3e) * -0x10;
        param_5 = (int)((_DAT_00e996a0 - (int)in_stack_00024058[0xd]) +
                       (_DAT_00e996a0 - (int)in_stack_00024058[0xd] >> 0x1f & 0xfU)) >> 4;
        iVar9 = param_5;
      }
    }
    else if (uVar12 == 0x6000000) {
      cStack00000029 = (char)((uint)iVar4 >> 8);
      param_4 = (float)(cVar14 + iVar9);
      cStack0000002a = (char)((uint)iVar4 >> 0x10);
      param_11 = (cStack00000026 >> 1) + iVar9;
      uVar12 = (cStack00000029 >> 1) + iVar9;
      param_8 = cVar15 + iVar9;
      param_3 = (float *)((cStack0000002a >> 1) + iVar9);
      param_1 = (char)(iVar4 >> 0x19) + iVar9;
      if (uVar18 < uVar12) {
        uVar12 = 0;
      }
      if (uVar18 < param_3) {
        param_3 = (float *)0x0;
      }
      if (uVar18 < param_1) {
        param_1 = 0;
      }
      if (uVar18 < (uint)param_4) {
        param_4 = 0.0;
      }
      if (uVar18 < param_11) {
        param_11 = 0;
      }
      if (uVar18 < param_8) {
        param_8 = 0;
      }
      iVar9 = param_7 * 0x48;
      puVar21 = (uint *)(&stack0x0000004c + iVar9);
      if (param_7 < param_7 + 2) {
        param_12 = (param_7 + 2) - param_7;
        puVar23 = puVar21;
        do {
          FUN_004923c0(puVar21);
          puVar23[3] = param_16;
          puVar23[5] = uVar8;
          puVar23[1] = in_stack_0002405c;
          *puVar23 = param_7;
          puVar23[2] = 4;
          puVar23[4] = 3;
          puVar23[6] = uVar8 + 0xc;
          puVar23[7] = param_15;
          uVar8 = uVar8 + 0x18;
          puVar23 = puVar23 + 0x12;
          puVar21 = puVar21 + 0x12;
          param_12 = param_12 + -1;
        } while (param_12 != 0);
      }
      **(uint **)(&stack0x00000060 + iVar9) = (uint)param_4;
      *(uint *)(*(int *)(&stack0x00000060 + iVar9) + 4) = param_11;
      *(uint *)(*(int *)(&stack0x00000060 + iVar9) + 8) = param_8;
      **(uint **)(&stack0x00000064 + iVar9) = (uint)param_4;
      *(uint *)(*(int *)(&stack0x00000064 + iVar9) + 4) = param_11;
      *(uint *)(*(int *)(&stack0x00000064 + iVar9) + 8) = param_8;
      **(uint **)(&stack0x000000a8 + iVar9) = uVar12;
      *(float **)(*(int *)(&stack0x000000a8 + iVar9) + 4) = param_3;
      *(uint *)(*(int *)(&stack0x000000a8 + iVar9) + 8) = param_1;
      **(uint **)(&stack0x000000ac + iVar9) = uVar12;
      *(float **)(*(int *)(&stack0x000000ac + iVar9) + 4) = param_3;
      *(uint *)(*(int *)(&stack0x000000ac + iVar9) + 8) = param_1;
      param_7 = param_7 + 2;
      iVar9 = param_5;
    }
    else if (uVar12 == 0xdf000000) {
      bVar7 = true;
    }
    in_stack_00024050 = in_stack_00024050 + 2;
  } while (!bVar7);
  *(uint *)(in_stack_00024054 + 0x7c) = param_7;
  uVar11 = FUN_00408e60(pbVar3,param_7 * 0x48);
  *(undefined4 *)(in_stack_00024054 + 0x6c) = uVar11;
  if (param_7 != 0) {
    iVar9 = 0;
    do {
      puVar24 = (undefined4 *)(iVar9 + *(int *)(in_stack_00024054 + 0x6c));
      FUN_004923c0(puVar24);
      *puVar24 = *(undefined4 *)(&stack0x0000004c + iVar9);
      puVar24[1] = *(undefined4 *)(&stack0x00000050 + iVar9);
      puVar24[2] = *(undefined4 *)(&stack0x00000054 + iVar9);
      puVar24[3] = *(undefined4 *)(&stack0x00000058 + iVar9);
      puVar24[4] = *(undefined4 *)(&stack0x0000005c + iVar9);
      puVar24[5] = *(undefined4 *)(&stack0x00000060 + iVar9);
      puVar24[6] = *(undefined4 *)(&stack0x00000064 + iVar9);
      puVar1 = (undefined4 *)(&stack0x00000068 + iVar9);
      iVar9 = iVar9 + 0x48;
      param_7 = param_7 - 1;
      puVar24[7] = *puVar1;
    } while (param_7 != 0);
  }
  return;
}

