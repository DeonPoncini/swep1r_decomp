#include "prototype.h"


uint FUN_0048ad50(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint local_4;
  
  uVar1 = 0;
  if (DAT_0052d56c == 0) {
    return uVar1;
  }
  uVar3 = 0;
  local_4 = 0;
  if (DAT_0052d56c != 0) {
    piVar4 = &DAT_0052d878;
    do {
      uVar2 = 0;
      if ((param_1[1] == 0) || (piVar4[-1] == param_1[1])) {
        uVar2 = 1;
        if (((param_1[2] == 0) || (*piVar4 == param_1[2])) && (uVar2 = 2, piVar4[-2] == *param_1)) {
          return uVar1;
        }
      }
      if (uVar3 < uVar2) {
        uVar3 = uVar2;
        local_4 = uVar1;
      }
      piVar4 = piVar4 + 0xda;
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_0052d56c);
  }
  return local_4;
}

