#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004493f0(float *param_1,undefined4 param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = _DAT_004acb68;
  fVar4 = _DAT_004acb28;
  fVar3 = _DAT_004acb00;
  fVar1 = _DAT_004acae0;
  fVar2 = _DAT_004acaa8;
  switch(param_2) {
  case 0:
    if (param_3 == 1) {
      fVar1 = param_4 * _DAT_004acac4 + *param_1;
      *param_1 = fVar1;
      if (fVar2 < fVar1) {
        *param_1 = 1.0;
      }
      if (*param_1 < _DAT_004acac8) {
        *param_1 = 0.01;
      }
    }
    fVar2 = _DAT_004acaa8;
    if (param_3 == 2) {
      fVar1 = param_4 * _DAT_004acacc + *param_1;
      *param_1 = fVar1;
      if (fVar2 < fVar1) {
        *param_1 = 1.0;
      }
      if (*param_1 < _DAT_004acac8) {
        *param_1 = 0.01;
      }
    }
    fVar2 = _DAT_004acaa8;
    if (param_3 == 3) {
      fVar1 = param_4 * _DAT_004acad0 + *param_1;
      *param_1 = fVar1;
      if (fVar2 < fVar1) {
        *param_1 = 1.0;
      }
      if (*param_1 < _DAT_004acac8) {
        *param_1 = 0.01;
      }
    }
    fVar2 = _DAT_004acaa8;
    if (param_3 == 4) {
      fVar1 = param_4 * _DAT_004acad4 + *param_1;
      *param_1 = fVar1;
      if (fVar2 < fVar1) {
        *param_1 = 1.0;
      }
      if (*param_1 < _DAT_004acac8) {
        *param_1 = 0.01;
      }
    }
    fVar2 = _DAT_004acaa8;
    if (param_3 == 5) {
      fVar1 = param_4 * _DAT_004acad8 + *param_1;
      *param_1 = fVar1;
      if (fVar2 < fVar1) {
        *param_1 = 1.0;
      }
      if (*param_1 < _DAT_004acac8) {
        *param_1 = 0.01;
        return;
      }
    }
    break;
  case 1:
    if (param_3 == 1) {
      fVar2 = param_4 * _DAT_004acadc + param_1[1];
      param_1[1] = fVar2;
      if (fVar1 < fVar2) {
        param_1[1] = 1000.0;
      }
      if (param_1[1] < _DAT_004acae4) {
        param_1[1] = 50.0;
      }
    }
    fVar2 = _DAT_004acae0;
    if (param_3 == 2) {
      fVar1 = param_4 * _DAT_004acae8 + param_1[1];
      param_1[1] = fVar1;
      if (fVar2 < fVar1) {
        param_1[1] = 1000.0;
      }
      if (param_1[1] < _DAT_004acae4) {
        param_1[1] = 50.0;
      }
    }
    fVar2 = _DAT_004acae0;
    if (param_3 == 3) {
      fVar1 = param_4 * _DAT_004acaec + param_1[1];
      param_1[1] = fVar1;
      if (fVar2 < fVar1) {
        param_1[1] = 1000.0;
      }
      if (param_1[1] < _DAT_004acae4) {
        param_1[1] = 50.0;
      }
    }
    fVar2 = _DAT_004acae0;
    if (param_3 == 4) {
      fVar1 = param_4 * _DAT_004acaf0 + param_1[1];
      param_1[1] = fVar1;
      if (fVar2 < fVar1) {
        param_1[1] = 1000.0;
      }
      if (param_1[1] < _DAT_004acae4) {
        param_1[1] = 50.0;
      }
    }
    fVar2 = _DAT_004acae0;
    if (param_3 == 5) {
      fVar1 = param_4 * _DAT_004acaf4 + param_1[1];
      param_1[1] = fVar1;
      if (fVar2 < fVar1) {
        param_1[1] = 1000.0;
      }
      if (param_1[1] < _DAT_004acae4) {
        param_1[1] = 50.0;
        return;
      }
    }
    break;
  case 2:
    if (param_3 == 1) {
      fVar2 = ((_DAT_004acaa8 - param_4) * _DAT_004acaf8 - _DAT_004acafc) * param_1[3];
      param_1[3] = fVar2;
      if (fVar3 < fVar2) {
        param_1[3] = 5.0;
      }
      if (param_1[3] < _DAT_004acacc) {
        param_1[3] = 0.1;
      }
    }
    fVar2 = _DAT_004acb00;
    if (param_3 == 2) {
      fVar1 = ((_DAT_004acaa8 - param_4) * _DAT_004acb04 - _DAT_004acb08) * param_1[3];
      param_1[3] = fVar1;
      if (fVar2 < fVar1) {
        param_1[3] = 5.0;
      }
      if (param_1[3] < _DAT_004acacc) {
        param_1[3] = 0.1;
      }
    }
    fVar2 = _DAT_004acb00;
    if (param_3 == 3) {
      fVar1 = ((_DAT_004acaa8 - param_4) * _DAT_004acb0c - _DAT_004acb10) * param_1[3];
      param_1[3] = fVar1;
      if (fVar2 < fVar1) {
        param_1[3] = 5.0;
      }
      if (param_1[3] < _DAT_004acacc) {
        param_1[3] = 0.1;
      }
    }
    fVar2 = _DAT_004acb00;
    if (param_3 == 4) {
      fVar1 = ((_DAT_004acaa8 - param_4) * _DAT_004acb14 - _DAT_004acb18) * param_1[3];
      param_1[3] = fVar1;
      if (fVar2 < fVar1) {
        param_1[3] = 5.0;
      }
      if (param_1[3] < _DAT_004acacc) {
        param_1[3] = 0.1;
      }
    }
    fVar2 = _DAT_004acb00;
    if (param_3 == 5) {
      fVar1 = ((_DAT_004acaa8 - param_4) * _DAT_004acb1c - _DAT_004acb20) * param_1[3];
      param_1[3] = fVar1;
      if (fVar2 < fVar1) {
        param_1[3] = 5.0;
      }
      if (param_1[3] < _DAT_004acacc) {
        param_1[3] = 0.1;
        return;
      }
    }
    break;
  case 3:
    if (param_3 == 1) {
      fVar2 = param_4 * _DAT_004acb24 + param_1[4];
      param_1[4] = fVar2;
      if (fVar4 < fVar2) {
        param_1[4] = 650.0;
      }
      if (param_1[4] < _DAT_004acaac) {
        param_1[4] = 450.0;
      }
    }
    fVar2 = _DAT_004acb28;
    if (param_3 == 2) {
      fVar1 = param_4 * _DAT_004acb2c + param_1[4];
      param_1[4] = fVar1;
      if (fVar2 < fVar1) {
        param_1[4] = 650.0;
      }
      if (param_1[4] < _DAT_004acaac) {
        param_1[4] = 450.0;
      }
    }
    fVar2 = _DAT_004acb28;
    if (param_3 == 3) {
      fVar1 = param_4 * _DAT_004acb30 + param_1[4];
      param_1[4] = fVar1;
      if (fVar2 < fVar1) {
        param_1[4] = 650.0;
      }
      if (param_1[4] < _DAT_004acaac) {
        param_1[4] = 450.0;
      }
    }
    fVar2 = _DAT_004acb28;
    if (param_3 == 4) {
      fVar1 = param_4 * _DAT_004acb34 + param_1[4];
      param_1[4] = fVar1;
      if (fVar2 < fVar1) {
        param_1[4] = 650.0;
      }
      if (param_1[4] < _DAT_004acaac) {
        param_1[4] = 450.0;
      }
    }
    fVar2 = _DAT_004acb28;
    if (param_3 == 5) {
      fVar1 = param_4 * _DAT_004acb38 + param_1[4];
      param_1[4] = fVar1;
      if (fVar2 < fVar1) {
        param_1[4] = 650.0;
      }
      if (param_1[4] < _DAT_004acaac) {
        param_1[4] = 450.0;
        return;
      }
    }
    break;
  case 4:
    if (param_3 == 1) {
      fVar2 = ((_DAT_004acaa8 - param_4) * _DAT_004acb3c - _DAT_004acb40) * param_1[5];
      param_1[5] = fVar2;
      if (fVar1 < fVar2) {
        param_1[5] = 1000.0;
      }
      if (param_1[5] < _DAT_004acaa8) {
        param_1[5] = 1.0;
      }
    }
    fVar2 = _DAT_004acae0;
    if (param_3 == 2) {
      fVar1 = ((_DAT_004acaa8 - param_4) * _DAT_004acb44 - _DAT_004acb48) * param_1[5];
      param_1[5] = fVar1;
      if (fVar2 < fVar1) {
        param_1[5] = 1000.0;
      }
      if (param_1[5] < _DAT_004acaa8) {
        param_1[5] = 1.0;
      }
    }
    fVar2 = _DAT_004acae0;
    if (param_3 == 3) {
      fVar1 = ((_DAT_004acaa8 - param_4) * _DAT_004acb4c - _DAT_004acb50) * param_1[5];
      param_1[5] = fVar1;
      if (fVar2 < fVar1) {
        param_1[5] = 1000.0;
      }
      if (param_1[5] < _DAT_004acaa8) {
        param_1[5] = 1.0;
      }
    }
    fVar2 = _DAT_004acae0;
    if (param_3 == 4) {
      fVar1 = ((_DAT_004acaa8 - param_4) * _DAT_004acb54 - _DAT_004acb58) * param_1[5];
      param_1[5] = fVar1;
      if (fVar2 < fVar1) {
        param_1[5] = 1000.0;
      }
      if (param_1[5] < _DAT_004acaa8) {
        param_1[5] = 1.0;
      }
    }
    fVar2 = _DAT_004acae0;
    if (param_3 == 5) {
      fVar1 = ((_DAT_004acaa8 - param_4) * _DAT_004acb5c - _DAT_004acb60) * param_1[5];
      param_1[5] = fVar1;
      if (fVar2 < fVar1) {
        param_1[5] = 1000.0;
      }
      if (param_1[5] < _DAT_004acaa8) {
        param_1[5] = 1.0;
        return;
      }
    }
    break;
  case 5:
    if (param_3 == 1) {
      fVar2 = param_4 * _DAT_004acb64 + param_1[9];
      param_1[9] = fVar2;
      if (fVar5 < fVar2) {
        param_1[9] = 20.0;
      }
      if (param_1[9] < _DAT_004acaa8) {
        param_1[9] = 1.0;
      }
    }
    fVar2 = _DAT_004acb68;
    if (param_3 == 2) {
      fVar1 = param_4 * _DAT_004acb6c + param_1[9];
      param_1[9] = fVar1;
      if (fVar2 < fVar1) {
        param_1[9] = 20.0;
      }
      if (param_1[9] < _DAT_004acaa8) {
        param_1[9] = 1.0;
      }
    }
    fVar2 = _DAT_004acb68;
    if (param_3 == 3) {
      fVar1 = param_4 * _DAT_004acb70 + param_1[9];
      param_1[9] = fVar1;
      if (fVar2 < fVar1) {
        param_1[9] = 20.0;
      }
      if (param_1[9] < _DAT_004acaa8) {
        param_1[9] = 1.0;
      }
    }
    fVar2 = _DAT_004acb68;
    if (param_3 == 4) {
      fVar1 = param_4 * _DAT_004acb74 + param_1[9];
      param_1[9] = fVar1;
      if (fVar2 < fVar1) {
        param_1[9] = 20.0;
      }
      if (param_1[9] < _DAT_004acaa8) {
        param_1[9] = 1.0;
      }
    }
    fVar2 = _DAT_004acb68;
    if (param_3 == 5) {
      fVar1 = param_4 * _DAT_004acab8 + param_1[9];
      param_1[9] = fVar1;
      if (fVar2 < fVar1) {
        param_1[9] = 20.0;
      }
      if (param_1[9] < _DAT_004acaa8) {
        param_1[9] = 1.0;
        return;
      }
    }
    break;
  case 6:
    if (param_3 == 1) {
      fVar1 = param_4 * _DAT_004acacc + param_1[0xb];
      param_1[0xb] = fVar1;
      if (fVar2 < fVar1) {
        param_1[0xb] = 1.0;
      }
      if (param_1[0xb] < _DAT_004acb78) {
        param_1[0xb] = 0.0;
      }
    }
    fVar2 = _DAT_004acaa8;
    if (param_3 == 2) {
      fVar1 = param_4 * _DAT_004acad4 + param_1[0xb];
      param_1[0xb] = fVar1;
      if (fVar2 < fVar1) {
        param_1[0xb] = 1.0;
      }
      if (param_1[0xb] < _DAT_004acb78) {
        param_1[0xb] = 0.0;
      }
    }
    fVar2 = _DAT_004acaa8;
    if (param_3 == 3) {
      fVar1 = param_4 * _DAT_004acb7c + param_1[0xb];
      param_1[0xb] = fVar1;
      if (fVar2 < fVar1) {
        param_1[0xb] = 1.0;
      }
      if (param_1[0xb] < _DAT_004acb78) {
        param_1[0xb] = 0.0;
      }
    }
    fVar2 = _DAT_004acaa8;
    if (param_3 == 4) {
      fVar1 = param_4 * _DAT_004acb80 + param_1[0xb];
      param_1[0xb] = fVar1;
      if (fVar2 < fVar1) {
        param_1[0xb] = 1.0;
      }
      if (param_1[0xb] < _DAT_004acb78) {
        param_1[0xb] = 0.0;
      }
    }
    fVar2 = _DAT_004acaa8;
    if (param_3 == 5) {
      fVar1 = param_4 * _DAT_004acb84 + param_1[0xb];
      param_1[0xb] = fVar1;
      if (fVar2 < fVar1) {
        param_1[0xb] = 1.0;
      }
      if (param_1[0xb] < _DAT_004acb78) {
        param_1[0xb] = 0.0;
      }
    }
  }
  return;
}

