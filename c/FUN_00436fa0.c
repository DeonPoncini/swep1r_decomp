#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00436fa0(int param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  bVar2 = false;
  iVar4 = DAT_0050c928 + 0x82;
  DAT_0050c928 = DAT_0050c928 + 1;
  _DAT_0050c224 = 0x43250000;
  _DAT_0050c43c = 0x428c0000;
  if (DAT_00e364a6 == 0) {
    uVar3 = FUN_00421360(s__SCREENTEXT_91__sOFF_004c0ba8);
    uVar3 = __ftol(0xf,DAT_0050c528,0,uVar3);
    FUN_0043fce0(param_1,0xa5,uVar3);
  }
  else {
    FUN_004285d0(iVar4,1);
    uVar3 = __ftol();
    uVar3 = __ftol(uVar3);
    FUN_00428660(iVar4,uVar3);
    FUN_004286f0(iVar4,_DAT_004ac824 - (float)(uint)DAT_00e364a6 * _DAT_004ac820,0x3f800000);
    FUN_00428740(iVar4,0x32,0xffffffff,0xffffffff,0xffffffff);
    uVar3 = __ftol();
    uVar3 = __ftol(uVar3);
    uVar3 = __ftol(uVar3);
    uVar3 = __ftol(uVar3);
    FUN_00484020(uVar3);
  }
  uVar3 = FUN_00421360(s__SCREENTEXT_81__r_sMusic__004c0b8c);
  uVar3 = __ftol(0xf,DAT_0050c528,0,uVar3);
  FUN_0043fce0(param_1,0x9b,uVar3);
  iVar4 = DAT_0050c928 + 0x82;
  DAT_0050c928 = DAT_0050c928 + 1;
  if (DAT_00e364a5 == 0) {
    uVar3 = FUN_00421360(s__SCREENTEXT_91__sOFF_004c0ba8);
    uVar3 = __ftol(0xf,DAT_0050c528,1,uVar3);
    FUN_0043fce0(param_1,0xa5,uVar3);
  }
  else {
    FUN_004285d0(iVar4,1);
    uVar3 = __ftol();
    uVar3 = __ftol(uVar3);
    FUN_00428660(iVar4,uVar3);
    FUN_004286f0(iVar4,_DAT_004ac824 - (float)(uint)DAT_00e364a5 * _DAT_004ac820,0x3f800000);
    FUN_00428740(iVar4,0x32,0xffffffff,0xffffffff,0xffffffff);
    uVar3 = __ftol();
    uVar3 = __ftol(uVar3);
    uVar3 = __ftol(uVar3);
    uVar3 = __ftol(uVar3);
    FUN_00484020(uVar3);
  }
  uVar3 = FUN_00421360(s__SCREENTEXT_82__r_sSound__004c0b70);
  uVar3 = __ftol(0xf,DAT_0050c528,1,uVar3);
  FUN_0043fce0(param_1,0x9b,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_83__r_sAudio__004c0b54);
  uVar3 = __ftol(0xf,DAT_0050c528,2,uVar3);
  FUN_0043fce0(param_1,0x9b,uVar3);
  if ((_DAT_00e364a8 & 1) == 0) {
    uVar3 = FUN_00421360(s__SCREENTEXT_85__sMONO_004c0b24);
  }
  else {
    uVar3 = FUN_00421360(s__SCREENTEXT_84__sSTEREO_004c0b3c);
  }
  uVar3 = __ftol(0xf,DAT_0050c528,2,uVar3);
  FUN_0043fce0(param_1,0xa5,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_89__r_sLens_flares__004c0b04);
  uVar3 = __ftol(0xf,DAT_0050c528,3,uVar3);
  FUN_0043fce0(param_1,0x9b,uVar3);
  if ((_DAT_00e364a8 & 2) == 0) {
    uVar3 = FUN_00421360(s__SCREENTEXT_91__sOFF_004c0ba8);
  }
  else {
    uVar3 = FUN_00421360(s__SCREENTEXT_90__sON_004c0af0);
  }
  uVar3 = __ftol(0xf,DAT_0050c528,3,uVar3);
  FUN_0043fce0(param_1,0xa5,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_467__r_sResolution__004c0ad0);
  uVar3 = __ftol(0xf,DAT_0050c528,4,uVar3);
  FUN_0043fce0(param_1,0x9b,uVar3);
  if ((_DAT_00e364a8 & 0x10) == 0) {
    uVar3 = FUN_00421360(s__SCREENTEXT_469__sLo_res_004c0a98);
  }
  else {
    uVar3 = FUN_00421360(s__SCREENTEXT_468__sHi_res_004c0ab4);
  }
  uVar3 = __ftol(0xf,DAT_0050c528,4,uVar3);
  FUN_0043fce0(param_1,0xa5,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_92__c_sExit_004c0a80);
  uVar3 = __ftol(0xf,DAT_0050c528,5,uVar3);
  FUN_0043fce0(param_1,0xa0,uVar3);
  iVar5 = 0;
  iVar4 = DAT_0050c528;
  if ('\0' < *(char *)(param_1 + 0x70)) {
    while( true ) {
      if (DAT_004d6b48 != 0) {
        FUN_00440550(0x4d);
        bVar2 = true;
        iVar4 = DAT_0050c528;
      }
      if (DAT_004d6b44 != 0) {
        FUN_00440550(0x4d);
        bVar2 = true;
        iVar4 = DAT_0050c528;
      }
      if (bVar2) break;
      if (((&DAT_0050c918)[iVar5] & 0x8000) != 0) {
        DAT_0050c528 = iVar4 + 1;
        if (DAT_004c0208 < DAT_0050c528) {
          DAT_0050c528 = 0;
        }
        FUN_00440550(0x58);
        iVar4 = DAT_0050c528;
      }
      if (((&DAT_0050c918)[iVar5] & 0x4000) != 0) {
        DAT_0050c528 = iVar4 + -1;
        if (DAT_0050c528 < 0) {
          DAT_0050c528 = DAT_004c0208;
        }
        FUN_00440550(0x58);
        iVar4 = DAT_0050c528;
      }
      if (((&DAT_0050c918)[iVar5] & 0x30000) != 0) {
        if (iVar4 == 2) {
          _DAT_00e364a8 = _DAT_00e364a8 ^ 1;
        }
        if (iVar4 == 3) {
          _DAT_00e364a8 = _DAT_00e364a8 ^ 2;
        }
        if (iVar4 == 4) {
          _DAT_00e364a8 = _DAT_00e364a8 ^ 0x10;
        }
        if ((1 < iVar4) && (iVar4 != 5)) {
          FUN_00440550(0x58);
          iVar4 = DAT_0050c528;
        }
      }
      if (iVar4 == 0) {
        uVar1 = (&DAT_0050c908)[iVar5];
        if (((uVar1 & 0x20000) != 0) && (DAT_00e364a6 != 0xff)) {
          if ((float)(uint)DAT_00e364a6 + _DAT_00e22a50 * (float)_DAT_004ac838 <=
              (float)_DAT_004ac838) {
            DAT_00e364a6 = __ftol();
          }
          else {
            DAT_00e364a6 = 0xff;
          }
        }
        if (((uVar1 & 0x10000) != 0) && (DAT_00e364a6 != 0)) {
          if ((float)_DAT_004ac840 <=
              (float)(uint)DAT_00e364a6 - _DAT_00e22a50 * (float)_DAT_004ac838) {
            DAT_00e364a6 = __ftol();
          }
          else {
            DAT_00e364a6 = 0;
          }
        }
        uVar6 = 0x3e800000;
        uVar3 = 0x9b;
LAB_00437679:
        FUN_00426c80(uVar3,6,uVar6,0x3f800000,1);
        iVar4 = DAT_0050c528;
      }
      else if (iVar4 == 1) {
        uVar1 = (&DAT_0050c908)[iVar5];
        if (((uVar1 & 0x20000) != 0) && (DAT_00e364a5 != 0xff)) {
          if ((float)(uint)DAT_00e364a5 + _DAT_00e22a50 * (float)_DAT_004ac838 <=
              (float)_DAT_004ac838) {
            DAT_00e364a5 = __ftol();
          }
          else {
            DAT_00e364a5 = 0xff;
          }
        }
        if (((uVar1 & 0x10000) != 0) && (DAT_00e364a5 != 0)) {
          if ((float)_DAT_004ac840 <=
              (float)(uint)DAT_00e364a5 - _DAT_00e22a50 * (float)_DAT_004ac838) {
            DAT_00e364a5 = __ftol();
          }
          else {
            DAT_00e364a5 = 0;
          }
        }
        uVar6 = 0x3e000000;
        uVar3 = 0x4f;
        goto LAB_00437679;
      }
      iVar5 = iVar5 + 1;
      if (*(char *)(param_1 + 0x70) <= iVar5) {
        return;
      }
    }
    FUN_0044e560();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

