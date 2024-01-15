#include "prototype.h"


void FUN_0048d1c0(byte **param_1,int param_2,byte **param_3,uint param_4,int param_5,int param_6,
                 byte **param_7)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte **ppbVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint local_20;
  uint local_10;
  int local_4;
  
  iVar4 = param_4;
  iVar1 = *(int *)(param_4 + 8);
  iVar2 = *(int *)(param_4 + 0xc);
  cVar3 = (char)*(undefined4 *)(param_4 + 0x10);
  uVar6 = *(uint *)(param_4 + 0x2c);
  if (uVar6 != 0) {
    local_10 = 0xffffffff >> (0x20U - (char)uVar6 & 0x1f);
    uVar11 = 0xff >> ((byte)*(undefined4 *)(param_4 + 0x34) & 0x1f);
    if ((int)(uVar11 & 0xfffffffe) < 3) {
      local_20 = 1;
    }
    else {
      local_20 = (int)uVar11 >> 1;
    }
  }
  iVar5 = iVar1 - *(int *)(param_2 + 8);
  iVar10 = iVar2 - *(int *)(param_2 + 0xc);
  bVar8 = cVar3 - (char)*(undefined4 *)(param_2 + 0x10);
  if (uVar6 != 0) {
    local_4 = uVar6 - *(int *)(param_2 + 0x2c);
  }
  ppbVar7 = param_3;
  param_4 = uVar6;
  if (0 < param_5) {
    do {
      switch(*(undefined4 *)(iVar4 + 4)) {
      case 8:
        ppbVar7 = (byte **)(uint)*(byte *)param_3;
        break;
      default:
        (**(code **)(DAT_00ecc420 + 0x18))
                  (s__EUnsupported_pixel_depth__Only_8_004d18e6 + 2,
                   s_D__devel_QA5_pc_gnome_SpecPlat_r_004d1940,0x108);
        break;
      case 0x10:
        ppbVar7 = (byte **)(uint)*(ushort *)param_3;
        break;
      case 0x18:
        ppbVar7 = (byte **)(uint)CONCAT21(CONCAT11(*(byte *)param_3,*(byte *)((int)param_3 + 1)),
                                          *(byte *)((int)param_3 + 2));
        break;
      case 0x20:
        ppbVar7 = (byte **)*param_3;
      }
      uVar12 = (uint)ppbVar7 >> ((byte)*(undefined4 *)(iVar4 + 0x14) & 0x1f) &
               0xffffffffU >> (0x20U - (char)iVar1 & 0x1f);
      uVar6 = (uint)ppbVar7 >> ((byte)*(undefined4 *)(iVar4 + 0x18) & 0x1f) &
              0xffffffffU >> (0x20U - (char)iVar2 & 0x1f);
      uVar11 = (uint)ppbVar7 >> ((byte)*(undefined4 *)(iVar4 + 0x1c) & 0x1f) &
               0xffffffffU >> (0x20U - cVar3 & 0x1f);
      if (*(int *)(iVar4 + 0x2c) != 0) {
        param_4 = (uint)ppbVar7 >> ((byte)*(undefined4 *)(iVar4 + 0x30) & 0x1f) & local_10;
      }
      if (iVar5 < 1) {
        uVar12 = uVar12 << (-(byte)iVar5 & 0x1f);
      }
      else {
        uVar12 = uVar12 >> ((byte)iVar5 & 0x1f);
      }
      bVar9 = (byte)iVar10;
      if (iVar10 < 1) {
        uVar6 = uVar6 << (-bVar9 & 0x1f);
      }
      else {
        uVar6 = uVar6 >> (bVar9 & 0x1f);
      }
      if (iVar5 < 1) {
        uVar11 = uVar11 << (-bVar8 & 0x1f);
      }
      else {
        uVar11 = uVar11 >> (bVar8 & 0x1f);
      }
      ppbVar7 = (byte **)(uVar6 << ((byte)*(undefined4 *)(param_2 + 0x18) & 0x1f) |
                          uVar11 << ((byte)*(undefined4 *)(param_2 + 0x1c) & 0x1f) |
                         uVar12 << ((byte)*(undefined4 *)(param_2 + 0x14) & 0x1f));
      if (*(int *)(iVar4 + 0x2c) != 0) {
        if (param_6 == 0) {
          if (local_4 < 1) {
            param_4 = param_4 << (-(byte)local_4 & 0x1f);
          }
          else {
            param_4 = param_4 >> ((byte)local_4 & 0x1f);
          }
          ppbVar7 = (byte **)((uint)ppbVar7 |
                             param_4 << ((byte)*(undefined4 *)(param_2 + 0x30) & 0x1f));
        }
        else if (param_4 < local_20) {
          ppbVar7 = param_7;
        }
      }
      switch(*(undefined4 *)(param_2 + 4)) {
      case 8:
        *(char *)param_1 = (char)ppbVar7;
        break;
      case 0x10:
        *(short *)param_1 = (short)ppbVar7;
        break;
      case 0x18:
        *(char *)param_1 = (char)((uint)ppbVar7 >> 0x10);
        *(char *)((int)param_1 + 1) = (char)((uint)ppbVar7 >> 8);
        *(char *)((int)param_1 + 2) = (char)ppbVar7;
        break;
      case 0x20:
        *param_1 = (byte *)ppbVar7;
      }
      param_3 = (byte **)((int)param_3 + (*(uint *)(iVar4 + 4) >> 3));
      param_1 = (byte **)((int)param_1 + (*(uint *)(param_2 + 4) >> 3));
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

