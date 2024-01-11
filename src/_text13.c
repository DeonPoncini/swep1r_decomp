#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0

void FUN_00446a20(short *param_1)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  undefined4 local_4;

  iVar5 = (int)*param_1;
  sVar1 = param_1[1];
  local_18 = *(undefined4 *)(param_1 + 4);
  local_14 = iVar5;
  local_8 = (int)sVar1;
  uVar4 = FUN_00445c90(iVar5);
  local_c = FUN_00445c90((int)sVar1);
  puVar2 = *(undefined2 **)(param_1 + 8);
  local_1c = FUN_00408e60(*(undefined4 *)(puVar2 + 2),local_c * uVar4 * 2);
  iVar7 = (int)param_1[6];
  uVar6 = uVar4;
  local_10 = local_1c;
  iVar3 = local_8;
  while (iVar7 = iVar7 + -1, local_8 = iVar3, -1 < iVar7) {
    puVar2 = (undefined2 *)(*(int *)(param_1 + 8) + iVar7 * 8);
    switch(*(undefined *)((int)param_1 + 5)) {
    case 0:
      uVar6 = 0xf;
      break;
    case 1:
      uVar6 = 7;
      break;
    case 2:
      uVar6 = 3;
      break;
    case 3:
      uVar6 = 1;
    }
    FUN_00445e50((int)*(short *)(*(int *)(param_1 + 8) + iVar7 * 8) + uVar6 & ~uVar6,
                 (int)(short)puVar2[1],uVar4,*(undefined4 *)(puVar2 + 2),local_18,&local_1c);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    iVar5 = local_14;
    iVar3 = local_8;
  }
  FUN_00445cd0(iVar5,iVar3,uVar4,local_c,*(undefined4 *)(puVar2 + 2),&local_4,local_10);
  **(undefined2 **)(param_1 + 8) = (short)iVar5;
  *(short *)(*(int *)(param_1 + 8) + 2) = (short)iVar3;
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = local_4;
  param_1[6] = 1;
  return;
}



void FUN_00446b60(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;

  iVar2 = param_1;
  sVar1 = param_2[1];
  psVar3 = param_2;
  switch(*(undefined *)(param_1 + 5)) {
  case 0:
    psVar3 = (short *)0xf;
    break;
  case 1:
    psVar3 = (short *)0x7;
    break;
  case 2:
    psVar3 = (short *)0x3;
    break;
  case 3:
  case 7:
    psVar3 = (short *)0x1;
  }
  uVar6 = (int)psVar3 + (int)*param_2 & ~(uint)psVar3;
  param_1 = *(undefined4 *)(param_1 + 8);
  uVar4 = FUN_00445c90(uVar6);
  uVar5 = FUN_00445c90((int)sVar1);
  FUN_00445ee0(*(undefined *)(iVar2 + 4),*(undefined *)(iVar2 + 5),uVar6,(int)sVar1,uVar4,uVar5,
               param_2 + 2,&param_1,0,0);
  return;
}



void FUN_00446c20(int *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  uVar1 = *(undefined2 *)((int)param_1 + -0x26);
  if (param_1[-7] != 0) {
    iVar5 = (int)CONCAT11((char)*(undefined2 *)(param_1 + -10),
                          (char)((ushort)*(undefined2 *)(param_1 + -10) >> 8));
    uVar2 = FUN_00445c90(iVar5);
    iVar4 = (int)CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
    uVar3 = FUN_00445c90(iVar4);
    FUN_00445ee0(*(undefined *)(param_1 + -0xb),*(undefined *)((int)param_1 + -0x2b),iVar5,iVar4,
                 uVar2,uVar3,param_1,param_2,1,*(undefined *)(param_1[-7] + 3));
  }
  *(int **)(*param_1 + 10) = param_1 + -0xe;
  return;
}


// sprite load texture
undefined2 * FUN_00446ca0(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  uint local_14;
  uint *local_10;
  short *local_c;
  uint local_8 [2];

  FUN_0042d680(1);
  puVar4 = (undefined2 *)FUN_00445b40();
  FUN_0042d640(1,0,&local_14,4);
  local_14 = (local_14 & 0xff00 | local_14 << 0x10) << 8 |
             (local_14 >> 0x10 | local_14 & 0xff0000) >> 8;
  if ((-1 < param_1) && (param_1 < (int)local_14)) {
    FUN_0042d640(1,param_1 * 4 + 4,local_8,8);
    iVar7 = 2;
    puVar6 = local_8;
    do {
      uVar2 = *puVar6;
      iVar7 = iVar7 + -1;
      *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
      puVar6 = puVar6 + 1;
    } while (iVar7 != 0);
    FUN_0042d640(1,local_8[0],puVar4,0x14);
    *puVar4 = CONCAT11((char)*puVar4,(char)((ushort)*puVar4 >> 8));
    puVar4[1] = CONCAT11((char)puVar4[1],(char)((ushort)puVar4[1] >> 8));
    local_10 = (uint *)(puVar4 + 4);
    psVar8 = puVar4 + 6;
    puVar4[3] = CONCAT11((char)puVar4[3],(char)((ushort)puVar4[3] >> 8));
    uVar2 = *local_10;
    uVar5 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
    puVar6 = (uint *)(puVar4 + 8);
    *local_10 = uVar5;
    *psVar8 = CONCAT11((char)*psVar8,(char)((ushort)*psVar8 >> 8));
    uVar2 = *puVar6;
    puVar4[7] = CONCAT11((char)puVar4[7],(char)((ushort)puVar4[7] >> 8));
    *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
    local_c = psVar8;
    if ((*(char *)(puVar4 + 2) != '\x02') || (puVar11 = puVar4, uVar5 != 0)) {
      puVar11 = puVar4 + 10;
      iVar9 = *psVar8 * 8;
      FUN_0042d640(1,local_8[0] + 0x14,puVar11,iVar9);
      iVar7 = 0;
      *puVar6 = (uint)puVar11;
      if (0 < *psVar8) {
        do {
          uVar1 = *(undefined2 *)(*puVar6 + iVar7 * 8);
          *(ushort *)(*puVar6 + iVar7 * 8) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
          uVar1 = *(undefined2 *)(*puVar6 + 2 + iVar7 * 8);
          *(ushort *)(*puVar6 + 2 + iVar7 * 8) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
          iVar10 = iVar7 * 8;
          uVar2 = *(uint *)(*puVar6 + 4 + iVar7 * 8);
          iVar7 = iVar7 + 1;
          *(uint *)(*puVar6 + 4 + iVar10) =
               (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
          psVar8 = local_c;
        } while (iVar7 < *local_c);
      }
      uVar2 = *local_10;
      if (uVar2 != 0) {
        puVar11 = (undefined2 *)((int)puVar4 + iVar9 + 0x23 & 0xfffffff0);
        iVar9 = *(int *)(*puVar6 + 4) - uVar2;
        FUN_0042d640(1,local_8[0] + uVar2,puVar11,iVar9);
        *local_10 = (uint)puVar11;
      }
      iVar7 = (int)*psVar8;
      iVar10 = 0;
      puVar11 = (undefined2 *)((int)puVar11 + iVar9 + 0xf & 0xfffffff0);
      if (0 < iVar7) {
        do {
          if (iVar10 == iVar7 + -1) {
            iVar9 = local_8[1] - local_8[0];
          }
          else {
            iVar9 = *(int *)(*puVar6 + 0xc + iVar10 * 8);
          }
          iVar7 = iVar10 * 8;
          iVar3 = *(int *)(iVar7 + 4 + *puVar6);
          iVar9 = iVar9 - iVar3;
          FUN_0042d640(1,local_8[0] + iVar3,puVar11,iVar9);
          *(undefined2 **)(iVar7 + 4 + *puVar6) = puVar11;
          if (param_1 != 99) {
            FUN_00446b60(puVar4,iVar7 + *puVar6);
          }
          iVar7 = (int)*local_c;
          puVar11 = (undefined2 *)((int)puVar11 + iVar9 + 0xf & 0xfffffff0);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar7);
      }
      if (param_1 == 99) {
        FUN_00446a20(puVar4);
      }
    }
    FUN_0042d6f0(1);
    FUN_00445b20(puVar11);
    return puVar4;
  }
  return (undefined2 *)0x0;
}



void FUN_00446fb0(undefined4 param_1)

{
  FUN_00446ca0(param_1);
  return;
}



void FUN_00446fc0(int param_1,int *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  uint local_10;
  int local_c;
  uint local_8 [2];

  piVar3 = param_2;
  FUN_0042d680(2);
  FUN_0042d640(2,0,&local_10,4);
  local_10 = (local_10 & 0xff00 | local_10 << 0x10) << 8 |
             (local_10 & 0xff0000 | local_10 >> 0x10) >> 8;
  if ((-1 < param_1) && (param_1 < (int)local_10)) {
    FUN_0042d640(2,param_1 * 4 + 4,local_8,8);
    iVar7 = 2;
    puVar6 = local_8;
    do {
      uVar2 = *puVar6;
      iVar7 = iVar7 + -1;
      *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
      uVar2 = local_8[0];
      puVar6 = puVar6 + 1;
    } while (iVar7 != 0);
    iVar4 = FUN_00445b40();
    iVar10 = local_8[1] - local_8[0];
    local_c = iVar10;
    FUN_0042d640(2,uVar2,iVar4,iVar10);
    iVar7 = FUN_00445b40();
    *param_2 = iVar7;
    iVar5 = FUN_00445b40();
    iVar7 = *param_2;
    param_2 = (int *)0x0;
    *(int *)(iVar7 + 0xc) = iVar5 + 0x10;
    uVar1 = *(undefined2 *)*piVar3;
    *(undefined2 *)*piVar3 = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
    uVar2 = *(uint *)(*piVar3 + 4);
    *(uint *)(*piVar3 + 4) =
         (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
    uVar2 = *(uint *)(*piVar3 + 8);
    *(uint *)(*piVar3 + 8) =
         (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
    puVar8 = *(undefined2 **)(*piVar3 + 0xc);
    if (0 < *(int *)(*piVar3 + 4)) {
      do {
        iVar7 = 2;
        *puVar8 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8));
        puVar8[1] = CONCAT11((char)puVar8[1],(char)((ushort)puVar8[1] >> 8));
        puVar9 = puVar8 + 2;
        do {
          iVar7 = iVar7 + -1;
          *puVar9 = CONCAT11((char)*puVar9,(char)((ushort)*puVar9 >> 8));
          puVar9 = puVar9 + 1;
        } while (iVar7 != 0);
        iVar7 = 4;
        puVar9 = puVar8 + 4;
        do {
          iVar7 = iVar7 + -1;
          *puVar9 = CONCAT11((char)*puVar9,(char)((ushort)*puVar9 >> 8));
          puVar9 = puVar9 + 1;
        } while (iVar7 != 0);
        iVar7 = 3;
        puVar6 = (uint *)(puVar8 + 8);
        do {
          uVar2 = *puVar6;
          iVar7 = iVar7 + -1;
          *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
          puVar6 = puVar6 + 1;
        } while (iVar7 != 0);
        iVar7 = 3;
        puVar6 = (uint *)(puVar8 + 0xe);
        do {
          uVar2 = *puVar6;
          iVar7 = iVar7 + -1;
          *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
          puVar6 = puVar6 + 1;
        } while (iVar7 != 0);
        iVar7 = 3;
        puVar6 = (uint *)(puVar8 + 0x14);
        do {
          uVar2 = *puVar6;
          iVar7 = iVar7 + -1;
          *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
          puVar6 = puVar6 + 1;
        } while (iVar7 != 0);
        iVar7 = 3;
        puVar6 = (uint *)(puVar8 + 0x1a);
        do {
          uVar2 = *puVar6;
          iVar7 = iVar7 + -1;
          *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
          puVar6 = puVar6 + 1;
        } while (iVar7 != 0);
        iVar7 = 8;
        puVar8[0x20] = CONCAT11((char)puVar8[0x20],(char)((ushort)puVar8[0x20] >> 8));
        puVar9 = puVar8 + 0x21;
        do {
          iVar7 = iVar7 + -1;
          *puVar9 = CONCAT11((char)*puVar9,(char)((ushort)*puVar9 >> 8));
          puVar9 = puVar9 + 1;
        } while (iVar7 != 0);
        puVar8 = puVar8 + 0x2a;
        param_2 = (int *)((int)param_2 + 1);
        iVar10 = local_c;
      } while ((int)param_2 < *(int *)(*piVar3 + 4));
    }
    FUN_00445b20(iVar4 + iVar10);
    FUN_0042d6f0(2);
    return;
  }
  *param_2 = 0;
  return;
}



undefined4 FUN_004472e0(undefined4 param_1)

{
  FUN_00446fc0(param_1,&param_1);
  return param_1;
}



void FUN_00447300(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;

  iVar1 = FUN_00445b40();
  iVar2 = FUN_00450ce0(param_1,param_2,iVar1);
  FUN_00450850(param_1);
  FUN_00445b20(iVar1 + iVar2);
  local_4 = 0x4c6f6164;
  FUN_00450c50(param_1,&local_4);
  return;
}



void FUN_00447350(undefined4 param_1)

{
  FUN_00450ce0(param_1,0,0);
  return;
}



void FUN_00447370(int *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar2 = *param_1;
  iVar4 = param_1[2] - iVar2;
  iVar1 = FUN_00445bf0();
  if (iVar1 < iVar4 + 0x80) {
    *param_3 = 0;
    *param_2 = 0;
    DAT_0050c610 = 1;
    return;
  }
  if (param_1[1] != 0) {
    iVar4 = param_1[1] - iVar2;
  }
  iVar2 = FUN_00445b40();
  uVar3 = iVar2 + 0x3fU & 0xffffffc0;
  FUN_0042d640(3,*param_1,uVar3,iVar4);
  *param_2 = uVar3;
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    uVar3 = uVar3 + 0x3f + iVar4;
    iVar4 = param_1[2] - iVar2;
    uVar3 = uVar3 & 0xffffffc0;
    FUN_0042d640(3,iVar2,uVar3,iVar4);
    *param_3 = uVar3;
  }
  FUN_00445b20(uVar3 + iVar4);
  return;
}



