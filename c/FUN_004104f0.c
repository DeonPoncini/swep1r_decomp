#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004104f0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  bool bVar12;
  char *pcVar13;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar2 = DAT_00e35a98;
  if (DAT_004b5c40 != 0) {
    DAT_004b5c40 = 0;
  }
  iVar3 = FUN_00485880(0x58,0);
  if (iVar3 != 0) {
    FUN_00410430();
  }
  iVar3 = FUN_00485880(0x1d,0);
  if ((((iVar3 == 0) || (iVar3 = FUN_00485880(0x2e,0), iVar3 == 0)) ||
      (iVar3 = FUN_00485880(0x15,0), iVar3 == 0)) || (*(int *)(DAT_0050c454 + 8) != 9)) {
    iVar3 = FUN_00485880(0x9d,0);
    if (((iVar3 == 0) || (iVar3 = FUN_00485880(0x31,0), iVar3 == 0)) ||
       ((iVar3 = FUN_00485880(0x25,0), iVar3 == 0 || (*(int *)(DAT_0050c454 + 8) != 9)))) {
      iVar3 = FUN_00485880(0x3b,0);
      if (iVar3 == 0) {
        iVar3 = FUN_00485880(0x3c,0);
        if (iVar3 == 0) {
          iVar3 = FUN_00485880(0x3d,0);
          if (iVar3 == 0) {
            iVar3 = FUN_00485880(0x3e,0);
            if (iVar3 == 0) {
              iVar3 = FUN_00485880(0x3a,0);
              if (iVar3 == 0) {
                iVar3 = FUN_00485880(0xb8,0);
                if (((iVar3 == 0) && (iVar3 = FUN_00485880(0x38,0), iVar3 == 0)) ||
                   (iVar3 = FUN_00485880(0x23,0), iVar3 == 0)) {
                  if (DAT_0050c07c == 2) {
                    iVar3 = FUN_00485880(0x1d,0);
                    if ((iVar3 == 0) && (iVar3 = FUN_00485880(0x9d,0), iVar3 == 0)) {
                      iVar3 = FUN_00485880(0x37,0);
                      if ((iVar3 == 0) || (iVar3 = FUN_00485880(0x14,0), iVar3 == 0)) {
                        iVar3 = FUN_00485880(0x17,0);
                        if (((iVar3 == 0) ||
                            (((iVar3 = FUN_00485880(0x21,0), iVar3 == 0 ||
                              (iVar3 = FUN_00485880(0x26,0), iVar3 == 0)) ||
                             (iVar3 = FUN_00485880(0x15,0), iVar3 == 0)))) || (DAT_004d5e00 != 0))
                        goto LAB_0041094f;
                        if (DAT_004d79ec != 0) goto LAB_00410f62;
                        uVar4 = 0x2b;
                        DAT_0050c048 = DAT_0050c048 ^ 0x2000;
LAB_00410938:
                        FUN_00440550(uVar4);
                        DAT_004d79ec = 1;
                      }
                      else {
                        if (DAT_004d5e00 != 0) goto LAB_0041094f;
                        if (DAT_004d79ec != 0) goto LAB_00410f62;
                        DAT_0050cb68 = DAT_0050cb68 ^ 1;
                        FUN_00440550(0x2c);
                        DAT_004d79ec = 1;
                      }
                    }
                    else {
                      iVar3 = FUN_00485880(0x44,0);
                      if (iVar3 == 0) goto LAB_0041094f;
                      if (DAT_004d79ec != 0) goto LAB_00410f62;
                      if (DAT_004d5e00 == 0) {
                        uVar4 = 0x28;
                        DAT_0050c048 = DAT_0050c048 ^ 4;
                        goto LAB_00410938;
                      }
LAB_00410eb5:
                      DAT_004d79ec = 1;
                    }
                  }
                  else {
LAB_0041094f:
                    iVar3 = FUN_00485880(0x1d,0);
                    if ((iVar3 == 0) && (iVar3 = FUN_00485880(0x9d,0), iVar3 == 0)) {
LAB_00410e8b:
                      iVar3 = FUN_00485880(0x41,0);
                      if (iVar3 != 0) {
                        if (DAT_004d79ec != 0) goto LAB_00410f62;
                        FUN_00440550(0x46);
                        FUN_0041bdd0();
                        goto LAB_00410eb5;
                      }
                      iVar3 = FUN_00485880(0x3f,0);
                      if ((iVar3 == 0) && (iVar3 = FUN_00485880(0x40,0), iVar3 == 0)) {
                        iVar3 = FUN_00485880(0x46,0);
                        if ((iVar3 == 0) || (iVar3 = FUN_00485880(199,0), iVar3 == 0)) {
                          DAT_004d79ec = 0;
                        }
                        else {
                          if (DAT_004d79ec != 0) goto LAB_00410f62;
                          DAT_004d79ec = 1;
                          if (*(int *)(DAT_0050c454 + 8) == 9) {
                            DAT_0050c048 = DAT_0050c048 ^ 0x40;
                            FUN_0043d9a0(DAT_0050c454);
                          }
                        }
                      }
                      else {
                        if (DAT_004d79ec != 0) goto LAB_00410f62;
                        DAT_004d79e0 = 1;
                        DAT_004d79ec = 1;
                      }
                    }
                    else {
                      iVar3 = FUN_00485880(0x24,0);
                      if (iVar3 == 0) {
                        iVar3 = FUN_00485880(0x38,0);
                        if ((iVar3 == 0) || (*(int *)(DAT_0050c454 + 8) != 0xd)) {
LAB_00410b9c:
                          iVar3 = FUN_00485880(0x32,0);
                          if (iVar3 == 0) {
                            iVar3 = FUN_00485880(0x21,0);
                            if (iVar3 == 0) {
                              iVar3 = FUN_00485880(0x10,0);
                              if ((iVar3 == 0) || (DAT_004d5e00 == 0)) {
                                iVar3 = FUN_00485880(0x57,0);
                                if (iVar3 == 0) goto LAB_00410e8b;
                                if (DAT_004d79ec != 0) goto LAB_00410f62;
                                DAT_004d79ec = 1;
                                DAT_004d79dc = (uint)(DAT_004d79dc == 0);
                              }
                              else {
                                if (DAT_004d79ec != 0) goto LAB_00410f62;
                                DAT_004d79ec = 1;
                                local_20 = 0x50617773;
                                local_1c = 0xffffffff;
                                local_18 = 1;
                                FUN_00450c50(0x416c6c21,&local_20);
                              }
                              goto LAB_00410f5a;
                            }
                            if (DAT_004d79ec != 0) goto LAB_00410f62;
                            DAT_004d79ec = 1;
                            if (DAT_004b2914 == 0) {
                              pcVar13 = s__MONDOTEXT_H_0042__nNo_Force_Fee_004b2880;
                            }
                            else {
                              if (DAT_004d765c != 0) {
                                if ((DAT_004b2910 == 0) && (DAT_004b4938 != 0)) {
                                  pcVar13 = (char *)FUN_00421360(
                                                  s__MONDOTEXT_H_0369_Force_Feedback_004b5c88);
                                  uVar6 = 0xffffffff;
                                  do {
                                    pcVar9 = pcVar13;
                                    if (uVar6 == 0) break;
                                    uVar6 = uVar6 - 1;
                                    pcVar9 = pcVar13 + 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar9;
                                  } while (cVar1 != '\0');
                                  uVar6 = ~uVar6;
                                  iVar3 = -1;
                                  pcVar13 = &DAT_004d78d0;
                                  do {
                                    pcVar10 = pcVar13;
                                    if (iVar3 == 0) break;
                                    iVar3 = iVar3 + -1;
                                    pcVar10 = pcVar13 + 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar10;
                                  } while (cVar1 != '\0');
                                  puVar8 = (undefined4 *)(pcVar9 + -uVar6);
                                  puVar11 = (undefined4 *)(pcVar10 + -1);
                                  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                    *puVar11 = *puVar8;
                                    puVar8 = puVar8 + 1;
                                    puVar11 = puVar11 + 1;
                                  }
                                  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                                    *(undefined *)puVar11 = *(undefined *)puVar8;
                                    puVar8 = (undefined4 *)((int)puVar8 + 1);
                                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                                  }
                                }
                                else {
                                  pcVar13 = (char *)FUN_00421360(
                                                  s__MONDOTEXT_H_0370_Force_Feedback_004b5c5c);
                                  uVar6 = 0xffffffff;
                                  do {
                                    pcVar9 = pcVar13;
                                    if (uVar6 == 0) break;
                                    uVar6 = uVar6 - 1;
                                    pcVar9 = pcVar13 + 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar9;
                                  } while (cVar1 != '\0');
                                  uVar6 = ~uVar6;
                                  iVar3 = -1;
                                  pcVar13 = &DAT_004d78d0;
                                  do {
                                    pcVar10 = pcVar13;
                                    if (iVar3 == 0) break;
                                    iVar3 = iVar3 + -1;
                                    pcVar10 = pcVar13 + 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar10;
                                  } while (cVar1 != '\0');
                                  puVar8 = (undefined4 *)(pcVar9 + -uVar6);
                                  puVar11 = (undefined4 *)(pcVar10 + -1);
                                  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                    *puVar11 = *puVar8;
                                    puVar8 = puVar8 + 1;
                                    puVar11 = puVar11 + 1;
                                  }
                                  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                                    *(undefined *)puVar11 = *(undefined *)puVar8;
                                    puVar8 = (undefined4 *)((int)puVar8 + 1);
                                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                                  }
                                  FUN_0040a120(1);
                                }
                                FUN_00440550(0x46);
                                if ((DAT_004b2910 != 0) || (DAT_004b2910 = 1, DAT_004b4938 == 0)) {
                                  DAT_004b2910 = 0;
                                }
                                uVar4 = FUN_00414d90(0,0x1b);
                                FUN_0040c100(uVar4);
                                iVar3 = FUN_00411810();
                                if (((DAT_004b2940 != 0) || (iVar3 == 0)) ||
                                   (*(int *)(iVar3 + 0x1c) != 0x1b)) {
                                  FUN_0040ab80(s_current_004b2640);
                                }
                                goto LAB_00410f5a;
                              }
                              pcVar13 = s__MONDOTEXT_H_0368_No_force_effec_004b5cb4;
                            }
                          }
                          else {
                            if (DAT_004d79ec != 0) goto LAB_00410f62;
                            DAT_004d79ec = 1;
                            if (DAT_004b2950 != 0) {
                              if (DAT_004d6b38 == 0) {
                                pcVar13 = s__MONDOTEXT_H_0365_Mouse_ENABLED_004b5d04;
                              }
                              else {
                                pcVar13 = s__MONDOTEXT_H_0366_Mouse_DISABLED_004b5ce0;
                              }
                              pcVar13 = (char *)FUN_00421360(pcVar13);
                              uVar6 = 0xffffffff;
                              do {
                                pcVar9 = pcVar13;
                                if (uVar6 == 0) break;
                                uVar6 = uVar6 - 1;
                                pcVar9 = pcVar13 + 1;
                                cVar1 = *pcVar13;
                                pcVar13 = pcVar9;
                              } while (cVar1 != '\0');
                              uVar6 = ~uVar6;
                              iVar3 = -1;
                              pcVar13 = &DAT_004d78d0;
                              do {
                                pcVar10 = pcVar13;
                                if (iVar3 == 0) break;
                                iVar3 = iVar3 + -1;
                                pcVar10 = pcVar13 + 1;
                                cVar1 = *pcVar13;
                                pcVar13 = pcVar10;
                              } while (cVar1 != '\0');
                              puVar8 = (undefined4 *)(pcVar9 + -uVar6);
                              puVar11 = (undefined4 *)(pcVar10 + -1);
                              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                *puVar11 = *puVar8;
                                puVar8 = puVar8 + 1;
                                puVar11 = puVar11 + 1;
                              }
                              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                                *(undefined *)puVar11 = *(undefined *)puVar8;
                                puVar8 = (undefined4 *)((int)puVar8 + 1);
                                puVar11 = (undefined4 *)((int)puVar11 + 1);
                              }
                              FUN_00440550(0x46);
                              DAT_004d6b38 = (uint)(DAT_004d6b38 == 0);
                              if (DAT_004b2940 == 0) {
                                uVar4 = FUN_00414d90(0,0x19);
                                FUN_0040b740(1,uVar4);
                              }
                              iVar3 = FUN_00411810();
                              if ((DAT_004b2940 == 0) && (iVar3 != 0)) {
                                bVar12 = *(int *)(iVar3 + 0x1c) == 0x19;
                                goto LAB_00410c6e;
                              }
                              goto LAB_00410c74;
                            }
                            pcVar13 = s__MONDOTEXT_H_0036__nNO_MOUSE_DET_004b25e4;
                          }
LAB_00410ccd:
                          DAT_004d79ec = 1;
                          pcVar13 = (char *)FUN_00421360(pcVar13);
                          uVar6 = 0xffffffff;
                          do {
                            pcVar9 = pcVar13;
                            if (uVar6 == 0) break;
                            uVar6 = uVar6 - 1;
                            pcVar9 = pcVar13 + 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar9;
                          } while (cVar1 != '\0');
                          uVar6 = ~uVar6;
                          iVar3 = -1;
                          pcVar13 = &DAT_004d78d0;
                          do {
                            pcVar10 = pcVar13;
                            if (iVar3 == 0) break;
                            iVar3 = iVar3 + -1;
                            pcVar10 = pcVar13 + 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar10;
                          } while (cVar1 != '\0');
                          puVar8 = (undefined4 *)(pcVar9 + -uVar6);
                          puVar11 = (undefined4 *)(pcVar10 + -1);
                          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                            *puVar11 = *puVar8;
                            puVar8 = puVar8 + 1;
                            puVar11 = puVar11 + 1;
                          }
                          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                            *(undefined *)puVar11 = *(undefined *)puVar8;
                            puVar8 = (undefined4 *)((int)puVar8 + 1);
                            puVar11 = (undefined4 *)((int)puVar11 + 1);
                          }
                        }
                        else {
                          iVar3 = FUN_00485880(0xb8,0);
                          if (iVar3 == 0) {
                            iVar3 = FUN_00485880(0x9d,0);
                            if (iVar3 == 0) goto LAB_00410b9c;
                            if (DAT_004d79ec != 0) goto LAB_00410f62;
                            DAT_004d79ec = 1;
                            if (DAT_004d5e00 == 0) {
                              DAT_00e996dc = DAT_00e996dc & 0xffffbfff;
                              *(bool *)(DAT_0050c454 + 0x6e) =
                                   *(char *)(DAT_0050c454 + 0x6e) == '\0';
                              FUN_00440550(0x2f);
                            }
                          }
                          else {
                            if (DAT_004d79ec != 0) goto LAB_00410f62;
                            DAT_004d79ec = 1;
                            if (DAT_004d5e00 == 0) {
                              DAT_00e996dc = DAT_00e996dc | 0x4000;
                              *(bool *)(DAT_0050c454 + 0x6e) =
                                   *(char *)(DAT_0050c454 + 0x6e) == '\0';
                              FUN_00440550(0x2e);
                            }
                          }
                        }
                      }
                      else {
                        if (DAT_004d79ec != 0) goto LAB_00410f62;
                        DAT_004d79ec = 1;
                        if (DAT_004b294c == 0) {
                          pcVar13 = s__MONDOTEXT_H_0035__nNO_JOYSTICK_D_004b260c;
                          goto LAB_00410ccd;
                        }
                        if (DAT_004b2944 == 0) {
                          pcVar13 = (char *)FUN_00421360(s__MONDOTEXT_H_0363_Joystick_ENABL_004b5d50
                                                        );
                          uVar6 = 0xffffffff;
                          do {
                            pcVar9 = pcVar13;
                            if (uVar6 == 0) break;
                            uVar6 = uVar6 - 1;
                            pcVar9 = pcVar13 + 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar9;
                          } while (cVar1 != '\0');
                          uVar6 = ~uVar6;
                          iVar3 = -1;
                          pcVar13 = &DAT_004d78d0;
                          do {
                            pcVar10 = pcVar13;
                            if (iVar3 == 0) break;
                            iVar3 = iVar3 + -1;
                            pcVar10 = pcVar13 + 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar10;
                          } while (cVar1 != '\0');
                          puVar8 = (undefined4 *)(pcVar9 + -uVar6);
                          puVar11 = (undefined4 *)(pcVar10 + -1);
                          for (uVar7 = uVar6 >> 2; DAT_004b2910 = DAT_004d79d0, uVar7 != 0;
                              uVar7 = uVar7 - 1) {
                            *puVar11 = *puVar8;
                            puVar8 = puVar8 + 1;
                            puVar11 = puVar11 + 1;
                          }
                          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                            *(undefined *)puVar11 = *(undefined *)puVar8;
                            puVar8 = (undefined4 *)((int)puVar8 + 1);
                            puVar11 = (undefined4 *)((int)puVar11 + 1);
                          }
                        }
                        else {
                          pcVar13 = (char *)FUN_00421360(s__MONDOTEXT_H_0364_Joystick_DISAB_004b5d28
                                                        );
                          uVar6 = 0xffffffff;
                          do {
                            pcVar9 = pcVar13;
                            if (uVar6 == 0) break;
                            uVar6 = uVar6 - 1;
                            pcVar9 = pcVar13 + 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar9;
                          } while (cVar1 != '\0');
                          uVar6 = ~uVar6;
                          iVar3 = -1;
                          pcVar13 = &DAT_004d78d0;
                          do {
                            pcVar10 = pcVar13;
                            if (iVar3 == 0) break;
                            iVar3 = iVar3 + -1;
                            pcVar10 = pcVar13 + 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar10;
                          } while (cVar1 != '\0');
                          puVar8 = (undefined4 *)(pcVar9 + -uVar6);
                          puVar11 = (undefined4 *)(pcVar10 + -1);
                          for (uVar7 = uVar6 >> 2; DAT_004d79d0 = DAT_004b2910, uVar7 != 0;
                              uVar7 = uVar7 - 1) {
                            *puVar11 = *puVar8;
                            puVar8 = puVar8 + 1;
                            puVar11 = puVar11 + 1;
                          }
                          bVar12 = DAT_004b2910 != 0;
                          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                            *(undefined *)puVar11 = *(undefined *)puVar8;
                            puVar8 = (undefined4 *)((int)puVar8 + 1);
                            puVar11 = (undefined4 *)((int)puVar11 + 1);
                          }
                          if (bVar12) {
                            FUN_0040a120(1);
                          }
                          DAT_004b2910 = 0;
                        }
                        FUN_00440550(0x46);
                        DAT_004b2944 = (uint)(DAT_004b2944 == 0);
                        if (DAT_004b2940 == 0) {
                          uVar4 = FUN_00414d90(0,0x18);
                          FUN_0040b740(0,uVar4);
                        }
                        iVar3 = FUN_00411810();
                        if ((DAT_004b2940 == 0) && (iVar3 != 0)) {
                          bVar12 = *(int *)(iVar3 + 0x1c) == 0x18;
LAB_00410c6e:
                          if (bVar12) goto LAB_00410f5a;
                        }
LAB_00410c74:
                        FUN_00406080(s_current_004b2640);
                      }
                    }
                  }
                }
                else {
                  if (DAT_004d79ec != 0) goto LAB_00410f62;
                  DAT_004d79ec = 1;
                  DAT_00ec83c8 = 1;
                }
              }
              else {
                if (DAT_004d79ec != 0) goto LAB_00410f62;
                DAT_004d79ec = 1;
                iVar3 = FUN_00450b30(0x4a646765,0);
                if (iVar3 != 0) {
                  FUN_00440550(0x46);
                  if (DAT_0050ca18 < 2) {
                    iVar5 = *(int *)(iVar3 + 0x124) + 1;
                    *(int *)(iVar3 + 0x124) = iVar5;
                    if (4 < iVar5) {
                      *(undefined4 *)(iVar3 + 0x124) = 0;
                    }
                  }
                  else {
                    iVar5 = *(int *)(iVar3 + 0x124) + 1;
                    *(int *)(iVar3 + 0x124) = iVar5;
                    if (7 < iVar5) {
                      *(undefined4 *)(iVar3 + 0x124) = 4;
                    }
                  }
                }
              }
            }
            else {
              if (DAT_004d79ec != 0) goto LAB_00410f62;
              DAT_004d79ec = 1;
              DAT_00ec83d0 = 0x63636634;
              if (((*(int *)(DAT_0050c454 + 8) == 7) &&
                  ((iVar3 = FUN_00485880(0x2a,0), iVar3 != 0 ||
                   (iVar3 = FUN_00485880(0x36,0), iVar3 != 0)))) &&
                 (iVar3 = FUN_00485880(5,0), iVar3 != 0)) {
                DAT_00e35a98 = DAT_00e35a98 + 1000;
              }
            }
          }
          else {
            if (DAT_004d79ec != 0) goto LAB_00410f62;
            DAT_004d79ec = 1;
            DAT_00ec83d0 = 0x63636633;
          }
        }
        else {
          if (DAT_004d79ec != 0) goto LAB_00410f62;
          DAT_004d79ec = 1;
          DAT_00ec83d0 = 0x63636632;
        }
      }
      else {
        if (DAT_004d79ec != 0) goto LAB_00410f62;
        DAT_004d79ec = 1;
        DAT_00ec83d0 = 0x63636631;
      }
    }
    else {
      if (DAT_004d79ec != 0) goto LAB_00410f62;
      DAT_004d79ec = 1;
      FUN_0044b530();
      FUN_00440550(0x2d);
    }
  }
  else {
    if (DAT_004d79ec != 0) goto LAB_00410f62;
    DAT_004d79ec = 1;
    FUN_0044b5e0();
    FUN_00440550(0xffffffff);
  }
LAB_00410f5a:
  if (DAT_004d79ec == 0) {
    return;
  }
LAB_00410f62:
  if (DAT_004d78d0 != '\0') {
    FUN_0044fce0(&DAT_004d78d0,0x40000000);
    DAT_004d78d0 = '\0';
    _DAT_004d5564 = 0x40066666;
  }
  iVar3 = DAT_00e35a98;
  if ((iVar2 != DAT_00e35a98) && (iVar3 = iVar2, DAT_00ec83cc < 5000)) {
    DAT_00ec83cc = DAT_00ec83cc + 1000;
    return;
  }
  DAT_00e35a98 = iVar3;
  return;
}

