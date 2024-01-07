#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0

void FUN_004744b0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined local_30 [4];
  undefined local_2c [4];
  undefined local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  iVar3 = param_3;
  if (param_3 == 0) {
    iVar4 = __ftol();
    *(float *)(param_1 + 0xb4) = (float)-iVar4 * 0.1;
    if (1.0 <= (float)-iVar4 * 0.1) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      FUN_0044eaa0(*(undefined4 *)(param_1 + 0xac),1,(undefined4 *)(param_1 + 0xac));
    }
  }
  local_10 = 0;
  local_c = 0;
  local_8 = 0xbf800000;
  local_4 = 0x459c4000;
  iVar4 = param_3;
  do {
    bVar1 = true;
    if (iVar4 == 0) {
      iVar5 = FUN_0047f890(param_1 + 0xac);
    }
    else {
      local_1c = *(undefined4 *)(param_2 + 0x30);
      local_18 = *(undefined4 *)(param_2 + 0x34);
      local_14 = *(undefined4 *)(param_2 + 0x38);
      iVar5 = FUN_00444e40(*(undefined4 *)(param_1 + 0x13c),&local_1c);
    }
    if ((iVar5 == 0) ||
       ((iVar5 = FUN_004318b0(iVar5), iVar5 != 0 && ((*(uint *)(iVar5 + 0x2c) & 0x16000) != 0)))) {
      bVar1 = false;
    }
    if (bVar1) {
      iVar5 = FUN_00450e70(0x54657374,param_2 + 0x30,0x44610000,param_1,1,local_2c,local_28,local_30
                          );
      if (0 < iVar5) {
        bVar1 = false;
      }
      if (!bVar1) goto LAB_004745e9;
      if ((iVar4 == 0) && (iVar3 != 0)) {
        iVar4 = 1;
        *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) - 0.09;
        FUN_0044ed80(param_1 + 0xac,param_2);
        bVar1 = false;
      }
    }
    else {
LAB_004745e9:
      if (param_3 == 0) {
        if (iVar4 == 0) {
          fVar2 = -0.1;
        }
        else {
          fVar2 = -0.04;
        }
        *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) - fVar2;
      }
      else {
        param_3 = 0;
        iVar5 = __ftol();
        iVar4 = 0;
        *(float *)(param_1 + 0xb4) = (float)-iVar5 * 0.1;
      }
      FUN_0044ed80(param_1 + 0xac,param_2);
    }
    if (bVar1) {
      return;
    }
  } while( true );
}



void FUN_004746b0(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined local_80 [64];
  undefined local_40 [64];

  if ((*(uint *)(param_1 + 0x60) & 0x4000) == 0) {
    local_88 = *(undefined4 *)(param_1 + 0x54);
    local_84 = *(undefined4 *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x4000;
    local_8c = *(undefined4 *)(param_1 + 0x50);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffe7fff;
    FUN_0044eeb0(param_1 + 0xac,local_80,0x3ba3d70a);
    FUN_004744b0(param_1,local_80,0);
    FUN_00473f40(param_1,0);
    FUN_0044eeb0(param_1 + 0xac,local_40,0xbc23d70a);
    FUN_0046a5f0(3,0,0x40000000,&local_8c,0x3f800000);
    FUN_0046a5f0(3,0,0x400ccccd,&local_8c,0x40400000);
    if (*(int *)(param_1 + 0x344) == 0) {
      puVar4 = &local_8c;
    }
    else if ((*(uint *)(param_1 + 100) & 0x10000) == 0) {
      if ((*(uint *)(param_1 + 100) & 0x8000) == 0) {
        iVar1 = FUN_004816b0();
        if (0.5 <= (float)iVar1 * 4.656613e-10) {
          puVar4 = (undefined4 *)(param_1 + 0x400);
        }
        else {
          puVar4 = (undefined4 *)(param_1 + 0x3c0);
        }
      }
      else {
        puVar4 = (undefined4 *)(param_1 + 0x400);
      }
    }
    else {
      puVar4 = (undefined4 *)(param_1 + 0x3c0);
    }
    FUN_0046e950(param_1,0xffffffff,puVar4,0x3e4ccccd);
    iVar1 = FUN_004816b0();
    if (0.33 <= (float)iVar1 * 4.656613e-10) {
      uVar3 = 0x35;
      if (0.66 <= (float)iVar1 * 4.656613e-10) {
        uVar3 = 0x36;
      }
    }
    else {
      uVar3 = 0x34;
    }
    iVar1 = FUN_004816b0();
    FUN_00426d10(uVar3,7,(float)iVar1 * 4.656613e-10 * 0.2 - -0.1,0x3f800000,&local_8c,0,0,
                 0x41200000,0x43fa0000);
    iVar1 = FUN_004816b0();
    if (0.33 <= (float)iVar1 * 4.656613e-10) {
      uVar3 = 0x35;
      if (0.66 <= (float)iVar1 * 4.656613e-10) {
        uVar3 = 0x36;
      }
    }
    else {
      uVar3 = 0x34;
    }
    iVar1 = FUN_004816b0();
    FUN_00426d10(uVar3,7,(float)iVar1 * 4.656613e-10 * 0.2 - -0.1,0x3f800000,&local_8c,0,0,
                 0x41200000,0x43fa0000);
    pfVar2 = (float *)(param_1 + 0x288);
    iVar1 = 6;
    do {
      pfVar2[6] = (float)((uint)pfVar2[6] & 0xfffffff7);
      if (0.1 < *pfVar2) {
        *pfVar2 = 0.1;
      }
      pfVar2 = pfVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((*(uint *)(param_1 + 0x60) & 0x100) != 0) {
      *(undefined4 *)(param_1 + 0x30c) = 0x3f800000;
      return;
    }
    *(undefined4 *)(param_1 + 0x30c) = 0x40a00000;
  }
  return;
}



void FUN_00474970(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 *local_b4;
  undefined *local_b0;
  undefined *local_ac;
  undefined local_80 [48];
  undefined local_50 [16];
  undefined local_40 [48];
  undefined local_10 [16];

  uVar1 = *(uint *)(param_1 + 0x60);
  if (((uVar1 & 0x80) != 0) && ((*(uint *)(param_1 + 100) & 0x4000000) == 0)) {
    FUN_004746b0(param_1,param_2);
    return;
  }
  if ((uVar1 & 0x4000) == 0) {
    local_c8 = *(undefined4 *)(param_1 + 0x54);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffe7fff;
    local_cc = *(undefined4 *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x60) = uVar1 & 0xff7fffff | 0x4000;
    local_c4 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x30c) = 0x41200000;
    FUN_0044eeb0(param_1 + 0xac,local_80,0);
    FUN_004744b0(param_1,local_80,1);
    FUN_00473f40(param_1,0);
    FUN_0044eeb0(param_1 + 0xac,local_40,0xbc23d70a);
    local_b4 = &local_cc;
    local_b0 = local_50;
    local_ac = local_10;
    local_c0 = 0x44657468;
    local_bc = param_1;
    local_b8 = 0;
    FUN_00450c50(0x634d616e,&local_c0);
    FUN_0046a5f0(3,0,0x404ccccd,&local_cc,0x40400000);
    if (*(int *)(param_1 + 0x344) == 0) {
      puVar5 = &local_cc;
    }
    else if ((*(uint *)(param_1 + 100) & 0x10000) == 0) {
      if ((*(uint *)(param_1 + 100) & 0x8000) == 0) {
        iVar2 = FUN_004816b0();
        if (0.5 <= (float)iVar2 * 4.656613e-10) {
          puVar5 = (undefined4 *)(param_1 + 0x400);
        }
        else {
          puVar5 = (undefined4 *)(param_1 + 0x3c0);
        }
      }
      else {
        puVar5 = (undefined4 *)(param_1 + 0x400);
      }
    }
    else {
      puVar5 = (undefined4 *)(param_1 + 0x3c0);
    }
    FUN_0046e950(param_1,0xffffffff,puVar5,0x3e4ccccd);
    iVar2 = FUN_004816b0();
    if (0.33 <= (float)iVar2 * 4.656613e-10) {
      uVar4 = 0x35;
      if (0.66 <= (float)iVar2 * 4.656613e-10) {
        uVar4 = 0x36;
      }
    }
    else {
      uVar4 = 0x34;
    }
    iVar2 = FUN_004816b0();
    FUN_00426d10(uVar4,7,(float)iVar2 * 4.656613e-10 * 0.2 - -0.1,0x3f800000,&local_cc,0,0,
                 0x41200000,0x43fa0000);
    iVar2 = FUN_004816b0();
    if (0.33 <= (float)iVar2 * 4.656613e-10) {
      uVar4 = 0x35;
      if (0.66 <= (float)iVar2 * 4.656613e-10) {
        uVar4 = 0x36;
      }
    }
    else {
      uVar4 = 0x34;
    }
    iVar2 = FUN_004816b0();
    FUN_00426d10(uVar4,7,(float)iVar2 * 4.656613e-10 * 0.2 - -0.1,0x3f800000,&local_cc,0,0,
                 0x41200000,0x43fa0000);
    pfVar3 = (float *)(param_1 + 0x288);
    iVar2 = 6;
    do {
      pfVar3[6] = (float)((uint)pfVar3[6] & 0xfffffff7);
      if (0.1 < *pfVar3) {
        *pfVar3 = 0.1;
      }
      pfVar3 = pfVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
      FUN_0040a120(0);
      FUN_00409ee0(0x1b,0xffffffff,0xffffffff,0xffffffff,0);
      if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
        FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),0xe,0xe,0xe,0xe,0xe,
                     (undefined4 *)(param_1 + 0x50));
        FUN_004276a0((int)*(char *)(*(int *)(param_1 + 0x1e70) + 0x10),0xf0000);
      }
    }
  }
  return;
}



void FUN_00474cd0(int param_1,int param_2,float param_3)

{
  float fVar1;

  if (DAT_0050ca28 == 0) {
    if (((*(uint *)(param_1 + 0x60) & 0x6000) == 0) && ((*(uint *)(param_1 + 100) & 0x2000000) == 0)
       ) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
      fVar1 = *(float *)(param_1 + 0xa0) * param_3 + *(float *)(param_1 + 0x288 + param_2 * 4);
      *(float *)(param_1 + 0x288 + param_2 * 4) = fVar1;
      if (1.0 < fVar1) {
        *(undefined4 *)(param_1 + 0x288 + param_2 * 4) = 0x3f800000;
      }
      *(uint *)(param_1 + 0x2a0 + param_2 * 4) = *(uint *)(param_1 + 0x2a0 + param_2 * 4) | 1;
      if (*(float *)(param_1 + 0x270 + param_2 * 4) < *(float *)(param_1 + 0x288 + param_2 * 4)) {
        *(undefined4 *)(param_1 + 0x270 + param_2 * 4) =
             *(undefined4 *)(param_1 + 0x288 + param_2 * 4);
      }
      *(float *)(param_1 + 0x2c4) = param_3 + *(float *)(param_1 + 0x2c4);
    }
  }
  return;
}



