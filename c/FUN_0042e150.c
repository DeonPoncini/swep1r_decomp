#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e150(char *param_1,int *param_2,short param_3)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined3 uVar12;
  short sVar13;
  undefined2 uVar15;
  int iVar14;
  short sVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  short local_78;
  undefined2 local_70;
  short local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  int local_40;
  uint local_3c;
  short local_24;
  undefined2 local_20;
  short local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  uint local_4;
  
  uVar6 = _DAT_0050c0b8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_64 = CONCAT22(local_64._2_2_,DAT_0050c0ba);
  local_60 = 0;
  FUN_0042ddf0(param_2,(int)param_3);
  local_40 = 0;
  cVar1 = *param_1;
  local_68 = uVar6;
  iVar10 = local_60;
  uVar17 = DAT_004bfa0c;
  uVar18 = local_4;
  uVar19 = local_4;
  uVar20 = local_4;
  uVar21 = local_4;
  do {
    if ((cVar1 == '\0') || (DAT_0050c0b4 < local_40)) {
      DAT_0050c0bc = (undefined2)local_68;
      DAT_0050c0be = (undefined2)local_64;
      DAT_004bfa0c = uVar17;
      return;
    }
    bVar7 = param_1[iVar10];
    DAT_0050c0c8 = (uint)bVar7;
    DAT_004bfa0c = uVar17;
    local_60 = iVar10;
    if (bVar7 != 0x7e) goto LAB_0042e384;
    bVar7 = param_1[iVar10 + 1];
    local_60 = iVar10 + 1;
    iVar8 = (int)(char)bVar7;
    iVar9 = iVar8 + -0x30;
    uVar15 = (undefined2)((uint)param_1 >> 0x10);
    switch(iVar8) {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      DAT_004bfa0c._3_1_ = (char)(uVar17 >> 0x18);
      sVar13 = (short)DAT_004bfa0c._3_1_;
      bVar7 = 0;
      FUN_0042d950(CONCAT22((short)((uint)iVar9 >> 0x10),
                            (ushort)*(byte *)(iVar8 + 0x4bf9b8 + iVar9 * 2)),
                   *(undefined *)(iVar8 + 0x4bf9b9 + iVar9 * 2),
                   CONCAT22(uVar15,(ushort)*(byte *)(iVar8 + 0x4bf9ba + iVar9 * 2)),sVar13);
      FUN_0044e290(0,0,DAT_004bfa0c,DAT_004bfa0c >> 8 & 0xff,DAT_004bfa0c >> 0x10 & 0xff,
                   DAT_004bfa0c >> 0x18);
      break;
    case 0x62:
      local_40 = local_40 + 1;
    case 0x7e:
      bVar7 = 0;
      break;
    case 99:
      iVar10 = FUN_0042de30(param_1 + iVar10 + 2,DAT_0050c0c4);
      sVar13 = (short)(iVar10 / 2);
      goto LAB_0042e268;
    case 0x6b:
      bVar3 = !bVar3;
      bVar7 = 0;
      break;
    case 0x6e:
      bVar7 = 0;
      DAT_0050c0ba = (undefined2)(_DAT_0050c0b8 >> 0x10);
      _DAT_0050c0b8 = CONCAT22(DAT_0050c0ba,(short)uVar6);
      local_68 = uVar6;
      local_64 = local_64 + CONCAT22(uVar15,*(undefined2 *)(param_2 + 0x13));
      break;
    case 0x6f:
      bVar4 = !bVar4;
      bVar7 = 0;
      break;
    case 0x70:
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar7 = 0;
      break;
    case 0x72:
      sVar13 = FUN_0042de30(param_1 + iVar10 + 2,DAT_0050c0c4);
LAB_0042e268:
      bVar7 = 0;
      _DAT_0050c0b8 = CONCAT22(DAT_0050c0ba,(short)uVar6 - sVar13);
      local_68 = _DAT_0050c0b8;
      break;
    case 0x73:
      bVar5 = !bVar5;
      bVar7 = 0;
      break;
    case 0x74:
      bVar7 = 0x7e;
    }
LAB_0042e384:
    if ((DAT_00e99768 == 0) || (local_40 == DAT_0050c0b4)) {
      local_3c = 0;
      sVar13 = -5;
      if ((0x96 < bVar7) && ((param_2[0x18] != 0 && ((&DAT_004bf9c2)[bVar7] != 0xff)))) {
        iVar10 = (uint)(byte)(&DAT_004bf9c2)[bVar7] * 2;
        if ((&DAT_004bfa10)[iVar10] == 0xff) {
          bVar7 = (&DAT_004bfa11)[iVar10];
        }
        else {
          pcVar11 = (char *)((uint)(byte)(&DAT_004bfa10)[iVar10] * 0x10 + param_2[0x18]);
          local_1c = *(short *)(pcVar11 + 8);
          if (local_1c == -1) {
            sVar13 = -2;
            local_1c = local_6c;
          }
          else {
            sVar13 = (short)*pcVar11;
            uVar20 = (uint)*(ushort *)(pcVar11 + 6);
            uVar21 = (uint)*(ushort *)(pcVar11 + 4);
            uVar19 = (uint)*(ushort *)(pcVar11 + 0xc);
            uVar18 = (uint)*(ushort *)(pcVar11 + 0xe);
            local_70 = *(undefined2 *)(pcVar11 + 10);
            if (*param_2 == 0) {
              local_78 = (short)pcVar11[1];
            }
            else {
              local_78 = 0;
            }
          }
          local_8 = local_64;
          local_4 = local_68;
          if (sVar13 == param_3) {
            uVar12 = (undefined3)((uint)pcVar11 >> 8);
            uVar17 = local_68;
            if (bVar4) {
              FUN_0044e290(0,0,0,0,0,CONCAT31(uVar12,DAT_004bfa0c._3_1_));
              iVar8 = local_64 + -1;
              iVar9 = local_68 - 1;
              FUN_0042d990(iVar9,iVar8,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78);
              iVar14 = local_68 + 1;
              FUN_0042d990(iVar14,local_64 + 1,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,
                           local_78);
              FUN_0042d990(iVar14,iVar8,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78);
              FUN_0042d990(iVar9,local_64 + 1,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78
                          );
              FUN_0042d990(iVar9,local_64,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78);
              FUN_0042d990(iVar14,local_64,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78);
              FUN_0042d990(local_68,iVar8,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78);
            }
            else if (bVar5) {
              FUN_0044e290(0,0,0,0,0,CONCAT31(uVar12,DAT_004bfa0c._3_1_));
              uVar17 = local_68 + 1;
            }
            else {
              if (!bVar3) goto LAB_0042e74b;
              FUN_0044e290(0,0,0,0,0,CONCAT31(uVar12,DAT_004bfa0c._3_1_));
              FUN_0042d990(local_68 - 1,local_64,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,
                           local_78);
              FUN_0042d990(local_68 + 1,local_64,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,
                           local_78);
              FUN_0042d990(local_68,local_64 + -1,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,
                           local_78);
            }
            FUN_0042d990(uVar17,local_64 + 1,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78)
            ;
            FUN_0044e290(0,0,DAT_004bfa0c,DAT_004bfa0c >> 8 & 0xff,DAT_004bfa0c >> 0x10 & 0xff,
                         DAT_004bfa0c >> 0x18);
          }
LAB_0042e74b:
          bVar7 = (&DAT_004bfa11)[iVar10];
          local_18 = uVar18;
          local_14 = uVar19;
          local_10 = uVar21;
          local_c = uVar20;
          local_6c = local_1c;
          local_20 = local_70;
          local_24 = local_78;
          if (bVar7 != 0xff) goto LAB_0042e786;
          local_3c = (uint)*(ushort *)(pcVar11 + 2);
        }
        if (bVar7 == 0xff) {
          bVar7 = 0;
        }
      }
LAB_0042e786:
      if (bVar7 == 0) {
        sVar16 = -2;
      }
      else {
        if (bVar7 == 0x5f) {
          bVar7 = 0x20;
        }
        if (((0x60 < bVar7) && (bVar7 < 0x7b)) && (*(byte *)((int)param_2 + 0x5b) < 0x61)) {
          bVar7 = bVar7 - 0x20;
        }
        if (((param_2[0x17] == 0) || (bVar7 < *(byte *)((int)param_2 + 0x5a))) ||
           (*(byte *)((int)param_2 + 0x5b) < bVar7)) {
          sVar16 = -2;
          local_3c = 0;
        }
        else {
          pcVar11 = (char *)(((uint)bVar7 - (uint)*(byte *)((int)param_2 + 0x5a)) * 0x10 +
                            param_2[0x17]);
          sVar2 = *(short *)(pcVar11 + 8);
          if (sVar2 == -1) {
            sVar16 = -2;
            local_3c = (uint)*(ushort *)(pcVar11 + 2);
          }
          else {
            sVar16 = (short)*pcVar11;
            uVar20 = (uint)*(ushort *)(pcVar11 + 6);
            uVar21 = (uint)*(ushort *)(pcVar11 + 4);
            uVar19 = (uint)*(ushort *)(pcVar11 + 0xc);
            uVar18 = (uint)*(ushort *)(pcVar11 + 0xe);
            local_70 = *(undefined2 *)(pcVar11 + 10);
            local_6c = sVar2;
            if (*param_2 == 0) {
              local_78 = (short)pcVar11[1];
              local_3c = (uint)*(ushort *)(pcVar11 + 2);
            }
            else {
              local_78 = 0;
              local_3c = (uint)*(ushort *)(pcVar11 + 2);
            }
          }
        }
      }
      if ((bVar7 != 0) && (sVar16 == param_3)) {
        uVar17 = local_68;
        if (bVar4) {
          FUN_0044e290(0,0,0,0,0,DAT_004bfa0c._3_1_);
          iVar10 = local_64 + -1;
          iVar8 = local_68 - 1;
          FUN_0042d990(iVar8,iVar10,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          iVar9 = local_68 + 1;
          FUN_0042d990(iVar9,local_64 + 1,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          FUN_0042d990(iVar9,iVar10,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          FUN_0042d990(iVar8,local_64 + 1,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          FUN_0042d990(iVar8,local_64,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          FUN_0042d990(iVar9,local_64,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          FUN_0042d990(local_68,iVar10,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
LAB_0042eadd:
          FUN_0042d990(uVar17,local_64 + 1,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          FUN_0044e290(0,0,DAT_004bfa0c,DAT_004bfa0c >> 8 & 0xff,DAT_004bfa0c >> 0x10 & 0xff,
                       DAT_004bfa0c >> 0x18);
        }
        else {
          if (bVar5) {
            FUN_0044e290(0,0,0,0,0,DAT_004bfa0c._3_1_);
            uVar17 = local_68 + 1;
            goto LAB_0042eadd;
          }
          if (bVar3) {
            FUN_0044e290(0,0,0,0,0,DAT_004bfa0c._3_1_);
            FUN_0042d990(local_68 - 1,local_64,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,
                         local_78);
            FUN_0042d990(local_68 + 1,local_64,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,
                         local_78);
            FUN_0042d990(local_68,local_64 + -1,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,
                         local_78);
            goto LAB_0042eadd;
          }
        }
        FUN_0042d990(local_68,local_64,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
      }
      if (sVar13 == param_3) {
        FUN_0042d990(local_4,local_8,local_c,local_10,local_14,local_18,local_1c,local_20,local_24);
      }
      local_68 = local_68 + local_3c;
    }
    iVar10 = local_60 + 1;
    cVar1 = param_1[iVar10];
    uVar17 = DAT_004bfa0c;
  } while( true );
}

