#include "prototype.h"


void FUN_0042d680(undefined *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = param_1;
  switch(param_1) {
  case (undefined *)0x0:
    puVar3 = PTR_s_data_lev01_out_modelblock_bin_004b9598;
    break;
  case (undefined *)0x1:
    puVar3 = PTR_s_data_lev01_out_spriteblock_bin_004b958c;
    break;
  case (undefined *)0x2:
    puVar3 = PTR_s_data_lev01_out_splineblock_bin_004b9590;
    break;
  case (undefined *)0x3:
    puVar3 = PTR_s_data_lev01_out_textureblock_bin_004b9594;
  }
  piVar1 = (int *)FUN_0042d600(param_1);
  if (*piVar1 == 0) {
    iVar2 = FUN_0049f1e0(puVar3,&DAT_004b5c4c);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  return;
}

