#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0

bool FUN_00421b90(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int local_104;
  undefined local_100 [256];

  local_104 = 0;
  iVar4 = 0;
  FUN_0049eb80(local_100,&DAT_004b2524,s___data_player__004b4f6c,s_tgfd_dat_004b6d00);
  iVar2 = FUN_0049f1e0(local_100,&DAT_004b5c4c);
  if (iVar2 == 0) {
    iVar4 = 1;
    goto LAB_00421c24;
  }
  iVar3 = FUN_0049ffe0(&local_104,1,4,iVar2);
  if ((iVar3 == 0) || (local_104 != 0x10003)) {
LAB_00421c0f:
    iVar4 = 1;
  }
  else {
    iVar3 = FUN_0049ffe0(&DAT_00e364a0,1,0xfd4,iVar2);
    if (iVar3 == 0) goto LAB_00421c0f;
  }
  FUN_0049f0f0(iVar2);
LAB_00421c24:
  if (iVar4 == 0) {
    FUN_0049eb80(&DAT_004eb3d0,&DAT_004b2304,&DAT_00e364b4);
    iVar2 = -1;
    pcVar5 = &DAT_004eb3d0;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    DAT_004b6c90 = (iVar2 != -2) - 1;
    DAT_00e364f0 = iVar4;
    iVar2 = FUN_00421d80();
    if (iVar2 != 0) {
      FUN_0044e530(0,0);
      FUN_00421b20(0);
    }
  }
  return iVar4 == 0;
}



bool FUN_00421c90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_104;
  undefined local_100 [256];

  local_104 = 0x10003;
  iVar1 = FUN_00421d80();
  if (iVar1 != 0) {
    FUN_0044e530(0,0);
    FUN_00421b20(0);
  }
  FUN_00484310(s___data_player__004b4f6c);
  FUN_0049eb80(local_100,&DAT_004b2524,s___data_player__004b4f6c,s_tgfd_dat_004b6d00);
  iVar1 = FUN_0049f1e0(local_100,&DAT_004b6cfc);
  if (iVar1 != 0) {
    iVar2 = FUN_004a0160(&local_104,1,4,iVar1);
    iVar3 = FUN_004a0160(&DAT_00e364a0,1,0xfd4,iVar1);
    FUN_0049f0f0(iVar1);
    return iVar3 != 0 && iVar2 != 0;
  }
  return false;
}



bool FUN_00421d80(void)

{
  return DAT_00e364b0 == 0;
}



undefined4 FUN_00421d90(void)

