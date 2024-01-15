#include "prototype.h"


void FUN_0040c260(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  undefined4 uVar8;
  byte *pbVar9;
  bool bVar10;
  byte local_20c [260];
  int local_108;
  undefined local_100 [256];
  
  iVar2 = FUN_00414d90(param_1,0x2732);
  if (iVar2 != 0) {
    FUN_00413800(iVar2);
    uVar3 = FUN_00484140(s___data_config__004b252c,2,&DAT_004d55cc);
    iVar4 = FUN_00484220(uVar3,local_20c);
    while (iVar4 != 0) {
      pbVar9 = local_20c;
      pcVar5 = s_default_004b4f48;
      do {
        bVar1 = *pcVar5;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_0040c2ec:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0040c2f1;
        }
        if (bVar1 == 0) break;
        bVar1 = ((byte *)pcVar5)[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_0040c2ec;
        pcVar5 = (char *)((byte *)pcVar5 + 2);
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0040c2f1:
      if (iVar4 != 0) {
        pbVar9 = local_20c;
        pcVar5 = s_current_004b2640;
        do {
          bVar1 = *pcVar5;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_0040c32a:
            iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0040c32f;
          }
          if (bVar1 == 0) break;
          bVar1 = ((byte *)pcVar5)[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_0040c32a;
          pcVar5 = (char *)((byte *)pcVar5 + 2);
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0040c32f:
        if (iVar4 != 0) {
          pbVar9 = local_20c;
          puVar6 = &DAT_004b3b2c;
          do {
            bVar1 = *(byte *)puVar6;
            bVar10 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_0040c368:
              iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_0040c36d;
            }
            if (bVar1 == 0) break;
            bVar1 = *(byte *)((int)puVar6 + 1);
            bVar10 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_0040c368;
            puVar6 = puVar6 + 1;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_0040c36d:
          if (iVar4 != 0) {
            pbVar9 = local_20c;
            pbVar7 = &DAT_004b4f44;
            do {
              bVar1 = *pbVar7;
              bVar10 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_0040c3a2:
                iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_0040c3a7;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar10 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_0040c3a2;
              pbVar7 = pbVar7 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_0040c3a7:
            if (iVar4 != 0) {
              FUN_004138f0(iVar2,local_20c,0,0x2733,0);
            }
          }
        }
      }
      iVar4 = FUN_00484220(uVar3,local_20c);
    }
    FUN_004841e0(uVar3);
    FUN_0049eb80(local_100,&DAT_004b2524,&DAT_00e9f300,s___data_config_default__004b3e8c);
    uVar3 = FUN_00484140(local_100,3,&PTR_DAT_004b2408);
    iVar4 = FUN_00484220(uVar3,local_20c);
    while (iVar4 != 0) {
      if (local_108 == 0) {
        pbVar9 = local_20c;
        pcVar5 = s_wheel_map_004b3ea4;
        do {
          bVar1 = *pcVar5;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_0040c46b:
            iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0040c470;
          }
          if (bVar1 == 0) break;
          bVar1 = ((byte *)pcVar5)[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_0040c46b;
          pcVar5 = (char *)((byte *)pcVar5 + 2);
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0040c470:
        if (iVar4 != 0) {
          FUN_00484670(local_20c);
          uVar8 = FUN_004138f0(iVar2,local_20c,0,0x2733,1);
          FUN_00414ca0(uVar8,200,0x32,0,0xff);
        }
      }
      iVar4 = FUN_00484220(uVar3,local_20c);
    }
    FUN_004841e0(uVar3);
  }
  return;
}

