#include "prototype.h"


void FUN_00488100(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0052d43c == 0) {
    return;
  }
  if (DAT_0052d440 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar2 = *DAT_0052d454;
  uVar1 = FUN_0048c780(DAT_004c86bc);
  iVar2 = (**(code **)(iVar2 + 0x50))(DAT_0052d454,uVar1);
  if (iVar2 != 0) {
    return;
  }
  if (DAT_0052d458 == 0) {
    if (DAT_00ec8e00 == (int *)0x0) goto LAB_004881a3;
    iVar2 = (**(code **)(*DAT_00ec8e00 + 0x6c))(DAT_00ec8e00);
  }
  else {
    if ((DAT_0052d454 != (int *)0x0) &&
       (iVar2 = (**(code **)(*DAT_0052d454 + 0x54))
                          (DAT_0052d454,*(undefined4 *)(DAT_0052d450 + 4),
                           *(undefined4 *)(DAT_0052d450 + 8),*(undefined4 *)(DAT_0052d450 + 0x1c),0,
                           0), iVar2 != 0)) {
      return;
    }
    if (DAT_00ec8d00 == (int *)0x0) goto LAB_004881a3;
    iVar2 = (**(code **)(*DAT_00ec8d00 + 0x6c))(DAT_00ec8d00);
  }
  if (iVar2 != 0) {
    return;
  }
LAB_004881a3:
  if (DAT_00529578 != (int *)0x0) {
    (**(code **)(*DAT_00529578 + 0x6c))(DAT_00529578);
  }
  return;
}

