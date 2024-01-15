#include "prototype.h"


int FUN_004214c0(byte *param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  
  bVar5 = *param_2;
  pbVar6 = param_1;
  do {
    if (bVar5 == 0) {
      *pbVar6 = 0;
      return (int)pbVar6 - (int)param_1;
    }
    if (bVar5 != 0x5c) {
      *pbVar6 = bVar5;
      pbVar6 = pbVar6 + 1;
      goto switchD_00421552_caseD_23;
    }
    if (DAT_004d1f9c < 2) {
      uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[1] * 2] & 4;
    }
    else {
      uVar3 = FUN_0049f440((int)(char)param_2[1],4);
    }
    if (uVar3 == 0) {
      switch(param_2[1]) {
      case 0x22:
        *pbVar6 = 0x22;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      default:
switchD_00421552_caseD_23:
        param_2 = param_2 + 1;
        break;
      case 0x27:
        *pbVar6 = 0x27;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x3f:
        *pbVar6 = 0x3f;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x58:
      case 0x78:
        if (DAT_004d1f9c < 2) {
          uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[2] * 2] & 0x80;
        }
        else {
          uVar3 = FUN_0049f440((int)(char)param_2[2],0x80);
        }
        if (uVar3 != 0) {
          if (DAT_004d1f9c < 2) {
            uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[3] * 2] & 0x80;
          }
          else {
            uVar3 = FUN_0049f440((int)(char)param_2[3],0x80);
          }
          if (uVar3 != 0) {
            if (DAT_004d1f9c < 2) {
              uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[2] * 2] & 4;
            }
            else {
              uVar3 = FUN_0049f440((int)(char)param_2[2],4);
            }
            if (uVar3 == 0) {
              cVar1 = FUN_0049fe50((int)(char)param_2[2]);
              cVar1 = cVar1 + -0x57;
            }
            else {
              cVar1 = param_2[2] - 0x30;
            }
            if (DAT_004d1f9c < 2) {
              uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[3] * 2] & 4;
            }
            else {
              uVar3 = FUN_0049f440((int)(char)param_2[3],4);
            }
            if (uVar3 == 0) {
              cVar2 = FUN_0049fe50((int)(char)param_2[3]);
              *pbVar6 = cVar1 << 4 | cVar2 + 0xa9U;
              pbVar6 = pbVar6 + 1;
              param_2 = param_2 + 4;
            }
            else {
              *pbVar6 = cVar1 << 4 | param_2[3] - 0x30;
              pbVar6 = pbVar6 + 1;
              param_2 = param_2 + 4;
            }
            break;
          }
        }
        if (DAT_004d1f9c < 2) {
          uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[2] * 2] & 4;
        }
        else {
          uVar3 = FUN_0049f440((int)(char)param_2[2],4);
        }
        if (uVar3 == 0) goto switchD_00421552_caseD_23;
        if (DAT_004d1f9c < 2) {
          uVar3 = (byte)PTR_DAT_004d1d90[(char)param_2[2] * 2] & 4;
        }
        else {
          uVar3 = FUN_0049f440((int)(char)param_2[2],4);
        }
        if (uVar3 == 0) {
          cVar1 = FUN_0049fe50((int)(char)param_2[2]);
          *pbVar6 = cVar1 + 0xa9;
          pbVar6 = pbVar6 + 1;
          param_2 = param_2 + 3;
        }
        else {
          *pbVar6 = param_2[2] - 0x30;
          pbVar6 = pbVar6 + 1;
          param_2 = param_2 + 3;
        }
        break;
      case 0x5c:
        *pbVar6 = 0x5c;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x61:
        *pbVar6 = 7;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x62:
        *pbVar6 = 8;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x66:
        *pbVar6 = 0xc;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x6e:
        *pbVar6 = 10;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x72:
        *pbVar6 = 0xd;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x74:
        *pbVar6 = 9;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
        break;
      case 0x76:
        *pbVar6 = 0xb;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 2;
      }
    }
    else {
      iVar4 = 1;
      bVar5 = 0;
      do {
        bVar5 = bVar5 << 3 | param_2[iVar4] - 0x30;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      *pbVar6 = bVar5;
      pbVar6 = pbVar6 + 1;
      param_2 = param_2 + 4;
    }
    bVar5 = *param_2;
  } while( true );
}