undefined4 FUN_00474d80(float param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_20;
  uint local_18 [6];

  iVar8 = (int)param_1;
  iVar6 = *param_2;
  local_20 = 0xffffffff;
  if (iVar6 < 0x46726566) {
    if (iVar6 == 0x46726565) {
      return 1;
    }
    if (iVar6 != 0x416c6f63) {
      return 0;
    }
    return 1;
  }
  if (0x48697474 < iVar6) {
    if (iVar6 < 0x5165727a) {
      if (iVar6 != 0x51657279) {
        if (iVar6 != 0x4c6f6164) {
          return 0;
        }
        FUN_00450e30(param_1);
        return 1;
      }
      piVar10 = param_2 + 1;
      if (param_2[1] == 0x51657279) {
        return 1;
      }
      do {
        piVar3 = (int *)piVar10[1];
        if ((*piVar10 == 0x3173743f) && (*(short *)(*(int *)((int)param_1 + 0x1e70) + 0x5c) == 1)) {
          *piVar3 = (int)param_1;
        }
        if ((*piVar10 == 0x326e643f) && (*(short *)(*(int *)((int)param_1 + 0x1e70) + 0x5c) == 2)) {
          *piVar3 = (int)param_1;
        }
        if ((*piVar10 == 0x3372643f) && (*(short *)(*(int *)((int)param_1 + 0x1e70) + 0x5c) == 3)) {
          *piVar3 = (int)param_1;
        }
        if (*piVar10 == 0x43616d50) {
          FUN_00473e40(piVar10[1],param_1);
        }
        piVar3 = piVar10 + 2;
        piVar10 = piVar10 + 2;
      } while (*piVar3 != 0x51657279);
      return 1;
    }
    if (iVar6 < 0x526d436f) {
      if (iVar6 != 0x526d436e) {
        if (iVar6 != 0x52536574) {
          return 0;
        }
        FUN_00450e30(param_1);
        return 1;
      }
      if ((*(byte *)((int)param_1 + 0x60) & 0x40) == 0) {
        return 1;
      }
      if (*(int *)((int)param_1 + 0x1eb4) != param_2[1]) {
        return 1;
      }
      *(undefined4 *)((int)param_1 + 0x1eb8) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)((int)param_1 + 0x1ebc) = *(undefined4 *)(param_3 + 0xc);
      *(int *)((int)param_1 + 0x1ec0) = param_2[4];
      return 1;
    }
    if (iVar6 < 0x526d4c64) {
      if (iVar6 == 0x526d4c63) {
        if ((*(byte *)((int)param_1 + 0x60) & 0x40) == 0) {
          return 1;
        }
        if (*(int *)((int)param_1 + 0x1eb4) != param_2[1]) {
          return 1;
        }
        puVar11 = (undefined4 *)(param_3 + 8);
        puVar13 = (undefined4 *)((int)param_1 + 0x1ecc);
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        return 1;
      }
      if (iVar6 != 0x526d4869) {
        return 0;
      }
      if ((*(byte *)((int)param_1 + 0x60) & 0x40) == 0) {
        return 1;
      }
      if (-1 < *(int *)((int)param_1 + 0x1eb4)) {
        return 1;
      }
      *(int *)((int)param_1 + 0x1eb4) = param_2[1];
      *(undefined4 *)((int)param_1 + 0x1ebc) = 0;
      *(undefined4 *)((int)param_1 + 0x1eb8) = 0;
      *(undefined4 *)((int)param_1 + 0x1ec0) = 0;
      puVar11 = (undefined4 *)((int)param_1 + 8);
      puVar13 = (undefined4 *)((int)param_1 + 0x1ecc);
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      return 2;
    }
    if (iVar6 == 0x526d5468) {
      if ((*(byte *)((int)param_1 + 0x60) & 0x40) == 0) {
        return 1;
      }
      if (*(int *)((int)param_1 + 0x1eb4) != param_2[1]) {
        return 1;
      }
      *(undefined4 *)((int)param_1 + 0x1ec8) = *(undefined4 *)(param_3 + 0xc);
      return 1;
    }
    if (iVar6 != 0x536e6170) {
      if (iVar6 != 0x734c4f44) {
        return 0;
      }
      iVar6 = *(int *)((int)param_1 + 0x344);
      if (iVar6 == 0) {
        return 1;
      }
      if ((*(byte *)((int)param_1 + 0x60) & 0x20) != 0) {
        iVar8 = param_2[1] * 0x20;
        FUN_00481b30(*(undefined4 *)(iVar6 + 0x14),&DAT_004c7ab8 + iVar8);
        puVar1 = &DAT_004c7abc + iVar8;
        FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 4),puVar1);
        FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 8),puVar1);
        FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 0xc),puVar1);
        FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 0x10),puVar1);
        return 1;
      }
      iVar8 = param_2[1] * 0x20;
      FUN_00481b30(*(undefined4 *)(iVar6 + 0x14),&DAT_004c7b38 + iVar8);
      puVar1 = &DAT_004c7b3c + iVar8;
      FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 4),puVar1);
      FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 8),puVar1);
      FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 0xc),puVar1);
      FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 0x10),puVar1);
      return 1;
    }
    iVar6 = param_2[1];
    if (iVar6 < 0) {
      FUN_00473f40(param_1,0xbdcccccd);
      return 1;
    }
    if (0 < iVar6) {
      if (1 < iVar6) {
        FUN_00473f40(param_1,0x3c23d70a);
        return 1;
      }
      FUN_00473f40(param_1,0x3dcccccd);
      return 1;
    }
    FUN_00473f40(param_1,0);
    return 1;
  }
  if (iVar6 != 0x48697474) {
    if (iVar6 != 0x476f2121) {
      return 0;
    }
    *(uint *)((int)param_1 + 0x60) = *(uint *)((int)param_1 + 0x60) & 0xfffffff2 | 2;
    return 1;
  }
  if (*(int *)((int)param_1 + 0x1e70) == 0) {
    return 1;
  }
  iVar6 = param_2[1];
  fVar2 = *(float *)(param_3 + 8);
  if ((*(uint *)((int)param_1 + 0x60) & 0x40000000) != 0) {
    fVar2 = fVar2 * 4.0;
  }
  fVar2 = fVar2 * 0.0005;
  if ((*(uint *)((int)param_1 + 0x60) & 0x20) != 0) {
    (&DAT_004c7ab0)[DAT_0050cb38] = (char)iVar6;
    *(float *)(&DAT_0050cb18 + DAT_0050cb38 * 4) = fVar2;
    DAT_0050cb38 = DAT_0050cb38 + 1;
    if (7 < DAT_0050cb38) {
      DAT_0050cb38 = 0;
    }
  }
  if (iVar6 < 0x426f746e) {
    if (iVar6 != 0x426f746d) {
      if (iVar6 != 0x42697473) {
        return 1;
      }
      *(undefined4 *)((int)param_1 + 0x324) = 0xffffffff;
      return 1;
    }
    param_1 = (float)__ftol();
    if (6 < (int)param_1) {
      param_1 = 8.407791e-45;
    }
    if ((int)param_1 < 1) {
      param_1 = 1.401298e-45;
    }
    *(undefined4 *)(iVar8 + 0x2b8) = 0x3f800000;
    if (0 < (int)param_1) {
      fVar4 = (float)(int)param_1;
      do {
        uVar5 = FUN_004816b0();
        FUN_00474cd0(iVar8,uVar5 % 6,fVar2 / fVar4);
        param_1 = (float)((int)param_1 + -1);
      } while (param_1 != 0.0);
    }
    if (500.0 <= (double)*(int *)(iVar8 + 0x1998)) {
      return 1;
    }
    iVar6 = FUN_004816b0();
    param_1 = *(float *)(iVar8 + 0x1a0) * 0.002 - -0.75;
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
    if ((*(byte *)(iVar8 + 0x60) & 0x20) == 0) {
      uVar14 = 0;
    }
    else {
      FUN_00409ee0(0x13,0xffffffff,0xffffffff,0xffffffff,0);
      uVar14 = DAT_004c7aa8;
    }
    FUN_00426d10(0x37,6,(float)iVar6 * 4.656613e-10 * 0.3 - -0.1,param_1,iVar8 + 0x50,0,uVar14,
                 0x41200000,0x43480000);
    if ((*(byte *)(iVar8 + 0x60) & 0x20) == 0) {
      return 1;
    }
    iVar6 = FUN_004816b0();
    if (0.15 <= (float)iVar6 * 4.656613e-10) {
      return 1;
    }
    uVar18 = 8;
    uVar17 = 8;
    uVar16 = 7;
    uVar15 = 7;
    uVar14 = 7;
  }
  else {
    if (iVar6 < 0x4c744675) {
      if (iVar6 == 0x4c744674) goto LAB_0047537d;
      if (iVar6 != 0x4b506f77) {
        return 1;
      }
      iVar9 = 1;
      *(undefined4 *)((int)param_1 + 0x2b8) = 0x3f800000;
      param_1 = 1.401298e-45;
      local_18[0] = 3;
      iVar6 = FUN_004816b0();
      if ((float)iVar6 * 4.656613e-10 < 0.5) {
        iVar9 = 2;
        local_18[1] = 0;
        param_1 = 2.802597e-45;
      }
      iVar6 = FUN_004816b0();
      if ((float)iVar6 * 4.656613e-10 < 0.25) {
        local_18[iVar9] = 4;
        iVar9 = iVar9 + 1;
        param_1 = (float)iVar9;
      }
      iVar6 = FUN_004816b0();
      if ((float)iVar6 * 4.656613e-10 < 0.25) {
        local_18[iVar9] = 1;
        iVar9 = iVar9 + 1;
        param_1 = (float)iVar9;
      }
      if (iVar9 != 0) {
        puVar12 = local_18;
        do {
          FUN_00474cd0(iVar8,*puVar12,fVar2 / (float)(int)param_1);
          puVar12 = puVar12 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (500.0 <= (double)*(int *)(iVar8 + 0x1998)) {
        return 1;
      }
      iVar6 = FUN_004816b0();
      param_1 = *(float *)(iVar8 + 0x1a0) * 0.002 - -0.75;
      if (1.0 < param_1) {
        param_1 = 1.0;
      }
      if ((*(byte *)(iVar8 + 0x60) & 0x20) == 0) {
        uVar14 = 0;
      }
      else {
        FUN_00409ee0(0x14,0xffffffff,0,0xffffffff,0);
        uVar14 = DAT_004c7aa8;
      }
      FUN_00426d10(0x37,6,(float)iVar6 * 4.656613e-10 * 0.3 - -0.1,param_1,iVar8 + 0x50,0,uVar14,
                   0x41200000,0x43480000);
      if ((*(byte *)(iVar8 + 0x60) & 0x20) == 0) {
        return 1;
      }
      iVar6 = FUN_004816b0();
    }
    else {
      if (iVar6 < 0x52744675) {
        if ((iVar6 != 0x52744674) && (iVar6 != 0x4c745364)) {
          return 1;
        }
LAB_0047537d:
        *(undefined4 *)((int)param_1 + 0x2b8) = 0x3f800000;
        if (iVar6 == 0x52744674) {
          iVar9 = 1;
          local_18[0] = 3;
          param_1 = 1.401298e-45;
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * 4.656613e-10 < 0.5) {
            iVar9 = 2;
            local_18[1] = 0;
            param_1 = 2.802597e-45;
          }
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * 4.656613e-10 < 0.25) {
            local_18[iVar9] = 4;
            iVar9 = iVar9 + 1;
            param_1 = (float)iVar9;
          }
          local_20 = 0x2d;
        }
        else if (iVar6 == 0x4c744674) {
          iVar9 = 1;
          local_18[0] = 0;
          param_1 = 1.401298e-45;
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * 4.656613e-10 < 0.5) {
            iVar9 = 2;
            local_18[1] = 3;
            param_1 = 2.802597e-45;
          }
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * 4.656613e-10 < 0.25) {
            local_18[iVar9] = 1;
            iVar9 = iVar9 + 1;
            param_1 = (float)iVar9;
          }
          local_20 = 0x13b;
        }
        else if (iVar6 == 0x52745364) {
          iVar9 = 1;
          local_18[0] = 3;
          param_1 = 1.401298e-45;
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * 4.656613e-10 < 0.5) {
            iVar9 = 2;
            local_18[1] = 4;
            param_1 = 2.802597e-45;
          }
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * 4.656613e-10 < 0.25) {
            local_18[iVar9] = 5;
            iVar9 = iVar9 + 1;
            param_1 = (float)iVar9;
          }
          local_20 = 0x5a;
        }
        else if (iVar6 == 0x4c745364) {
          iVar9 = 1;
          local_18[0] = 0;
          param_1 = 1.401298e-45;
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * 4.656613e-10 < 0.5) {
            local_18[1] = 1;
            iVar9 = 2;
            param_1 = 2.802597e-45;
          }
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * 4.656613e-10 < 0.25) {
            local_18[iVar9] = 2;
            iVar9 = iVar9 + 1;
            param_1 = (float)iVar9;
          }
          local_20 = 0x10e;
        }
        else {
          iVar9 = (int)param_1;
          if (iVar6 == 0x56684c74) {
            param_1 = 5.605194e-45;
            iVar9 = 4;
            puVar12 = local_18;
            do {
              uVar5 = FUN_004816b0();
              iVar9 = iVar9 + -1;
              *puVar12 = uVar5 % 6;
              puVar12 = puVar12 + 1;
            } while (iVar9 != 0);
            iVar9 = FUN_004816b0();
            *(float *)(iVar8 + 0x308) = (float)iVar9 * 4.656613e-10 * 6.0 - -2.0;
            iVar9 = 4;
          }
        }
        if (0 < iVar9) {
          puVar12 = local_18;
          do {
            FUN_00474cd0(iVar8,*puVar12,fVar2 / (float)(int)param_1);
            puVar12 = puVar12 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        if (((((double)*(int *)(iVar8 + 0x1998) < 500.0) && ((*(byte *)(iVar8 + 0x60) & 0x20) != 0))
            && (FUN_00409ee0(0x14,0xffffffff,local_20,0xffffffff,0),
               (*(byte *)(iVar8 + 0x60) & 0x20) != 0)) &&
           (iVar9 = FUN_004816b0(), (float)iVar9 * 4.656613e-10 < 0.15)) {
          if (iVar6 == 0x56684c74) {
            FUN_00427590(1,**(undefined4 **)(*(int *)(iVar8 + 0x1e70) + 0x18),1,6,5,6,5,iVar8 + 0x50
                        );
            return 1;
          }
          FUN_00427590(1,**(undefined4 **)(*(int *)(iVar8 + 0x1e70) + 0x18),5,6,5,6,7,iVar8 + 0x50);
          return 1;
        }
        return 1;
      }
      if (iVar6 == 0x52745364) goto LAB_0047537d;
      if (iVar6 != 0x54323031) {
        if (iVar6 != 0x56684c74) {
          return 1;
        }
        goto LAB_0047537d;
      }
      *(undefined4 *)((int)param_1 + 0x2b8) = 0x3f800000;
      iVar6 = 3;
      do {
        uVar5 = FUN_004816b0();
        FUN_00474cd0(param_1,uVar5 % 6,fVar2 * 0.3333333);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (500.0 <= (double)*(int *)((int)param_1 + 0x1998)) {
        return 1;
      }
      iVar6 = FUN_004816b0();
      param_1 = *(float *)((int)param_1 + 0x1a0) * 0.002 - -0.75;
      if (1.0 < param_1) {
        param_1 = 1.0;
      }
      if ((*(byte *)(iVar8 + 0x60) & 0x20) == 0) {
        uVar14 = 0;
      }
      else {
        FUN_00409ee0(0x13,0xffffffff,0xffffffff,0xffffffff,0);
        uVar14 = DAT_004c7aa8;
      }
      FUN_00426d10(0x37,6,(float)iVar6 * 4.656613e-10 * 0.3 - -0.1,param_1,iVar8 + 0x50,0,uVar14,
                   0x41200000,0x43480000);
      if ((*(byte *)(iVar8 + 0x60) & 0x20) == 0) {
        return 1;
      }
      iVar6 = FUN_004816b0();
    }
    if (0.15 <= (float)iVar6 * 4.656613e-10) {
      return 1;
    }
    uVar18 = 7;
    uVar17 = 6;
    uVar16 = 5;
    uVar15 = 6;
    uVar14 = 5;
  }
  FUN_00427590(1,**(undefined4 **)(*(int *)(iVar8 + 0x1e70) + 0x18),uVar14,uVar15,uVar16,uVar17,
               uVar18,iVar8 + 0x50);
  return 1;
}



