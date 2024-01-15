#include "prototype.h"


void FUN_00445ee0(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                 uint **param_7,int *param_8,char param_9,byte param_10)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint *local_100;
  int local_fc;
  undefined4 *local_f8;
  char local_f2;
  char local_f1;
  int local_f0;
  undefined4 *local_ec;
  int local_e8;
  uint *local_e4;
  undefined4 local_e0 [56];
  
  iVar12 = *param_8;
  local_f1 = '\0';
  local_f2 = '\0';
  puVar14 = *param_7;
  *param_7 = (uint *)0x0;
  *param_8 = 0;
  if (puVar14 == (uint *)0x0) {
    return;
  }
  puVar5 = (uint *)FUN_0048e680(s___data_default_mat_004b48cc);
  local_e4 = puVar5;
  FUN_00408fb0(puVar14,puVar5);
  local_f8 = local_e0;
  *param_7 = puVar5;
  local_f0 = param_3;
  local_e8 = param_4;
  if ((param_10 & 0x10) != 0) {
    local_f0 = param_3 * 2;
    local_f1 = '\x01';
    if ((int)param_5 < local_f0) {
      param_5 = FUN_00445c90(local_f0);
    }
  }
  if ((param_10 & 1) != 0) {
    local_e8 = param_4 * 2;
    local_f2 = '\x01';
    if ((int)param_6 < local_e8) {
      param_6 = FUN_00445c90(local_e8);
    }
  }
  iVar13 = param_6 * param_5 * 2;
  local_ec = (undefined4 *)FUN_00408e60(puVar14,iVar13);
  FUN_0049eb80(puVar5,s_Rovermatic_004b48c0);
  puVar4 = local_e4;
  *(float *)((int)puVar5 + 10) = (float)local_f0 / (float)param_5;
  *(float *)((int)puVar5 + 0xe) = (float)local_e8 / (float)param_6;
  puVar5[0x10] = 0;
  if (((((param_1 == 0) && (param_2 == 3)) || ((param_1 == 5 && ((param_2 == 1 || (param_2 == 3)))))
       ) || (param_1 == 4)) || ((param_1 == 3 && (param_2 == 0)))) {
    puVar5[0x12] = 0x10;
    puVar5[0x13] = 4;
    puVar5[0x14] = 4;
    puVar5[0x11] = 2;
    puVar5[0x15] = 4;
    puVar5[0x1c] = 4;
    puVar5[0x16] = 0xc;
    puVar5[0x17] = 8;
    puVar5[0x18] = 4;
    puVar5[0x1d] = 0;
    puVar5[0x19] = 4;
    puVar5[0x1a] = 4;
    puVar5[0x1b] = 4;
    puVar5[0x1e] = 4;
    puVar5[0x1f] = 2;
  }
  else {
    puVar5[0x13] = 5;
    puVar5[0x14] = 5;
    puVar5[0x15] = 5;
    puVar5[0x11] = 2;
    puVar5[0x12] = 0x10;
    puVar5[0x1c] = 1;
    puVar5[0x16] = 0xb;
    puVar5[0x17] = 6;
    puVar5[0x18] = 1;
    puVar5[0x1d] = 0;
    puVar5[0x19] = 3;
    puVar5[0x1a] = 3;
    puVar5[0x1b] = 3;
    puVar5[0x1e] = 7;
    puVar5[0x1f] = 1;
  }
  local_e4[0x20] = param_5;
  local_e4[0x21] = param_6;
  local_e4[0x22] = 1;
  local_e4[0x23] = 0;
  *local_f8 = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = param_5;
  local_f8[4] = param_6;
  local_f8[5] = iVar13;
  local_f8[6] = param_5 * 2;
  local_f8[7] = param_5;
  puVar5 = puVar5 + 0x11;
  puVar15 = local_f8 + 8;
  for (iVar13 = 0xe; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar15 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar15 = puVar15 + 1;
  }
  local_f8[0x16] = local_ec;
  local_f8[0x17] = 0;
  puVar9 = local_ec;
  if ((param_1 == 4) && (param_2 == 0)) {
    local_fc = 0;
    iVar12 = param_4;
    if (0 < param_4) {
      do {
        iVar13 = 0;
        puVar10 = puVar9;
        if (0 < param_3) {
          do {
            iVar13 = iVar13 + 2;
            uVar6 = (uint)(*(byte *)puVar14 >> 4);
            puVar9 = puVar10 + 1;
            *(ushort *)puVar10 =
                 (ushort)(((uVar6 << 4 | uVar6) << 4 | uVar6) << 4) |
                 (ushort)(*(byte *)puVar14 >> 4);
            uVar6 = *(byte *)puVar14 & 0xf;
            puVar14 = (uint *)((int)puVar14 + 1);
            *(ushort *)((int)puVar10 + 2) =
                 (ushort)(((uVar6 << 4 | uVar6) << 4 | uVar6) << 4) | (ushort)uVar6;
            puVar10 = puVar9;
          } while (iVar13 < param_3);
        }
        if (iVar13 < (int)param_5) {
          uVar11 = param_5 - iVar13;
          puVar10 = puVar9;
          for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
          for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined2 *)puVar10 = 0;
            puVar10 = (undefined4 *)((int)puVar10 + 2);
          }
        }
        iVar12 = iVar12 + -1;
        local_fc = param_4;
      } while (iVar12 != 0);
    }
  }
  else if ((param_1 == 3) && (param_2 == 0)) {
    local_fc = 0;
    iVar12 = param_4;
    if (0 < param_4) {
      do {
        iVar13 = 0;
        puVar10 = puVar9;
        if (0 < param_3) {
          do {
            puVar9 = puVar10 + 1;
            *(ushort *)puVar10 = (ushort)((*(byte *)puVar14 & 0xfffffff0) << 8) | 0xfff;
            bVar1 = *(byte *)puVar14;
            puVar14 = (uint *)((int)puVar14 + 1);
            *(ushort *)((int)puVar10 + 2) = (ushort)((bVar1 & 0xf) << 0xc) | 0xfff;
            iVar13 = iVar13 + 2;
            puVar10 = puVar9;
          } while (iVar13 < param_3);
        }
        if (iVar13 < (int)param_5) {
          uVar11 = param_5 - iVar13;
          puVar10 = puVar9;
          for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
          for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined2 *)puVar10 = 0;
            puVar10 = (undefined4 *)((int)puVar10 + 2);
          }
        }
        iVar12 = iVar12 + -1;
        local_fc = param_4;
      } while (iVar12 != 0);
    }
  }
  else if ((param_1 == 4) && (param_2 == 1)) {
    if (param_9 == '\x01') {
      local_fc = 0;
      if (0 < param_4) {
        local_100 = (uint *)param_4;
        do {
          puVar10 = puVar9;
          iVar12 = 0;
          iVar13 = param_3;
          if (0 < param_3) {
            do {
              puVar9 = (undefined4 *)((int)puVar10 + 2);
              bVar1 = *(byte *)puVar14;
              uVar6 = (uint)(bVar1 >> 4);
              puVar14 = (uint *)((int)puVar14 + 1);
              iVar13 = iVar13 + -1;
              *(ushort *)puVar10 =
                   (ushort)(((uVar6 << 4 | uVar6) << 4 | uVar6) << 4) | (ushort)(bVar1 >> 4);
              puVar10 = puVar9;
              iVar12 = param_3;
            } while (iVar13 != 0);
          }
          if (iVar12 < (int)param_5) {
            uVar11 = param_5 - iVar12;
            puVar10 = puVar9;
            for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
            for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined2 *)puVar10 = 0;
              puVar10 = (undefined4 *)((int)puVar10 + 2);
            }
          }
          local_100 = (uint *)((int)local_100 + -1);
          local_fc = param_4;
        } while (local_100 != (uint *)0x0);
      }
    }
    else {
      local_fc = 0;
      iVar12 = param_4;
      if (0 < param_4) {
        do {
          iVar13 = param_3;
          puVar10 = puVar9;
          iVar8 = 0;
          if (0 < param_3) {
            do {
              puVar9 = (undefined4 *)((int)puVar10 + 2);
              bVar1 = *(byte *)puVar14 >> 4;
              puVar14 = (uint *)((int)puVar14 + 1);
              iVar13 = iVar13 + -1;
              *(ushort *)puVar10 =
                   (ushort)(((bVar1 | 0xfff0) << 4 | (uint)bVar1) << 4) | (ushort)bVar1;
              puVar10 = puVar9;
              iVar8 = param_3;
            } while (iVar13 != 0);
          }
          if (iVar8 < (int)param_5) {
            uVar11 = param_5 - iVar8;
            puVar10 = puVar9;
            for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
            for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined2 *)puVar10 = 0;
              puVar10 = (undefined4 *)((int)puVar10 + 2);
            }
          }
          iVar12 = iVar12 + -1;
          local_fc = param_4;
        } while (iVar12 != 0);
      }
    }
  }
  else {
    if (param_1 == 2) {
      if (param_2 == 0) {
        local_fc = 0;
        if (0 < param_4) {
          local_100 = (uint *)param_4;
          do {
            iVar13 = 0;
            puVar10 = puVar9;
            if (0 < param_3) {
              do {
                puVar9 = puVar10 + 1;
                uVar2 = *(undefined2 *)(iVar12 + (uint)(*(byte *)puVar14 >> 4) * 2);
                uVar3 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
                *(ushort *)puVar10 = uVar3 >> 1 | uVar3 << 0xf;
                bVar1 = *(byte *)puVar14;
                puVar14 = (uint *)((int)puVar14 + 1);
                uVar2 = *(undefined2 *)(iVar12 + (bVar1 & 0xf) * 2);
                uVar3 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
                *(ushort *)((int)puVar10 + 2) = uVar3 >> 1 | uVar3 << 0xf;
                iVar13 = iVar13 + 2;
                puVar10 = puVar9;
              } while (iVar13 < param_3);
            }
            if (iVar13 < (int)param_5) {
              uVar11 = param_5 - iVar13;
              puVar10 = puVar9;
              for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
              for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined2 *)puVar10 = 0;
                puVar10 = (undefined4 *)((int)puVar10 + 2);
              }
            }
            local_100 = (uint *)((int)local_100 + -1);
            local_fc = param_4;
          } while (local_100 != (uint *)0x0);
        }
        goto LAB_00446257;
      }
      if (param_2 == 1) {
        local_fc = 0;
        if (0 < param_4) {
          local_100 = (uint *)param_4;
          do {
            puVar10 = puVar9;
            iVar13 = param_3;
            iVar8 = 0;
            if (0 < param_3) {
              do {
                bVar1 = *(byte *)puVar14;
                puVar14 = (uint *)((int)puVar14 + 1);
                puVar9 = (undefined4 *)((int)puVar10 + 2);
                uVar2 = *(undefined2 *)(iVar12 + (uint)bVar1 * 2);
                uVar3 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
                iVar13 = iVar13 + -1;
                *(ushort *)puVar10 = uVar3 >> 1 | uVar3 << 0xf;
                puVar10 = puVar9;
                iVar8 = param_3;
              } while (iVar13 != 0);
            }
            if (iVar8 < (int)param_5) {
              uVar11 = param_5 - iVar8;
              puVar10 = puVar9;
              for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
              for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined2 *)puVar10 = 0;
                puVar10 = (undefined4 *)((int)puVar10 + 2);
              }
            }
            local_100 = (uint *)((int)local_100 + -1);
            local_fc = param_4;
          } while (local_100 != (uint *)0x0);
        }
        goto LAB_00446257;
      }
    }
    local_100 = puVar14;
    if (param_1 == 5) {
      if (param_2 == 1) {
        local_fc = 0;
        iVar12 = param_4;
        if (0 < param_4) {
          do {
            iVar13 = param_3;
            puVar10 = puVar9;
            iVar8 = 0;
            if (0 < param_3) {
              do {
                puVar9 = (undefined4 *)((int)puVar10 + 2);
                bVar1 = *(byte *)puVar14;
                puVar14 = (uint *)((int)puVar14 + 1);
                *(ushort *)puVar10 = (ushort)(bVar1 >> 4) << 0xc | 0xfff;
                iVar13 = iVar13 + -1;
                puVar10 = puVar9;
                iVar8 = param_3;
              } while (iVar13 != 0);
            }
            if (iVar8 < (int)param_5) {
              iVar8 = param_5 - iVar8;
              do {
                *(undefined2 *)puVar9 = *(undefined2 *)((int)puVar9 + -2);
                puVar9 = (undefined4 *)((int)puVar9 + 2);
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            iVar12 = iVar12 + -1;
            local_fc = param_4;
          } while (iVar12 != 0);
        }
        goto LAB_00446257;
      }
      if (param_2 == 2) {
        local_fc = 0;
        iVar12 = param_4;
        if (0 < param_4) {
          do {
            puVar10 = puVar9;
            iVar13 = param_3;
            iVar8 = 0;
            if (0 < param_3) {
              do {
                puVar9 = (undefined4 *)((int)puVar10 + 2);
                uVar3 = *(ushort *)local_100;
                local_100 = (uint *)((int)local_100 + 2);
                iVar13 = iVar13 + -1;
                *(ushort *)puVar10 = uVar3 | 0x8000;
                puVar10 = puVar9;
                iVar8 = param_3;
              } while (iVar13 != 0);
            }
            if (iVar8 < (int)param_5) {
              iVar8 = param_5 - iVar8;
              do {
                *(undefined2 *)puVar9 = *(undefined2 *)((int)puVar9 + -2);
                puVar9 = (undefined4 *)((int)puVar9 + 2);
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            iVar12 = iVar12 + -1;
            local_fc = param_4;
          } while (iVar12 != 0);
        }
        goto LAB_00446257;
      }
    }
    if ((param_1 == 0) && (param_2 == 2)) {
      local_fc = param_1;
      iVar12 = param_4;
      if (0 < param_4) {
        do {
          puVar10 = puVar9;
          iVar13 = param_3;
          iVar8 = 0;
          if (0 < param_3) {
            do {
              puVar9 = (undefined4 *)((int)puVar10 + 2);
              uVar3 = *(ushort *)local_100;
              local_100 = (uint *)((int)local_100 + 2);
              uVar3 = CONCAT11((char)uVar3,(char)(uVar3 >> 8));
              iVar13 = iVar13 + -1;
              *(ushort *)puVar10 = uVar3 >> 1 | uVar3 << 0xf;
              puVar10 = puVar9;
              iVar8 = param_3;
            } while (iVar13 != 0);
          }
          if (iVar8 < (int)param_5) {
            uVar11 = param_5 - iVar8;
            puVar10 = puVar9;
            for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
            for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined2 *)puVar10 = 0;
              puVar10 = (undefined4 *)((int)puVar10 + 2);
            }
          }
          iVar12 = iVar12 + -1;
          local_fc = param_4;
        } while (iVar12 != 0);
      }
    }
    else {
      if (param_1 == 5) {
        if (param_2 == 3) {
          local_fc = 0;
          if (0 < param_4) {
            local_100 = (uint *)param_4;
            do {
              iVar12 = param_3;
              puVar10 = puVar9;
              iVar13 = 0;
              if (0 < param_3) {
                do {
                  uVar6 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar9 = (undefined4 *)((int)puVar10 + 2);
                  iVar12 = iVar12 + -1;
                  *(ushort *)puVar10 =
                       (ushort)((((uVar6 >> 0x1c) << 4 | uVar6 >> 0x14 & 0xf) << 4 |
                                uVar6 >> 0xc & 0xf) << 4) | (ushort)(uVar6 >> 4) & 0xf;
                  puVar10 = puVar9;
                  iVar13 = param_3;
                } while (iVar12 != 0);
              }
              if (iVar13 < (int)param_5) {
                iVar13 = param_5 - iVar13;
                do {
                  *(undefined2 *)puVar9 = *(undefined2 *)((int)puVar9 + -2);
                  puVar9 = (undefined4 *)((int)puVar9 + 2);
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
              local_100 = (uint *)((int)local_100 + -1);
              local_fc = param_4;
            } while (local_100 != (uint *)0x0);
          }
          goto LAB_00446257;
        }
        if (param_2 == 7) {
          local_fc = 0;
          if (0 < param_4) {
            local_100 = (uint *)param_4;
            do {
              iVar12 = param_3;
              puVar10 = puVar9;
              iVar13 = 0;
              if (0 < param_3) {
                do {
                  uVar6 = *puVar14;
                  puVar9 = (undefined4 *)((int)puVar10 + 2);
                  puVar14 = (uint *)((int)puVar14 + 3);
                  iVar12 = iVar12 + -1;
                  *(ushort *)puVar10 =
                       (ushort)(((uVar6 >> 0x13 | 0xffe0) << 5 | uVar6 >> 0xb & 0x1f) << 5) |
                       (ushort)(uVar6 >> 3) & 0x1f;
                  puVar10 = puVar9;
                  iVar13 = param_3;
                } while (iVar12 != 0);
              }
              if (iVar13 < (int)param_5) {
                iVar13 = param_5 - iVar13;
                do {
                  *(undefined2 *)puVar9 = *(undefined2 *)((int)puVar9 + -2);
                  puVar9 = (undefined4 *)((int)puVar9 + 2);
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
              local_100 = (uint *)((int)local_100 + -1);
              local_fc = param_4;
            } while (local_100 != (uint *)0x0);
          }
          goto LAB_00446257;
        }
      }
      if (((param_1 == 0) && (param_2 == 3)) && (local_fc = param_1, 0 < param_4)) {
        local_100 = (uint *)param_4;
        do {
          puVar10 = puVar9;
          iVar12 = param_3;
          iVar13 = 0;
          if (0 < param_3) {
            do {
              uVar6 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar9 = (undefined4 *)((int)puVar10 + 2);
              uVar11 = (uVar6 & 0xff00 | uVar6 << 0x10) << 8;
              iVar12 = iVar12 + -1;
              *(ushort *)puVar10 =
                   (ushort)((((uVar6 >> 0x10 & 0xfffff000) >> 8 | uVar11 >> 0x1c) << 4 |
                            uVar11 >> 0x14 & 0xf) << 4) | ((ushort)(uVar6 >> 0x10) & 0xff) >> 4;
              puVar10 = puVar9;
              iVar13 = param_3;
            } while (iVar12 != 0);
          }
          if (iVar13 < (int)param_5) {
            uVar11 = param_5 - iVar13;
            puVar10 = puVar9;
            for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
            for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined2 *)puVar10 = 0;
              puVar10 = (undefined4 *)((int)puVar10 + 2);
            }
          }
          local_100 = (uint *)((int)local_100 + -1);
          local_fc = param_4;
        } while (local_100 != (uint *)0x0);
      }
    }
  }
LAB_00446257:
  if (local_fc < (int)param_6) {
    local_100 = (uint *)(param_6 - local_fc);
    do {
      uVar6 = param_5;
      puVar10 = puVar9;
      if (0 < (int)param_5) {
        do {
          puVar9 = (undefined4 *)((int)puVar10 + 2);
          uVar6 = uVar6 - 1;
          *(undefined2 *)puVar10 = *(undefined2 *)((int)puVar10 + param_3 * -2);
          puVar10 = puVar9;
        } while (uVar6 != 0);
      }
      local_100 = (uint *)((int)local_100 + -1);
    } while (local_100 != (uint *)0x0);
  }
  if ((local_f1 != '\0') &&
     (puVar7 = (undefined2 *)((int)local_ec + local_f0 * 2 + -2), 0 < param_4)) {
    local_100 = (uint *)param_4;
    puVar9 = local_ec;
    do {
      iVar12 = param_3;
      if (0 < param_3) {
        do {
          uVar2 = *(undefined2 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 2);
          *puVar7 = uVar2;
          puVar7 = puVar7 + -1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      puVar7 = puVar7 + param_5 + param_3;
      puVar9 = (undefined4 *)((int)puVar9 + (param_5 - param_3) * 2);
      local_100 = (uint *)((int)local_100 + -1);
    } while (local_100 != (uint *)0x0);
  }
  if ((local_f2 != '\0') &&
     (puVar7 = (undefined2 *)((int)local_ec + (local_e8 + -1) * param_5 * 2), puVar9 = local_ec,
     0 < param_4)) {
    do {
      iVar12 = local_f0;
      if (0 < local_f0) {
        do {
          uVar2 = *(undefined2 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 2);
          *puVar7 = uVar2;
          puVar7 = puVar7 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      puVar7 = puVar7 + -(local_f0 + param_5);
      param_4 = param_4 + -1;
      puVar9 = (undefined4 *)((int)puVar9 + (param_5 - local_f0) * 2);
    } while (param_4 != 0);
  }
  FUN_0048aa40(local_e4[0x24]);
  FUN_0048a5e0(puVar4[0x24],&local_f8,1,puVar4[0x1f]);
  return;
}

