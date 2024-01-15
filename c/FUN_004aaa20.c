#include "prototype.h"


uint FUN_004aaa20(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  
  piVar3 = param_2;
  uVar6 = param_2[3];
  uVar1 = param_2[4];
  if (((uVar6 & 0x82) == 0) || ((uVar6 & 0x40) != 0)) {
LAB_004aab58:
    param_2[3] = uVar6 | 0x20;
    return 0xffff;
  }
  if ((uVar6 & 1) != 0) {
    param_2[1] = 0;
    if ((uVar6 & 0x10) == 0) goto LAB_004aab58;
    *param_2 = param_2[2];
    param_2[3] = uVar6 & 0xfffffffe;
  }
  uVar6 = param_2[3];
  param_2[1] = 0;
  param_2 = (int *)0x0;
  piVar3[3] = uVar6 & 0xffffffef | 2;
  if ((uVar6 & 0x10c) == 0) {
    if ((piVar3 == (int *)&DAT_004d4618) || (piVar3 == (int *)&DAT_004d4638)) {
      iVar4 = FUN_004a6a70(uVar1);
      if (iVar4 != 0) goto LAB_004aaa97;
    }
    FUN_004a6a10(piVar3);
  }
LAB_004aaa97:
  uVar6 = param_1;
  if ((piVar3[3] & 0x108U) == 0) {
    iVar4 = 2;
    param_2 = (int *)FUN_004a4490(uVar1,&param_1,2);
  }
  else {
    iVar2 = piVar3[2];
    iVar4 = *piVar3 - iVar2;
    *piVar3 = iVar2 + 2;
    piVar3[1] = piVar3[6] + -2;
    if (iVar4 < 1) {
      if (uVar1 == 0xffffffff) {
        puVar5 = &DAT_004d43a0;
      }
      else {
        puVar5 = (undefined *)((&DAT_00ecd500)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
      }
      if ((puVar5[4] & 0x20) != 0) {
        FUN_004a3ff0(uVar1,0,2);
      }
      *(short *)piVar3[2] = (short)param_1;
      uVar6 = param_1;
    }
    else {
      param_2 = (int *)FUN_004a4490(uVar1,iVar2,iVar4);
      *(short *)piVar3[2] = (short)param_1;
      uVar6 = param_1;
    }
  }
  if (param_2 != (int *)iVar4) {
    piVar3[3] = piVar3[3] | 0x20;
    return 0xffff;
  }
  return uVar6 & 0xffff;
}

