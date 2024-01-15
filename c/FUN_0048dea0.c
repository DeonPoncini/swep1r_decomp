#include "prototype.h"


undefined4 FUN_0048dea0(float param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  
  iVar1 = (int)param_1;
  if (DAT_00af30d8 < 0x400) {
    iVar2 = DAT_00af30d8 * 0x40;
    param_1 = 3.402823e+38;
    *(int *)(&DAT_006830d0 + iVar2) = iVar1;
    if (iVar1 != 0) {
      pfVar3 = (float *)(*(int *)(&DAT_006830d8 + iVar2) + 8);
      iVar4 = iVar1;
      do {
        if (*pfVar3 < param_1) {
          param_1 = *pfVar3;
        }
        pfVar3 = pfVar3 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(float *)(&DAT_006830fc + iVar2) = param_1;
    if ((param_2 & 1) != 0) {
      DAT_00deb0fc = DAT_00deb0fc + iVar1;
    }
    if ((param_2 & 2) != 0) {
      DAT_00deb100 = DAT_00deb100 + iVar1;
    }
    if ((param_2 & 4) != 0) {
      DAT_00deb104 = DAT_00deb104 + iVar1;
    }
    DAT_00af30d8 = DAT_00af30d8 + 1;
    return 1;
  }
  return 0;
}