void FUN_00475ad0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 *param_6,int param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  undefined local_6c [12];
  undefined local_60 [12];
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;

  iVar3 = param_1;
  *(int *)(param_1 + 0xac) = param_2;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (param_2 != 0) {
    FUN_0044eef0((int *)(param_1 + 0xac),0);
  }
  *(undefined4 *)(param_1 + 0xb4) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  uVar6 = *(uint *)(param_1 + 0x60) & 0xfffffff0;
  *(uint *)(param_1 + 0x60) = uVar6;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1e70) + 4);
  if (iVar5 == 0x4c6f636c) {
    uVar6 = uVar6 | 0x20;
  }
  else {
    if (iVar5 == 0x52454d4f) {
      *(uint *)(param_1 + 0x60) = uVar6 | 0x40;
      *(undefined4 *)(param_1 + 0x1eb4) = 0xffffffff;
      goto LAB_00475b62;
    }
    if (iVar5 != 0x41414949) goto LAB_00475b62;
    uVar6 = uVar6 | 0x80;
  }
  *(uint *)(param_1 + 0x60) = uVar6;
LAB_00475b62:
  if ((*(byte *)(*(int *)(param_1 + 0x1e70) + 8) & 0x20) == 0) {
    uVar6 = *(uint *)(param_1 + 0x60) & 0xfffffeff;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x60) | 0x100;
  }
  *(uint *)(param_1 + 0x60) = uVar6;
  puVar1 = (undefined4 *)(param_1 + 0x20);
  puVar4 = (undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x1c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x20);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x24);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x28);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x2c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x30);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x34);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x38);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x3c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x40);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x48);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x44);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x4c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x50);
  *(undefined4 *)(param_1 + 0xa4) = 0x40000000;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x54);
  *puVar1 = *param_6;
  *(undefined4 *)(param_1 + 0x24) = param_6[1];
  *(undefined4 *)(param_1 + 0x28) = param_6[2];
  *(undefined4 *)(param_1 + 0x2c) = param_6[3];
  *(undefined4 *)(param_1 + 0x30) = param_6[4];
  *(undefined4 *)(param_1 + 0x34) = param_6[5];
  *(undefined4 *)(param_1 + 0x38) = param_6[6];
  *(undefined4 *)(param_1 + 0x3c) = param_6[7];
  *(undefined4 *)(param_1 + 0x40) = param_6[8];
  *(undefined4 *)(param_1 + 0x44) = param_6[9];
  *(undefined4 *)(param_1 + 0x48) = param_6[10];
  *(undefined4 *)(param_1 + 0x4c) = param_6[0xb];
  *puVar4 = param_6[0xc];
  *(undefined4 *)(param_1 + 0x54) = param_6[0xd];
  *(undefined4 *)(param_1 + 0x58) = param_6[0xe];
  *(undefined4 *)(param_1 + 0x5c) = param_6[0xf];
  local_3c = *puVar4;
  local_38 = *(undefined4 *)(param_1 + 0x54);
  local_34 = *(undefined4 *)(param_1 + 0x58);
  local_24 = 0x42200000;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0xbf800000;
  fVar9 = (float10)FUN_00444d10(param_4,&local_3c,local_60,local_6c);
  *(float *)(param_1 + 0x58) =
       (float)((float10)*(float *)(param_1 + 0x58) - (fVar9 - (float10)*(float *)(param_1 + 0x94)));
  FUN_00430b80(puVar1,param_1 + 8);
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xe4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x108) = 0x45fd2000;
  *(undefined2 *)(param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x10e) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0x42000000;
  FUN_0042f7b0(param_1 + 0x194,0,0,0xbf800000);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  FUN_0042f7b0(param_1 + 0x1b8,0,0,0);
  *(undefined4 *)(param_1 + 0x1efc) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  FUN_0042f7b0(param_1 + 0x1c4,0,0,0);
  FUN_0042f7b0(param_1 + 0x1d0,0,0,0);
  FUN_0042f7b0(param_1 + 0x1dc,0,0,0);
  FUN_0042f7b0(param_1 + 0x144,0,0,0x3f800000);
  FUN_0042f7b0(param_1 + 0x154,0,0,0);
  FUN_0042f7d0(param_1 + 0x16c,puVar4);
  FUN_0042f7d0(param_1 + 0x178,puVar4);
  FUN_0042f7b0(param_1 + 0x160,0,0,0x3f800000);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x1f18) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x1f00) = 0x42a00000;
  *(undefined4 *)(param_1 + 0x1f04) = 0;
  *(undefined4 *)(param_1 + 0x1f08) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x19b8) = 0;
  *(undefined4 *)(param_1 + 0x1f14) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x1e6c) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x244) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x234) = 0x41200000;
  *(int *)(param_1 + 0x238) = param_7;
  if (param_7 < 0) {
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  else {
    *(int *)(param_1 + 0x238) = param_7 + 1;
    if (2 < param_7 + 1) {
      *(int *)(param_1 + 0x238) = param_7;
    }
    if (5 < *(int *)(param_1 + 0x238)) {
      *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x268) = 0x42700000;
  *(undefined4 *)(param_1 + 0x1998) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0xffffff00;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x1f24) = 0;
  *(undefined4 *)(param_1 + 0x1f1c) = 0;
  *(undefined4 *)(param_1 + 0x1f20) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x288);
  iVar5 = 6;
  do {
    puVar4[-6] = 0;
    *puVar4 = 0;
    puVar4[6] = 0;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x1e3c) = 0;
  iVar5 = param_1 + 0x19bc;
  param_1 = 0x12;
  do {
    FUN_0044bb10(iVar5,puVar1);
    iVar5 = iVar5 + 0x40;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *(undefined4 *)(iVar3 + 0x1e40) = 9;
  *(undefined4 *)(iVar3 + 0x1e44) = 6;
  FUN_0042f7b0(iVar3 + 0x1e48,0,0,0);
  FUN_0042f7b0(iVar3 + 0x1e54,0,0,0);
  *(int *)(iVar3 + 0x13c) = param_4;
  *(undefined4 *)(iVar3 + 0x1e60) = 0;
  *(undefined4 *)(iVar3 + 0x344) = param_3;
  *(undefined4 *)(iVar3 + 0x300) = param_5;
  *(undefined4 *)(iVar3 + 0x304) = 0;
  if (((param_10 != 0) && ((*(byte *)(iVar3 + 0x60) & 0x20) != 0)) &&
     (*(char *)(*(int *)(iVar3 + 0x1e70) + 0x10) != '\0')) {
    *(undefined4 *)(iVar3 + 0x304) = 2;
  }
  iVar5 = iVar3 + 0x1610;
  iVar7 = iVar3 + 0x350;
  param_4 = 0x4b;
  do {
    FUN_004313d0(iVar7);
    FUN_0042f7b0(iVar5,0,0,0);
    iVar7 = iVar7 + 0x40;
    iVar5 = iVar5 + 0xc;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  *(undefined4 *)(iVar3 + 0x13c8) = 0xc4fa0000;
  *(undefined4 *)(iVar3 + 0x1408) = 0xc4fa0000;
  iVar5 = 4;
  pfVar8 = (float *)(iVar3 + 0x199c);
  do {
    iVar7 = FUN_004816b0();
    iVar5 = iVar5 + -1;
    *pfVar8 = (float)iVar7 * 4.656613e-10 * 60.0;
    pfVar8 = pfVar8 + 1;
  } while (iVar5 != 0);
  *(undefined4 *)(iVar3 + 0x19b0) = 0;
  *(undefined4 *)(iVar3 + 0x19ac) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x19b4) = 0x3f800000;
  local_20 = 0x734c4f44;
  local_1c = (-(uint)(DAT_00ec86bc != 1) & 0xfffffffe) + 2;
  FUN_00450c00(iVar3,&local_20);
  FUN_0046d4c0(iVar3);
  if (*(int *)(iVar3 + 0x344) != 0) {
    iVar5 = *(int *)(*(int *)(iVar3 + 0x344) + 0xf8);
    if (iVar5 != 0) {
      puVar2 = (uint *)(iVar5 + 0x10);
      *puVar2 = *puVar2 | 1;
    }
    iVar5 = *(int *)(*(int *)(iVar3 + 0x344) + 8);
    if (iVar5 != 0) {
      puVar2 = (uint *)(iVar5 + 0x10);
      *puVar2 = *puVar2 | 1;
    }
    iVar5 = *(int *)(*(int *)(iVar3 + 0x344) + 0x10);
    if (iVar5 != 0) {
      puVar2 = (uint *)(iVar5 + 0x10);
      *puVar2 = *puVar2 | 1;
    }
    iVar5 = *(int *)(*(int *)(iVar3 + 0x344) + 0x38);
    if (iVar5 != 0) {
      puVar2 = (uint *)(iVar5 + 0x10);
      *puVar2 = *puVar2 | 1;
    }
  }
  *(undefined4 *)(iVar3 + 0x1e64) = 0x40000000;
  *(undefined4 *)(iVar3 + 0x1e68) = 0x40000000;
  if ((*(int *)(iVar3 + 0x344) != 0) &&
     (iVar5 = *(int *)(*(int *)(iVar3 + 0x344) + 0xf8), iVar5 != 0)) {
    iVar5 = FUN_00482000(iVar5,&local_54,0);
    if (iVar5 != 0) {
      *(float *)(iVar3 + 0x1e68) = (local_44 - local_50) * 0.004;
      *(float *)(iVar3 + 0x1e64) = (local_48 - local_54) * 0.0036;
    }
  }
  if (**(int **)(*(int *)(iVar3 + 0x1e70) + 0x18) == 0xe) {
    *(undefined4 *)(iVar3 + 0x1e64) = 0x40400000;
    *(undefined4 *)(iVar3 + 0x1e68) = 0x40a00000;
  }
  if ((*(byte *)(iVar3 + 0x60) & 0x20) != 0) {
    FUN_0040a120(0);
    FUN_0040b110(iVar3);
  }
  if (((*(uint *)(iVar3 + 0x60) & 0x20) != 0) || ((*(uint *)(iVar3 + 0x60) & 0x100) != 0)) {
    FUN_00426910(1,**(undefined4 **)(*(int *)(iVar3 + 0x1e70) + 0x18));
  }
  if ((*(byte *)(iVar3 + 0x60) & 0x20) != 0) {
    FUN_0046d690(iVar3);
  }
  return;
}



