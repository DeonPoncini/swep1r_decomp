#include "prototype.h"


char * FUN_004aa990(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  
  if (((DAT_00dfaa94 != (char **)0x0) ||
      (((DAT_00dfaa9c == 0 || (iVar2 = FUN_004aae20(), iVar2 == 0)) &&
       (DAT_00dfaa94 != (char **)0x0)))) && (param_1 != (char *)0x0)) {
    uVar3 = 0xffffffff;
    pcVar6 = *DAT_00dfaa94;
    pcVar8 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar3 - 1;
    ppcVar7 = DAT_00dfaa94;
    if (pcVar6 != (char *)0x0) {
      do {
        uVar5 = 0xffffffff;
        pcVar8 = pcVar6;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (((uVar4 < ~uVar5 - 1) && (pcVar6[uVar4] == '=')) &&
           (iVar2 = FUN_004aade0(pcVar6,param_1,uVar4), iVar2 == 0)) {
          return *ppcVar7 + ~uVar3;
        }
        pcVar6 = ppcVar7[1];
        ppcVar7 = ppcVar7 + 1;
        if (pcVar6 == (char *)0x0) {
          return (char *)0x0;
        }
      } while( true );
    }
  }
  return (char *)0x0;
}

