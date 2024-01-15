#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045fe70(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  undefined4 local_11c;
  byte local_114;
  byte bStack_113;
  byte bStack_112;
  undefined uStack_111;
  undefined uStack_110;
  undefined uStack_10f;
  undefined local_10c;
  undefined uStack_10b;
  undefined uStack_10a;
  undefined uStack_109;
  undefined uStack_108;
  undefined uStack_107;
  undefined uStack_106;
  undefined4 local_104;
  undefined local_100 [256];
  
  cVar6 = (-(param_5 != 0) & 4U) + 0x11;
  iVar5 = param_3;
  if (1 < DAT_0050ca18) {
    iVar5 = param_3 + 0x1f;
  }
  FUN_004285d0(cVar6,1);
  FUN_00428660(cVar6,iVar5,param_4);
  FUN_00428740(cVar6,0x59,0xffffff8c,0x36,0xfffffffe);
  iVar5 = FUN_00445690();
  fVar3 = _DAT_004ad22c;
  if (iVar5 == 0) {
    if ((*(uint *)(param_2 + 0x60) & 0x200000) == 0) {
      fVar3 = *(float *)(param_1 + 0x1d8 + param_5 * 4) -
              (float)_DAT_00e22a40 * (float)_DAT_004ad330;
      bVar1 = fVar3 < _DAT_004ad218;
      *(float *)(param_1 + 0x1d8 + param_5 * 4) = fVar3;
      if (bVar1) {
        *(undefined4 *)(param_1 + 0x1d8 + param_5 * 4) = 0;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x1d8 + param_5 * 4) -
              (float)_DAT_00e22a40 * (float)_DAT_004ad328;
      *(float *)(param_1 + 0x1d8 + param_5 * 4) = fVar2;
      if (fVar3 < fVar2) {
        *(undefined4 *)(param_1 + 0x1d8 + param_5 * 4) = 0x3f800000;
      }
    }
  }
  if (DAT_0050c5f0 == 0) {
    FUN_004816b0();
  }
  FUN_004285d0(0xe,0);
  if ((*(uint *)(param_2 + 0x60) & 0x800000) == 0) {
    if (param_5 == 0) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = 0x14;
    }
    FUN_004285d0(uVar4,0);
    local_11c = __ftol();
    FUN_0046bc50(param_2,&local_114,&local_10c,&local_104);
  }
  else {
    local_11c = __ftol();
    local_114 = 0xff;
    bStack_113 = 0;
    bStack_112 = 0;
    local_10c = 0;
    uStack_10b = 0xff;
    uStack_10a = 0;
    uStack_109 = 0xe6;
    local_104 = 0x3f800000;
  }
  if ((1 < DAT_0050ca18) && (local_11c = __ftol(), 0xff < (short)local_11c)) {
    local_11c = 0xff;
  }
  if (_DAT_004ad218 < _DAT_004c4a58) {
    uVar4 = FUN_00421360(s__MONDOTEXT_H_0522_Net_play__Pres_004b5ac4);
    FUN_0049eb80(local_100,s__f4_s_c_s_004c6dfc,uVar4);
    uVar4 = __ftol(local_100);
    FUN_004816b0(0xffffffff,0xffffffff,uVar4);
    uVar4 = __ftol();
    FUN_00450530(0xa0,0xdc,uVar4);
    _DAT_004c4a58 = _DAT_004c4a58 - (float)_DAT_00e22a40 * (float)_DAT_004ad348;
  }
  cVar6 = (-(param_5 != 0) & 4U) + 0x12;
  FUN_004285d0(cVar6,1);
  FUN_00428660(cVar6,param_3 + 0x18,param_4 + -7);
  FUN_00428740(cVar6,CONCAT13(uStack_111,CONCAT12(bStack_112,CONCAT11(bStack_113,local_114))),
               CONCAT13(uStack_110,CONCAT12(uStack_111,CONCAT11(bStack_112,bStack_113))),
               CONCAT13(uStack_10f,CONCAT12(uStack_110,CONCAT11(uStack_111,bStack_112))),local_11c);
  if (((((DAT_0050ca18 < 2) && (*(int *)(param_1 + 0x1ac) == 0)) && (*(int *)(param_1 + 0x1c0) == 0)
       ) && ((0x78 < local_114 && (0x78 < bStack_113)))) &&
     ((bStack_112 < 0x78 &&
      ((iVar5 = FUN_00445690(), iVar5 == 0 &&
       (DAT_0050ca58 = DAT_0050ca58 + 1, (DAT_0050ca58 & 1) != 0)))))) {
    uVar4 = FUN_00421360(s__SCREENTEXT_380___Boost_004c6de4);
    FUN_0049eb80(local_100,s__f4_c_s_004c6ddc,uVar4);
    FUN_004816b0(local_11c,local_100);
    uVar4 = __ftol();
    FUN_00450530(0xf4,0xa2,0xffffffff,0xffffffff,uVar4);
  }
  cVar6 = (-(param_5 != 0) & 4U) + 0xf;
  FUN_004285d0(cVar6,1);
  FUN_00428660(cVar6,param_3 + 0x22,param_4 + 6);
  FUN_00428740(cVar6,CONCAT13(uStack_109,CONCAT12(uStack_10a,CONCAT11(uStack_10b,local_10c))),
               CONCAT13(uStack_108,CONCAT12(uStack_109,CONCAT11(uStack_10a,uStack_10b))),
               CONCAT13(uStack_107,CONCAT12(uStack_108,CONCAT11(uStack_109,uStack_10a))),
               CONCAT13(uStack_106,CONCAT12(uStack_107,CONCAT11(uStack_108,uStack_109))));
  DAT_0050ca04 = local_104;
  cVar6 = (-(param_5 != 0) & 4U) + 0x10;
  if ((*(uint *)(param_2 + 0x60) & 0x800000) == 0) {
    FUN_004285d0(cVar6,0);
    return;
  }
  fVar3 = _DAT_004ad22c - *(float *)(param_2 + 0x218) * _DAT_004ad350;
  FUN_004285d0(cVar6,1);
  FUN_00428660(cVar6,param_3 + 0x22,param_4 + 6);
  FUN_00428740(cVar6,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  DAT_0050ca08 = fVar3;
  return;
}

