#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004360e0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined local_20;
  uint local_1c;
  undefined local_10;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined local_1;
  
  iVar2 = param_1;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_1 = 0;
  uVar3 = 0;
  uVar4 = (uint)param_2;
  iVar5 = uVar4 + 1;
  local_10 = DAT_004d55cc;
  do {
    if (iVar5 <= (int)uVar4) {
      return;
    }
    local_1c = 0;
    if ('\0' < (char)(&DAT_004bfee0)[uVar4]) {
      do {
        if (*(char *)(iVar2 + 0x6c) != '\0') {
          param_1._0_1_ = (byte)(local_1c << 1);
          uVar3 = (short)(&DAT_00e35a8a)[uVar4] >> ((byte)param_1 & 0x1f) & 3;
        }
        iVar8 = uVar4 * 7 + 99 + local_1c;
        iVar1 = local_1c * 0x23;
        FUN_004285d0(iVar8,1);
        FUN_00428660(iVar8,iVar1 + 0x37,0x5e);
        FUN_004286f0(iVar8,0x3f2aacda,0x3f2aacda);
        switch(uVar4) {
        case 0:
          uVar7 = __ftol();
          uVar13 = 0xffffffff;
          uVar12 = 0xffffffff;
          uVar11 = 0x32;
          break;
        case 1:
          uVar7 = __ftol();
          uVar13 = 0x3e;
          uVar12 = 0xffffffff;
          uVar11 = 0x44;
          break;
        case 2:
          uVar7 = __ftol();
          uVar13 = 0x11;
          uVar12 = 0xffffffbe;
          uVar11 = 0xffffffa3;
          break;
        case 3:
          uVar7 = __ftol();
          uVar13 = 0x20;
          uVar12 = 0x59;
          uVar11 = 0xffffff9d;
          break;
        default:
          goto switchD_00436239_caseD_4;
        }
        FUN_00428740(iVar8,uVar11,uVar12,uVar13,uVar7);
switchD_00436239_caseD_4:
        local_20 = (undefined)uVar4;
        iVar6 = FUN_00440aa0(iVar2,uVar4 & 0xff,local_1c & 0xff);
        if (iVar6 == 0) {
          uVar7 = __ftol();
          uVar13 = 0xffffff80;
          uVar12 = 0xffffff80;
          uVar11 = 0xffffff80;
LAB_004362e7:
          FUN_00428740(iVar8,uVar11,uVar12,uVar13,uVar7);
        }
        else if (uVar3 != 0) {
          uVar7 = __ftol();
          uVar13 = 0xffffffff;
          uVar12 = 0xffffffff;
          uVar11 = 0xffffffff;
          goto LAB_004362e7;
        }
        uVar10 = FUN_0049eb80(&local_10,s__f2_s_d_004c0940,local_1c + 1);
        uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if (*(char *)(iVar2 + 0x6c) == '\0') {
LAB_00436328:
          iVar8 = FUN_00440aa0(iVar2,CONCAT31((int3)((uint)uVar7 >> 8),local_20),local_1c & 0xff);
          if (iVar8 == 0) {
            uVar7 = __ftol(&local_10);
            FUN_00450530(iVar1 + 0x3c,0x6d,0xffffff80,0xffffff80,0xffffff80,uVar7);
            uVar7 = FUN_00421360(s__SCREENTEXT_585__f4_c_sRace_004c0924);
            uVar7 = __ftol(uVar7);
            uVar13 = 0xffffff80;
            uVar12 = 0xffffff80;
            uVar11 = 0xffffff80;
          }
          else {
            switch(uVar4) {
            case 0:
              uVar7 = __ftol(&local_10);
              FUN_00450530(iVar1 + 0x3c,0x6d,0x32,0xffffffff,0xffffffff,uVar7);
              uVar7 = FUN_00421360(s__SCREENTEXT_585__f4_c_sRace_004c0924);
              uVar7 = __ftol(uVar7);
              uVar13 = 0xffffffff;
              uVar12 = 0xffffffff;
              uVar11 = 0x32;
              break;
            case 1:
              uVar7 = __ftol(&local_10);
              FUN_00450530(iVar1 + 0x3c,0x6d,0x44,0xffffffff,0x3e,uVar7);
              uVar7 = FUN_00421360(s__SCREENTEXT_585__f4_c_sRace_004c0924);
              uVar7 = __ftol(uVar7);
              uVar13 = 0x3e;
              uVar12 = 0xffffffff;
              uVar11 = 0x44;
              break;
            case 2:
              uVar7 = __ftol(&local_10);
              FUN_00450530(iVar1 + 0x3c,0x6d,0xffffffa3,0xffffffbe,0x11,uVar7);
              uVar7 = FUN_00421360(s__SCREENTEXT_585__f4_c_sRace_004c0924);
              uVar7 = __ftol(uVar7);
              uVar13 = 0x11;
              uVar12 = 0xffffffbe;
              uVar11 = 0xffffffa3;
              break;
            case 3:
              uVar7 = __ftol(&local_10);
              FUN_00450530(iVar1 + 0x3c,0x6d,0xffffff9d,0x59,0x20,uVar7);
              uVar7 = FUN_00421360(s__SCREENTEXT_585__f4_c_sRace_004c0924);
              uVar7 = __ftol(uVar7);
              uVar13 = 0x20;
              uVar12 = 0x59;
              uVar11 = 0xffffff9d;
              break;
            default:
              goto switchD_0043639c_caseD_4;
            }
          }
          FUN_00450530(iVar1 + 0x43,0x6f,uVar11,uVar12,uVar13,uVar7);
        }
        else {
          uVar10 = FUN_00440a20(uVar4 & 0xff,local_1c & 0xff);
          uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if ((int)uVar10 != 0) goto LAB_00436328;
        }
switchD_0043639c_caseD_4:
        if (((*(char *)(iVar2 + 0x6c) != '\0') && (uVar3 == 0)) &&
           (iVar8 = FUN_00440a20(uVar4 & 0xff,local_1c & 0xff), iVar8 == 0)) {
          switch(uVar4) {
          case 0:
            uVar7 = FUN_00421360(s__SCREENTEXT_229__f4_s4th_004c0908);
            uVar7 = __ftol(uVar7);
            uVar13 = 0xffffffff;
            uVar12 = 0xffffffff;
            uVar11 = 0x32;
            break;
          case 1:
            uVar7 = FUN_00421360(s__SCREENTEXT_229__f4_s4th_004c0908);
            uVar7 = __ftol(uVar7);
            uVar13 = 0x3e;
            uVar12 = 0xffffffff;
            uVar11 = 0x44;
            break;
          case 2:
            uVar7 = FUN_00421360(s__SCREENTEXT_229__f4_s4th_004c0908);
            uVar7 = __ftol(uVar7);
            uVar13 = 0x11;
            uVar12 = 0xffffffbe;
            uVar11 = 0xffffffa3;
            break;
          case 3:
            uVar7 = FUN_00421360(s__SCREENTEXT_229__f4_s4th_004c0908);
            uVar7 = __ftol(uVar7);
            uVar13 = 0x20;
            uVar12 = 0x59;
            uVar11 = 0xffffff9d;
            break;
          default:
            goto switchD_0043654e_caseD_4;
          }
          FUN_00450530(iVar1 + 0x3a,0x6f,uVar11,uVar12,uVar13,uVar7);
        }
switchD_0043654e_caseD_4:
        iVar8 = uVar4 * 7 + 0x7f + local_1c;
        FUN_004285d0(iVar8,1);
        FUN_00428660(iVar8,iVar1 + 0x35,0x5c);
        FUN_004286f0(iVar8,0x3f2aacda,0x3f2aacda);
        uVar7 = __ftol();
        FUN_00428740(iVar8,0xffffffa3,0xffffffbe,0x11,uVar7);
        iVar6 = FUN_00440aa0(iVar2,uVar4 & 0xff,local_1c & 0xff);
        if (iVar6 == 0) {
          uVar7 = __ftol();
          FUN_00428740(iVar8,0xffffff80,0xffffff80,0xffffff80,uVar7);
        }
        if ((param_2 == *(char *)(iVar2 + 0x5e)) &&
           (uVar9 = FUN_00440af0(iVar2,DAT_00e295d0), local_1c == uVar9)) {
          FUN_004285d0(iVar8,0);
          FUN_004285d0(0x62,1);
          FUN_00428660(0x62,iVar1 + 0x32,0x59);
          FUN_004286f0(0x62,0x3f2aacda,0x3f2aacda);
          uVar7 = __ftol();
          FUN_00428740(0x62,0x32,0xffffffff,0xffffffff,uVar7);
        }
        local_1c = local_1c + 1;
      } while ((int)local_1c < (int)(char)(&DAT_004bfee0)[uVar4]);
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

