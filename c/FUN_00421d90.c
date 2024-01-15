#include "prototype.h"


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