{
  int iVar1;
  undefined4 uVar2;

  if (DAT_004b6d20 == 0) {
    return 0;
  }
  FUN_00408640(2);
  if (DAT_004eb474 == 0) {
    iVar1 = FUN_004848a0();
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_00408640(4);
  DAT_004eb464 = FUN_0048bee0(0x4b0);
  if (DAT_004eb464 == 0) {
    return 0;
  }
  FUN_00408640(6);
  DAT_004eb458 = 1;
  DAT_004eb450 = 1;
  if (DAT_004eb474 == 0) {
    FUN_00423210();
  }
  else {
    ResumeThread(DAT_004eb478);
  }
  FUN_00408640(8);
  iVar1 = FUN_00422440(s_current_004b2640);
  if (iVar1 < 0) {
    FUN_004220b0();
    FUN_00422140(s_current_004b2640);
  }
  if (DAT_004b6d20 == 0) {
    uVar2 = FUN_00421eb0(0);
    return uVar2;
  }
  FUN_00408640(10);
  iVar1 = FUN_004877b0(s___data_sounds_map_004b740c);
  if (iVar1 == 0) {
    FUN_00422060();
  }
  else {
    FUN_00421f30();
  }
  FUN_00487900();
  FUN_00408640(0xf);
  FUN_00484a80(0x3f800000);
  FUN_00449ea0();
  FUN_00408640(0x14);
  return 1;
}



undefined4 FUN_00421eb0(int param_1)

{
  if (DAT_004eb450 == 0) {
    return 0;
  }
  FUN_004226c0();
  if (param_1 == 0) {
    FUN_00485070(DAT_004eb414);
    SuspendThread(DAT_004eb478);
  }
  else {
    FUN_004232c0();
  }
  if (DAT_004eb464 != 0) {
    FUN_0048c050(DAT_004eb464);
    DAT_004eb464 = 0;
  }
  if (param_1 != 0) {
    FUN_00484a20();
  }
  DAT_004eb450 = 0;
  DAT_004eb474 = (uint)(param_1 == 0);
  return 1;
}



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



void FUN_004220b0(void)

{
  DAT_004b6d20 = DAT_004eb458;
  if ((DAT_004eb458 == 0) || (DAT_0050d550 = 1, DAT_0050d55c == 0)) {
    DAT_0050d550 = 0;
  }
  DAT_004b6d14 = 0;
  DAT_004b6d18 = DAT_004eb458;
  if ((DAT_004eb458 == 0) || (DAT_004b6d1c = 1, DAT_0050d554 == 0)) {
    DAT_004b6d1c = 0;
  }
  DAT_004b6d24 = 0x3f800000;
  FUN_00484d40(0x3f800000);
  DAT_004eb45c = 0;
  DAT_004eb460 = 0;
  DAT_004b6d28 = DAT_004eb458;
  DAT_00e364a5 = 0xe1;
  DAT_00e364a6 = 200;
  return;
}



undefined4 FUN_00422140(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined local_140 [32];
  undefined local_120 [32];
  undefined local_100 [256];

  FUN_0049eb80(local_100,s__s_s__s_004b4830,s___data_config__004b252c,param_1,s_audio_cfg_004b749c);
  iVar1 = FUN_004877d0();
  if (iVar1 == 0) {
    FUN_00487960();
    return 0xffffffff;
  }
  FUN_0049eb80(local_120,s_AUDIO_004b7494);
  iVar1 = FUN_004879f0(s___________s_SETTINGS_004b4810,local_120);
  if (iVar1 == 0) {
    puVar2 = &DAT_004b480c;
    if (DAT_004b6d20 == 0) {
      puVar2 = &DAT_004b4808;
    }
    FUN_0049eb80(local_140,s_SYS__s_004b748c,puVar2);
    iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
    if (iVar1 == 0) {
      puVar2 = &DAT_004b480c;
      if (DAT_004b6d14 == 0) {
        puVar2 = &DAT_004b4808;
      }
      FUN_0049eb80(local_140,s_HIRES__s_004b7480,puVar2);
      iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
      if (iVar1 == 0) {
        puVar2 = &DAT_004b480c;
        if (DAT_0050d550 == 0) {
          puVar2 = &DAT_004b4808;
        }
        FUN_0049eb80(local_140,s_3D__s_004b7478,puVar2);
        iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
        if (iVar1 == 0) {
          puVar2 = &DAT_004b480c;
          if (DAT_004b6d18 == 0) {
            puVar2 = &DAT_004b4808;
          }
          FUN_0049eb80(local_140,s_DOPPLER__s_004b746c,puVar2);
          iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
          if (iVar1 == 0) {
            puVar2 = &DAT_004b480c;
            if (DAT_004b6d1c == 0) {
              puVar2 = &DAT_004b4808;
            }
            FUN_0049eb80(local_140,s_REFLECTIONS__s_004b47f8,puVar2);
            iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
            if (iVar1 == 0) {
              FUN_0049eb80(local_140,s_GAINMATCH__0_2f_004b745c,(double)DAT_004b6d24);
              iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
              if (iVar1 == 0) {
                puVar2 = &DAT_004b480c;
                if (DAT_004b6d28 == 0) {
                  puVar2 = &DAT_004b4808;
                }
                FUN_0049eb80(local_140,s_VOICE__s_004b7450,puVar2);
                iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                if (iVar1 == 0) {
                  puVar2 = &DAT_004b480c;
                  if (DAT_004eb45c == 0) {
                    puVar2 = &DAT_004b4808;
                  }
                  FUN_0049eb80(local_140,s_MUSIC__s_004b7444,puVar2);
                  iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                  if (iVar1 == 0) {
                    puVar2 = &DAT_004b480c;
                    if (DAT_004eb460 == 0) {
                      puVar2 = &DAT_004b4808;
                    }
                    FUN_0049eb80(local_140,s_REVERB__s_004b7438,puVar2);
                    iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                    if (iVar1 == 0) {
                      iVar1 = FUN_004879a0();
                      if (iVar1 == 0) {
                        FUN_00487960();
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00487960();
  return 0;
}



undefined4 FUN_00422440(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  float10 fVar6;
  undefined local_100 [256];

  if (DAT_004eb450 != 0) {
    FUN_0049eb80(local_100,s__s_s__s_004b4830,s___data_config__004b252c,param_1,s_audio_cfg_004b749c
                );
    iVar2 = FUN_004877b0(local_100);
    if (iVar2 == 0) {
      FUN_00487900();
      return 0xffffffff;
    }
    iVar2 = FUN_00487ae0();
    while (iVar2 != 0) {
      pbVar4 = &DAT_004b3e7c;
      pbVar3 = DAT_00ec8e84;
      do {
        bVar1 = *pbVar3;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_004224df:
          iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_004224e4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_004224df;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_004224e4:
      if (iVar2 == 0) break;
      iVar2 = FUN_0049ec50(DAT_00ec8e84,s_AUDIO_004b7494);
      if (iVar2 == 0) {
        iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_HIRES_004b74d4);
        if (iVar2 == 0) {
          iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
          DAT_004b6d14 = (uint)(iVar2 == 0);
        }
        else {
          iVar2 = FUN_0049ec50(DAT_00ec8e8c,&PTR_DAT_004b74d0);
          if (iVar2 == 0) {
            iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
            DAT_004b6d20 = (uint)(iVar2 == 0);
          }
          else {
            iVar2 = FUN_0049ec50(DAT_00ec8e8c,&DAT_004b74cc);
            if (iVar2 == 0) {
              iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
              DAT_0050d550 = (uint)(iVar2 == 0);
            }
            else {
              iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_DOPPLER_004b74c4);
              if (iVar2 == 0) {
                iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                DAT_004b6d18 = (uint)(iVar2 == 0);
              }
              else {
                iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_GAINMATCH_004b74b8);
                if (iVar2 == 0) {
                  fVar6 = (float10)FUN_0049ef90(DAT_00ec8e90);
                  DAT_004b6d24 = (float)fVar6;
                  FUN_00484d40(DAT_004b6d24);
                }
                else {
                  iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_VOICE_004b74b0);
                  if (iVar2 == 0) {
                    iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                    DAT_004b6d28 = (uint)(iVar2 == 0);
                  }
                  else {
                    iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_MUSIC_004b74a8);
                    if (iVar2 == 0) {
                      iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                      DAT_004eb45c = (uint)(iVar2 == 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar2 = FUN_00487ae0();
    }
    FUN_00487900();
  }
  return 1;
}



void FUN_004226c0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  uVar4 = 0;
  iVar3 = *(int *)(PTR_DAT_004b6d34 + 0x28);
  if (iVar3 != 0) {
    if (*(int *)(PTR_DAT_004b6d34 + 0x20) != 0) {
      iVar2 = 0;
      do {
        uVar1 = *(uint *)(iVar3 + 0x24);
        if ((uVar1 & 1) != 0) {
          if (DAT_004b6d2c == 0) {
            if ((uVar1 & 2) == 0) {
              FUN_00422d10(iVar3);
              goto LAB_00422713;
            }
          }
          else {
            FUN_00422d10(iVar3);
            uVar1 = *(uint *)(iVar3 + 0x24);
          }
          *(uint *)(iVar3 + 0x24) = uVar1 & 0xfffffffd;
        }
LAB_00422713:
        FUN_004231f0(*(int *)(PTR_DAT_004b6d34 + 0x28) + iVar2);
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0x4c;
        iVar3 = iVar3 + 0x4c;
      } while (uVar4 < *(uint *)(PTR_DAT_004b6d34 + 0x20));
    }
    FUN_0049f200(*(undefined4 *)(PTR_DAT_004b6d34 + 0x28));
    *(undefined4 *)(PTR_DAT_004b6d34 + 0x20) = 0;
    *(undefined4 *)(PTR_DAT_004b6d34 + 0x24) = 0;
    *(undefined4 *)(PTR_DAT_004b6d34 + 0x28) = 0;
  }
  return;
}



undefined4 FUN_00422770(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;

  uVar1 = FUN_0049f270(param_1 * 0x4c);
  *(undefined4 *)(PTR_DAT_004b6d34 + 0x28) = uVar1;
  if (*(undefined4 **)(PTR_DAT_004b6d34 + 0x28) == (undefined4 *)0x0) {
    return 0;
  }
  puVar4 = *(undefined4 **)(PTR_DAT_004b6d34 + 0x28);
  for (uVar2 = param_1 * 0x13 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(int *)(PTR_DAT_004b6d34 + 0x24) = param_1;
  *(undefined4 *)(PTR_DAT_004b6d34 + 0x20) = 0;
  return 1;
}



undefined4 * FUN_004227e0(byte *param_1,int param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  int local_284;
  char local_280 [128];
  undefined local_200 [512];

  bVar3 = false;
  local_284 = 0;
  if (DAT_004eb450 == 0) {
    return (undefined4 *)0x0;
  }
  pbVar11 = &DAT_004b7580;
  pbVar4 = param_1;
  do {
    bVar2 = *pbVar4;
    bVar14 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_00422838:
      iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_0042283d;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar14 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_00422838;
    pbVar4 = pbVar4 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_0042283d:
  if (iVar5 == 0) {
    return (undefined4 *)0x0;
  }
  puVar6 = (undefined4 *)FUN_004231b0(param_1);
  if (puVar6 == (undefined4 *)0x0) {
    pcVar7 = s___data_wavs_22K___data_wavs_22K__004b7558;
    if (DAT_004b6d14 == 0) {
      pcVar7 = s___data_wavs_11K___data_wavs_11K__004b751c;
    }
    FUN_0049eb80(local_200,s__s__s_s__s_s_004b74e4,pcVar7,&DAT_00e9f300,s___data_wavs_Music_004b74f4
                 ,&DAT_004d55cc,s___data_wavs_Voice_004b7508);
    puVar8 = local_200;
    do {
      puVar8 = (undefined *)FUN_0048c2d0(puVar8,local_280,0x80,&DAT_004b3b5c);
      if (local_280[0] != '\0') {
        FUN_0049eb80(local_280,s__s_c_s_004b74dc,local_280,0x5c,param_1);
        local_284 = (**(code **)(DAT_00ecc420 + 0x30))(local_280,&DAT_004b5c4c);
        if (local_284 != 0) {
          bVar3 = true;
          break;
        }
      }
    } while (puVar8 != (undefined *)0x0);
    if (!bVar3) {
      return (undefined4 *)0x0;
    }
    uVar9 = *(uint *)(PTR_DAT_004b6d34 + 0x20);
    if (uVar9 < *(uint *)(PTR_DAT_004b6d34 + 0x24)) {
      puVar6 = (undefined4 *)(*(int *)(PTR_DAT_004b6d34 + 0x28) + uVar9 * 0x4c);
      puVar6[8] = uVar9;
      _strncpy((char *)puVar6,(char *)param_1,0x1f);
      *(char *)((int)puVar6 + 0x1f) = '\0';
      uVar9 = FUN_004851a0(local_284,puVar6 + 0xb,puVar6 + 0xc,puVar6 + 0xd,puVar6 + 0xf);
      puVar6[10] = uVar9;
      if (uVar9 != 0) {
        uVar10 = (uint)((ulonglong)uVar9 / ((ulonglong)(uint)puVar6[0xb] / 1000));
        puVar6[0xe] = uVar10;
        if (puVar6[0xc] == 0x10) {
          puVar6[0xe] = uVar10 >> 1;
        }
        if (puVar6[0xd] != 0) {
          puVar6[0xe] = (uint)puVar6[0xe] >> 1;
        }
        puVar6[9] = 0;
        puVar6[0x11] = 1;
        if (0x81330 < uVar9) {
          puVar6[9] = 8;
        }
        FUN_004231d0(puVar6);
        *(int *)(PTR_DAT_004b6d34 + 0x20) = *(int *)(PTR_DAT_004b6d34 + 0x20) + 1;
        (**(code **)(DAT_00ecc420 + 0x34))(local_284);
        return puVar6;
      }
    }
  }
  else {
    if (((DAT_004b6d2c == 0) && (param_2 != 0)) && ((*(byte *)(puVar6 + 9) & 9) == 0)) {
      FUN_00422ac0(puVar6);
    }
    if (*(uint *)(PTR_DAT_004b6d34 + 0x20) < *(uint *)(PTR_DAT_004b6d34 + 0x24)) {
      puVar1 = (undefined4 *)
               (*(int *)(PTR_DAT_004b6d34 + 0x28) + *(uint *)(PTR_DAT_004b6d34 + 0x20) * 0x4c);
      puVar12 = puVar6;
      puVar13 = puVar1;
      for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      if ((puVar6[9] & 8) == 0) {
        puVar6[9] = puVar6[9] | 4;
        puVar1[9] = puVar1[9] | 2;
      }
      puVar1[8] = *(undefined4 *)(PTR_DAT_004b6d34 + 0x20);
      *(int *)(PTR_DAT_004b6d34 + 0x20) = *(int *)(PTR_DAT_004b6d34 + 0x20) + 1;
      return puVar1;
    }
  }
  if (local_284 != 0) {
    (**(code **)(DAT_00ecc420 + 0x34))(local_284);
  }
  return (undefined4 *)0x0;
}



int FUN_00422a90(int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(PTR_DAT_004b6d34 + 0x20))) {
    return *(int *)(PTR_DAT_004b6d34 + 0x28) + param_1 * 0x4c;
  }
  return 0;
}



undefined4 FUN_00422ac0(int param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char local_280 [128];
  undefined local_200 [512];

  iVar6 = 0;
  if ((*(uint *)(param_1 + 0x24) & 1) != 0) {
    return 0;
  }
  if ((PTR_IMAGE_DOS_HEADER_004b6d10 < (undefined *)(DAT_004eb44c + *(int *)(param_1 + 0x28))) &&
     ((*(uint *)(param_1 + 0x24) & 8) == 0)) {
    FUN_00422f60(*(int *)(param_1 + 0x28) + 0x19000);
  }
  iVar5 = DAT_004eb414;
  if ((*(byte *)(param_1 + 0x24) & 8) == 0) {
    iVar5 = FUN_00484aa0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x28),
                         DAT_004b6d30);
    if (iVar5 == 0) goto LAB_00422cd2;
    DAT_004eb44c = DAT_004eb44c + *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x48) = iVar5;
  bVar1 = false;
  pcVar2 = s___data_wavs_22K___data_wavs_22K__004b7558;
  if (DAT_004b6d14 == 0) {
    pcVar2 = s___data_wavs_11K___data_wavs_11K__004b751c;
  }
  FUN_0049eb80(local_200,s__s__s_s__s_s_004b74e4,pcVar2,&DAT_00e9f300,s___data_wavs_Music_004b74f4,
               &DAT_004d55cc,s___data_wavs_Voice_004b7508);
  puVar3 = local_200;
  do {
    puVar3 = (undefined *)FUN_0048c2d0(puVar3,local_280,0x80,&DAT_004b3b5c);
    if (local_280[0] != '\0') {
      FUN_0049eb80(local_280,s__s_c_s_004b74dc,local_280,0x5c,param_1);
      iVar6 = (**(code **)(DAT_00ecc420 + 0x30))(local_280,&DAT_004b5c4c);
      if (iVar6 != 0) {
        bVar1 = true;
        break;
      }
    }
  } while (puVar3 != (undefined *)0x0);
  if (bVar1) {
    if ((*(byte *)(param_1 + 0x24) & 8) != 0) {
      uVar4 = FUN_004083c1();
      return uVar4;
    }
    (**(code **)(DAT_00ecc420 + 0x4c))(iVar6,*(undefined4 *)(param_1 + 0x3c),0);
    iVar5 = FUN_00422f00(iVar6,param_1);
    if (iVar5 != 0) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
      (**(code **)(DAT_00ecc420 + 0x34))(iVar6);
      return 1;
    }
  }
LAB_00422cd2:
  if (iVar6 != 0) {
    (**(code **)(DAT_00ecc420 + 0x34))(iVar6);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_004850a0(*(int *)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 0;
}



undefined4 FUN_00422c0d(void)

{
  int in_EAX;
  int iVar1;
  int unaff_ESI;
  undefined4 unaff_EDI;

  if ((in_EAX != 0) && ((*(byte *)(in_EAX + 0x24) & 1) != 0)) {
    FUN_00422d10();
  }
  DAT_004eb40c = *(int *)(unaff_ESI + 0x28);
  DAT_004eb404 = unaff_EDI;
  DAT_004eb418 = unaff_ESI;
  (**(code **)(DAT_00ecc420 + 0x4c))();
  iVar1 = FUN_004233a0();
  DAT_004eb40c = DAT_004eb40c - iVar1;
  *(uint *)(unaff_ESI + 0x24) = *(uint *)(unaff_ESI + 0x24) | 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004b7e7e);
  return 1;
}



undefined4 FUN_00422d10(int param_1)

{
  if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x24) & 8) == 0) {
    FUN_004850a0(*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    DAT_004eb44c = DAT_004eb44c - *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
    return 1;
  }
  if (DAT_004eb418 == param_1) {
    (**(code **)(DAT_00ecc420 + 0x34))(DAT_004eb404);
    DAT_004eb404 = 0;
    DAT_004eb40c = 0;
    DAT_004eb418 = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  return 1;
}



void FUN_00422da0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;

  iVar2 = *(int *)(PTR_DAT_004b6d34 + 0x28);
  if ((iVar2 != 0) && (uVar3 = 0, *(int *)(PTR_DAT_004b6d34 + 0x20) != 0)) {
    do {
      uVar1 = *(uint *)(iVar2 + 0x24);
      if ((uVar1 & 1) != 0) {
        if (DAT_004b6d2c == 0) {
          if ((uVar1 & 2) == 0) {
            FUN_00422d10(iVar2);
            goto LAB_00422dee;
          }
        }
        else {
          FUN_00422d10(iVar2);
          uVar1 = *(uint *)(iVar2 + 0x24);
        }
        *(uint *)(iVar2 + 0x24) = uVar1 & 0xfffffffd;
      }
LAB_00422dee:
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x4c;
    } while (uVar3 < *(uint *)(PTR_DAT_004b6d34 + 0x20));
  }
  uVar3 = 0;
  do {
    FUN_00449e00(&DAT_00e67e40 + uVar3);
    FUN_00449e00((int)&DAT_00e68060 + uVar3);
    uVar3 = uVar3 + 0x44;
  } while (uVar3 < 0x220);
  return;
}



int FUN_00422e30(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined local_20 [32];

  iVar1 = 0;
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    FUN_00422ac0(param_1);
    if ((*(byte *)(param_1 + 0x24) & 8) != 0) {
      DAT_004eb408 = param_2;
    }
    if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x44) = 1;
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    FUN_0049eb80(local_20,&PTR_DAT_004b7588,param_1);
    iVar1 = FUN_00423050(local_20);
    if (iVar1 == 0) {
      *param_3 = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x24) & 8) == 0) {
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_004850c0(*(undefined4 *)(param_1 + 0x48),0);
    if ((iVar1 == 1) && (*(uint *)(param_1 + 0x20) < DAT_00e9f360)) {
      iVar1 = FUN_00484bb0(*(undefined4 *)(param_1 + 0x48));
      return iVar1;
    }
  }
  return *(int *)(param_1 + 0x48);
}



bool FUN_00422f00(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = param_2;
  iVar1 = FUN_00485110(*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x28),&param_2);
  if (iVar1 == 0) {
    return false;
  }
  uVar2 = (**(code **)(DAT_00ecc420 + 0x38))(param_1,iVar1,param_2);
  iVar3 = FUN_00485170(*(undefined4 *)(iVar3 + 0x48),iVar1,uVar2);
  return iVar3 != 0;
}



uint FUN_00422f60(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_8;
  uint local_4;

  local_4 = DAT_004eb470;
  local_8 = 0;
  uVar3 = 0;
  while( true ) {
    iVar4 = *(int *)(PTR_DAT_004b6d34 + 0x28) + DAT_004eb46c * 0x4c;
    uVar5 = DAT_004eb46c;
    if (DAT_004eb46c < *(uint *)(PTR_DAT_004b6d34 + 0x20)) {
      do {
        uVar1 = *(uint *)(iVar4 + 0x24);
        if (((((uVar1 & 1) != 0) && ((uVar1 & 8) == 0)) &&
            ((DAT_004b6d2c != 0 || ((uVar1 & 6) == 0)))) && (*(int *)(iVar4 + 0x40) == 0)) {
          iVar2 = FUN_004850c0(*(undefined4 *)(iVar4 + 0x48),0);
          if (iVar2 == 0) {
            if (*(int *)(iVar4 + 0x44) == 0) {
              uVar3 = uVar3 + *(int *)(iVar4 + 0x28);
              FUN_00422d10(iVar4);
              DAT_004eb454 = 2;
              if (param_1 <= uVar3) {
                DAT_004eb470 = local_4;
                DAT_004eb46c = uVar5 + 1;
                return uVar3;
              }
            }
            else {
              *(undefined4 *)(iVar4 + 0x44) = 0;
            }
          }
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x4c;
      } while (uVar5 < *(uint *)(PTR_DAT_004b6d34 + 0x20));
    }
    if (1 < local_8) break;
    local_8 = local_8 + 1;
    local_4 = (uint)(local_4 == 0);
    DAT_004eb46c = 0;
  }
  return 0;
}



int FUN_00423050(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined local_80 [128];

  if (param_1 == 0) {
    return 0;
  }
  pcVar1 = s___data_wavs_22K_004b759c;
  if (DAT_004b6d14 == 0) {
    pcVar1 = s___data_wavs_11K_004b758c;
  }
  FUN_0049eb80(local_80,s__s_c_s_004b74dc,pcVar1,0x5c,param_1);
  iVar2 = (**(code **)(DAT_00ecc420 + 0x30))(local_80,&DAT_004b5c4c);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_004851a0(iVar2,&uStack_8c,&uStack_84,&uStack_94,&iStack_88);
  iVar4 = iStack_88;
  if ((iVar3 != 0) && (iVar4 = FUN_00484aa0(uStack_94,uStack_8c,uStack_84,iVar3,0), iVar4 != 0)) {
    iVar3 = FUN_00485110(iVar4,iVar3,&uStack_90);
    if (iVar3 == 0) {
      return 0;
    }
    uVar5 = (**(code **)(DAT_00ecc420 + 0x38))(iVar2,iVar3,uStack_90);
    iVar3 = FUN_00485170(iVar4,iVar3,uVar5);
    if (iVar3 != 0) {
      (**(code **)(DAT_00ecc420 + 0x34))(iVar2);
      return iVar4;
    }
  }
  (**(code **)(DAT_00ecc420 + 0x34))(iVar2);
  if (iVar4 != 0) {
    FUN_004850a0(iVar4);
  }
  return 0;
}



bool FUN_00423190(int param_1)

{
  return DAT_004eb418 == param_1;
}



void FUN_004231b0(undefined4 param_1)

{
  FUN_0048c160(DAT_004eb464,param_1);
  return;
}



void FUN_004231d0(undefined4 param_1)

{
  FUN_0048c0a0(DAT_004eb464,param_1,param_1);
  return;
}



void FUN_004231f0(undefined4 param_1)

{
  FUN_0048c210(DAT_004eb464,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00423210(void)

{
  DAT_004eb410 = 0x2b110;
  DAT_004eb404 = 0;
  DAT_004eb40c = 0;
  DAT_004eb418 = 0;
  DAT_004eb408 = 0;
  DAT_004eb414 = FUN_00484aa0(1,0x5622,0x10,0x2b110,4);
  DAT_004eb400 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  FUN_00423350();
  DAT_004eb478 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&DAT_00423330,
                              (LPVOID)0x0,0,(LPDWORD)&DAT_004eb3f8);
  DAT_004eb3fc = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  _DAT_004eb47c = 1;
  DAT_004eb44c = DAT_004eb44c + DAT_004eb410;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004232c0(void)

{
  CloseHandle(DAT_004eb400);
  DAT_004eb400 = (HANDLE)0x0;
  FUN_004850a0(DAT_004eb414);
  DAT_004eb414 = 0;
  if (DAT_004eb3fc != (HANDLE)0x0) {
    CloseHandle(DAT_004eb3fc);
  }
  DAT_004eb3fc = (HANDLE)0x0;
  TerminateThread(DAT_004eb478,0);
  DAT_004eb478 = (HANDLE)0x0;
  _DAT_004eb47c = 0;
  return 1;
}



void FUN_00423350(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint local_8 [2];

  piVar1 = DAT_004eb414;
  local_8[0] = DAT_004eb410 >> 1;
  local_8[1] = DAT_004eb410 - 1;
  puVar3 = local_8;
  iVar2 = 2;
  do {
    (**(code **)(*piVar1 + 0xec))(piVar1,*puVar3,DAT_004eb400);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



uint FUN_004233a0(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;

  uVar2 = param_3;
  piVar1 = DAT_004eb414;
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_004eb40c == 0) {
    return 0;
  }
  uVar10 = 0;
  iVar9 = 0;
  uVar7 = param_2;
  uVar8 = param_3;
  iVar3 = (**(code **)(*DAT_004eb414 + 0x2c))(DAT_004eb414,param_2,param_3,&param_3,&param_2,0,0);
  if (iVar3 < 0) {
    return 0;
  }
  uVar5 = DAT_004eb40c;
  if (uVar2 <= DAT_004eb40c) {
    uVar5 = uVar2;
  }
  puVar6 = (undefined4 *)0x0;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  (**(code **)(DAT_00ecc420 + 0x38))(DAT_004eb404,0,uVar5);
  if ((uVar5 < uVar2) && (DAT_004eb408 != 0)) {
    (**(code **)(DAT_00ecc420 + 0x4c))(DAT_004eb404,*(undefined4 *)(iVar9 + 0x3c),0);
    DAT_004eb40c = *(uint *)(iVar9 + 0x28);
    (**(code **)(DAT_00ecc420 + 0x38))(DAT_004eb404,uVar5,uVar2 - uVar5);
  }
  iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,0,uVar10,0,0);
  if (iVar3 < 0) {
    iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,uVar8,uVar7,0,0);
  }
  return (iVar3 < 0) - 1 & uVar5;
}



bool FUN_00423840(int param_1,int param_2,int param_3)

{
  int iVar1;

  if ((param_2 == DAT_00ec8600) && (param_3 == DAT_00ec8604)) {
    return false;
  }
  FUN_0048a1c0();
  FUN_00488030();
  iVar1 = FUN_00487f00(*(undefined4 *)(param_1 + 0x14),0);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_00489ec0(*(undefined4 *)(param_1 + 0x18));
  return iVar1 == 0;
}



undefined4 FUN_004238a0(void)

{
  if ((DAT_0050b5c8 != 0) && (DAT_004b7a34 != 0)) {
    FUN_0049ce60(200,0x14);
    return 1;
  }
  return 0;
}

// this wasn't automatically dumped - was a label LAB_00423900
// TODO: replace everywhere that LAB_00423900 is with this function pointer
// Window_msg_default_handler
int FUN_00423900(undefined4 param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5)

{
  DAT_0050b5a8 = 0;
  if (param_2 < 0x1d) {
    if (param_2 == 0x1c) {
      FUN_00423aa0(param_1,param_3,param_4);
      return 0;
    }
    if (param_2 == 6) {
      FUN_00423ac0(param_1,param_3 & 0xffff,param_4,param_3 >> 0x10);
      return 0;
    }
  }
  else if (param_2 < 0x113) {
    if (param_2 == 0x112) {
      if ((param_3 == 0xf100) || (param_3 == 0xf140)) {
        DAT_0050b5a8 = 1;
      }
    }
    else {
      switch(param_2) {
      case 0x100:
      case 0x104:
        if ((DAT_004eb1dc == 0) || (DAT_00ea0250 == 0)) {
          FUN_004080c0(param_3,param_4 >> 0x10 & 0x1ff,1);
          FUN_00415640(param_3,1);
        }
        break;
      case 0x101:
      case 0x105:
        if ((DAT_004eb1dc == 0) || (DAT_00ea0250 == 0)) {
          FUN_004080c0(param_3,param_4 >> 0x10 & 0x1ff,0);
          FUN_00415640(param_3,0);
        }
        else {
          FUN_0041be80(param_3);
        }
      }
    }
  }
  else {
    if (param_2 == 0x214) {
      FUN_00423b90(param_1,param_3,param_4);
      return 0;
    }
    if (param_2 == 0x232) {
      FUN_00423c80(param_1);
      return 0;
    }
  }
  if (DAT_0050b5a8 != 0) {
    *param_5 = 0;
  }
  return DAT_0050b5a8;
}

void FUN_00423aa0(undefined4 param_1,undefined4 param_2)

{
  FUN_00423ae0(param_1,param_2);
  return;
}



void FUN_00423ac0(undefined4 param_1,int param_2)

{
  FUN_00423ae0(param_1,param_2 != 0);
  return;
}



void FUN_00423ae0(HWND param_1,int param_2)

{
  if (param_2 != 0) {
    if (DAT_0050b5d0 == 0) {
      if ((DAT_0050b560 == 0) && (DAT_0050b568 == 0)) {
        ShowWindow(param_1,3);
      }
      FUN_004238a0();
      FUN_00488100(1);
      FUN_0048ac50();
      FUN_004238a0();
    }
    PTR_FUN_004b7a38 = &LAB_00423580;
    DAT_0050b5d0 = 1;
    FUN_004804b0(0);
    FUN_00485a30(param_2);
    return;
  }
  PTR_FUN_004b7a38 = FUN_00423cb0;
  FUN_00488100(0);
  DAT_0050b5d0 = 0;
  FUN_004804b0(1);
  FUN_00485a30(0);
  return;
}



void FUN_00423b90(HWND param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  tagRECT local_20;
  tagRECT tStack_10;

  GetWindowRect(param_1,&local_20);
  GetClientRect(param_1,&tStack_10);
  tStack_10.right = (local_20.right - local_20.left) - tStack_10.right;
  tStack_10.bottom = (local_20.bottom - local_20.top) - tStack_10.bottom;
  switch(param_2) {
  case 1:
  case 2:
    iVar2 = (param_3[2] - tStack_10.right) - *param_3;
    param_1 = (HWND)((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    param_1 = (HWND)(((param_3[3] - param_3[1]) - tStack_10.bottom) / 3);
  }
  DAT_004eb550 = (int)param_1 * 3;
  DAT_0050b594 = (int)param_1 * 4;
  iVar2 = DAT_004eb550;
  if (DAT_004eb550 < 0x50) {
    iVar2 = 0x50;
  }
  iVar1 = DAT_0050b594;
  if (DAT_0050b594 < 0x3c) {
    iVar1 = 0x3c;
  }
  param_3[3] = param_3[1] + iVar2 + tStack_10.bottom;
  param_3[2] = *param_3 + iVar1 + tStack_10.right;
  DAT_0050b5a8 = 1;
  return;
}



void FUN_00423c80(void)

{
  int iVar1;

  iVar1 = FUN_004238a0();
  if (iVar1 == 0) {
    FUN_00423840(&DAT_0050b560,DAT_004eb550,DAT_0050b594);
  }
  return;
}



void FUN_00423cb0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00423cc0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_100 [256];

  _DAT_0050b5a0 = 1;
  FUN_00424430(param_1);
  FUN_0048c3d0(&DAT_00e9f280);
  _DAT_00e9f288 = &LAB_00484820;
  _DAT_00e9f290 = &LAB_00484820;
  _DAT_00e9f294 = &LAB_00484820;
  FUN_00484720(&DAT_00e9f280);
  FUN_00421120(s___data_racer_tab_004b7bb4);
  FUN_004238a0();
  FUN_004081c0();
  FUN_00410fd0();
  _DAT_0050b598 = GetModuleHandleA((LPCSTR)0x0);
  FUN_0049d060(0x80000002,s_Software_LucasArts_Entertainment_004b7b64);
  DAT_0050b560 = FUN_0049d230(s_FullScreen_004b7b58,DAT_0050b560);
  DAT_0050b564 = FUN_0049d230(s_Fix_Flicker_004b7b4c,DAT_0050b564);
  DAT_0050b568 = 0;
  DAT_0050b56c = FUN_0049d230(s_UseFett_004b7b44,DAT_0050b56c);
  iVar1 = FUN_0048bc10();
  if (iVar1 == 0) {
    MessageBoxA((HWND)0x0,s_Direct3D_Failure_No_3D_Hardware_F_004b4900,s_Racer_Error_004b4928,0x30);
    return 0;
  }
  FUN_004246c0(1);
  FUN_004238a0();
  FUN_00424180(iVar1,&DAT_0050b560);
  _DAT_0050b58c = 1;
  if (DAT_0050b5b0 != 0) {
    uVar2 = FUN_0048c780(&DAT_0050b560);
    _DAT_0050b58c = FUN_004246d0(uVar2);
    return 0;
  }
  FUN_004246c0(0);
  if ((DAT_0050b560 == 0) && (DAT_0050b568 == 0)) {
    ShowWindow(DAT_0050b59c,3);
  }
  DAT_0050cb68 = DAT_0050b568;
  FUN_0048be20(iVar1);
  FUN_00490950(&DAT_00e9f280);
  DAT_0050b59c = (HWND)FUN_0048c780();
  FUN_00425500();
  FUN_00484310(s___data_config__004b252c);
  FUN_0049eb80(auStack_100,&DAT_004b2524,s___data_config__004b252c,s_current_004b2640);
  FUN_00484310(auStack_100);
  iVar1 = FUN_00409b10(&DAT_0050b560);
  if (iVar1 != 0) {
    FUN_0049eb80(s_Unknown_error_004b75f8,s_Unable_to_open_display_for_3D____004b7b20,&DAT_00ecbc20)
    ;
    FUN_00424150();
    return 0;
  }
  FUN_004238a0();
  FUN_00408510();
  FUN_00408640(0);
  uVar2 = FUN_004112e1();
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00423efd(void)

{
  int iVar1;
  int iVar2;
  code *unaff_EBX;
  undefined4 *puVar3;

  FUN_00408640(0x14);
  iVar1 = FUN_00404b10();
  if (iVar1 != 0) {
    FUN_0049eb80(s_Unknown_error_004b75f8,s_ERROR__elfControl_Initialize_fai_004b7af8,&DAT_00ecbc20)
    ;
    FUN_00424150();
    return 0;
  }
  FUN_00408640(0x19);
  FUN_0049d210(s_FullScreen_004b7b58,DAT_0050b560);
  FUN_0049d210(s_Fix_Flicker_004b7b4c,DAT_0050b564);
  FUN_0049d210(s_DevMode_004b7af0,DAT_0050b568);
  FUN_0049d210(s_UseFett_004b7b44,DAT_0050b56c);
  FUN_00409800(&DAT_0050b560);
  FUN_00408640(0x26);
  FUN_0049ce90(&LAB_00423900);
  FUN_00408640(0x28);
  FUN_00445960();
  FUN_00408640(0x2d);
  FUN_00445a50();
  FUN_00408640(0x32);
  FUN_00411950();
  FUN_00408640(0x3c);
  FUN_00421810();
  FUN_00408640(0x41);
  DAT_0050b558 = (undefined *)0x0;
  iVar1 = 0x1f;
  if (((DAT_00ec8e5c == 0x7c00) && (DAT_00ec8e60 == 0x3e0)) && (DAT_00ec8e64 == 0x1f)) {
    DAT_0050b558 = &DAT_004eb558;
    iVar2 = 0xffff;
    do {
      *(ushort *)(DAT_0050b558 + iVar2 * 2) = (ushort)iVar2 & 0x1f | (ushort)(iVar2 >> 1) & 0x7fe0;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  puVar3 = &DAT_004eb484;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_004eb484 = 0x7c;
  _DAT_004eb488 = 7;
  _DAT_004eb490 = 0x280;
  _DAT_004eb48c = 0x1e0;
  _DAT_004eb4ec = 0x800;
  if ((DAT_0050b560 == 0) && (DAT_0050b568 == 0)) {
    (*unaff_EBX)(DAT_0050b59c,3);
  }
  FUN_00408640(0x5a);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004240d0(void)

{
  _DAT_0050b5a0 = 0;
  FUN_00408620();
  FUN_0044e560();
  FUN_00449e50();
  FUN_00412e40();
  FUN_00426910();
  FUN_00409af0();
  FUN_00421eb0(1);
  FUN_00404da0();
  FUN_00409d00();
  (**(code **)(DAT_00ecc420 + 0x14))(s_rdShutdown____004b7bc8);
  FUN_00490990();
  FUN_0049d0e0();
  FUN_0049ce90(0);
  FUN_00421330();
  FUN_00484760();
  return;
}



void thunk_FUN_00423cb0(void)

{
                    // WARNING: Could not recover jumptable at 0x00424140. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_FUN_004b7a38)();
  return;
}



void FUN_00424150(void)

{
  FUN_004240d0();
  MessageBoxA((HWND)0x0,s_Unknown_error_004b75f8,s_Unable_to_continue_Error_004b7bd8,0x2010);
  FUN_0049ea40(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00424180(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 auStack_168 [16];
  undefined4 uStack_128;
  char *pcStack_124;
  byte *pbStack_120;
  char *pcStack_11c;
  uint *puStack_118;
  byte local_100;
  undefined4 local_ff;

  local_100 = DAT_004d55cc;
  puVar7 = &local_ff;
  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  *(undefined *)((int)puVar7 + 2) = 0;
  puStack_118 = (uint *)&DAT_004d55cc;
  DAT_0050b5ac = param_1;
  pcStack_11c = (char *)0x100;
  pbStack_120 = &local_100;
  pcStack_124 = s_Display_004b7c20;
  param_2[4] = *param_1 - 1;
  uStack_128 = 0x4241d5;
  FUN_0049d2e0();
  uVar8 = 0;
  if (*DAT_0050b5ac != 0) {
    pbVar5 = (byte *)(DAT_0050b5ac[1] + 0x80);
    do {
      pbVar6 = &local_100;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        bVar10 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00424218:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0042421d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar10 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00424218;
        pbVar2 = pbVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0042421d:
      if (iVar4 == 0) {
        param_2[4] = uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
      pbVar5 = pbVar5 + 0x2b4;
    } while (uVar8 < *DAT_0050b5ac);
  }
  puStack_118 = (uint *)&DAT_004d55cc;
  pcStack_11c = (char *)0x100;
  iVar4 = DAT_0050b5ac[1] + param_2[4] * 0x2b4;
  param_2[6] = *(int *)(iVar4 + 0x2ac) - 1;
  pbStack_120 = &local_100;
  pcStack_124 = s_3D_Device_004b7c14;
  uStack_128 = 0x424284;
  FUN_0049d2e0();
  uVar8 = 0;
  if (*(uint *)(iVar4 + 0x2ac) != 0) {
    pbVar5 = (byte *)(*(int *)(iVar4 + 0x2b0) + 0xb4);
    do {
      pbVar6 = &local_100;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        bVar10 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_004242c9:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_004242ce;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar10 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_004242c9;
        pbVar2 = pbVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_004242ce:
      if (iVar3 == 0) {
        param_2[6] = uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
      pbVar5 = pbVar5 + 0x368;
    } while (uVar8 < *(uint *)(iVar4 + 0x2ac));
  }
  puStack_118 = (uint *)0x280;
  pcStack_11c = s_Display_Width_004b7c04;
  DAT_004eb500 = 0x3f800000;
  pbStack_120 = (byte *)0x424306;
  DAT_004eb504 = FUN_0049d180();
  puStack_118 = (uint *)0x1e0;
  pcStack_11c = s_Display_Height_004b7bf4;
  pbStack_120 = (byte *)0x42431d;
  DAT_004eb508 = FUN_0049d180();
  puStack_118 = param_2;
  _DAT_004eb51c = 0x10;
  _DAT_004eb518 = 1;
  puVar7 = &DAT_004eb500;
  puVar9 = auStack_168;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  uVar8 = FUN_004243c0();
  param_2[5] = uVar8;
  puVar7 = (undefined4 *)(*(int *)(iVar4 + 0x2a8) + uVar8 * 0x50);
  puVar9 = &DAT_004eb500;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  param_2[8] = 4;
  param_2[9] = 3;
  param_2[10] = 1;
  *param_2 = (uint)(DAT_004b79f8 == 0);
  param_2[1] = 0;
  param_2[2] = DAT_0050b5b4;
  param_2[3] = 0;
  return;
}



uint FUN_004243c0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int param_11;

  uVar1 = *(uint *)(*(int *)(DAT_0050b5ac + 4) + 0x2a4 + *(int *)(param_11 + 0x10) * 0x2b4);
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = (int *)(*(int *)(*(int *)(DAT_0050b5ac + 4) + *(int *)(param_11 + 0x10) * 0x2b4 + 0x2a8
                             ) + 4);
    uVar3 = 0;
    while (((piVar2[6] != 0x10 || (*piVar2 != param_2)) || (piVar2[1] != param_3))) {
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x14;
      if (uVar1 <= uVar3) {
        return 0;
      }
    }
  }
  return uVar3;
}



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
          if (fVar3 < (float10)0.0) {
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
            if (fVar3 < (float10)0.0) {
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



void FUN_004246c0(undefined4 param_1)

{
  DAT_0050b5c8 = param_1;
  return;
}



void FUN_004246d0(HWND param_1,LPARAM param_2)

{
  HINSTANCE hInstance;

  hInstance = (HINSTANCE)GetWindowLongA(param_1,-6);
  DialogBoxParamA(hInstance,(LPCSTR)0x65,param_1,(DLGPROC)&LAB_00424700,param_2);
  return;
}



undefined4 FUN_00424760(HWND param_1,undefined4 param_2,UINT *param_3)

{
  HWND hDlg;
  UINT *dwNewLong;
  HWND pHVar1;
  WPARAM WVar2;
  LPCSTR pCVar3;

  dwNewLong = param_3;
  hDlg = param_1;
  FUN_00425820(param_1);
  pHVar1 = GetDlgItem(param_1,0x406);
  param_1 = (HWND)0x0;
  if (*DAT_0050b5ac != 0) {
    param_3 = (UINT *)0x0;
    do {
      if (*(int *)(DAT_0050b5ac[1] + (int)param_3 + 0x104) == 1) {
        FUN_0049eb80(&DAT_00ecbc20,&DAT_004b2304,DAT_0050b5ac[1] + (int)param_3 + 0x80);
        WVar2 = SendMessageA(pHVar1,0x143,0,0xecbc20);
        SendMessageA(pHVar1,0x151,WVar2,(LPARAM)param_1);
        if (param_1 == (HWND)dwNewLong[4]) {
          SendMessageA(pHVar1,0x14e,WVar2,0);
        }
      }
      param_1 = (HWND)((int)param_1 + 1);
      param_3 = (UINT *)((int)param_3 + 0x2b4);
    } while (param_1 < *DAT_0050b5ac);
  }
  pHVar1 = GetDlgItem(hDlg,0x3f0);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d84);
  SendMessageA(pHVar1,0x151,WVar2,1);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d78);
  SendMessageA(pHVar1,0x151,WVar2,2);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d70);
  SendMessageA(pHVar1,0x151,WVar2,3);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d68);
  SendMessageA(pHVar1,0x151,WVar2,4);
  SendMessageA(pHVar1,0x14e,WVar2,0);
  pHVar1 = GetDlgItem(hDlg,0x3f1);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d60);
  SendMessageA(pHVar1,0x151,WVar2,1);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d5c);
  SendMessageA(pHVar1,0x151,WVar2,0);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d54);
  SendMessageA(pHVar1,0x151,WVar2,2);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d4c);
  SendMessageA(pHVar1,0x151,WVar2,3);
  SendMessageA(pHVar1,0x14e,WVar2,0);
  pHVar1 = GetDlgItem(hDlg,0x3f4);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d60);
  SendMessageA(pHVar1,0x151,WVar2,0);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d40);
  SendMessageA(pHVar1,0x14e,WVar2,0);
  SendMessageA(pHVar1,0x151,WVar2,1);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d34);
  SendMessageA(pHVar1,0x151,WVar2,2);
  FUN_00424e50(hDlg,dwNewLong);
  SetWindowLongA(hDlg,8,(LONG)dwNewLong);
  CheckDlgButton(hDlg,0x3ea,*dwNewLong);
  CheckDlgButton(hDlg,0x3ee,dwNewLong[1]);
  CheckDlgButton(hDlg,0x3ef,dwNewLong[2]);
  CheckDlgButton(hDlg,0x3f5,dwNewLong[3]);
  pCVar3 = (LPCSTR)FUN_00421360(s__MONDOTEXT_H_0525_Racer_Display_S_004b7d08);
  SetDlgItemTextA(hDlg,0x65,pCVar3);
  pCVar3 = (LPCSTR)FUN_00421360(s__MONDOTEXT_H_0526_Graphics_Hardw_004b7ce4);
  SetDlgItemTextA(hDlg,0x408,pCVar3);
  pCVar3 = (LPCSTR)FUN_00421360(s__MONDOTEXT_H_0527_3D_Device_004b7cc8);
  SetDlgItemTextA(hDlg,0x409,pCVar3);
  pCVar3 = (LPCSTR)FUN_00421360(s__MONDOTEXT_H_0528_Display_Mode_004b7ca8);
  SetDlgItemTextA(hDlg,0x40a,pCVar3);
  pCVar3 = (LPCSTR)FUN_00421360(s__MONDOTEXT_H_0529__Accept_004b7c8c);
  SetDlgItemTextA(hDlg,1,pCVar3);
  pCVar3 = (LPCSTR)FUN_00421360(s__MONDOTEXT_H_0530__Cancel_004b7c70);
  SetDlgItemTextA(hDlg,2,pCVar3);
  return 1;
}



void FUN_00424a90(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  HWND pHVar3;
  WPARAM WVar4;
  uint uVar5;
  UINT UVar6;
  OLECHAR aOStack_208 [130];
  CHAR aCStack_104 [260];

  puVar2 = (uint *)GetWindowLongA(param_1,8);
  if (0x3e9 < param_2) {
    if (param_2 == 0x405) {
      if (param_4 == 1) {
        pHVar3 = GetDlgItem(param_1,0x405);
        WVar4 = SendMessageA(pHVar3,0x147,0,0);
        uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
        puVar2[5] = uVar5;
      }
    }
    else if (param_2 == 0x406) {
      if (param_4 == 1) {
        pHVar3 = GetDlgItem(param_1,0x406);
        WVar4 = SendMessageA(pHVar3,0x147,0,0);
        uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
        puVar2[4] = uVar5;
        FUN_00424e50(param_1,puVar2);
        return;
      }
    }
    else if ((param_2 == 0x407) && (param_4 == 1)) {
      pHVar3 = GetDlgItem(param_1,0x407);
      WVar4 = SendMessageA(pHVar3,0x147,0,0);
      uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
      puVar2[6] = uVar5;
      return;
    }
    return;
  }
  if (param_2 == 0x3e9) {
    if (param_4 != 2) {
      return;
    }
    param_2 = 1;
  }
  else if (param_2 != 1) {
    if (param_2 != 2) {
      return;
    }
    param_2 = 2;
    goto LAB_00424d42;
  }
  pHVar3 = GetDlgItem(param_1,0x407);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
  puVar2[6] = uVar5;
  pHVar3 = GetDlgItem(param_1,0x405);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
  puVar2[5] = uVar5;
  pHVar3 = GetDlgItem(param_1,0x3f0);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
  puVar2[8] = uVar5;
  if (uVar5 == 2) {
    puVar2[10] = 1;
  }
  pHVar3 = GetDlgItem(param_1,0x3f1);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
  puVar2[9] = uVar5;
  pHVar3 = GetDlgItem(param_1,0x3f4);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
  puVar2[7] = uVar5;
  iVar1 = *(int *)(DAT_0050b5ac + 4) + puVar2[4] * 0x2b4;
  FUN_0049d250(s_Display_004b7c20,iVar1 + 0x80);
  FUN_0049d250(s_3D_Device_004b7c14,
               *(int *)(*(int *)(DAT_0050b5ac + 4) + 0x2b0 + puVar2[4] * 0x2b4) + 0xb4 +
               puVar2[6] * 0x368);
  FUN_0049d100(s_Display_Width_004b7c04,
               *(undefined4 *)(puVar2[5] * 0x50 + 4 + *(int *)(iVar1 + 0x2a8)));
  FUN_0049d100(s_Display_Height_004b7bf4,
               *(undefined4 *)(puVar2[5] * 0x50 + 8 + *(int *)(iVar1 + 0x2a8)));
  StringFromGUID2((GUID *)(*(int *)(DAT_0050b5ac + 4) + 0x294 + puVar2[4] * 0x2b4),aOStack_208,0x104
                 );
  WideCharToMultiByte(0,0,aOStack_208,-1,aCStack_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  FUN_0049d250(&DAT_004b7d90,aCStack_104);
  UVar6 = IsDlgButtonChecked(param_1,0x3ea);
  *puVar2 = (uint)(UVar6 == 1);
  UVar6 = IsDlgButtonChecked(param_1,0x3ee);
  puVar2[1] = (uint)(UVar6 == 1);
  UVar6 = IsDlgButtonChecked(param_1,0x3ef);
  puVar2[2] = (uint)(UVar6 == 1);
  UVar6 = IsDlgButtonChecked(param_1,0x3f5);
  puVar2[3] = (uint)(UVar6 == 1);
LAB_00424d42:
  EndDialog(param_1,param_2);
  FUN_0049ea40(0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00424e50(HWND param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  HWND hWnd;
  HWND hWnd_00;
  WPARAM WVar4;
  uint lParam;
  int iVar5;

  hWnd = GetDlgItem(param_1,0x405);
  hWnd_00 = GetDlgItem(param_1,0x407);
  lParam = 0;
  SendMessageA(hWnd,0x14b,0,0);
  SendMessageA(hWnd_00,0x14b,0,0);
  bVar3 = false;
  iVar1 = *(int *)(DAT_0050b5ac + 4) + *(int *)(param_2 + 0x10) * 0x2b4;
  if (*(int *)(*(int *)(DAT_0050b5ac + 4) + 0x2ac + *(int *)(param_2 + 0x10) * 0x2b4) != 0) {
    param_1 = (HWND)0x0;
    do {
      FUN_0049eb80(&DAT_00ecbc20,&DAT_004b2304,(int)param_1 + 0xb4 + *(int *)(iVar1 + 0x2b0));
      WVar4 = SendMessageA(hWnd_00,0x143,0,0xecbc20);
      SendMessageA(hWnd_00,0x151,WVar4,lParam);
      if (*(uint *)(param_2 + 0x18) == lParam) {
        SendMessageA(hWnd_00,0x14e,WVar4,0);
        bVar3 = true;
      }
      lParam = lParam + 1;
      param_1 = (HWND)((int)param_1 + 0x368);
    } while (lParam < *(uint *)(iVar1 + 0x2ac));
  }
  if (!bVar3) {
    SendMessageA(hWnd_00,0x14e,0,0);
  }
  _DAT_004eb51c = 0x10;
  iVar5 = 0;
  param_1 = (HWND)0x0;
  if (*(int *)(*(int *)(DAT_0050b5ac + 4) + 0x2a4 + *(int *)(param_2 + 0x10) * 0x2b4) != 0) {
    do {
      iVar2 = iVar5 + *(int *)(iVar1 + 0x2a8);
      FUN_0049eb80(&DAT_00ecbc20,s__dx_d__dbpp_004b7d98,*(undefined4 *)(iVar2 + 4),
                   *(undefined4 *)(iVar2 + 8),
                   *(undefined4 *)(iVar5 + 0x1c + *(int *)(iVar1 + 0x2a8)));
      if (*(int *)(iVar5 + 0x1c + *(int *)(iVar1 + 0x2a8)) == 0x10) {
        WVar4 = SendMessageA(hWnd,0x143,0,0xecbc20);
        SendMessageA(hWnd,0x151,WVar4,(LPARAM)param_1);
        if ((*(int *)(iVar5 + 4 + *(int *)(iVar1 + 0x2a8)) == DAT_004eb504) &&
           (*(int *)(iVar5 + *(int *)(iVar1 + 0x2a8) + 8) == DAT_004eb508)) {
          SendMessageA(hWnd,0x14e,WVar4,0);
        }
      }
      param_1 = (HWND)((int)param_1 + 1);
      iVar5 = iVar5 + 0x50;
    } while (param_1 < *(uint *)(*(int *)(DAT_0050b5ac + 4) + 0x2a4 +
                                *(int *)(param_2 + 0x10) * 0x2b4));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004252a0(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined auStack_100 [256];

  uVar1 = DAT_004b2940;
  FUN_004804b0(1);
  if ((DAT_00ec8dac < 0x280) || (DAT_00ec8db0 < 0x1e0)) {
    iVar3 = (**(code **)(*DAT_0052e638 + 0x18))(DAT_0052e638,&DAT_004eb484,&DAT_004eb480,0);
    if (iVar3 != 0) {
      DAT_0050b5bc = 1;
    }
  }
  else {
    DAT_0050b5bc = 1;
  }
  uVar2 = DAT_00ec8db0;
  uVar8 = DAT_00ec8dac;
  if (DAT_0050b5bc == 0) {
    _DAT_00e9f2f0 = 0;
    _DAT_00e9f2f4 = 0;
    uVar7 = 0;
    uVar6 = 0;
    _DAT_00e9f2fc = 0x1e0;
    _DAT_00e9f2f8 = 0x280;
    if (0.75 <= (float)(ulonglong)DAT_00ec8db0 / (float)(ulonglong)DAT_00ec8dac) {
      uVar5 = __ftol();
      uVar6 = uVar2 - uVar5 >> 1;
    }
    else {
      uVar4 = __ftol();
      uVar7 = uVar8 - uVar4 >> 1;
      uVar5 = uVar2;
      uVar8 = uVar4;
    }
    _DAT_00e9f358 = uVar8 + uVar7;
    _DAT_00e9f35c = uVar5 + uVar6;
    _DAT_00e9f350 = uVar7;
    _DAT_00e9f354 = uVar6;
  }
  SmushStartup(DAT_0050b59c,0);
  if (DAT_0050b5c4 == 0) {
    if (DAT_004b6d20 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = ((uint)DAT_00e364a6 * 0x7f) / 0xff;
    }
  }
  else {
    uVar8 = 0x7f;
  }
  SmushSetVolume(uVar8);
  FUN_00488410(&DAT_00ec8da0,0,0);
  FUN_00489ab0();
  if (DAT_0050b560 == 0) {
    FUN_00488410(&DAT_00ec8da0,0,0);
  }
  DAT_004b2940 = 0;
  FUN_00425500();
  FUN_0049eb80(auStack_100,s__s_s_s_004b3e84,&DAT_00e9f300,s___data_anims__004b7da4,param_1);
  SmushPlay(auStack_100,0xf,0,0,0,0x280,0x1e0,0xffffffff,0,&LAB_00425070,1,1000000,1000000);
  DAT_004b2940 = uVar1;
  SmushShutdown();
  if (DAT_0050b5bc == 0) {
    (**(code **)(*DAT_004eb480 + 8))(DAT_004eb480);
  }
  FUN_004804b0(0);
  return 1;
}



undefined4 FUN_00425500(void)

{
  char cVar1;
  DWORD dwLen;
  LPCVOID lpData;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *puVar13;
  ushort *local_38c;
  uint local_388;
  DWORD local_384;
  char acStack_380 [128];
  undefined auStack_300 [128];
  CHAR aCStack_280 [128];
  undefined4 auStack_200 [4];
  undefined4 local_1ef;
  CHAR local_100 [256];

  puVar8 = &local_1ef;
  for (iVar5 = 0x3b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined *)((int)puVar8 + 2) = 0;
  if (DAT_004b79fc == 0) {
    FUN_0049eb80(&DAT_00e9f300,&DAT_004d55cc);
    return 0;
  }
  dwLen = GetFileVersionInfoSizeA(s_swep1rcr_exe_004b7f24,&local_384);
  if (dwLen != 0) {
    lpData = (LPCVOID)FUN_0049f270(dwLen);
    BVar2 = GetFileVersionInfoA(s_swep1rcr_exe_004b7f24,0,dwLen,lpData);
    if ((BVar2 != 0) &&
       (BVar2 = VerQueryValueA(lpData,s__VarFileInfo_Translation_004b7f08,&local_38c,&local_388),
       BVar2 != 0)) {
      wsprintfA(local_100,s__StringFileInfo__04X_04X_FileVer_004b7ee0,(uint)*local_38c,
                (uint)local_38c[1]);
      BVar2 = VerQueryValueA(lpData,local_100,&local_38c,&local_388);
      if (BVar2 != 0) {
        uVar6 = 0xffffffff;
        do {
          puVar9 = local_38c;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          puVar9 = (ushort *)((int)local_38c + 1);
          cVar1 = *(char *)local_38c;
          local_38c = puVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        puVar8 = (undefined4 *)((int)puVar9 - uVar6);
        puVar13 = auStack_200;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar13 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined *)puVar13 = *(undefined *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
      }
    }
    FUN_0049f200(lpData);
  }
  iVar5 = FUN_0049d2e0(s_CD_Path_004b7ed8,&DAT_00e9f300,0x50,&DAT_004d55cc);
  if (iVar5 == 0) {
    GetDriveTypeA(&DAT_00e9f300);
    FUN_0049eb80(auStack_300,s__s__swheel_map_004b7ec0,&DAT_00e9f300,
                 s___data_config_default__004b3e8c);
    FUN_0049f1e0(auStack_300,&DAT_004b7ebc);
    FUN_0049eb80(acStack_380,s_racer_s_004b7e4c,s_100_0_004b7e54);
    do {
      GetVolumeInformationA
                (&DAT_00e9f300,aCStack_280,0x80,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPSTR)0x0,0)
      ;
      uVar6 = 0xffffffff;
      pcVar11 = acStack_380;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      _strncmp(aCStack_280,acStack_380,~uVar6 - 2);
      FUN_0049eb80(auStack_300,s__s__swheel_map_004b7ec0,&DAT_00e9f300,
                   s___data_config_default__004b3e8c);
      FUN_0049eb80(auStack_200,&DAT_004b2524,&DAT_00e9f300,s__Data_Anims_PlanetG_znm_004b7e2c);
      iVar5 = FUN_004a0590(auStack_200,0);
      if (iVar5 != -1) {
        iVar4 = FUN_004a04e0(iVar5);
        if (iVar4 == 0x11214e7) {
          FUN_004a03e0(iVar5);
          uVar6 = 0xffffffff;
          pcVar11 = &DAT_004b7db4;
          goto code_r0x004257ed;
        }
        FUN_004a03e0(iVar5);
      }
      FUN_0049eb80(local_100,s_Error__Please_insert_CD_ROM___s__004b7dc8,acStack_380);
      iVar5 = MessageBoxA(DAT_0050b59c,local_100,s_CD_ERROR_004b7dbc,0x31);
    } while (iVar5 != 2);
  }
  else {
    MessageBoxA(DAT_0050b59c,s_Error__Please_reinstall_program__004b7e5c,s_BAD_INSTALL_004b7eb0,0x10
               );
  }
  FUN_004240d0();
  uVar3 = FUN_0049ea40(0);
  return uVar3;
  while( true ) {
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar10;
    if (cVar1 == '\0') break;
code_r0x004257ed:
    pcVar10 = pcVar11;
    if (uVar6 == 0) break;
  }
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar11 = &DAT_00e9f300;
  do {
    pcVar12 = pcVar11;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  puVar8 = (undefined4 *)(pcVar10 + -uVar6);
  puVar13 = (undefined4 *)(pcVar12 + -1);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar13 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined *)puVar13 = *(undefined *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  return 0;
}



undefined4 FUN_00425820(HWND param_1)

{
  HWND hWnd;
  int iVar1;
  int iVar2;
  tagRECT *lpRect;
  tagRECT local_30;
  tagRECT tStack_20;
  tagRECT local_10;

  GetWindowRect(param_1,&local_30);
  GetClientRect(param_1,&local_10);
  iVar1 = local_30.right - local_30.left;
  lpRect = &tStack_20;
  iVar2 = local_30.bottom - local_30.top;
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,lpRect);
  local_30.top = (((tStack_20.bottom - local_30.bottom) - local_30.top) - tStack_20.top) / 2;
  local_30.left = (((tStack_20.right - local_30.right) - local_30.left) - tStack_20.left) / 2;
  local_30.bottom = iVar2 + local_30.top;
  local_30.right = iVar1 + local_30.left;
  MoveWindow(param_1,local_30.left,local_30.top,local_30.right - local_30.left,
             local_30.bottom - local_30.top,1);
  return 1;
}



void FUN_004258e0(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_00e9edc0;
  for (iVar1 = 300; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0050b5ec = 0;
  return;
}



void FUN_00425900(int param_1)

{
  ushort *puVar1;
  undefined4 uVar2;

  (&DAT_00e9edc0)[DAT_0050b5ec] = param_1;
  DAT_0050b5ec = DAT_0050b5ec + 1;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((*(uint *)(param_1 + 0x100) & 0x20) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x108);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10c);
  }
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar2;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if ((((byte)*(uint *)(param_1 + 0x100) & 0xf) == 8) && (*(int *)(param_1 + 0x124) != 0)) {
    puVar1 = (ushort *)(*(int *)(param_1 + 0x124) + 0xc);
    *puVar1 = *puVar1 & 0xfff7;
  }
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 0x1000000;
  return;
}



float10 FUN_00425980(int param_1,float param_2,int param_3)

{
  float10 fVar1;

  fVar1 = (float10)*(float *)(*(int *)(param_1 + 0x11c) + param_3 * 4);
  return ((float10)param_2 - fVar1) /
         ((float10)*(float *)(*(int *)(param_1 + 0x11c) + 4 + param_3 * 4) - fVar1);
}



void FUN_004259b0(float *param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;

  iVar2 = param_4 * 4 + 4;
  if (*(float *)(*(int *)(param_2 + 0x11c) + iVar2) < param_3) {
    *param_1 = *(float *)(*(int *)(param_2 + 0x120) + iVar2);
    return;
  }
  iVar1 = param_4 * 4;
  if (param_3 <= *(float *)(iVar1 + *(int *)(param_2 + 0x11c))) {
    *param_1 = *(float *)(*(int *)(param_2 + 0x120) + iVar1);
    return;
  }
  fVar3 = (float10)FUN_00425980(param_2,param_3,param_4);
  *param_1 = (1.0 - (float)fVar3) * *(float *)(iVar1 + *(int *)(param_2 + 0x120)) +
             *(float *)(*(int *)(param_2 + 0x120) + iVar2) * (float)fVar3;
  return;
}



void FUN_00425a60(float *param_1,int param_2,float param_3,int param_4)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_8;
  float local_4;

  if (*(float *)(*(int *)(param_2 + 0x11c) + 4 + param_4 * 4) < param_3) {
    *param_1 = *(float *)(*(int *)(param_2 + 0x120) + (param_4 * 3 + 3) * 4);
    param_1[1] = *(float *)(*(int *)(param_2 + 0x120) + 0x10 + param_4 * 0xc);
    param_1[2] = *(float *)(*(int *)(param_2 + 0x120) + 0x14 + param_4 * 0xc);
    return;
  }
  if (param_3 <= *(float *)(*(int *)(param_2 + 0x11c) + param_4 * 4)) {
    param_4 = param_4 * 0xc;
    *param_1 = *(float *)(*(int *)(param_2 + 0x120) + param_4);
    param_1[1] = *(float *)(*(int *)(param_2 + 0x120) + 4 + param_4);
    param_1[2] = *(float *)(*(int *)(param_2 + 0x120) + 8 + param_4);
    return;
  }
  fVar4 = (float10)FUN_00425980(param_2,param_3,param_4);
  fVar2 = (float)fVar4;
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x120) + param_4 * 0xc);
  local_18 = *puVar1;
  local_14 = puVar1[1];
  local_10 = puVar1[2];
  local_8 = (float)puVar1[4];
  fVar3 = *(float *)(*(int *)(param_2 + 0x120) + (param_4 * 3 + 3) * 4);
  local_4 = (float)puVar1[5];
  param_1[1] = fVar2 * local_8;
  param_1[2] = fVar2 * local_4;
  *param_1 = fVar3 * fVar2;
  FUN_0042fa80(param_1,param_1,1.0 - fVar2,&local_18);
  return;
}



void FUN_00425ba0(undefined4 *param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_30 [16];
  undefined local_20 [16];
  undefined local_10 [16];

  iVar1 = param_4 + 1;
  if (*(float *)(*(int *)(param_2 + 0x11c) + iVar1 * 4) < param_3) {
    param_4 = param_4 * 0x10;
    *param_1 = *(undefined4 *)(iVar1 * 0x10 + *(int *)(param_2 + 0x120));
    param_1[1] = *(undefined4 *)(*(int *)(param_2 + 0x120) + 0x14 + param_4);
    param_1[2] = *(undefined4 *)(*(int *)(param_2 + 0x120) + 0x18 + param_4);
    param_1[3] = *(undefined4 *)(*(int *)(param_2 + 0x120) + 0x1c + param_4);
    return;
  }
  if (param_3 <= *(float *)(*(int *)(param_2 + 0x11c) + param_4 * 4)) {
    param_4 = param_4 * 0x10;
    *param_1 = *(undefined4 *)(*(int *)(param_2 + 0x120) + param_4);
    param_1[1] = *(undefined4 *)(*(int *)(param_2 + 0x120) + 4 + param_4);
    param_1[2] = *(undefined4 *)(*(int *)(param_2 + 0x120) + 8 + param_4);
    param_1[3] = *(undefined4 *)(*(int *)(param_2 + 0x120) + 0xc + param_4);
    return;
  }
  fVar4 = (float10)FUN_00425980(param_2,param_3,param_4);
  iVar3 = *(int *)(param_2 + 0x120);
  local_50 = *(undefined4 *)(param_4 * 0x10 + iVar3);
  iVar2 = param_4 * 0x10 + iVar3;
  local_4c = *(undefined4 *)(iVar2 + 4);
  local_48 = *(undefined4 *)(iVar2 + 8);
  local_44 = *(undefined4 *)(iVar2 + 0xc);
  local_40 = *(undefined4 *)(iVar1 * 0x10 + iVar3);
  local_3c = *(undefined4 *)(iVar2 + 0x14);
  local_38 = *(undefined4 *)(iVar2 + 0x18);
  local_34 = *(undefined4 *)(iVar2 + 0x1c);
  FUN_00481620(local_20,&local_50);
  FUN_00481620(local_30,&local_40);
  FUN_004813a0(local_20,local_30,(float)fVar4,local_10);
  FUN_00481520(param_1,local_10);
  return;
}



void FUN_00425d10(int param_1)

{
  float local_18;
  float local_14;
  float local_10;
  undefined local_c [12];

  FUN_00425a60(&local_18,param_1,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118));
  if ((*(uint *)(param_1 + 0x100) & 0x20000000) != 0) {
    FUN_00425a60(local_c,param_1,(float)*(int *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xe8));
    local_18 = *(float *)(param_1 + 0xe4) * local_18;
    local_14 = *(float *)(param_1 + 0xe4) * local_14;
    local_10 = *(float *)(param_1 + 0xe4) * local_10;
    FUN_0042fa80(&local_18,&local_18,1.0 - *(float *)(param_1 + 0xe4),local_c);
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_00431620(*(int *)(param_1 + 0x124),local_18,local_14,local_10);
  }
  return;
}



void FUN_00425de0(int param_1)

{
  float local_b0;
  float local_ac;
  float local_a8;
  undefined local_a4 [12];
  undefined local_98 [12];
  undefined local_8c [12];
  undefined local_80 [64];
  undefined local_40 [64];

  FUN_00425a60(&local_b0,param_1,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118));
  if ((*(uint *)(param_1 + 0x100) & 0x20000000) != 0) {
    FUN_00425a60(local_98,param_1,(float)*(int *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xe8));
    local_b0 = *(float *)(param_1 + 0xe4) * local_b0;
    local_ac = *(float *)(param_1 + 0xe4) * local_ac;
    local_a8 = *(float *)(param_1 + 0xe4) * local_a8;
    FUN_0042fa80(&local_b0,&local_b0,1.0 - *(float *)(param_1 + 0xe4),local_98);
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_004316a0(*(int *)(param_1 + 0x124),local_80);
    FUN_00480730(local_80,local_a4,local_40,local_8c);
    FUN_00480850(local_80,local_a4,local_40,&local_b0);
    FUN_00431640(*(undefined4 *)(param_1 + 0x124),local_80);
  }
  return;
}



void FUN_00425f00(int param_1)

{
  int iVar1;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined local_d8 [12];
  undefined local_cc [12];
  undefined local_c0 [16];
  undefined local_b0 [16];
  undefined local_a0 [16];
  undefined local_90 [16];
  undefined local_80 [64];
  undefined local_40 [64];

  FUN_00425ba0(&local_e8,param_1,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118));
  if ((*(uint *)(param_1 + 0x100) & 0x20000000) != 0) {
    FUN_00425ba0(local_a0,param_1,(float)*(int *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xe8));
    FUN_00481620(local_90,local_a0);
    FUN_00481620(local_c0,&local_e8);
    FUN_004813a0(local_90,local_c0,*(undefined4 *)(param_1 + 0xe4),local_b0);
    FUN_00481520(&local_e8,local_b0);
  }
  iVar1 = *(int *)(param_1 + 0x124);
  if (iVar1 != 0) {
    if ((local_dc < 0.0001) && (-0.0001 < local_dc)) {
      FUN_004315f0(iVar1,0,0,0);
      return;
    }
    FUN_004316a0(iVar1,local_80);
    FUN_00480730(local_80,local_d8,local_40,local_cc);
    FUN_00431150(local_40,local_dc,local_e8,local_e4,local_e0);
    FUN_00480850(local_80,local_d8,local_40,local_cc);
    FUN_00431640(*(undefined4 *)(param_1 + 0x124),local_80);
  }
  return;
}



void FUN_00426080(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;

  iVar2 = *(int *)(param_1 + 0x118);
  if (*(float *)(param_1 + 0x114) <= *(float *)(*(int *)(param_1 + 0x11c) + 4 + iVar2 * 4)) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x120) + iVar2 * 4);
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x120) + iVar2 * 4 + 4);
  }
  piVar3 = *(int **)(param_1 + 0x124);
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    while (iVar2 != 0) {
      FUN_00431860(iVar2,2,uVar4);
      piVar1 = piVar3 + 1;
      piVar3 = piVar3 + 1;
      iVar2 = *piVar1;
    }
  }
  return;
}



