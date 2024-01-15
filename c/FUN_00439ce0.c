#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00439ce0(int param_1)

{
  undefined2 *puVar1;
  float fVar2;
  ushort uVar3;
  char cVar4;
  undefined uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  float *pfVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  int iVar16;
  float *pfVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined2 uVar23;
  undefined4 uVar22;
  int local_168;
  undefined4 local_164;
  byte local_160;
  undefined local_159;
  float local_158 [2];
  int local_150 [20];
  undefined local_100 [256];
  
  local_159 = *(undefined *)(param_1 + 0x5e);
  local_158[0] = 3599.99;
  local_158[1] = 3599.99;
  DAT_00e295c8 = __ftol();
  local_160 = *(byte *)(param_1 + 0x8f);
  if (*(char *)(param_1 + 0x6c) != '\0') {
    local_160 = 3;
  }
  uVar7 = FUN_00421360(s__SCREENTEXT_189__c_sResults_004c0d74);
  FUN_00450560(0xa0,0x14,uVar7);
  piVar19 = local_150;
  for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
    *piVar19 = 0;
    piVar19 = piVar19 + 1;
  }
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    _DAT_0050c1f4 = 2.0;
    iVar12 = 0;
    if (0 < (char)(&DAT_004bfee0)[*(char *)(param_1 + 0x5e)]) {
      piVar19 = (int *)(&DAT_004c0018 + *(char *)(param_1 + 0x5e) * 0x1c);
      do {
        if ((int)*(char *)(param_1 + 0x5d) == *piVar19) {
          DAT_0050c228 = (byte)iVar12;
          break;
        }
        iVar12 = iVar12 + 1;
        piVar19 = piVar19 + 1;
      } while (iVar12 < (char)(&DAT_004bfee0)[*(char *)(param_1 + 0x5e)]);
    }
    _DAT_0050c114 = 0.0;
    DAT_0050c53c = 0;
    local_168 = 0;
    puVar15 = &DAT_0050c180;
    for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    if ('\0' < *(char *)(param_1 + 0x72)) {
      puVar15 = &DAT_00e29bc0;
      do {
        local_150[local_168] = (int)puVar15;
        if (puVar15 == (undefined4 *)0x0) {
          *(char *)(param_1 + 0x72) = (char)local_168;
          break;
        }
        if ((_DAT_004ac900 < (float)puVar15[0x1d]) || ((float)puVar15[0x1d] < _DAT_004ac778)) {
          puVar15[0x1d] = 0x4560ffd7;
        }
        uVar18 = (uint)local_160;
        if (local_160 != 0) {
          pfVar17 = (float *)(puVar15 + 0x18);
          do {
            if ((_DAT_004ac900 < *pfVar17) || (*pfVar17 < _DAT_004ac778)) {
              *pfVar17 = 3599.99;
            }
            pfVar17 = pfVar17 + 1;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        (&DAT_0050c180)[local_168] = puVar15;
        local_168 = local_168 + 1;
        puVar15 = puVar15 + 0x22;
      } while (local_168 < *(char *)(param_1 + 0x72));
    }
    local_168 = 1;
    if ('\x01' < *(char *)(param_1 + 0x72)) {
      piVar19 = &DAT_0050c184;
      do {
        if (0x50c180 < (int)piVar19) {
          piVar8 = &DAT_0050c180;
          iVar12 = local_168;
          do {
            iVar20 = *piVar19;
            if (*(short *)(iVar20 + 0x5c) < *(short *)(*piVar8 + 0x5c)) {
              *piVar19 = *piVar8;
              *piVar8 = iVar20;
            }
            piVar8 = piVar8 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        local_168 = local_168 + 1;
        piVar19 = piVar19 + 1;
      } while (local_168 < *(char *)(param_1 + 0x72));
    }
    cVar4 = *(char *)(param_1 + 0x70);
    iVar12 = 0;
    local_164 = (int)cVar4;
    if (0 < local_164) {
      do {
        pfVar17 = local_158 + iVar12;
        *pfVar17 = *(float *)(local_150[iVar12] + 0x60);
        iVar20 = 1;
        if (1 < local_160) {
          pfVar13 = (float *)(local_150[iVar12] + 100);
          do {
            if (*pfVar13 <= _DAT_004ac778) break;
            if (*pfVar13 < *pfVar17) {
              *pfVar17 = *pfVar13;
            }
            iVar20 = iVar20 + 1;
            pfVar13 = pfVar13 + 1;
          } while (iVar20 < (int)(uint)local_160);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < local_164);
    }
    if ((((_DAT_0050c540 & 1) == 0) && (DAT_00e35a81 == '\0')) &&
       ((((local_160 == 3 &&
          (*(float *)(local_150[0] + 0x74) <
           *(float *)(&DAT_00e365f4 +
                     ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 4))) &&
         ((cVar4 == '\x01' || (*(float *)(local_150[0] + 0x74) < *(float *)(local_150[1] + 0x74)))))
        || ((local_158[0] <
             *(float *)(&DAT_00e366bc +
                       ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 4) &&
            ((cVar4 == '\x01' || (local_158[0] < local_158[1])))))))) {
      _DAT_0050c540 = _DAT_0050c540 | 1;
      *(undefined *)(param_1 + 0x6f) = 0;
      FUN_00454d40(param_1,2);
      return;
    }
    if (((('\x01' < cVar4) && ((_DAT_0050c540 & 2) == 0)) && (DAT_00e35ad1 == '\0')) &&
       ((((local_160 == 3 &&
          (*(float *)(local_150[1] + 0x74) <
           *(float *)(&DAT_00e365f4 +
                     ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 4))) &&
         (*(float *)(local_150[1] + 0x74) < *(float *)(local_150[0] + 0x74))) ||
        ((local_158[1] <
          *(float *)(&DAT_00e366bc +
                    ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 4) &&
         (local_158[1] < local_158[0])))))) {
      _DAT_0050c540 = _DAT_0050c540 | 2;
      *(undefined *)(param_1 + 0x6f) = 1;
      FUN_00454d40(param_1,2);
      return;
    }
    if (((_DAT_0050c540 & 4) == 0) && (iVar20 = 0, 0 < local_164)) {
      puVar21 = &DAT_00e35a84;
      do {
        if (((local_160 == 3) &&
            (iVar10 = local_150[iVar20], *(float *)(iVar10 + 0x74) < _DAT_004ac900)) &&
           (iVar16 = (int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2,
           *(float *)(iVar10 + 0x74) < *(float *)(&DAT_00e365f4 + iVar16 * 4))) {
          iVar9 = 0;
          *(undefined4 *)(&DAT_00e365f4 + iVar16 * 4) = *(undefined4 *)(iVar10 + 0x74);
          do {
            (&DAT_00e36784)
            [iVar9 + ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 0x20] =
                 puVar21[iVar9 + -0x24];
            iVar9 = iVar9 + 1;
          } while (iVar9 < 0x20);
          (&DAT_00e37404)[*(char *)(param_1 + 0x5d) * 2 + (int)*(char *)(param_1 + 0x6e)] = *puVar21
          ;
        }
        if ((local_158[iVar20] < _DAT_004ac900) &&
           (iVar10 = (int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2,
           local_158[iVar20] < *(float *)(&DAT_00e366bc + iVar10 * 4))) {
          *(float *)(&DAT_00e366bc + iVar10 * 4) = local_158[iVar20];
          iVar10 = 0;
          do {
            (&DAT_00e36dc4)
            [iVar10 + ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 0x20] =
                 puVar21[iVar10 + -0x24];
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x20);
          (&DAT_00e37436)[*(char *)(param_1 + 0x5d) * 2 + (int)*(char *)(param_1 + 0x6e)] = *puVar21
          ;
        }
        iVar20 = iVar20 + 1;
        puVar21 = puVar21 + 0x50;
      } while (iVar20 < *(char *)(param_1 + 0x70));
    }
    _DAT_0050c540 = _DAT_0050c540 | 4;
    DAT_004c022c = *(char *)(local_150[0] + 0x5c);
    DAT_004c0230 = -1;
    iVar12 = CONCAT31((int3)((uint)iVar12 >> 8),*(char *)(param_1 + 0x70));
    cVar4 = DAT_004c022c;
    if ('\x01' < *(char *)(param_1 + 0x70)) {
      DAT_004c0230 = *(char *)(local_150[1] + 0x5c);
      iVar12 = CONCAT31((int3)((uint)local_150[1] >> 8),DAT_004c0230);
      if (DAT_004c0230 < DAT_004c022c) {
        cVar4 = DAT_004c0230;
      }
    }
    if ('\x03' < cVar4) {
      _DAT_0050c114 = (float)(cVar4 + -3) * (float)_DAT_004ac908;
      iVar12 = (int)*(char *)(param_1 + 0x72);
      fVar2 = _DAT_004ac904 - (float)iVar12 * _DAT_004ac794;
      local_164 = iVar12;
      if (_DAT_0050c114 < fVar2) {
        _DAT_0050c114 = fVar2;
      }
    }
    if (((*(char *)(param_1 + 0x70) == '\x01') && (*(char *)(param_1 + 0x6c) != '\0')) &&
       ('\x03' < *(char *)(param_1 + 0x72))) {
      iVar20 = 0;
      uVar18 = (int)*(char *)(param_1 + 0x72) - 1;
      if (0 < (int)uVar18) {
        piVar19 = &DAT_0050c184;
        do {
          iVar12 = piVar19[-1];
          if (*(float *)(*piVar19 + 0x74) == *(float *)(iVar12 + 0x74)) {
            puVar1 = (undefined2 *)(iVar12 + 0x5c);
            iVar12 = CONCAT22((short)((uint)iVar12 >> 0x10),*puVar1);
            *(undefined2 *)(*piVar19 + 0x5c) = *puVar1;
          }
          iVar20 = iVar20 + 1;
          piVar19 = piVar19 + 1;
          uVar18 = (int)*(char *)(param_1 + 0x72) - 1;
        } while (iVar20 < (int)uVar18);
      }
      if (((DAT_004c022c == '\x01') &&
          (uVar18 = CONCAT31((int3)(uVar18 >> 8),*(char *)(param_1 + 0x6c)),
          *(char *)(param_1 + 0x6c) != '\0')) && ((_DAT_0050c540 & 8) == 0)) {
        cVar4 = *(char *)(param_1 + 0x5d);
        iVar12 = CONCAT31((int3)((uint)iVar12 >> 8),cVar4);
        uVar18 = (uint)cVar4;
        bVar11 = (&DAT_004bfef2)[uVar18 * 0xc];
        if ((bVar11 == 2) && (cVar4 != '\x01')) {
          bVar11 = 0;
        }
        if (('\0' < (char)bVar11) && (uVar18 = 1 << (bVar11 & 0x1f), (uVar18 & DAT_00e35a94) == 0))
        {
          DAT_00e35a94 = DAT_00e35a94 | uVar18;
          DAT_00e364b0 = DAT_00e364b0 | DAT_00e35a94;
          FUN_0044e560();
          _DAT_0050c540 = _DAT_0050c540 | 8;
          FUN_00454d40(param_1,0x11);
          return;
        }
      }
      cVar4 = FUN_00440a00(CONCAT31((int3)(uVar18 >> 8),*(undefined *)(param_1 + 0x5e)),
                           CONCAT31((int3)((uint)iVar12 >> 8),DAT_0050c228));
      if (DAT_004c022c <= cVar4) {
        local_164 = CONCAT31(local_164._1_3_,*(char *)(param_1 + 0x5e));
        iVar12 = (int)(&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] >> ((DAT_0050c228 & 0xf) << 1);
        uVar3 = (ushort)(iVar12 >> 0x1f);
        iVar20 = FUN_00440a20(local_164,CONCAT31((int3)(iVar12 >> 0x1f),DAT_0050c228));
        if (iVar20 != 0) {
          DAT_0050c53c = (int)*(short *)(param_1 +
                                        (DAT_004c022c + 0x44 + *(char *)(param_1 + 0x91) * 4) * 2);
          DAT_0050c53c = __ftol();
          DAT_00e35a98 = DAT_00e35a98 + DAT_0050c53c;
          bVar11 = *(byte *)(param_1 + 0x5e);
          if ((char)bVar11 < '\x03') {
            iVar20 = (int)(char)bVar11;
            iVar10 = (int)(char)DAT_0050c228;
            if ((iVar10 == (char)(&DAT_004bfee0)[iVar20] + -1) &&
               ((DAT_00e35a88 & (byte)(1 << (bVar11 & 0x1f))) == 0)) {
              local_159 = 3;
              DAT_00e35a88 = DAT_00e35a88 | '\x01' << (bVar11 & 0x1f);
              iVar20 = (int)*(char *)(param_1 + 0x5e);
              *(undefined1 *)(param_1 + 0x5d) = (&DAT_004c006c)[iVar20 * 4];
            }
            else if ((iVar10 < (char)(&DAT_004bfee0)[iVar20] + -1) &&
                    (((&DAT_00e35a85)[iVar20] & (byte)(1 << (DAT_0050c228 + 1 & 0x1f))) == 0)) {
              *(undefined *)(param_1 + 0x5d) = (&DAT_004c001c)[(iVar20 * 7 + iVar10) * 4];
            }
            (&DAT_00e35a85)[iVar20] = (&DAT_00e35a85)[iVar20] | '\x01' << (DAT_0050c228 + 1 & 0x1f);
          }
          FUN_0043d720(param_1,&DAT_00e29bc0);
        }
        if (((int)(char)DAT_0050c228 == (char)(&DAT_004bfee0)[*(char *)(param_1 + 0x5e)] + -1) &&
           (*(char *)(param_1 + 0x5e) == '\x02')) {
          FUN_00440c10(param_1);
        }
        cVar4 = DAT_004c022c;
        if ((int)(short)((((ushort)iVar12 ^ uVar3) - uVar3 & 3 ^ uVar3) - uVar3) < 4 - DAT_004c022c)
        {
          bVar11 = (byte)((char)DAT_0050c228 * 2);
          iVar12 = (char)DAT_0050c228 * 2 + 1;
          (&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] =
               (&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] & ~(ushort)(1 << (bVar11 & 0x1f));
          (&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] =
               (&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] & ~(ushort)(1 << ((byte)iVar12 & 0x1f));
          (&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] =
               (&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] |
               (ushort)(4 - CONCAT22((short)((uint)iVar12 >> 0x10),(short)cVar4) << (bVar11 & 0x1f))
          ;
          if (((DAT_00e35a8a == 0x3fff) && (DAT_00e35a8c == 0x3fff)) && (DAT_00e35a8e == 0x3fff)) {
            if ((DAT_00e35a88 & 8) == 0) {
              DAT_00e35a88 = DAT_00e35a88 | 8;
              local_159 = 3;
              *(undefined *)(param_1 + 0x5d) = DAT_004c0078;
            }
            else if ((DAT_00e35a90 == 0xff) && ((_DAT_00e364a8 & 0x20) == 0)) {
              _DAT_00e364a8 = _DAT_00e364a8 | 0x20;
            }
          }
        }
      }
      iVar12 = 0;
      do {
        if ((byte)(&DAT_00e364ac)[iVar12] < (byte)(&DAT_00e35a85)[iVar12]) {
          (&DAT_00e364ac)[iVar12] = (&DAT_00e35a85)[iVar12];
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 4);
    }
    *(undefined *)(param_1 + 0x5e) = local_159;
    FUN_0044e560();
  }
  if ((_DAT_004ac778 < _DAT_0050c1f4) &&
     (_DAT_0050c1f4 = _DAT_0050c1f4 - _DAT_00e22a50, _DAT_0050c1f4 <= _DAT_004ac778)) {
    FUN_00426c80(0xb6,7,0x3e800000,0x3f800000,0);
  }
  iVar12 = 0;
  if ('\0' < *(char *)(param_1 + 0x72)) {
    piVar19 = &DAT_0050c180;
    local_164 = 0x1e;
    do {
      iVar20 = **(int **)(*piVar19 + 0x18);
      iVar10 = iVar20;
      if (0x1e < local_164) {
        piVar8 = &DAT_0050c180;
        iVar16 = iVar12;
        do {
          if (iVar20 == **(int **)(*piVar8 + 0x18)) {
            iVar10 = iVar10 + 0x17;
          }
          piVar8 = piVar8 + 1;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      FUN_004285d0(iVar10,1);
      uVar7 = __ftol();
      FUN_00428660(iVar10,0x1e,uVar7);
      FUN_004286f0(iVar10,0x3f000000,0x3f000000);
      uVar5 = __ftol();
      FUN_00428740(iVar10,0xffffffff,0xffffffff,0xffffffff,uVar5);
      uVar23 = (undefined2)((uint)iVar10 >> 0x10);
      if ((iVar12 == DAT_004c022c + -1) || (iVar12 == DAT_004c0230 + -1)) {
        uVar7 = FUN_00421360(s__r_s_d__004c0d6c,(int)*(short *)(*piVar19 + 0x5c));
        FUN_0049eb80(local_100,uVar7);
        uVar6 = __ftol();
        uVar22 = CONCAT22(uVar23,uVar6);
        FUN_00450530(0x58,uVar22,0xffffffa3,0xffffffbe,0x11,uVar5,local_100);
        uVar7 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)
                             [**(int **)(*piVar19 + 0x18) * 0xd]);
        uVar7 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)
                             [**(int **)(*piVar19 + 0x18) * 0xd],uVar7);
        uVar7 = FUN_00421360(s__f4_s_s__s_004c0d60,uVar7);
        FUN_0049eb80(local_100,uVar7);
        uVar7 = __ftol(0xffffffa3,0xffffffbe,0x11,uVar5,local_100);
        FUN_00450530(0x5c,uVar7);
        FUN_004505f0(0x109,uVar22,*(undefined4 *)(*piVar19 + 0x74),0xffffffa3,0xffffffbe,0x11,uVar5,
                     1);
        if (iVar12 == DAT_004c022c + -1) {
          puVar21 = &DAT_00e35a60;
        }
        else {
          puVar21 = &DAT_00e35ab0;
        }
        FUN_0049eb80(local_100,s__f4_s_s_004c0d58,puVar21);
        uVar7 = __ftol(0xffffffa3,0xffffffbe,0x11,uVar5,local_100);
        FUN_00450530(100,uVar7);
      }
      else {
        uVar7 = FUN_00421360(s__r_s_d__004c0d6c,(int)*(short *)(*piVar19 + 0x5c));
        FUN_0049eb80(local_100,uVar7);
        uVar6 = __ftol();
        uVar22 = CONCAT22(uVar23,uVar6);
        FUN_00450530(0x58,uVar22,0x32,0xffffffff,0xffffffff,uVar5,local_100);
        uVar7 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)
                             [**(int **)(*piVar19 + 0x18) * 0xd]);
        uVar7 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)
                             [**(int **)(*piVar19 + 0x18) * 0xd],uVar7);
        uVar7 = FUN_00421360(s__f4_s_s__s_004c0d60,uVar7);
        FUN_0049eb80(local_100,uVar7);
        uVar7 = __ftol(0x32,0xffffffff,0xffffffff,uVar5,local_100);
        FUN_00450530(0x5c,uVar7);
        FUN_004505f0(0x109,uVar22,*(undefined4 *)(*piVar19 + 0x74),0x32,0xffffffff,0xffffffff,uVar5,
                     1);
      }
      iVar12 = iVar12 + 1;
      local_164 = local_164 + 0x1e;
      piVar19 = piVar19 + 1;
    } while (iVar12 < *(char *)(param_1 + 0x72));
  }
  if ('\x04' < *(char *)(param_1 + 0x72)) {
    FUN_0043fe90(0x122,0x1e,0x90);
  }
  if (0 < DAT_0050c53c) {
    uVar7 = FUN_00421360(s__SCREENTEXT_575__c_sYou_won__d_T_004c0d30,DAT_0050c53c);
    FUN_0049eb80(local_100,uVar7);
    FUN_00450560(0x87,0xcd,local_100);
    FUN_00457140(0,0x40e00000,0xc0e00000,0x3f800000);
  }
  local_168 = 0;
  iVar12 = DAT_004bfedc;
  if ('\0' < *(char *)(param_1 + 0x70)) {
    pfVar17 = (float *)&DAT_00e98e80;
    do {
      if ((DAT_004d6b40 != 0) || (DAT_004d6b44 != 0)) {
        uVar7 = FUN_00411480(1);
        FUN_00414e60(uVar7);
        FUN_00440550(0x54);
        if (*(char *)(param_1 + 0x6c) == '\0') {
          iVar12 = FUN_0041d6b0();
          iVar12 = (-(uint)(iVar12 != 0) & 0xfffffff5) + 0xc;
          DAT_004bfedc = iVar12;
        }
        else if ((DAT_004c022c < '\x04') && (DAT_0050c228 == 6)) {
          piVar19 = &DAT_0050c180;
          puVar14 = (undefined *)(param_1 + 0xcc);
          do {
            iVar12 = *piVar19;
            piVar19 = piVar19 + 1;
            *puVar14 = **(undefined **)(iVar12 + 0x18);
            puVar14 = puVar14 + 1;
          } while ((int)piVar19 < 0x50c18c);
          iVar12 = 0x10;
          DAT_004bfedc = iVar12;
        }
        else {
          iVar12 = 0xc;
          DAT_004bfedc = iVar12;
        }
      }
      DAT_00e295c4 = 0;
      DAT_00e295c0 = 0;
      if ('\x04' < *(char *)(param_1 + 0x72)) {
        if ((*pfVar17 < (float)_DAT_004ac748) || ((float)_DAT_004ac880 < *pfVar17)) {
          _DAT_0050c114 = _DAT_0050c114 - *pfVar17 * _DAT_00e22a50 * _DAT_004ac848;
          if (_DAT_004ac778 < _DAT_0050c114) {
            _DAT_0050c114 = 0.0;
          }
          fVar2 = _DAT_004ac904 - (float)(int)*(char *)(param_1 + 0x72) * _DAT_004ac794;
          if (_DAT_0050c114 < fVar2) {
            _DAT_0050c114 = fVar2;
          }
        }
        DAT_00e295c0 = (uint)(_DAT_0050c114 < _DAT_004ac778);
        if ((float)DAT_00e295c8 < _DAT_0050c114) {
          DAT_00e295c4 = 1;
        }
      }
      pfVar17 = pfVar17 + 1;
      local_168 = local_168 + 1;
    } while (local_168 < *(char *)(param_1 + 0x70));
  }
  if (iVar12 != -1) {
    _DAT_0050c540 = 0;
    DAT_0050c944 = 0xffffffff;
  }
  return;
}

