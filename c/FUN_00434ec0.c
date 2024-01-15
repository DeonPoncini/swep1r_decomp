#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434ec0(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    DAT_004c00a4 = DAT_004c00a4 + '\x01';
    if (DAT_004c00a4 == '\x02') {
      FUN_00426c80(0x74,6,0x3e800000,0x3f000000,0);
      _DAT_004c00a8 = 2.5;
    }
    _DAT_004c00ac = 255.0;
  }
  *(undefined4 *)(param_1 + 0x68) = 0x15;
  DAT_004bfedc = 0xe;
  if (DAT_004c00a4 == '\0') {
    if (0 < DAT_004c00b0) {
      DAT_004c00b0 = DAT_004c00b0 + -1;
      goto LAB_004351ca;
    }
    uVar1 = FUN_00421360(s__SCREENTEXT_476__f4_sStar_Wars___004c08a4);
    FUN_00450560(0x1e,0x1e,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_477__f4_s_LucasArts_E_004c0868);
    FUN_00450560(0x1e,0x32,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_478__f4_s_Lucasfilm_L_004c0824);
    FUN_00450560(0x1e,0x3c,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_479__f4_sUsed_under_a_004c07f4);
    FUN_00450560(0x1e,0x46,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_600__f4_sThe_LucasAr_004c07bc);
    FUN_00450560(0x1e,0x5a,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_601__f4_strademark_o_004c0788);
    FUN_00450560(0x1e,100,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_481__f4_sused_under_a_004c0758);
    FUN_00450560(0x1e,0x6e,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_602__f4_sLicensed_to_004c072c);
    FUN_00450560(0x1e,0x82,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_482__sExpansion_Pak_e_004c0700);
    FUN_00450560(0x1e,0xb4,uVar1);
    FUN_00428660(0x52,0xb4,100);
    FUN_004286f0(0x52,0x3f800000,0x3f800000);
    uVar1 = 0x52;
  }
  else {
    if (DAT_004c00a4 != '\x01') {
      if (DAT_004c00a4 == '\x02') {
        if ((((DAT_0050c944 != 1) || (DAT_0050c484 != '\0')) &&
            (_DAT_004c00ac = _DAT_004c00ac - _DAT_00e22a50 * _DAT_004ac790,
            _DAT_004c00ac < _DAT_004ac778)) && (_DAT_004c00ac = 0.0, DAT_0050c484 != '\0')) {
          FUN_00428740(0xffffff99,0,0,0,0xffffffff);
          FUN_00454d40(param_1,DAT_004bfedc);
          return;
        }
        FUN_00428660(0x56,0x34,0);
        FUN_004286f0(0x56,0x3f800000,0x3f800000);
        if (DAT_0050c484 == '\0') {
          FUN_004285d0(0x56,1);
        }
        uVar1 = __ftol();
        FUN_00428740(0x56,0xffffffff,0xffffffff,0xffffffff,uVar1);
        if (DAT_0050c944 != 1) {
          FUN_00428660(0x55,0x52,0xf);
          FUN_004286f0(0x55,0x3f800000,0x3f800000);
          FUN_004285d0(0x55,1);
          if (DAT_0050c484 == '\0') {
            uVar1 = 0xffffffff;
          }
          else {
            uVar1 = __ftol();
          }
          FUN_00428740(0x55,0xffffffff,0xffffffff,0xffffffff,uVar1);
        }
      }
      goto LAB_004351ca;
    }
    FUN_00428660(0x50,0x57,0x2e);
    FUN_004286f0(0x50,0x3f800000,0x3f800000);
    uVar1 = 0x50;
  }
  FUN_004285d0(uVar1,1);
LAB_004351ca:
  if ((DAT_0050c944 == 0) && (_DAT_004ac778 < _DAT_004c00a8)) {
    _DAT_004c00a8 = _DAT_004c00a8 - _DAT_00e22a50;
  }
  if (_DAT_004c00a8 <= _DAT_004ac778) {
    _DAT_004c00a8 = 1.3;
    if (DAT_004c00a4 < '\x02') {
      DAT_0050c944 = 0xffffffff;
      return;
    }
    DAT_0050c484 = '\x01';
    _DAT_004c00ac = 255.0;
  }
  return;
}

