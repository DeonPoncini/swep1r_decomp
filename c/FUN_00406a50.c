#include "prototype.h"


/* WARNING: Removing unreachable block (ram,0x00406c79) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00406a50(int param_1,int param_2,byte *param_3,byte param_4,int param_5,undefined4 param_6,
                int *param_7)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined *puVar7;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  undefined local_8;
  undefined4 local_7;
  
  local_8 = DAT_004d55cc;
  local_10 = 0;
  local_7 = 0;
  if (param_5 < 0) {
    param_5 = -param_5;
  }
  *param_7 = -1;
  FUN_0049eb80(param_6,&DAT_004b3eec);
  if (param_1 == 0) {
    local_1c = DAT_00ec879c;
    local_18 = DAT_00ec8824;
    local_14 = _DAT_00ec887c;
    pbVar6 = &DAT_004d5fc0;
  }
  else if (param_1 == 1) {
    local_1c = DAT_00ec8770;
    local_18 = 0;
    local_14 = DAT_00ec8808;
    pbVar6 = &DAT_004d6518;
  }
  else {
    pbVar6 = param_3;
    if (param_1 == 2) {
      local_1c = 0x100;
      local_18 = 0;
      local_14 = 0;
      pbVar6 = &DAT_004d6828;
    }
  }
  bVar1 = *pbVar6;
  do {
    if (bVar1 == 0xff) {
      return local_10;
    }
    bVar1 = *pbVar6;
    iVar2 = *(int *)(pbVar6 + 4);
    if (((*(int *)(pbVar6 + 8) == param_2) && ((bVar1 & (byte)param_3) == (byte)param_3)) &&
       ((((uint)param_3 & 8) == 0 || ((bVar1 & 0xf0) == param_4)))) {
      bVar4 = *pbVar6 & 8;
      if ((bVar4 == 0) || (local_1c <= *(int *)(pbVar6 + 4))) {
        if (bVar4 != 0) {
          if (*(int *)(pbVar6 + 4) < 0x10) {
            bVar3 = false;
          }
          else {
            bVar3 = *(int *)(pbVar6 + 4) <= local_18 * 4 + 0xf;
          }
          if (bVar3) goto LAB_00406bb2;
        }
        if (((*pbVar6 & 4) == 0) ||
           ((local_14 & 1 << ((byte)*(undefined4 *)(pbVar6 + 4) & 0x1f)) == 0)) goto LAB_00406ca1;
      }
LAB_00406bb2:
      local_10 = local_10 + 1;
      if (param_5 == local_10) {
        *param_7 = iVar2;
        if (param_1 == 2) {
LAB_00406c7e:
          puVar7 = (undefined *)0x0;
LAB_00406c81:
          uVar5 = FUN_00407b00(iVar2,puVar7);
          uVar5 = FUN_00421360(uVar5);
          puVar7 = &DAT_004b2304;
        }
        else {
          if (((uint)param_3 & 8) == 0) {
            if (param_1 == 2) goto LAB_00406c7e;
            if ((bVar1 & 0x10) == 0) {
              if ((bVar1 & 0x20) != 0) {
                puVar7 = &DAT_004b3bd8;
                goto LAB_00406c3b;
              }
            }
            else {
              puVar7 = &DAT_004b3ecc;
LAB_00406c3b:
              FUN_0049eb80(&local_8,puVar7);
            }
            uVar5 = FUN_00407b00(iVar2,&DAT_004b2af0);
            uVar5 = FUN_00421360(uVar5);
            uVar5 = FUN_00421360(s__MONDOTEXT_H_0216__s_s_AXIS_004b3eb0,&local_8,uVar5);
            FUN_0049eb80(param_6,uVar5);
            goto LAB_00406ca1;
          }
          puVar7 = &DAT_004b2b28;
          if (0xf < iVar2) goto LAB_00406c81;
          uVar5 = FUN_00407b00(iVar2,&DAT_004b2b28);
          uVar5 = FUN_00421360(uVar5);
          puVar7 = (undefined *)FUN_00421360(s__MONDOTEXT_H_0213_BUTTON__s_004b3ed0,uVar5);
        }
        FUN_0049eb80(param_6,puVar7,uVar5);
      }
    }
LAB_00406ca1:
    bVar1 = pbVar6[0xc];
    pbVar6 = pbVar6 + 0xc;
  } while( true );
}

