#include "prototype.h"


undefined4 FUN_00487b20(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  bVar2 = false;
  iVar6 = 0xfff;
  pcVar7 = DAT_00ec9e84;
  do {
    if (iVar6 == 0) {
      return 1;
    }
    iVar3 = (**(code **)(DAT_00ecc420 + 0x3c))(DAT_00529504,pcVar7,iVar6);
    if (iVar3 == 0) {
      return 0;
    }
    DAT_005284f8 = DAT_005284f8 + 1;
    cVar1 = *pcVar7;
    if ((((cVar1 != ';') && (cVar1 != '#')) && (cVar1 != '\n')) && (cVar1 != '\r')) {
      puVar4 = (undefined *)FUN_0049fb10(pcVar7,0x23);
      if (puVar4 != (undefined *)0x0) {
        *puVar4 = 0;
      }
      FUN_0049edd0(pcVar7);
      uVar5 = 0xffffffff;
      pcVar8 = DAT_00ec9e84;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      if (DAT_00ec9e84[uVar5 - 3] == '\\') {
        iVar6 = 0x1000 - (uVar5 - 1);
        pcVar7 = DAT_00ec9e84 + (uVar5 - 3);
      }
      else {
        bVar2 = true;
        if ((DAT_00ec9e84[uVar5 - 2] == '\r') || (DAT_00ec9e84[uVar5 - 2] == '\n')) {
          DAT_00ec9e84[uVar5 - 2] = '\0';
        }
      }
    }
    if (bVar2) {
      return 1;
    }
  } while( true );
}

