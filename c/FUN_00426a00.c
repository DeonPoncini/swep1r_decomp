#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426a00(int param_1,short param_2,float param_3,float param_4,short param_5,int param_6,
                 int param_7,undefined4 *param_8)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  float local_4;
  
  if (param_6 == 0) {
    local_4 = 1.0;
  }
  else {
    local_4 = _DAT_004ac478 - (float)(uint)DAT_0050b704._3_1_ * _DAT_004ac474;
  }
  iVar3 = FUN_004269c0(param_1);
  bVar2 = DAT_00e364a5;
  if (iVar3 != 0) {
    bVar2 = DAT_00e364a6;
  }
  fVar1 = (float)(uint)bVar2 * _DAT_004ac474;
  iVar4 = FUN_004269c0(param_1);
  iVar3 = DAT_00e22a30;
  sVar9 = 8;
  if (iVar4 == 0) {
    sVar9 = param_2;
  }
  local_4 = local_4 * fVar1 * param_4;
  if (local_4 != _DAT_004ac47c) {
    if (((DAT_00e364a8 & 1) == 0) && (param_5 != -999)) {
      param_5 = 0x40;
    }
    if (-1 < param_1) {
      if (param_6 != 0) {
        iVar4 = 0;
        piVar5 = &DAT_00e68064;
        do {
          if ((piVar5[1] != 0) && (*piVar5 == param_1)) {
            if ((local_4 * _DAT_004ac484 < (float)(&DAT_00e68078)[iVar4 * 0x11]) &&
               ((&DAT_00e6806c)[iVar4 * 0x11] == DAT_00e22a30)) {
              return;
            }
            (&DAT_00e68074)[iVar4 * 0x11] = param_3 + param_3;
            uVar6 = __ftol();
            (&DAT_00e68078)[iVar4 * 0x11] = uVar6;
            (&DAT_00e6807c)[iVar4 * 0x22] = param_5;
            (&DAT_00e68070)[iVar4 * 0x11] = (int)sVar9;
            (&DAT_00e6806c)[iVar4 * 0x11] = iVar3;
            (&DAT_00e6808c)[iVar4 * 0x11] = *param_8;
            (&DAT_00e68090)[iVar4 * 0x11] = param_8[1];
            (&DAT_00e68094)[iVar4 * 0x11] = param_8[2];
            goto LAB_00426bd4;
          }
          piVar5 = piVar5 + 0x11;
          iVar4 = iVar4 + 1;
        } while ((int)piVar5 < 0xe68284);
      }
      iVar4 = -1;
      iVar7 = 0;
      piVar5 = &DAT_00e68060;
      do {
        if ((*piVar5 == -1) && (iVar4 == -1)) {
          iVar4 = iVar7;
        }
        piVar5 = piVar5 + 0x11;
        iVar7 = iVar7 + 1;
      } while ((int)piVar5 < 0xe68280);
      if (iVar4 == -1) {
        iVar7 = (int)sVar9;
        iVar8 = 0;
        piVar5 = &DAT_00e68070;
        do {
          if (*piVar5 < iVar7) {
            iVar7 = *piVar5;
            iVar4 = iVar8;
          }
          piVar5 = piVar5 + 0x11;
          iVar8 = iVar8 + 1;
        } while ((int)piVar5 < 0xe68290);
        if (iVar4 == -1) {
          return;
        }
      }
      (&DAT_00e68064)[iVar4 * 0x11] = param_1;
      (&DAT_00e68060)[iVar4 * 0x11] = 0xfffffffe;
      (&DAT_00e68068)[iVar4 * 0x11] = param_6;
      (&DAT_00e6806c)[iVar4 * 0x11] = iVar3;
      (&DAT_00e68070)[iVar4 * 0x11] = (int)sVar9;
      (&DAT_00e68074)[iVar4 * 0x11] = param_3 + param_3;
      uVar6 = __ftol();
      (&DAT_00e68078)[iVar4 * 0x11] = uVar6;
      (&DAT_00e6807c)[iVar4 * 0x22] = param_5;
      (&DAT_00e6808c)[iVar4 * 0x11] = *param_8;
      (&DAT_00e68090)[iVar4 * 0x11] = param_8[1];
      (&DAT_00e68094)[iVar4 * 0x11] = param_8[2];
      (&DAT_00e68098)[iVar4 * 0x11] = -(uint)(param_7 != 0) & (uint)param_8;
LAB_00426bd4:
      uVar6 = DAT_004b8550;
      (&DAT_00e6809c)[iVar4 * 0x11] = DAT_004b8554;
      (&DAT_00e680a0)[iVar4 * 0x11] = uVar6;
      return;
    }
  }
  return;
}

