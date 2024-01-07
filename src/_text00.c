#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
#if 0
undefined4 FUN_00401000(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  uVar1 = FUN_00414d90(param_1,0xc);
  FUN_00414e60(uVar1,*(char *)(DAT_0050c454 + 0x51) == '\0');
  uVar1 = FUN_00414d90(param_1,0xe);
  FUN_00414e60(uVar1,*(char *)(DAT_0050c454 + 0x51) == '\0');
  uVar1 = FUN_00414d90(param_1,0xd);
  FUN_00414e60(uVar1,*(char *)(DAT_0050c454 + 0x51) == '\0');
  uVar1 = FUN_00414d90(param_1,0xf);
  FUN_00414e60(uVar1,*(char *)(DAT_0050c454 + 0x51) == '\0');
  uVar1 = FUN_00414d90(param_1,0x10);
  FUN_00414e60(uVar1,*(char *)(DAT_0050c454 + 0x51) == '\0');
  uVar1 = FUN_00414d90(param_1,1);
  FUN_00414e60(uVar1,*(char *)(DAT_0050c454 + 0x51) == '\0');
  iVar3 = 0;
  do {
    uVar1 = FUN_00414d90(param_1,iVar3 + 10000);
    FUN_00414e60(uVar1,(int)*(char *)(DAT_0050c454 + 0x51));
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1a);
  if (param_2 < 0x14) {
    if (param_2 == 0x13) {
      return 1;
    }
    if ((param_2 == 0xe) && (param_3 != 0)) {
      DAT_004b2940 = 0;
      DAT_004d6b6c = 0;
      FUN_00412640(0);
      return 0;
    }
  }
  else if (param_2 == 100) {
    if (DAT_004d5570 != 0xd) {
      if (DAT_004d5570 != 0x10) {
        return 0;
      }
      if (param_3 == 0) {
        FUN_004240d0();
        FUN_0049ea40(0);
      }
    }
    DAT_004d5570 = 0;
  }
  else if (param_2 == 1000) {
    switch(param_3) {
    case 0xc:
      uVar1 = FUN_00414d90(0,0x2736);
      FUN_0040c4e0(uVar1);
      uVar1 = FUN_00414d90(uVar1,1);
      uVar2 = FUN_00421360(s__MONDOTEXT_H_0000_SINGLE_PLAYER_F_004b2180,0);
      FUN_00414b80(uVar1,uVar2);
      _DAT_0050c450 = 0;
      FUN_00411820(0x2736);
      return 0;
    case 0xd:
      _DAT_0050c450 = 0;
      iVar3 = FUN_0041e9d0();
      if (iVar3 == 0) {
        uVar1 = FUN_00421360(s__MONDOTEXT_H_0521__sOK_004b212c,0,0,0);
        uVar1 = FUN_00421360(s__MONDOTEXT_H_0520__sYou_must_hav_004b20e8,uVar1);
        uVar1 = FUN_00421360(s__MONDOTEXT_H_0519__sMultiplayer_004b20c8,uVar1);
        FUN_004145b0(param_1,0xffffffff,0xffffffff,uVar1);
        DAT_004d5570 = 0xd;
        return 0;
      }
      FUN_00411820(0x186a5);
      return 0;
    case 0xe:
      uVar1 = FUN_00414d90(0,0x2736);
      FUN_0040c4e0(uVar1);
      uVar1 = FUN_00414d90(uVar1,1);
      uVar2 = FUN_00421360(s__MONDOTEXT_H_0001_SINGLE_PLAYER_T_004b2144,0);
      FUN_00414b80(uVar1,uVar2);
      _DAT_0050c450 = 1;
      FUN_00411820(0x2736);
      return 0;
    case 0xf:
      FUN_00411820(0x15);
      return 0;
    case 0x10:
      uVar1 = FUN_00414d90(0,0xb);
      uVar2 = FUN_00421360(s__MONDOTEXT_H_0033__sNo_004b20b0,0,0);
      uVar2 = FUN_00421360(s__MONDOTEXT_H_0032__sYes_004b2098,uVar2);
      uVar2 = FUN_00421360(s_>_MONDOTEXT_H_0523_Are_you_sure_y_004b205b + 1,uVar2);
      FUN_004145b0(uVar1,0xffffffff,0xffffffff,&DAT_004d55cc,uVar2);
      DAT_004d5570 = 0x10;
      return 0;
    }
  }
  return 0;
}



void FUN_00403e10(undefined *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;

  if (DAT_004b2910 != 0) {
    iVar3 = 6;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    puVar2 = (undefined4 *)(param_1 + 0x198);
    do {
      puVar2[1] = 0xffffffff;
      *(undefined *)(puVar2 + 2) = 0;
      puVar2[8] = 0xffffffff;
      puVar2[-0x54] = 0;
      puVar2[-0x53] = 0;
      *puVar2 = 0;
      FUN_004046e0(puVar2 + -0x54);
      puVar2 = puVar2 + 0x5d;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_004d55d0 = (&DAT_00eca0e4)[DAT_004d6b3c * 0x9d];
    if ((&DAT_00ec9ec5)[DAT_004d6b3c * 0x274] == '\x06') {
      DAT_004d55d4 = 1;
    }
    else {
      uVar1 = FUN_0049edd0(&DAT_00ec9fcc + DAT_004d6b3c * 0x274,&DAT_004b2638);
      iVar3 = FUN_0049ed50(uVar1);
      if (iVar3 != 0) {
        DAT_004d55d4 = 1;
      }
    }
    if (((&DAT_00eca0ec)[DAT_004d6b3c * 0x9d] & 0x100) == 0) {
      DAT_004b2914 = 0;
      DAT_004b2910 = 0;
    }
  }
  return;
}



void FUN_00403f00(int param_1)

{
  if (DAT_004b2910 != 0) {
    FUN_00404040(param_1);
    if (*(int *)(param_1 + 0x40) != 0) {
      _IFReleaseProject_4(*(int *)(param_1 + 0x40));
    }
    FUN_00403e10(param_1);
  }
  return;
}



undefined4 FUN_00403f30(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_EBX;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;

  if (DAT_004b2910 == 0) {
    return 0;
  }
  iVar2 = _IFLoadProjectFile_8(param_2,DAT_004d55d0);
  *(int *)(unaff_EBX + 0x40) = iVar2;
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  iVar2 = 0;
  puVar6 = (undefined4 *)(unaff_EBX + 0x1a0);
  do {
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = param_1[-1] + 1;
    }
    puVar6[-1] = iVar3;
    uVar4 = 0xffffffff;
    pcVar8 = *(char **)(param_2 + iVar3 * 4);
    do {
      pcVar9 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    puVar7 = (undefined4 *)(pcVar9 + -uVar4);
    puVar10 = puVar6;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar2 = iVar2 + 1;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined *)puVar10 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    puVar6[6] = *param_1;
    puVar6 = puVar6 + 0x5d;
    param_1 = param_1 + 1;
    if (5 < iVar2) {
      return 6;
    }
  } while( true );
}



