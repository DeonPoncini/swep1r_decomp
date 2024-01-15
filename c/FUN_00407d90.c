#include "prototype.h"


undefined * FUN_00407d90(int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_004b29e8 == -1) {
    return (undefined *)0x0;
  }
  puVar2 = &DAT_004b29e8;
  iVar1 = DAT_004b29e8;
  while ((iVar1 != param_1 || (*(char *)(puVar2 + 2) != param_2))) {
    iVar1 = puVar2[3];
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + 1;
    if (iVar1 == -1) {
      return (undefined *)0x0;
    }
  }
  return (&PTR_s__MONDOTEXT_H_0014_CAMERA_CYCLE_004b29ec)[iVar3 * 3];
}

