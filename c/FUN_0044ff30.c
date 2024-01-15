#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ff30(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char local_9;
  
  iVar2 = FUN_00445690();
  if (iVar2 == 0) {
    FUN_004816b0();
    FUN_004816b0();
  }
  if (DAT_0050c764 != 0) {
    FUN_0042d900(0);
    FUN_0042edc0(0x2e);
    local_9 = '.';
    uVar3 = __ftol();
    FUN_0042d950(0,0xff,0,uVar3);
    cVar4 = '\0';
    iVar2 = 0;
    if (0 < DAT_0050c764) {
      psVar5 = &DAT_00e2c080;
      do {
        cVar1 = (&DAT_00e345a0)[iVar2];
        if (cVar4 != cVar1) {
          cVar4 = cVar1;
          if (cVar1 == '\x01') {
            uVar3 = __ftol();
            uVar8 = 0xff;
            uVar7 = 0xff;
            uVar6 = 0;
          }
          else if (cVar1 == '\x02') {
            uVar3 = __ftol();
            uVar8 = 0;
            uVar7 = 0xff;
            uVar6 = 0xff;
          }
          else {
            if ((cVar1 < '\x03') && ('\x04' < cVar1)) goto LAB_004500be;
            if (local_9 != 'X') {
              FUN_0042edc0(0x58);
              local_9 = 'X';
            }
            if (cVar1 == '\x03') {
              uVar3 = __ftol();
              uVar8 = 0xff;
              uVar7 = 0;
              uVar6 = 0;
            }
            else {
              uVar3 = __ftol();
              uVar8 = 100;
              uVar7 = 0xff;
              uVar6 = 100;
            }
          }
          FUN_0042d950(uVar6,uVar7,uVar8,uVar3);
        }
LAB_004500be:
        FUN_0042eeb0((int)*psVar5,(int)psVar5[1],0x70);
        iVar2 = iVar2 + 1;
        psVar5 = psVar5 + 2;
      } while (iVar2 < DAT_0050c764);
    }
    FUN_00426910();
    DAT_0050c764 = 0;
  }
  return;
}