int FUN_00403fd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = 0;
  if (DAT_004b2910 == 0) {
    return 0;
  }
  if ((DAT_004d55d0 != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    iVar3 = param_1 + 0x48;
    iVar4 = 6;
    do {
      iVar1 = FUN_004040a0(iVar3,iVar3 + 0x158,*(undefined4 *)(param_1 + 0x40));
      if (iVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x174;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return -1;
}



int FUN_00404040(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = 0;
  if (DAT_004b2910 == 0) {
    return 0;
  }
  if ((DAT_004d55d0 != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    iVar3 = param_1 + 0x48;
    iVar4 = 6;
    do {
      iVar1 = FUN_00404190(iVar3,*(undefined4 *)(param_1 + 0x40));
      if (iVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x174;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return iVar2;
  }
  return -1;
}



undefined4 FUN_004040a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_retaddr;

  if ((DAT_004b2910 != 0) && (param_1 != (int *)0x0)) {
    if (param_1[1] != 0) {
      FUN_00404190(param_1,param_3);
    }
    iVar2 = _IFCreateEffects_12(param_3,param_2,param_1);
    param_1[1] = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < *param_1) {
        do {
          FUN_004046e0(param_1);
          piVar1 = *(int **)(param_1[1] + iVar2 * 4);
          iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,param_1 + 2,0x1ff);
          if (iVar3 == -0x7ffbfdfe) {
            iVar3 = param_1[0xd];
            FUN_004046e0(param_1);
            iVar4 = (**(code **)(DAT_00ecc420 + 0x20))(iVar3);
            param_1[0x54] = iVar4;
            param_1[0xe] = iVar4;
            param_1[0xd] = iVar3;
            piVar1 = *(int **)(param_1[1] + iVar2 * 4);
            iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,param_1 + 2,0x1ff);
          }
          if (iVar3 != 0) {
            _IFReleaseEffects_8(unaff_retaddr,param_1[1]);
            param_1[1] = 0;
            return 0;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *param_1);
      }
      return 1;
    }
  }
  return 0;
}



int FUN_00404190(int param_1,undefined4 param_2)

{
  int iVar1;

  if (DAT_004b2910 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    return iVar1;
  }
  iVar1 = _IFReleaseEffects_8(param_2,iVar1);
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}



undefined4 FUN_004041c0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  if (((DAT_004b2910 != 0) && (DAT_004d55d0 != 0)) && (param_1[1] != 0)) {
    if ((param_2 == 0) && (iVar2 = FUN_00404280(param_1), iVar2 != 0)) {
      return 0;
    }
    iVar2 = 0;
    if (0 < *param_1) {
      do {
        piVar1 = *(int **)(param_1[1] + iVar2 * 4);
        iVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,1,0);
        if (iVar3 < 0) {
          return 0xffffffff;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    return 1;
  }
  return 0xffffffff;
}



undefined4 FUN_00404230(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  if (((DAT_004b2910 != 0) && (param_1 != (int *)0x0)) && (param_1[1] != 0)) {
    iVar3 = 0;
    if (0 < *param_1) {
      do {
        piVar1 = *(int **)(param_1[1] + iVar3 * 4);
        iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
        if (iVar2 < 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *param_1);
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_00404280(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  piVar2 = param_1;
  if ((((DAT_004b2910 != 0) && (DAT_004d55d0 != 0)) && (param_1[1] != 0)) &&
     (iVar4 = 0, 0 < *param_1)) {
    while (piVar1 = *(int **)(piVar2[1] + iVar4 * 4),
          iVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,&param_1), -1 < iVar3) {
      if (((uint)param_1 & 1) != 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      if (*piVar2 <= iVar4) {
        return 0;
      }
    }
  }
  return 0;
}



int FUN_004042f0(int param_1)

{
  if (DAT_004b2910 == 0) {
    return -1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return -1;
  }
  return **(int **)(param_1 + 0x2c) / 100;
}



undefined4 FUN_00404330(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  if ((((DAT_004b2910 != 0) && (param_1[1] != 0)) && (-1 < param_2)) && (param_2 < 0x169)) {
    iVar2 = FUN_004042f0(param_1);
    if (iVar2 == param_2) {
      return 2;
    }
    iVar2 = 0;
    *(int *)param_1[0xb] = param_2 * 100;
    if (0 < *param_1) {
      do {
        piVar1 = *(int **)(param_1[1] + iVar2 * 4);
        iVar3 = (**(code **)(*piVar1 + 0x18))
                          (piVar1,param_1 + 2,
                           (-(uint)(param_3 != 0) & 0xe0000000) + 0x40000000 | 0x40);
        if (iVar3 < 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    return 1;
  }
  return 0;
}



uint FUN_004043d0(int param_1)

{
  if (DAT_004b2910 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0x18) / 100;
}



undefined4 FUN_00404400(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  if ((((DAT_004b2910 != 0) && (param_1[1] != 0)) && (-1 < param_2)) && (param_2 < 0x65)) {
    iVar2 = FUN_004043d0(param_1);
    if (iVar2 == param_2) {
      return 2;
    }
    iVar2 = 0;
    param_1[6] = param_2 * 100;
    if (0 < *param_1) {
      do {
        piVar1 = *(int **)(param_1[1] + iVar2 * 4);
        iVar3 = (**(code **)(*piVar1 + 0x18))
                          (piVar1,param_1 + 2,(-(uint)(param_3 != 0) & 0xe0000000) + 0x40000000 | 4)
        ;
        if (iVar3 < 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    return 1;
  }
  return 0;
}



uint FUN_004044a0(int param_1)

{
  if (DAT_004b2910 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 0x10) == 0xffffffff) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0x10) / 1000;
}



undefined4 FUN_004044e0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  if (param_2 == -1) {
    iVar3 = -1;
  }
  else {
    iVar3 = param_2 * 1000;
  }
  if (DAT_004b2910 == 0) {
    return 0;
  }
  if (param_1[1] == 0) {
    return 0;
  }
  iVar2 = FUN_004044a0(param_1);
  if (iVar2 == param_2) {
    return 2;
  }
  param_1[4] = iVar3;
  iVar3 = 0;
  if (*param_1 < 1) {
    return 1;
  }
  do {
    piVar1 = *(int **)(param_1[1] + iVar3 * 4);
    iVar2 = (**(code **)(*piVar1 + 0x18))
                      (piVar1,param_1 + 2,(-(uint)(param_3 != 0) & 0xe0000000) + 0x40000000 | 1);
    if (iVar2 < 0) {
      return 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < *param_1);
  return 1;
}



bool FUN_00404590(int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;

  if (DAT_004b2910 == 0) {
    return false;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return false;
  }
  (**(code **)(DAT_00ecc420 + 0x24))(*(undefined4 *)(param_1 + 0x150));
  puVar1 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(param_2);
  *(undefined4 **)(param_1 + 0x150) = puVar1;
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar1 = *(undefined *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(uint *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x150);
  iVar2 = (**(code **)(***(int ***)(param_1 + 4) + 0x18))
                    (**(int ***)(param_1 + 4),param_1 + 8,
                     CONCAT22((short)((-(uint)(param_4 != 0) & 0xe0000000) + 0x40000000 >> 0x10),
                              0x100));
  return -1 < iVar2;
}



int ** FUN_00404640(int param_1,undefined4 param_2)

{
  int **ppiVar1;
  int iVar2;

  if (DAT_004b2910 == 0) {
    return (int **)0x0;
  }
  ppiVar1 = *(int ***)(param_1 + 4);
  if (ppiVar1 == (int **)0x0) {
    return ppiVar1;
  }
  iVar2 = (**(code **)(**ppiVar1 + 0x10))(*ppiVar1,param_2);
  return (int **)(uint)(-1 < iVar2);
}



undefined4 FUN_00404670(undefined4 param_1)

{
  int iVar1;
  undefined local_134 [16];
  undefined4 local_124 [2];
  undefined uStack_11c;
  undefined *puStack_4;

  iVar1 = FUN_00404640(param_1,local_134);
  if (iVar1 == 0) {
    return 0;
  }
  local_124[0] = 0x124;
  iVar1 = (**(code **)(*DAT_004d55d0 + 0x50))(DAT_004d55d0,local_124,local_134);
  if (iVar1 < 0) {
    return 0;
  }
  *puStack_4 = uStack_11c;
  return 1;
}



void FUN_004046e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)(param_1 + 8);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(int *)(param_1 + 0x2c) = param_1 + 0x3c;
  puVar2 = (undefined4 *)(param_1 + 0x13c);
  *(int *)(param_1 + 0x28) = param_1 + 0xbc;
  *(undefined4 *)(param_1 + 8) = 0x34;
  *(undefined4 *)(param_1 + 0xc) = 0x71;
  *(undefined4 *)(param_1 + 0x24) = 0x20;
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *puVar2 = 0x14;
  if (*(int *)(param_1 + 0x150) != 0) {
    (**(code **)(DAT_00ecc420 + 0x24))(*(int *)(param_1 + 0x150));
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  return;
}



void FUN_00404760(undefined4 param_1)

{
  int iVar1;

  iVar1 = FUN_00486bc0(param_1);
  if (iVar1 == -0x7788ff06) {
    FUN_0049eb80(s_Unknown_error_004b75f8,s_Not_available___s_004b292c,&DAT_00ecbc20);
    return;
  }
  if (iVar1 != 0) {
    FUN_0049eb80(s_Unknown_error_004b75f8,s_Did_not_connect___s_004b2918,&DAT_00ecbc20);
  }
  return;
}



undefined4 FUN_004047b0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;

  iVar3 = *(int *)(param_1 + 0x20) + 4;
  if (param_2 == -1) {
    uVar2 = 0;
    if (DAT_004eb3b8 != 0) {
      piVar4 = &DAT_00e9f448;
      iVar1 = DAT_004d5e08;
      do {
        if (((*(byte *)(piVar4 + -1) & 1) != 0) && (*piVar4 != iVar1)) {
          FUN_00486ca0(iVar1,*piVar4,param_1 + 0x24,iVar3,0);
          DAT_004d5e10 = DAT_004d5e10 + 1;
          DAT_004d5e0c = DAT_004d5e0c + iVar3;
          iVar1 = DAT_004d5e08;
        }
        uVar2 = uVar2 + 1;
        piVar4 = piVar4 + 0x2c;
      } while (uVar2 < DAT_004eb3b8);
      return 1;
    }
  }
  else {
    iVar1 = FUN_00486ca0(DAT_004d5e08,param_2,param_1 + 0x24,iVar3,0);
    if (iVar1 < 0) {
      return 0;
    }
    DAT_004d5e10 = DAT_004d5e10 + 1;
    DAT_004d5e0c = DAT_004d5e0c + iVar3;
  }
  return 1;
}



undefined4 FUN_00404880(int param_1)

{
  int iVar1;
  int iVar2;
  int local_4;

  iVar1 = param_1;
  local_4 = 0x804;
  if (DAT_004d5e00 != 0) {
    iVar2 = FUN_00486cd0(&param_1,param_1 + 0x24,&local_4);
    if (iVar2 != -1) {
      DAT_004d5e18 = DAT_004d5e18 + 1;
      if (iVar2 == 0) {
        DAT_004d5e14 = DAT_004d5e14 + local_4;
        *(int *)(iVar1 + 0x20) = local_4 + -4;
        *(int *)(iVar1 + 0x1c) = param_1;
        return 1;
      }
      if (iVar2 == 2) {
        FUN_0041c780(param_1);
      }
      else if (iVar2 == 5) {
        if (DAT_004eb1c8 != 0) {
          FUN_0041cbd0(param_1,1);
          return 0;
        }
      }
      else if (iVar2 == 8) {
        DAT_004eb1c8 = 1;
        DAT_00ec7620 = DAT_004d5e08;
        FUN_0041ca50(DAT_004d5e08);
        return 0;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00404960(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = FUN_004870d0(param_1,param_3);
  if (iVar1 == 0) {
    DAT_004d5e00 = 1;
    DAT_004d5e04 = iVar1;
    DAT_004d5e08 = FUN_004872e0(param_2);
    if (DAT_004d5e08 == 0) {
      if (DAT_004d5e00 != 0) {
        FUN_00487180();
        DAT_004d5e00 = 0;
      }
      return -0x7fffbffb;
    }
    FUN_0049ef50(&DAT_00e9f380,param_2,0x1f);
    _DAT_00e9f3be = 0;
    iVar1 = 0;
  }
  return iVar1;
}



void FUN_004049e0(void)

{
  if (DAT_004d5e08 != 0) {
    FUN_00487320(DAT_004d5e08);
  }
  FUN_00487180();
  DAT_004d5e00 = 0;
  DAT_004d5e08 = 0;
  DAT_004eb3b4 = 0;
  return;
}



int FUN_00404a20(int param_1)

{
  int iVar1;

  iVar1 = FUN_00486d40(param_1);
  if (iVar1 == 0) {
    DAT_004d5e08 = FUN_004872e0(param_1 + 0x18);
    if (DAT_004d5e08 == 0) {
      FUN_00487180();
      return -0x7fffbffb;
    }
    DAT_004d5e00 = 1;
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00404b10(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  iVar1 = FUN_00485360();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00485570();
  if (iVar1 != 0) {
    return 1;
  }
  FUN_00407de0();
  iVar1 = 0;
  DAT_00ec8824 = 0;
  DAT_00ec879c = 0;
  _DAT_00ec887c = 0;
  DAT_00ec87a0 = 0;
  do {
    iVar2 = FUN_004855f0(iVar1 + DAT_004d6b3c * 6);
    if (iVar2 != 0) {
      _DAT_00ec887c = _DAT_00ec887c | 1 << ((byte)iVar1 & 0x1f);
      DAT_00ec87a0 = DAT_00ec87a0 + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  if (DAT_00ec87a0 == 0) {
    DAT_004b294c = 0;
    DAT_004b2944 = 0;
  }
  else {
    DAT_00ec879c = *(undefined4 *)(&DAT_00eca0f8 + DAT_004d6b3c * 0x274);
    DAT_00ec8824 = *(undefined4 *)(&DAT_00eca0fc + DAT_004d6b3c * 0x274);
  }
  DAT_00ec8770 = 0;
  DAT_00ec8808 = 0;
  DAT_00ec878c = 0;
  iVar1 = 0;
  do {
    iVar2 = FUN_004855f0(iVar1 + 0x30);
    if (iVar2 != 0) {
      DAT_00ec8808 = DAT_00ec8808 | 1 << ((byte)iVar1 & 0x1f);
      DAT_00ec878c = DAT_00ec878c + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (DAT_00ec878c == 0) {
    DAT_004b2950 = 0;
    DAT_004d6b38 = 0;
  }
  else {
    DAT_00ec8770 = DAT_00ecb498;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004d5e68);
  _DAT_00ec8810 = 0;
  DAT_004d5e60._0_1_ = 0;
  _DAT_00ec8814 = 0;
  DAT_004d6b54 = 1;
  _DAT_00ec8818 = 0;
  DAT_004d6300 = 0;
  _DAT_00ec881c = 0;
  DAT_004d6824 = 0;
  DAT_00ec881e = 0;
  DAT_004d6304 = 1;
  DAT_004d5fb8 = 1;
  DAT_004d6308 = 0;
  FUN_00407800(0xffffffff);
  FUN_0040a120(0);
  FUN_00409d70(0);
  FUN_00409ee0(0x11,0xffffffff,0xffffffff,0xffffffff,0);
  iVar1 = FUN_0040ae40(s_current_004b2640);
  if (iVar1 < 0) {
    FUN_0040ab60();
    FUN_0040ab80(s_current_004b2640);
  }
  iVar1 = FUN_00406470(0xffffffff,&DAT_004d55cc,1);
  if (iVar1 < 0) {
    FUN_00405ea0(0);
    FUN_00405ea0(1);
    FUN_00405ea0(2);
  }
  if (DAT_004d55d4 != 0) {
    FUN_00406470(0,&DAT_004b2638,1);
    DAT_004b297c = 0;
    DAT_00ec876c = 0;
  }
  uVar3 = FUN_00406470(0xffffffff,s_current_004b2640,0);
  if (0x7fffffff < uVar3) {
    FUN_00406080(s_current_004b2640);
  }
  FUN_00407630(0);
  FUN_00407630(1);
  return 0;
}



undefined4 FUN_00404da0(void)

{
  FUN_0040a120(0);
  FUN_00409d70(0xffffffff);
  FUN_004855a0();
  FUN_00485460();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404dd0(void)

{
  byte bVar1;
  float fVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  int *piVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  int local_c;
  uint uStack_4;

  FUN_00485630();
  uVar11 = DAT_004b38ac;
  puVar15 = &DAT_004d5e80;
  for (uVar10 = DAT_004b38ac >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  DAT_00ec8820 = 0;
  for (uVar11 = uVar11 & 3; uVar10 = DAT_004b38b0, uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined *)puVar15 = 0;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  puVar15 = &DAT_004d5e30;
  for (uVar11 = DAT_004b38b0 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined *)puVar15 = 0;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  if ((DAT_004b2944 == 0) && (DAT_004d6b34 == 0)) {
    FUN_00405cf0(0);
  }
  else {
    FUN_00426910(0,0xffffffff);
    if (DAT_004d6b34 != 0) {
      _DAT_004d62d0 = DAT_00ec87c0;
      _DAT_004d62d4 = DAT_00ec87c4;
      _DAT_004d62d8 = _DAT_00ec87c8;
      _DAT_004d62dc = _DAT_00ec87cc;
      _DAT_004d62e0 = _DAT_00ec87d0;
      _DAT_004d62e4 = _DAT_00ec87d4;
      fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 3);
      if (fVar17 * (float10)_DAT_004b298c < (float10)-1.0) {
        fVar17 = (float10)-1.0;
      }
      else {
        fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 3);
        if ((float10)1.0 < fVar17 * (float10)_DAT_004b298c) {
          fVar17 = (float10)1.0;
        }
        else {
          fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 3);
          fVar17 = fVar17 * (float10)_DAT_004b298c;
        }
      }
      _DAT_00ec87cc = (float)fVar17;
      fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 4);
      if (fVar17 * (float10)_DAT_004b2990 < (float10)-1.0) {
        fVar17 = (float10)-1.0;
      }
      else {
        fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 4);
        if ((float10)1.0 < fVar17 * (float10)_DAT_004b2990) {
          fVar17 = (float10)1.0;
        }
        else {
          fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 4);
          fVar17 = fVar17 * (float10)_DAT_004b2990;
        }
      }
      _DAT_00ec87d0 = (float)fVar17;
      fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 5);
      if (fVar17 * (float10)_DAT_004b2994 < (float10)-1.0) {
        fVar17 = (float10)-1.0;
      }
      else {
        fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 5);
        if ((float10)1.0 < fVar17 * (float10)_DAT_004b2994) {
          fVar17 = (float10)1.0;
        }
        else {
          fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 5);
          fVar17 = fVar17 * (float10)_DAT_004b2994;
        }
      }
      _DAT_00ec87d4 = (float)fVar17;
    }
    fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6);
    if (fVar17 * (float10)DAT_004b2980 < (float10)-1.0) {
      fVar17 = (float10)-1.0;
    }
    else {
      fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6);
      if ((float10)1.0 < fVar17 * (float10)DAT_004b2980) {
        fVar17 = (float10)1.0;
      }
      else {
        fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6);
        fVar17 = fVar17 * (float10)DAT_004b2980;
      }
    }
    DAT_00ec87c0 = (float)fVar17;
    fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 1);
    if (fVar17 * (float10)_DAT_004b2984 < (float10)-1.0) {
      fVar17 = (float10)-1.0;
    }
    else {
      fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 1);
      if ((float10)1.0 < fVar17 * (float10)_DAT_004b2984) {
        fVar17 = (float10)1.0;
      }
      else {
        fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 1);
        fVar17 = fVar17 * (float10)_DAT_004b2984;
      }
    }
    DAT_00ec87c4 = (float)fVar17;
    fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 2);
    if (fVar17 * (float10)_DAT_004b2988 < (float10)-1.0) {
      fVar17 = (float10)-1.0;
    }
    else {
      fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 2);
      if ((float10)1.0 < fVar17 * (float10)_DAT_004b2988) {
        fVar17 = (float10)1.0;
      }
      else {
        fVar17 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 2);
        fVar17 = fVar17 * (float10)_DAT_004b2988;
      }
    }
    _DAT_00ec87c8 = (float)fVar17;
    pbVar16 = &DAT_004d5fc0;
    do {
      bVar1 = *pbVar16;
      iVar12 = *(int *)(pbVar16 + 8);
      iVar7 = *(int *)(pbVar16 + 4);
      if (bVar1 == 0xff) break;
      if ((bVar1 & 8) == 0) {
        if ((bVar1 & 4) != 0) {
          iVar9 = iVar7 + DAT_004d6b3c * 6;
          if ((bVar1 & 1) == 0) {
            if ((bVar1 & 2) != 0) {
              iVar8 = (-(uint)((&DAT_00ec8880)[iVar7] != 0) & 0xfffffffe) + 1;
              if ((bVar1 & 0x10) == 0) {
                if ((bVar1 & 0x20) == 0) {
                  iVar9 = FUN_00485840(iVar9,0);
                  if ((&DAT_00ec8880)[iVar7] == 0) {
                    if ((float)iVar9 == 0.0) {
                      local_c = 0;
                    }
                    else {
LAB_00405c80:
                      local_c = 1;
                    }
                  }
                  else {
                    if ((float)iVar9 == 0.0) goto LAB_00405c80;
                    local_c = 0;
                  }
                  fVar2 = (float)local_c;
                }
                else {
                  iVar7 = FUN_00408040(iVar9,iVar8,0,0x3f4ccccd);
                  fVar2 = (float)iVar7;
                }
              }
              else {
                iVar7 = FUN_00408040(iVar9,-iVar8,0,0x3f4ccccd);
                fVar2 = (float)iVar7;
              }
              if ((iVar12 == 2) && (fVar2 != 0.0)) {
                DAT_00ec8820 = 1;
              }
              if ((fVar2 != 0.0) || (local_c = 0, (float)(&DAT_004d5e80)[iVar12] != 0.0)) {
                local_c = 1;
              }
              (&DAT_004d5e80)[iVar12] = (float)local_c;
            }
          }
          else {
            fVar17 = (float10)FUN_004856e0(iVar9);
            if (fVar17 * (float10)(&DAT_004b2980)[iVar7] < (float10)-1.0) {
              fVar17 = (float10)-1.0;
            }
            else {
              fVar17 = (float10)FUN_004856e0(iVar9);
              if ((float10)1.0 < fVar17 * (float10)(&DAT_004b2980)[iVar7]) {
                fVar17 = (float10)1.0;
              }
              else {
                fVar17 = (float10)FUN_004856e0(iVar9);
                fVar17 = fVar17 * (float10)(&DAT_004b2980)[iVar7];
              }
            }
            if ((&DAT_00ec8880)[iVar7] == 0) {
              fVar18 = (float10)1.0;
            }
            else {
              fVar18 = (float10)-1.0;
            }
            (&DAT_004d5e30)[iVar12] =
                 (float)(fVar17 * fVar18 + (float10)(float)(&DAT_004d5e30)[iVar12]);
          }
        }
      }
      else {
        iVar7 = (DAT_004d6b3c + 8) * 0x20 + iVar7;
        if ((bVar1 & 1) == 0) {
          if ((bVar1 & 2) != 0) {
            iVar7 = FUN_00485880(iVar7,0);
            if (((float)iVar7 != 0.0) || (local_c = 0, (float)(&DAT_004d5e80)[iVar12] != 0.0)) {
              local_c = 1;
            }
            (&DAT_004d5e80)[iVar12] = (float)local_c;
          }
        }
        else {
          fVar17 = (float10)FUN_004857b0(iVar7);
          if ((*pbVar16 & 0x10) == 0) {
            if ((*pbVar16 & 0x20) != 0) {
              (&DAT_004d5e30)[iVar12] = (float)((float10)(float)(&DAT_004d5e30)[iVar12] - fVar17);
            }
          }
          else {
            (&DAT_004d5e30)[iVar12] = (float)(fVar17 + (float10)(float)(&DAT_004d5e30)[iVar12]);
          }
        }
      }
      pbVar16 = pbVar16 + 0xc;
    } while ((int)pbVar16 < 0x4d62c0);
  }
  if ((DAT_004d6b58 == 0) && ((DAT_004d6b38 != 0 || (DAT_004d6b34 != 0)))) {
    if (DAT_004d6b34 != 0) {
      _DAT_004d62e8 = _DAT_00ec87d8;
      _DAT_004d62ec = _DAT_00ec87dc;
      _DAT_004d62f0 = _DAT_00ec87e0;
    }
    uStack_4 = 0xbff00000;
    if (DAT_00ec8790 == 0) {
      uStack_4 = 0x3ff00000;
    }
    fVar17 = (float10)FUN_004856e0(0x30);
    uVar3 = (ulonglong)uStack_4;
    uStack_4 = 0xbff00000;
    _DAT_00ec87d8 = (float)(fVar17 * (float10)(double)(uVar3 << 0x20));
    if (DAT_00ec8794 == 0) {
      uStack_4 = 0x3ff00000;
    }
    fVar17 = (float10)FUN_004856e0(0x31);
    uVar3 = (ulonglong)uStack_4;
    uStack_4 = 0xbff00000;
    _DAT_00ec87dc = (float)(fVar17 * (float10)(double)(uVar3 << 0x20));
    if (DAT_00ec8798 == 0) {
      uStack_4 = 0x3ff00000;
    }
    fVar17 = (float10)FUN_004856e0(0x32);
    _DAT_00ec87e0 = (float)(fVar17 * (float10)(double)((ulonglong)uStack_4 << 0x20));
    if ((DAT_004b2940 == 0) && (DAT_004d6b34 == 0)) {
      DAT_004d6b68 = 0.0;
      DAT_004d6b64 = 0.0;
      DAT_004d6b60 = 0.0;
    }
    else {
      if (_DAT_00ec87d8 != 0.0) {
        DAT_004d6b60 = _DAT_00ec87d8 + DAT_004d6b60;
        if (DAT_004d6b60 < -1.0) {
          DAT_004d6b60 = -1.0;
        }
        else if (1.0 < DAT_004d6b60) {
          DAT_004d6b60 = 1.0;
        }
      }
      if (_DAT_00ec87dc != 0.0) {
        DAT_004d6b64 = _DAT_00ec87dc + DAT_004d6b64;
        if (DAT_004d6b64 < -1.0) {
          DAT_004d6b64 = -1.0;
        }
        else if (1.0 < DAT_004d6b64) {
          DAT_004d6b64 = 1.0;
        }
      }
      if (_DAT_00ec87e0 != 0.0) {
        DAT_004d6b68 = _DAT_00ec87e0 + DAT_004d6b68;
        if (DAT_004d6b68 < -1.0) {
          DAT_004d6b68 = -1.0;
        }
        else if (1.0 < DAT_004d6b68) {
          DAT_004d6b68 = 1.0;
        }
      }
      _DAT_00ec87d8 = DAT_004d6b60;
      _DAT_00ec87dc = DAT_004d6b64;
      _DAT_00ec87e0 = DAT_004d6b68;
    }
    pbVar16 = &DAT_004d6518;
    do {
      bVar1 = *pbVar16;
      iVar12 = *(int *)(pbVar16 + 8);
      iVar7 = *(int *)(pbVar16 + 4);
      if (bVar1 == 0xff) break;
      if ((bVar1 & 8) == 0) {
        if ((bVar1 & 4) != 0) {
          if (((iVar7 == 0) || (iVar7 == 1)) || (iVar7 == 2)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if ((bVar1 & 1) == 0) {
            if ((bVar1 & 2) != 0) {
              if ((bVar1 & 0x10) == 0) {
                if ((bVar1 & 0x20) == 0) {
                  iVar7 = FUN_00408040(iVar7 + 0x30,0,*(undefined4 *)(&DAT_00ec87d8 + iVar7 * 4),
                                       0x3f000000);
                  fVar2 = (float)iVar7;
                }
                else {
                  iVar7 = FUN_00408040(0xffffffff,0xffffffff,
                                       *(undefined4 *)(&DAT_00ec87d8 + iVar7 * 4),0x3f4ccccd);
                  fVar2 = (float)iVar7;
                }
              }
              else {
                iVar7 = FUN_00408040(0xffffffff,1,*(undefined4 *)(&DAT_00ec87d8 + iVar7 * 4),
                                     0x3f4ccccd);
                fVar2 = (float)iVar7;
              }
              if ((iVar12 == 2) && (fVar2 != 0.0)) {
                DAT_00ec8820 = 1;
              }
              if ((fVar2 != 0.0) || (local_c = 0, (float)(&DAT_004d5ebc)[iVar12] != 0.0)) {
                local_c = 1;
              }
              goto LAB_004055fe;
            }
          }
          else if (bVar4) {
            (&DAT_004d5e40)[iVar12] =
                 *(float *)(&DAT_00ec87d8 + iVar7 * 4) + (float)(&DAT_004d5e40)[iVar12];
          }
          else {
            fVar17 = (float10)FUN_004856e0(iVar7 + 0x30);
            if ((&DAT_00ec8790)[iVar7] == 0) {
              fVar18 = (float10)1.0;
            }
            else {
              fVar18 = (float10)-1.0;
            }
            (&DAT_004d5e40)[iVar12] =
                 (float)(fVar17 * fVar18 + (float10)(float)(&DAT_004d5e40)[iVar12]);
          }
        }
      }
      else {
        iVar7 = FUN_00485880(iVar7 + 0x200,0);
        if (((float)iVar7 != 0.0) || (local_c = 0, (float)(&DAT_004d5ebc)[iVar12] != 0.0)) {
          local_c = 1;
        }
LAB_004055fe:
        (&DAT_004d5ebc)[iVar12] = (float)local_c;
      }
      pbVar16 = pbVar16 + 0xc;
    } while ((int)pbVar16 < 0x4d6818);
  }
  else {
    FUN_00405cf0(1);
  }
  if (DAT_004b2948 == 0) {
    FUN_00405cf0(2);
  }
  else {
    FUN_00408120();
    fVar17 = (float10)FUN_004857b0(0xcd);
    fVar18 = (float10)FUN_004857b0(0xcb);
    fVar19 = (float10)FUN_004857b0(0x4d);
    fVar20 = (float10)FUN_004857b0(0x4b);
    _DAT_00ec87f0 =
         (float)(((float10)(float)fVar19 - fVar20) +
                (float10)(float)((float10)(float)fVar17 - fVar18));
    fVar17 = (float10)FUN_004857b0(200);
    fVar18 = (float10)FUN_004857b0(0xd0);
    fVar19 = (float10)FUN_004857b0(0x48);
    fVar20 = (float10)FUN_004857b0(0x50);
    pbVar16 = &DAT_004d6828;
    _DAT_00ec87f4 =
         (float)(((float10)(float)fVar19 - fVar20) +
                (float10)(float)((float10)(float)fVar17 - fVar18));
    do {
      bVar1 = *pbVar16;
      iVar12 = *(int *)(pbVar16 + 8);
      if (bVar1 == 0xff) break;
      if ((bVar1 & 8) != 0) {
        if ((bVar1 & 1) == 0) {
          if ((bVar1 & 2) != 0) {
            iVar7 = FUN_00485880(*(undefined4 *)(pbVar16 + 4),0);
            if (((float)iVar7 != 0.0) || (local_c = 0, (float)(&DAT_004d5ef8)[iVar12] != 0.0)) {
              local_c = 1;
            }
            (&DAT_004d5ef8)[iVar12] = (float)local_c;
          }
        }
        else {
          fVar17 = (float10)FUN_004857b0(*(undefined4 *)(pbVar16 + 4));
          if ((*pbVar16 & 0x10) == 0) {
            if ((*pbVar16 & 0x20) != 0) {
              (&DAT_004d5e50)[iVar12] = (float)((float10)(float)(&DAT_004d5e50)[iVar12] - fVar17);
            }
          }
          else {
            (&DAT_004d5e50)[iVar12] = (float)(fVar17 + (float10)(float)(&DAT_004d5e50)[iVar12]);
          }
        }
      }
      pbVar16 = pbVar16 + 0xc;
    } while ((int)pbVar16 < 0x4d6b28);
  }
  iVar12 = 0;
  do {
    fVar2 = *(float *)((int)&DAT_004d5e30 + iVar12) + *(float *)((int)&DAT_004d5e50 + iVar12) +
            *(float *)((int)&DAT_004d5e40 + iVar12);
    *(float *)((int)&DAT_00ec8830 + iVar12) = fVar2;
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
    else if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    *(float *)((int)&DAT_00ec8830 + iVar12) = fVar2;
    iVar7 = DAT_004b2940;
    iVar12 = iVar12 + 4;
  } while (iVar12 < 0x10);
  iVar12 = 0;
  do {
    if ((((float)(&DAT_004d5e80)[iVar12] == 0.0) && ((float)(&DAT_004d5ebc)[iVar12] == 0.0)) &&
       ((float)(&DAT_004d5ef8)[iVar12] == 0.0)) {
      cVar13 = '\0';
      (&DAT_00ec88a0)[iVar12] = 0;
    }
    else {
      cVar13 = '\x01';
      (&DAT_00ec88a0)[iVar12] = (float)(&DAT_00ec88a0)[iVar12] + (float)_DAT_00e22a40;
    }
    if (((&DAT_00ec8810)[iVar12] == '\0') || ((&DAT_004b29d8)[iVar12] == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((iVar7 == 0) && (iVar12 == 0)) {
      bVar4 = false;
    }
    if ((bVar4) || (local_c = 1, cVar13 == '\0')) {
      local_c = 0;
    }
    (&DAT_00ec8810)[iVar12] = cVar13;
    iVar12 = iVar12 + 1;
    *(float *)(&DAT_00ec883c + iVar12 * 4) = (float)local_c;
  } while (iVar12 < 0xf);
  sVar6 = __ftol();
  DAT_00e98ee2 = __ftol();
  if (sVar6 < -0x100) {
    DAT_00e98ee0 = -0x100;
  }
  else {
    DAT_00e98ee0 = sVar6;
    if (0x100 < sVar6) {
      DAT_00e98ee0 = 0x100;
    }
  }
  if (DAT_00e98ee2 < -0x100) {
    DAT_00e98ee2 = -0x100;
  }
  else if (0x100 < DAT_00e98ee2) {
    DAT_00e98ee2 = 0x100;
  }
  iVar12 = 0;
  piVar14 = &DAT_004b2998;
  do {
    if (*piVar14 < 0) {
      (&DAT_00e98ee4)[iVar12] = 0;
    }
    else {
      uVar5 = __ftol();
      (&DAT_00e98ee4)[iVar12] = uVar5;
    }
    piVar14 = piVar14 + 1;
    iVar12 = iVar12 + 1;
  } while ((int)piVar14 < 0x4b29d8);
  if (iVar7 == 0) {
    iVar12 = FUN_00407ea0(0xffffffff);
    iVar7 = FUN_00407f80(0xffffffff);
    if ((iVar7 != 0) && (iVar12 != 0)) {
      iVar12 = 0;
    }
    if ((DAT_004d6824 == 0) && (iVar12 != 0)) {
      DAT_004d6b40 = 1;
    }
    else {
      DAT_004d6b40 = 0;
    }
    if ((DAT_004d6300 != 0) || (DAT_004d6b44 = 1, iVar7 == 0)) {
      DAT_004d6b44 = 0;
    }
    if ((DAT_004d5fb8 != 0) || (DAT_004d6b4c = 1, iVar12 != 0)) {
      DAT_004d6b4c = 0;
    }
    if ((DAT_004d6304 != 0) || (_DAT_004d6b50 = 1, iVar7 != 0)) {
      _DAT_004d6b50 = 0;
    }
    DAT_004d5fb8 = (uint)(iVar12 == 0);
    DAT_004d6304 = (uint)(iVar7 == 0);
    DAT_004d6300 = iVar7;
    DAT_004d6824 = iVar12;
    iVar12 = FUN_00407ea0(1);
    if ((DAT_004d6308 != 0) || (DAT_004d6b48 = 1, iVar12 == 0)) {
      DAT_004d6b48 = 0;
    }
    DAT_004d6308 = iVar12;
    if ((DAT_004d6b44 != 0) &&
       ((iVar12 = FUN_00411810(), iVar12 == 0 || (*(int *)(iVar12 + 0x1c) != 0xb)))) {
      FUN_00440550(0x4d);
    }
    if ((((DAT_004d6b6c != 0) && (iVar12 = *(int *)(DAT_0050c454 + 8), iVar12 != 3)) &&
        (iVar12 != 8)) && (iVar12 != 5)) {
      DAT_004d6b58 = 1;
      return;
    }
    DAT_004d6b58 = 0;
    return;
  }
  DAT_004d6b58 = 0;
  DAT_004d6300 = 0;
  DAT_004d6824 = 0;
  DAT_004d6b4c = 0;
  DAT_004d6b44 = 0;
  DAT_004d6b40 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00405cf0(int param_1)

{
  if (param_1 < 0) {
    DAT_00e98ee0 = 0;
    _DAT_00ec8810 = 0;
    DAT_00e98ee2 = 0;
    _DAT_00ec8814 = 0;
    _DAT_00ec8818 = 0;
    _DAT_00ec881c = 0;
    _DAT_00e98ee4 = 0;
    _DAT_00e98ee8 = 0;
    _DAT_00e98eec = 0;
    _DAT_00e98ef0 = 0;
    param_1 = -param_1;
  }
  if (param_1 == 0) {
    _DAT_00ec87c8 = 0;
    DAT_00ec87c4 = 0;
    DAT_00ec87c0 = 0;
  }
  else {
    if (param_1 == 1) {
      _DAT_00ec87e0 = 0;
      _DAT_00ec87dc = 0;
      _DAT_00ec87d8 = 0;
      DAT_004d6b68 = 0;
      DAT_004d6b64 = 0;
      DAT_004d6b60 = 0;
      return;
    }
    if (param_1 == 2) {
      _DAT_00ec87f8 = 0;
      _DAT_00ec87f4 = 0;
      _DAT_00ec87f0 = 0;
      return;
    }
  }
  return;
}



uint FUN_00405dd0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;

  uVar3 = 0;
  if (param_1 == 1) {
    uVar2 = 0;
    do {
      iVar1 = FUN_00485880(uVar2 + 0x200,0);
      if (iVar1 != 0) {
        if (param_2 == 0) {
          return uVar2;
        }
        uVar3 = uVar3 | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 4);
  }
  else if (param_1 == 0) {
    uVar2 = 0;
    do {
      iVar1 = FUN_00485880((DAT_004d6b3c + 8) * 0x20 + uVar2,0);
      if (iVar1 != 0) {
        if (param_2 == 0) {
          return uVar2;
        }
        uVar3 = uVar3 | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x20);
  }
  else if (param_1 == 2) {
    uVar2 = 0;
    do {
      iVar1 = FUN_00485880(uVar2,0);
      if ((iVar1 != 0) && (iVar1 = FUN_00408020(uVar2), iVar1 == 0)) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x100);
  }
  if ((param_2 == 0) || (param_1 == 2)) {
    uVar3 = 0xffff;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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



undefined4 FUN_00406080(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  undefined8 uVar7;
  int local_194;
  byte *local_190;
  int local_18c;
  int local_188;
  int *local_184;
  undefined local_180 [32];
  undefined local_160 [32];
  undefined local_140 [32];
  undefined local_120 [32];
  undefined local_100 [256];

  FUN_0049eb80(local_100,s__s_s__s__s_004b3dec,s___data_config__004b252c,param_1,param_1,
               &DAT_004b3df8);
  iVar4 = FUN_004877d0();
  if (iVar4 == 0) {
    FUN_00487960();
    return 0xffffffff;
  }
  local_194 = 0;
  do {
    if (local_194 == 0) {
      local_190 = &DAT_004d5fc0;
      local_18c = 6;
      local_184 = &DAT_00ec8880;
      local_188 = DAT_004b2944;
      uVar7 = CONCAT44(s_JOYSTICK_004b3de0,local_160);
LAB_00406169:
      FUN_0049eb80(uVar7);
    }
    else {
      if (local_194 == 1) {
        local_190 = &DAT_004d6518;
        local_18c = 3;
        local_184 = &DAT_00ec8790;
        local_188 = DAT_004d6b38;
        uVar7 = CONCAT44(s_MOUSE_004b3dd8,local_160);
        goto LAB_00406169;
      }
      if (local_194 == 2) {
        local_190 = &DAT_004d6828;
        local_18c = 0;
        local_188 = DAT_004b2948;
        uVar7 = CONCAT44(s_KEYBOARD_004b3dcc,local_160);
        goto LAB_00406169;
      }
    }
    FUN_004879f0(s___________s_MAPPINGS_004b3db4);
    bVar1 = *local_190;
    pbVar5 = local_190;
    while (bVar1 != 0xff) {
      uVar2 = *(undefined4 *)(pbVar5 + 8);
      uVar3 = *(undefined4 *)(pbVar5 + 4);
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 0xc;
      FUN_0049eb80(local_140);
      if (((bVar1 & 8) == 0) || (local_194 == 2)) {
        if (((bVar1 & 8) == 0) || (local_194 != 2)) {
          if ((bVar1 & 4) != 0) {
            FUN_00407b00(uVar3);
            FUN_00421470();
            FUN_0049eb80(local_180,s_AXIS__s_004b3d98);
            if ((bVar1 & 0x10) == 0) {
              if ((bVar1 & 0x20) == 0) goto LAB_0040627b;
              uVar7 = CONCAT44(s_AXIS_RANGE_NEGATIVE_004b3d70,local_140);
            }
            else {
              uVar7 = CONCAT44(s_AXIS_RANGE_POSITIVE_004b3d84,local_140);
            }
            FUN_0049eb80(uVar7);
          }
        }
        else {
          FUN_00407b00(uVar3);
          FUN_00421470();
          FUN_0049eb80(local_180,s_KEY__s_004b3da0);
        }
      }
      else {
        FUN_00407b00(uVar3);
        FUN_00421470();
        FUN_0049eb80(local_180,s_BUTTON__s_004b3da8);
      }
LAB_0040627b:
      FUN_00407d90(uVar2);
      iVar4 = FUN_00421470();
      if (iVar4 != 0) {
        FUN_0049eb80(local_120,s_FUNCTION__s_004b3d64);
        iVar4 = FUN_004879f0(s___28s__28s__28s__28s_004b3d4c,local_160,local_180,local_120);
        if (iVar4 != 0) {
          FUN_00487960();
          return 0;
        }
      }
      bVar1 = *pbVar5;
    }
    FUN_004879f0();
    iVar4 = 0;
    piVar6 = local_184;
    if (0 < local_18c) {
      do {
        if (*piVar6 != 0) {
          FUN_00407b00(iVar4);
          FUN_00421470();
          FUN_0049eb80(local_180,s_AXIS__s_004b3d98);
          FUN_004879f0(s___28s__28sFLIP_AXIS_004b3d30,local_160);
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar4 < local_18c);
    }
    if ((local_194 < 2) && (*(int *)(&DAT_00ec8780 + local_194 * 4) != 0x3f800000)) {
      FUN_0049eb80(local_180,s_SENSITIVITY__0_2f_004b3d1c,
                   (double)*(float *)(&DAT_00ec8780 + local_194 * 4));
      FUN_004879f0(s___28s__28s_004b3d10,local_160);
    }
    if ((local_194 == 0) && (DAT_00ec876c != DAT_004b297c)) {
      FUN_0049eb80(local_180,s_DEADZONE__0_2f_004b3d00,(double)DAT_00ec876c);
      FUN_004879f0(s___28s__28s_004b3d10,local_160);
    }
    if (local_188 == 0) {
      uVar7 = CONCAT44(s_ENABLED_FALSE_004b3ce0,local_180);
    }
    else {
      uVar7 = CONCAT44(s_ENABLED_TRUE_004b3cf0,local_180);
    }
    FUN_0049eb80(uVar7);
    FUN_004879f0(s___28s__28s_004b3d10,local_160);
    local_194 = local_194 + 1;
    if (2 < local_194) {
      FUN_004879a0();
      FUN_00487960();
      return 1;
    }
  } while( true );
}



undefined4 FUN_00406470(undefined1 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  bool bVar10;
  float10 fVar11;
  undefined4 local_130;
  int local_12c;
  int local_128;
  undefined1 *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined *local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined local_100 [256];

  local_120 = DAT_004b3df8;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_11c = DAT_004b3dfc;
  local_118 = PTR_DAT_004b3e00;
  if (param_3 == 0) {
    FUN_0049eb80(local_100,s__s_s__s__s_004b3dec,s___data_config__004b252c,param_2,param_2,
                 &DAT_004b3df8);
  }
  else {
    pbVar7 = &DAT_004b2638;
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar10 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_004064f2:
        iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_004064f7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar10 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_004064f2;
      pbVar2 = pbVar2 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_004064f7:
    if (iVar3 == 0) {
      FUN_0049eb80(&local_120,s_wheel_map_004b3ea4);
    }
    else {
      iVar3 = -1;
      pbVar2 = param_2;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
      if (iVar3 != -2) {
        FUN_0049eb80(&local_120,&DAT_004b2304,param_2);
      }
    }
    FUN_0049eb80(local_100,s__s_s_s_004b3e84,&DAT_00e9f300,s___data_config_default__004b3e8c,
                 &local_120);
  }
  iVar3 = FUN_004877b0(local_100);
  if (iVar3 == 0) {
    FUN_00487900();
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (param_1 == (undefined1 *)0x0)) {
    puVar8 = &DAT_00ec8880;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  if (((int)param_1 < 0) || (param_1 == (undefined1 *)0x1)) {
    DAT_00ec8790 = 0;
    DAT_00ec8794 = 0;
    DAT_00ec8798 = 0;
  }
  FUN_00407800(param_1);
  iVar4 = FUN_00487ae0();
  iVar3 = DAT_004d5e28;
  puVar6 = local_124;
  puVar9 = local_124;
  while (DAT_004d5e28 = iVar3, iVar4 != 0) {
    pbVar7 = &DAT_004b3e7c;
    pbVar2 = DAT_00ec8e84;
    do {
      bVar1 = *pbVar2;
      bVar10 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0040661d:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00406622;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar10 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0040661d;
      pbVar2 = pbVar2 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00406622:
    if (iVar4 == 0) break;
    uVar5 = 0;
    local_130 = local_130 & 0xffffff00;
    local_12c = 0;
    local_128 = -1;
    if (DAT_00ec8e80 != 0) {
      puVar8 = &DAT_00ec8e84;
      do {
        iVar3 = FUN_0049ec50(*puVar8,s_JOYSTICK_004b3de0);
        if (iVar3 == 0) {
          puVar9 = (undefined1 *)0x0;
          puVar6 = &DAT_004d5fc0;
        }
        else {
          iVar3 = FUN_0049ec50(*puVar8,s_MOUSE_004b3dd8);
          if (iVar3 == 0) {
            puVar9 = (undefined1 *)0x1;
            puVar6 = &DAT_004d6518;
          }
          else {
            iVar3 = FUN_0049ec50(*puVar8,s_KEYBOARD_004b3dcc);
            if (iVar3 == 0) {
              puVar9 = (undefined1 *)0x2;
              puVar6 = &DAT_004d6828;
            }
            else {
              iVar3 = FUN_0049ec50(*puVar8,&DAT_004b3e74);
              if (iVar3 == 0) {
                local_130 = local_130 | 4;
                local_12c = FUN_00407a90(puVar8[1],&DAT_004b2af0);
              }
              else {
                iVar3 = FUN_0049ec50(*puVar8,s_BUTTON_004b3e6c);
                if (iVar3 == 0) {
                  local_130 = local_130 | 8;
                  local_12c = FUN_00407a90(puVar8[1],&DAT_004b2b28);
                }
                else {
                  iVar3 = FUN_0049ec50(*puVar8,&PTR_DAT_004b3e68);
                  if (iVar3 == 0) {
                    local_130 = local_130 | 8;
                    local_12c = FUN_00407a90(puVar8[1],&DAT_004b2bd0);
                  }
                  else {
                    iVar3 = FUN_0049ec50(*puVar8,s_FUNCTION_004b3e5c);
                    if (iVar3 == 0) {
                      iVar3 = FUN_00407cd0(&local_130,puVar8[1],0);
                      if (iVar3 == 0) goto LAB_00406a20;
                    }
                    else {
                      iVar3 = FUN_0049ec50(*puVar8,s_AXIS_RANGE_004b3e50);
                      if (iVar3 == 0) {
                        iVar3 = FUN_0049ec50(puVar8[1],s_POSITIVE_004b3e44);
                        if (iVar3 == 0) {
                          local_130 = local_130 | 0x10;
                        }
                        else {
                          iVar3 = FUN_0049ec50(puVar8[1],s_NEGATIVE_004b3e38);
                          if (iVar3 != 0) goto LAB_00406a20;
                          local_130 = local_130 | 0x20;
                        }
                      }
                      else if ((((int)param_1 < 0) || (param_1 == puVar9)) &&
                              (iVar3 = FUN_0049ec50(*puVar8,s_FLIP_AXIS_004b3e2c), iVar3 == 0)) {
                        if (puVar9 == (undefined1 *)0x0) {
                          (&DAT_00ec8880)[local_12c] = 1;
                        }
                        else {
                          if (puVar9 != (undefined1 *)0x1) goto LAB_00406a20;
                          (&DAT_00ec8790)[local_12c] = 1;
                        }
                      }
                      else {
                        iVar3 = FUN_0049ec50(*puVar8,s_SENSITIVITY_004b3e20);
                        if (iVar3 == 0) {
                          fVar11 = (float10)FUN_0049ef90(puVar8[1]);
                          *(float *)(&DAT_00ec8780 + (int)puVar9 * 4) = (float)fVar11;
                        }
                        else {
                          iVar3 = FUN_0049ec50(*puVar8,s_DEADZONE_004b3e14);
                          if (iVar3 == 0) {
                            if (puVar9 == (undefined1 *)0x0) {
                              fVar11 = (float10)FUN_0049ef90(puVar8[1]);
                              DAT_00ec876c = (float)fVar11;
                            }
                          }
                          else {
                            iVar3 = FUN_0049ec50(*puVar8,s_ENABLED_004b3e0c);
                            if (iVar3 == 0) {
                              iVar3 = FUN_0049ec50(puVar8[1],&DAT_004b3e04);
                              if (puVar9 == (undefined1 *)0x0) {
                                if ((iVar3 != 0) || (DAT_004b294c == 0)) {
                                  DAT_004b2944 = 0;
                                }
                                else {
                                  DAT_004b2944 = 1;
                                }
                              }
                              else if ((puVar9 == (undefined1 *)0x1) &&
                                      ((iVar3 != 0 || (DAT_004d6b38 = 1, DAT_004b2950 == 0)))) {
                                DAT_004d6b38 = 0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (local_12c < 0) {
LAB_00406a20:
          FUN_00407800(param_1);
          FUN_00487900();
          return 0;
        }
        uVar5 = uVar5 + 1;
        puVar8 = puVar8 + 2;
      } while (uVar5 < DAT_00ec8e80);
    }
    if ((((int)param_1 < 0) || (param_1 == puVar9)) && (-1 < local_128)) {
      iVar3 = (&DAT_004d5e20)[(int)puVar9];
      *(uint *)(puVar6 + iVar3 * 0xc) = local_130;
      *(int *)(puVar6 + iVar3 * 0xc + 4) = local_12c;
      *(int *)(puVar6 + iVar3 * 0xc + 8) = local_128;
      (&DAT_004d5e20)[(int)puVar9] = (&DAT_004d5e20)[(int)puVar9] + 1;
    }
    iVar4 = FUN_00487ae0();
    iVar3 = DAT_004d5e28;
  }
  if (((int)param_1 < 0) || (param_1 == (undefined1 *)0x2)) {
    uVar5 = local_130 >> 8;
    local_130 = CONCAT31((int3)uVar5,10);
    DAT_004d5e28 = iVar3 + 1;
    *(uint *)(&DAT_004d6828 + iVar3 * 0xc) = local_130;
    (&DAT_004d682c)[iVar3 * 3] = 1;
    (&DAT_004d6830)[iVar3 * 3] = 10;
    iVar3 = iVar3 + 1;
  }
  if (((int)param_1 < 0) || (param_1 == (undefined1 *)0x0)) {
    (&DAT_004d5fc0)[DAT_004d5e20 * 0xc] = 0xff;
  }
  if (((int)param_1 < 0) || (param_1 == (undefined1 *)0x1)) {
    (&DAT_004d6518)[DAT_004d5e24 * 0xc] = 0xff;
  }
  if (((int)param_1 < 0) || (param_1 == (undefined1 *)0x2)) {
    (&DAT_004d6828)[iVar3 * 0xc] = 0xff;
  }
  FUN_00487900();
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00406c79)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00406a50(int param_1,int param_2,byte *param_3,byte param_4,int param_5,undefined4 param_6,
                int *param_7)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined *puVar7;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  undefined local_8;
  undefined4 local_7;

  local_8 = DAT_004d55cc;
  local_10 = 0;
  local_7 = 0;
  if (param_5 < 0) {
    param_5 = -param_5;
  }
  *param_7 = -1;
  FUN_0049eb80(param_6,&DAT_004b3eec);
  if (param_1 == 0) {
    local_1c = DAT_00ec879c;
    local_18 = DAT_00ec8824;
    local_14 = _DAT_00ec887c;
    pbVar6 = &DAT_004d5fc0;
  }
  else if (param_1 == 1) {
    local_1c = DAT_00ec8770;
    local_18 = 0;
    local_14 = DAT_00ec8808;
    pbVar6 = &DAT_004d6518;
  }
  else {
    pbVar6 = param_3;
    if (param_1 == 2) {
      local_1c = 0x100;
      local_18 = 0;
      local_14 = 0;
      pbVar6 = &DAT_004d6828;
    }
  }
  bVar1 = *pbVar6;
  do {
    if (bVar1 == 0xff) {
      return local_10;
    }
    bVar1 = *pbVar6;
    iVar2 = *(int *)(pbVar6 + 4);
    if (((*(int *)(pbVar6 + 8) == param_2) && ((bVar1 & (byte)param_3) == (byte)param_3)) &&
       ((((uint)param_3 & 8) == 0 || ((bVar1 & 0xf0) == param_4)))) {
      bVar4 = *pbVar6 & 8;
      if ((bVar4 == 0) || (local_1c <= *(int *)(pbVar6 + 4))) {
        if (bVar4 != 0) {
          if (*(int *)(pbVar6 + 4) < 0x10) {
            bVar3 = false;
          }
          else {
            bVar3 = *(int *)(pbVar6 + 4) <= local_18 * 4 + 0xf;
          }
          if (bVar3) goto LAB_00406bb2;
        }
        if (((*pbVar6 & 4) == 0) ||
           ((local_14 & 1 << ((byte)*(undefined4 *)(pbVar6 + 4) & 0x1f)) == 0)) goto LAB_00406ca1;
      }
LAB_00406bb2:
      local_10 = local_10 + 1;
      if (param_5 == local_10) {
        *param_7 = iVar2;
        if (param_1 == 2) {
LAB_00406c7e:
          puVar7 = (undefined *)0x0;
LAB_00406c81:
          uVar5 = FUN_00407b00(iVar2,puVar7);
          uVar5 = FUN_00421360(uVar5);
          puVar7 = &DAT_004b2304;
        }
        else {
          if (((uint)param_3 & 8) == 0) {
            if (param_1 == 2) goto LAB_00406c7e;
            if ((bVar1 & 0x10) == 0) {
              if ((bVar1 & 0x20) != 0) {
                puVar7 = &DAT_004b3bd8;
                goto LAB_00406c3b;
              }
            }
            else {
              puVar7 = &DAT_004b3ecc;
LAB_00406c3b:
              FUN_0049eb80(&local_8,puVar7);
            }
            uVar5 = FUN_00407b00(iVar2,&DAT_004b2af0);
            uVar5 = FUN_00421360(uVar5);
            uVar5 = FUN_00421360(s__MONDOTEXT_H_0216__s_s_AXIS_004b3eb0,&local_8,uVar5);
            FUN_0049eb80(param_6,uVar5);
            goto LAB_00406ca1;
          }
          puVar7 = &DAT_004b2b28;
          if (0xf < iVar2) goto LAB_00406c81;
          uVar5 = FUN_00407b00(iVar2,&DAT_004b2b28);
          uVar5 = FUN_00421360(uVar5);
          puVar7 = (undefined *)FUN_00421360(s__MONDOTEXT_H_0213_BUTTON__s_004b3ed0,uVar5);
        }
        FUN_0049eb80(param_6,puVar7,uVar5);
      }
    }
LAB_00406ca1:
    bVar1 = pbVar6[0xc];
    pbVar6 = pbVar6 + 0xc;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte FUN_00406cc0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  byte bVar7;
  char *pcVar8;
  undefined4 uVar9;
  float local_1a4;
  int local_1a0;
  uint local_198;
  int local_194;
  undefined local_190;
  undefined4 local_18f;
  undefined4 local_188;
  int local_184;
  undefined local_180 [64];
  undefined local_140 [64];
  undefined local_100 [256];

  bVar1 = false;
  local_194 = 0;
  local_1a0 = -1;
  local_190 = DAT_004d55cc;
  local_18f = 0;
  local_1a4 = 0.0;
  bVar7 = 0;
  FUN_00414af0(param_3,local_140,0x40);
  FUN_00414ab0(param_3,&DAT_004b4270,0);
  if (param_2 == 0) {
    uVar9 = 0x18;
  }
  else if (param_2 == 1) {
    uVar9 = 0x19;
  }
  else {
    uVar9 = 0x1a;
  }
  uVar9 = FUN_00414d90(0,uVar9);
  local_184 = 10;
  DAT_004d6510 = 0;
  do {
    if (local_1a4 == 0.0) {
      if (param_2 == 0) {
        if (param_1 == 0) {
          pcVar8 = s__MONDOTEXT_H_0219__f4_nPress_new_004b41d4;
        }
        else {
          pcVar8 = s__MONDOTEXT_H_0218__f4_nMove_axis_004b4220;
        }
      }
      else if (param_2 == 1) {
        if (param_1 == 0) {
          pcVar8 = s__MONDOTEXT_H_0220__f4_nPress_new_004b4198;
        }
        else {
          pcVar8 = s__MONDOTEXT_H_0218__f4_nMove_axis_004b4220;
        }
      }
      else {
        if (param_2 != 2) goto LAB_00406df7;
        pcVar8 = s__MONDOTEXT_H_0221__f4_nPress_new_004b4160;
      }
      uVar2 = FUN_00421360(pcVar8,0x40000000);
      FUN_0044fce0(uVar2);
      local_1a4 = 1.7;
    }
    else {
      local_1a4 = local_1a4 - (float)_DAT_00e22a40;
      if (local_1a4 < 0.0) {
        local_1a4 = 0.0;
      }
    }
LAB_00406df7:
    FUN_0048db60();
    FUN_00489bc0();
    FUN_00404dd0();
    FUN_00445980(0,2);
    FUN_00415020(0);
    if (DAT_004d6510 == 0) {
      DAT_004d6510 = DAT_004d6b4c;
    }
    else if (local_184 == 0) {
      iVar3 = FUN_00407f80(param_2);
      if ((iVar3 != 0) ||
         ((DAT_004d6b44 != 0 && (((param_1 != 0 && (DAT_004d55d4 == 0)) || (1 < param_2)))))) {
        FUN_00414ab0(param_3,local_140,0);
        uVar2 = FUN_00421360(s__MONDOTEXT_H_0222__nCancelled__004b3ef0,0x40000000);
        FUN_0044fce0(uVar2);
        bVar7 = 3;
        goto LAB_004074c3;
      }
      if (param_1 == 0) {
        iVar3 = FUN_00405dd0(param_2,0);
        if (iVar3 == 0xffff) goto LAB_004074c8;
        if ((param_2 != 2) && (iVar3 == 1)) {
          bVar7 = 1;
        }
        iVar4 = FUN_004079f0(param_2,iVar3,0,&local_188);
        if (iVar4 < 0) {
LAB_0040701a:
          iVar4 = FUN_004078a0(param_2,param_4,param_5,0,0,iVar3);
          if (iVar4 == 0) {
            (**(code **)(DAT_00ecc420 + 0x18))
                      (s_elfControl_ReplaceMapping_cid__f_004b404c,
                       s_D__devel_QA5_pc_gnome_SpecPlat_r_004b40a4,0x6f8);
          }
          if (param_2 == 2) {
            uVar2 = FUN_00407b00(iVar3,0);
            uVar2 = FUN_00421360(uVar2);
            puVar6 = &DAT_004b2304;
          }
          else if (iVar3 < 0x10) {
            uVar2 = FUN_00407b00(iVar3,&DAT_004b2b28);
            uVar2 = FUN_00421360(uVar2);
            puVar6 = (undefined *)FUN_00421360(s__MONDOTEXT_H_0213_BUTTON__s_004b3ed0,uVar2);
          }
          else {
            uVar2 = FUN_00407b00(iVar3,&DAT_004b2b28);
            uVar2 = FUN_00421360(uVar2);
            puVar6 = &DAT_004b2304;
          }
          FUN_0049eb80(local_100,puVar6,uVar2);
          FUN_00414ab0(param_3,local_100,0);
          bVar7 = bVar7 | 6;
        }
        else {
          uVar2 = FUN_00407d90(iVar4,local_188);
          uVar2 = FUN_00421360(uVar2);
          iVar4 = FUN_0049ec50(uVar2,param_4);
          if (iVar4 == 0) {
            FUN_00414ab0(param_3,local_140,0);
            bVar7 = bVar7 | 2;
          }
          else {
            if (param_2 == 2) {
              uVar5 = FUN_00407b00(iVar3,0);
              uVar5 = FUN_00421360(uVar5);
              puVar6 = &DAT_004b2304;
            }
            else {
              uVar5 = FUN_00407b00(iVar3,&DAT_004b2b28);
              uVar5 = FUN_00421360(uVar5);
              puVar6 = (undefined *)FUN_00421360(s__MONDOTEXT_H_0213_BUTTON__s_004b3ed0,uVar5);
            }
            FUN_0049eb80(local_180,puVar6,uVar5);
            uVar2 = FUN_00421360(s__MONDOTEXT_H_0223__s_already_ass_004b4108,local_180,uVar2,param_4
                                );
            FUN_0049eb80(local_100,uVar2);
            uVar2 = FUN_00421360(s__MONDOTEXT_H_0033__sNo_004b20b0,0,1);
            uVar2 = FUN_00421360(s__MONDOTEXT_H_0032__sYes_004b2098,uVar2);
            uVar2 = FUN_00421360(s__MONDOTEXT_H_0224_Conflict_Detec_004b40e4,local_100,uVar2);
            iVar4 = FUN_004145b0(uVar9,0xffffffff,0xffffffff,uVar2);
            if (iVar4 == 1) goto LAB_004073b0;
            if (iVar4 != 0xffff) goto LAB_0040701a;
            FUN_00414ab0(param_3,local_140,0);
            bVar7 = bVar7 | 2;
          }
        }
      }
      else {
        iVar3 = FUN_00407700(param_2,&local_198);
        if (-1 < iVar3) {
          uVar2 = FUN_00421360(s__MONDOTEXT_H_0016_BRAKE_004b2818);
          iVar4 = FUN_0049ec50(param_4,uVar2);
          if (iVar4 == 0) {
            if ((int)local_198 < 1) {
              if ((int)local_198 < 0) {
                puVar6 = &DAT_004b3bd8;
                goto LAB_00407158;
              }
            }
            else {
              puVar6 = &DAT_004b3ecc;
LAB_00407158:
              FUN_0049eb80(&local_190,puVar6);
            }
            local_194 = 1;
          }
          uVar2 = FUN_00407b00(iVar3,&DAT_004b2af0);
          uVar2 = FUN_00421360(uVar2);
          uVar2 = FUN_00421360(s__MONDOTEXT_H_0216__s_s_AXIS_004b3eb0,&local_190,uVar2);
          FUN_0049eb80(local_100,uVar2);
          FUN_00414ab0(param_3,local_100,0);
          local_1a0 = iVar3;
        }
        if ((local_1a0 < 0) || (DAT_004d6b40 == 0)) goto LAB_004074c8;
        iVar3 = FUN_004079f0(param_2,local_1a0,1,&local_188);
        if (-1 < iVar3) {
          uVar2 = FUN_00407d90(iVar3,local_188);
          uVar2 = FUN_00421360(uVar2);
          uVar5 = FUN_00421360(s__MONDOTEXT_H_0021_ROLL_RIGHT_004b2790);
          iVar4 = FUN_0049ec50(uVar2,uVar5);
          if (iVar4 == 0) {
LAB_00407248:
            uVar5 = FUN_00421360(s__MONDOTEXT_H_0020_ROLL_LEFT_004b27b0);
            FUN_0049eb80(uVar2,uVar5);
          }
          else {
            uVar5 = FUN_00421360(s__MONDOTEXT_H_0020_ROLL_LEFT_004b27b0);
            iVar4 = FUN_0049ec50(uVar2,uVar5);
            if (iVar4 == 0) goto LAB_00407248;
          }
          iVar4 = FUN_0049ec50(uVar2,param_4);
          if (iVar4 == 0) {
            FUN_00414ab0(param_3,local_140,0);
            bVar7 = 2;
            goto LAB_004074c3;
          }
          uVar5 = FUN_00407b00(local_1a0,&DAT_004b2af0);
          uVar5 = FUN_00421360(uVar5);
          uVar5 = FUN_00421360(s__MONDOTEXT_H_0228__s_Axis_004b4030,uVar5);
          FUN_0049eb80(local_180,uVar5);
          uVar5 = FUN_00421360(s__MONDOTEXT_H_0020_ROLL_LEFT_004b27b0);
          iVar4 = FUN_0049ec50(param_4,uVar5);
          if (iVar4 == 0) {
            uVar5 = FUN_00421360(s__MONDOTEXT_H_0280__sRoll_Left_Ri_004b400c);
LAB_0040730c:
            uVar2 = FUN_00421360(s__MONDOTEXT_H_0223__s_already_ass_004b4108,local_180,uVar2,uVar5);
            FUN_0049eb80(local_100,uVar2);
          }
          else {
            if ((iVar3 != 7) && (uVar5 = param_4, iVar3 != 6)) goto LAB_0040730c;
            uVar2 = FUN_00421360(s__MONDOTEXT_H_0229__s_already_ass_004b3fb4,local_180,param_4);
            FUN_0049eb80(local_100,uVar2);
          }
          uVar2 = FUN_00421360(s__MONDOTEXT_H_0033__sNo_004b20b0,0,1);
          uVar2 = FUN_00421360(s__MONDOTEXT_H_0032__sYes_004b2098,uVar2);
          uVar2 = FUN_00421360(s__MONDOTEXT_H_0224_Conflict_Detec_004b40e4,local_100,uVar2);
          iVar3 = FUN_004145b0(uVar9,0xffffffff,0xffffffff,uVar2);
          if ((iVar3 == 1) || (iVar3 == 0xffff)) {
LAB_004073b0:
            FUN_00414ab0(param_3,local_140,0);
            bVar7 = bVar7 | 2;
            goto LAB_004074c3;
          }
        }
        uVar2 = FUN_00421360(s__MONDOTEXT_H_0020_ROLL_LEFT_004b27b0);
        iVar3 = FUN_0049ec50(param_4,uVar2);
        if (iVar3 == 0) {
          uVar2 = FUN_00421360(s__MONDOTEXT_H_0021_ROLL_RIGHT_004b2790,param_5,1,-local_198,
                               local_1a0);
          iVar3 = FUN_004078a0(param_2,uVar2);
          if (iVar3 == 0) {
            (**(code **)(DAT_00ecc420 + 0x18))
                      (s_elfControl_ReplaceMapping_cid__T_004b3f64,
                       s_D__devel_QA5_pc_gnome_SpecPlat_r_004b40a4,0x741);
          }
          local_194 = 1;
        }
        local_198 = -(uint)(local_194 != 0) & local_198;
        iVar3 = FUN_004078a0(param_2,param_4,param_5,param_1,local_198,local_1a0);
        if (iVar3 == 0) {
          (**(code **)(DAT_00ecc420 + 0x18))
                    (s_elfControl_ReplaceMapping_cid__f_004b3f10,
                     s_D__devel_QA5_pc_gnome_SpecPlat_r_004b40a4,0x746);
        }
        bVar7 = 6;
      }
LAB_004074c3:
      bVar1 = true;
    }
    else {
      local_184 = 0;
    }
LAB_004074c8:
    FUN_00426910();
    FUN_0048dce0();
    FUN_0048dd80();
    FUN_00489ab0();
    if (bVar1) {
      return bVar7;
    }
  } while( true );
}



int FUN_00407500(byte *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int local_10;
  byte local_c [4];
  undefined4 local_8;
  int local_4;

  pbVar3 = param_1;
  iVar7 = 0;
  iVar8 = -1;
  local_10 = 0;
  local_c[0] = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_004d5fc0;
  }
  else if (param_1 == (byte *)0x1) {
    param_1 = &DAT_004d6518;
  }
  else if (param_1 == (byte *)0x2) {
    param_1 = &DAT_004d6828;
  }
  iVar4 = FUN_00407cd0(local_c,param_2,1);
  if (iVar4 == 0) {
    return -1;
  }
  if (param_3 == 0) {
    local_c[0] = local_c[0] | 8;
  }
  else {
    local_c[0] = local_c[0] | 4;
  }
  bVar2 = *param_1;
  pbVar5 = param_1;
  while (bVar2 != 0xff) {
    if (-1 < iVar8) goto LAB_004075d3;
    if (((*(int *)(pbVar5 + 8) == local_4) && ((local_c[0] & *pbVar5) == local_c[0])) &&
       (local_10 = local_10 + 1, local_10 == param_4)) {
      iVar8 = iVar7;
    }
    pbVar1 = pbVar5 + 0xc;
    pbVar5 = pbVar5 + 0xc;
    iVar7 = iVar7 + 1;
    bVar2 = *pbVar1;
  }
  if (iVar8 < 0) {
    return -1;
  }
LAB_004075d3:
  if (param_5 != 0) {
    if (iVar8 <= (&DAT_004d5e20)[(int)pbVar3] + -1) {
      puVar6 = (undefined4 *)(param_1 + iVar8 * 0xc);
      iVar7 = iVar8;
      do {
        iVar7 = iVar7 + 1;
        *puVar6 = puVar6[3];
        puVar6[1] = puVar6[4];
        puVar6[2] = puVar6[5];
        puVar6 = puVar6 + 3;
      } while (iVar7 <= (&DAT_004d5e20)[(int)pbVar3] + -1);
    }
    (&DAT_004d5e20)[(int)pbVar3] = (&DAT_004d5e20)[(int)pbVar3] + -1;
  }
  return iVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00407630(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined local_40 [64];

  iVar3 = param_1;
  iVar2 = FUN_00406a50(param_1,2,5,0,1,local_40,&param_1);
  if (iVar2 != 0) {
    if (iVar3 == 1) {
      if (param_1 == 0) {
        FUN_004859a0(1.0 / _DAT_00ec8784,0x3f800000);
        return;
      }
      if (param_1 == 1) {
        FUN_004859a0(0x3f800000,1.0 / _DAT_00ec8784);
        return;
      }
    }
    else {
      FUN_004858e0(DAT_00ec876c,DAT_004d6b3c,param_1);
      uVar1 = *(undefined4 *)(&DAT_00ec8780 + iVar3 * 4);
      puVar4 = &DAT_004b2980;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0x3f800000;
        puVar4 = puVar4 + 1;
      }
      (&DAT_004b2980)[param_1] = uVar1;
    }
  }
  return;
}



int FUN_00407700(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  iVar9 = -1;
  fVar2 = 0.0;
  iVar8 = 0;
  uVar6 = -(uint)(param_1 != 1) & 3;
  if (uVar6 != 0xfffffffd) {
    iVar7 = param_1 * 0x18;
    do {
      fVar3 = *(float *)(&DAT_004d62d0 + iVar7) - *(float *)((int)&DAT_00ec87c0 + iVar7);
      if (fVar3 < 0.0) {
        fVar3 = -fVar3;
      }
      fVar1 = *(float *)((int)&DAT_00ec87c0 + iVar7);
      if (*(float *)((int)&DAT_00ec87c0 + iVar7) < 0.0) {
        fVar1 = -fVar1;
      }
      if (param_1 == 0) {
        fVar4 = 0.5;
      }
      else {
        fVar4 = 0.1;
      }
      if (((fVar4 < fVar1) && (0.05 < fVar3)) && (fVar2 < fVar3)) {
        if (0.0 <= *(float *)((int)&DAT_00ec87c0 + iVar7)) {
          if (*(float *)((int)&DAT_00ec87c0 + iVar7) <= 0.0) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 0xffffffff;
        }
        *param_2 = uVar5;
        iVar9 = iVar8;
        fVar2 = fVar3;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar8 < (int)(uVar6 + 3));
  }
  return iVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00407800(int param_1)

{
  int iVar1;
  undefined4 *puVar2;

  DAT_00ec8830 = 0;
  DAT_00ec8834 = 0;
  DAT_00ec8838 = 0;
  puVar2 = &DAT_00ec8840;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_00ec883c = 0;
  puVar2 = &DAT_00ec88a0;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if ((param_1 < 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)&DAT_004d5fc0;
    for (iVar1 = 0xc3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  if ((param_1 < 0) || (param_1 == 1)) {
    puVar2 = (undefined4 *)&DAT_004d6518;
    for (iVar1 = 0xc3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  if ((param_1 < 0) || (param_1 == 2)) {
    puVar2 = (undefined4 *)&DAT_004d6828;
    for (iVar1 = 0xc3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  if (param_1 < 0) {
    DAT_004d5e20 = 0;
    DAT_004d5e24 = 0;
    DAT_004d5e28 = 0;
    return;
  }
  (&DAT_004d5e20)[param_1] = 0;
  return;
}



void FUN_004078a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;

  uVar1 = FUN_00407500(param_1,param_2,param_4,param_3,0);
  FUN_004078e0(param_1,param_2,param_6,param_4,param_5,uVar1);
  return;
}



undefined4
FUN_004078e0(undefined1 *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6
            )

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 local_c;
  uint local_8;
  uint local_4;

  local_c = local_c & 0xffffff00;
  local_4 = 0;
  if (param_1 == (undefined1 *)0x0) {
    puVar4 = &DAT_004d5fc0;
  }
  else if (param_1 == (undefined1 *)0x1) {
    puVar4 = &DAT_004d6518;
  }
  else {
    puVar4 = &DAT_004d6828;
    if (param_1 != (undefined1 *)0x2) {
      puVar4 = param_1;
    }
  }
  local_8 = param_3;
  iVar3 = FUN_00407cd0(&local_c,param_2,1);
  if (iVar3 == 0) {
    return 0;
  }
  bVar2 = (byte)local_c;
  if (param_4 == 0) {
    bVar2 = (byte)local_c | 8;
  }
  else {
    local_c = local_c | 4;
    if (param_5 < 1) {
      if (-1 < param_5) goto LAB_00407976;
      bVar2 = (byte)local_c | 0x20;
    }
    else {
      bVar2 = bVar2 | 0x14;
    }
  }
  local_c = CONCAT31(local_c._1_3_,bVar2);
LAB_00407976:
  if (param_6 < 0) {
    iVar3 = (&DAT_004d5e20)[(int)param_1];
    *(uint *)(puVar4 + iVar3 * 0xc) = local_c;
    *(uint *)(puVar4 + iVar3 * 0xc + 4) = local_8;
    *(uint *)(puVar4 + iVar3 * 0xc + 8) = local_4;
    iVar3 = (&DAT_004d5e20)[(int)param_1];
    (&DAT_004d5e20)[(int)param_1] = iVar3 + 1;
    puVar4[(iVar3 + 1) * 0xc] = 0xff;
    return 1;
  }
  puVar1 = (uint *)(puVar4 + param_6 * 0xc);
  *puVar1 = local_c;
  puVar1[1] = local_8;
  puVar1[2] = local_4;
  return 1;
}



undefined4 FUN_004079f0(byte *param_1,int param_2,int param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;

  if (param_1 == (byte *)0x0) {
    pbVar6 = &DAT_004d5fc0;
  }
  else if (param_1 == (byte *)0x1) {
    pbVar6 = &DAT_004d6518;
  }
  else {
    pbVar6 = &DAT_004d6828;
    if (param_1 != (byte *)0x2) {
      pbVar6 = param_1;
    }
  }
  bVar1 = *pbVar6;
  iVar5 = 0;
  iVar2 = -1;
  pbVar3 = pbVar6;
  while (iVar4 = iVar5, bVar1 != 0xff) {
    if (-1 < iVar2) goto LAB_00407a60;
    if ((*(int *)(pbVar3 + 4) != param_2) ||
       (iVar5 = iVar4, (*pbVar3 & (-(param_3 != 0) & 0xfcU) + 8) == 0)) {
      iVar5 = iVar4 + 1;
      pbVar3 = pbVar3 + 0xc;
      iVar4 = iVar2;
    }
    iVar2 = iVar4;
    bVar1 = *pbVar3;
  }
  if (iVar2 < 0) {
    return 0xffffffff;
  }
LAB_00407a60:
  bVar1 = pbVar6[iVar2 * 0xc];
  *param_4 = bVar1;
  if ((bVar1 & 8) == 0) {
    *param_4 = bVar1 & 0xcf;
  }
  *param_4 = *param_4 & 0xf3;
  return *(undefined4 *)(pbVar6 + iVar2 * 0xc + 8);
}



int FUN_00407a90(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;

  iVar5 = 0;
  piVar4 = param_2;
  if (*param_2 == -1) {
    return -1;
  }
  do {
    uVar2 = FUN_00421470(piVar4[1]);
    uVar2 = FUN_00421470(param_1,uVar2);
    iVar3 = FUN_0049ec50(uVar2);
    if (iVar3 == 0) {
      return param_2[iVar5 * 2];
    }
    piVar1 = piVar4 + 2;
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 2;
  } while (*piVar1 != -1);
  return -1;
}
#endif