void FUN_004260f0(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  short sVar4;
  short sVar5;
  float local_4;

  fVar3 = param_1;
  FUN_004259b0(&param_1,param_1,*(undefined4 *)((int)param_1 + 0x114),
               *(undefined4 *)((int)param_1 + 0x118));
  if ((*(uint *)((int)fVar3 + 0x100) & 0x20000000) != 0) {
    FUN_00425a60(&local_4,fVar3,(float)*(int *)((int)fVar3 + 0xec),
                 *(undefined4 *)((int)fVar3 + 0xe8));
    param_1 = (1.0 - *(float *)((int)fVar3 + 0xe4)) * local_4 +
              param_1 * *(float *)((int)fVar3 + 0xe4);
  }
  iVar1 = *(int *)((int)fVar3 + 0x124);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 8), iVar2 != 0)) {
    if (param_2 == 0) {
      param_2 = (int)*(short *)(iVar2 + 4);
      sVar4 = __ftol();
      *(short *)(iVar1 + 4) = sVar4;
      sVar5 = *(short *)(iVar2 + 4);
      if (sVar5 < sVar4) {
        do {
          *(short *)(iVar1 + 4) = *(short *)(iVar1 + 4) - sVar5;
          sVar5 = *(short *)(iVar2 + 4);
        } while (sVar5 < *(short *)(iVar1 + 4));
      }
      if (*(short *)(iVar1 + 4) < 0) {
        do {
          *(short *)(iVar1 + 4) = *(short *)(iVar1 + 4) + *(short *)(iVar2 + 4);
        } while (*(short *)(iVar1 + 4) < 0);
        return;
      }
    }
    else {
      param_2 = (int)*(short *)(iVar2 + 6);
      sVar4 = __ftol();
      *(short *)(iVar1 + 6) = sVar4;
      sVar5 = *(short *)(iVar2 + 6);
      if (sVar5 < sVar4) {
        do {
          *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) - sVar5;
          sVar5 = *(short *)(iVar2 + 6);
        } while (sVar5 < *(short *)(iVar1 + 6));
      }
      sVar5 = *(short *)(iVar1 + 6);
      while (sVar5 < 0) {
        *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + *(short *)(iVar2 + 6);
        sVar5 = *(short *)(iVar1 + 6);
      }
    }
  }
  return;
}



