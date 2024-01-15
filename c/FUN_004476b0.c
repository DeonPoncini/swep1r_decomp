#include "prototype.h"


void FUN_004476b0(uint *param_1)

{
  undefined2 *puVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  uint **ppuVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  ushort uVar9;
  uint *puVar10;
  uint **ppuVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_4;
  
  if ((((param_1 != (uint *)0x0) && (uVar13 = *param_1, uVar13 != 0x5065)) && (uVar13 != 0x5066)) &&
     (((uVar13 != 0xd064 && (uVar13 != 0xd065)) &&
      ((uVar13 != 0x5064 && ((uVar13 != 0x3064 && (uVar13 != 0xd066)))))))) {
    uVar4 = param_1[1];
    uVar6 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 | (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
    *param_1 = uVar6;
    uVar13 = param_1[2];
    param_1[1] = (uVar4 & 0xff00 | uVar4 << 0x10) << 8 | (uVar4 >> 0x10 | uVar4 & 0xff0000) >> 8;
    param_1[2] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 | (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8
    ;
    *(ushort *)(param_1 + 3) =
         CONCAT11((char)*(undefined2 *)(param_1 + 3),
                  (char)((ushort)*(undefined2 *)(param_1 + 3) >> 8));
    uVar13 = param_1[4];
    *(ushort *)((int)param_1 + 0xe) =
         CONCAT11((char)*(undefined2 *)((int)param_1 + 0xe),
                  (char)((ushort)*(undefined2 *)((int)param_1 + 0xe) >> 8));
    param_1[4] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 | (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8
    ;
    if ((int)uVar6 < 0x5066) {
      if (uVar6 == 0x5065) {
        uVar13 = param_1[7];
        param_1[7] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                     (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
      }
      else if (uVar6 == 0x3064) {
        uVar13 = param_1[5];
        iVar14 = 6;
        param_1[5] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                     (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
        puVar12 = param_1 + 7;
        do {
          uVar13 = *puVar12;
          iVar14 = iVar14 + -1;
          *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                     (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
          puVar12 = puVar12 + 1;
        } while (iVar14 != 0);
        local_4 = 0;
        if (0 < (int)param_1[5]) {
          do {
            ppuVar5 = *(uint ***)(param_1[6] + local_4 * 4);
            if (ppuVar5 != (uint **)0x0) {
              puVar12 = *ppuVar5;
              if ((puVar12 != (uint *)0x0) && (iVar14 = FUN_004475f0(puVar12), iVar14 == 0)) {
                (&DAT_00e95300)[DAT_0050c628] = puVar12;
                DAT_0050c628 = DAT_0050c628 + 1;
                uVar13 = *puVar12;
                puVar10 = (uint *)puVar12[2];
                *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                           (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                *(ushort *)(puVar12 + 1) =
                     CONCAT11((char)*(undefined2 *)(puVar12 + 1),
                              (char)((ushort)*(undefined2 *)(puVar12 + 1) >> 8));
                *(ushort *)((int)puVar12 + 6) =
                     CONCAT11((char)*(undefined2 *)((int)puVar12 + 6),
                              (char)((ushort)*(undefined2 *)((int)puVar12 + 6) >> 8));
                if ((puVar10 != (uint *)0x0) && (iVar14 = FUN_00447630(puVar10), iVar14 == 0)) {
                  (&DAT_00e90980)[DAT_0050c62c] = puVar10;
                  DAT_0050c62c = DAT_0050c62c + 1;
                  uVar13 = *puVar10;
                  *puVar10 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                             (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                  *(ushort *)(puVar10 + 1) =
                       CONCAT11((char)*(undefined2 *)(puVar10 + 1),
                                (char)((ushort)*(undefined2 *)(puVar10 + 1) >> 8));
                  *(ushort *)((int)puVar10 + 6) =
                       CONCAT11((char)*(undefined2 *)((int)puVar10 + 6),
                                (char)((ushort)*(undefined2 *)((int)puVar10 + 6) >> 8));
                  iVar14 = 2;
                  puVar7 = puVar10 + 2;
                  do {
                    iVar14 = iVar14 + -1;
                    *(ushort *)puVar7 =
                         CONCAT11((char)*(undefined2 *)puVar7,
                                  (char)((ushort)*(undefined2 *)puVar7 >> 8));
                    puVar7 = (uint *)((int)puVar7 + 2);
                  } while (iVar14 != 0);
                  *(ushort *)(puVar10 + 4) =
                       CONCAT11((char)*(undefined2 *)(puVar10 + 4),
                                (char)((ushort)*(undefined2 *)(puVar10 + 4) >> 8));
                  *(ushort *)((int)puVar10 + 0x12) =
                       CONCAT11((char)*(undefined2 *)((int)puVar10 + 0x12),
                                (char)((ushort)*(undefined2 *)((int)puVar10 + 0x12) >> 8));
                  *(ushort *)(puVar10 + 5) =
                       CONCAT11((char)*(undefined2 *)(puVar10 + 5),
                                (char)((ushort)*(undefined2 *)(puVar10 + 5) >> 8));
                  *(ushort *)((int)puVar10 + 0x16) =
                       CONCAT11((char)*(undefined2 *)((int)puVar10 + 0x16),
                                (char)((ushort)*(undefined2 *)((int)puVar10 + 0x16) >> 8));
                  *(ushort *)(puVar10 + 6) =
                       CONCAT11((char)*(undefined2 *)(puVar10 + 6),
                                (char)((ushort)*(undefined2 *)(puVar10 + 6) >> 8));
                  *(ushort *)((int)puVar10 + 0x1a) =
                       CONCAT11((char)*(undefined2 *)((int)puVar10 + 0x1a),
                                (char)((ushort)*(undefined2 *)((int)puVar10 + 0x1a) >> 8));
                }
                puVar12 = (uint *)puVar12[3];
                if ((puVar12 != (uint *)0x0) && (iVar14 = FUN_00447670(puVar12), iVar14 == 0)) {
                  (&DAT_00e68280)[DAT_0050c630] = puVar12;
                  DAT_0050c630 = DAT_0050c630 + 1;
                  uVar13 = *puVar12;
                  *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                             (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                  *(ushort *)(puVar12 + 1) =
                       CONCAT11((char)*(undefined2 *)(puVar12 + 1),
                                (char)((ushort)*(undefined2 *)(puVar12 + 1) >> 8));
                  iVar14 = 2;
                  puVar10 = (uint *)((int)puVar12 + 6);
                  do {
                    uVar13 = *puVar10;
                    iVar14 = iVar14 + -1;
                    *puVar10 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                    puVar10 = puVar10 + 1;
                  } while (iVar14 != 0);
                  iVar14 = 2;
                  puVar10 = (uint *)((int)puVar12 + 0xe);
                  do {
                    uVar13 = *puVar10;
                    iVar14 = iVar14 + -1;
                    *puVar10 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                    puVar10 = puVar10 + 1;
                  } while (iVar14 != 0);
                  uVar13 = puVar12[6];
                  uVar4 = puVar12[7];
                  puVar12[6] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                  puVar12[7] = (uVar4 & 0xff00 | uVar4 << 0x10) << 8 |
                               (uVar4 >> 0x10 | uVar4 & 0xff0000) >> 8;
                }
              }
              puVar12 = ppuVar5[1];
              if (puVar12 != (uint *)0x0) {
                puVar10 = (uint *)puVar12[0xf];
                *(ushort *)puVar12 =
                     CONCAT11((char)*(undefined2 *)puVar12,
                              (char)((ushort)*(undefined2 *)puVar12 >> 8));
                *(ushort *)((int)puVar12 + 6) =
                     CONCAT11((char)*(undefined2 *)((int)puVar12 + 6),
                              (char)((ushort)*(undefined2 *)((int)puVar12 + 6) >> 8));
                *(ushort *)(puVar12 + 2) =
                     CONCAT11((char)*(undefined2 *)(puVar12 + 2),
                              (char)((ushort)*(undefined2 *)(puVar12 + 2) >> 8));
                uVar13 = puVar12[5];
                *(ushort *)((int)puVar12 + 10) =
                     CONCAT11((char)*(undefined2 *)((int)puVar12 + 10),
                              (char)((ushort)*(undefined2 *)((int)puVar12 + 10) >> 8));
                uVar4 = puVar12[6];
                puVar12[5] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                             (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                uVar13 = puVar12[7];
                puVar12[6] = (uVar4 & 0xff00 | uVar4 << 0x10) << 8 |
                             (uVar4 >> 0x10 | uVar4 & 0xff0000) >> 8;
                uVar4 = puVar12[8];
                puVar12[7] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                             (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                uVar13 = puVar12[9];
                puVar12[8] = (uVar4 & 0xff00 | uVar4 << 0x10) << 8 |
                             (uVar4 >> 0x10 | uVar4 & 0xff0000) >> 8;
                uVar4 = puVar12[10];
                puVar12[9] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                             (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                uVar13 = puVar12[0xb];
                puVar12[10] = (uVar4 & 0xff00 | uVar4 << 0x10) << 8 |
                              (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8;
                puVar12[0xb] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                *(ushort *)(puVar12 + 0xc) =
                     CONCAT11((char)*(undefined2 *)(puVar12 + 0xc),
                              (char)((ushort)*(undefined2 *)(puVar12 + 0xc) >> 8));
                uVar13 = puVar12[0xd];
                *(ushort *)((int)puVar12 + 0x32) =
                     CONCAT11((char)*(undefined2 *)((int)puVar12 + 0x32),
                              (char)((ushort)*(undefined2 *)((int)puVar12 + 0x32) >> 8));
                uVar4 = puVar12[0xe];
                puVar12[0xd] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                puVar12[0xe] = (uVar4 & 0xff00 | uVar4 << 0x10) << 8 |
                               (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8;
                for (; puVar10 != (uint *)0x0; puVar10 = (uint *)puVar10[10]) {
                  iVar14 = 3;
                  puVar12 = puVar10;
                  do {
                    uVar13 = *puVar12;
                    iVar14 = iVar14 + -1;
                    *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                    puVar12 = puVar12 + 1;
                  } while (iVar14 != 0);
                  iVar14 = 3;
                  puVar12 = puVar10 + 3;
                  do {
                    uVar13 = *puVar12;
                    iVar14 = iVar14 + -1;
                    *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                    puVar12 = puVar12 + 1;
                  } while (iVar14 != 0);
                  uVar13 = puVar10[6];
                  puVar10[6] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                  uVar13 = puVar10[7];
                  puVar10[7] = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                               (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
                  *(ushort *)(puVar10 + 9) =
                       CONCAT11((char)*(undefined2 *)(puVar10 + 9),
                                (char)((ushort)*(undefined2 *)(puVar10 + 9) >> 8));
                  *(ushort *)((int)puVar10 + 0x26) =
                       CONCAT11((char)*(undefined2 *)((int)puVar10 + 0x26),
                                (char)((ushort)*(undefined2 *)((int)puVar10 + 0x26) >> 8));
                }
              }
              iVar14 = 6;
              ppuVar11 = ppuVar5 + 2;
              do {
                puVar12 = *ppuVar11;
                iVar14 = iVar14 + -1;
                *ppuVar11 = (uint *)(((uint)puVar12 & 0xff00 | (int)puVar12 << 0x10) << 8 |
                                    ((uint)puVar12 & 0xff0000 | (uint)puVar12 >> 0x10) >> 8);
                ppuVar11 = ppuVar11 + 1;
              } while (iVar14 != 0);
              sVar2 = CONCAT11((char)*(undefined2 *)(ppuVar5 + 8),
                               (char)((ushort)*(undefined2 *)(ppuVar5 + 8) >> 8));
              *(short *)(ppuVar5 + 8) = sVar2;
              *(ushort *)((int)ppuVar5 + 0x22) =
                   CONCAT11((char)*(undefined2 *)((int)ppuVar5 + 0x22),
                            (char)((ushort)*(undefined2 *)((int)ppuVar5 + 0x22) >> 8));
              if ((ppuVar5[9] != (uint *)0x0) && (iVar14 = 0, 0 < sVar2)) {
                do {
                  puVar12 = ppuVar5[9] + iVar14;
                  uVar13 = ppuVar5[9][iVar14];
                  iVar14 = iVar14 + 1;
                  *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                             (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
                } while (iVar14 < *(short *)(ppuVar5 + 8));
              }
              iVar14 = 0;
              if ((ppuVar5[0xb] != (uint *)0x0) && (ppuVar5[10] != (uint *)0x0)) {
                sVar2 = *(short *)((int)ppuVar5 + 0x22);
                iVar8 = 0;
                if (sVar2 == 3) {
                  iVar8 = *(short *)(ppuVar5 + 8) * 3;
                }
                else if (sVar2 == 4) {
                  iVar8 = (int)*(short *)(ppuVar5 + 8) << 2;
                }
                else {
                  if (sVar2 != 5) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  iVar15 = (int)*(short *)(ppuVar5 + 8);
                  local_4 = 0;
                  if (0 < iVar15) {
                    puVar12 = ppuVar5[9];
                    iVar16 = iVar15;
                    do {
                      uVar13 = *puVar12;
                      puVar12 = puVar12 + 1;
                      iVar16 = iVar16 + -1;
                      iVar8 = iVar8 + 2 + uVar13;
                      local_4 = iVar15;
                    } while (iVar16 != 0);
                  }
                }
                if (0 < iVar8) {
                  do {
                    puVar1 = (undefined2 *)((int)ppuVar5[10] + iVar14 * 2);
                    iVar14 = iVar14 + 1;
                    uVar3 = *puVar1;
                    *puVar1 = CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
                  } while (iVar14 < iVar8);
                }
              }
              uVar9 = *(ushort *)(ppuVar5 + 0xe) << 8 | *(ushort *)(ppuVar5 + 0xe) >> 8;
              *(ushort *)(ppuVar5 + 0xe) = uVar9;
              if (((DAT_00e6b168 == 0) && (ppuVar5[0xb] != (uint *)0x0)) &&
                 (iVar14 = 0, 0 < (short)uVar9 * 3)) {
                do {
                  uVar3 = *(undefined2 *)((int)ppuVar5[0xb] + iVar14 * 2);
                  iVar8 = iVar14 * 2;
                  iVar14 = iVar14 + 1;
                  *(ushort *)((int)ppuVar5[0xb] + iVar8) =
                       CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
                } while (iVar14 < *(short *)(ppuVar5 + 0xe) * 3);
              }
              *(ushort *)((int)ppuVar5 + 0x3a) =
                   CONCAT11((char)*(undefined2 *)((int)ppuVar5 + 0x3a),
                            (char)((ushort)*(undefined2 *)((int)ppuVar5 + 0x3a) >> 8));
              *(ushort *)(ppuVar5 + 0xf) =
                   CONCAT11((char)*(undefined2 *)(ppuVar5 + 0xf),
                            (char)((ushort)*(undefined2 *)(ppuVar5 + 0xf) >> 8));
              *(ushort *)((int)ppuVar5 + 0x3e) =
                   CONCAT11((char)*(undefined2 *)((int)ppuVar5 + 0x3e),
                            (char)((ushort)*(undefined2 *)((int)ppuVar5 + 0x3e) >> 8));
            }
            local_4 = local_4 + 1;
          } while (local_4 < (int)param_1[5]);
        }
      }
    }
    else if ((int)uVar6 < 0xd065) {
      if (uVar6 == 0xd064) {
        iVar14 = 0xc;
        puVar12 = param_1 + 7;
        do {
          uVar13 = *puVar12;
          iVar14 = iVar14 + -1;
          *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                     (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
          puVar12 = puVar12 + 1;
        } while (iVar14 != 0);
      }
      else if (uVar6 == 0x5066) {
        iVar14 = 8;
        puVar12 = param_1 + 7;
        do {
          uVar13 = *puVar12;
          iVar14 = iVar14 + -1;
          *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                     (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
          puVar12 = puVar12 + 1;
        } while (iVar14 != 0);
        iVar14 = 3;
        puVar12 = param_1 + 0xf;
        do {
          uVar13 = *puVar12;
          iVar14 = iVar14 + -1;
          *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                     (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
          puVar12 = puVar12 + 1;
        } while (iVar14 != 0);
      }
    }
    else if (uVar6 == 0xd065) {
      iVar14 = 0xc;
      puVar12 = param_1 + 7;
      do {
        uVar13 = *puVar12;
        iVar14 = iVar14 + -1;
        *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                   (uVar13 >> 0x10 | uVar13 & 0xff0000) >> 8;
        puVar12 = puVar12 + 1;
      } while (iVar14 != 0);
      iVar14 = 3;
      puVar12 = param_1 + 0x13;
      do {
        uVar13 = *puVar12;
        iVar14 = iVar14 + -1;
        *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                   (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
        puVar12 = puVar12 + 1;
      } while (iVar14 != 0);
    }
    else if (uVar6 == 0xd066) {
      *(ushort *)(param_1 + 7) =
           CONCAT11((char)*(undefined2 *)(param_1 + 7),
                    (char)((ushort)*(undefined2 *)(param_1 + 7) >> 8));
      *(ushort *)((int)param_1 + 0x1e) =
           CONCAT11((char)*(undefined2 *)((int)param_1 + 0x1e),
                    (char)((ushort)*(undefined2 *)((int)param_1 + 0x1e) >> 8));
      iVar14 = 3;
      puVar12 = param_1 + 8;
      do {
        uVar13 = *puVar12;
        iVar14 = iVar14 + -1;
        *puVar12 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 |
                   (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
        puVar12 = puVar12 + 1;
      } while (iVar14 != 0);
    }
    if ((*param_1 & 0x4000) != 0) {
      uVar13 = param_1[5];
      iVar14 = 0;
      uVar13 = (uVar13 & 0xff00 | uVar13 << 0x10) << 8 | (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8;
      param_1[5] = uVar13;
      if (0 < (int)uVar13) {
        do {
          FUN_004476b0(*(undefined4 *)(param_1[6] + iVar14 * 4));
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)param_1[5]);
      }
    }
  }
  return;
}