void FUN_00447420(void)

{
  int iVar1;
  undefined4 *puVar2;

  FUN_0042d680(3);
  FUN_0042d640(3,0,&DAT_00e9823c,4);
  DAT_00e9823c = (DAT_00e9823c & 0xff00 | DAT_00e9823c << 0x10) << 8 |
                 (DAT_00e9823c >> 0x10 | DAT_00e9823c & 0xff0000) >> 8;
  if (0x6a4 < (int)DAT_00e9823c) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  puVar2 = &DAT_00e93860;
  for (iVar1 = 0x6a4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0042d6f0(3);
  return;
}



void FUN_00447490(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint local_c [3];

  if ((param_1 < 0) || (DAT_00e9823c <= param_1)) {
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    if ((undefined4 *)(&DAT_00e93860)[param_1] != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(&DAT_00e93860)[param_1];
      *param_3 = *(undefined4 *)((&DAT_00e93860)[param_1] + 4);
      return;
    }
    FUN_0042d640(3,param_1 * 8 + 4,local_c,0xc);
    iVar3 = 3;
    puVar2 = local_c;
    do {
      uVar1 = *puVar2;
      iVar3 = iVar3 + -1;
      *puVar2 = (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8;
      puVar2 = puVar2 + 1;
    } while (iVar3 != 0);
    FUN_00447370(local_c,param_2,param_3,1);
    FUN_00446c20(param_2,param_3);
    (&DAT_00e93860)[param_1] = param_2;
    if (param_1 == 0x4e9) {
      DAT_0050c620 = *param_2;
    }
    if (param_1 == 0x4ea) {
      DAT_0050c624 = *param_2;
    }
    if (param_1 == 0x3a8) {
      DAT_0050c618 = *param_2;
    }
    if (param_1 == 0x160) {
      DAT_0050c61c = *param_2;
    }
    if (param_1 == 0x76) {
      FUN_00431df0(*param_2);
      return;
    }
  }
  return;
}



void FUN_004475d0(uint param_1)

{
  uint *puVar1;

  puVar1 = &DAT_00e93860;
  do {
    if (param_1 < *puVar1) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0xe952f0);
  return;
}



undefined4 FUN_004475f0(int param_1)

{
  int iVar1;
  int *piVar2;

  iVar1 = 0;
  if (DAT_0050c628 < 1) {
    return 0;
  }
  piVar2 = &DAT_00e95300;
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < DAT_0050c628);
  return 0;
}



undefined4 FUN_00447630(int param_1)

{
  int iVar1;
  int *piVar2;

  iVar1 = 0;
  if (DAT_0050c62c < 1) {
    return 0;
  }
  piVar2 = &DAT_00e90980;
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < DAT_0050c62c);
  return 0;
}



undefined4 FUN_00447670(int param_1)

{
  int iVar1;
  int *piVar2;

  iVar1 = 0;
  if (DAT_0050c630 < 1) {
    return 0;
  }
  piVar2 = &DAT_00e68280;
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < DAT_0050c630);
  return 0;
}



void FUN_004476b0(uint *param_1)