int FUN_00426220(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;

  iVar3 = *(int *)(param_1 + 0x104);
  pfVar1 = *(float **)(param_1 + 0x11c);
  if (pfVar1[iVar3 + -1] < *(float *)(param_1 + 0x114)) {
    return iVar3 + -2;
  }
  if (*(float *)(param_1 + 0x114) < *pfVar1) {
    return 0;
  }
  iVar3 = iVar3 + -2;
  pfVar2 = pfVar1 + iVar3;
  if (*(float *)(param_1 + 0x114) < pfVar1[iVar3]) {
    do {
      pfVar1 = pfVar2 + -1;
      pfVar2 = pfVar2 + -1;
      iVar3 = iVar3 + -1;
    } while (*(float *)(param_1 + 0x114) < *pfVar1);
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00426290(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;

  fVar1 = *(float *)(param_1 + 0x114) - param_2;
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 0x20000000;
  *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xdc);
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  fVar2 = (float)_DAT_00e22a40;
  *(float *)(param_1 + 0x114) = param_2;
  *(float *)(param_1 + 0xe4) = (fVar1 - fVar2) / *(float *)(param_1 + 0xdc);
  uVar3 = FUN_00426220(param_1);
  *(undefined4 *)(param_1 + 0xe8) = uVar3;
  uVar3 = __ftol();
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  *(undefined4 *)(param_1 + 0x114) = param_3;
  uVar3 = FUN_00426220(param_1);
  *(undefined4 *)(param_1 + 0x118) = uVar3;
  FUN_00426330(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00426330(float param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  float local_8;
  float local_4;

  fVar4 = param_1;
  uVar1 = *(uint *)((int)param_1 + 0x100);
  *(uint *)((int)param_1 + 0x100) = uVar1 & 0xbfffffff;
  if ((uVar1 & 0x1000000) == 0) {
    if ((uVar1 & 0x20000000) == 0) {
      fVar3 = *(float *)((int)param_1 + 0x110) * _DAT_004b7fa8 * (float)_DAT_00e22a40 +
              *(float *)((int)param_1 + 0x114);
    }
    else {
      *(uint *)((int)param_1 + 0x100) = uVar1 & 0xbfffffff | 0x40000000;
      fVar3 = (float)_DAT_00e22a40 / *(float *)((int)param_1 + 0xe0) +
              *(float *)((int)param_1 + 0xe4);
      *(float *)((int)param_1 + 0xe4) = fVar3;
      if (fVar3 < 1.0) goto LAB_004263ed;
      *(uint *)((int)param_1 + 0x100) = uVar1 & 0x9fffffff | 0x40000000;
      fVar3 = (*(float *)((int)param_1 + 0xe4) - 1.0) * *(float *)((int)param_1 + 0x110) *
              _DAT_004b7fa8 * *(float *)((int)param_1 + 0xe0) + *(float *)((int)param_1 + 0x114);
    }
    *(float *)((int)param_1 + 0x114) = fVar3;
  }
  else {
    *(uint *)((int)param_1 + 0x100) = uVar1 & 0xbeffffff;
  }
LAB_004263ed:
  uVar1 = *(uint *)((int)param_1 + 0x100);
  if ((uVar1 & 0x6000000) != 0) {
    if ((*(float *)((int)param_1 + 0x114) < *(float *)((int)param_1 + 0xf0)) ||
       (*(float *)((int)param_1 + 0xf4) < *(float *)((int)param_1 + 0x114))) {
      param_1 = *(float *)((int)param_1 + 0xfc);
      local_8 = 0.0;
      local_4 = param_1;
    }
    else if ((uVar1 & 0x2000000) == 0) {
      *(uint *)((int)param_1 + 0x100) = uVar1 & 0xfbffffef;
    }
    else {
      *(uint *)((int)param_1 + 0x100) = uVar1 & 0xfdffffff | 0x10;
    }
  }
  uVar1 = *(uint *)((int)fVar4 + 0x100);
  if ((uVar1 & 0x6000000) == 0) {
    param_1 = *(float *)((int)fVar4 + 0xf4);
    local_8 = *(float *)((int)fVar4 + 0xf0);
    local_4 = *(float *)((int)fVar4 + 0xf8);
  }
  if (param_1 < *(float *)((int)fVar4 + 0x114)) {
    if ((uVar1 & 0x10) == 0) {
      *(float *)((int)fVar4 + 0x114) = param_1;
      uVar5 = FUN_00426220(fVar4);
      *(undefined4 *)((int)fVar4 + 0x118) = uVar5;
      return;
    }
    if ((uVar1 & 0x40) == 0) {
      do {
        fVar3 = *(float *)((int)fVar4 + 0x114) - local_4;
        *(float *)((int)fVar4 + 0x114) = fVar3;
        *(uint *)((int)fVar4 + 0x100) = *(uint *)((int)fVar4 + 0x100) | 0x40000000;
      } while (param_1 < fVar3);
      uVar5 = FUN_00426220(fVar4);
      *(undefined4 *)((int)fVar4 + 0x118) = uVar5;
      return;
    }
    FUN_00426290(fVar4,param_1,local_8);
    uVar5 = FUN_00426220(fVar4);
    *(undefined4 *)((int)fVar4 + 0x118) = uVar5;
    return;
  }
  if (*(float *)((int)fVar4 + 0x114) < local_8) {
    if ((uVar1 & 0x10) == 0) {
      *(float *)((int)fVar4 + 0x114) = local_8;
      uVar5 = FUN_00426220(fVar4);
      *(undefined4 *)((int)fVar4 + 0x118) = uVar5;
      return;
    }
    if ((uVar1 & 0x40) == 0) {
      do {
        fVar3 = local_4 + *(float *)((int)fVar4 + 0x114);
        *(float *)((int)fVar4 + 0x114) = fVar3;
        *(uint *)((int)fVar4 + 0x100) = *(uint *)((int)fVar4 + 0x100) | 0x40000000;
      } while (fVar3 < local_8);
      uVar5 = FUN_00426220(fVar4);
      *(undefined4 *)((int)fVar4 + 0x118) = uVar5;
      return;
    }
    FUN_00426290(fVar4,local_8,param_1);
    uVar5 = FUN_00426220(fVar4);
    *(undefined4 *)((int)fVar4 + 0x118) = uVar5;
    return;
  }
  iVar2 = *(int *)((int)fVar4 + 0x11c);
  if (*(float *)((int)fVar4 + 0x114) < *(float *)(iVar2 + *(int *)((int)fVar4 + 0x118) * 4)) {
    do {
      if (*(int *)((int)fVar4 + 0x118) < 1) break;
      iVar6 = *(int *)((int)fVar4 + 0x118) + -1;
      *(int *)((int)fVar4 + 0x118) = iVar6;
    } while (*(float *)((int)fVar4 + 0x114) < *(float *)(iVar2 + iVar6 * 4));
  }
  if (*(float *)(iVar2 + 4 + *(int *)((int)fVar4 + 0x118) * 4) < *(float *)((int)fVar4 + 0x114)) {
    do {
      if (*(int *)((int)fVar4 + 0x104) + -2 <= *(int *)((int)fVar4 + 0x118)) {
        return;
      }
      iVar6 = *(int *)((int)fVar4 + 0x118) + 1;
      *(int *)((int)fVar4 + 0x118) = iVar6;
    } while (*(float *)(iVar2 + 4 + iVar6 * 4) < *(float *)((int)fVar4 + 0x114));
  }
  return;
}


#endif
