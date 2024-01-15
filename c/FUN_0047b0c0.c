#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047b0c0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_108;
  float local_104;
  float local_fc;
  float local_f8;
  int local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a4;
  float local_a0;
  undefined local_98 [12];
  float local_8c;
  undefined local_80 [12];
  float local_74;
  float local_70;
  undefined local_68 [12];
  undefined local_5c [12];
  int local_50 [4];
  undefined local_40 [16];
  undefined local_30 [48];
  
  if (((*(uint *)(param_1 + 0x60) & 0x6000) == 0) && ((*(uint *)(param_1 + 100) & 0x2000000) == 0))
  {
    iVar5 = FUN_00450e70(0x54657374,param_1 + 0x50,0x451c4000,param_1,4,local_40,local_30,local_50);
    *(undefined4 *)(param_1 + 0x150) = 0;
    if ((0 < iVar5) &&
       (((*(uint *)(local_50[0] + 0x60) & 0x6000) == 0 &&
        ((*(uint *)(local_50[0] + 100) & 0x2000000) == 0)))) {
      pfVar1 = (float *)(local_50[0] + 0x2cc);
      local_f0 = local_50[0] + 0x16c;
      pfVar2 = (float *)(param_1 + 0x2cc);
      fVar6 = (float10)FUN_0047aee0(param_1 + 0x16c,pfVar2,local_f0,pfVar1,&local_b0,&local_bc,
                                    local_80,local_98);
      fVar3 = (float)fVar6;
      if (((float10)_DAT_004adc48 <= fVar6) &&
         ((local_8c = local_b0 - local_bc,
          (local_ac - local_b8) * (local_ac - local_b8) + local_8c * local_8c < _DAT_004add5c &&
          (_DAT_004adc44 <= fVar3)))) {
        FUN_0042f700(&local_ec,0x3f000000,&local_b0);
        FUN_0042f720(&local_ec,&local_ec,0x3f000000,&local_bc);
        FUN_0042f700(&local_fc,*(undefined4 *)(param_1 + 0x9c),local_80);
        FUN_0042f720(&local_fc,&local_fc,*(undefined4 *)(local_50[0] + 0x9c),local_98);
        FUN_0042f700(&local_fc,
                     (_DAT_004adc50 - fVar3) /
                     (*(float *)(local_50[0] + 0x9c) + *(float *)(param_1 + 0x9c)),&local_fc);
        local_c8 = local_fc + local_ec;
        local_c4 = local_f8 + local_e8;
        fVar3 = fVar3 - _DAT_004adc7c;
        FUN_0042f720(&local_a4,param_1 + 0x16c,fVar3,local_80);
        FUN_0042f720(&local_74,local_f0,fVar3,local_98);
        local_108 = local_a4 - local_74;
        local_104 = local_a0 - local_70;
        FUN_0042f780(&local_108);
        FUN_0042f700(local_68,0x40a00000,&local_108);
        FUN_0042f700(local_5c,0xc0a00000,&local_108);
        FUN_0042f6e0(pfVar2,&local_c8,local_68);
        FUN_0042f6e0(pfVar1,&local_c8,local_5c);
        local_d4 = *pfVar1 - *(float *)(local_50[0] + 0x50);
        local_d0 = *(float *)(local_50[0] + 0x2d0) - *(float *)(local_50[0] + 0x54);
        local_e0 = *pfVar2 - *(float *)(param_1 + 0x50);
        *(float *)(param_1 + 0x50) = *pfVar2;
        local_dc = *(float *)(param_1 + 0x2d0) - *(float *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x2d0);
        *(float *)(local_50[0] + 0x50) = *pfVar1;
        *(undefined4 *)(local_50[0] + 0x54) = *(undefined4 *)(local_50[0] + 0x2d0);
        if (*(float *)(param_1 + 0x1a0) <= *(float *)(local_50[0] + 0x1a0)) {
          uVar4 = *(undefined4 *)(local_50[0] + 0x1a0);
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0x1a0);
        }
        fVar7 = (float10)FUN_0042f750(&local_e0);
        fVar6 = (float10)_DAT_00e22a40;
        *(undefined4 *)(param_1 + 0x14c) = 0;
        *(float *)(param_1 + 0x150) = (float)(fVar7 / fVar6);
        *(float *)(param_1 + 0x144) = -local_108;
        *(float *)(param_1 + 0x148) = -local_104;
        FUN_00479d40(param_1);
        FUN_0047b000(param_1,uVar4,*(undefined4 *)(param_1 + 0x150));
        fVar6 = (float10)FUN_0042f750(&local_d4);
        *(float *)(local_50[0] + 0x150) = (float)(fVar6 / (float10)_DAT_00e22a40);
        *(float *)(local_50[0] + 0x144) = local_108;
        *(undefined4 *)(local_50[0] + 0x14c) = 0;
        *(float *)(local_50[0] + 0x148) = local_104;
        FUN_00479d40(local_50[0]);
        FUN_0047b000(local_50[0],uVar4,*(undefined4 *)(local_50[0] + 0x150));
        local_dc = local_dc * _DAT_004add48;
        local_d4 = local_d4 * _DAT_004add48;
        *(float *)(param_1 + 0x1dc) = *(float *)(param_1 + 0x1dc) - local_e0 * _DAT_004add48;
        *(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x1e0) - local_dc;
        *(float *)(local_50[0] + 0x1dc) = *(float *)(local_50[0] + 0x1dc) - local_d4;
        *(float *)(local_50[0] + 0x1e0) = *(float *)(local_50[0] + 0x1e0) - local_d0 * _DAT_004add48
        ;
      }
    }
  }
  return;
}

