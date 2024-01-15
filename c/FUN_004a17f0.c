#include "prototype.h"


uint FUN_004a17f0(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_004a1913:
    param_2[3] = uVar1 | 0x20;
    return 0xffffffff;
  }
  iVar7 = 0;
  if ((uVar1 & 1) != 0) {
    param_2[1] = 0;
    if ((uVar1 & 0x10) == 0) goto LAB_004a1913;
    *param_2 = param_2[2];
    param_2[3] = uVar1 & 0xfffffffe;
  }
  uVar1 = param_2[3];
  param_2[1] = 0;
  param_2[3] = uVar1 & 0xffffffef | 2;
  if ((uVar1 & 0x10c) == 0) {
    if ((param_2 == (int *)&DAT_004d4618) || (param_2 == (int *)&DAT_004d4638)) {
      iVar5 = FUN_004a6a70(uVar2);
      if (iVar5 != 0) goto LAB_004a1863;
    }
    FUN_004a6a10(piVar4);
  }
LAB_004a1863:
  if ((piVar4[3] & 0x108U) == 0) {
    iVar5 = 1;
    iVar7 = FUN_004a4490(uVar2,&param_1,1);
  }
  else {
    iVar3 = piVar4[2];
    iVar5 = *piVar4 - iVar3;
    *piVar4 = iVar3 + 1;
    piVar4[1] = piVar4[6] + -1;
    if (iVar5 < 1) {
      if (uVar2 == 0xffffffff) {
        puVar6 = &DAT_004d43a0;
      }
      else {
        puVar6 = (undefined *)((&DAT_00ecd500)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
      }
      if ((puVar6[4] & 0x20) != 0) {
        FUN_004a3ff0(uVar2,0,2);
      }
      *(undefined *)piVar4[2] = (undefined)param_1;
    }
    else {
      iVar7 = FUN_004a4490(uVar2,iVar3,iVar5);
      *(undefined *)piVar4[2] = (undefined)param_1;
    }
  }
  if (iVar7 != iVar5) {
    piVar4[3] = piVar4[3] | 0x20;
    return 0xffffffff;
  }
  return param_1 & 0xff;
}

