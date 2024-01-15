#include "prototype.h"


int FUN_004a5dc0(undefined4 param_1,ushort *param_2,undefined4 *param_3)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  ushort uVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint local_44c;
  short *local_448;
  uint local_444;
  int local_440;
  int local_43c;
  int local_438;
  int local_434;
  int local_430;
  undefined local_42a;
  undefined local_429;
  undefined2 local_428;
  short local_426;
  int local_424;
  undefined4 local_420;
  undefined4 local_41c;
  int local_418;
  int local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_404;
  undefined local_400 [511];
  undefined2 local_201;
  
  local_414 = 0;
  uVar7 = *param_2;
  param_2 = param_2 + 1;
  local_444 = 0;
  local_43c = 0;
  uVar11 = 0;
  psVar9 = local_448;
  do {
    if ((uVar7 == 0) || (local_43c < 0)) {
      return local_43c;
    }
    if ((uVar7 < 0x20) || (0x78 < uVar7)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (byte)(&DAT_004af9b8)[uVar7] & 0xf;
    }
    local_414 = (int)(char)(&DAT_004af9d8)[uVar3 * 8 + local_414] >> 4;
    psVar10 = psVar9;
    uVar3 = uVar11;
    switch(local_414) {
    case 0:
switchD_004a5e51_caseD_0:
      local_434 = 1;
      FUN_004a6720(uVar7,param_1,&local_43c);
      break;
    case 1:
      local_440 = -1;
      local_420 = 0;
      local_424 = 0;
      local_430 = 0;
      local_438 = 0;
      local_44c = 0;
      local_434 = 0;
      break;
    case 2:
      switch(uVar7) {
      case 0x20:
        local_44c = local_44c | 2;
        break;
      case 0x23:
        local_44c = local_44c | 0x80;
        break;
      case 0x2b:
        local_44c = local_44c | 1;
        break;
      case 0x2d:
        local_44c = local_44c | 4;
        break;
      case 0x30:
        local_44c = local_44c | 8;
      }
      break;
    case 3:
      if (uVar7 == 0x2a) {
        local_430 = FUN_004a67d0(&param_3);
        psVar10 = local_448;
        uVar3 = local_444;
        if (local_430 < 0) {
          local_44c = local_44c | 4;
          local_430 = -local_430;
          psVar10 = psVar9;
          uVar3 = uVar11;
        }
      }
      else {
        local_430 = (uVar7 - 0x30) + local_430 * 10;
      }
      break;
    case 4:
      local_440 = 0;
      break;
    case 5:
      if (uVar7 == 0x2a) {
        local_440 = FUN_004a67d0(&param_3);
        psVar10 = local_448;
        uVar3 = local_444;
        if (local_440 < 0) {
          local_440 = -1;
          psVar10 = psVar9;
          uVar3 = uVar11;
        }
      }
      else {
        local_440 = (uVar7 - 0x30) + local_440 * 10;
      }
      break;
    case 6:
      if (uVar7 == 0x49) {
        if ((*param_2 != 0x36) || (param_2[1] != 0x34)) {
          local_414 = 0;
          goto switchD_004a5e51_caseD_0;
        }
        param_2 = param_2 + 2;
        local_44c = local_44c | 0x8000;
      }
      else if (uVar7 == 0x68) {
        local_44c = local_44c | 0x20;
      }
      else if (uVar7 == 0x77) {
        local_44c = local_44c | 0x800;
      }
      break;
    case 7:
      psVar10 = local_448;
      switch(uVar7) {
      case 0x43:
        if ((local_44c & 0x830) == 0) {
          local_44c = local_44c | 0x20;
        }
      case 99:
        uVar11 = 1;
        local_434 = 1;
        local_41c = FUN_004a67d0(&param_3);
        local_444 = uVar11;
        if ((local_44c & 0x20) == 0) {
          local_400._0_2_ = (undefined2)local_41c;
        }
        else {
          local_42a = (undefined)local_41c;
          local_429 = 0;
          iVar8 = FUN_004a95d0(local_400,&local_42a,DAT_004d1f9c);
          if (iVar8 < 0) {
            psVar9 = (short *)local_400;
            local_424 = 1;
            psVar10 = psVar9;
            break;
          }
        }
        psVar9 = (short *)local_400;
        psVar10 = psVar9;
        break;
      case 0x45:
      case 0x47:
        local_420 = 1;
        uVar7 = uVar7 + 0x20;
      case 0x65:
      case 0x66:
      case 0x67:
        if (local_440 < 0) {
          local_440 = 6;
        }
        else if ((local_440 == 0) && (uVar7 == 0x67)) {
          local_440 = 1;
        }
        local_410 = *param_3;
        local_40c = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR_FUN_004d2088)(&local_410,local_400,(int)(char)uVar7,local_440,local_420);
        if (((local_44c & 0x80) != 0) && (local_440 == 0)) {
          (*(code *)PTR_FUN_004d2094)(local_400);
        }
        if ((uVar7 == 0x67) && ((local_44c & 0x80) == 0)) {
          (*(code *)PTR_FUN_004d208c)(local_400);
        }
        psVar10 = (short *)local_400;
        uVar11 = local_44c | 0x40;
        if (local_400[0] == '-') {
          psVar10 = (short *)(local_400 + 1);
          uVar11 = local_44c | 0x140;
        }
LAB_004a62f5:
        local_44c = uVar11;
        psVar9 = psVar10;
        uVar11 = 0xffffffff;
        psVar10 = psVar9;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar1 = *(byte *)psVar10;
          psVar10 = (short *)((int)psVar10 + 1);
        } while (bVar1 != 0);
        uVar11 = ~uVar11 - 1;
        psVar10 = psVar9;
        local_444 = uVar11;
        break;
      case 0x53:
        if ((local_44c & 0x830) == 0) {
          local_44c = local_44c | 0x20;
        }
      case 0x73:
        iVar8 = 0x7fffffff;
        if (local_440 != -1) {
          iVar8 = local_440;
        }
        psVar9 = (short *)FUN_004a67d0(&param_3);
        if ((local_44c & 0x20) == 0) {
          if (psVar9 == (short *)0x0) {
            psVar9 = (short *)PTR_DAT_004d2084;
          }
          local_434 = 1;
          for (psVar10 = psVar9; (iVar8 != 0 && (iVar8 = iVar8 + -1, *psVar10 != 0));
              psVar10 = psVar10 + 1) {
          }
          uVar11 = (int)psVar10 - (int)psVar9 >> 1;
          psVar10 = psVar9;
          local_444 = uVar11;
        }
        else {
          if (psVar9 == (short *)0x0) {
            psVar9 = (short *)PTR_DAT_004d2080;
          }
          local_444 = 0;
          psVar6 = psVar9;
          uVar11 = 0;
          psVar10 = psVar9;
          if (0 < iVar8) {
            do {
              uVar11 = local_444;
              if (*(byte *)psVar6 == 0) break;
              if ((PTR_DAT_004d1d90[(uint)*(byte *)psVar6 * 2 + 1] & 0x80) != 0) {
                psVar6 = (short *)((int)psVar6 + 1);
              }
              uVar11 = local_444 + 1;
              psVar6 = (short *)((int)psVar6 + 1);
              local_444 = uVar11;
            } while ((int)uVar11 < iVar8);
          }
        }
        break;
      case 0x58:
        goto switchD_004a6039_caseD_58;
      case 0x5a:
        psVar6 = (short *)FUN_004a67d0(&param_3);
        psVar10 = (short *)PTR_DAT_004d2080;
        uVar11 = local_44c;
        if ((psVar6 != (short *)0x0) && (psVar9 = *(short **)(psVar6 + 2), psVar9 != (short *)0x0))
        {
          psVar10 = psVar9;
          if ((local_44c & 0x800) == 0) {
            uVar11 = (uint)*psVar6;
            local_434 = 0;
            local_444 = uVar11;
          }
          else {
            local_434 = 1;
            uVar11 = (uint)(int)*psVar6 >> 1;
            local_444 = uVar11;
          }
          break;
        }
        goto LAB_004a62f5;
      case 100:
      case 0x69:
        local_444 = 10;
        local_44c = local_44c | 0x40;
        goto LAB_004a6383;
      case 0x6e:
        piVar4 = (int *)FUN_004a67d0(&param_3);
        if ((local_44c & 0x20) == 0) {
          local_424 = 1;
          *piVar4 = local_43c;
        }
        else {
          local_424 = 1;
          *(undefined2 *)piVar4 = (undefined2)local_43c;
        }
        break;
      case 0x6f:
        local_444 = 8;
        if ((local_44c & 0x80) != 0) {
          local_44c = local_44c | 0x200;
        }
        goto LAB_004a6383;
      case 0x70:
        local_440 = 8;
switchD_004a6039_caseD_58:
        local_418 = 7;
LAB_004a633a:
        local_444 = 0x10;
        if ((local_44c & 0x80) != 0) {
          local_426 = (short)local_418 + 0x51;
          local_428 = 0x30;
          local_438 = 2;
        }
        goto LAB_004a6383;
      case 0x75:
        local_444 = 10;
LAB_004a6383:
        if ((local_44c & 0x8000) == 0) {
          if ((local_44c & 0x20) == 0) {
            if ((local_44c & 0x40) == 0) {
              uVar11 = FUN_004a67d0(&param_3);
              uVar12 = (ulonglong)uVar11;
            }
            else {
              iVar8 = FUN_004a67d0(&param_3);
              uVar12 = (ulonglong)iVar8;
            }
          }
          else if ((local_44c & 0x40) == 0) {
            uVar11 = FUN_004a67d0(&param_3);
            uVar12 = (ulonglong)(uVar11 & 0xffff);
          }
          else {
            sVar2 = FUN_004a67d0(&param_3);
            uVar12 = (ulonglong)(int)sVar2;
          }
        }
        else {
          uVar12 = FUN_004a67f0(&param_3);
        }
        if ((((local_44c & 0x40) != 0) && ((longlong)uVar12 < 0x100000000)) &&
           ((longlong)uVar12 < 0)) {
          uVar12 = CONCAT44(-((int)(uVar12 >> 0x20) + (uint)((int)uVar12 != 0)),-(int)uVar12);
          local_44c = local_44c | 0x100;
        }
        uVar11 = (uint)(uVar12 >> 0x20);
        if ((local_44c & 0x8000) == 0) {
          uVar11 = 0;
        }
        lVar13 = CONCAT44(uVar11,(uint)uVar12);
        if (local_440 < 0) {
          local_440 = 1;
        }
        else {
          local_44c = local_44c & 0xfffffff7;
        }
        if (((uint)uVar12 | uVar11) == 0) {
          local_438 = 0;
        }
        local_448 = &local_201;
        iVar8 = local_440;
        while ((local_440 = iVar8 + -1, 0 < iVar8 || (lVar13 != 0))) {
          local_404 = 0;
          iVar8 = __aullrem(lVar13,local_444,0);
          iVar8 = iVar8 + 0x30;
          lVar13 = __aulldiv(lVar13,local_444,local_404);
          if (0x39 < iVar8) {
            iVar8 = iVar8 + local_418;
          }
          *(byte *)local_448 = (byte)iVar8;
          local_448 = (short *)((int)local_448 + -1);
          iVar8 = local_440;
        }
        uVar11 = (int)&local_201 + -(int)local_448;
        psVar9 = (short *)((int)local_448 + 1);
        psVar10 = psVar9;
        local_444 = uVar11;
        if (((local_44c & 0x200) != 0) && ((*(byte *)psVar9 != 0x30 || (uVar11 == 0)))) {
          uVar11 = (int)&local_201 + -(int)local_448 + 1;
          *(byte *)local_448 = 0x30;
          psVar9 = local_448;
          psVar10 = local_448;
          local_444 = uVar11;
        }
        break;
      case 0x78:
        local_418 = 0x27;
        goto LAB_004a633a;
      }
      local_448 = psVar10;
      psVar10 = psVar9;
      uVar3 = uVar11;
      if (local_424 == 0) {
        if ((local_44c & 0x40) != 0) {
          if ((local_44c & 0x100) == 0) {
            if ((local_44c & 1) == 0) {
              if ((local_44c & 2) == 0) goto LAB_004a652c;
              local_428 = 0x20;
            }
            else {
              local_428 = 0x2b;
            }
          }
          else {
            local_428 = 0x2d;
          }
          local_438 = 1;
        }
LAB_004a652c:
        iVar8 = (local_430 - local_438) - uVar11;
        if ((local_44c & 0xc) == 0) {
          FUN_004a6750(0x20,iVar8,param_1,&local_43c);
        }
        FUN_004a6790(&local_428,local_438,param_1,&local_43c);
        if (((local_44c & 8) != 0) && ((local_44c & 4) == 0)) {
          FUN_004a6750(0x30,iVar8,param_1,&local_43c);
        }
        if ((local_434 == 0) && (psVar10 = local_448, uVar3 = local_444, 0 < (int)uVar11)) {
          do {
            uVar3 = uVar3 - 1;
            iVar5 = FUN_004a95d0(&local_41c,psVar10,DAT_004d1f9c);
            if (iVar5 < 1) break;
            FUN_004a6720(local_41c,param_1,&local_43c);
            psVar10 = (short *)((int)psVar10 + iVar5);
          } while (0 < (int)uVar3);
        }
        else {
          FUN_004a6790(psVar9,uVar11,param_1,&local_43c);
        }
        psVar10 = local_448;
        uVar3 = local_444;
        if ((local_44c & 4) != 0) {
          FUN_004a6750(0x20,iVar8,param_1,&local_43c);
        }
      }
    }
    uVar7 = *param_2;
    param_2 = param_2 + 1;
    uVar11 = uVar3;
    psVar9 = psVar10;
  } while( true );
}

