#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e580(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 != 0.0) {
    puVar5 = &DAT_004c7bc0;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0xbf800000;
      puVar5 = puVar5 + 1;
    }
    return;
  }
  puVar5 = &DAT_00e25e00;
  pfVar4 = (float *)&DAT_004c7bc0;
  do {
    if (_DAT_004ade50 < *pfVar4) {
      bVar7 = _DAT_004adf18 < *pfVar4;
      fVar1 = *pfVar4;
      fVar2 = (float)_DAT_00e22a40;
      *pfVar4 = fVar1 - fVar2;
      if ((bVar7) && (fVar1 - fVar2 <= _DAT_004adf18)) {
        uVar6 = 0x43;
        iVar3 = FUN_004816b0();
        fVar1 = (float)iVar3 * _DAT_004ade88 * _DAT_004adf1c - _DAT_004adf20;
        iVar3 = FUN_004816b0();
        param_2 = (float)iVar3 * _DAT_004ade88 * _DAT_004adf24 - _DAT_004adf28;
        if (param_1 == 6) {
          uVar6 = 0x6e;
          iVar3 = FUN_004816b0();
          param_2 = (float)iVar3 * _DAT_004ade88 * _DAT_004adf24 - _DAT_004adf2c;
        }
        FUN_00426c80(uVar6,7,fVar1,param_2,0);
      }
      if (*pfVar4 <= _DAT_004ade50) {
        iVar3 = FUN_004816b0();
        fVar1 = (float)iVar3 * _DAT_004ade88 * _DAT_004adf30 - _DAT_004adf34;
        iVar3 = FUN_004816b0();
        FUN_00426d10(0x43,6,fVar1,(float)iVar3 * _DAT_004ade88 * _DAT_004adf24 - _DAT_004adf2c,
                     puVar5,0,0,0x447a0000,0x44fa0000);
        local_c = *puVar5;
        local_8 = puVar5[1];
        local_4 = puVar5[2];
        FUN_0046a5f0(2,0,0x40a00000,&local_c,0x40a00000);
      }
    }
    pfVar4 = pfVar4 + 1;
    puVar5 = puVar5 + 3;
  } while ((int)pfVar4 < 0x4c7be0);
  return;
}

