#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00486ad0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  CoInitialize((LPVOID)0x0);
  CoCreateInstance((IID *)&DAT_004af4c8,(LPUNKNOWN)0x0,1,(IID *)&DAT_004af4a8,&DAT_00510254);
  DAT_00513868 = 0;
  puVar3 = &DAT_00510260;
  for (iVar2 = 0x460; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_0051386c = 0;
  _DAT_00510258 = 0;
  iVar2 = *DAT_00510254;
  uVar1 = FUN_0048c7e0(&LAB_00487370,0,0);
  iVar2 = (**(code **)(iVar2 + 0x8c))(DAT_00510254,uVar1);
  return iVar2 < 0;
}