{
  undefined2 *puVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  uint **ppuVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  ushort uVar9;
  uint *puVar10;
  uint **ppuVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_4;

  if ((((param_1 != (uint *)0x0) && (uVar13 = *param_1, uVar13 != 0x5065)) && (uVar13 != 0x5066)) &&
     (((uVar13 != 0xd064 && (uVar13 != 0xd065)) &&
      ((uVar13 != 0x5064 && ((uVar13 != 0x3064 && (uVar13 != 0xd066)))))))) {
    uVar4 = param_1[1];
    uVar6 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 | (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
    *param_1 = uVar6;
    uVar13 = param_1[2];
    param_1[1] = (uVar4 & 0xff00 | uVar4 << 0x10) << 8 | (uVar4 >> 0x10 | uVar4 & 0xff0000) >> 8;
    param_1[2] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 | (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8
    ;
    *(ushort *)(param_1 + 3) =
         CONCAT11((char)*(undefined2 *)(param_1 + 3),
                  (char)((ushort)*(undefined2 *)(param_1 + 3) >> 8));
    uVar13 = param_1[4];
    *(ushort *)((int)param_1 + 0xe) =
         CONCAT11((char)*(undefined2 *)((int)param_1 + 0xe),
                  (char)((ushort)*(undefined2 *)((int)param_1 + 0xe) >> 8));
    param_1[4] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 | (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8
    ;
    if ((int)uVar6 < 0x5066) {
      if (uVar6 == 0x5065) {
        uVar13 = param_1[7];
        param_1[7] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                     (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
      }
      else if (uVar6 == 0x3064) {
        uVar13 = param_1[5];
        iVar14 = 6;
        param_1[5] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                     (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
        puVar12 = param_1 + 7;
        do {
          uVar13 = *puVar12;
          iVar14 = iVar14 + -1;
          *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                     (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
          puVar12 = puVar12 + 1;
        } while (iVar14 != 0);
        local_4 = 0;
        if (0 < (int)param_1[5]) {
          do {
            ppuVar5 = *(uint ***)(param_1[6] + local_4 * 4);
            if (ppuVar5 != (uint **)0x0) {
              puVar12 = *ppuVar5;
              if ((puVar12 != (uint *)0x0) && (iVar14 = FUN_004475f0(puVar12), iVar14 == 0)) {
                (&DAT_00e95300)[DAT_0050c628] = puVar12;
                DAT_0050c628 = DAT_0050c628 + 1;
                uVar13 = *puVar12;
                puVar10 = (uint *)puVar12[2];
                *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                           (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                *(ushort *)(puVar12 + 1) =
                     CONCAT11((char)*(undefined2 *)(puVar12 + 1),
                              (char)((ushort)*(undefined2 *)(puVar12 + 1) >> 8));
                *(ushort *)((int)puVar12 + 6) =
                     CONCAT11((char)*(undefined2 *)((int)puVar12 + 6),
                              (char)((ushort)*(undefined2 *)((int)puVar12 + 6) >> 8));
                if ((puVar10 != (uint *)0x0) && (iVar14 = FUN_00447630(puVar10), iVar14 == 0)) {
                  (&DAT_00e90980)[DAT_0050c62c] = puVar10;
                  DAT_0050c62c = DAT_0050c62c + 1;
                  uVar13 = *puVar10;
                  *puVar10 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                             (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                  *(ushort *)(puVar10 + 1) =
                       CONCAT11((char)*(undefined2 *)(puVar10 + 1),
                                (char)((ushort)*(undefined2 *)(puVar10 + 1) >> 8));
                  *(ushort *)((int)puVar10 + 6) =
                       CONCAT11((char)*(undefined2 *)((int)puVar10 + 6),
                                (char)((ushort)*(undefined2 *)((int)puVar10 + 6) >> 8));
                  iVar14 = 2;
                  puVar7 = puVar10 + 2;
                  do {
                    iVar14 = iVar14 + -1;
                    *(ushort *)puVar7 =
                         CONCAT11((char)*(undefined2 *)puVar7,
                                  (char)((ushort)*(undefined2 *)puVar7 >> 8));
                    puVar7 = (uint *)((int)puVar7 + 2);
                  } while (iVar14 != 0);
                  *(ushort *)(puVar10 + 4) =
                       CONCAT11((char)*(undefined2 *)(puVar10 + 4),
                                (char)((ushort)*(undefined2 *)(puVar10 + 4) >> 8));
                  *(ushort *)((int)puVar10 + 0x12) =
                       CONCAT11((char)*(undefined2 *)((int)puVar10 + 0x12),
                                (char)((ushort)*(undefined2 *)((int)puVar10 + 0x12) >> 8));
                  *(ushort *)(puVar10 + 5) =
                       CONCAT11((char)*(undefined2 *)(puVar10 + 5),
                                (char)((ushort)*(undefined2 *)(puVar10 + 5) >> 8));
                  *(ushort *)((int)puVar10 + 0x16) =
                       CONCAT11((char)*(undefined2 *)((int)puVar10 + 0x16),
                                (char)((ushort)*(undefined2 *)((int)puVar10 + 0x16) >> 8));
                  *(ushort *)(puVar10 + 6) =
                       CONCAT11((char)*(undefined2 *)(puVar10 + 6),
                                (char)((ushort)*(undefined2 *)(puVar10 + 6) >> 8));
                  *(ushort *)((int)puVar10 + 0x1a) =
                       CONCAT11((char)*(undefined2 *)((int)puVar10 + 0x1a),
                                (char)((ushort)*(undefined2 *)((int)puVar10 + 0x1a) >> 8));
                }
                puVar12 = (uint *)puVar12[3];
                if ((puVar12 != (uint *)0x0) && (iVar14 = FUN_00447670(puVar12), iVar14 == 0)) {
                  (&DAT_00e68280)[DAT_0050c630] = puVar12;
                  DAT_0050c630 = DAT_0050c630 + 1;
                  uVar13 = *puVar12;
                  *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                             (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                  *(ushort *)(puVar12 + 1) =
                       CONCAT11((char)*(undefined2 *)(puVar12 + 1),
                                (char)((ushort)*(undefined2 *)(puVar12 + 1) >> 8));
                  iVar14 = 2;
                  puVar10 = (uint *)((int)puVar12 + 6);
                  do {
                    uVar13 = *puVar10;
                    iVar14 = iVar14 + -1;
                    *puVar10 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                    puVar10 = puVar10 + 1;
                  } while (iVar14 != 0);
                  iVar14 = 2;
                  puVar10 = (uint *)((int)puVar12 + 0xe);
                  do {
                    uVar13 = *puVar10;
                    iVar14 = iVar14 + -1;
                    *puVar10 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                    puVar10 = puVar10 + 1;
                  } while (iVar14 != 0);
                  uVar13 = puVar12[6];
                  uVar4 = puVar12[7];
                  puVar12[6] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                  puVar12[7] = (uVar4 & 0xff00 | uVar4 << 0x10) << 8 |
                               (uVar4 >> 0x10 | uVar4 & 0xff0000) >> 8;
                }
              }
              puVar12 = ppuVar5[1];
              if (puVar12 != (uint *)0x0) {
                puVar10 = (uint *)puVar12[0xf];
                *(ushort *)puVar12 =
                     CONCAT11((char)*(undefined2 *)puVar12,
                              (char)((ushort)*(undefined2 *)puVar12 >> 8));
                *(ushort *)((int)puVar12 + 6) =
                     CONCAT11((char)*(undefined2 *)((int)puVar12 + 6),
                              (char)((ushort)*(undefined2 *)((int)puVar12 + 6) >> 8));
                *(ushort *)(puVar12 + 2) =
                     CONCAT11((char)*(undefined2 *)(puVar12 + 2),
                              (char)((ushort)*(undefined2 *)(puVar12 + 2) >> 8));
                uVar13 = puVar12[5];
                *(ushort *)((int)puVar12 + 10) =
                     CONCAT11((char)*(undefined2 *)((int)puVar12 + 10),
                              (char)((ushort)*(undefined2 *)((int)puVar12 + 10) >> 8));
                uVar4 = puVar12[6];
                puVar12[5] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                             (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                uVar13 = puVar12[7];
                puVar12[6] = (uVar4 & 0xff00 | uVar4 << 0x10) << 8 |
                             (uVar4 >> 0x10 | uVar4 & 0xff0000) >> 8;
                uVar4 = puVar12[8];
                puVar12[7] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                             (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                uVar13 = puVar12[9];
                puVar12[8] = (uVar4 & 0xff00 | uVar4 << 0x10) << 8 |
                             (uVar4 >> 0x10 | uVar4 & 0xff0000) >> 8;
                uVar4 = puVar12[10];
                puVar12[9] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                             (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                uVar13 = puVar12[0xb];
                puVar12[10] = (uVar4 & 0xff00 | uVar4 << 0x10) << 8 |
                              (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8;
                puVar12[0xb] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                *(ushort *)(puVar12 + 0xc) =
                     CONCAT11((char)*(undefined2 *)(puVar12 + 0xc),
                              (char)((ushort)*(undefined2 *)(puVar12 + 0xc) >> 8));
                uVar13 = puVar12[0xd];
                *(ushort *)((int)puVar12 + 0x32) =
                     CONCAT11((char)*(undefined2 *)((int)puVar12 + 0x32),
                              (char)((ushort)*(undefined2 *)((int)puVar12 + 0x32) >> 8));
                uVar4 = puVar12[0xe];
                puVar12[0xd] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                puVar12[0xe] = (uVar4 & 0xff00 | uVar4 << 0x10) << 8 |
                               (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8;
                for (; puVar10 != (uint *)0x0; puVar10 = (uint *)puVar10[10]) {
                  iVar14 = 3;
                  puVar12 = puVar10;
                  do {
                    uVar13 = *puVar12;
                    iVar14 = iVar14 + -1;
                    *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                    puVar12 = puVar12 + 1;
                  } while (iVar14 != 0);
                  iVar14 = 3;
                  puVar12 = puVar10 + 3;
                  do {
                    uVar13 = *puVar12;
                    iVar14 = iVar14 + -1;
                    *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                    puVar12 = puVar12 + 1;
                  } while (iVar14 != 0);
                  uVar13 = puVar10[6];
                  puVar10[6] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                  uVar13 = puVar10[7];
                  puVar10[7] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                  *(ushort *)(puVar10 + 9) =
                       CONCAT11((char)*(undefined2 *)(puVar10 + 9),
                                (char)((ushort)*(undefined2 *)(puVar10 + 9) >> 8));
                  *(ushort *)((int)puVar10 + 0x26) =
                       CONCAT11((char)*(undefined2 *)((int)puVar10 + 0x26),
                                (char)((ushort)*(undefined2 *)((int)puVar10 + 0x26) >> 8));
                }
              }
              iVar14 = 6;
              ppuVar11 = ppuVar5 + 2;
              do {
                puVar12 = *ppuVar11;
                iVar14 = iVar14 + -1;
                *ppuVar11 = (uint *)(((uint)puVar12 & 0xff00 | (int)puVar12 << 0x10) << 8 |
                                    ((uint)puVar12 & 0xff0000 | (uint)puVar12 >> 0x10) >> 8);
                ppuVar11 = ppuVar11 + 1;
              } while (iVar14 != 0);
              sVar2 = CONCAT11((char)*(undefined2 *)(ppuVar5 + 8),
                               (char)((ushort)*(undefined2 *)(ppuVar5 + 8) >> 8));
              *(short *)(ppuVar5 + 8) = sVar2;
              *(ushort *)((int)ppuVar5 + 0x22) =
                   CONCAT11((char)*(undefined2 *)((int)ppuVar5 + 0x22),
                            (char)((ushort)*(undefined2 *)((int)ppuVar5 + 0x22) >> 8));
              if ((ppuVar5[9] != (uint *)0x0) && (iVar14 = 0, 0 < sVar2)) {
                do {
                  puVar12 = ppuVar5[9] + iVar14;
                  uVar13 = ppuVar5[9][iVar14];
                  iVar14 = iVar14 + 1;
                  *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                             (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                } while (iVar14 < *(short *)(ppuVar5 + 8));
              }
              iVar14 = 0;
              if ((ppuVar5[0xb] != (uint *)0x0) && (ppuVar5[10] != (uint *)0x0)) {
                sVar2 = *(short *)((int)ppuVar5 + 0x22);
                iVar8 = 0;
                if (sVar2 == 3) {
                  iVar8 = *(short *)(ppuVar5 + 8) * 3;
                }
                else if (sVar2 == 4) {
                  iVar8 = (int)*(short *)(ppuVar5 + 8) << 2;
                }
                else {
                  if (sVar2 != 5) {
                    do {
                    // WARNING: Do nothing block with infinite loop
                    } while( true );
                  }
                  iVar15 = (int)*(short *)(ppuVar5 + 8);
                  local_4 = 0;
                  if (0 < iVar15) {
                    puVar12 = ppuVar5[9];
                    iVar16 = iVar15;
                    do {
                      uVar13 = *puVar12;
                      puVar12 = puVar12 + 1;
                      iVar16 = iVar16 + -1;
                      iVar8 = iVar8 + 2 + uVar13;
                      local_4 = iVar15;
                    } while (iVar16 != 0);
                  }
                }
                if (0 < iVar8) {
                  do {
                    puVar1 = (undefined2 *)((int)ppuVar5[10] + iVar14 * 2);
                    iVar14 = iVar14 + 1;
                    uVar3 = *puVar1;
                    *puVar1 = CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
                  } while (iVar14 < iVar8);
                }
              }
              uVar9 = *(ushort *)(ppuVar5 + 0xe) << 8 | *(ushort *)(ppuVar5 + 0xe) >> 8;
              *(ushort *)(ppuVar5 + 0xe) = uVar9;
              if (((DAT_00e6b168 == 0) && (ppuVar5[0xb] != (uint *)0x0)) &&
                 (iVar14 = 0, 0 < (short)uVar9 * 3)) {
                do {
                  uVar3 = *(undefined2 *)((int)ppuVar5[0xb] + iVar14 * 2);
                  iVar8 = iVar14 * 2;
                  iVar14 = iVar14 + 1;
                  *(ushort *)((int)ppuVar5[0xb] + iVar8) =
                       CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
                } while (iVar14 < *(short *)(ppuVar5 + 0xe) * 3);
              }
              *(ushort *)((int)ppuVar5 + 0x3a) =
                   CONCAT11((char)*(undefined2 *)((int)ppuVar5 + 0x3a),
                            (char)((ushort)*(undefined2 *)((int)ppuVar5 + 0x3a) >> 8));
              *(ushort *)(ppuVar5 + 0xf) =
                   CONCAT11((char)*(undefined2 *)(ppuVar5 + 0xf),
                            (char)((ushort)*(undefined2 *)(ppuVar5 + 0xf) >> 8));
              *(ushort *)((int)ppuVar5 + 0x3e) =
                   CONCAT11((char)*(undefined2 *)((int)ppuVar5 + 0x3e),
                            (char)((ushort)*(undefined2 *)((int)ppuVar5 + 0x3e) >> 8));
            }
            local_4 = local_4 + 1;
          } while (local_4 < (int)param_1[5]);
        }
      }
    }
    else if ((int)uVar6 < 0xd065) {
      if (uVar6 == 0xd064) {
        iVar14 = 0xc;
        puVar12 = param_1 + 7;
        do {
          uVar13 = *puVar12;
          iVar14 = iVar14 + -1;
          *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                     (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
          puVar12 = puVar12 + 1;
        } while (iVar14 != 0);
      }
      else if (uVar6 == 0x5066) {
        iVar14 = 8;
        puVar12 = param_1 + 7;
        do {
          uVar13 = *puVar12;
          iVar14 = iVar14 + -1;
          *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                     (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
          puVar12 = puVar12 + 1;
        } while (iVar14 != 0);
        iVar14 = 3;
        puVar12 = param_1 + 0xf;
        do {
          uVar13 = *puVar12;
          iVar14 = iVar14 + -1;
          *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                     (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
          puVar12 = puVar12 + 1;
        } while (iVar14 != 0);
      }
    }
    else if (uVar6 == 0xd065) {
      iVar14 = 0xc;
      puVar12 = param_1 + 7;
      do {
        uVar13 = *puVar12;
        iVar14 = iVar14 + -1;
        *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                   (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
        puVar12 = puVar12 + 1;
      } while (iVar14 != 0);
      iVar14 = 3;
      puVar12 = param_1 + 0x13;
      do {
        uVar13 = *puVar12;
        iVar14 = iVar14 + -1;
        *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                   (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
        puVar12 = puVar12 + 1;
      } while (iVar14 != 0);
    }
    else if (uVar6 == 0xd066) {
      *(ushort *)(param_1 + 7) =
           CONCAT11((char)*(undefined2 *)(param_1 + 7),
                    (char)((ushort)*(undefined2 *)(param_1 + 7) >> 8));
      *(ushort *)((int)param_1 + 0x1e) =
           CONCAT11((char)*(undefined2 *)((int)param_1 + 0x1e),
                    (char)((ushort)*(undefined2 *)((int)param_1 + 0x1e) >> 8));
      iVar14 = 3;
      puVar12 = param_1 + 8;
      do {
        uVar13 = *puVar12;
        iVar14 = iVar14 + -1;
        *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                   (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
        puVar12 = puVar12 + 1;
      } while (iVar14 != 0);
    }
    if ((*param_1 & 0x4000) != 0) {
      uVar13 = param_1[5];
      iVar14 = 0;
      uVar13 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 | (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
      param_1[5] = uVar13;
      if (0 < (int)uVar13) {
        do {
          FUN_004476b0(*(undefined4 *)(param_1[6] + iVar14 * 4));
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)param_1[5]);
      }
    }
  }
  return;
}



void FUN_00448180(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  uVar2 = *(uint *)(param_1 + 0xdc);
  iVar7 = 0;
  *(uint *)(param_1 + 0xdc) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar2 = *(uint *)(param_1 + 0xe0);
  *(uint *)(param_1 + 0xe0) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar2 = *(uint *)(param_1 + 0xe4);
  uVar3 = *(uint *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0xe4) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar2 = *(uint *)(param_1 + 0xec);
  *(uint *)(param_1 + 0xe8) =
       (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 >> 0x10 | uVar3 & 0xff0000) >> 8;
  uVar3 = *(uint *)(param_1 + 0xf0);
  *(uint *)(param_1 + 0xec) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar2 = *(uint *)(param_1 + 0xf4);
  *(uint *)(param_1 + 0xf0) =
       (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 >> 0x10 | uVar3 & 0xff0000) >> 8;
  uVar3 = *(uint *)(param_1 + 0xf8);
  *(uint *)(param_1 + 0xf4) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar2 = *(uint *)(param_1 + 0xfc);
  *(uint *)(param_1 + 0xf8) =
       (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 >> 0x10 | uVar3 & 0xff0000) >> 8;
  *(uint *)(param_1 + 0xfc) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar2 = *(uint *)(param_1 + 0x100);
  uVar3 = *(uint *)(param_1 + 0x104);
  *(uint *)(param_1 + 0x100) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar4 = *(uint *)(param_1 + 0x108);
  uVar6 = (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 >> 0x10 | uVar3 & 0xff0000) >> 8;
  *(uint *)(param_1 + 0x104) = uVar6;
  uVar3 = *(uint *)(param_1 + 0x10c);
  *(uint *)(param_1 + 0x108) =
       (uVar4 & 0xff00 | uVar4 << 0x10) << 8 | (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8;
  uVar4 = *(uint *)(param_1 + 0x110);
  *(uint *)(param_1 + 0x10c) =
       (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8;
  uVar3 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x110) =
       (uVar4 & 0xff00 | uVar4 << 0x10) << 8 | (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8;
  uVar4 = *(uint *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x114) =
       (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8;
  uVar3 = *(uint *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x118) =
       (uVar4 & 0xff00 | uVar4 << 0x10) << 8 | (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8;
  *(uint *)(param_1 + 0x128) =
       (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8;
  switch((uVar2 >> 0x10 & 0xf00) >> 8) {
  case 1:
  case 0xb:
  case 0xc:
    iVar7 = 1;
    break;
  case 4:
    iVar7 = 2;
    break;
  case 6:
  case 8:
    iVar7 = 4;
    break;
  case 7:
  case 9:
  case 10:
    iVar7 = 3;
  }
  if ((*(int *)(param_1 + 0x11c) != 0) && (iVar5 = 0, 0 < (int)uVar6)) {
    do {
      iVar1 = iVar5 * 4;
      uVar2 = *(uint *)(*(int *)(param_1 + 0x11c) + iVar5 * 4);
      iVar5 = iVar5 + 1;
      *(uint *)(*(int *)(param_1 + 0x11c) + iVar1) =
           (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
    } while (iVar5 < *(int *)(param_1 + 0x104));
  }
  if (((*(int *)(param_1 + 0x120) != 0) && (iVar7 != 0)) &&
     (iVar5 = 0, 0 < iVar7 * *(int *)(param_1 + 0x104))) {
    do {
      iVar1 = iVar5 * 4;
      uVar2 = *(uint *)(*(int *)(param_1 + 0x120) + iVar5 * 4);
      iVar5 = iVar5 + 1;
      *(uint *)(*(int *)(param_1 + 0x120) + iVar1) =
           (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
    } while (iVar5 < iVar7 * *(int *)(param_1 + 0x104));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004485d0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;

  uVar3 = *param_1;
  puVar5 = param_1 + 1;
  uVar4 = (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 >> 0x10 | uVar3 & 0xff0000) >> 8;
  *param_1 = uVar4;
  DAT_00e6b168 = 0;
  _DAT_00e981e8 = 0;
  uVar3 = *puVar5;
  while (uVar3 != 0xffffffff) {
    if (uVar3 != 0) {
      FUN_004476b0(uVar3);
    }
    puVar6 = puVar5 + 1;
    puVar5 = puVar5 + 1;
    uVar3 = *puVar6;
  }
  uVar3 = puVar5[1];
  puVar6 = puVar5 + 1;
  if (((uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8) ==
      0x44617461) {
    *puVar6 = 0x44617461;
    uVar3 = puVar5[2];
    puVar6 = puVar5 + 3;
    uVar3 = (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8;
    puVar5[2] = uVar3;
    puVar5 = puVar6;
    if (0 < (int)uVar3) {
      do {
        uVar2 = *puVar5;
        puVar6 = puVar5 + 1;
        uVar3 = uVar3 - 1;
        *puVar5 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
        puVar5 = puVar6;
      } while (uVar3 != 0);
    }
  }
  uVar3 = *puVar6;
  if (((uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8) ==
      0x416e696d) {
    *puVar6 = 0x416e696d;
    puVar5 = puVar6 + 1;
    uVar3 = puVar6[1];
    puVar6 = puVar5;
    while (uVar3 != 0) {
      FUN_00448180(uVar3);
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      uVar3 = *puVar1;
    }
    puVar6 = puVar6 + 1;
  }
  uVar3 = *puVar6;
  if (((uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8) ==
      0x416c744e) {
    *puVar6 = 0x416c744e;
    puVar6 = puVar6 + 1;
    if (uVar4 == 0x4d416c74) {
      uVar3 = *puVar6;
      while (uVar3 != 0) {
        FUN_004476b0(uVar3);
        puVar5 = puVar6 + 1;
        puVar6 = puVar6 + 1;
        uVar3 = *puVar5;
      }
    }
  }
  return;
}



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



uint * FUN_00448bd0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;

  iVar3 = *param_1;
  while (iVar3 != -1) {
    piVar4 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar3 = *piVar4;
  }
  piVar4 = param_1 + 1;
  uVar7 = 0xffffffff;
  if (param_1[1] == 0x44617461) {
    piVar4 = param_1 + 3;
    if (0 < param_1[2]) {
      piVar4 = piVar4 + param_1[2];
    }
  }
  if (*piVar4 == 0x416e696d) {
    puVar5 = (uint *)(piVar4 + 1);
    uVar2 = *puVar5;
    puVar6 = puVar5;
    while (uVar2 != 0) {
      FUN_00425900(uVar2);
      if (*puVar6 < uVar7) {
        uVar7 = *puVar6;
      }
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 1;
      uVar2 = *puVar1;
    }
  }
  else {
    puVar5 = (uint *)0x0;
  }
  if (uVar7 != 0xffffffff) {
    DAT_00e98248 = DAT_00e6b164 - uVar7;
    DAT_00e981e0 = DAT_00e981e0 - (DAT_00e6b164 - uVar7);
    return puVar5;
  }
  DAT_00e98248 = 0;
  return puVar5;
}



void FUN_00448c70(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;

  iVar1 = *param_1;
  while (iVar1 != -1) {
    if (*param_2 != 0) {
      *param_1 = *param_2;
    }
    piVar3 = param_1 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar1 = *piVar3;
  }
  piVar3 = param_1 + 1;
  if (param_1[1] == 0x44617461) {
    piVar3 = param_1 + 3;
    if (0 < param_1[2]) {
      piVar3 = piVar3 + param_1[2];
    }
  }
  if (*piVar3 == 0x416e696d) {
    do {
      piVar2 = piVar3;
      piVar3 = piVar2 + 1;
    } while (piVar2[1] != 0);
    piVar3 = piVar2 + 2;
  }
  if ((*piVar3 == 0x416c744e) && (param_2[1] == 0x416c744e)) {
    param_2 = param_2 + 2;
    piVar2 = (int *)piVar3[1];
    while (piVar2 != (int *)0x0) {
      *piVar2 = *param_2;
      FUN_004476b0(*param_2);
      param_2 = param_2 + 1;
      piVar2 = (int *)piVar3[2];
      piVar3 = piVar3 + 1;
    }
  }
  return;
}



void FUN_00448d10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = DAT_00e981e0;
  *param_3 = DAT_00e98240;
  *param_2 = DAT_00e98248;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00448d40(void)

{
  int iVar1;

  iVar1 = FUN_00445b40();
  _DAT_00e34a60 = iVar1 + 0x3fU & 0xffffffc0;
  FUN_00445b20(iVar1 + 0x4b040);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00448d60(void)

{
  int iVar1;

  iVar1 = FUN_00445b40();
  _DAT_00e98238 = iVar1 + 0x3fU & 0xffffffc0;
  _DAT_00e98230 = _DAT_00e98238 + 0x10000;
  FUN_00445b20(iVar1 + 0x10040);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00448d90(void)

{
  int *piVar1;
  undefined4 uVar2;

  if (DAT_004c17e8 < 0) {
    piVar1 = (int *)FUN_00448780(DAT_004c17e0);
    if (-1 < DAT_004c17e4) {
      uVar2 = FUN_00448780(DAT_004c17e4);
      FUN_00448c70(piVar1,uVar2);
    }
    if (*piVar1 != 0) {
      FUN_00431a50(*piVar1,2,3,0x10,2);
    }
    FUN_004831d0(0,8,8,0x138,0xe8);
    FUN_004831d0(1,8,8,0x138,0xe8);
    FUN_00483230(1,0);
    FUN_00483fc0(*piVar1);
    FUN_00448bd0(piVar1);
    return;
  }
  FUN_00431b20(&DAT_00e28980,0x5064);
  _DAT_00e28994 = 2;
  _DAT_00e28998 = &DAT_00e287e0;
  piVar1 = (int *)FUN_00448780(DAT_004c17e0);
  if (-1 < DAT_004c17e4) {
    uVar2 = FUN_00448780(DAT_004c17e4);
    FUN_00448c70(piVar1,uVar2);
  }
  if (*piVar1 != 0) {
    FUN_00431a50(*piVar1,2,3,0x10,2);
  }
  FUN_00448bd0(piVar1);
  DAT_00e287e0 = *piVar1;
  piVar1 = (int *)FUN_00448780(DAT_004c17e8);
  if (*piVar1 != 0) {
    FUN_00431a50(*piVar1,2,3,0x10,2);
  }
  FUN_00448bd0(piVar1);
  _DAT_00e287e4 = *piVar1;
  FUN_004831d0(0,8,8,0x138,0xe8);
  FUN_004831d0(1,8,8,0x138,0xe8);
  FUN_00483230(1,0);
  FUN_00483fc0(&DAT_00e28980);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00448f40(void)

{
  FUN_004270f0(0x42480000,0x43960000);
  FUN_00448d40();
  FUN_00448d60();
  FUN_00445c00();
  if (DAT_004c17e0 == -1) {
    FUN_00447300(0x634d616e,6);
    FUN_00447300(0x4a646765,1);
    FUN_00447300(0x48616e67,1);
  }
  else {
    FUN_00448d90();
  }
  DAT_00e996dc = DAT_00e996dc & 0xfffff7ff;
  FUN_00483a60(0,0,0);
  FUN_0044e0e0(0x3e4,1000,0xff,0xff,0xff,0xff);
  _DAT_0050cb78 = 1;
  DAT_00e996dc = DAT_00e996dc | 1;
  return;
}



void FUN_00449000(void)

{
  FUN_00428740(0xffffff99,0,0,0,0xffffffff);
  FUN_0044e0e0(0x3e4,1000,0xff,0xff,0xff,0xff);
  return;
}



void FUN_00449040(void)

{
  int iVar1;
  undefined4 *puVar2;

  DAT_00e98200 = FUN_0049f270(0x800000);
  DAT_00e981e4 = DAT_00e98200 + 0x800000;
  puVar2 = &DAT_00e98204;
  DAT_00e98234 = DAT_00e98200;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00448f40();
  FUN_00449000();
  FUN_00445b90();
  return;
}



void FUN_00449090(void)

{
  return;
}



void FUN_004490a0(void)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;

  iVar4 = 7;
  FUN_00428830();
  FUN_00428a60(0,1,&DAT_00e99420,0);
  FUN_00428a60(1,1,&DAT_00e99460,0);
  FUN_00428a60(2,1,&DAT_00e994a0,0);
  FUN_00428a60(3,1,&DAT_00e994e0,0);
  FUN_00428a60(4,1,&DAT_00e99520,0);
  FUN_00428a60(5,1,&DAT_00e99560,0);
  FUN_00428a60(6,1,&DAT_00e995a0,0);
  FUN_00428a60(7,1,&DAT_00e995e0,0);
  FUN_00428a60(8,1,&DAT_00e99620,0);
  FUN_00428a60(9,1,&DAT_00e99660,0);
  do {
    sVar3 = (short)iVar4;
    iVar2 = sVar3 + -7;
    iVar1 = FUN_00450b00(0x634d616e);
    if (iVar1 <= iVar2) break;
    iVar2 = FUN_00450aa0(0x634d616e,iVar2);
    FUN_00428a60(iVar4,3,iVar2 + 0x20,0);
    FUN_00428b10(iVar4,iVar2 + 0x108,0);
    FUN_00428aa0(iVar4,0,0,0,0,0,0);
    iVar4 = iVar4 + 1;
    *(int *)(iVar2 + 0x78) = (int)sVar3;
  } while ((short)iVar4 < 0x20);
  FUN_00428bd0(8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004491f0(undefined4 param_1,undefined4 param_2)

{
  FUN_0042d720();
  FUN_00447420();
  thunk_FUN_00449e30();
  if ((DAT_00e996dc & 0x200) == 0) {
    _DAT_00e996ec = (int)(short)param_1;
  }
  FUN_00449040(param_1,param_2);
  FUN_004490a0();
  FUN_004285d0(0xffffff37,0);
  FUN_00426910(&DAT_004c17fc);
  FUN_00480480(0,0xbff00000);
  FUN_004804c0();
  return;
}



void FUN_00449260(void)

{
  *(undefined4 *)(PTR_DAT_004c1cb4 + 4) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00449270(void)

{
  byte *pbVar1;
  byte *pbVar2;
  float fVar3;
  int iVar4;
  int iVar5;

  iVar5 = 0;
  *(float *)(PTR_DAT_004c1cb4 + 0x14) = *(float *)(PTR_DAT_004c1cb4 + 0x14) - (float)_DAT_00e22a40;
  fVar3 = *(float *)(PTR_DAT_004c1cb4 + 0x14);
  while (fVar3 < 0.0) {
    iVar5 = iVar5 + 1;
    *(float *)(PTR_DAT_004c1cb4 + 0x14) =
         *(float *)(PTR_DAT_004c1cb4 + 0x10) + *(float *)(PTR_DAT_004c1cb4 + 0x14);
    fVar3 = *(float *)(PTR_DAT_004c1cb4 + 0x14);
  }
  if (((*(int *)(PTR_DAT_004c1cb4 + 4) != 0) && (0 < iVar5)) &&
     (iVar4 = 0, 0 < *(short *)(PTR_DAT_004c1cb4 + 0x18))) {
    do {
      *(byte *)(*(int *)(PTR_DAT_004c1cb4 + 0x20) + iVar4) =
           (byte)((int)(iVar5 + (uint)*(byte *)(*(int *)(PTR_DAT_004c1cb4 + 0x20) + iVar4)) %
                 (int)*(short *)(PTR_DAT_004c1cb4 + 0xc));
      pbVar1 = (byte *)(*(int *)(PTR_DAT_004c1cb4 + 0x20) + iVar4);
      pbVar2 = (byte *)(*(int *)(PTR_DAT_004c1cb4 + 0x1c) + iVar4);
      iVar4 = iVar4 + 1;
      *(undefined2 *)(*(int *)(PTR_DAT_004c1cb4 + 4) + (uint)*pbVar2 * 2) =
           *(undefined2 *)(*(int *)(PTR_DAT_004c1cb4 + 8) + (uint)*pbVar1 * 2);
    } while (iVar4 < *(short *)(PTR_DAT_004c1cb4 + 0x18));
  }
  return;
}



void FUN_00449330(float *param_1,float *param_2)

{
  int iVar1;
  float10 fVar2;

  *param_1 = *param_2;
  param_1[1] = param_2[1] * 0.001;
  fVar2 = (float10)FUN_00480670(param_2[3]);
  param_1[2] = (float)((float10)1.0 - fVar2 * (float10)0.4761905);
  param_1[3] = (param_2[4] - 450.0) * 0.005;
  fVar2 = (float10)FUN_00480670(param_2[5] * 0.5);
  iVar1 = 7;
  param_1[4] = (float)((float10)8.0 / fVar2 - (float10)1.68);
  param_1[5] = param_2[9] * 0.05;
  param_1[6] = param_2[0xb];
  do {
    if (*param_1 < 0.05) {
      *param_1 = 0.05;
    }
    if (1.0 < *param_1) {
      *param_1 = 1.0;
    }
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void FUN_004493f0(float *param_1,undefined4 param_2,int param_3,float param_4)

{
  float fVar1;

  switch(param_2) {
  case 0:
    if (param_3 == 1) {
      fVar1 = param_4 * 0.05 + *param_1;
      *param_1 = fVar1;
      if (1.0 < fVar1) {
        *param_1 = 1.0;
      }
      if (*param_1 < 0.01) {
        *param_1 = 0.01;
      }
    }
    if (param_3 == 2) {
      fVar1 = param_4 * 0.1 + *param_1;
      *param_1 = fVar1;
      if (1.0 < fVar1) {
        *param_1 = 1.0;
      }
      if (*param_1 < 0.01) {
        *param_1 = 0.01;
      }
    }
    if (param_3 == 3) {
      fVar1 = param_4 * 0.15 + *param_1;
      *param_1 = fVar1;
      if (1.0 < fVar1) {
        *param_1 = 1.0;
      }
      if (*param_1 < 0.01) {
        *param_1 = 0.01;
      }
    }
    if (param_3 == 4) {
      fVar1 = param_4 * 0.2 + *param_1;
      *param_1 = fVar1;
      if (1.0 < fVar1) {
        *param_1 = 1.0;
      }
      if (*param_1 < 0.01) {
        *param_1 = 0.01;
      }
    }
    if (param_3 == 5) {
      fVar1 = param_4 * 0.25 + *param_1;
      *param_1 = fVar1;
      if (1.0 < fVar1) {
        *param_1 = 1.0;
      }
      if (*param_1 < 0.01) {
        *param_1 = 0.01;
        return;
      }
    }
    break;
  case 1:
    if (param_3 == 1) {
      fVar1 = param_4 * 116.0 + param_1[1];
      param_1[1] = fVar1;
      if (1000.0 < fVar1) {
        param_1[1] = 1000.0;
      }
      if (param_1[1] < 50.0) {
        param_1[1] = 50.0;
      }
    }
    if (param_3 == 2) {
      fVar1 = param_4 * 232.0 + param_1[1];
      param_1[1] = fVar1;
      if (1000.0 < fVar1) {
        param_1[1] = 1000.0;
      }
      if (param_1[1] < 50.0) {
        param_1[1] = 50.0;
      }
    }
    if (param_3 == 3) {
      fVar1 = param_4 * 348.0 + param_1[1];
      param_1[1] = fVar1;
      if (1000.0 < fVar1) {
        param_1[1] = 1000.0;
      }
      if (param_1[1] < 50.0) {
        param_1[1] = 50.0;
      }
    }
    if (param_3 == 4) {
      fVar1 = param_4 * 464.0 + param_1[1];
      param_1[1] = fVar1;
      if (1000.0 < fVar1) {
        param_1[1] = 1000.0;
      }
      if (param_1[1] < 50.0) {
        param_1[1] = 50.0;
      }
    }
    if (param_3 == 5) {
      fVar1 = param_4 * 578.0 + param_1[1];
      param_1[1] = fVar1;
      if (1000.0 < fVar1) {
        param_1[1] = 1000.0;
      }
      if (param_1[1] < 50.0) {
        param_1[1] = 50.0;
        return;
      }
    }
    break;
  case 2:
    if (param_3 == 1) {
      fVar1 = ((1.0 - param_4) * 0.14 - -0.86) * param_1[3];
      param_1[3] = fVar1;
      if (5.0 < fVar1) {
        param_1[3] = 5.0;
      }
      if (param_1[3] < 0.1) {
        param_1[3] = 0.1;
      }
    }
    if (param_3 == 2) {
      fVar1 = ((1.0 - param_4) * 0.28 - -0.72) * param_1[3];
      param_1[3] = fVar1;
      if (5.0 < fVar1) {
        param_1[3] = 5.0;
      }
      if (param_1[3] < 0.1) {
        param_1[3] = 0.1;
      }
    }
    if (param_3 == 3) {
      fVar1 = ((1.0 - param_4) * 0.42 - -0.58) * param_1[3];
      param_1[3] = fVar1;
      if (5.0 < fVar1) {
        param_1[3] = 5.0;
      }
      if (param_1[3] < 0.1) {
        param_1[3] = 0.1;
      }
    }
    if (param_3 == 4) {
      fVar1 = ((1.0 - param_4) * 0.56 - -0.44) * param_1[3];
      param_1[3] = fVar1;
      if (5.0 < fVar1) {
        param_1[3] = 5.0;
      }
      if (param_1[3] < 0.1) {
        param_1[3] = 0.1;
      }
    }
    if (param_3 == 5) {
      fVar1 = ((1.0 - param_4) * 0.7 - -0.3) * param_1[3];
      param_1[3] = fVar1;
      if (5.0 < fVar1) {
        param_1[3] = 5.0;
      }
      if (param_1[3] < 0.1) {
        param_1[3] = 0.1;
        return;
      }
    }
    break;
  case 3:
    if (param_3 == 1) {
      fVar1 = param_4 * 40.0 + param_1[4];
      param_1[4] = fVar1;
      if (650.0 < fVar1) {
        param_1[4] = 650.0;
      }
      if (param_1[4] < 450.0) {
        param_1[4] = 450.0;
      }
    }
    if (param_3 == 2) {
      fVar1 = param_4 * 80.0 + param_1[4];
      param_1[4] = fVar1;
      if (650.0 < fVar1) {
        param_1[4] = 650.0;
      }
      if (param_1[4] < 450.0) {
        param_1[4] = 450.0;
      }
    }
    if (param_3 == 3) {
      fVar1 = param_4 * 120.0 + param_1[4];
      param_1[4] = fVar1;
      if (650.0 < fVar1) {
        param_1[4] = 650.0;
      }
      if (param_1[4] < 450.0) {
        param_1[4] = 450.0;
      }
    }
    if (param_3 == 4) {
      fVar1 = param_4 * 160.0 + param_1[4];
      param_1[4] = fVar1;
      if (650.0 < fVar1) {
        param_1[4] = 650.0;
      }
      if (param_1[4] < 450.0) {
        param_1[4] = 450.0;
      }
    }
    if (param_3 == 5) {
      fVar1 = param_4 * 200.0 + param_1[4];
      param_1[4] = fVar1;
      if (650.0 < fVar1) {
        param_1[4] = 650.0;
      }
      if (param_1[4] < 450.0) {
        param_1[4] = 450.0;
        return;
      }
    }
    break;
  case 4:
    if (param_3 == 1) {
      fVar1 = ((1.0 - param_4) * 0.07999998 - -0.92) * param_1[5];
      param_1[5] = fVar1;
      if (1000.0 < fVar1) {
        param_1[5] = 1000.0;
      }
      if (param_1[5] < 1.0) {
        param_1[5] = 1.0;
      }
    }
    if (param_3 == 2) {
      fVar1 = ((1.0 - param_4) * 0.17 - -0.83) * param_1[5];
      param_1[5] = fVar1;
      if (1000.0 < fVar1) {
        param_1[5] = 1000.0;
      }
      if (param_1[5] < 1.0) {
        param_1[5] = 1.0;
      }
    }
    if (param_3 == 3) {
      fVar1 = ((1.0 - param_4) * 0.26 - -0.74) * param_1[5];
      param_1[5] = fVar1;
      if (1000.0 < fVar1) {
        param_1[5] = 1000.0;
      }
      if (param_1[5] < 1.0) {
        param_1[5] = 1.0;
      }
    }
    if (param_3 == 4) {
      fVar1 = ((1.0 - param_4) * 0.35 - -0.65) * param_1[5];
      param_1[5] = fVar1;
      if (1000.0 < fVar1) {
        param_1[5] = 1000.0;
      }
      if (param_1[5] < 1.0) {
        param_1[5] = 1.0;
      }
    }
    if (param_3 == 5) {
      fVar1 = ((1.0 - param_4) * 0.44 - -0.56) * param_1[5];
      param_1[5] = fVar1;
      if (1000.0 < fVar1) {
        param_1[5] = 1000.0;
      }
      if (param_1[5] < 1.0) {
        param_1[5] = 1.0;
        return;
      }
    }
    break;
  case 5:
    if (param_3 == 1) {
      fVar1 = param_4 * 1.6 + param_1[9];
      param_1[9] = fVar1;
      if (20.0 < fVar1) {
        param_1[9] = 20.0;
      }
      if (param_1[9] < 1.0) {
        param_1[9] = 1.0;
      }
    }
    if (param_3 == 2) {
      fVar1 = param_4 * 3.2 + param_1[9];
      param_1[9] = fVar1;
      if (20.0 < fVar1) {
        param_1[9] = 20.0;
      }
      if (param_1[9] < 1.0) {
        param_1[9] = 1.0;
      }
    }
    if (param_3 == 3) {
      fVar1 = param_4 * 4.8 + param_1[9];
      param_1[9] = fVar1;
      if (20.0 < fVar1) {
        param_1[9] = 20.0;
      }
      if (param_1[9] < 1.0) {
        param_1[9] = 1.0;
      }
    }
    if (param_3 == 4) {
      fVar1 = param_4 * 6.4 + param_1[9];
      param_1[9] = fVar1;
      if (20.0 < fVar1) {
        param_1[9] = 20.0;
      }
      if (param_1[9] < 1.0) {
        param_1[9] = 1.0;
      }
    }
    if (param_3 == 5) {
      fVar1 = param_4 * 8.0 + param_1[9];
      param_1[9] = fVar1;
      if (20.0 < fVar1) {
        param_1[9] = 20.0;
      }
      if (param_1[9] < 1.0) {
        param_1[9] = 1.0;
        return;
      }
    }
    break;
  case 6:
    if (param_3 == 1) {
      fVar1 = param_4 * 0.1 + param_1[0xb];
      param_1[0xb] = fVar1;
      if (1.0 < fVar1) {
        param_1[0xb] = 1.0;
      }
      if (param_1[0xb] < 0.0) {
        param_1[0xb] = 0.0;
      }
    }
    if (param_3 == 2) {
      fVar1 = param_4 * 0.2 + param_1[0xb];
      param_1[0xb] = fVar1;
      if (1.0 < fVar1) {
        param_1[0xb] = 1.0;
      }
      if (param_1[0xb] < 0.0) {
        param_1[0xb] = 0.0;
      }
    }
    if (param_3 == 3) {
      fVar1 = param_4 * 0.3 + param_1[0xb];
      param_1[0xb] = fVar1;
      if (1.0 < fVar1) {
        param_1[0xb] = 1.0;
      }
      if (param_1[0xb] < 0.0) {
        param_1[0xb] = 0.0;
      }
    }
    if (param_3 == 4) {
      fVar1 = param_4 * 0.4 + param_1[0xb];
      param_1[0xb] = fVar1;
      if (1.0 < fVar1) {
        param_1[0xb] = 1.0;
      }
      if (param_1[0xb] < 0.0) {
        param_1[0xb] = 0.0;
      }
    }
    if (param_3 == 5) {
      fVar1 = param_4 * 0.45 + param_1[0xb];
      param_1[0xb] = fVar1;
      if (1.0 < fVar1) {
        param_1[0xb] = 1.0;
      }
      if (param_1[0xb] < 0.0) {
        param_1[0xb] = 0.0;
      }
    }
  }
  return;
}



void FUN_00449d00(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = param_1;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar1 = 0;
  do {
    FUN_004493f0(param_1,iVar1,(int)*(char *)(iVar1 + param_3),
                 (float)(uint)(byte)((char *)(iVar1 + param_3))[param_4 - param_3] * 0.003921569);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  return;
}



void FUN_00449d60(void)

{
  FUN_00449ea0();
  DAT_0050c68c = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00449d70(void)

{
  if ((DAT_0050c68c != 0) && (DAT_004eb450 != 0)) {
    _DAT_004c2588 = __ftol();
  }
  return;
}



void FUN_00449da0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;

  if ((DAT_0050c68c != 0) && (DAT_004eb450 != 0)) {
    iVar2 = 0;
    puVar1 = &DAT_00e68078;
    while ((puVar1[-5] != param_1 || (*puVar1 = 0, (int)puVar1[-6] < 0))) {
      puVar1 = puVar1 + 0x11;
      iVar2 = iVar2 + 1;
      if (0xe68297 < (int)puVar1) {
        return;
      }
    }
    FUN_00485070((&DAT_00e68080)[iVar2 * 0x11]);
  }
  return;
}



void FUN_00449e00(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  *(undefined2 *)(param_1 + 7) = 0x40;
  param_1[8] = 0;
  param_1[10] = 0;
  return;
}



void FUN_00449e30(void)

{
  undefined4 *puVar1;

  puVar1 = &DAT_00e68078;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x11;
  } while ((int)puVar1 < 0xe68298);
  return;
}



void FUN_00449e50(void)

{
  int *piVar1;

  if ((DAT_0050c68c != 0) && (DAT_004eb450 != 0)) {
    piVar1 = &DAT_00e68068;
    do {
      piVar1[4] = 0;
      if ((*piVar1 == 0) && (-1 < piVar1[-2])) {
        FUN_00485070(piVar1[6]);
      }
      piVar1 = piVar1 + 0x11;
    } while ((int)piVar1 < 0xe68288);
  }
  return;
}



void FUN_00449ea0(void)

{
  int iVar1;

  iVar1 = 0;
  do {
    FUN_00449e00(&DAT_00e67e40 + iVar1);
    FUN_00449e00((int)&DAT_00e68060 + iVar1);
    *(undefined4 *)((int)&DAT_00e67c40 + iVar1) = 0;
    *(undefined4 *)((int)&DAT_00e67c48 + iVar1) = 0;
    *(undefined4 *)((int)&DAT_00e67c44 + iVar1) = 1;
    iVar1 = iVar1 + 0x44;
  } while (iVar1 < 0x220);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00449ef0(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  bool bVar14;
  float *pfVar15;
  float *pfVar16;
  int local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;

  if (DAT_004eb450 != 0) {
    if (DAT_0050d550 != 0) {
      _DAT_0050c678 = DAT_0050c668;
      _DAT_0050c67c = DAT_0050c66c;
      _DAT_0050c680 = DAT_0050c670;
      FUN_004292b0(&DAT_0050c638);
    }
    bVar14 = DAT_0050c684 != DAT_0050c688;
    if (bVar14) {
      DAT_0050c684 = DAT_0050c688;
    }
    local_30 = (uint)bVar14;
    if (DAT_004eb454 < 1) {
      DAT_004eb454 = 0;
    }
    else {
      DAT_004eb454 = DAT_004eb454 + -1;
    }
    local_38 = 0;
    do {
      iVar9 = local_38 * 0x44;
      piVar10 = (int *)(&DAT_00e67e40 + iVar9);
      if ((((-1 < *(int *)(&DAT_00e67e40 + iVar9)) && (*(int *)(&DAT_00e67e68 + iVar9) == 0)) &&
          (DAT_004eb454 != 0)) &&
         (iVar5 = FUN_00422a90((&DAT_00e67e44)[local_38 * 0x11]),
         *(int *)(iVar5 + 0x48) != (&DAT_00e67e60)[local_38 * 0x11])) {
        FUN_00449e00(piVar10);
      }
      if ((&DAT_00e67c40)[local_38 * 0x11] != 0) {
        local_34 = __ftol();
        *(uint *)(&DAT_00e67c38 + iVar9) = local_34;
        if (0.0 < (double)local_34) {
          FUN_00484d90((&DAT_00e67c40)[local_38 * 0x11],(float)local_34 * 3.051851e-05);
        }
        else {
          FUN_00485070((&DAT_00e67c40)[local_38 * 0x11]);
          if ((&DAT_00e67c44)[local_38 * 0x11] != 0) {
            FUN_004850a0((&DAT_00e67c40)[local_38 * 0x11]);
          }
          (&DAT_00e67c40)[local_38 * 0x11] = 0;
          (&DAT_00e67c44)[local_38 * 0x11] = 1;
        }
      }
      if ((((&DAT_00e68068)[local_38 * 0x11] != 0) &&
          ((&DAT_00e6806c)[local_38 * 0x11] != DAT_00e22a30)) &&
         ((&DAT_00e6806c)[local_38 * 0x11] != DAT_00e22a30 + -1)) {
        iVar5 = __ftol();
        local_28 = (double)CONCAT44(local_28._4_4_,iVar5);
        (&DAT_00e68078)[local_38 * 0x11] = iVar5;
        if ((double)iVar5 <= 0.0) {
          (&DAT_00e68078)[local_38 * 0x11] = 0;
          FUN_00449e00(&DAT_00e68060 + local_38 * 0x11);
        }
      }
      if (*piVar10 != -1) {
        uVar2 = (&DAT_00e67e60)[local_38 * 0x11];
        iVar5 = FUN_004850c0(uVar2,0);
        if (iVar5 == 0) {
          if ((&DAT_00e68060)[local_38 * 0x11] == *piVar10) {
            FUN_00449e00(&DAT_00e68060 + local_38 * 0x11);
          }
          iVar5 = FUN_00422a90((&DAT_00e67e44)[local_38 * 0x11]);
          if (((*(byte *)(iVar5 + 0x24) & 8) == 0) && (*(int *)(&DAT_00e67e68 + iVar9) != 0)) {
            FUN_004850a0(uVar2);
          }
          FUN_00449e00(piVar10);
        }
        else if ((*(int *)(&DAT_00e67e78 + iVar9) != 0) &&
                (uVar7 = FUN_00485040(uVar2), (uVar7 & 0x20) == 0)) {
          FUN_00484e10(uVar2,*(undefined4 *)(&DAT_00e67e78 + iVar9));
          if (DAT_004b6d18 == 0) {
            pfVar16 = (float *)&DAT_0050c690;
          }
          else {
            local_c = 1.0 / (float)_DAT_00e22a40;
            pfVar15 = *(float **)(&DAT_00e67e78 + iVar9);
            pfVar16 = &local_14;
            local_28 = (double)local_c;
            local_14 = (*pfVar15 - *(float *)(&DAT_00e67e6c + iVar9)) * local_c;
            local_10 = (pfVar15[1] - *(float *)(&DAT_00e67e70 + iVar9)) * local_c;
            local_c = (pfVar15[2] - *(float *)(&DAT_00e67e74 + iVar9)) * local_c;
          }
          FUN_00484e40(uVar2,pfVar16);
          *(undefined4 *)(&DAT_00e67e6c + iVar9) = **(undefined4 **)(&DAT_00e67e78 + iVar9);
          *(undefined4 *)(&DAT_00e67e70 + iVar9) =
               *(undefined4 *)(*(int *)(&DAT_00e67e78 + iVar9) + 4);
          uVar2 = *(undefined4 *)(*(int *)(&DAT_00e67e78 + iVar9) + 8);
          *(undefined4 *)(&DAT_00e67e74 + iVar9) = uVar2;
          uVar3 = *(undefined4 *)(&DAT_00e67e70 + iVar9);
          (&DAT_00e6808c)[local_38 * 0x11] = *(undefined4 *)(&DAT_00e67e6c + iVar9);
          (&DAT_00e68090)[local_38 * 0x11] = uVar3;
          (&DAT_00e68094)[local_38 * 0x11] = uVar2;
        }
      }
      iVar5 = *piVar10;
      if ((&DAT_00e68060)[local_38 * 0x11] == iVar5) {
        if (-1 < iVar5) {
          uVar2 = (&DAT_00e67e60)[local_38 * 0x11];
          if ((local_30 != 0) && (DAT_004eb460 != 0)) {
            iVar5 = FUN_00422a90((&DAT_00e67e44)[local_38 * 0x11]);
            local_28 = (double)CONCAT44(local_28._4_4_,iVar5);
            if ((*(byte *)(iVar5 + 0x24) & 8) == 0) {
              local_34 = (uint)(DAT_0050c688 != '\0');
              iVar6 = FUN_00422e30(iVar5,0,&local_34);
              if (local_34 == (DAT_0050c688 != '\0')) {
                piVar12 = (int *)(&DAT_00e67c20 + iVar9);
                for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *piVar12 = *piVar10;
                  piVar10 = piVar10 + 1;
                  piVar12 = piVar12 + 1;
                }
                (&DAT_00e67c44)[local_38 * 0x11] =
                     (uint)((&DAT_00e67c40)[local_38 * 0x11] != *(int *)(iVar5 + 0x48));
                (&DAT_00e68080)[local_38 * 0x11] = iVar6;
                *(uint *)(&DAT_00e68088 + iVar9) = (uint)(iVar6 != *(int *)(iVar5 + 0x48));
                goto LAB_0044a671;
              }
              if (iVar6 != *(int *)(iVar5 + 0x48)) {
                FUN_004850a0(iVar6);
              }
            }
          }
          iVar5 = (&DAT_00e68078)[local_38 * 0x11];
          local_28 = (double)CONCAT44(local_28._4_4_,*(int *)(&DAT_00e67e58 + iVar9));
          if (*(int *)(&DAT_00e67e58 + iVar9) != iVar5) {
            if (*(int *)(&DAT_00e67e48 + iVar9) == 0) {
LAB_0044a394:
              *(int *)(&DAT_00e67e58 + iVar9) = iVar5;
            }
            else if ((*(int *)(&DAT_00e67e4c + iVar9) != DAT_00e22a30) &&
                    (*(int *)(&DAT_00e67e4c + iVar9) != DAT_00e22a30 + -1)) {
              iVar6 = __ftol();
              *(int *)(&DAT_00e67e58 + iVar9) = iVar6;
              if (iVar5 < iVar6) goto LAB_0044a394;
            }
            FUN_00484d90(uVar2,(float)*(int *)(&DAT_00e67e58 + iVar9) * 3.051851e-05);
          }
          if (*(float *)(&DAT_00e67e54 + iVar9) != (float)(&DAT_00e68074)[local_38 * 0x11]) {
            iVar5 = FUN_00422a90((&DAT_00e67e44)[local_38 * 0x11]);
            if (0.05 <= (float)(&DAT_00e68074)[local_38 * 0x11]) {
              fVar1 = (float)(&DAT_00e68074)[local_38 * 0x11];
            }
            else {
              fVar1 = 0.05;
            }
            FUN_00484dd0(uVar2,*(undefined4 *)(iVar5 + 0x2c),fVar1 + fVar1);
            *(undefined4 *)(&DAT_00e67e54 + iVar9) = (&DAT_00e68074)[local_38 * 0x11];
          }
          sVar4 = (&DAT_00e6807c)[local_38 * 0x22];
          if (*(short *)(&DAT_00e67e5c + iVar9) != sVar4) {
            if (sVar4 != -999) {
              local_28 = (double)CONCAT44(local_28._4_4_,(int)sVar4);
              FUN_00484c30(uVar2,((float)(int)sVar4 - 64.0) * 0.015625);
              uVar7 = FUN_00485040(uVar2);
              if ((uVar7 & 0x20) == 0) {
                FUN_00485020(uVar2,0x20);
              }
            }
            sVar4 = (&DAT_00e6807c)[local_38 * 0x22];
            *(short *)(&DAT_00e67e5c + iVar9) = sVar4;
          }
          if ((sVar4 == -999) &&
             (((uVar7 = FUN_00485040(uVar2), (uVar7 & 0x20) != 0 ||
               (*(float *)(&DAT_00e67e6c + iVar9) != (float)(&DAT_00e6808c)[local_38 * 0x11])) ||
              ((*(float *)(&DAT_00e67e70 + iVar9) != (float)(&DAT_00e68090)[local_38 * 0x11] ||
               (*(float *)(&DAT_00e67e74 + iVar9) != (float)(&DAT_00e68094)[local_38 * 0x11])))))) {
            FUN_00485020(uVar2,0);
            pfVar16 = (float *)(&DAT_00e6808c + local_38 * 0x11);
            FUN_00484e10(uVar2,pfVar16);
            if ((&DAT_00e68068)[local_38 * 0x11] != 0) {
              if (DAT_004b6d18 == 0) {
                pfVar15 = (float *)&DAT_0050c690;
              }
              else {
                local_18 = 1.0 / (float)_DAT_00e22a40;
                pfVar15 = &local_20;
                local_28 = (double)local_18;
                local_20 = (*pfVar16 - *(float *)(&DAT_00e67e6c + iVar9)) * local_18;
                local_1c = ((float)(&DAT_00e68090)[local_38 * 0x11] -
                           *(float *)(&DAT_00e67e70 + iVar9)) * local_18;
                local_18 = ((float)(&DAT_00e68094)[local_38 * 0x11] -
                           *(float *)(&DAT_00e67e74 + iVar9)) * local_18;
              }
              FUN_00484e40(uVar2,pfVar15);
            }
            uVar2 = (&DAT_00e68090)[local_38 * 0x11];
            uVar3 = (&DAT_00e68094)[local_38 * 0x11];
            *(float *)(&DAT_00e67e6c + iVar9) = *pfVar16;
            *(undefined4 *)(&DAT_00e67e70 + iVar9) = uVar2;
            *(undefined4 *)(&DAT_00e67e74 + iVar9) = uVar3;
          }
        }
      }
      else if (iVar5 == -1) {
        iVar5 = (&DAT_00e68064)[local_38 * 0x11];
        if ((iVar5 != -1) && ((&DAT_00e68060)[local_38 * 0x11] = iVar5, iVar5 != -1)) {
          if ((DAT_0050c688 == '\0') || (local_2c = 1, DAT_004eb460 == 0)) {
            local_2c = 0;
          }
          iVar5 = FUN_00422a90((&DAT_00e68064)[local_38 * 0x11]);
          local_28 = (double)CONCAT44(local_28._4_4_,iVar5);
          iVar6 = FUN_00422e30(iVar5,(&DAT_00e68068)[local_38 * 0x11],&local_2c);
          (&DAT_00e68080)[local_38 * 0x11] = iVar6;
          *(uint *)(&DAT_00e68088 + iVar9) = (uint)(iVar6 != *(int *)(iVar5 + 0x48));
LAB_0044a671:
          fVar1 = (float)(&DAT_00e68074)[local_38 * 0x11];
          piVar10 = (int *)(&DAT_00e68080)[local_38 * 0x11];
          puVar11 = &DAT_00e68060 + local_38 * 0x11;
          puVar13 = (undefined4 *)(&DAT_00e67e40 + iVar9);
          for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          if (0.05 <= fVar1) {
            fVar1 = (float)(&DAT_00e68074)[local_38 * 0x11];
          }
          else {
            fVar1 = 0.05;
          }
          FUN_00484dd0(piVar10,*(undefined4 *)((int)local_28 + 0x2c),fVar1 + fVar1);
          if ((&DAT_00e68068)[local_38 * 0x11] != 0) {
            iVar6 = __ftol();
            iVar5 = (&DAT_00e68078)[local_38 * 0x11];
            *(int *)(&DAT_00e67e58 + iVar9) = iVar6;
            if (iVar5 < iVar6) {
              *(int *)(&DAT_00e67e58 + iVar9) = iVar5;
            }
          }
          FUN_00484d90(piVar10,(float)*(int *)(&DAT_00e67e58 + iVar9) * 3.051851e-05);
          sVar4 = (&DAT_00e6807c)[local_38 * 0x22];
          if (sVar4 != -999) {
            local_28 = (double)CONCAT44(local_28._4_4_,(int)sVar4);
            FUN_00484c30(piVar10,((float)(int)sVar4 - 64.0) * 0.015625);
          }
          if ((&DAT_00e6807c)[local_38 * 0x22] == -999) {
            FUN_00485020(piVar10,0);
            (**(code **)(*piVar10 + 0xf4))(piVar10,0);
            FUN_00484df0(piVar10,(float)(&DAT_00e680a0)[local_38 * 0x11] * 3.28,
                         (float)(&DAT_00e6809c)[local_38 * 0x11] * 3.28);
            FUN_00484e10(piVar10,&DAT_00e6808c + local_38 * 0x11);
            if ((&DAT_00e68068)[local_38 * 0x11] != 0) {
              FUN_00484e40(piVar10,&DAT_0050c690);
            }
            if ((int)(&DAT_00e68064)[local_38 * 0x11] < DAT_00e9f360) {
              if ((DAT_00e2899c == 0) ||
                 (((iVar9 = *(int *)(DAT_00e2899c + 0x84),
                   (float)(&DAT_00e6808c)[local_38 * 0x11] == *(float *)(iVar9 + 0x50) &&
                   ((float)(&DAT_00e68090)[local_38 * 0x11] == *(float *)(iVar9 + 0x54))) &&
                  ((float)(&DAT_00e68094)[local_38 * 0x11] == *(float *)(iVar9 + 0x58))))) {
                (**(code **)(*piVar10 + 0xb0))(piVar10,0);
              }
              else {
                (**(code **)(*piVar10 + 0xb0))(piVar10,0x3f800000);
              }
            }
            else {
              (**(code **)(*piVar10 + 0xb0))(piVar10,0);
            }
          }
          else {
            FUN_00485020(piVar10,0x20);
          }
          FUN_00484be0(piVar10,(&DAT_00e68068)[local_38 * 0x11]);
        }
      }
      else if (*(int *)(&DAT_00e67e50 + iVar9) != 0) {
        uVar2 = (&DAT_00e67e60)[local_38 * 0x11];
        iVar5 = FUN_00422a90((&DAT_00e67e44)[local_38 * 0x11]);
        if (((*(byte *)(iVar5 + 0x24) & 8) == 0) || (iVar5 = FUN_00423190(iVar5), iVar5 != 0)) {
          FUN_00485070(uVar2);
        }
        *(undefined4 *)(&DAT_00e67e50 + iVar9) = 0;
      }
      local_38 = local_38 + 1;
    } while (local_38 < 8);
    if (DAT_0050d550 != 0) {
      if (DAT_004b6d18 == 0) {
        pfVar16 = (float *)&DAT_0050c690;
      }
      else {
        local_18 = 1.0 / (float)_DAT_00e22a40;
        pfVar16 = &local_20;
        local_28 = (double)local_18;
        local_20 = (DAT_0050c668 - _DAT_0050c678) * local_18;
        local_1c = (DAT_0050c66c - _DAT_0050c67c) * local_18;
        local_18 = (DAT_0050c670 - _DAT_0050c680) * local_18;
      }
      FUN_00484f10(pfVar16);
      FUN_00484f40(&DAT_0050c668,&DAT_0050c648,&DAT_0050c658);
    }
    FUN_00484fa0();
  }
  return;
}



int FUN_0044a930(undefined4 param_1)

{
  int iVar1;

  iVar1 = FUN_00422a90(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(int *)(iVar1 + 0x38) * 0x10624dd3;
}



void FUN_0044a970(int param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  if (param_1 == 0) {
    if (DAT_0050c69c == 0) {
      return;
    }
    if (DAT_0050c6a0 != 0) {
      FUN_00485070(DAT_0050c6a0);
      FUN_004850a0(DAT_0050c6a0);
      DAT_0050c6a0 = 0;
    }
    if (DAT_0050c6a4 == 0) {
      DAT_0050c69c = 0;
      return;
    }
    FUN_00485070(DAT_0050c6a4);
    goto LAB_0044ab93;
  }
  if (DAT_0050c69c != 0) goto LAB_0044aa83;
  DAT_0050c69c = 1;
  if (DAT_0050c6a0 == 0) {
    DAT_0050c6a0 = FUN_00423050(param_3);
    if (DAT_0050c6a0 != 0) {
      FUN_00485020(DAT_0050c6a0,0x20);
      goto LAB_0044a9ca;
    }
LAB_0044aa0a:
    if (DAT_0050c6a0 != 0) {
      FUN_00485070(DAT_0050c6a0);
      FUN_004850a0(DAT_0050c6a0);
      DAT_0050c6a0 = 0;
    }
    if (DAT_0050c6a4 == 0) {
      DAT_0050c69c = 0;
      return;
    }
    FUN_00485070(DAT_0050c6a4);
LAB_0044ab93:
    FUN_004850a0(DAT_0050c6a4);
    DAT_0050c6a4 = 0;
    DAT_0050c69c = 0;
    return;
  }
LAB_0044a9ca:
  if (DAT_0050c6a4 == 0) {
    local_c = 0;
    local_8 = 0;
    local_4 = 0x3f800000;
    DAT_0050c6a4 = FUN_00423050(param_4);
    if (DAT_0050c6a4 == 0) {
      DAT_0050c6a4 = 0;
      goto LAB_0044aa0a;
    }
    FUN_00484e10(DAT_0050c6a4,&local_c);
    FUN_00484fb0(DAT_0050c6a4,0);
    FUN_00484d90(DAT_0050c6a4,0x3f800000);
  }
  FUN_00484fa0();
LAB_0044aa83:
  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  else if (1.0 < param_2) {
    param_2 = 1.0;
  }
  FUN_00484d40(param_2);
  FUN_00484d90(DAT_0050c6a0,0x3f800000);
  iVar1 = FUN_004850c0(DAT_0050c6a0,0);
  if (iVar1 == 0) {
    FUN_00484be0(DAT_0050c6a0,0);
  }
  FUN_00484fa0();
  iVar1 = FUN_004850c0(DAT_0050c6a0,0);
  while (iVar1 != 0) {
    iVar1 = FUN_004850c0(DAT_0050c6a0,0);
  }
  FUN_00485070(DAT_0050c6a4);
  FUN_00484be0(DAT_0050c6a4,0);
  FUN_00484fa0();
  return;
}



undefined4 FUN_0044abc0(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined local_28 [12];
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  uVar2 = 0;
  local_10 = *param_1 - *param_2;
  local_c = param_1[1] - param_2[1];
  local_8 = param_1[2] - param_2[2];
  fVar3 = (float10)FUN_0042f8c0(&local_10);
  local_4 = (float)fVar3;
  if ((float10)0.001 < fVar3) {
    fVar1 = 1.0 / local_4;
    local_1c = *param_2;
    local_18 = param_2[1];
    local_14 = param_2[2];
    local_10 = local_10 * fVar1;
    local_c = local_c * fVar1;
    local_8 = local_8 * fVar1;
    fVar3 = (float10)FUN_00444d10(param_3,&local_1c,local_28,param_4);
    if ((float10)0.0 <= fVar3) {
      uVar2 = 1;
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
    }
  }
  return uVar2;
}



undefined4 FUN_0044acb0(float *param_1,float *param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  local_10 = *param_1 - *param_2;
  local_c = param_1[1] - param_2[1];
  local_8 = param_1[2] - param_2[2];
  uVar2 = 0;
  fVar3 = (float10)FUN_0042f8c0(&local_10);
  local_4 = (float)fVar3;
  if ((float10)0.001 < fVar3) {
    fVar1 = 1.0 / local_4;
    local_1c = *param_2;
    local_18 = param_2[1];
    local_14 = param_2[2];
    local_10 = local_10 * fVar1;
    local_c = local_c * fVar1;
    local_8 = local_8 * fVar1;
    fVar3 = (float10)FUN_00444d10(param_3,&local_1c,&local_38,&local_2c);
    if ((float10)0.0 <= fVar3) {
      uVar2 = 1;
      fVar1 = ((local_24 * local_30 + local_28 * local_34 + local_2c * local_38) -
              (*param_1 * local_2c + local_24 * param_1[2] + local_28 * param_1[1])) - -2.0;
      *param_1 = local_2c * fVar1 + *param_1;
      param_1[1] = local_28 * fVar1 + param_1[1];
      param_1[2] = local_24 * fVar1 + param_1[2];
      *param_4 = local_2c;
      param_4[1] = local_28;
      param_4[2] = local_24;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044ae40(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  float fVar1;

  fVar1 = *param_1;
  if (*param_1 <= param_3) {
    if (fVar1 < 0.0) {
      param_4 = param_4 * 5.0;
    }
    fVar1 = param_4 * (float)_DAT_00e22a40 + *param_1;
    *param_1 = fVar1;
    if (param_3 < fVar1) {
      *param_1 = param_3;
    }
  }
  else {
    if (fVar1 >= 0.0 && fVar1 != 0.0) {
      param_4 = param_4 * 5.0;
    }
    fVar1 = *param_1 - param_4 * (float)_DAT_00e22a40;
    *param_1 = fVar1;
    if (fVar1 < param_3) {
      *param_1 = param_3;
    }
  }
  if ((0.0 < param_5) && (*param_1 < 0.0)) {
    *param_1 = 0.0;
  }
  if ((param_5 < 0.0) && (0.0 < *param_1)) {
    *param_1 = 0.0;
  }
  fVar1 = (*param_1 + param_6 + param_5) * (float)_DAT_00e22a40 + *param_2;
  *param_2 = fVar1;
  if (180.0 < fVar1) {
    *param_2 = fVar1 - 360.0;
  }
  if (*param_2 < -180.0) {
    *param_2 = *param_2 - -360.0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044af50(float *param_1,float param_2,undefined4 param_3,float param_4,float param_5)

{
  param_5 = -(param_2 / param_4) * param_5;
  if (80.0 < param_5) {
    param_5 = 80.0;
  }
  if (param_5 < -80.0) {
    param_5 = -80.0;
  }
  *param_1 = *param_1 - (param_5 - *param_1) * (float)_DAT_00e22a40 * -5.0;
  return;
}



void FUN_0044afb0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined local_80 [16];
  undefined local_70 [32];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined local_40 [52];
  undefined4 local_c;

  if (param_1 == (int *)0x0) {
    FUN_0042f7b0(param_2,0,0,0);
    return;
  }
  iVar1 = param_1[1];
  if (*param_1 == 0) {
    FUN_0042f7b0(param_2,0,0,0);
    return;
  }
  FUN_004316a0(*param_1,local_80);
  *param_2 = local_50;
  param_2[1] = local_4c;
  param_2[2] = local_48;
  if (iVar1 != 0) {
    FUN_004316a0(iVar1,local_40);
    FUN_0042fa80(param_2,param_2,local_c,local_70);
  }
  return;
}



void FUN_0044b180(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined local_c0 [16];
  undefined local_b0 [32];
  undefined local_90 [16];
  undefined local_80 [16];
  undefined local_70 [32];
  undefined local_50 [16];
  undefined local_40 [52];
  float local_c;

  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 != 0) {
      FUN_00431020(local_c0,param_3,0,0);
      FUN_00431450(local_c0,param_2,param_2,param_2,local_c0);
      FUN_004316a0(iVar1,local_80);
      FUN_0042f7d0(local_90,local_50);
      if (iVar2 != 0) {
        FUN_004316a0(iVar2,local_40);
        FUN_0042fa80(local_90,local_90,local_c,local_70);
        FUN_0042fa80(local_90,local_90,-local_c,local_b0);
      }
      FUN_00431640(iVar1,local_c0);
    }
  }
  return;
}



void FUN_0044b270(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined local_c0 [16];
  undefined local_b0 [32];
  undefined local_90 [16];
  undefined local_80 [64];
  undefined local_40 [52];
  float local_c;

  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 != 0) {
      FUN_004316a0(iVar1,local_80);
      FUN_0044bb10(local_c0,local_80);
      FUN_0042f7d0(local_90,param_2);
      if (iVar2 == 0) {
        FUN_00431640(iVar1,local_c0);
        return;
      }
      FUN_004316a0(iVar2,local_40);
      FUN_0042fa80(local_90,local_90,-local_c,local_b0);
      FUN_00431640(iVar1,local_c0);
    }
  }
  return;
}



void FUN_0044b330(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;

  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    while (iVar2 != 0) {
      FUN_00426880(iVar2,param_2);
      piVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      iVar2 = *piVar1;
    }
  }
  return;
}

#endif