void FUN_00476390(float *param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  float10 fVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  *param_4 = 0;
  param_4[2] = 0;
  fVar1 = (float10)FUN_0042f540(*param_1 * *param_3 +
                                param_3[2] * param_1[2] + param_3[1] * param_1[1]);
  param_4[1] = (float)(fVar1 - (float10)90.0);
  FUN_0042f9f0(&local_18,param_3,param_1);
  FUN_0042f9f0(&local_c,param_2,&local_18);
  fVar1 = (float10)FUN_0042f8c0(&local_18);
  if (fVar1 <= (float10)0.01) {
    return;
  }
  fVar1 = (float10)FUN_0042f540((float)(((float10)param_2[2] * (float10)local_10 +
                                        (float10)param_2[1] * (float10)local_14 +
                                        (float10)local_18 * (float10)*param_2) / fVar1));
  if (0.0 < local_c * *param_1 + local_4 * param_1[2] + local_8 * param_1[1]) {
    param_4[2] = -(float)fVar1;
    return;
  }
  param_4[2] = (float)fVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004764a0(int param_1)

{
  *(float *)(param_1 + 400) = _DAT_004c2590 * 0.25;
  *(undefined4 *)(param_1 + 0x194) = DAT_004c2598;
  *(undefined4 *)(param_1 + 0x198) = DAT_004c259c;
  *(undefined4 *)(param_1 + 0x19c) = DAT_004c25a0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004764e0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5,float param_6,float param_7,float param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined local_18 [4];
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  FUN_0042f9f0(&local_24,param_3,param_2);
  fVar4 = (float10)FUN_0042f8c0(&local_24);
  if ((float10)0.01 < fVar4) {
    FUN_0042fa50(&local_24,(float)((float10)1.0 / fVar4),&local_24);
  }
  else {
    local_24 = *param_4;
    local_20 = param_4[1];
    local_1c = param_4[2];
  }
  FUN_0042f9f0(&local_c,param_2,&local_24);
  fVar4 = (float10)FUN_0042f8c0(&local_c);
  if ((float10)0.01 < fVar4) {
    FUN_0042fa50(&local_c,(float)((float10)1.0 / fVar4),&local_c);
  }
  else {
    local_c = *param_3;
    local_8 = param_3[1];
    local_4 = param_3[2];
  }
  FUN_00476390(&local_c,&local_24,param_5,local_18);
  if ((*(uint *)(param_1 + 100) & 0x400) != 0) {
    if (85.0 < local_10) {
      local_10 = 85.0;
    }
    if (local_10 < -85.0) {
      local_10 = -85.0;
    }
  }
  fVar3 = local_14 - *(float *)(param_9 + 4);
  if (*(float *)(param_9 + 4) <= local_14) {
    if (local_14 <= *(float *)(param_9 + 4)) goto LAB_00476655;
    fVar1 = 0.5;
  }
  else {
    fVar1 = 0.3333333;
  }
  fVar3 = fVar3 * fVar1;
LAB_00476655:
  fVar1 = (local_10 - *(float *)(param_9 + 8)) * 0.125;
  if ((*(uint *)(param_1 + 0x60) & 0x4000000) == 0) {
    fVar2 = (param_7 - param_6) / (param_7 - param_8);
    if (fVar2 <= 0.0) {
      fVar1 = *(float *)(param_9 + 8) * -0.125;
      fVar3 = 0.0;
      if (-37.0 < *(float *)(param_9 + 4)) {
        fVar3 = (float)_DAT_00e22a40 * -22.0;
      }
      if ((*(float *)(param_1 + 0x2fc) < 0.0) && (*(float *)(param_9 + 4) < -10.0)) {
        fVar3 = fVar3 - (float)_DAT_00e22a40 * *(float *)(param_1 + 0x2fc) * 20.0;
      }
    }
    else if (fVar2 < 1.0) {
      fVar3 = fVar2 * fVar3;
      fVar1 = fVar1 * fVar2;
    }
  }
  *(float *)(param_9 + 4) = fVar3 + *(float *)(param_9 + 4);
  *(float *)(param_9 + 8) = fVar1 + *(float *)(param_9 + 8);
  return;
}



float10 FUN_00476740(int param_1,undefined4 param_2,undefined4 param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float local_154;
  float local_150;
  float local_14c;
  float local_148 [6];
  undefined local_130 [16];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float afStack_f0 [18];
  float local_a8 [18];
  undefined4 local_60 [3];
  undefined local_54 [12];
  float local_48 [3];
  undefined local_3c [60];

  iVar8 = **(int **)(*(int *)(param_1 + 0x1e70) + 0x18);
  FUN_0042f7b0(local_60,0,0,0);
  iVar8 = iVar8 * 0x6c;
  FUN_0042f7d0(local_54,&DAT_004c7094 + iVar8);
  FUN_0042f7d0(local_48,&DAT_004c7094 + iVar8);
  local_48[0] = -local_48[0];
  FUN_0042f7d0(local_3c,&DAT_004c7088 + iVar8);
  pfVar7 = local_148;
  iVar8 = 0;
  do {
    FUN_0042fa50(&local_154,*(undefined4 *)((int)local_60 + iVar8),param_1 + 0x20);
    FUN_0042fa80(&local_154,&local_154,*(undefined4 *)((int)local_60 + iVar8 + 4),param_1 + 0x30);
    FUN_0042fa80(&local_154,&local_154,*(undefined4 *)((int)local_60 + iVar8 + 8),param_1 + 0x40);
    FUN_0042f830((int)local_a8 + iVar8,param_2,&local_154);
    if ((0.05 <= param_5[2]) || (param_5[2] <= -0.05)) {
      fVar1 = *param_5;
      fVar2 = param_5[1];
      fVar4 = param_5[1];
      fVar5 = param_5[2];
      *(float *)((int)afStack_f0 + iVar8) = *param_5;
      fVar3 = param_5[2];
      *(float *)((int)afStack_f0 + iVar8 + 4) = fVar4;
      *(float *)((int)afStack_f0 + iVar8 + 8) = fVar5;
      fVar2 = (-(local_154 * fVar1) - local_150 * fVar2) / fVar3 - local_14c;
      fVar1 = *(float *)((int)local_a8 + iVar8 + 8);
      *pfVar7 = param_4 - fVar2;
      *(float *)((int)local_a8 + iVar8 + 8) = (fVar2 + fVar1) - param_4;
    }
    else {
      fVar1 = *(float *)((int)local_a8 + iVar8 + 8);
      fVar2 = param_5[1];
      fVar3 = param_5[2];
      *(float *)((int)afStack_f0 + iVar8) = *param_5;
      *(float *)((int)afStack_f0 + iVar8 + 4) = fVar2;
      *(float *)((int)local_a8 + iVar8 + 8) = fVar1 - param_4;
      *(float *)((int)afStack_f0 + iVar8 + 8) = fVar3;
      *pfVar7 = param_4;
    }
    iVar8 = iVar8 + 0xc;
    pfVar7 = pfVar7 + 1;
  } while (iVar8 < 0x30);
  if (1.0 <= ((float)*(int *)(param_1 + 0x1998) - 40.0) * 0.01666667) {
    puVar6 = (undefined4 *)(param_1 + 0x12c8);
    iVar8 = 4;
    do {
      *puVar6 = 0xc7c35000;
      puVar6 = puVar6 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  else {
    pfVar7 = local_148;
    iVar8 = param_1 + 0x1290;
    iVar9 = 0;
    do {
      if (*pfVar7 <= 0.0) {
        *(undefined4 *)(iVar8 + 0x38) = 0xc7c35000;
      }
      else {
        FUN_004313d0(local_130);
        local_110 = *(undefined4 *)((int)afStack_f0 + iVar9);
        local_10c = *(undefined4 *)((int)afStack_f0 + iVar9 + 4);
        local_108 = *(undefined4 *)((int)afStack_f0 + iVar9 + 8);
        local_120 = *(undefined4 *)(param_1 + 0x30);
        local_11c = *(undefined4 *)(param_1 + 0x34);
        local_118 = *(undefined4 *)(param_1 + 0x38);
        FUN_0042f9f0(local_130,&local_120,&local_110);
        FUN_0042f9f0(&local_120,&local_110,local_130);
        local_100 = *(undefined4 *)((int)local_a8 + iVar9);
        local_fc = *(undefined4 *)((int)local_a8 + iVar9 + 4);
        local_f8 = *(undefined4 *)((int)local_a8 + iVar9 + 8);
        FUN_0044bb10(iVar8,local_130);
        FUN_00431450(iVar8,0x3b83126f,0x3b83126f,0x3b83126f,iVar8);
      }
      iVar9 = iVar9 + 0xc;
      pfVar7 = pfVar7 + 1;
      iVar8 = iVar8 + 0x40;
    } while (iVar9 < 0x30);
  }
  fVar10 = (float10)local_148[1];
  if ((0.0 < local_148[2]) && (local_148[2] < local_148[1])) {
    fVar10 = (float10)local_148[2];
  }
  if ((float10)0.0 <= fVar10) {
    return fVar10 - (float10)2.0;
  }
  if (0.0 <= param_4) {
    return (float10)param_4;
  }
  return (float10)100000.0;
}



void FUN_00476ac0(int param_1,float *param_2)

{
  float **ppfVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float *pfVar21;
  bool bVar22;

  pfVar21 = param_2;
  if (param_2 != (float *)0x0) {
    do {
      uVar4 = *(ushort *)((int)pfVar21 + 0x26);
      bVar22 = false;
      if (uVar4 != 0) {
        bVar22 = (uVar4 & 1) != 0;
        if (((uVar4 & 2) != 0) && (*(float *)(param_1 + 0x1a0) < 150.0)) {
          bVar22 = true;
        }
        if (((*(byte *)(param_1 + 0x60) & 0x20) == 0) && ((uVar4 & 0x20) != 0)) {
          bVar22 = true;
        }
        iVar20 = *(int *)(*(int *)(param_1 + 0x1e70) + 0x78);
        if ((iVar20 == 0) && ((uVar4 & 4) != 0)) {
          bVar22 = true;
        }
        if ((iVar20 == 1) && ((uVar4 & 8) != 0)) {
          bVar22 = true;
        }
        if ((iVar20 == 2) && ((uVar4 & 0x10) != 0)) {
          bVar22 = true;
        }
      }
      if ((!bVar22) && (iVar20 = FUN_0047c7d0(pfVar21), iVar20 != 0)) {
        fVar9 = pfVar21[6] * 0.5;
        fVar2 = *pfVar21;
        fVar3 = pfVar21[1];
        fVar5 = *(float *)(param_1 + 0x50);
        fVar6 = *(float *)(param_1 + 0x54);
        fVar19 = pfVar21[7] * 0.5;
        fVar7 = *(float *)(param_1 + 0x58);
        fVar8 = pfVar21[2];
        fVar17 = fVar2 - fVar9 * pfVar21[4];
        fVar16 = fVar2 + fVar9 * pfVar21[4];
        fVar10 = fVar3 + fVar9 * pfVar21[3];
        fVar18 = fVar3 - fVar9 * pfVar21[3];
        fVar13 = fVar17 - fVar16;
        fVar11 = fVar10 - fVar18;
        fVar12 = fVar11 * fVar11 + fVar13 * fVar13 + 0.0;
        fVar14 = fVar16;
        fVar15 = fVar18;
        if (0.001 < fVar12) {
          param_2 = (float *)(((fVar11 * fVar6 + fVar13 * fVar5 + fVar7 * 0.0) -
                              (fVar11 * fVar18 + fVar13 * fVar16 + fVar7 * 0.0)) / fVar12);
          if ((0.0 < (float)param_2) && (fVar14 = fVar17, fVar15 = fVar10, (float)param_2 < 1.0)) {
            fVar14 = fVar13 * (float)param_2 + fVar16;
            fVar15 = fVar11 * (float)param_2 + fVar18;
          }
        }
        else {
          param_2 = (float *)0x0;
        }
        if ((*(short *)(pfVar21 + 9) == 0x66) || (*(short *)(pfVar21 + 9) == 0x68)) {
          if (((0.0 < (float)param_2) &&
              ((((float)param_2 < 1.0 && (fVar7 < fVar19 + fVar8)) && (fVar8 - fVar19 < fVar7)))) &&
             (fVar2 = fVar2 * pfVar21[3] + fVar3 * pfVar21[4] + fVar8 * pfVar21[5],
             fVar2 < *(float *)(param_1 + 0x16c) * pfVar21[3] +
                     *(float *)(param_1 + 0x170) * pfVar21[4] +
                     *(float *)(param_1 + 0x174) * pfVar21[5] ==
             fVar6 * pfVar21[4] + fVar5 * pfVar21[3] + fVar7 * pfVar21[5] < fVar2))
          goto LAB_00476e7c;
        }
        else if ((((fVar15 - fVar6) * (fVar15 - fVar6) + (fVar14 - fVar5) * (fVar14 - fVar5) <
                   fVar9 * fVar9) && (fVar7 < fVar19 + fVar8)) && (fVar8 - fVar19 < fVar7)) {
LAB_00476e7c:
          FUN_0047ce60(iVar20,param_1,0);
        }
      }
      ppfVar1 = (float **)(pfVar21 + 10);
      pfVar21 = *ppfVar1;
    } while (*ppfVar1 != (float *)0x0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00476ea0(int param_1)

{
  float fVar1;
  byte *pbVar2;
  uint uVar3;
  float local_c;
  float local_8;
  float local_4;

  local_4 = 1.0;
  local_8 = 1.0;
  local_c = 0.0;
  if (((*(uint *)(param_1 + 0x60) & 0x2000000) != 0) && (*(float *)(param_1 + 0x1a0) < 75.0)) {
    local_c = 75.0 - *(float *)(param_1 + 0x1a0);
  }
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xff63fb1e;
  if ((*(int *)(param_1 + 0x140) != 0) &&
     (pbVar2 = (byte *)FUN_004318b0(*(int *)(param_1 + 0x140)), pbVar2 != (byte *)0x0)) {
    uVar3 = *(uint *)(param_1 + 0x26c) & ~*(uint *)(pbVar2 + 0x34);
    *(uint *)(param_1 + 0x26c) = uVar3;
    *(uint *)(param_1 + 0x26c) =
         (uint)(uint3)((uint3)((uint)*(undefined4 *)(pbVar2 + 0x38) >> 8) | (uint3)(uVar3 >> 8)) <<
         8;
    if ((*pbVar2 & 0x10) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x80;
    }
    if ((*pbVar2 & 0x20) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x400;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 0x2000) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x40000;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 0x4000) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x80000;
    }
    if ((((*(uint *)(pbVar2 + 0x2c) & 0x20000) != 0) && ((*(byte *)(param_1 + 0x60) & 0x80) != 0))
       && ((*(uint *)(param_1 + 100) & 0x4000000) == 0)) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x800000;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 0x8000) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x100000;
    }
    if ((((DAT_0050c048 & 0x2000) != 0) && ((DAT_00e98eb0 & 0x100) != 0)) &&
       (((byte)DAT_00e98e90 & 0x80) != 0)) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) ^ 0x2000000;
    }
    if ((pbVar2[0x2c] & 1) != 0) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x2000000;
    }
    if (((pbVar2[0x2c] & 2) != 0) && ((*(uint *)(param_1 + 0x60) & 0x2000000) != 0)) {
      *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x16c);
      *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x170);
      *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x174);
      *(undefined4 *)(param_1 + 0x228) = 0x40400000;
      *(undefined4 *)(param_1 + 0x1c4) = 0;
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1cc) = 0;
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfdffffff | 0x4000000;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 4) != 0) {
      local_c = 200.0;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 8) != 0) {
      local_8 = 0.75;
      if ((*(uint *)(param_1 + 0x60) & 0x2000000) != 0) {
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
      }
    }
    if ((pbVar2[0x2c] & 0x10) != 0) {
      local_8 = 0.1;
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 0x20) != 0) {
      local_4 = 0.2;
    }
    if ((*(uint *)(param_1 + 100) & 0x2000000) != 0) {
      local_4 = 1.0;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 0x400) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 1;
    }
    if (*(int *)(pbVar2 + 0x3c) != 0) {
      FUN_00476ac0(param_1,*(int *)(pbVar2 + 0x3c));
    }
    if (((*(uint *)(pbVar2 + 0x2c) & 0x1000) != 0) && (DAT_00ec86a0 == 1)) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x40;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 0x20000000) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x20;
    }
  }
  if (DAT_0050cb48 != 0) {
    FUN_00476ac0(param_1,DAT_0050cb48);
  }
  if (local_c <= *(float *)(param_1 + 0x240)) {
    if ((local_c < *(float *)(param_1 + 0x240)) &&
       (fVar1 = *(float *)(param_1 + 0x240) - (float)_DAT_00e22a40 * 25.0,
       *(float *)(param_1 + 0x240) = fVar1, fVar1 < local_c)) {
      *(float *)(param_1 + 0x240) = local_c;
    }
  }
  else {
    fVar1 = (float)_DAT_00e22a40 * 25.0 + *(float *)(param_1 + 0x240);
    *(float *)(param_1 + 0x240) = fVar1;
    if (local_c < fVar1) {
      *(float *)(param_1 + 0x240) = local_c;
    }
  }
  if (local_8 <= *(float *)(param_1 + 0x244)) {
    if ((local_8 < *(float *)(param_1 + 0x244)) &&
       (fVar1 = *(float *)(param_1 + 0x244) - (float)_DAT_00e22a40 * 0.5,
       *(float *)(param_1 + 0x244) = fVar1, fVar1 < local_8)) {
      *(float *)(param_1 + 0x244) = local_8;
    }
  }
  else {
    fVar1 = (float)_DAT_00e22a40 * 0.5 + *(float *)(param_1 + 0x244);
    *(float *)(param_1 + 0x244) = fVar1;
    if (local_8 < fVar1) {
      *(float *)(param_1 + 0x244) = local_8;
    }
  }
  if (local_4 <= *(float *)(param_1 + 0x248)) {
    if ((local_4 < *(float *)(param_1 + 0x248)) &&
       (fVar1 = *(float *)(param_1 + 0x248) - (float)_DAT_00e22a40 * 0.5,
       *(float *)(param_1 + 0x248) = fVar1, fVar1 < local_4)) {
      *(float *)(param_1 + 0x248) = local_4;
    }
  }
  else {
    fVar1 = (float)_DAT_00e22a40 * 0.5 + *(float *)(param_1 + 0x248);
    *(float *)(param_1 + 0x248) = fVar1;
    if (local_4 < fVar1) {
      *(float *)(param_1 + 0x248) = local_4;
    }
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  if ((((((float)*(int *)(param_1 + 0x1998) - 400.0) * 0.001666667 < 1.0) ||
       ((*(byte *)(param_1 + 0x60) & 0x20) != 0)) || ((*(uint *)(param_1 + 100) & 0x4000000) != 0))
     && (((*(uint *)(param_1 + 100) & 0x80000) != 0 && ((*(uint *)(param_1 + 100) & 0x200) == 0))))
  {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
  }
  return;
}



