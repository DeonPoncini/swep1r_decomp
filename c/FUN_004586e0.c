#include "prototype.h"


void FUN_004586e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  default:
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    break;
  case 1:
  case 2:
  case 3:
  case 5:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x12:
    *(undefined4 *)(param_1 + 0x38) = 3;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x38) = 1;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x38) = 0;
    break;
  case 8:
  case 0xf:
  case 0x11:
    *(undefined4 *)(param_1 + 0x38) = 2;
    break;
  case 0xe:
    goto switchD_004586f5_caseD_e;
  case 0x10:
    *(undefined4 *)(param_1 + 0x38) = 0x4c;
  }
  if ((*(int *)(param_1 + 0x3c) != 3) || (*(int *)(param_1 + 0x38) != 3)) {
    if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x38)) {
      DAT_0050b5cc = 1;
    }
    FUN_0045ce90(2);
    iVar3 = 0;
    iVar5 = 0;
    do {
      if ((((iVar5 < 0xa2) || (0xb7 < iVar5)) && (iVar5 != 0xf9)) && (iVar5 != 0xfa)) {
        FUN_004282f0(iVar5,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xb8);
    FUN_004258e0();
    FUN_00454cc0();
    if (*(int *)(param_1 + 0x38) == 3) {
      DAT_0050c96c = 1;
      uVar2 = FUN_004114d0(s_data_images_greyedsplash_tga_004c4924,0x50);
      DAT_0050c96c = 0;
      FUN_004282f0(0x50,uVar2);
      uVar2 = FUN_004114d0(s_data_images_settings_btn_strch_s_004c48fc,0x4d);
      FUN_004282f0(0x4d,uVar2);
      uVar2 = FUN_004114d0(s_data_images_podhangar_backdrop_t_004c48d8,0x4e);
      FUN_004282f0(0x4e,uVar2);
      uVar2 = FUN_004114d0(s_data_images_podhangar_backdrop2__004c48b4,0x4f);
      FUN_004282f0(0x4f,uVar2);
      uVar2 = FUN_004114d0(s_data_images_episode1_tga_004c4898,0x51);
      FUN_004282f0(0x51,uVar2);
      uVar2 = FUN_004114d0(s_data_images_racer_tga_004c4880,0x54);
      FUN_004282f0(0x54,uVar2);
      uVar2 = FUN_004114d0(s_data_images_star_tga_004c4868,0x52);
      FUN_004282f0(0x52,uVar2);
      uVar2 = FUN_004114d0(s_data_images_wars_tga_004c4850,0x53);
      FUN_004282f0(0x53,uVar2);
      FUN_00457ed0();
      FUN_00457c20();
      FUN_00457cf0();
      uVar2 = FUN_00446fb0(0x89);
      FUN_004282f0(0x45,uVar2);
      uVar2 = FUN_00446fb0(0x82);
      FUN_004282f0(0x46,uVar2);
      uVar2 = FUN_00446fb0(0x83);
      FUN_004282f0(0x47,uVar2);
      uVar2 = FUN_00446fb0(0x84);
      FUN_004282f0(0x48,uVar2);
      uVar2 = FUN_00446fb0(0x85);
      FUN_004282f0(0x49,uVar2);
      uVar2 = FUN_00446fb0(0x86);
      FUN_004282f0(0x4a,uVar2);
      uVar2 = FUN_00446fb0(0x87);
      FUN_004282f0(0x4b,uVar2);
      uVar2 = FUN_00446fb0(0x88);
      FUN_004282f0(0x4c,uVar2);
      FUN_00454bc0(0x78,0xffffffff,0x53,0);
      FUN_00457bd0();
      FUN_00454bc0(0x30,0xffffffff,6,0);
      do {
        FUN_004816b0();
        iVar3 = __ftol();
      } while ((1 << ((byte)(1 - iVar3) & 0x1f) & DAT_00e364b0) == 0);
      iVar3 = (1 - iVar3) * 0x34;
      FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + iVar3),0x38,2,
                   *(undefined4 *)(&DAT_004c2720 + iVar3));
      if ((DAT_00e364b0 & 0x7ffff) == 0) {
        do {
          FUN_004816b0();
          iVar3 = __ftol();
        } while ((DAT_00e364b0 & 1 << ((byte)iVar3 & 0x1f)) != 0);
        uVar2 = *(undefined4 *)(&DAT_004c2720 + iVar3 * 0x34);
        uVar8 = *(undefined4 *)(&DAT_004c2730 + iVar3 * 0x34);
        uVar9 = 2;
      }
      else {
        uVar2 = 0xbf800000;
        uVar9 = 1;
        uVar8 = 0x6d;
      }
      FUN_0045ce10(uVar8,0x39,uVar9,uVar2);
      FUN_0045ce10(0xf4,0x16,7,0xbf800000);
      FUN_0045ce10(0xf7,0x17,10,0xbf800000);
      uVar2 = FUN_00446fb0(0x1a);
      *(undefined4 *)(param_1 + 200) = uVar2;
      iVar3 = 0;
      do {
        FUN_004282f0(iVar3 + 0x82,*(undefined4 *)(param_1 + 200));
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      uVar2 = FUN_00446fb0(0x5c);
      *(undefined4 *)(param_1 + 0xb4) = uVar2;
      uVar2 = FUN_00446fb0(0x5d);
      *(undefined4 *)(param_1 + 0xb8) = uVar2;
      uVar2 = FUN_00446fb0(0x5e);
      *(undefined4 *)(param_1 + 0xbc) = uVar2;
      uVar2 = FUN_00446fb0(0x5f);
      *(undefined4 *)(param_1 + 0xc0) = uVar2;
      uVar2 = FUN_00446fb0(0x61);
      *(undefined4 *)(param_1 + 0xc4) = uVar2;
      uVar2 = FUN_00446fb0(0x60);
      FUN_004282f0(0x62,uVar2);
      FUN_004287e0(0x62,0x8000);
      FUN_00428740(0x62,0x32,0xffffffff,0xffffffff,0xfffffffe);
      FUN_0045ce90(3);
      pcVar6 = (char *)(param_1 + 0x73);
      do {
        FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + *pcVar6 * 0x34),pcVar6 + (-0x57 - param_1),2,
                     *(undefined4 *)(&DAT_004c2720 + *pcVar6 * 0x34));
        pcVar6 = pcVar6 + 1;
      } while ((int)(pcVar6 + (-0x73 - param_1)) < 1);
      FUN_00445b90();
      return;
    }
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
    case 7:
      FUN_00457ed0();
      FUN_004580e0();
      FUN_00454bc0(0x78,0xffffffff,0x53,0);
      FUN_0043e840(param_1);
      FUN_0045ce10(0x6e,0x15,3,0xbf800000);
      if ('\0' < *(char *)(param_1 + 0x70)) {
        pcVar6 = (char *)(param_1 + 0x73);
        do {
          FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + *pcVar6 * 0x34),pcVar6 + (-0x57 - param_1),2,
                       *(undefined4 *)(&DAT_004c2720 + *pcVar6 * 0x34));
          pcVar6 = pcVar6 + 1;
        } while ((int)(pcVar6 + (-0x73 - param_1)) < (int)*(char *)(param_1 + 0x70));
      }
      iVar3 = 0;
      if (-(DAT_00e35aa0 & 0xff) != -4 && -1 < (int)(-(DAT_00e35aa0 & 0xff) + 4)) {
        do {
          FUN_0045ce10(0x6d,iVar3 + 0x34,1,0xbf800000);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(4 - (DAT_00e35aa0 & 0xff)));
      }
      iVar3 = 0;
      do {
        FUN_00454bc0(0x141,0xffffffff,iVar3 + 0xb,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      FUN_0045ce10(0xf7,0x17,10,0xbf800000);
      FUN_0045ce10(0xf6,0x1b,9,0xbf800000);
      FUN_0045ce10(0x13f,0x19,0xb,0xbf800000);
      FUN_0045ce10(0xf8,0x18,0xc,0xbf800000);
      FUN_0045ce10(0xf5,0x1a,8,0xbf800000);
      iVar3 = FUN_004409d0(&DAT_00e35a60,&DAT_004c484c);
      if (iVar3 != 0) {
        FUN_0045ce10(0x6f,0x13,4,0xbf800000);
        FUN_00445b90();
        return;
      }
      iVar3 = FUN_004409d0(&DAT_00e35a60,&DAT_004c4848);
      if (iVar3 != 0) {
        FUN_0045ce10(0x70,0x14,5,0xbf800000);
        FUN_00445b90();
        return;
      }
      break;
    case 8:
      FUN_00457ed0();
      FUN_00457fd0();
      iVar3 = 0;
      if ('\0' < *(char *)(param_1 + 0x70)) {
        piVar4 = &DAT_00e2993c;
        do {
          iVar7 = (int)*(char *)(iVar3 + 0x73 + param_1);
          iVar5 = iVar7 * 0x34;
          FUN_00454bc0(*(undefined4 *)(&DAT_004c2704 + iVar5),*(undefined4 *)(&DAT_004c2708 + iVar5)
                       ,iVar3 + 0xf,0);
          if (*piVar4 != 0) {
            *(int *)(*piVar4 + 0xf0) = iVar7;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar3 < *(char *)(param_1 + 0x70));
      }
      FUN_00454bc0(0x3c,0xffffffff,0x55,0);
      FUN_00454bc0(0x44,0xffffffff,0x56,0);
      FUN_00454bc0(0x45,0xffffffff,0x57,0);
      FUN_00454bc0(0x44,0xffffffff,0x58,0);
      iVar3 = 7;
      do {
        FUN_00454bc0(0x46,0xffffffff,iVar3 + 0x52,0);
        FUN_00454bc0(0x140,0xffffffff,iVar3,0);
        FUN_00454bc0(0x141,0xffffffff,iVar3 + 4,0);
        iVar5 = iVar3 + -6;
        iVar3 = iVar3 + 1;
      } while (iVar5 < 4);
      FUN_00454bc0(0x92,0xffffffff,0x61,1);
      iVar3 = 0;
      do {
        FUN_00454bc0(0x31,0xffffffff,iVar3 + 0x5d,1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      if ('\0' < *(char *)(param_1 + 0x70)) {
        pcVar6 = (char *)(param_1 + 0x73);
        do {
          FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + *pcVar6 * 0x34),pcVar6 + (-0x57 - param_1),2,
                       *(undefined4 *)(&DAT_004c2720 + *pcVar6 * 0x34));
          pcVar6 = pcVar6 + 1;
        } while ((int)(pcVar6 + (-0x73 - param_1)) < (int)*(char *)(param_1 + 0x70));
      }
      iVar3 = 0;
      if ((char)DAT_00e35aa0 != '\0') {
        do {
          FUN_0045ce10(0x6d,iVar3 + 0x34,1,0xbf800000);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(DAT_00e35aa0 & 0xff));
      }
      FUN_0043e840(param_1);
      FUN_00454bc0(0x6d,0xffffffff,0x95,0);
      FUN_0045ce10(0x6f,0x13,4,0xbf800000);
      FUN_0045ce10(0x70,0x14,5,0xbf800000);
      FUN_00445b90();
      return;
    case 0xf:
      uVar2 = FUN_00446fb0(0x1a);
      do {
        FUN_004282f0(iVar3 + 0x82,uVar2);
        if (iVar3 == 0) {
          cVar1 = *(char *)(param_1 + 0x73);
        }
        else {
          cVar1 = (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc];
        }
        iVar5 = cVar1 * 0x34;
        FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + iVar5),iVar3 + 0x1c,2,
                     *(undefined4 *)(&DAT_004c2720 + iVar5));
        FUN_00454bc0(*(undefined4 *)(&DAT_004c2704 + iVar5),*(undefined4 *)(&DAT_004c2708 + iVar5),
                     iVar3 + 0xf,0);
        if ((&DAT_00e2993c)[iVar3] != 0) {
          *(int *)((&DAT_00e2993c)[iVar3] + 0xf0) = (int)cVar1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
      FUN_00445b90();
      return;
    case 0x10:
      pcVar6 = (char *)(param_1 + 0xcc);
      iVar3 = 0x4d;
      do {
        FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + *pcVar6 * 0x34),iVar3 + -0x31,2,
                     *(undefined4 *)(&DAT_004c2720 + *pcVar6 * 0x34));
        FUN_00454bc0(0x7c,0xffffffff,iVar3,0);
        pcVar6 = pcVar6 + 1;
        iVar5 = iVar3 + -0x4c;
        iVar3 = iVar3 + 1;
      } while (iVar5 < 3);
      FUN_00454bc0(0x7b,0xffffffff,0x50,0);
      FUN_00454bc0(0x7d,0xffffffff,0x51,0);
      FUN_00454bc0(0x7e,0xffffffff,0x52,0);
      FUN_00454bc0(0x7f,0xffffffff,0x4c,0);
      FUN_00445b90();
      return;
    case 0x11:
      uVar2 = FUN_00446fb0(0x1a);
      iVar3 = 0;
      do {
        FUN_004282f0(iVar3 + 0x82,uVar2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
      cVar1 = (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc];
      iVar3 = cVar1 * 0x34;
      FUN_00454bc0(*(undefined4 *)(&DAT_004c2704 + iVar3),*(undefined4 *)(&DAT_004c2708 + iVar3),0xf
                   ,0);
      if (DAT_00e2993c != 0) {
        *(int *)(DAT_00e2993c + 0xf0) = (int)cVar1;
      }
      FUN_0045ce10(0x6d,0x34,1,0xbf800000);
    }
    FUN_00445b90();
  }
switchD_004586f5_caseD_e:
  return;
}

