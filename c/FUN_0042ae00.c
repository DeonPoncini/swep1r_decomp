#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ae00(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_36c;
  float local_368;
  float local_364;
  int local_360;
  float local_35c;
  float local_358;
  float local_354;
  undefined8 local_350;
  undefined local_348 [64];
  char local_308 [256];
  undefined local_208 [256];
  undefined local_108 [260];
  
  if (DAT_0050c058 == 0) {
    if ((DAT_0050c07c != 2) && (DAT_004b91c8 == 0)) {
      DAT_0050c084 = 1;
    }
    fVar6 = (float10)FUN_004456a0();
    local_368 = (float)fVar6;
    local_358 = (float)FUN_004816b0();
    local_354 = (float)(int)local_358 * _DAT_004ac530 * (float)_DAT_004ac538 - (float)_DAT_004ac540;
    if (((((byte)DAT_0050c048 & 1) != 0) && (DAT_0050c044 < 1)) && (DAT_00e98eb0 != 0)) {
      if ((DAT_0050c044 == 0) && (DAT_00e98eb0 == 0x1000)) {
        DAT_0050c044 = -1;
      }
      else if ((DAT_0050c044 == -1) && (DAT_00e98eb0 == 0x800)) {
        DAT_0050c044 = -2;
      }
      else if ((DAT_0050c044 == -2) && (DAT_00e98eb0 == 0x2000)) {
        DAT_0050c044 = -3;
      }
      else if ((DAT_0050c044 != -3) || (DAT_0050c044 = 1, DAT_00e98eb0 != 0x400)) {
        DAT_0050c044 = 0;
      }
    }
    if (_DAT_004ac524 <= local_368) {
      if (DAT_0050c07c == 2) {
        iVar1 = FUN_0045e120(0x4000);
        if (iVar1 != 0) {
          DAT_0050c04c = DAT_0050c04c + -1;
          if (DAT_0050c04c < 0) {
            DAT_0050c04c = 0;
          }
          else {
            FUN_00426c80(0x55,6,0x3e800000,0x3f800000,0);
          }
        }
        iVar1 = FUN_0045e120(0x8000);
        if (iVar1 != 0) {
          DAT_0050c04c = DAT_0050c04c + 1;
          iVar1 = FUN_0042ac70(DAT_0050c04c,local_348,local_308,&local_360,&local_36c);
          if (iVar1 == 0) {
            DAT_0050c04c = DAT_0050c04c + -1;
          }
          else {
            FUN_00426c80(0x55,6,0x3e800000,0x3f800000,0);
          }
        }
        DAT_004b2940 = 0;
        if (DAT_004d6b40 != 0) {
          DAT_004d6b48 = 0;
          DAT_004d6b40 = 0;
          FUN_0042ad30(DAT_0050c04c);
        }
        if (DAT_004d6b44 != 0) {
          if (DAT_0050c07c == 2) {
            DAT_0050c04c = 0;
          }
          FUN_0042ad30(DAT_0050c04c);
        }
      }
      else {
        if ((((DAT_00e98eb0 & 4) != 0) || ((DAT_00e98eb0 & 0x4000) != 0)) &&
           (DAT_0050c04c = DAT_0050c04c + -1, DAT_0050c04c < 0)) {
          DAT_0050c04c = 0;
          iVar1 = FUN_0042ac70(0,local_348,local_308,&local_360,&local_36c);
          while (iVar1 != 0) {
            DAT_0050c04c = DAT_0050c04c + 1;
            iVar1 = FUN_0042ac70(DAT_0050c04c,local_348,local_308,&local_360,&local_36c);
          }
          DAT_0050c04c = DAT_0050c04c + -1;
        }
        if (((DAT_00e98eb0 & 8) != 0) || ((DAT_00e98eb0 & 0x8000) != 0)) {
          DAT_0050c04c = DAT_0050c04c + 1;
          iVar1 = FUN_0042ac70(DAT_0050c04c,local_348,local_308,&local_360,&local_36c);
          if (iVar1 == 0) {
            DAT_0050c04c = 0;
          }
        }
        if ((DAT_00e98eb0 & 0x20) != 0) {
          FUN_0042acf0(DAT_0050c04c,0x3f800000);
        }
        if ((DAT_00e98eb0 & 0x10) != 0) {
          FUN_0042acf0(DAT_0050c04c,0xbf800000);
        }
        if ((DAT_00e98eb0 & 0x1000) != 0) {
          FUN_0042acf0(DAT_0050c04c,0xbf800000);
        }
        if (((DAT_00e98eb0 & 0x2000) != 0) || ((DAT_00e98eb0 & 1) != 0)) {
          FUN_0042acf0(DAT_0050c04c,0x3f800000);
        }
        if ((DAT_00e98eb0 & 0x400) != 0) {
          FUN_0042acf0(DAT_0050c04c,0x41200000);
        }
        if ((DAT_00e98eb0 & 0x800) != 0) {
          FUN_0042acf0(DAT_0050c04c,0xc1200000);
        }
        if ((DAT_00e98eb0 & 1) != 0) {
          FUN_0042ad30(DAT_0050c04c);
        }
        if ((DAT_00e98eb0 & 0x200) != 0) {
          FUN_00445780();
        }
        if ((DAT_00e98eb0 & 2) != 0) {
          FUN_00429d10();
        }
      }
    }
    if (DAT_0050c064 != 0) {
      if (DAT_0050c04c < 1) {
        DAT_0050c04c = 1;
      }
      if (2 < DAT_0050c04c) {
        DAT_0050c04c = 2;
      }
    }
    iVar1 = 0;
    local_368 = 0.0;
    iVar4 = 0x42;
    do {
      iVar2 = FUN_0042ac70(iVar1,local_348,local_308,&local_360,&local_36c);
      if (iVar2 != 0) {
        if (((float)_DAT_004ac548 <= local_36c) || (-10000 < local_360)) {
          local_350 = (double)local_36c;
          if (local_36c <= (float)_DAT_004ac548) {
            uVar3 = FUN_00421360(s__s_s___d_004b948c,local_348,local_360);
            FUN_0049eb80(local_108,uVar3);
          }
          else {
            uVar3 = FUN_00421360(s__s_s____2f_004b9498,local_348,local_350);
            FUN_0049eb80(local_108,uVar3);
          }
        }
        else {
          uVar3 = FUN_00421360(s__s_s_004b94a4,local_348);
          FUN_0049eb80(local_108,uVar3);
        }
        if (iVar4 < 0xd2) {
          iVar5 = 0x19;
          iVar2 = (int)local_368 + 0x14;
        }
        else {
          iVar5 = 0xa5;
          iVar2 = (int)local_368 + -0x78;
        }
        local_35c = 255.0;
        local_364 = 255.0;
        if (iVar1 == DAT_0050c04c) {
          local_35c = 0.0;
          local_364 = 55.0;
        }
        if (DAT_0050c07c == 2) {
          iVar5 = 0xa0;
          fVar6 = (float10)FUN_004456a0();
          iVar2 = iVar4;
          if ((float10)_DAT_004ac520 < fVar6) {
            local_350 = (double)CONCAT44(local_350._4_4_,(float)(fVar6 * (float10)_DAT_004ac550));
            if (iVar1 == DAT_0050c04c) {
              local_35c = local_354 * _DAT_004ac550;
              local_358 = local_354 * _DAT_004ac558;
              local_364 = local_354 * _DAT_004ac55c;
            }
            else {
              local_35c = 170.0;
              local_358 = 160.0;
              local_364 = 0.0;
            }
            FUN_0049eb80(local_208,&DAT_004b2304,local_108);
            uVar3 = __ftol(local_208);
            uVar3 = __ftol(uVar3);
            uVar3 = __ftol(uVar3);
            uVar3 = __ftol(uVar3);
            FUN_004505c0(0xa0,iVar4,uVar3);
          }
        }
        else {
          uVar3 = FUN_00421360(s__f4_s_004b9484,local_108);
          FUN_0049eb80(local_208,uVar3);
          uVar3 = __ftol(0xffffffff,local_208);
          uVar3 = __ftol(0xffffffff,uVar3);
          FUN_00450530(iVar5,iVar2,uVar3);
          if (iVar1 != DAT_0050c04c) goto LAB_0042b521;
          if (local_308[0] != '\0') {
            uVar3 = FUN_00421360(s__s_s_004b94a4,local_308);
            FUN_0049eb80(local_208,uVar3);
            FUN_00450530(iVar5 + 0x82,iVar2 + -0x1e,0,0xffffffff,0xffffff80,0xffffffff,local_208);
          }
        }
        if ((iVar1 == DAT_0050c04c) && (local_308[0] != '\0')) {
          uVar3 = FUN_00421360(s__s_s_004b94a4,local_308);
          FUN_0049eb80(local_208,uVar3);
          FUN_00450530(iVar5 + 0x82,iVar2 + -0x1e,0,0xffffffff,0xffffff80,0xffffffff,local_208);
        }
      }
LAB_0042b521:
      iVar4 = iVar4 + 0xc;
      iVar1 = iVar1 + 1;
      local_368 = (float)((int)local_368 + 0xe);
    } while (iVar4 < 0x162);
    (&DAT_0050c070)[DAT_0050c07c] = DAT_0050c04c;
  }
  else {
    DAT_00e9a9b8 = DAT_00e9a9b8 + -1;
    if (DAT_00e9a9b8 < 1) {
      DAT_00e9a9b8 = 10;
      DAT_00e9a9b0 = DAT_00e9a9b0 + 1;
      if (3 < DAT_00e9a9b0) {
        DAT_0050c058 = 0;
        return;
      }
    }
  }
  return;
}

