#include "prototype.h"


uint FUN_0048add0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint local_8;
  uint local_4;
  
  uVar2 = 0;
  if (DAT_0052e61c == 0) {
    return uVar2;
  }
  local_8 = 0;
  local_4 = 0;
  if (DAT_0052e61c != 0) {
    piVar3 = &DAT_0052d578;
    iVar1 = *param_1;
    do {
      uVar4 = 0;
      if ((piVar3[-2] == iVar1) && (uVar4 = 1, piVar3[-1] == param_1[1])) {
        uVar4 = 2;
        if (iVar1 == 1) {
          if (((*piVar3 == param_1[2]) && (piVar3[1] == param_1[3])) && (piVar3[2] == param_1[4])) {
            return uVar2;
          }
        }
        else {
          if (iVar1 != 2) {
            return uVar2;
          }
          if (piVar3[-2] == 2) {
            uVar4 = 3;
          }
          if (((*piVar3 == param_1[2]) && (piVar3[1] == param_1[3])) &&
             ((piVar3[2] == param_1[4] && (piVar3[9] == param_1[0xb])))) {
            return uVar2;
          }
        }
      }
      if (local_8 < uVar4) {
        local_8 = uVar4;
        local_4 = uVar2;
      }
      piVar3 = piVar3 + 0x18;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_0052e61c);
  }
  return local_4;
}

