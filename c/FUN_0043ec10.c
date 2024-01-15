#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ec10(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined local_40 [32];
  undefined local_20 [32];
  
  if (((DAT_0050c470 != 0) || (DAT_0050c954 != 0)) && (DAT_0050c934 != 0)) {
    iVar3 = __ftol();
    FUN_00428740(0x7b,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
    FUN_004285d0(0x7b,1);
    FUN_00428660(0x7b,0x1e,iVar3);
    FUN_00428740(0x78,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x78,1);
    FUN_00428660(0x78,0x22,iVar3 + 4);
    uVar4 = FUN_00421360((&PTR_s__SCREENTEXT_280___R_20_Repulsorg_004c1cc4)
                         [(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 4]);
    uVar4 = FUN_00421360(s__f4_c_s_s_004c0d24,uVar4);
    FUN_0049eb80(local_40,uVar4);
    FUN_00450530(0x56,iVar3 + 6,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
    FUN_00428740(0x80,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x80,1);
    FUN_00428660(0x80,0x21,iVar3 + 0x13);
    FUN_004557e0(param_1,0x88,(short)iVar3 + 0x11,
                 (float)(uint)(byte)(&DAT_00e2a6c1)[DAT_00e295d0 * 0x38] * _DAT_004ac9dc,0xc0000000,
                 0x41200000,0x42240000);
    FUN_00428740(0x79,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x79,1);
    FUN_00428660(0x79,0x2a,iVar3 + 0x10);
    uVar4 = FUN_00421360(s__SCREENTEXT_246__sPrice_004c12c8);
    FUN_00450530(0x2c,iVar3 + 0x12,0x32,0xffffffff,0xffffffff,0xfffffffe,uVar4);
    uVar4 = FUN_00421360(s__r_s_d_004c12c0,DAT_00e99220);
    FUN_0049eb80(local_40,uVar4);
    FUN_00450530(0x87,iVar3 + 0x12,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
    FUN_00428740(0x7a,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x7a,1);
    FUN_00428660(0x7a,0x29,iVar3 + 0x1b);
    iVar3 = __ftol();
    FUN_00428740(0x7f,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
    FUN_004285d0(0x7f,1);
    FUN_00428660(0x7f,0xae,iVar3);
    FUN_00428740(0x7d,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x7d,1);
    FUN_00428660(0x7d,0xb3,iVar3 + 5);
    uVar4 = FUN_00421360(s__SCREENTEXT_248__sReplace_004c12a4);
    FUN_00450530(0xb6,iVar3 + 6,0x32,0xffffffff,0xffffffff,0xfffffffe,uVar4);
    FUN_00428740(0x81,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x81,1);
    FUN_00428660(0x81,0xb2,iVar3 + 0x14);
    FUN_00428740(0x7c,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x7c,1);
    FUN_00428660(0x7c,0xbe,iVar3 + 0x17);
    cVar2 = (&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10];
    uVar4 = FUN_00421360((&PTR_s__SCREENTEXT_280___R_20_Repulsorg_004c1cc4)
                         [(char)(&DAT_00e2b220)[cVar2 * 0x38] * 4]);
    uVar4 = FUN_00421360(s__f4_c_s_s_004c0d24,uVar4);
    FUN_0049eb80(local_40,uVar4);
    FUN_00450530(0xee,iVar3 + 0x1a,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
    FUN_00428740(0x7e,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x7e,1);
    FUN_00428660(0x7e,0xd6,iVar3 + 0x28);
    FUN_004557e0(param_1,0xff,(short)iVar3 + 0x30,
                 (float)(uint)(byte)(&DAT_00e35aa8)[cVar2] * _DAT_004ac9dc,0xc0000000,0x40e00000,
                 0x41d00000);
    iVar5 = 0;
    do {
      iVar1 = iVar5 + 0x76;
      FUN_00428740(iVar1,0x32,0xffffffff,0xffffffff,0xfffffffe);
      FUN_004285d0(iVar1,1);
      FUN_00428660(iVar1,0xc2,iVar3 + iVar5 * 0xb + 0x5d);
      iVar1 = iVar5 + 0x74;
      FUN_00428740(iVar1,0x32,0xffffffff,0xffffffff,0xfffffffe);
      FUN_004285d0(iVar1,1);
      FUN_00428660(iVar1,0xdb,iVar3 + iVar5 * 0xd + 0x7c);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    uVar4 = FUN_00421360(s__SCREENTEXT_250__sTrade_004c128c);
    FUN_0049eb80(local_40,s__f4_s_004b9484,uVar4);
    FUN_00450530(0xc4,iVar3 + 0x60,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
    uVar4 = FUN_00421360(s__SCREENTEXT_251__sCost_004c1274);
    FUN_0049eb80(local_40,s__f4_s_004b9484,uVar4);
    FUN_00450530(0xc4,iVar3 + 0x6b,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
    uVar4 = FUN_00421360(s__r_s_d_004c12c0,DAT_00e9935c);
    FUN_0049eb80(local_40,uVar4);
    FUN_0049eb80(local_20,s__f4_s_004b9484,local_40);
    FUN_00450530(0x114,iVar3 + 0x60,0x32,0xffffffff,0xffffffff,0xfffffffe,local_20);
    uVar4 = FUN_00421360(s__r_s_d_004c12c0,DAT_00e99220 - DAT_00e9935c);
    FUN_0049eb80(local_40,uVar4);
    FUN_0049eb80(local_20,s__f4_s_004b9484,local_40);
    FUN_00450530(0x114,iVar3 + 0x6b,0x32,0xffffffff,0xffffffff,0xfffffffe,local_20);
    if (DAT_00e35a98 < DAT_00e99220 - DAT_00e9935c) {
      DAT_00e99400 = 1;
    }
    iVar5 = (short)iVar3 + 0x7e;
    uVar4 = FUN_00421360(s__SCREENTEXT_254__c_sBUY_004c125c);
    FUN_0043fce0(param_1,0xfc,iVar5,0xd,(int)(short)DAT_00e99400,0,uVar4);
    uVar4 = FUN_00421360(s__SCREENTEXT_257__c_sCANCEL_004c1240);
    FUN_0043fce0(param_1,0xfc,iVar5,0xd,(int)(short)DAT_00e99400,1,uVar4);
    uVar4 = FUN_00421360(s__SCREENTEXT_599__c_sTruguts_004c1224);
    FUN_00450530(0xfe,iVar3 + 0xa5,0xffffffa3,0xffffffbe,0x11,0xfffffffe,uVar4);
    FUN_00457140(0,0x40a00000,(_DAT_00e99358 - _DAT_004ac9e0) - (float)_DAT_004ac9e8,0x3f800000);
    uVar4 = FUN_00421360(s__r_sX__d_004c1218,DAT_00e35a98);
    FUN_0049eb80(local_40,uVar4);
    FUN_00450530(0x122,iVar3 + 0xb4,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
    if (DAT_00e35a98 < DAT_00e99220 - DAT_00e9935c) {
      FUN_00450530(0x122,iVar3 + 0xb4,0xffffffff,0,0,0xfffffffe,local_40);
    }
    puVar6 = &DAT_0050c918;
    iVar3 = DAT_00e99220;
    do {
      if ((DAT_0050c470 != 0) && ((*puVar6 & 0xc000) != 0)) {
        if (DAT_00e35a98 < iVar3 - DAT_00e9935c) {
          uVar4 = 0x4b;
        }
        else {
          uVar4 = 0x58;
          DAT_00e99400 = (ushort)(DAT_00e99400 == 0);
        }
        FUN_00440550(uVar4);
        iVar3 = DAT_00e99220;
      }
      puVar6 = puVar6 + 1;
    } while ((int)puVar6 < 0x50c91c);
  }
  return;
}

