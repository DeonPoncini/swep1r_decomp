#include "prototype.h"


void FUN_00408640(void)

{
  int *piVar1;
  undefined4 ***pppuStack_70;
  int iStack_6c;
  undefined *puStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 ***pppuStack_58;
  int iStack_54;
  undefined *puStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  int **ppiStack_40;
  int iStack_3c;
  undefined *puStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 **ppuStack_28;
  int iStack_24;
  undefined *puStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 **local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (DAT_004b4758 == 0) {
    local_8 = DAT_004d6bdc + (int)DAT_004d6b74;
    uStack_18 = 0;
    iStack_1c = 0x1000000;
    local_10 = DAT_004d6b74;
    local_c = DAT_004d6b70;
    puStack_20 = &DAT_00ec86d0;
    local_4 = DAT_004d6b70 + 1;
    iStack_24 = DAT_004d6be0;
    ppuStack_28 = &local_10;
    piStack_2c = DAT_00ec8d00;
    uStack_30 = 0x408698;
    (**(code **)(*DAT_00ec8d00 + 0x14))();
    iStack_1c = DAT_004d6b70 + DAT_004d6bd8;
    uStack_30 = 0;
    iStack_34 = 0x1000000;
    iStack_24 = iStack_1c + -1;
    puStack_20 = (undefined *)(DAT_004d6bdc + (int)DAT_004d6b74);
    puStack_38 = &DAT_00ec86d0;
    iStack_3c = DAT_004d6be0;
    ppiStack_40 = (int **)&ppuStack_28;
    ppuStack_28 = DAT_004d6b74;
    piStack_44 = DAT_00ec8d00;
    uStack_48 = 0x4086e9;
    (**(code **)(*DAT_00ec8d00 + 0x14))();
    ppiStack_40 = DAT_004d6b74;
    puStack_38 = (undefined *)((int)DAT_004d6b74 + 1);
    uStack_48 = 0;
    iStack_34 = DAT_004d6bd8 + DAT_004d6b70;
    iStack_4c = 0x1000000;
    puStack_50 = &DAT_00ec86d0;
    iStack_54 = DAT_004d6be0;
    pppuStack_58 = &ppiStack_40;
    iStack_3c = DAT_004d6b70;
    piStack_5c = DAT_00ec8d00;
    uStack_60 = 0x40872f;
    (**(code **)(*DAT_00ec8d00 + 0x14))();
    puStack_50 = (undefined *)((int)DAT_004d6b74 + DAT_004d6bdc);
    uStack_60 = 0;
    pppuStack_58 = (undefined4 ***)((int)puStack_50 + -1);
    iStack_4c = DAT_004d6bd8 + DAT_004d6b70;
    iStack_64 = 0x1000000;
    iStack_54 = DAT_004d6b70;
    puStack_68 = &DAT_00ec86d0;
    iStack_6c = DAT_004d6be0;
    pppuStack_70 = &pppuStack_58;
    (**(code **)(*DAT_00ec8d00 + 0x14))(DAT_00ec8d00);
    piVar1 = piStack_5c;
    if (100 < (int)piStack_5c) {
      piVar1 = (int *)0x64;
    }
    if ((int)piVar1 < 0) {
      piVar1 = (int *)0x0;
    }
    pppuStack_70 = (undefined4 ***)DAT_004d6b74;
    puStack_68 = (undefined *)(((int)piVar1 * DAT_004d6bdc) / 100 + (int)DAT_004d6b74);
    iStack_64 = DAT_004d6bd8 + DAT_004d6b70;
    iStack_6c = DAT_004d6b70;
    (**(code **)(*DAT_00ec8d00 + 0x14))
              (DAT_00ec8d00,&pppuStack_70,DAT_004d6be0,&DAT_00ec86d0,0x1000000,0);
  }
  return;
}

