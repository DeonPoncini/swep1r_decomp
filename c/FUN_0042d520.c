#include "prototype.h"


void FUN_0042d520(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  uVar9 = 1;
  bVar3 = false;
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    sVar7 = 0;
    do {
      if (((int)cVar1 & 1 << ((byte)sVar7 & 0x1f)) == 0) {
        cVar2 = *pcVar6;
        pcVar4 = pcVar6 + 1;
        pcVar6 = pcVar6 + 2;
        iVar5 = (int)*pcVar4 + ((int)cVar2 & 0xfU) * 0x100;
        if (iVar5 == 0) {
          bVar3 = true;
          break;
        }
        iVar8 = ((int)cVar2 >> 4) + 1;
        iVar10 = 0;
        pcVar4 = param_2;
        if (-1 < iVar8) {
          do {
            param_2 = pcVar4 + 1;
            cVar2 = param_1[(iVar5 + iVar10 & 0xfffU) - 0x1000];
            *pcVar4 = cVar2;
            param_1[uVar9 - 0x1000] = cVar2;
            uVar9 = uVar9 + 1 & 0xfff;
            iVar10 = iVar10 + 1;
            pcVar4 = param_2;
          } while (iVar10 <= iVar8);
        }
      }
      else {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        *param_2 = cVar2;
        param_2 = param_2 + 1;
        param_1[uVar9 - 0x1000] = cVar2;
        uVar9 = uVar9 + 1 & 0xfff;
      }
      sVar7 = sVar7 + 1;
    } while (sVar7 < 8);
    if (bVar3) {
      return;
    }
  } while( true );
}