float10 FUN_004772f0(float param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;

  iVar1 = (int)param_1;
  if ((*(uint *)((int)param_1 + 100) & 0x400) == 0) {
    local_4c = *(float *)((int)param_1 + 0x194);
    local_48 = *(float *)((int)param_1 + 0x198);
    local_44 = *(float *)((int)param_1 + 0x19c);
  }
  else {
    local_4c = -*(float *)((int)param_1 + 0x160);
    local_48 = -*(float *)((int)param_1 + 0x164);
    local_44 = -*(float *)((int)param_1 + 0x168);
  }
  FUN_0042fa80(&local_34,param_2,0xc0000000,&local_4c);
  local_10 = local_4c;
  local_c = local_48;
  local_8 = local_44;
  local_4 = 0x461c4000;
  local_1c = local_34;
  local_18 = local_30;
  local_14 = local_2c;
  FUN_00441020();
  if ((*(byte *)((int)param_1 + 100) & 0x80) == 0) {
    fVar3 = (float10)FUN_00444f10(*(undefined4 *)((int)param_1 + 0xec),&local_1c,local_28,&local_40)
    ;
    param_1 = (float)fVar3;
  }
  else {
    param_1 = -1.0;
  }
  if (param_1 < 0.0) {
    fVar3 = (float10)FUN_00444d10(*(undefined4 *)(iVar1 + 0x13c),&local_1c,local_28,&local_40);
    param_1 = (float)fVar3;
  }
  if (((*(uint *)(iVar1 + 100) & 0x400) != 0) && (param_1 < 0.0)) {
    local_48 = *(float *)(iVar1 + 0x198);
    local_44 = *(float *)(iVar1 + 0x19c);
    local_4c = *(float *)(iVar1 + 0x194);
    local_10 = local_4c;
    local_c = local_48;
    local_8 = local_44;
    fVar3 = (float10)FUN_00444d10(*(undefined4 *)(iVar1 + 0x13c),&local_1c,local_28,&local_40);
    param_1 = (float)fVar3;
  }
  uVar2 = FUN_00441030();
  *(undefined4 *)(iVar1 + 0x140) = uVar2;
  if (param_1 < 0.0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x188) = 0xc61c4000;
    return (float10)100000.0;
  }
  *param_3 = local_40;
  param_3[1] = local_3c;
  param_3[2] = local_38;
  *(undefined4 *)(iVar1 + 0x188) = local_20;
  return (float10)param_1 - (float10)2.0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004774f0(float param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;

  iVar4 = (int)param_1;
  uVar5 = *(uint *)((int)param_1 + 100);
  if ((uVar5 & 0x400) == 0) {
    local_2c = *(float *)((int)param_1 + 0x194);
    local_28 = *(float *)((int)param_1 + 0x198);
    local_24 = *(float *)((int)param_1 + 0x19c);
  }
  else {
    local_2c = -*(float *)((int)param_1 + 0x160);
    local_28 = -*(float *)((int)param_1 + 0x164);
    local_24 = -*(float *)((int)param_1 + 0x168);
  }
  fVar2 = param_3 - *(float *)((int)param_1 + 0xa4);
  fVar3 = *(float *)((int)param_1 + 0x94) - *(float *)((int)param_1 + 0xa4);
  fVar1 = *(float *)((int)param_1 + 0x28);
  if (*(float *)((int)param_1 + 0x28) < 0.0) {
    fVar1 = -fVar1;
  }
  fVar1 = *(float *)((int)param_1 + 0xa8) * fVar1;
  param_1 = fVar2;
  if (3.0 < fVar1) {
    param_1 = fVar2 - (fVar1 - 3.0);
  }
  if (param_3 <= 99999.0) {
    *(undefined4 *)(iVar4 + 0x2c8) = 0;
  }
  else {
    fVar1 = (float)_DAT_00e22a40 + *(float *)(iVar4 + 0x2c8);
    *(float *)(iVar4 + 0x2c8) = fVar1;
    if (3.0 < fVar1) {
      *(uint *)(iVar4 + 0x60) = *(uint *)(iVar4 + 0x60) | 0x1000;
    }
  }
  if (param_3 <= 30.0) {
    uVar5 = uVar5 & 0xfffffdff;
  }
  else {
    uVar5 = uVar5 | 0x200;
  }
  *(uint *)(iVar4 + 100) = uVar5;
  if (param_1 <= 12.0) {
    fVar1 = (1.0 - (12.0 - param_1) / (12.0 - fVar3)) * (float)_DAT_00e22a40 +
            *(float *)(iVar4 + 0x1b4);
    *(float *)(iVar4 + 0x1b4) = fVar1;
    if ((fVar3 < param_1) && (fVar1 < 0.0)) {
      fVar6 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
      *(float *)(iVar4 + 0x1b4) = (float)(fVar6 * (float10)*(float *)(iVar4 + 0x1b4));
    }
  }
  else if (*(float *)(iVar4 + 0x1a0) < 0.0) {
    *(float *)(iVar4 + 0x1b4) = *(float *)(iVar4 + 0x1b4) - (float)_DAT_00e22a40 * -2.0;
  }
  else {
    *(float *)(iVar4 + 0x1b4) = *(float *)(iVar4 + 0x1b4) + (float)_DAT_00e22a40;
  }
  fVar1 = (float)_DAT_00e22a40 * *(float *)(iVar4 + 400) * *(float *)(iVar4 + 0x1b4) * 30.0;
  *(float *)(iVar4 + 0x1b0) = fVar1;
  if (((*(float *)(iVar4 + 0x2fc) < 0.0) && (0.0 <= *(float *)(iVar4 + 0x1a0))) && (0.0 < fVar1)) {
    *(float *)(iVar4 + 0x1b0) = (*(float *)(iVar4 + 0x2fc) * 0.9 - -1.0) * fVar1;
  }
  if (*(float *)(iVar4 + 0x1b0) <= param_1) {
    uVar5 = *(uint *)(iVar4 + 0x60) & 0xfeffffff;
  }
  else {
    fVar1 = *(float *)(iVar4 + 0x1b0);
    fVar3 = (float)_DAT_00e22a40;
    fVar2 = *(float *)(iVar4 + 0x1b4);
    *(float *)(iVar4 + 0x1b0) = param_1;
    if (0.0 < *(float *)(iVar4 + 0x1b4)) {
      *(float *)(iVar4 + 0x1b4) = -(*(float *)(iVar4 + 0x1b4) * 0.2);
    }
    if ((4.0 < fVar2 * 8.0) && ((*(uint *)(iVar4 + 0x60) & 0x1000000) == 0)) {
      local_18 = (fVar1 / fVar3) * 0.5;
      local_20 = 0x48697474;
      local_1c = 0x426f746d;
      FUN_00450c00(iVar4,&local_20);
    }
    uVar5 = *(uint *)(iVar4 + 0x60) | 0x1000000;
  }
  *(uint *)(iVar4 + 0x60) = uVar5;
  *param_2 = *(float *)(iVar4 + 0x1b0) * local_2c + *param_2;
  param_2[1] = *(float *)(iVar4 + 0x1b0) * local_28 + param_2[1];
  param_2[2] = *(float *)(iVar4 + 0x1b0) * local_24 + param_2[2];
  return;
}



void FUN_00477850(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,float param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float local_8;

  if (param_6 == 1.401298e-45) {
    iVar3 = 0x41;
    uVar2 = 0x10000000;
  }
  else {
    iVar3 = 0x42;
    uVar2 = 0x20000000;
  }
  local_8 = param_2;
  param_6 = param_2;
  if (0.2 < param_2) {
    param_6 = 0.2;
  }
  iVar1 = FUN_004816b0();
  if ((float)iVar1 * 4.656613e-10 < 0.5) {
    iVar1 = FUN_004816b0();
    local_8 = (float)iVar1 * 4.656613e-10 * 0.5 - -0.25;
    param_6 = local_8 * param_6;
    local_8 = local_8 * param_2;
  }
  iVar3 = iVar3 * 0x40 + 0x350 + param_1;
  FUN_00481100(iVar3,param_4,param_5,param_1 + 0x30,param_3);
  FUN_00431450(iVar3,local_8,param_6,param_6,iVar3);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | uVar2;
  return;
}



void FUN_00477940(float param_1,undefined4 param_2,undefined4 param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_48;
  float local_44;
  float local_40;
  undefined local_3c [12];
  undefined local_30 [12];
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];

  iVar3 = (int)param_1;
  fVar2 = *(float *)((int)param_1 + 0x208);
  if (*(float *)((int)param_1 + 0x208) < 0.0) {
    fVar2 = -fVar2;
  }
  param_1 = *(float *)((int)param_1 + 0xa8) - *(float *)((int)param_1 + 0xa8) * 0.75 * fVar2;
  if (param_1 < 1.5) {
    param_1 = 1.5;
  }
  pfVar1 = (float *)(iVar3 + 0x40);
  iVar5 = 0;
  iVar4 = FUN_00444740(*(undefined4 *)(iVar3 + 0x13c),param_2,param_1,pfVar1,0x3f800000,0xbf800000,
                       &local_48,local_3c,local_30);
  if (iVar4 != 0) {
    iVar5 = 1;
    FUN_00441030();
    iVar4 = FUN_00444740(*(undefined4 *)(iVar3 + 0x13c),param_2,param_1,pfVar1,0x3f800000,0xbf800000
                         ,local_18,local_3c,local_24);
    if (iVar4 != 0) {
      iVar5 = 2;
      FUN_00441030();
    }
  }
  if ((((iVar5 != 0) && (50.0 < *(float *)(iVar3 + 0x1a0))) &&
      (fVar2 = *(float *)(iVar3 + 0x48) * local_40 +
               *(float *)(iVar3 + 0x44) * local_44 + local_48 * *pfVar1, fVar2 < 0.5)) &&
     (-fVar2 < 0.5)) {
    FUN_00477850(iVar3,*(float *)(iVar3 + 0x1a0) * 0.002,0x3e99999a,local_30,&local_48,1);
  }
  FUN_0044abc0(param_2,param_3,*(undefined4 *)(iVar3 + 0x13c),local_c);
  return;
}



