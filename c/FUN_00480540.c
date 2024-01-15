#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480540(void)

{
  double dVar1;
  DWORD DVar2;
  
  dVar1 = (double)CONCAT44(_DAT_00e22a4c,_DAT_00e22a48);
  if (DAT_0050cb68 == 0) {
    DVar2 = timeGetTime();
    dVar1 = (double)(ulonglong)(DVar2 - DAT_0050cb60) * _DAT_004adf80;
    DAT_0050cb60 = DVar2;
    _DAT_00e22a40 = dVar1;
    if (_DAT_004adf88 < dVar1) {
      _DAT_00e22a40 = 0.1000000014901161;
    }
  }
  else {
    _DAT_00e22a40 = (double)CONCAT44(DAT_0050cb74,DAT_0050cb70);
  }
  _DAT_00e22a4c = (undefined4)((ulonglong)dVar1 >> 0x20);
  _DAT_00e22a48 = SUB84(dVar1,0);
  if (DAT_0050cb64 != 0) {
    _DAT_00e22a40 = 0.0;
  }
  if (_DAT_00e22a40 <= _DAT_004adf70) {
    _DAT_00e22a40 = 0.002000000094994903;
  }
  _DAT_00e22a50 = (float)_DAT_00e22a40;
  _DAT_00e22a38 = _DAT_00e22a38 + _DAT_00e22a40;
  DAT_00e22a30 = DAT_00e22a30 + 1;
  return;
}

