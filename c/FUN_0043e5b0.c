#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e5b0(float param_1)

{
  float fVar1;
  float *pfVar2;
  
  pfVar2 = (float *)&DAT_004c4018;
  do {
    switch(*(undefined2 *)(pfVar2 + 4)) {
    case 0:
      fVar1 = param_1 - _DAT_004ac94c;
      break;
    case 1:
      fVar1 = param_1 - _DAT_004ac9c8;
      *pfVar2 = fVar1;
      pfVar2[3] = fVar1;
      goto switchD_0043e5bf_caseD_3;
    case 2:
      fVar1 = param_1 - _DAT_004ac9c8;
      break;
    default:
      goto switchD_0043e5bf_caseD_3;
    case 0xffff:
    case 4:
      fVar1 = param_1 - _DAT_004ac9cc;
    }
    *pfVar2 = fVar1;
switchD_0043e5bf_caseD_3:
    pfVar2 = pfVar2 + 8;
    if (0x4c4517 < (int)pfVar2) {
      return;
    }
  } while( true );
}