void FUN_00477ad0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;

  iVar6 = param_1;
  fVar3 = *(float *)(param_1 + 0xa4);
  fVar4 = *(float *)(param_1 + 0x94);
  fVar5 = *(float *)(param_1 + 0x94);
  if ((*(uint *)(param_1 + 100) & 0x400) == 0) {
    *(float *)(param_4 + 8) = *(float *)(param_4 + 8) - *(float *)(param_1 + 0x200);
  }
  FUN_004764e0(param_1,param_2,param_1 + 0x30,param_1 + 0x20,param_1 + 0x194,param_3,fVar4 * 1.5,
               (fVar3 + fVar3 + fVar5) * 0.3333333,param_4);
  if (((*(uint *)(param_1 + 100) & 0x400) == 0) &&
     (*(float *)(param_4 + 8) = *(float *)(param_1 + 0x200) + *(float *)(param_4 + 8),
     (*(uint *)(param_1 + 100) & 0x400) == 0)) {
    pbVar1 = (byte *)(param_1 + 0x60);
    fVar3 = *(float *)(param_1 + 0x200);
    pfVar2 = (float *)(param_1 + 0x200);
    param_1 = 0x43960000;
    if ((*pbVar1 & 0x80) == 0) {
      param_1 = 0x428c0000;
    }
    FUN_0044af50(pfVar2,*(undefined4 *)(iVar6 + 0x1ec),*(undefined4 *)(iVar6 + 0x1f0),
                 *(undefined4 *)(iVar6 + 0x74),param_1);
    *(float *)(param_4 + 8) = *(float *)(param_4 + 8) - (*pfVar2 - fVar3) * 0.2;
    if (((*(uint *)(iVar6 + 100) & 0x400) == 0) && (*(float *)(iVar6 + 0x208) != 0.0)) {
      fVar3 = *(float *)(iVar6 + 0x208);
      if (*(float *)(iVar6 + 0x208) < 0.0) {
        fVar3 = -fVar3;
      }
      *(float *)(param_4 + 8) =
           (*(float *)(iVar6 + 0x208) * 80.0 - *(float *)(param_4 + 8)) * fVar3 +
           *(float *)(param_4 + 8);
    }
  }
  *(undefined4 *)(iVar6 + 0x204) = *(undefined4 *)(param_4 + 8);
  return;
}



