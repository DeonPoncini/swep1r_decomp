#include "prototype.h"


undefined * FUN_00407b00(uint param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    puVar3 = param_2;
    if (uVar1 == 0xffffffff) {
      return (undefined *)0x0;
    }
    do {
      if (uVar1 == param_1) {
        return (undefined *)param_2[iVar4 * 2 + 1];
      }
      uVar1 = puVar3[2];
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar1 != 0xffffffff);
    return (undefined *)0x0;
  }
  switch(param_1) {
  case 0xd:
    FUN_0049eb80(&DAT_004d5f38,&DAT_004b3ecc);
    return &DAT_004d5f38;
  default:
    goto switchD_00407b23_caseD_e;
  case 0x1d:
    pcVar5 = s__MONDOTEXT_H_0231_LEFT_CTRL_004b42ac;
    break;
  case 0x29:
    pcVar5 = s__MONDOTEXT_H_0233_TILDE_004b4278;
    break;
  case 0x2a:
    pcVar5 = s__MONDOTEXT_H_0232_LEFT_SHIFT_004b42e4;
    break;
  case 0x38:
    pcVar5 = s__MONDOTEXT_H_0230_LEFT_ALT_004b42c8;
    break;
  case 0x45:
    param_1 = 0xc5;
    goto switchD_00407b23_caseD_e;
  case 0x46:
    pcVar5 = s__MONDOTEXT_H_0543_SCR_LOCK_004b4290;
    break;
  case 0xc5:
    param_1 = 0x45;
switchD_00407b23_caseD_e:
    GetKeyNameTextA(((param_1 & 0x80) << 1 | param_1 & 0x7f) << 0x10,&DAT_004d5f38,0x80);
    return &DAT_004d5f38;
  }
  uVar2 = FUN_00421360(pcVar5);
  FUN_0049eb80(&DAT_004d5f38,uVar2);
  return &DAT_004d5f38;
}

