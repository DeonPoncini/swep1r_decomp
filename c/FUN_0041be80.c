#include "prototype.h"


void FUN_0041be80(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined local_400 [1024];
  
  if ((DAT_004eb1dc != 0) && (DAT_00ea0250 != 0)) {
    if (DAT_004eb22c != 0) {
      DAT_004eb22c = 0;
      return;
    }
    switch(param_1) {
    case 8:
      if (4 < DAT_004eb1c4) {
        FUN_0049f4e0(DAT_004eb1c4 + 0x4ea987,&DAT_004ea988 + DAT_004eb1c4,0x400 - DAT_004eb1c4);
        DAT_004eb1c4 = DAT_004eb1c4 - 1;
        DAT_004ead87 = 0;
      }
      break;
    default:
      if (DAT_004d1f9c < 2) {
        uVar4 = *(ushort *)(PTR_DAT_004d1d90 + param_1 * 2) & 0x107;
      }
      else {
        uVar4 = FUN_0049f440(param_1,0x107);
      }
      if ((((uVar4 != 0) || (param_1 == 0x20)) && (DAT_004eb1c4 < 0x400)) &&
         ((param_1 != 0x20 || (DAT_004eb1c4 != 0)))) {
        FUN_0049f4e0(&DAT_004ea989 + DAT_004eb1c4,&DAT_004ea988 + DAT_004eb1c4,0x3ff - DAT_004eb1c4)
        ;
        (&DAT_004ea988)[DAT_004eb1c4] = (char)param_1;
        DAT_004eb1c4 = DAT_004eb1c4 + 1;
      }
      break;
    case 0xd:
      FUN_00411730(0);
      DAT_00ea0250 = 0;
      DAT_004b2948 = 1;
      DAT_004b2940 = DAT_004e9ecc;
      uVar2 = FUN_0041bce0(DAT_004eb3b4,&DAT_004ea98c);
      uVar2 = FUN_00421360(s__MONDOTEXT_H_0393__s_says___s__004b6750,uVar2);
      FUN_0049eb80(local_400,uVar2);
      FUN_0041c190(local_400);
      break;
    case 0x1b:
      FUN_00411730(0);
      DAT_004b2940 = DAT_004e9ecc;
      DAT_00ea0250 = 0;
      DAT_004b2948 = 1;
      break;
    case 0x23:
      uVar4 = 0xffffffff;
      pcVar5 = &DAT_004ea988;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      DAT_004eb1c4 = ~uVar4 - 1;
      break;
    case 0x24:
      DAT_004eb1c4 = 0;
      break;
    case 0x25:
      if (DAT_004eb1c4 != 0) {
        DAT_004eb1c4 = DAT_004eb1c4 - 1;
      }
      break;
    case 0x27:
      uVar4 = 0xffffffff;
      pcVar5 = &DAT_004ea988;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (DAT_004eb1c4 < ~uVar4 - 1) {
        DAT_004eb1c4 = DAT_004eb1c4 + 1;
      }
      break;
    case 0x2e:
      break;
    }
    iVar3 = FUN_00418680(&DAT_004ea98c,0,0,DAT_004eb1c4 - 4);
    FUN_00411740(iVar3 + 5 + DAT_004eb224,DAT_004e9f18,1,7);
  }
  return;
}

