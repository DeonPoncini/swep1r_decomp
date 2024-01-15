#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00424430(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = FUN_004a02f0(param_1,&DAT_004b7c68);
  if (iVar1 == 0) {
    return 0;
  }
  do {
    iVar2 = FUN_0049ec50(iVar1,&DAT_004b7c64);
    if (iVar2 == 0) {
      iVar1 = FUN_004a02f0(0,&DAT_004b7c68);
      DAT_004b6d20 = 0;
    }
    else {
      iVar2 = FUN_0049ec50(iVar1,&DAT_004b7c60);
      if (iVar2 == 0) {
        iVar1 = FUN_004a02f0(0,&DAT_004b7c68);
        DAT_004b6d2c = 0;
      }
      else {
        iVar2 = FUN_0049ec50(iVar1,&DAT_004b7c5c);
        if (iVar2 == 0) {
          iVar1 = FUN_004a02f0(0,&DAT_004b7c68);
          if (iVar1 == 0) {
            return 1;
          }
          fVar3 = (float10)FUN_0049ef90(iVar1);
          DAT_004c7d78 = (float)fVar3;
          if (fVar3 < (float10)_DAT_004ac444) {
            DAT_004c7d78 = 0.0;
          }
        }
        else {
          iVar2 = FUN_0049ec50(iVar1,&DAT_004b7c58);
          if (iVar2 == 0) {
            iVar1 = FUN_004a02f0(0,&DAT_004b7c68);
            if (iVar1 == 0) {
              return 1;
            }
            fVar3 = (float10)FUN_0049ef90(iVar1);
            DAT_004c7d74 = (float)fVar3;
            if (fVar3 < (float10)_DAT_004ac444) {
              DAT_004c7d74 = 0.0;
            }
          }
          else {
            iVar2 = FUN_0049ec50(iVar1,&DAT_004b7c50);
            if (iVar2 != 0) {
              iVar2 = FUN_0049ec50(iVar1,s__force_004b7c48);
              if (iVar2 == 0) {
                iVar1 = FUN_004a02f0(0,&DAT_004b7c68);
                DAT_004b4938 = 0;
              }
              else {
                iVar2 = FUN_0049ec50(iVar1,s__3DImpacts_004b7c3c);
                if (iVar2 == 0) {
                  iVar1 = FUN_004a02f0(0,&DAT_004b7c68);
                  DAT_004c7aa8 = 0;
                }
                else {
                  iVar2 = FUN_0049ec50(iVar1,&DAT_004b7c38);
                  if (iVar2 == 0) {
                    iVar1 = FUN_004a02f0(0,&DAT_004b7c68);
                    DAT_0050b5b0 = 1;
                  }
                  else {
                    iVar2 = FUN_0049ec50(iVar1,&DAT_004b7c34);
                    if (iVar2 == 0) {
                      iVar1 = FUN_004a02f0(0,&DAT_004b7c68);
                      DAT_004b7a00 = 0;
                    }
                    else {
                      iVar2 = FUN_0049ec50(iVar1,&DAT_004b7c30);
                      if (iVar2 == 0) {
                        iVar1 = FUN_004a02f0(0,&DAT_004b7c68);
                        DAT_004b79f8 = 0;
                      }
                      else {
                        iVar1 = FUN_0049ec50(iVar1,s__snafu_004b7c28);
                        if (iVar1 != 0) goto LAB_004244fa;
                        iVar1 = FUN_004a02f0(0,&DAT_004b7c68);
                        DAT_0050b5c0 = 1;
                      }
                    }
                  }
                }
              }
              goto LAB_0042450a;
            }
            iVar1 = FUN_004a02f0(0,&DAT_004b7c68);
            if (iVar1 == 0) {
              return 1;
            }
            DAT_004b6718 = FUN_0049f0e0(iVar1);
          }
        }
LAB_004244fa:
        iVar1 = FUN_004a02f0(0,&DAT_004b7c68);
      }
    }
LAB_0042450a:
    if (iVar1 == 0) {
      return 1;
    }
  } while( true );
}

