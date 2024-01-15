#include "prototype.h"


undefined4 __fastcall FUN_00421f30(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  iVar2 = FUN_00487ae0();
  if ((iVar2 == 0) || (iVar2 = FUN_0049ec50(DAT_00ec8e84,s_NUMSOUNDS_004b742c), iVar2 != 0)) {
    if (*(int *)(PTR_DAT_004b6d34 + 0x28) != 0) {
      FUN_004226c0();
    }
    return 1;
  }
  DAT_00e9f360 = FUN_0049f0e0(DAT_00ec8e88);
  if (DAT_00e9f360 != 0) {
    FUN_00422770(DAT_00e9f360);
    iVar2 = FUN_00487ae0();
    while (iVar2 != 0) {
      pbVar4 = &DAT_004b3e7c;
      pbVar3 = DAT_00ec8e84;
      do {
        bVar1 = *pbVar3;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00421fdd:
          iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_00421fe2;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00421fdd;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_00421fe2:
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_0049ec50(DAT_00ec8e84,s_NUMVOICES_004b7420);
      if (iVar2 == 0) {
        iVar2 = FUN_0049f0e0(DAT_00ec8e88);
        DAT_00e9f360 = DAT_00e9f360 - iVar2;
      }
      else {
        if (DAT_004eb450 != 0) {
          param_1 = FUN_004227e0(DAT_00ec8e84,1);
        }
        if (param_1 == 0) {
          param_1 = FUN_004227e0(s_sfx_crash_wood_wav_004b286c,1);
        }
      }
      iVar2 = FUN_00487ae0();
    }
  }
  return 0;
}

