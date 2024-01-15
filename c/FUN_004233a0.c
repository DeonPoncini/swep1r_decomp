#include "prototype.h"


uint FUN_004233a0(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  
  uVar2 = param_3;
  piVar1 = DAT_004eb414;
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_004eb40c == 0) {
    return 0;
  }
  uVar10 = 0;
  iVar9 = 0;
  uVar7 = param_2;
  uVar8 = param_3;
  iVar3 = (**(code **)(*DAT_004eb414 + 0x2c))(DAT_004eb414,param_2,param_3,&param_3,&param_2,0,0);
  if (iVar3 < 0) {
    return 0;
  }
  uVar5 = DAT_004eb40c;
  if (uVar2 <= DAT_004eb40c) {
    uVar5 = uVar2;
  }
  puVar6 = (undefined4 *)0x0;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  (**(code **)(DAT_00ecc420 + 0x38))(DAT_004eb404,0,uVar5);
  if ((uVar5 < uVar2) && (DAT_004eb408 != 0)) {
    (**(code **)(DAT_00ecc420 + 0x4c))(DAT_004eb404,*(undefined4 *)(iVar9 + 0x3c),0);
    DAT_004eb40c = *(uint *)(iVar9 + 0x28);
    (**(code **)(DAT_00ecc420 + 0x38))(DAT_004eb404,uVar5,uVar2 - uVar5);
  }
  iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,0,uVar10,0,0);
  if (iVar3 < 0) {
    iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,uVar8,uVar7,0,0);
  }
  return (iVar3 < 0) - 1 & uVar5;
}

