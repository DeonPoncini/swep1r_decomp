#include "prototype.h"


undefined4
FUN_004a9d40(int param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  ushort uVar2;
  undefined uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  undefined local_15;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  undefined local_11;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined local_6;
  char cStack_5;
  
  psVar1 = param_6;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xcc;
  local_15 = 0xcc;
  local_14 = 0xcc;
  local_13 = 0xcc;
  uVar5 = param_3 & 0x7fff;
  local_12 = 0xfb;
  local_11 = 0x3f;
  if ((param_3 & 0x8000) == 0) {
    *(undefined *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
LAB_004a9f4f:
    *(undefined *)(psVar1 + 1) = 0x20;
    *(undefined *)((int)psVar1 + 3) = 1;
    *(undefined *)(psVar1 + 2) = 0x30;
    *(undefined *)((int)psVar1 + 5) = 0;
    return 1;
  }
  if ((short)uVar5 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 != 0x80000000) || (param_1 != 0)) && ((param_2 & 0x40000000) == 0)) {
      *(undefined4 *)(param_6 + 2) = DAT_004b04dc;
      param_6[4] = DAT_004b04e0;
      uVar3 = DAT_004b04e2;
      *(undefined *)((int)param_6 + 3) = 6;
      *(undefined *)(param_6 + 5) = uVar3;
      return 0;
    }
    if ((((param_3 & 0x8000) != 0) && (param_2 == 0xc0000000)) && (param_1 == 0)) {
      *(undefined4 *)(param_6 + 2) = DAT_004b04d4;
      sVar10 = DAT_004b04d8;
      *(undefined *)((int)param_6 + 3) = 5;
      param_6[4] = sVar10;
      return 0;
    }
    if ((param_2 == 0x80000000) && (param_1 == 0)) {
      *(undefined4 *)(param_6 + 2) = DAT_004b04cc;
      sVar10 = DAT_004b04d0;
      *(undefined *)((int)param_6 + 3) = 5;
      param_6[4] = sVar10;
      return 0;
    }
    *(undefined4 *)(param_6 + 2) = DAT_004b04c4;
    param_6[4] = DAT_004b04c8;
    uVar3 = DAT_004b04ca;
    *(undefined *)((int)param_6 + 3) = 6;
    *(undefined *)(param_6 + 5) = uVar3;
    return 0;
  }
  local_6 = (undefined)uVar5;
  cStack_5 = (char)(uVar5 >> 8);
  uStack_a = (undefined2)param_2;
  uStack_8 = (undefined2)(param_2 >> 0x10);
  uStack_e = (undefined2)param_1;
  uStack_c = (undefined2)((uint)param_1 >> 0x10);
  local_10 = 0;
  sVar10 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >>
                  0x10);
  FUN_004aa650(&local_10,-(int)sVar10,1);
  if (0x3ffe < CONCAT11(cStack_5,local_6)) {
    sVar10 = sVar10 + 1;
    FUN_004aa390(&local_10,&local_1c);
  }
  *psVar1 = sVar10;
  iVar9 = param_4;
  if (((param_5 & 1) != 0) && (iVar9 = param_4 + sVar10, param_4 + sVar10 < 1)) {
    *psVar1 = 0;
    goto LAB_004a9f4f;
  }
  if (0x15 < iVar9) {
    iVar9 = 0x15;
  }
  uVar2 = CONCAT11(cStack_5,local_6);
  local_6 = 0;
  cStack_5 = '\0';
  iVar6 = 8;
  iVar11 = uVar2 - 0x3ffe;
  do {
    FUN_004a9be0(&local_10);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (iVar11 < 0) {
    for (uVar5 = -iVar11 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_004a9c10(&local_10);
    }
  }
  psVar1 = psVar1 + 2;
  iVar9 = iVar9 + 1;
  psVar7 = psVar1;
  if (0 < iVar9) {
    do {
      param_1 = CONCAT22(uStack_e,local_10);
      param_2 = CONCAT22(uStack_a,uStack_c);
      param_3 = CONCAT13(cStack_5,CONCAT12(local_6,uStack_8));
      FUN_004a9be0(&local_10);
      FUN_004a9be0(&local_10);
      FUN_004a9b70(&local_10,&param_1);
      FUN_004a9be0(&local_10);
      cVar4 = cStack_5 + '0';
      cStack_5 = '\0';
      *(char *)psVar7 = cVar4;
      psVar7 = (short *)((int)psVar7 + 1);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  psVar8 = psVar7 + -1;
  if (*(char *)((int)psVar7 + -1) < '5') {
    if (psVar1 <= psVar8) {
      do {
        if (*(char *)psVar8 != '0') break;
        psVar8 = (short *)((int)psVar8 + -1);
      } while (psVar1 <= psVar8);
      if (psVar1 <= psVar8) goto LAB_004aa0a6;
    }
    *(undefined *)psVar1 = 0x30;
    *param_6 = 0;
    *(undefined *)(param_6 + 1) = 0x20;
    *(undefined *)((int)param_6 + 3) = 1;
    *(undefined *)((int)param_6 + 5) = 0;
    return 1;
  }
  if (psVar1 <= psVar8) {
    do {
      if (*(char *)psVar8 != '9') break;
      *(undefined *)psVar8 = 0x30;
      psVar8 = (short *)((int)psVar8 + -1);
    } while (psVar1 <= psVar8);
    if (psVar1 <= psVar8) {
      *(char *)psVar8 = *(char *)psVar8 + '\x01';
      goto LAB_004aa0a6;
    }
  }
  psVar8 = (short *)((int)psVar8 + 1);
  *param_6 = *param_6 + 1;
  *(char *)psVar8 = *(char *)psVar8 + '\x01';
LAB_004aa0a6:
  cVar4 = ((char)psVar8 - (char)param_6) + -3;
  *(char *)((int)param_6 + 3) = cVar4;
  *(undefined *)((int)param_6 + cVar4 + 4) = 0;
  return 1;
}