void FUN_00477c30(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;

  local_108 = *(float *)(param_1 + 0x20);
  pfVar1 = (float *)(param_1 + 0x20);
  pfVar2 = (float *)(param_1 + 0x30);
  local_104 = *(float *)(param_1 + 0x24);
  local_100 = *(float *)(param_1 + 0x28);
  local_f8 = *pfVar2;
  local_f4 = *(float *)(param_1 + 0x34);
  local_f0 = *(float *)(param_1 + 0x38);
  local_e8 = *(float *)(param_1 + 0x40);
  local_e4 = *(float *)(param_1 + 0x44);
  local_e0 = *(float *)(param_1 + 0x48);
  if (((((float)*(int *)(param_1 + 0x1998) - 400.0) * 0.001666667 < 1.0) ||
      ((*(byte *)(param_1 + 0x60) & 0x20) != 0)) || ((*(uint *)(param_1 + 100) & 0x4000000) != 0)) {
    local_114 = -local_f8;
    local_110 = local_f4;
    fVar5 = (float10)FUN_00480670(local_114 * local_114 + local_f4 * local_f4);
    if (fVar5 < (float10)0.1) {
      local_114 = -local_e8;
      local_110 = local_e4;
      fVar5 = (float10)FUN_00480670(local_114 * local_114 + local_e4 * local_e4);
    }
    local_110 = (float)((float10)local_110 / fVar5);
    local_114 = (float)((float10)local_114 / fVar5);
    FUN_00431150(&local_40,param_3[2],local_f8,local_f4,local_f0);
    FUN_0042f380(param_3[1],&local_84,&local_10c);
    local_88 = local_114 * local_114;
    fVar3 = local_10c * local_88 + local_110 * local_110;
    local_b4 = local_10c * local_110 * local_110 + local_88;
    local_c4 = (1.0 - local_10c) * local_114 * local_110;
    local_b0 = local_110 * local_84;
    local_c0 = -(local_114 * local_84);
    local_a8 = -local_c0;
    local_a4 = -local_b0;
    local_80 = local_38 * local_a8 + local_3c * local_c4 + local_40 * fVar3;
    local_7c = local_38 * local_a4 + local_3c * local_b4 + local_40 * local_c4;
    local_78 = local_10c * local_38 + local_3c * local_b0 + local_40 * local_c0;
    local_70 = local_28 * local_a8 + local_2c * local_c4 + local_30 * fVar3;
    local_6c = local_28 * local_a4 + local_2c * local_b4 + local_30 * local_c4;
    local_68 = local_10c * local_28 + local_2c * local_b0 + local_30 * local_c0;
    local_60 = local_18 * local_a8 + local_1c * local_c4 + local_20 * fVar3;
    local_5c = local_18 * local_a4 + local_1c * local_b4 + local_20 * local_c4;
    local_58 = local_10c * local_18 + local_1c * local_b0 + local_20 * local_c0;
    FUN_0042f380(*param_3,&local_11c,&local_118);
    local_c8 = local_118 * local_80 - local_11c * local_7c;
    local_c4 = local_11c * local_80 + local_118 * local_7c;
    local_b8 = local_118 * local_70 - local_11c * local_6c;
    local_b4 = local_11c * local_70 + local_118 * local_6c;
    local_a8 = local_118 * local_60 - local_11c * local_5c;
    fVar3 = local_11c * local_60 + local_118 * local_5c;
    *pfVar1 = local_100 * local_a8 + local_104 * local_b8 + local_108 * local_c8;
    *(float *)(param_1 + 0x24) = local_100 * fVar3 + local_104 * local_b4 + local_108 * local_c4;
    *(float *)(param_1 + 0x28) = local_100 * local_58 + local_104 * local_68 + local_108 * local_78;
    *pfVar2 = local_f0 * local_a8 + local_f4 * local_b8 + local_f8 * local_c8;
    *(float *)(param_1 + 0x34) = local_f0 * fVar3 + local_f4 * local_b4 + local_f8 * local_c4;
    *(float *)(param_1 + 0x38) = local_f0 * local_58 + local_f4 * local_68 + local_f8 * local_78;
    *(float *)(param_1 + 0x40) = local_e0 * local_a8 + local_e4 * local_b8 + local_e8 * local_c8;
    *(float *)(param_1 + 0x44) = local_e0 * fVar3 + local_e4 * local_b4 + local_e8 * local_c4;
    *(float *)(param_1 + 0x48) = local_e0 * local_58 + local_e4 * local_68 + local_e8 * local_78;
  }
  else {
    FUN_0042f380(*param_3,&local_11c,&local_118);
    *pfVar1 = local_118 * local_108 - local_11c * local_104;
    *(float *)(param_1 + 0x24) = local_118 * local_104 + local_11c * local_108;
    *pfVar2 = local_118 * local_f8 - local_11c * local_f4;
    *(float *)(param_1 + 0x34) = local_118 * local_f4 + local_11c * local_f8;
    *(float *)(param_1 + 0x28) = local_100;
    *(float *)(param_1 + 0x40) = local_118 * local_e8 - local_11c * local_e4;
    *(float *)(param_1 + 0x38) = local_f0;
    *(float *)(param_1 + 0x48) = local_e0;
    *(float *)(param_1 + 0x44) = local_118 * local_e4 + local_11c * local_e8;
  }
  iVar4 = *(int *)(param_1 + 0x1e6c) + -1;
  *(int *)(param_1 + 0x1e6c) = iVar4;
  if (iVar4 < 0) {
    FUN_0042f9b0(pfVar1);
    FUN_0042f9b0(pfVar2);
    FUN_0042f9b0(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x1e6c) = 8;
  }
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = param_2[1];
  *(undefined4 *)(param_1 + 0x58) = param_2[2];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 FUN_004783e0(float param_1)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;

  iVar5 = (int)param_1;
  if (((*(uint *)((int)param_1 + 0x60) & 0x800000) != 0) ||
     (puVar1 = (uint *)((int)param_1 + 100), param_1 = 1.5, (*puVar1 & 0x2000) != 0)) {
    param_1 = 4.0;
  }
  if ((*(byte *)(*(int *)(iVar5 + 0x1e70) + 8) & 8) == 0) {
    if (*(float *)(iVar5 + 0x18c) <= 0.1) {
      if (-0.1 <= *(float *)(iVar5 + 0x18c)) {
        if (0.2 <= *(float *)(iVar5 + 0x1a4)) {
          fVar6 = (float10)FUN_00480650(*(undefined4 *)(iVar5 + 0x84),(float)_DAT_00e22a40);
          *(float *)(iVar5 + 0x1a4) = (float)(fVar6 * (float10)*(float *)(iVar5 + 0x1a4));
        }
        else {
          fVar6 = (float10)FUN_00480650(0x41200000,(float)_DAT_00e22a40);
          *(float *)(iVar5 + 0x1a4) = (float)(fVar6 * (float10)*(float *)(iVar5 + 0x1a4));
        }
      }
      else {
        fVar3 = (float)_DAT_00e22a40 * param_1 * *(float *)(iVar5 + 0x18c) +
                *(float *)(iVar5 + 0x1a4);
        *(float *)(iVar5 + 0x1a4) = fVar3;
        if ((-0.6 < *(float *)(iVar5 + 0x18c)) && (fVar3 < *(float *)(iVar5 + 0x18c) * 0.5)) {
          fVar6 = (float10)FUN_00480650(0x41a00000,(float)_DAT_00e22a40);
          *(float *)(iVar5 + 0x1a4) = (float)(fVar6 * (float10)*(float *)(iVar5 + 0x1a4));
        }
      }
    }
    else {
      fVar3 = (float)_DAT_00e22a40 * param_1 * *(float *)(iVar5 + 0x18c) + *(float *)(iVar5 + 0x1a4)
      ;
      *(float *)(iVar5 + 0x1a4) = fVar3;
      if (*(float *)(iVar5 + 0x18c) < 0.99) {
        fVar4 = *(float *)(iVar5 + 0x18c) / (1.0 - *(float *)(iVar5 + 0x18c));
      }
      else {
        fVar4 = 10000.0;
      }
      if (fVar4 < fVar3) {
        fVar6 = (float10)FUN_00480650(*(undefined4 *)(iVar5 + 0x84),(float)_DAT_00e22a40);
        *(float *)(iVar5 + 0x1a4) = (float)(fVar6 * (float10)*(float *)(iVar5 + 0x1a4));
      }
    }
    uVar2 = *(uint *)(iVar5 + 0x60);
  }
  else {
    if (*(float *)(iVar5 + 0x18c) <= 0.1) {
      if (-0.1 <= *(float *)(iVar5 + 0x18c)) {
        fVar6 = (float10)FUN_00480650(*(undefined4 *)(iVar5 + 0x84),(float)_DAT_00e22a40);
        *(float *)(iVar5 + 0x1a4) = (float)(fVar6 * (float10)*(float *)(iVar5 + 0x1a4));
      }
      else {
        fVar3 = (float)_DAT_00e22a40 * param_1 * *(float *)(iVar5 + 0x18c) +
                *(float *)(iVar5 + 0x1a4);
        *(float *)(iVar5 + 0x1a4) = fVar3;
        if ((-0.6 < *(float *)(iVar5 + 0x18c)) && (fVar3 < *(float *)(iVar5 + 0x18c) * 0.5)) {
          fVar6 = (float10)FUN_00480650(0x41a00000,(float)_DAT_00e22a40);
          *(float *)(iVar5 + 0x1a4) = (float)(fVar6 * (float10)*(float *)(iVar5 + 0x1a4));
        }
      }
    }
    else {
      fVar3 = (float)_DAT_00e22a40 * param_1 * *(float *)(iVar5 + 0x18c) + *(float *)(iVar5 + 0x1a4)
      ;
      *(float *)(iVar5 + 0x1a4) = fVar3;
      if (*(float *)(iVar5 + 0x18c) < 0.99) {
        fVar4 = *(float *)(iVar5 + 0x18c) / (1.0 - *(float *)(iVar5 + 0x18c));
      }
      else {
        fVar4 = 10000.0;
      }
      if (fVar4 < fVar3) {
        fVar6 = (float10)FUN_00480650(*(undefined4 *)(iVar5 + 0x84),(float)_DAT_00e22a40);
        *(float *)(iVar5 + 0x1a4) = (float)(fVar6 * (float10)*(float *)(iVar5 + 0x1a4));
      }
    }
    uVar2 = *(uint *)(iVar5 + 0x60);
  }
  if ((uVar2 & 0x200) != 0) {
    fVar6 = (float10)FUN_00480650(*(undefined4 *)(iVar5 + 0x80),(float)_DAT_00e22a40);
    *(float *)(iVar5 + 0x1a4) = (float)(fVar6 * (float10)*(float *)(iVar5 + 0x1a4));
  }
  if (*(float *)(iVar5 + 0x1a4) <= 0.0) {
    fVar6 = -((-(float10)*(float *)(iVar5 + 0x1a4) * (float10)*(float *)(iVar5 + 0x7c)) /
             ((float10)*(float *)(iVar5 + 0x78) - (float10)*(float *)(iVar5 + 0x1a4)));
  }
  else {
    fVar6 = ((float10)*(float *)(iVar5 + 0x1a4) * (float10)*(float *)(iVar5 + 0x7c)) /
            ((float10)*(float *)(iVar5 + 0x78) + (float10)*(float *)(iVar5 + 0x1a4));
  }
  fVar6 = fVar6 * (float10)*(float *)(iVar5 + 0x1ac);
  if (15.0 <= *(float *)(iVar5 + 0x184)) {
    *(uint *)(iVar5 + 100) = *(uint *)(iVar5 + 100) & 0xf7ffffff;
  }
  else {
    uVar2 = *(uint *)(iVar5 + 100);
    if (((uVar2 & 0x8000000) == 0) &&
       (*(uint *)(iVar5 + 100) = uVar2 | 0x8000000, *(float *)(iVar5 + 0x244) < 1.0)) {
      *(uint *)(iVar5 + 100) = uVar2 | 0x18000000;
    }
    fVar6 = fVar6 * (float10)*(float *)(iVar5 + 0x244);
  }
  fVar6 = fVar6 + (float10)*(float *)(iVar5 + 0x240);
  if (((*(uint *)(iVar5 + 0x60) & 0x4000000) != 0) && (fVar6 < (float10)75.0)) {
    fVar6 = (float10)75.0;
  }
  if (((*(uint *)(iVar5 + 0x60) & 0x80) != 0) && (*(float *)(iVar5 + 0x2fc) < -0.5)) {
    if ((*(uint *)(iVar5 + 100) & 0x2000000) != 0) {
      return fVar6 * (float10)1.9;
    }
    fVar6 = fVar6 * (float10)1.3;
  }
  return fVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 FUN_004787f0(int param_1)

{
  float10 fVar1;

  if ((*(uint *)(param_1 + 0x60) & 0x800000) == 0) {
    if (0.0 < *(float *)(param_1 + 0x1a8)) {
      fVar1 = (float10)FUN_00480650(0x40a00000,(float)_DAT_00e22a40);
      *(float *)(param_1 + 0x1a8) = (float)(fVar1 * (float10)*(float *)(param_1 + 0x1a8));
    }
    if (*(float *)(param_1 + 0x1a8) < 0.001) {
      *(undefined4 *)(param_1 + 0x1a8) = 0;
    }
  }
  else {
    *(float *)(param_1 + 0x1a8) = (float)_DAT_00e22a40 * 1.5 + *(float *)(param_1 + 0x1a8);
  }
  if ((*(uint *)(param_1 + 0x60) & 0x200) != 0) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
  }
  if (0.0 < *(float *)(param_1 + 0x1a8)) {
    return ((float10)*(float *)(param_1 + 0x1a8) * (float10)*(float *)(param_1 + 0x88)) /
           ((float10)*(float *)(param_1 + 0x1a8) - (float10)-0.33);
  }
  return (float10)0.0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004788c0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  iVar2 = 0;
  if ((*(uint *)(param_1 + 100) & 0x40000) == 0) {
    if ((*(uint *)(param_1 + 0x60) & 0x800000) == 0) {
      fVar1 = (float)_DAT_00e22a40 * *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x218);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x218) - (float)_DAT_00e22a40 * *(float *)(param_1 + 0x8c);
    }
    *(float *)(param_1 + 0x218) = fVar1;
  }
  else {
    *(float *)(param_1 + 0x218) = *(float *)(param_1 + 0x218) - (float)_DAT_00e22a40 * 20.0;
    if (-0.5 <= *(float *)(param_1 + 0x208)) {
      if (0.5 < *(float *)(param_1 + 0x208)) {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = -1;
    }
  }
  if (100.0 <= *(float *)(param_1 + 0x218)) {
    *(undefined4 *)(param_1 + 0x218) = 0x42c80000;
  }
  if (0.0 < *(float *)(param_1 + 0x218)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (iVar2 < 0) {
    FUN_004816b0();
  }
  else {
    if (0 < iVar2) {
      FUN_004816b0();
      iVar2 = __ftol();
      iVar2 = 3 - iVar2;
      goto LAB_004789f4;
    }
    FUN_004816b0();
  }
  iVar2 = __ftol();
LAB_004789f4:
  if ((*(byte *)(param_1 + 0x2a0 + iVar2 * 4) & 8) == 0) {
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_0046e950(param_1,2 - iVar2 / 3,&local_c,0x3dcccccd);
  }
  *(uint *)(param_1 + 0x2a0 + iVar2 * 4) = *(uint *)(param_1 + 0x2a0 + iVar2 * 4) | 8;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00478a70(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  int iVar6;

  iVar6 = (int)param_1;
  fVar1 = *param_3;
  if (param_2 <= 0.0) {
    fVar1 = -fVar1;
    fVar2 = -param_3[1];
    fVar3 = -param_3[2];
  }
  else {
    fVar2 = param_3[1];
    fVar3 = param_3[2];
  }
  fVar5 = fVar3 * *(float *)((int)param_1 + 0x1c0) +
          fVar2 * *(float *)((int)param_1 + 0x1bc) + fVar1 * *(float *)((int)param_1 + 0x1b8);
  if (fVar5 < 0.0) {
    fVar5 = -fVar5;
    *(float *)((int)param_1 + 0x1b8) = fVar1 * fVar5 + *(float *)((int)param_1 + 0x1b8);
    *(float *)((int)param_1 + 0x1bc) = fVar2 * fVar5 + *(float *)((int)param_1 + 0x1bc);
    *(float *)((int)param_1 + 0x1c0) = fVar3 * fVar5 + *(float *)((int)param_1 + 0x1c0);
  }
  FUN_0042fa50(param_4,param_2,param_3);
  fVar1 = *(float *)((int)param_1 + 0x6c) * *(float *)((int)param_1 + 0x248) *
          *(float *)((int)param_1 + 0x24c);
  fVar1 = (1.0 - fVar1 * fVar1) * 0.996666;
  if (1.0 < *(float *)((int)param_1 + 0x22c)) {
    if (*(float *)((int)param_1 + 0x22c) <= 2.0) {
      fVar1 = (2.0 - *(float *)((int)param_1 + 0x22c)) * fVar1;
    }
    else {
      param_1 = 0.0;
      fVar1 = param_1;
    }
  }
  param_1 = fVar1;
  fVar5 = (float)_DAT_00e22a40;
  fVar3 = 1.0 - param_1;
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  *(float *)(iVar6 + 0x1b8) =
       (1.0 / fVar5) * (*param_4 * fVar5 * fVar3 + fVar5 * *(float *)(iVar6 + 0x1b8) * param_1);
  *(float *)(iVar6 + 0x1bc) =
       (1.0 / (float)_DAT_00e22a40) *
       (fVar5 * fVar1 * fVar3 + fVar5 * *(float *)(iVar6 + 0x1bc) * param_1);
  *(float *)(iVar6 + 0x1c0) =
       (1.0 / (float)_DAT_00e22a40) *
       (fVar5 * fVar2 * fVar3 + fVar5 * *(float *)(iVar6 + 0x1c0) * param_1);
  *param_4 = *(float *)(iVar6 + 0x1b8);
  param_4[1] = *(float *)(iVar6 + 0x1bc);
  param_4[2] = *(float *)(iVar6 + 0x1c0);
  FUN_0042f9b0(param_4);
  if (param_2 < 0.0) {
    param_2 = -param_2;
  }
  FUN_0042fa50(param_4,param_2,param_4);
  uVar4 = *(uint *)(iVar6 + 100);
  if ((uVar4 & 0x10) == 0) {
    fVar1 = 1.0;
    if ((uVar4 & 4) != 0) {
      fVar1 = 0.8;
    }
    if ((uVar4 & 8) != 0) {
      fVar1 = fVar1 * 0.45;
    }
    if (*(float *)(iVar6 + 0x24c) <= fVar1) {
      if ((*(float *)(iVar6 + 0x24c) < fVar1) &&
         (fVar2 = *(float *)(iVar6 + 0x24c) - (float)_DAT_00e22a40 * -2.0,
         *(float *)(iVar6 + 0x24c) = fVar2, fVar1 < fVar2)) {
        *(float *)(iVar6 + 0x24c) = fVar1;
        return;
      }
    }
    else {
      fVar2 = *(float *)(iVar6 + 0x24c) - ((float)_DAT_00e22a40 + (float)_DAT_00e22a40);
      *(float *)(iVar6 + 0x24c) = fVar2;
      if (fVar2 < fVar1) {
        *(float *)(iVar6 + 0x24c) = fVar1;
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00478d80(float param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined local_c [12];

  iVar4 = (int)param_1;
  fVar7 = (float10)FUN_004783e0(param_1);
  fVar8 = (float10)FUN_004787f0(param_1);
  fVar2 = (float)(fVar8 + (float10)(float)fVar7);
  FUN_00478a70(param_1,fVar2,param_4,&local_24);
  if (((((*(uint *)((int)param_1 + 100) & 0x400) == 0) &&
       ((*(uint *)((int)param_1 + 0x60) & 0x2000000) == 0)) && (0.0 < local_1c)) &&
     (fVar3 = local_20 * local_20 + local_24 * local_24, fVar3 * 0.1369 < local_1c * local_1c)) {
    fVar7 = (float10)FUN_00480670(fVar3);
    local_1c = (float)(fVar7 * (float10)0.2);
  }
  local_24 = local_24 + *(float *)((int)param_1 + 0x1dc);
  local_20 = local_20 + *(float *)((int)param_1 + 0x1e0);
  local_1c = local_1c + *(float *)((int)param_1 + 0x1e4);
  fVar7 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
  *(float *)((int)param_1 + 0x1d0) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x1d0));
  fVar7 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
  *(float *)((int)param_1 + 0x1d4) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x1d4));
  fVar7 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
  *(float *)((int)param_1 + 0x1d8) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x1d8));
  fVar7 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
  *(float *)((int)param_1 + 0x1dc) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x1dc));
  fVar7 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
  *(float *)((int)param_1 + 0x1e0) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x1e0));
  fVar7 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
  *(float *)((int)param_1 + 0x1e4) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x1e4));
  if (((*(uint *)((int)param_1 + 0x60) & 0x5000) == 0) &&
     (((0.1 < *(float *)((int)param_1 + 0x18c) || (0.1 < -*(float *)((int)param_1 + 0x18c))) ||
      ((*(uint *)((int)param_1 + 0x60) & 0x2000) == 0)))) {
    pfVar1 = (float *)((int)param_1 + 0x1c4);
    fVar3 = local_24 * *(float *)((int)param_1 + 0x1c4) +
            local_20 * *(float *)((int)param_1 + 0x1c8) +
            local_1c * *(float *)((int)param_1 + 0x1cc);
    if ((fVar3 < 0.0) || (fVar7 = (float10)FUN_0042f8c0(pfVar1), fVar7 <= (float10)1.0)) {
      local_24 = local_24 + *pfVar1;
      local_20 = local_20 + *(float *)((int)param_1 + 0x1c8);
      local_1c = local_1c + *(float *)((int)param_1 + 0x1cc);
    }
    else {
      if ((1.0 < fVar2) && (fVar2 = fVar3 / (fVar2 * 60.0), 0.0 < fVar2)) {
        fVar2 = (float)_DAT_00e22a40 * fVar2;
        *(float *)((int)param_1 + 0x1a4) = fVar2 + fVar2 + *(float *)((int)param_1 + 0x1a4);
      }
      fVar7 = ((float10)fVar3 / fVar7) * (float10)0.01;
      param_1 = (float)fVar7;
      if (fVar7 < (float10)1.0) {
        param_1 = 1.0;
      }
      FUN_0042fa80(&local_24,&local_24,param_1,pfVar1);
    }
  }
  FUN_0042fa80(param_3,param_2,(float)_DAT_00e22a40,&local_24);
  if (((1.0 <= ((float)*(int *)(iVar4 + 0x1998) - 400.0) * 0.001666667) &&
      ((*(byte *)(iVar4 + 0x60) & 0x20) == 0)) && ((*(uint *)(iVar4 + 100) & 0x4000000) == 0)) {
    *(undefined4 *)(iVar4 + 0x154) = 0;
    *(undefined4 *)(iVar4 + 0x158) = 0;
    *(undefined4 *)(iVar4 + 0x15c) = 0;
    return;
  }
  if ((*(uint *)(iVar4 + 100) & 0x800000) != 0) {
    *(undefined4 *)(iVar4 + 0x154) = 0;
    *(undefined4 *)(iVar4 + 0x158) = 0;
    *(undefined4 *)(iVar4 + 0x15c) = 0;
    return;
  }
  local_18 = *param_3;
  local_14 = param_3[1];
  local_10 = param_3[2];
  iVar5 = FUN_0044acb0(param_3,param_2,*(undefined4 *)(iVar4 + 0x13c),local_c);
  for (iVar6 = 0; (iVar5 != 0 && (iVar6 < 6)); iVar6 = iVar6 + 1) {
    iVar5 = FUN_0044acb0(param_3,param_2,*(undefined4 *)(iVar4 + 0x13c),local_c);
  }
  if ((0 < iVar6) && ((*(byte *)(iVar4 + 0x60) & 0x80) != 0)) {
    fVar7 = (float10)FUN_00480650(0x40a00000,(float)_DAT_00e22a40);
    *(float *)(iVar4 + 0x1a4) = (float)(fVar7 * (float10)*(float *)(iVar4 + 0x1a4));
  }
  fVar2 = param_3[2];
  fVar3 = param_3[1];
  *(float *)(iVar4 + 0x154) = *param_3 - local_18;
  *(float *)(iVar4 + 0x158) = fVar3 - local_14;
  *(float *)(iVar4 + 0x15c) = fVar2 - local_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004791d0(int param_1,undefined4 param_2,undefined4 param_3,float param_4,float *param_5,
                 float *param_6,undefined4 param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined local_18 [12];
  undefined local_c [12];

  pfVar4 = param_6;
  fVar3 = param_5[2] * *(float *)(param_1 + 0x19c) +
          param_5[1] * *(float *)(param_1 + 0x198) + *param_5 * *(float *)(param_1 + 0x194);
  if ((fVar3 < -0.995) || (0.995 < fVar3)) {
    FUN_0042f7b0(param_6,0,0,0);
    iVar1 = param_1 + 0x1c4;
    FUN_0042fa50(iVar1,0x3f666666,iVar1);
    FUN_0042f7d0(param_7,iVar1);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    return;
  }
  FUN_0042f9f0(local_18,param_5,(float *)(param_1 + 0x194));
  FUN_0042f9f0(param_6,param_5,local_18);
  FUN_0042f9b0(param_6);
  fVar3 = param_6[2] * *(float *)(param_1 + 0x19c) +
          param_6[1] * *(float *)(param_1 + 0x198) + *param_6 * *(float *)(param_1 + 0x194);
  fVar5 = (float10)FUN_0042f3e0(fVar3);
  _DAT_00e2712c = (float)fVar5;
  if (param_4 <= 50.0) {
    param_6 = (float *)((1.0 - param_4 * 0.02) * fVar3);
  }
  else {
    param_6 = (float *)0x0;
  }
  fVar3 = (float)param_6 * (float)param_6 * 400.0;
  FUN_0042fa50(local_c,-fVar3,pfVar4);
  FUN_0042fa80(param_7,param_1 + 0x1c4,(float)_DAT_00e22a40 + (float)_DAT_00e22a40,local_c);
  fVar6 = (float10)FUN_0042f8c0(param_7);
  fVar5 = fVar6;
  if (fVar6 < (float10)0.0) {
    fVar5 = -fVar6;
  }
  fVar2 = fVar3;
  if (fVar3 < 0.0) {
    fVar2 = -fVar3;
  }
  if ((float10)fVar2 < fVar5) {
    fVar6 = (float10)fVar3 / fVar6;
    if (fVar6 < (float10)0.0) {
      fVar6 = -fVar6;
    }
    FUN_0042fa50(param_7,(float)fVar6,param_7);
  }
  FUN_0042f7d0(param_1 + 0x1c4,param_7);
  local_30 = *pfVar4;
  local_2c = pfVar4[1];
  local_24 = *(float *)(param_1 + 0x30);
  local_20 = *(float *)(param_1 + 0x34);
  local_28 = 0.0;
  local_1c = 0.0;
  fVar5 = (float10)FUN_0042f9b0(&local_30);
  if (fVar5 < (float10)0.01) {
    local_30 = -*param_5;
    local_2c = -param_5[1];
    local_28 = -param_5[2];
  }
  FUN_0042f9b0(&local_24);
  fVar3 = local_28 * local_1c + local_2c * local_20 + local_30 * local_24;
  if (0.0 <= fVar3) {
    if (0.707 < fVar3) {
      fVar3 = (1.0 - fVar3) * 2.544529 * 0.707;
    }
    fVar3 = (local_30 * *pfVar4 + local_2c * pfVar4[1] + local_28 * pfVar4[2]) * fVar3;
    if (0.0 <= local_2c * local_24 - local_30 * local_20) {
      fVar3 = fVar3 * -2.0;
    }
    else {
      fVar3 = fVar3 + fVar3;
    }
  }
  else {
    fVar3 = 0.0;
  }
  if ((float)param_6 - -0.15 < 0.0) {
    fVar2 = ((float)param_6 - -0.15) * 1.176471;
    *(float *)(param_1 + 0x1f8) = fVar2 * fVar2 * fVar3 * 600.0;
    return;
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00479550(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float *param_5;
  float *param_6;
  undefined4 param_7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined local_c [12];

  pfVar4 = param_6;
  fVar3 = param_5[2] * *(float *)(param_1 + 0x19c) +
          param_5[1] * *(float *)(param_1 + 0x198) + *param_5 * *(float *)(param_1 + 0x194);
  if ((fVar3 < -0.995) || (0.995 < fVar3)) {
    FUN_0042f7b0(param_6,0,0,0);
    iVar1 = param_1 + 0x1c4;
    FUN_0042fa50(iVar1,0x3f666666,iVar1);
    FUN_0042f7d0(param_7,iVar1);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    return;
  }
  FUN_0042f9f0(&local_18,param_5,(float *)(param_1 + 0x194));
  FUN_0042f9b0(&local_18);
  FUN_0042f9f0(param_6,param_5,&local_18);
  fVar3 = param_6[1] * *(float *)(param_1 + 0x198) +
          *param_6 * *(float *)(param_1 + 0x194) + param_6[2] * *(float *)(param_1 + 0x19c);
  fVar5 = (float10)FUN_0042f3e0(fVar3);
  param_6 = (float *)(float)(fVar5 * (float10)-1.111111);
  if (200.0 <= *(float *)(param_1 + 0x1a0)) {
    if (250.0 <= *(float *)(param_1 + 0x1a0)) {
      if (300.0 <= *(float *)(param_1 + 0x1a0)) {
        if (350.0 <= *(float *)(param_1 + 0x1a0)) {
          param_6 = (float *)(((float)param_6 - 80.0) * 5.0);
        }
        else {
          param_6 = (float *)(((float)param_6 - 60.0) * 2.5);
        }
      }
      else {
        param_6 = (float *)(((float)param_6 - 40.0) * 1.666667);
      }
    }
    else {
      param_6 = (float *)(((float)param_6 - 25.0) * 1.333333);
    }
  }
  if ((float)param_6 < 0.0) {
    param_6 = (float *)0x0;
  }
  if ((float10)87.0 < fVar5) {
    param_6 = (float *)((float)param_6 + (float)param_6);
  }
  FUN_0042fa50(local_c,-(float)param_6,pfVar4);
  FUN_0042fa80(param_7,param_1 + 0x1c4,(float)_DAT_00e22a40 + (float)_DAT_00e22a40,local_c);
  fVar6 = (float10)FUN_0042f8c0(param_7);
  fVar5 = fVar6;
  if (fVar6 < (float10)0.0) {
    fVar5 = -fVar6;
  }
  fVar2 = (float)param_6;
  if ((float)param_6 < 0.0) {
    fVar2 = -(float)param_6;
  }
  if ((float10)fVar2 < fVar5) {
    fVar6 = (float10)(float)param_6 / fVar6;
    if (fVar6 < (float10)0.0) {
      fVar6 = -fVar6;
    }
    FUN_0042fa50(param_7,(float)fVar6,param_7);
  }
  FUN_0042f7d0(param_1 + 0x1c4,param_7);
  local_30 = *pfVar4;
  local_2c = pfVar4[1];
  local_24 = *(float *)(param_1 + 0x30);
  local_20 = *(float *)(param_1 + 0x34);
  local_28 = 0.0;
  local_1c = 0.0;
  fVar5 = (float10)FUN_0042f9b0(&local_30);
  if (fVar5 < (float10)0.01) {
    local_30 = -*param_5;
    local_2c = -param_5[1];
    local_28 = -param_5[2];
  }
  FUN_0042f9b0(&local_24);
  fVar2 = local_28 * local_1c + local_2c * local_20 + local_30 * local_24;
  if (0.0 <= fVar2) {
    if (local_1c * local_10 + local_20 * local_14 + local_24 * local_18 <= 0.0) {
      fVar5 = (float10)FUN_0042f3e0(fVar2);
      *(float *)(param_1 + 0x1f8) = (float)-(fVar5 * (float10)fVar3);
      return;
    }
    fVar5 = (float10)FUN_0042f3e0(fVar2);
    *(float *)(param_1 + 0x1f8) = (float)-(-fVar5 * (float10)fVar3);
    return;
  }
  *(float *)(param_1 + 0x1f8) = -(fVar3 * 0.0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00479920(int param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;

  local_30 = param_3[2];
  local_34 = param_3[1];
  local_38 = *param_3;
  bVar6 = false;
  fVar2 = local_38 * *param_2 + local_30 * param_2[2] + local_34 * param_2[1];
  fVar7 = (float10)FUN_0042f8c0(param_2);
  if ((float10)0.1 <= fVar7) {
    fVar7 = (float10)0.7 - (float10)fVar2 / fVar7;
  }
  else {
    fVar7 = (float10)0.0;
  }
  if ((float10)0.0 <= fVar7) {
    local_4c = (float)(fVar7 * (float10)1.428571);
  }
  else {
    local_4c = 0.0;
  }
  fVar2 = -fVar2;
  local_44 = local_38 * fVar2 + *param_2;
  local_40 = local_34 * fVar2 + param_2[1];
  local_3c = local_30 * fVar2 + param_2[2];
  *param_2 = local_44;
  param_2[1] = local_40;
  param_2[2] = local_3c;
  fVar7 = (float10)FUN_0042f8c0(&local_44);
  if (fVar7 < (float10)0.01) {
    return;
  }
  fVar2 = 1.0 / (float)fVar7;
  local_44 = local_44 * fVar2;
  local_40 = local_40 * fVar2;
  local_3c = local_3c * fVar2;
  fVar2 = *(float *)(param_1 + 0x38) * local_3c +
          *(float *)(param_1 + 0x34) * local_40 + local_44 * *(float *)(param_1 + 0x30);
  FUN_0042f9f0(&local_2c,param_1 + 0x194,(float *)(param_1 + 0x30));
  FUN_0042f9b0(&local_2c);
  fVar3 = local_4c * fVar2 * fVar2;
  fVar4 = local_24 * local_3c + local_28 * local_40 + local_2c * local_44;
  if (0.7 < fVar3) {
    uVar1 = *(uint *)(param_1 + 0x60);
    bVar6 = true;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xffffffef;
    if ((uVar1 & 0x7000) == 0) {
      *(undefined4 *)(param_1 + 0x264) = 0x3dcccccd;
    }
  }
  fVar5 = fVar3 * *(float *)(param_1 + 0x1a0) * 1.5;
  *(float *)(param_1 + 0x1d0) = local_44 * fVar5 + *(float *)(param_1 + 0x1d0);
  *(float *)(param_1 + 0x1d4) = local_40 * fVar5 + *(float *)(param_1 + 0x1d4);
  *(float *)(param_1 + 0x1d8) = local_3c * fVar5 + *(float *)(param_1 + 0x1d8);
  if ((*(uint *)(param_1 + 100) & 0x400) != 0) {
    *(undefined4 *)(param_1 + 500) = 0;
    goto LAB_00479c1f;
  }
  if (0.0 <= fVar2) {
LAB_00479c03:
    *(undefined4 *)(param_1 + 500) = 0;
  }
  else if (0.0 <= fVar4) {
    fVar5 = ((fVar4 - fVar2) - 1.0) * 2.5;
    *(float *)(param_1 + 500) = fVar5;
    if (fVar5 < 0.0) goto LAB_00479c03;
  }
  else {
    fVar5 = ((fVar4 + fVar2) - -1.0) * 2.5;
    *(float *)(param_1 + 500) = fVar5;
    if (0.0 < fVar5) goto LAB_00479c03;
  }
  *(float *)(param_1 + 500) = local_4c * -150.0 * *(float *)(param_1 + 500);
LAB_00479c1f:
  if ((0.0 < fVar3) && (100.0 < *(float *)(param_1 + 0x1a0))) {
    fVar8 = (float10)FUN_00480650(0x42480000,(float)_DAT_00e22a40);
    *(float *)(param_1 + 0x1a4) = (float)(fVar8 * (float10)*(float *)(param_1 + 0x1a4));
    if (0.05 < fVar3) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x40000;
    }
    local_20 = 0x48697474;
    if (bVar6) {
      local_1c = 0x4b506f77;
    }
    else {
      if (fVar2 < 0.0) {
        fVar2 = -fVar2;
      }
      fVar3 = fVar4;
      if (fVar4 < 0.0) {
        fVar3 = -fVar4;
      }
      if (fVar2 <= fVar3) {
        local_1c = 0x52745364;
        if (0.0 <= fVar4) {
          local_1c = 0x4c745364;
        }
      }
      else if (0.0 <= fVar4) {
        local_1c = 0x4c744674;
      }
      else {
        local_1c = 0x52744674;
      }
    }
    local_18 = (float)fVar7 / (float)_DAT_00e22a40;
    FUN_00450c00(param_1,&local_20);
  }
  return;
}



void FUN_00479d40(int param_1)

{
  float local_38;
  float local_34;
  float local_30;
  undefined local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  FUN_0042fa80(local_2c,param_1 + 0x50,0x40c00000,(float *)(param_1 + 0x144));
  local_38 = -*(float *)(param_1 + 0x144);
  local_34 = -*(float *)(param_1 + 0x148);
  local_30 = -*(float *)(param_1 + 0x14c);
  FUN_00477850(param_1,0x3e4ccccd,0,local_2c,&local_38,2);
  FUN_0041df10(0xffffffff,0,0x5370726b,**(undefined4 **)(param_1 + 0x1e70),0xa0000000,0x3fc99999,0,0
               ,local_2c,&local_38,2);
  local_18 = *(undefined4 *)(param_1 + 0x150);
  local_20 = 0x48697474;
  local_1c = 0x56684c74;
  FUN_00450c00(param_1,&local_20);
  return;
}

#endif
