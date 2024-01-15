#include "prototype.h"


undefined4 FUN_00421120(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  DAT_004eb3cc = 0;
  iVar1 = (**(code **)(DAT_00ecc420 + 0x30))(param_1,&DAT_004b5c4c);
  if (iVar1 == 0) {
    return 1;
  }
  (**(code **)(DAT_00ecc420 + 0x38))(iVar1,&param_1,4);
  (**(code **)(DAT_00ecc420 + 0x4c))(iVar1,0,2);
  iVar2 = FUN_0049fbd0(iVar1);
  (**(code **)(DAT_00ecc420 + 0x4c))(iVar1,0,0);
  DAT_004eb3c8 = (char *)(**(code **)(DAT_00ecc420 + 0x20))(iVar2);
  (**(code **)(DAT_00ecc420 + 0x38))(iVar1,DAT_004eb3c8,iVar2);
  (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
  if (param_1 == 0x454e4352) {
    iVar2 = iVar2 + -4;
    iVar1 = 0;
    if (0 < iVar2) {
      do {
        DAT_004eb3c8[iVar1] = DAT_004eb3c8[iVar1 + 4] ^ 0xdd;
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
  }
  pcVar6 = DAT_004eb3c8 + iVar2;
  pcVar3 = DAT_004eb3c8;
  do {
    if (pcVar3 < pcVar6) {
      do {
        if ((*pcVar3 == '\r') || (*pcVar3 == '\n')) break;
        pcVar3 = pcVar3 + 1;
      } while (pcVar3 < pcVar6);
      for (; (pcVar3 < pcVar6 && ((*pcVar3 == '\r' || (*pcVar3 == '\n')))); pcVar3 = pcVar3 + 1) {
      }
    }
    DAT_004eb3cc = DAT_004eb3cc + 1;
  } while (pcVar3 < pcVar6 + -1);
  DAT_004eb3c4 = (**(code **)(DAT_00ecc420 + 0x20))(DAT_004eb3cc * 4);
  pcVar6 = DAT_004eb3c8;
  do {
    for (pcVar3 = pcVar6;
        ((pcVar3 < DAT_004eb3c8 + iVar2 && (*pcVar3 != '\r')) && (*pcVar3 != '\n'));
        pcVar3 = pcVar3 + 1) {
    }
    if (pcVar3 < DAT_004eb3c8 + iVar2) {
      do {
        if ((*pcVar3 != '\r') && (*pcVar3 != '\n')) break;
        *pcVar3 = '\0';
        pcVar3 = pcVar3 + 1;
      } while (pcVar3 < DAT_004eb3c8 + iVar2);
    }
    FUN_004214c0(pcVar6,pcVar6);
    puVar4 = (undefined *)FUN_0049fb10(pcVar6,9);
    if (puVar4 != (undefined *)0x0) {
      *puVar4 = 0;
    }
    FUN_004ab5d0(pcVar6);
    *(char **)(DAT_004eb3c4 + iVar5) = pcVar6;
    iVar5 = iVar5 + 4;
    pcVar6 = pcVar3;
    if (DAT_004eb3c8 + iVar2 + -1 <= pcVar3) {
      FUN_0049f8c0(DAT_004eb3c4,DAT_004eb3cc,4,&LAB_004212f0);
      return 1;
    }
  } while( true );
}

