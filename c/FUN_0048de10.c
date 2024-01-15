#include "prototype.h"


undefined4 FUN_0048de10(float param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  
  iVar1 = (int)param_1;
  if (DAT_006930c8 < 0x400) {
    iVar2 = DAT_006930c8 * 0x40;
    param_1 = 3.402823e+38;
    *(int *)(&DAT_005330c8 + iVar2) = iVar1;
    if (iVar1 != 0) {
      pfVar3 = (float *)(*(int *)(&DAT_005330d0 + iVar2) + 8);
      iVar4 = iVar1;
      do {
        if (*pfVar3 < param_1) {
          param_1 = *pfVar3;
        }
        pfVar3 = pfVar3 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(float *)(&DAT_005330f4 + iVar2) = param_1;
    if ((param_2 & 1) != 0) {
      DAT_00deb0f0 = DAT_00deb0f0 + iVar1;
    }
    if ((param_2 & 2) != 0) {
      DAT_00deb0f4 = DAT_00deb0f4 + iVar1;
    }
    if ((param_2 & 4) != 0) {
      DAT_00deb0f8 = DAT_00deb0f8 + iVar1;
    }
    DAT_006930c8 = DAT_006930c8 + 1;
    return 1;
  }
  return 0;
}

