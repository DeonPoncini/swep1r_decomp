#include "prototype.h"


undefined4 FUN_00422060(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  
  FUN_00422770(0x57);
  if (PTR_s_ex_lrg1_wav_004b6d38 != (undefined *)0x0) {
    ppuVar3 = &PTR_s_ex_lrg1_wav_004b6d38;
    do {
      iVar2 = FUN_004227e0(*ppuVar3,1);
      if (iVar2 == 0) {
        FUN_004227e0(s_sfx_crash_wood_wav_004b286c,1);
      }
      ppuVar1 = ppuVar3 + 2;
      ppuVar3 = ppuVar3 + 2;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  return 0;
}

