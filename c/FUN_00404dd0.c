#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404dd0(void)

{
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  int *piVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  int local_c;
  uint uStack_4;
  
  FUN_00485630();
  uVar13 = DAT_004b38ac;
  puVar17 = &DAT_004d5e80;
  for (uVar12 = DAT_004b38ac >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  DAT_00ec8820 = 0;
  for (uVar13 = uVar13 & 3; uVar12 = DAT_004b38b0, uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined *)puVar17 = 0;
    puVar17 = (undefined4 *)((int)puVar17 + 1);
  }
  puVar17 = &DAT_004d5e30;
  for (uVar13 = DAT_004b38b0 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined *)puVar17 = 0;
    puVar17 = (undefined4 *)((int)puVar17 + 1);
  }
  if ((DAT_004b2944 == 0) && (DAT_004d6b34 == 0)) {
    FUN_00405cf0(0);
  }
  else {
    FUN_00426910(0,0xffffffff);
    if (DAT_004d6b34 != 0) {
      _DAT_004d62d0 = DAT_00ec87c0;
      _DAT_004d62d4 = DAT_00ec87c4;
      _DAT_004d62d8 = _DAT_00ec87c8;
      _DAT_004d62dc = _DAT_00ec87cc;
      _DAT_004d62e0 = _DAT_00ec87d0;
      _DAT_004d62e4 = _DAT_00ec87d4;
      fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 3);
      if (fVar19 * (float10)_DAT_004b298c < (float10)_DAT_004ac30c) {
        fVar19 = (float10)_DAT_004ac30c;
      }
      else {
        fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 3);
        if ((float10)_DAT_004ac310 < fVar19 * (float10)_DAT_004b298c) {
          fVar19 = (float10)_DAT_004ac310;
        }
        else {
          fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 3);
          fVar19 = fVar19 * (float10)_DAT_004b298c;
        }
      }
      _DAT_00ec87cc = (float)fVar19;
      fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 4);
      if (fVar19 * (float10)_DAT_004b2990 < (float10)_DAT_004ac30c) {
        fVar19 = (float10)_DAT_004ac30c;
      }
      else {
        fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 4);
        if ((float10)_DAT_004ac310 < fVar19 * (float10)_DAT_004b2990) {
          fVar19 = (float10)_DAT_004ac310;
        }
        else {
          fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 4);
          fVar19 = fVar19 * (float10)_DAT_004b2990;
        }
      }
      _DAT_00ec87d0 = (float)fVar19;
      fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 5);
      if (fVar19 * (float10)_DAT_004b2994 < (float10)_DAT_004ac30c) {
        fVar19 = (float10)_DAT_004ac30c;
      }
      else {
        fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 5);
        if ((float10)_DAT_004ac310 < fVar19 * (float10)_DAT_004b2994) {
          fVar19 = (float10)_DAT_004ac310;
        }
        else {
          fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 5);
          fVar19 = fVar19 * (float10)_DAT_004b2994;
        }
      }
      _DAT_00ec87d4 = (float)fVar19;
    }
    fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6);
    if (fVar19 * (float10)DAT_004b2980 < (float10)_DAT_004ac30c) {
      fVar19 = (float10)_DAT_004ac30c;
    }
    else {
      fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6);
      if ((float10)_DAT_004ac310 < fVar19 * (float10)DAT_004b2980) {
        fVar19 = (float10)_DAT_004ac310;
      }
      else {
        fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6);
        fVar19 = fVar19 * (float10)DAT_004b2980;
      }
    }
    DAT_00ec87c0 = (float)fVar19;
    fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 1);
    if (fVar19 * (float10)_DAT_004b2984 < (float10)_DAT_004ac30c) {
      fVar19 = (float10)_DAT_004ac30c;
    }
    else {
      fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 1);
      if ((float10)_DAT_004ac310 < fVar19 * (float10)_DAT_004b2984) {
        fVar19 = (float10)_DAT_004ac310;
      }
      else {
        fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 1);
        fVar19 = fVar19 * (float10)_DAT_004b2984;
      }
    }
    DAT_00ec87c4 = (float)fVar19;
    fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 2);
    if (fVar19 * (float10)_DAT_004b2988 < (float10)_DAT_004ac30c) {
      fVar19 = (float10)_DAT_004ac30c;
    }
    else {
      fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 2);
      if ((float10)_DAT_004ac310 < fVar19 * (float10)_DAT_004b2988) {
        fVar19 = (float10)_DAT_004ac310;
      }
      else {
        fVar19 = (float10)FUN_004856e0(DAT_004d6b3c * 6 + 2);
        fVar19 = fVar19 * (float10)_DAT_004b2988;
      }
    }
    _DAT_00ec87c8 = (float)fVar19;
    pbVar18 = &DAT_004d5fc0;
    do {
      bVar1 = *pbVar18;
      iVar14 = *(int *)(pbVar18 + 8);
      iVar9 = *(int *)(pbVar18 + 4);
      if (bVar1 == 0xff) break;
      if ((bVar1 & 8) == 0) {
        if ((bVar1 & 4) != 0) {
          iVar11 = iVar9 + DAT_004d6b3c * 6;
          if ((bVar1 & 1) == 0) {
            if ((bVar1 & 2) != 0) {
              iVar10 = (-(uint)((&DAT_00ec8880)[iVar9] != 0) & 0xfffffffe) + 1;
              if ((bVar1 & 0x10) == 0) {
                if ((bVar1 & 0x20) == 0) {
                  iVar11 = FUN_00485840(iVar11,0);
                  if ((&DAT_00ec8880)[iVar9] == 0) {
                    if ((float)iVar11 == _DAT_004ac308) {
                      local_c = 0;
                    }
                    else {
LAB_00405c80:
                      local_c = 1;
                    }
                  }
                  else {
                    if ((float)iVar11 == _DAT_004ac308) goto LAB_00405c80;
                    local_c = 0;
                  }
                  fVar5 = (float)local_c;
                }
                else {
                  iVar9 = FUN_00408040(iVar11,iVar10,0,0x3f4ccccd);
                  fVar5 = (float)iVar9;
                }
              }
              else {
                iVar9 = FUN_00408040(iVar11,-iVar10,0,0x3f4ccccd);
                fVar5 = (float)iVar9;
              }
              if ((iVar14 == 2) && (fVar5 != _DAT_004ac308)) {
                DAT_00ec8820 = 1;
              }
              if ((fVar5 != _DAT_004ac308) ||
                 (local_c = 0, (float)(&DAT_004d5e80)[iVar14] != _DAT_004ac308)) {
                local_c = 1;
              }
              (&DAT_004d5e80)[iVar14] = (float)local_c;
            }
          }
          else {
            fVar19 = (float10)FUN_004856e0(iVar11);
            if (fVar19 * (float10)(&DAT_004b2980)[iVar9] < (float10)_DAT_004ac30c) {
              fVar19 = (float10)_DAT_004ac30c;
            }
            else {
              fVar19 = (float10)FUN_004856e0(iVar11);
              if ((float10)_DAT_004ac310 < fVar19 * (float10)(&DAT_004b2980)[iVar9]) {
                fVar19 = (float10)_DAT_004ac310;
              }
              else {
                fVar19 = (float10)FUN_004856e0(iVar11);
                fVar19 = fVar19 * (float10)(&DAT_004b2980)[iVar9];
              }
            }
            dVar4 = _DAT_004ac320;
            if ((&DAT_00ec8880)[iVar9] != 0) {
              dVar4 = _DAT_004ac318;
            }
            (&DAT_004d5e30)[iVar14] =
                 (float)(fVar19 * (float10)dVar4 + (float10)(float)(&DAT_004d5e30)[iVar14]);
          }
        }
      }
      else {
        iVar9 = (DAT_004d6b3c + 8) * 0x20 + iVar9;
        if ((bVar1 & 1) == 0) {
          if ((bVar1 & 2) != 0) {
            iVar9 = FUN_00485880(iVar9,0);
            if (((float)iVar9 != _DAT_004ac308) ||
               (local_c = 0, (float)(&DAT_004d5e80)[iVar14] != _DAT_004ac308)) {
              local_c = 1;
            }
            (&DAT_004d5e80)[iVar14] = (float)local_c;
          }
        }
        else {
          fVar19 = (float10)FUN_004857b0(iVar9);
          if ((*pbVar18 & 0x10) == 0) {
            if ((*pbVar18 & 0x20) != 0) {
              (&DAT_004d5e30)[iVar14] = (float)((float10)(float)(&DAT_004d5e30)[iVar14] - fVar19);
            }
          }
          else {
            (&DAT_004d5e30)[iVar14] = (float)(fVar19 + (float10)(float)(&DAT_004d5e30)[iVar14]);
          }
        }
      }
      pbVar18 = pbVar18 + 0xc;
    } while ((int)pbVar18 < 0x4d62c0);
  }
  if ((DAT_004d6b58 == 0) && ((DAT_004d6b38 != 0 || (DAT_004d6b34 != 0)))) {
    if (DAT_004d6b34 != 0) {
      _DAT_004d62e8 = _DAT_00ec87d8;
      _DAT_004d62ec = _DAT_00ec87dc;
      _DAT_004d62f0 = _DAT_00ec87e0;
    }
    uStack_4 = 0xbff00000;
    if (DAT_00ec8790 == 0) {
      uStack_4 = 0x3ff00000;
    }
    fVar19 = (float10)FUN_004856e0(0x30);
    uVar3 = (ulonglong)uStack_4;
    uStack_4 = 0xbff00000;
    _DAT_00ec87d8 = (float)(fVar19 * (float10)(double)(uVar3 << 0x20));
    if (DAT_00ec8794 == 0) {
      uStack_4 = 0x3ff00000;
    }
    fVar19 = (float10)FUN_004856e0(0x31);
    uVar3 = (ulonglong)uStack_4;
    uStack_4 = 0xbff00000;
    _DAT_00ec87dc = (float)(fVar19 * (float10)(double)(uVar3 << 0x20));
    if (DAT_00ec8798 == 0) {
      uStack_4 = 0x3ff00000;
    }
    fVar19 = (float10)FUN_004856e0(0x32);
    _DAT_00ec87e0 = (float)(fVar19 * (float10)(double)((ulonglong)uStack_4 << 0x20));
    if ((DAT_004b2940 == 0) && (DAT_004d6b34 == 0)) {
      DAT_004d6b68 = 0.0;
      DAT_004d6b64 = 0.0;
      DAT_004d6b60 = 0.0;
    }
    else {
      if (_DAT_00ec87d8 != _DAT_004ac308) {
        DAT_004d6b60 = _DAT_00ec87d8 + DAT_004d6b60;
        if (DAT_004d6b60 < (float)_DAT_004ac318) {
          DAT_004d6b60 = (float)_DAT_004ac318;
        }
        else if ((float)_DAT_004ac320 < DAT_004d6b60) {
          DAT_004d6b60 = (float)_DAT_004ac320;
        }
      }
      if (_DAT_00ec87dc != _DAT_004ac308) {
        DAT_004d6b64 = _DAT_00ec87dc + DAT_004d6b64;
        if (DAT_004d6b64 < (float)_DAT_004ac318) {
          DAT_004d6b64 = (float)_DAT_004ac318;
        }
        else if ((float)_DAT_004ac320 < DAT_004d6b64) {
          DAT_004d6b64 = (float)_DAT_004ac320;
        }
      }
      if (_DAT_00ec87e0 != _DAT_004ac308) {
        DAT_004d6b68 = _DAT_00ec87e0 + DAT_004d6b68;
        if (DAT_004d6b68 < (float)_DAT_004ac318) {
          DAT_004d6b68 = (float)_DAT_004ac318;
        }
        else if ((float)_DAT_004ac320 < DAT_004d6b68) {
          DAT_004d6b68 = (float)_DAT_004ac320;
        }
      }
      _DAT_00ec87d8 = DAT_004d6b60;
      _DAT_00ec87dc = DAT_004d6b64;
      _DAT_00ec87e0 = DAT_004d6b68;
    }
    pbVar18 = &DAT_004d6518;
    do {
      bVar1 = *pbVar18;
      iVar14 = *(int *)(pbVar18 + 8);
      iVar9 = *(int *)(pbVar18 + 4);
      if (bVar1 == 0xff) break;
      if ((bVar1 & 8) == 0) {
        if ((bVar1 & 4) != 0) {
          if (((iVar9 == 0) || (iVar9 == 1)) || (iVar9 == 2)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((bVar1 & 1) == 0) {
            if ((bVar1 & 2) != 0) {
              if ((bVar1 & 0x10) == 0) {
                if ((bVar1 & 0x20) == 0) {
                  iVar9 = FUN_00408040(iVar9 + 0x30,0,*(undefined4 *)(&DAT_00ec87d8 + iVar9 * 4),
                                       0x3f000000);
                  fVar5 = (float)iVar9;
                }
                else {
                  iVar9 = FUN_00408040(0xffffffff,0xffffffff,
                                       *(undefined4 *)(&DAT_00ec87d8 + iVar9 * 4),0x3f4ccccd);
                  fVar5 = (float)iVar9;
                }
              }
              else {
                iVar9 = FUN_00408040(0xffffffff,1,*(undefined4 *)(&DAT_00ec87d8 + iVar9 * 4),
                                     0x3f4ccccd);
                fVar5 = (float)iVar9;
              }
              if ((iVar14 == 2) && (fVar5 != _DAT_004ac308)) {
                DAT_00ec8820 = 1;
              }
              if ((fVar5 != _DAT_004ac308) ||
                 (local_c = 0, (float)(&DAT_004d5ebc)[iVar14] != _DAT_004ac308)) {
                local_c = 1;
              }
              goto LAB_004055fe;
            }
          }
          else if (bVar2) {
            (&DAT_004d5e40)[iVar14] =
                 *(float *)(&DAT_00ec87d8 + iVar9 * 4) + (float)(&DAT_004d5e40)[iVar14];
          }
          else {
            fVar19 = (float10)FUN_004856e0(iVar9 + 0x30);
            dVar4 = _DAT_004ac320;
            if ((&DAT_00ec8790)[iVar9] != 0) {
              dVar4 = _DAT_004ac318;
            }
            (&DAT_004d5e40)[iVar14] =
                 (float)(fVar19 * (float10)dVar4 + (float10)(float)(&DAT_004d5e40)[iVar14]);
          }
        }
      }
      else {
        iVar9 = FUN_00485880(iVar9 + 0x200,0);
        if (((float)iVar9 != _DAT_004ac308) ||
           (local_c = 0, (float)(&DAT_004d5ebc)[iVar14] != _DAT_004ac308)) {
          local_c = 1;
        }
LAB_004055fe:
        (&DAT_004d5ebc)[iVar14] = (float)local_c;
      }
      pbVar18 = pbVar18 + 0xc;
    } while ((int)pbVar18 < 0x4d6818);
  }
  else {
    FUN_00405cf0(1);
  }
  if (DAT_004b2948 == 0) {
    FUN_00405cf0(2);
  }
  else {
    FUN_00408120();
    fVar19 = (float10)FUN_004857b0(0xcd);
    fVar20 = (float10)FUN_004857b0(0xcb);
    fVar21 = (float10)FUN_004857b0(0x4d);
    fVar22 = (float10)FUN_004857b0(0x4b);
    _DAT_00ec87f0 =
         (float)(((float10)(float)fVar21 - fVar22) +
                (float10)(float)((float10)(float)fVar19 - fVar20));
    fVar19 = (float10)FUN_004857b0(200);
    fVar20 = (float10)FUN_004857b0(0xd0);
    fVar21 = (float10)FUN_004857b0(0x48);
    fVar22 = (float10)FUN_004857b0(0x50);
    pbVar18 = &DAT_004d6828;
    _DAT_00ec87f4 =
         (float)(((float10)(float)fVar21 - fVar22) +
                (float10)(float)((float10)(float)fVar19 - fVar20));
    do {
      bVar1 = *pbVar18;
      iVar14 = *(int *)(pbVar18 + 8);
      if (bVar1 == 0xff) break;
      if ((bVar1 & 8) != 0) {
        if ((bVar1 & 1) == 0) {
          if ((bVar1 & 2) != 0) {
            iVar9 = FUN_00485880(*(undefined4 *)(pbVar18 + 4),0);
            if (((float)iVar9 != _DAT_004ac308) ||
               (local_c = 0, (float)(&DAT_004d5ef8)[iVar14] != _DAT_004ac308)) {
              local_c = 1;
            }
            (&DAT_004d5ef8)[iVar14] = (float)local_c;
          }
        }
        else {
          fVar19 = (float10)FUN_004857b0(*(undefined4 *)(pbVar18 + 4));
          if ((*pbVar18 & 0x10) == 0) {
            if ((*pbVar18 & 0x20) != 0) {
              (&DAT_004d5e50)[iVar14] = (float)((float10)(float)(&DAT_004d5e50)[iVar14] - fVar19);
            }
          }
          else {
            (&DAT_004d5e50)[iVar14] = (float)(fVar19 + (float10)(float)(&DAT_004d5e50)[iVar14]);
          }
        }
      }
      pbVar18 = pbVar18 + 0xc;
    } while ((int)pbVar18 < 0x4d6b28);
  }
  iVar14 = 0;
  do {
    fVar5 = *(float *)((int)&DAT_004d5e30 + iVar14) + *(float *)((int)&DAT_004d5e50 + iVar14) +
            *(float *)((int)&DAT_004d5e40 + iVar14);
    bVar2 = _DAT_004ac30c <= fVar5;
    *(float *)((int)&DAT_00ec8830 + iVar14) = fVar5;
    fVar6 = _DAT_004ac30c;
    if ((bVar2) && (fVar6 = fVar5, _DAT_004ac310 < fVar5)) {
      fVar6 = _DAT_004ac310;
    }
    *(float *)((int)&DAT_00ec8830 + iVar14) = fVar6;
    iVar9 = DAT_004b2940;
    iVar14 = iVar14 + 4;
  } while (iVar14 < 0x10);
  iVar14 = 0;
  do {
    if ((((float)(&DAT_004d5e80)[iVar14] == _DAT_004ac308) &&
        ((float)(&DAT_004d5ebc)[iVar14] == _DAT_004ac308)) &&
       ((float)(&DAT_004d5ef8)[iVar14] == _DAT_004ac308)) {
      cVar15 = '\0';
      (&DAT_00ec88a0)[iVar14] = 0;
    }
    else {
      cVar15 = '\x01';
      (&DAT_00ec88a0)[iVar14] = (float)(&DAT_00ec88a0)[iVar14] + (float)_DAT_00e22a40;
    }
    if (((&DAT_00ec8810)[iVar14] == '\0') || ((&DAT_004b29d8)[iVar14] == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((iVar9 == 0) && (iVar14 == 0)) {
      bVar2 = false;
    }
    if ((bVar2) || (local_c = 1, cVar15 == '\0')) {
      local_c = 0;
    }
    (&DAT_00ec8810)[iVar14] = cVar15;
    iVar14 = iVar14 + 1;
    *(float *)(&DAT_00ec883c + iVar14 * 4) = (float)local_c;
  } while (iVar14 < 0xf);
  sVar8 = __ftol();
  DAT_00e98ee2 = __ftol();
  if (sVar8 < -0x100) {
    DAT_00e98ee0 = -0x100;
  }
  else {
    DAT_00e98ee0 = sVar8;
    if (0x100 < sVar8) {
      DAT_00e98ee0 = 0x100;
    }
  }
  if (DAT_00e98ee2 < -0x100) {
    DAT_00e98ee2 = -0x100;
  }
  else if (0x100 < DAT_00e98ee2) {
    DAT_00e98ee2 = 0x100;
  }
  iVar14 = 0;
  piVar16 = &DAT_004b2998;
  do {
    if (*piVar16 < 0) {
      (&DAT_00e98ee4)[iVar14] = 0;
    }
    else {
      uVar7 = __ftol();
      (&DAT_00e98ee4)[iVar14] = uVar7;
    }
    piVar16 = piVar16 + 1;
    iVar14 = iVar14 + 1;
  } while ((int)piVar16 < 0x4b29d8);
  if (iVar9 != 0) {
    DAT_004d6b58 = 0;
    DAT_004d6300 = 0;
    DAT_004d6824 = 0;
    DAT_004d6b4c = 0;
    DAT_004d6b44 = 0;
    DAT_004d6b40 = 0;
    return;
  }
  iVar14 = FUN_00407ea0(0xffffffff);
  iVar9 = FUN_00407f80(0xffffffff);
  if ((iVar9 != 0) && (iVar14 != 0)) {
    iVar14 = 0;
  }
  if ((DAT_004d6824 == 0) && (iVar14 != 0)) {
    DAT_004d6b40 = 1;
  }
  else {
    DAT_004d6b40 = 0;
  }
  if ((DAT_004d6300 != 0) || (DAT_004d6b44 = 1, iVar9 == 0)) {
    DAT_004d6b44 = 0;
  }
  if ((DAT_004d5fb8 != 0) || (DAT_004d6b4c = 1, iVar14 != 0)) {
    DAT_004d6b4c = 0;
  }
  if ((DAT_004d6304 != 0) || (_DAT_004d6b50 = 1, iVar9 != 0)) {
    _DAT_004d6b50 = 0;
  }
  DAT_004d5fb8 = (uint)(iVar14 == 0);
  DAT_004d6304 = (uint)(iVar9 == 0);
  DAT_004d6300 = iVar9;
  DAT_004d6824 = iVar14;
  iVar14 = FUN_00407ea0(1);
  if ((DAT_004d6308 != 0) || (DAT_004d6b48 = 1, iVar14 == 0)) {
    DAT_004d6b48 = 0;
  }
  DAT_004d6308 = iVar14;
  if ((DAT_004d6b44 != 0) &&
     ((iVar14 = FUN_00411810(), iVar14 == 0 || (*(int *)(iVar14 + 0x1c) != 0xb)))) {
    FUN_00440550(0x4d);
  }
  if ((((DAT_004d6b6c != 0) && (iVar14 = *(int *)(DAT_0050c454 + 8), iVar14 != 3)) && (iVar14 != 8))
     && (iVar14 != 5)) {
    DAT_004d6b58 = 1;
    return;
  }
  DAT_004d6b58 = 0;
  return;
}

