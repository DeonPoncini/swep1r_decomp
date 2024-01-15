#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043f380(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  undefined local_40 [32];
  undefined local_20 [32];
  
  iVar2 = __ftol();
  FUN_00428740(0x7f,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004285d0(0x7f,1);
  FUN_00428660(0x7f,0xae,iVar2);
  FUN_00428740(0x81,0x32,0xffffffff,0xffffffff,0xfffffffe);
  FUN_004285d0(0x81,1);
  FUN_00428660(0x81,0xb2,iVar2 + 0x14);
  FUN_00428740(0x7c,0x32,0xffffffff,0xffffffff,0xfffffffe);
  FUN_004285d0(0x7c,1);
  FUN_00428660(0x7c,0xbe,iVar2 + 0x17);
  uVar3 = FUN_00421360(s__SCREENTEXT_589__f4_sBuy_Pit_Dro_004c1374);
  FUN_00450530(0xc1,iVar2 + 0x1a,0x32,0xffffffff,0xffffffff,0xfffffffe,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_590__f4_c_sBuy_more_p_004c1344);
  FUN_00450530(99,iVar2 + 0x1e,0x32,0xffffffff,0xffffffff,0xffffffff,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_591__f4_c_smake_fast_004c1314);
  FUN_00450530(99,iVar2 + 0x26,0x32,0xffffffff,0xffffffff,0xffffffff,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_592__f4_c_syour_dama_004c12e0);
  FUN_00450530(99,iVar2 + 0x2e,0x32,0xffffffff,0xffffffff,0xffffffff,uVar3);
  FUN_00428740(0x76,0x32,0xffffffff,0xffffffff,0xfffffffe);
  FUN_004285d0(0x76,1);
  FUN_00428660(0x76,0xc2,iVar2 + 0x68);
  uVar3 = FUN_00421360(s__r_s_d_004c12c0,1000);
  FUN_0049eb80(local_40,uVar3);
  FUN_0049eb80(local_20,s__f4_s_004b9484,local_40);
  FUN_00450530(0x114,iVar2 + 0x6b,0x32,0xffffffff,0xffffffff,0xfffffffe,local_20);
  iVar5 = 0;
  do {
    iVar1 = iVar5 + 0x74;
    FUN_00428740(iVar1,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(iVar1,1);
    FUN_00428660(iVar1,0xdb,iVar2 + iVar5 * 0xd + 0x7c);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  uVar3 = FUN_00421360(s__SCREENTEXT_251__sCost_004c1274);
  FUN_0049eb80(local_40,s__f4_s_004b9484,uVar3);
  FUN_00450530(0xc4,iVar2 + 0x6b,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
  iVar5 = (short)iVar2 + 0x7e;
  uVar3 = FUN_00421360(s__SCREENTEXT_254__c_sBUY_004c125c);
  FUN_0043fce0(param_1,0xfc,iVar5,0xd,(int)(short)DAT_00e99400,0,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_257__c_sCANCEL_004c1240);
  FUN_0043fce0(param_1,0xfc,iVar5,0xd,(int)(short)DAT_00e99400,1,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_599__c_sTruguts_004c1224);
  FUN_00450530(0xfe,iVar2 + 0xa5,0xffffffa3,0xffffffbe,0x11,0xfffffffe,uVar3);
  if ((_DAT_00e99358 == _DAT_004ac8b0) && (DAT_0050c930 != 1)) {
    FUN_00457140(0,0x40a00000,(_DAT_00e99358 - _DAT_004ac9e0) - (float)_DAT_004ac9e8,0x3f800000);
  }
  uVar3 = FUN_00421360(s__r_sX__d_004c1218,DAT_00e35a98);
  FUN_0049eb80(local_40,uVar3);
  FUN_00450530(0x122,iVar2 + 0xb4,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
  if (DAT_00e35a98 < 1000) {
    FUN_00450530(0x122,iVar2 + 0xb4,0xffffffff,0,0,0xfffffffe,local_40);
  }
  iVar2 = 0;
  if ('\0' < *(char *)(param_1 + 0x70)) {
    puVar4 = &DAT_0050c918;
    do {
      if ((*puVar4 & 0xc000) != 0) {
        if (DAT_00e35a98 < 1000) {
          uVar3 = 0x4b;
        }
        else {
          uVar3 = 0x58;
          DAT_00e99400 = (ushort)(DAT_00e99400 == 0);
        }
        FUN_00440550(uVar3);
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 < *(char *)(param_1 + 0x70));
  }
  if (DAT_00e35a98 < 1000) {
    DAT_00e99400 = 1;
  }
  return;
}

