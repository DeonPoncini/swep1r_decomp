#include "prototype.h"


void FUN_004584a0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_8;
  ushort local_4;
  
  iVar2 = param_1;
  local_8 = 0x82;
  do {
    FUN_004282f0(local_8,*(undefined4 *)(param_1 + 200));
    local_8 = local_8 + 1;
  } while ((short)local_8 < 0xa2);
  if (param_2 != 0) {
    param_1 = 0;
    do {
      param_2 = 0;
      do {
        local_8._0_1_ = (byte)(param_2 << 1);
        local_4 = (short)(&DAT_00e35a8a)[param_1] >> ((byte)local_8 & 0x1f) & 3;
        iVar1 = param_1 * 7 + 99 + param_2;
        FUN_004282f0(iVar1,*(undefined4 *)(iVar2 + 0xc0));
        FUN_004287e0(iVar1,0x8000);
        switch(param_1) {
        case 0:
          uVar6 = 0xffffffff;
          uVar5 = 0xffffffff;
          uVar4 = 0x32;
          break;
        case 1:
          uVar6 = 0x3e;
          uVar5 = 0xffffffff;
          uVar4 = 0x44;
          break;
        case 2:
          uVar6 = 0x11;
          uVar5 = 0xffffffbe;
          uVar4 = 0xffffffa3;
          break;
        case 3:
          uVar6 = 0x20;
          uVar5 = 0x59;
          uVar4 = 0xffffff9d;
          break;
        default:
          goto switchD_00458591_caseD_4;
        }
        FUN_00428740(iVar1,uVar4,uVar5,uVar6,0xfffffffe);
switchD_00458591_caseD_4:
        iVar3 = FUN_00440aa0(iVar2,param_1 & 0xff,param_2 & 0xff);
        if (iVar3 == 0) {
          FUN_00428740(iVar1,0xffffff80,0xffffff80,0xffffff80,0xfffffffe);
        }
        if (*(char *)(iVar2 + 0x6c) != '\0') {
          switch(local_4) {
          default:
            goto switchD_00458610_caseD_0;
          case 1:
            uVar4 = *(undefined4 *)(iVar2 + 0xbc);
            break;
          case 2:
            uVar4 = *(undefined4 *)(iVar2 + 0xb8);
            break;
          case 3:
            uVar4 = *(undefined4 *)(iVar2 + 0xb4);
          }
          FUN_004282f0(iVar1,uVar4);
        }
switchD_00458610_caseD_0:
        FUN_004282f0(iVar1 + 0x1c,*(undefined4 *)(iVar2 + 0xc4));
        FUN_004287e0(iVar1 + 0x1c,0x8000);
        FUN_00428740(iVar1 + 0x1c,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
        param_2 = param_2 + 1;
      } while ((int)param_2 < 7);
      param_1 = param_1 + 1;
    } while ((int)param_1 < 4);
  }
  return;
}

