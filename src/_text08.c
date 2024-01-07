#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0

undefined4
FUN_0042ac70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;

  if (DAT_0050c07c == 0) {
    uVar1 = FUN_0042a580(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  if (DAT_0050c07c == 1) {
    uVar1 = FUN_00429dc0(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  if (DAT_0050c07c == 2) {
    uVar1 = FUN_0042a840(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return param_5;
}



void FUN_0042acf0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_0050c07c == 0) {
    FUN_0042a9f0(param_1,param_2);
    return;
  }
  if (DAT_0050c07c == 1) {
    FUN_0042a110(param_1,param_2);
  }
  return;
}



void FUN_0042ad30(undefined4 param_1)

{
  if (DAT_0050c07c == 0) {
    FUN_0042ab60(param_1);
    return;
  }
  if (DAT_0050c07c == 2) {
    FUN_0042ab80(param_1);
  }
  return;
}



void FUN_0042ad60(void)

{
  int iVar1;

  if (DAT_0050c070 == -2) {
    iVar1 = 3;
    do {
      iVar1 = iVar1 + -1;
      DAT_0050c07c = 0xffffffff;
    } while (iVar1 != 0);
  }
  DAT_0050c04c = DAT_0050c070;
  DAT_0050c054 = 0;
  DAT_00e9a9b4 = 0;
  iVar1 = FUN_00450b30(0x4a646765,0);
  if ((*(ushort *)(iVar1 + 6) & 0x1000) != 0) {
    DAT_0050c07c = 0;
    (&DAT_00e9a9c0)[DAT_00e9a9b4] = 0;
    return;
  }
  DAT_0050c064 = 0;
  DAT_0050c04c = 0;
  DAT_0050c07c = 2;
  (&DAT_00e9a9c0)[DAT_00e9a9b4] = 2;
  return;
}



undefined4 FUN_0042adf0(void)

{
  return DAT_0050c054;
}



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
    local_354 = (float)(int)local_358 * 4.656613e-10 * 0.25 - -0.75;
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
    if (1.0 <= local_368) {
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
        if ((-9999.99 <= local_36c) || (-10000 < local_360)) {
          local_350 = (double)local_36c;
          if (local_36c <= -9999.99) {
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
          if ((float10)0.0 < fVar6) {
            local_350 = (double)CONCAT44(local_350._4_4_,(float)(fVar6 * (float10)255.0));
            if (iVar1 == DAT_0050c04c) {
              local_35c = local_354 * 255.0;
              local_358 = local_354 * 250.0;
              local_364 = local_354 * 50.0;
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



int FUN_0042b560(int param_1)

{
  int iVar1;
  uint uVar2;
  int **ppiVar3;
  int iVar4;

  if (param_1 != 0) {
    iVar1 = FUN_00431770(param_1);
    if (iVar1 == 0x3064) {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        ppiVar3 = *(int ***)(param_1 + 0x18);
        do {
          iVar4 = **ppiVar3;
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar1 = iVar1 + 1;
          ppiVar3 = ppiVar3 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x14));
        return iVar4;
      }
    }
    else {
      uVar2 = FUN_00431770(param_1);
      if ((uVar2 & 0x4000) != 0) {
        iVar4 = 0;
        iVar1 = FUN_00431780(param_1);
        if (0 < iVar1) {
          do {
            iVar1 = FUN_0042b560(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4));
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar4 = iVar4 + 1;
            iVar1 = FUN_00431780(param_1);
          } while (iVar4 < iVar1);
        }
      }
    }
  }
  return 0;
}



void FUN_0042b5e0(int param_1,short param_2,short param_3,short param_4,short param_5,short param_6,
                 short param_7)

{
  int iVar1;

  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0xc), iVar1 != 0)) {
    if (-1 < param_2) {
      *(char *)(iVar1 + 0x20) = (char)param_2;
    }
    if (-1 < param_3) {
      *(char *)(iVar1 + 0x21) = (char)param_3;
    }
    if (-1 < param_4) {
      *(char *)(iVar1 + 0x22) = (char)param_4;
    }
    if (-1 < param_5) {
      *(char *)(iVar1 + 0x23) = (char)param_5;
    }
    if (-1 < param_6) {
      *(char *)(iVar1 + 0x24) = (char)param_6;
    }
    if (-1 < param_7) {
      *(char *)(iVar1 + 0x25) = (char)param_7;
    }
  }
  return;
}



void FUN_0042b640(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  if (param_1 != 0) {
    iVar1 = FUN_00431770(param_1);
    if (iVar1 == 0x3064) {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          FUN_0042b5e0(**(undefined4 **)(*(int *)(param_1 + 0x18) + iVar1 * 4),param_2,param_3,
                       param_4,param_5,param_6,param_7);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x14));
        return;
      }
    }
    else {
      uVar2 = FUN_00431770(param_1);
      if ((uVar2 & 0x4000) != 0) {
        iVar3 = 0;
        iVar1 = FUN_00431780(param_1);
        if (0 < iVar1) {
          do {
            FUN_0042b640(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 * 4),param_2,param_3,
                         param_4,param_5,param_6,param_7);
            iVar3 = iVar3 + 1;
            iVar1 = FUN_00431780(param_1);
          } while (iVar3 < iVar1);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0042b710(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  local_10 = DAT_00e375b0;
  local_14 = DAT_00e375ac;
  local_40 = _DAT_00e37580;
  local_3c = _DAT_00e37584;
  local_38 = _DAT_00e37588;
  local_34 = _DAT_00e3758c;
  fVar1 = (float)((int)*(short *)(param_1 + 0x10) / 2);
  local_30 = _DAT_00e37590;
  fVar3 = (float)((int)*(short *)(param_1 + 0x12) / 2);
  local_2c = _DAT_00e37594;
  fVar2 = fVar1 * 0.5;
  fVar4 = fVar3 * 0.5;
  local_28 = _DAT_00e37598;
  local_24 = _DAT_00e3759c;
  fVar5 = (float)((int)((int)*(short *)(param_1 + 0x18) +
                       ((int)*(short *)(param_1 + 0x18) >> 0x1f & 3U)) >> 2) - fVar2;
  fVar6 = (float)((int)((int)*(short *)(param_1 + 0x1a) +
                       ((int)*(short *)(param_1 + 0x1a) >> 0x1f & 3U)) >> 2) - fVar4;
  local_1c = DAT_00e375a4;
  local_18 = DAT_00e375a8;
  local_20 = _DAT_00e375a0;
  local_c = _DAT_00e375b4;
  local_8 = _DAT_00e375b8;
  local_4 = _DAT_00e375bc;
  *param_3 = -1000.0;
  *param_4 = -1000.0;
  if (param_7 == 0) {
    local_5c = *param_2 - _DAT_0050c6e8;
    local_58 = param_2[1] - _DAT_0050c6ec;
    local_54 = param_2[2] - _DAT_0050c6f0;
    param_2 = &local_5c;
  }
  FUN_00480690(&local_50,param_2,&local_40);
  if ((DAT_00e996dc & 0x4000) != 0) {
    local_50 = -local_50;
  }
  if (0.01 < local_44) {
    fVar2 = (local_50 / local_44 - -1.0) * fVar2 + fVar5;
    fVar4 = (1.0 - local_4c / local_44) * fVar4 + fVar6;
    *param_5 = local_48 / local_44;
    *param_6 = local_44;
    if ((((fVar5 - 8.0 < fVar2) && (fVar2 < (fVar5 + fVar1) - -8.0)) && (fVar6 - 8.0 < fVar4)) &&
       (fVar4 < (fVar6 + fVar3) - -8.0)) {
      *param_3 = fVar2;
      *param_4 = fVar4;
    }
  }
  return;
}



void FUN_0042ba20(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined4 param_5,float param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar1 = __ftol();
  uVar2 = __ftol();
  FUN_0042bb00(param_1,uVar1,uVar2);
  uVar1 = __ftol();
  FUN_00428740(param_1,param_7,param_8,param_9,uVar1);
  param_4 = (0.7 - (1.0 - param_6) * -0.3) * param_4;
  FUN_004286f0(param_1,param_4,param_4);
  FUN_004285d0(param_1,1);
  return;
}



void FUN_0042bb00(undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = __ftol();
  uVar1 = __ftol(uVar1);
  FUN_00428660(param_1,uVar1);
  return;
}



void FUN_0042bb50(int param_1,int param_2,int param_3)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *piVar7;
  undefined *puVar8;
  int iVar9;
  float10 fVar10;

  iVar9 = param_1;
  if (0x31 < (int)(&DAT_00e9a3c0)[param_3]) {
    FUN_004285d0(*(undefined2 *)(&DAT_004b94c8 + param_3),0);
    piVar7 = &DAT_004b94e0 + param_3 * 8;
    iVar9 = 8;
    do {
      if (*piVar7 != -1) {
        FUN_004285d0(*(undefined2 *)piVar7,0);
      }
      piVar7 = piVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    return;
  }
  iVar6 = param_1 - DAT_00ec86c4 / 2;
  iVar5 = param_2 - DAT_00ec85e8 / 2;
  fVar3 = 1.0 - (float)(&DAT_00e9a3c0)[param_3] * 0.02;
  fVar4 = fVar3 * *(float *)(&DAT_004b94d0 + param_3 * 4);
  fVar10 = (float10)FUN_00480670((float)(iVar6 * iVar6 + iVar5 * iVar5));
  fVar1 = (float)(fVar10 * (float10)0.0125);
  if (fVar10 * (float10)0.0125 <= (float10)1.0) {
    __ftol();
  }
  __ftol();
  iVar5 = __ftol();
  if (DAT_00e9a830 < iVar5) {
    DAT_00e9a830 = iVar5;
  }
  FUN_004285d0(*(undefined2 *)(&DAT_004b94c8 + param_3),1);
  FUN_0042bb00(CONCAT22(extraout_var,*(undefined2 *)(&DAT_004b94c8 + param_3)),param_1,param_2);
  FUN_004286f0(CONCAT22(extraout_var_00,*(undefined2 *)(&DAT_004b94c8 + param_3)),fVar4,fVar4);
  iVar5 = FUN_00445690();
  if (iVar5 == 0) {
    iVar5 = 0xff;
  }
  else {
    FUN_004456a0();
    iVar5 = __ftol();
  }
  iVar5 = iVar5 * (char)(&DAT_004b94db)[param_3 * 4];
  FUN_00428740(CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)(&DAT_004b94c8 + param_3)),
               (&DAT_004b94d8)[param_3 * 4],
               CONCAT31((int3)((uint)(iVar5 / 0xff) >> 8),(&DAT_004b94d9)[param_3 * 4]),
               CONCAT31((int3)((uint)iVar5 >> 8),(&DAT_004b94da)[param_3 * 4]),iVar5 / 0xff);
  if ((fVar1 <= 2.0) && (iVar5 = FUN_004376b0(), iVar5 != 0)) {
    fVar10 = (float10)FUN_004456a0();
    bVar2 = (&DAT_004b94db)[param_3 * 4];
    param_1 = 8;
    puVar8 = &DAT_00e9a6a1 + param_3 * 0x18;
    param_3 = param_3 << 5;
    do {
      if (*(int *)((int)&DAT_004b94e0 + param_3) != -1) {
        FUN_004285d0(*(undefined2 *)((int)&DAT_004b94e0 + param_3),1);
        FUN_0042ba20(*(undefined4 *)((int)&DAT_004b94e0 + param_3),iVar9,param_2,
                     *(undefined4 *)(&DAT_00e99780 + param_3),
                     *(undefined4 *)(&DAT_00e9a440 + param_3),
                     (float)(uint)bVar2 * 0.003921569 *
                     (float)(((float10)2.0 - (float10)fVar1) * (float10)0.5 * (float10)fVar3 *
                            ((float10)1.0 - fVar10 * (float10)0.6)),puVar8[-1],*puVar8,puVar8[1]);
      }
      puVar8 = puVar8 + 3;
      param_3 = param_3 + 4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    return;
  }
  piVar7 = &DAT_004b94e0 + param_3 * 8;
  iVar9 = 8;
  do {
    if (*piVar7 != -1) {
      FUN_004285d0(*(undefined2 *)piVar7,0);
    }
    piVar7 = piVar7 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return;
}



void FUN_0042be60(void)

{
  char cVar1;
  float fVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_30;
  short *local_2c;
  int local_28;
  float *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  short *local_c;
  undefined local_8 [4];
  float local_4;

  FUN_00431c40(&local_20,&local_28,&local_2c,&local_4,local_8);
  local_c = (short *)(local_28 * DAT_00ec85e8 + (int)local_2c);
  local_24 = (float *)0x0;
  do {
    if (-1 < *(int *)((int)&DAT_004b94c8 + (int)local_24)) {
      iVar5 = *(int *)((int)&DAT_00e9a480 + (int)local_24);
      if (iVar5 < -500) {
        *(undefined4 *)((int)&DAT_00e9a3c0 + (int)local_24) = 0x32;
      }
      else {
        local_30 = 0;
        local_1c = -iVar5 + 0xc;
        local_18 = DAT_00ec86c4 + -8 + -iVar5;
        local_10 = -*(int *)((int)&DAT_00e9a488 + (int)local_24);
        local_14 = local_10 + 0xc;
        local_10 = DAT_00ec85e8 + -8 + local_10;
        psVar3 = (short *)((int)local_2c +
                          (iVar5 + -4) * local_20 +
                          (*(int *)((int)&DAT_00e9a488 + (int)local_24) + -4) * local_28);
        iVar5 = 0;
        do {
          iVar4 = 0;
          do {
            if (((((iVar4 < local_1c) || (local_18 <= iVar4)) || (iVar5 < local_14)) ||
                (local_10 <= iVar5)) ||
               (((local_2c <= psVar3 && (psVar3 < local_c)) &&
                (((local_20 == 1 && (*(char *)psVar3 != -1)) || ((local_20 == 2 && (*psVar3 != -1)))
                 ))))) {
              local_30 = local_30 + 1;
            }
            psVar3 = (short *)((int)psVar3 + local_20);
            iVar4 = iVar4 + 1;
          } while (iVar4 < 8);
          psVar3 = (short *)((int)psVar3 + local_28 + local_20 * -8);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
        *(int *)((int)&DAT_00e9a3c0 + (int)local_24) = local_30;
      }
    }
    local_24 = (float *)((int)local_24 + 4);
  } while ((int)local_24 < 8);
  switch(local_20) {
  case 1:
    local_4 = DAT_004b94b0;
    break;
  case 2:
    local_4 = DAT_004b94b4;
    break;
  case 3:
    local_4 = DAT_004b94bc;
    break;
  case 4:
    local_4 = DAT_004b94b8;
  }
  iVar5 = 0;
  do {
    *(undefined4 *)((int)&DAT_00e9a7e0 + iVar5) = 0xc47a0000;
    if (-1 < *(int *)((int)&DAT_00e9a720 + iVar5)) {
      fVar2 = 0.0;
      if (0 < local_20) {
        pcVar7 = (char *)((int)local_2c +
                         local_20 +
                         local_20 * *(int *)((int)&DAT_00e9a720 + iVar5) +
                         *(int *)((int)&DAT_00e9a780 + iVar5) * local_28);
        iVar4 = local_20 * 8;
        iVar6 = local_20;
        do {
          cVar1 = (char)iVar4;
          iVar4 = iVar4 + -8;
          local_c = (short *)((uint)(byte)pcVar7[-1] << (cVar1 - 8U & 0x1f));
          pcVar7 = pcVar7 + -1;
          iVar6 = iVar6 + -1;
          fVar2 = fVar2 + (float)(int)local_c;
        } while (iVar6 != 0);
      }
      *(float *)((int)&DAT_00e9a7e0 + iVar5) = fVar2 * local_4;
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x50);
  iVar5 = 0;
  local_24 = (float *)&DAT_00e99d80;
  do {
    if ((&DAT_00e9a6e0)[iVar5] != '\0') {
      iVar4 = (&DAT_00e99ce0)[iVar5];
      *local_24 = -1000.0;
      if (-1 < iVar4) {
        fVar2 = 0.0;
        if (0 < local_20) {
          pcVar7 = (char *)((int)local_2c +
                           local_20 + local_20 * iVar4 + (&DAT_00e99c40)[iVar5] * local_28);
          iVar4 = local_20 * 8;
          iVar6 = local_20;
          do {
            cVar1 = (char)iVar4;
            iVar4 = iVar4 + -8;
            local_c = (short *)((uint)(byte)pcVar7[-1] << (cVar1 - 8U & 0x1f));
            pcVar7 = pcVar7 + -1;
            iVar6 = iVar6 + -1;
            fVar2 = fVar2 + (float)(int)local_c;
          } while (iVar6 != 0);
        }
        *local_24 = fVar2 * local_4;
      }
    }
    local_24 = local_24 + 1;
    iVar5 = iVar5 + 1;
  } while ((int)local_24 < 0xe99e20);
  iVar5 = 0;
  if (0 < DAT_0050c088) {
    local_24 = (float *)&DAT_00e9a8e0;
    do {
      iVar4 = (&DAT_00e9a8a0)[iVar5];
      *local_24 = -1000.0;
      if (-1 < iVar4) {
        fVar2 = 0.0;
        if (0 < local_20) {
          pcVar7 = (char *)((int)local_2c +
                           local_20 + local_20 * iVar4 + (&DAT_00e9a920)[iVar5] * local_28);
          iVar4 = local_20 * 8;
          iVar6 = local_20;
          do {
            cVar1 = (char)iVar4;
            iVar4 = iVar4 + -8;
            local_c = (short *)((uint)(byte)pcVar7[-1] << (cVar1 - 8U & 0x1f));
            pcVar7 = pcVar7 + -1;
            iVar6 = iVar6 + -1;
            fVar2 = fVar2 + (float)(int)local_c;
          } while (iVar6 != 0);
        }
        *local_24 = fVar2 * local_4;
      }
      iVar5 = iVar5 + 1;
      local_24 = local_24 + 1;
    } while (iVar5 < DAT_0050c088);
  }
  FUN_00431cd0();
  return;
}



void FUN_0042c1a0(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined local_10 [4];
  undefined local_c [4];
  undefined local_8 [4];
  undefined local_4 [4];

  iVar6 = 0;
  FUN_004285d0(0xffffff98,0);
  if ((((DAT_0050c048 & 0x200) == 0) || (DAT_0050c040 < 1)) || ((DAT_00e98e90 & 0x1100) != 0x1100))
  {
    DAT_00e9a830 = 0;
    bVar1 = false;
    puVar4 = &DAT_00e9a3e0;
    puVar5 = &DAT_00e9a590;
    do {
      if (-1 < (int)(&DAT_004b94c8)[iVar6]) {
        uVar2 = (&DAT_00e99c20)[iVar6];
        (&DAT_00e9a598)[iVar6] = (&DAT_00e9a480)[iVar6];
        uVar3 = (&DAT_00e99c28)[iVar6];
        *puVar5 = (&DAT_00e9a488)[iVar6];
        (&DAT_00e9a480)[iVar6] = uVar2;
        (&DAT_00e9a488)[iVar6] = uVar3;
        bVar1 = true;
        FUN_0042b710(param_1,puVar4,local_10,local_c,local_4,local_8,1);
        uVar2 = __ftol();
        (&DAT_00e99c20)[iVar6] = uVar2;
        uVar3 = __ftol();
        (&DAT_00e99c28)[iVar6] = uVar3;
        FUN_0042bb50(uVar2,uVar3,iVar6);
      }
      puVar4 = puVar4 + 0xc;
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while ((int)puVar4 < 0xe9a3f8);
    if (bVar1) {
      uVar2 = __ftol();
      FUN_00428740(0xffffff98,0xffffffff,0xffffffff,0xffffffc8,uVar2);
    }
  }
  return;
}



void FUN_0042c2d0(int param_1,undefined param_2)

{
  (&DAT_004b94db)[param_1 * 4] = param_2;
  return;
}



void FUN_0042c2e0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8)

{
  int iVar1;

  if ((-1 < param_1) && (param_1 < 2)) {
    (&DAT_004b94c8)[param_1] = param_2;
    iVar1 = param_1 * 0xc;
    *(undefined4 *)(&DAT_00e9a3e0 + iVar1) = *param_3;
    *(undefined4 *)(&DAT_00e9a3e4 + iVar1) = param_3[1];
    *(undefined4 *)(&DAT_00e9a3e8 + iVar1) = param_3[2];
    *(undefined4 *)(&DAT_004b94d0 + param_1 * 4) = param_4;
    (&DAT_00e9a598)[param_1] = 0xfffffc18;
    (&DAT_00e9a480)[param_1] = 0xfffffc18;
    (&DAT_00e99c20)[param_1] = 0xfffffc18;
    (&DAT_004b94d8)[param_1 * 4] = param_5;
    (&DAT_004b94d9)[param_1 * 4] = param_6;
    (&DAT_004b94da)[param_1 * 4] = param_7;
    (&DAT_004b94db)[param_1 * 4] = param_8;
  }
  return;
}



void FUN_0042c380(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined param_6,undefined param_7,undefined param_8)

{
  if ((((-1 < param_1) && (param_1 < 2)) && (-1 < param_2)) && (param_2 < 8)) {
    param_2 = param_2 + param_1 * 8;
    *(undefined4 *)(&DAT_00e99780 + param_2 * 4) = param_5;
    (&DAT_004b94e0)[param_2] = param_3;
    *(undefined4 *)(&DAT_00e9a440 + param_2 * 4) = param_4;
    (&DAT_00e9a6a0)[param_2 * 3] = param_6;
    (&DAT_00e9a6a1)[param_2 * 3] = param_7;
    (&DAT_00e9a6a2)[param_2 * 3] = param_8;
  }
  return;
}



void FUN_0042c3e0(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_004b94e0;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  DAT_004b94c8 = 0xffffffff;
  DAT_004b94cc = 0xffffffff;
  return;
}



void FUN_0042c400(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_00e9a840;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffd8f1;
    puVar2 = puVar2 + 1;
  }
  return;
}



void FUN_0042c420(int param_1,undefined4 *param_2,undefined4 param_3)

{
  (&DAT_00e9a840)[param_1] = param_3;
  param_1 = param_1 * 0xc;
  *(undefined4 *)(&DAT_00e9a4a0 + param_1) = *param_2;
  *(undefined4 *)(&DAT_00e9a4a4 + param_1) = param_2[1];
  *(undefined4 *)(&DAT_00e9a4a8 + param_1) = param_2[2];
  return;
}



void FUN_0042c460(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_00e9a400;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00e9a5a0;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)&DAT_00e9a6e0;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void FUN_0042c490(int param_1,undefined4 *param_2)

{
  int iVar1;

  if (param_1 < 0x28) {
    iVar1 = param_1 * 0xc;
    *(undefined4 *)(&DAT_00e99e20 + iVar1) = *param_2;
    *(undefined4 *)(&DAT_00e99e24 + iVar1) = param_2[1];
    *(undefined4 *)(&DAT_00e99e28 + iVar1) = param_2[2];
    (&DAT_00e99d80)[param_1] = 0xc47a0000;
    (&DAT_00e9a6e0)[param_1] = 1;
  }
  return;
}



void FUN_0042c4e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 < 10) {
    (&DAT_00e9a5a0)[param_1] = param_2;
    (&DAT_00e9a400)[param_1] = param_3;
  }
  return;
}



void FUN_0042c500(void)

{
  DAT_0050c088 = 0;
  return;
}



void FUN_0042c510(undefined4 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  float10 fVar8;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined local_c [4];
  undefined local_8 [8];

  fVar2 = param_2;
  puVar6 = &DAT_00e9a4a0;
  iVar7 = 0;
  do {
    if (fVar2 == 0.0) {
      *(undefined4 *)((int)&DAT_00e9a720 + iVar7) = 0xfffffc18;
      *(undefined4 *)((int)&DAT_00e9a780 + iVar7) = 0xfffffc18;
    }
    else {
      *(undefined4 *)((int)&DAT_00e9a5e0 + iVar7) = 0xfffffc18;
      *(undefined4 *)((int)&DAT_00e9a640 + iVar7) = 0xfffffc18;
    }
    if (*(int *)((int)&DAT_00e9a840 + iVar7) != -9999) {
      fVar8 = (float10)FUN_0042f950(puVar6,&DAT_0050c6e8);
      local_14 = (float)fVar8;
      if (((float10)40.0 < fVar8) && (local_14 < 1500.0)) {
        if (400.0 <= local_14) {
          local_18 = (1500.0 - local_14) * 255.0 * 0.0009090909;
        }
        else {
          local_18 = 255.0;
        }
        if (128.0 < local_18) {
          local_18 = 128.0;
        }
        iVar4 = FUN_00445690();
        if (iVar4 != 0) {
          local_18 = local_18 * 0.5;
        }
        FUN_0042b710(param_1,puVar6,&local_1c,&param_2,&local_10,local_c,0);
        if (-4.0 < local_1c) {
          iVar4 = *(int *)((int)&DAT_00e9a840 + iVar7);
          if (iVar4 < 0) {
            param_2 = param_2 - 20.0;
            fVar1 = 8.0;
          }
          else {
            param_2 = param_2 - 13.0;
            fVar1 = 4.0;
          }
          local_1c = local_1c - fVar1;
          if (((local_1c < (float)DAT_00ec86c4) && (0.0 < param_2)) &&
             (param_2 < (float)DAT_00ec85e8)) {
            if (fVar2 == 0.0) {
              uVar5 = __ftol();
              *(undefined4 *)((int)&DAT_00e9a720 + iVar7) = uVar5;
              uVar5 = __ftol();
              *(undefined4 *)((int)&DAT_00e9a780 + iVar7) = uVar5;
            }
            else {
              uVar5 = __ftol();
              *(undefined4 *)((int)&DAT_00e9a5e0 + iVar7) = uVar5;
              uVar5 = __ftol();
              *(undefined4 *)((int)&DAT_00e9a640 + iVar7) = uVar5;
            }
            if ((local_10 < 0.0) || (local_10 < *(float *)((int)&DAT_00e9a7e0 + iVar7))) {
              if (iVar4 < 0) {
                FUN_0049eb80(local_8,s__f1_s_d_004b957c,-iVar4);
                cVar3 = __ftol(local_8);
                cVar3 = cVar3 + '(';
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_00421360(&DAT_004b9584,iVar4);
                FUN_0049eb80(local_8,uVar5);
                cVar3 = __ftol(local_8);
                uVar5 = 0xffffffff;
              }
              uVar5 = __ftol(0xffffffff,0xffffffff,uVar5,cVar3);
              uVar5 = __ftol(uVar5);
              FUN_0042c7a0(uVar5);
            }
          }
        }
      }
    }
    puVar6 = puVar6 + 0xc;
    iVar7 = iVar7 + 4;
  } while ((int)puVar6 < 0xe9a590);
  return;
}



void FUN_0042c7a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;

  uVar1 = __ftol(param_3,param_4,param_5,param_6,param_7);
  uVar1 = __ftol(uVar1);
  FUN_00450530(uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0042c800(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float *local_8;
  float local_4;

  iVar5 = 0;
  do {
    FUN_004285d0(*(undefined2 *)((int)&DAT_00e9a5a0 + iVar5),0);
    FUN_004285d0(CONCAT22(extraout_var_00,*(undefined2 *)((int)&DAT_00e9a400 + iVar5)),0);
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x28);
  iVar5 = 0;
  local_8 = (float *)&DAT_00e99d80;
  puVar4 = &DAT_00e99e20;
  iVar6 = 0;
  do {
    pfVar7 = local_8;
    (&DAT_00e99ce0)[iVar5] = 0xfffffc18;
    (&DAT_00e99c40)[iVar5] = 0xfffffc18;
    if ((&DAT_00e9a6e0)[iVar5] != '\0') {
      fVar8 = (float10)FUN_0042f950(puVar4,&DAT_0050c6e8);
      if (fVar8 < (float10)_DAT_004b9578) {
        iVar2 = FUN_00445690();
        local_14 = 0x43000000;
        if (iVar2 == 0) {
          local_14 = 0x437f0000;
        }
        FUN_0042b710(param_1,puVar4,&local_20,&local_1c,&local_c,&local_10,0);
        if (0.0 < local_20) {
          if (0.1 < local_10) {
            local_18 = 100.0 / local_10;
          }
          else {
            local_18 = 1000.0;
          }
          if (2.0 < local_18) {
            local_18 = 2.0;
          }
          if (((local_20 < (float)DAT_00ec86c4) && (0.0 < local_1c)) &&
             (local_1c < (float)DAT_00ec85e8)) {
            uVar3 = __ftol();
            (&DAT_00e99ce0)[iVar5] = uVar3;
            uVar3 = __ftol();
            (&DAT_00e99c40)[iVar5] = uVar3;
            if (((*pfVar7 != -1000.0) && ((local_c < 0.0 || (local_c < *pfVar7)))) &&
               (fVar1 = (160.0 - local_20) * 0.3333333, local_4 = fVar1, iVar6 < 0x28)) {
              if (*(int *)((int)&DAT_00e9a5a0 + iVar6) != -1) {
                FUN_004285d0(CONCAT22(extraout_var_01,*(undefined2 *)((int)&DAT_00e9a5a0 + iVar6)),1
                            );
                uVar3 = __ftol();
                uVar3 = __ftol(uVar3);
                FUN_0042bb00(CONCAT22(extraout_var_05,*(undefined2 *)((int)&DAT_00e9a5a0 + iVar6)),
                             uVar3);
                FUN_00428720(CONCAT22(extraout_var,*(undefined2 *)((int)&DAT_00e9a5a0 + iVar6)),
                             fVar1);
                FUN_004286f0(CONCAT22(extraout_var_02,*(undefined2 *)((int)&DAT_00e9a5a0 + iVar6)),
                             0x3f800000,0x3f800000);
                uVar3 = __ftol();
                FUN_00428740(CONCAT22(extraout_var_06,*(undefined2 *)((int)&DAT_00e9a5a0 + iVar6)),
                             0xffffffff,0xffffffff,0xffffffff,uVar3);
              }
              if (*(int *)((int)&DAT_00e9a400 + iVar6) != -1) {
                FUN_004285d0(*(undefined2 *)((int)&DAT_00e9a400 + iVar6),1);
                uVar3 = __ftol();
                uVar3 = __ftol(uVar3);
                FUN_0042bb00(CONCAT22(extraout_var_03,*(undefined2 *)((int)&DAT_00e9a400 + iVar6)),
                             uVar3);
                FUN_00428720(CONCAT22(extraout_var_07,*(undefined2 *)((int)&DAT_00e9a400 + iVar6)),
                             fVar1);
                FUN_004286f0(*(undefined2 *)((int)&DAT_00e9a400 + iVar6),local_18,local_18);
                uVar3 = __ftol();
                FUN_00428740(CONCAT22(extraout_var_04,*(undefined2 *)((int)&DAT_00e9a400 + iVar6)),
                             0xffffffff,0xffffffff,0xffffffff,uVar3);
              }
              iVar6 = iVar6 + 4;
              pfVar7 = local_8;
            }
          }
        }
      }
    }
    puVar4 = puVar4 + 0xc;
    iVar5 = iVar5 + 1;
    local_8 = pfVar7 + 1;
  } while ((int)puVar4 < 0xe9a000);
  return;
}



void FUN_0042cb00(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined *puVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float local_10;
  float local_c;
  float local_8;
  undefined local_4 [4];

  iVar5 = 0;
  if (0 < DAT_0050c088) {
    piVar4 = &DAT_00e9a5a0;
    pfVar3 = (float *)&DAT_00e9a8e0;
    puVar2 = &DAT_00e997c0;
    do {
      (&DAT_00e9a8a0)[iVar5] = 0xfffffc18;
      (&DAT_00e9a920)[iVar5] = 0xfffffc18;
      fVar6 = (float10)FUN_0042f950(puVar2,&DAT_0050c6e8);
      if ((((fVar6 < (float10)1500.0) &&
           (FUN_0042b710(param_1,puVar2,&local_c,&local_10,&local_8,local_4,0), -4.0 < local_c)) &&
          (local_c < (float)DAT_00ec86c4)) && ((0.0 < local_10 && (local_10 < (float)DAT_00ec85e8)))
         ) {
        uVar1 = __ftol();
        (&DAT_00e9a8a0)[iVar5] = uVar1;
        uVar1 = __ftol();
        (&DAT_00e9a920)[iVar5] = uVar1;
        if (((local_8 < 0.0) || (local_8 < *pfVar3)) && (*piVar4 != -1)) {
          FUN_004285d0(CONCAT22(extraout_var_01,*(undefined2 *)piVar4),1);
          uVar1 = __ftol();
          uVar1 = __ftol(uVar1);
          FUN_0042bb00(*(undefined2 *)piVar4,uVar1);
          FUN_00428720(CONCAT22(extraout_var_00,*(undefined2 *)piVar4),0);
          FUN_004286f0(CONCAT22(extraout_var_02,*(undefined2 *)piVar4),0x3f800000,0x3f800000);
          FUN_00428740(CONCAT22(extraout_var,*(undefined2 *)piVar4),0xffffffff,0xffffffff,0xffffffff
                       ,0xffffffff);
        }
      }
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 0xc;
      pfVar3 = pfVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < DAT_0050c088);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0042cca0(float param_1)

{
  byte *pbVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar8;
  undefined4 uVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int *piVar12;
  float *pfVar13;
  float local_3c;
  float local_38;
  int local_34;
  float local_30;
  int *local_2c;
  int local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined local_8 [4];
  undefined local_4 [4];

  iVar5 = (int)param_1;
  if (DAT_004b9520 != '\0') {
    FUN_00431c40(&local_28,&local_14,&local_10,local_4,local_8);
    switch(local_28) {
    case 1:
      local_30 = DAT_004b94b0;
      break;
    case 2:
      local_30 = DAT_004b94b4;
      break;
    case 3:
      local_30 = DAT_004b94bc;
      break;
    case 4:
      local_30 = DAT_004b94b8;
    }
    local_34 = 0;
    if (0 < DAT_004b9534) {
      local_18 = (float *)&DAT_00e9a000;
      local_2c = (int *)&DAT_00e9a280;
      pfVar13 = (float *)&DAT_00e99868;
      do {
        pfVar10 = local_18;
        piVar12 = local_2c;
        if (*local_2c != -1) {
          if ((&DAT_00e9a960)[local_34] == '\0') {
            FUN_004285d0(*(undefined2 *)local_2c,0);
            iVar6 = FUN_004816b0();
            fVar4 = _DAT_0050c6f0;
            fVar2 = _DAT_0050c6ec;
            if (0.7 < (float)iVar6 * 4.656613e-10) {
              pfVar13[-2] = _DAT_0050c6e8;
              pfVar13[-1] = fVar2;
              (&DAT_00e9a960)[local_34] = 1;
              *pfVar13 = fVar4;
              iVar6 = FUN_004816b0();
              pfVar13[-2] = ((float)iVar6 * 4.656613e-10 * 800.0 - 400.0) * *(float *)(iVar5 + 0x70)
                            + pfVar13[-2];
              iVar6 = FUN_004816b0();
              pfVar13[-1] = ((float)iVar6 * 4.656613e-10 * 800.0 - 400.0) * *(float *)(iVar5 + 0x74)
                            + pfVar13[-1];
              iVar6 = FUN_004816b0();
              *pfVar13 = ((float)iVar6 * 4.656613e-10 * 800.0 - 400.0) * *(float *)(iVar5 + 0x78) +
                         *pfVar13;
              iVar6 = FUN_004816b0();
              fVar2 = (float)iVar6 * 4.656613e-10 * 340.0 - -10.0;
              pfVar13[-2] = *(float *)(iVar5 + 0x80) * fVar2 + pfVar13[-2];
              pfVar13[-1] = *(float *)(iVar5 + 0x84) * fVar2 + pfVar13[-1];
              *pfVar13 = *(float *)(iVar5 + 0x88) * fVar2 + *pfVar13;
              iVar6 = FUN_004816b0();
              pfVar13[-2] = ((float)iVar6 * 4.656613e-10 * 190.0 - -10.0) * *(float *)(iVar5 + 0x90)
                            + pfVar13[-2];
              iVar6 = FUN_004816b0();
              pfVar13[-1] = ((float)iVar6 * 4.656613e-10 * 190.0 - -10.0) * *(float *)(iVar5 + 0x94)
                            + pfVar13[-1];
              iVar6 = FUN_004816b0();
              fVar2 = *(float *)(iVar5 + 0x98);
              *pfVar10 = -1.0;
              pfVar10[1] = -1.0;
              *pfVar13 = ((float)iVar6 * 4.656613e-10 * 190.0 - -10.0) * fVar2 + *pfVar13;
            }
          }
          else {
            fVar2 = _DAT_004b9528 * (float)_DAT_00e22a40;
            *pfVar13 = *pfVar13 - _DAT_004b952c * (float)_DAT_00e22a40;
            pfVar13[-2] = pfVar13[-2] - fVar2;
          }
          if ((&DAT_00e9a960)[local_34] != '\0') {
            if ((&DAT_00e9a960)[local_34] == '\x02') {
              (&DAT_00e9a960)[local_34] = 0;
            }
            FUN_0042b710(iVar5,pfVar13 + -2,&local_3c,&local_38,&local_24,&local_20,0);
            if ((((local_3c <= 0.0) || (local_38 <= 0.0)) || ((float)DAT_00ec86c4 <= local_3c)) ||
               ((float)DAT_00ec85e8 <= local_38)) {
              uVar8 = (undefined2)((uint)-DAT_00ec86c4 >> 0x10);
              if (((local_3c < (float)-DAT_00ec86c4) || ((float)(DAT_00ec86c4 * 2) < local_3c)) ||
                 (uVar8 = (undefined2)((uint)(DAT_00ec85e8 * 2) >> 0x10),
                 (float)(DAT_00ec85e8 * 2) < local_38)) {
                (&DAT_00e9a960)[local_34] = 0;
              }
            }
            else {
              iVar6 = __ftol();
              iVar11 = local_14 * iVar6 + local_10;
              iVar6 = __ftol();
              fVar2 = 0.0;
              if (0 < local_28) {
                iVar11 = local_28 + iVar11 + iVar6;
                iVar6 = local_28 * 8;
                iVar9 = local_28;
                do {
                  cVar3 = (char)iVar6;
                  pbVar1 = (byte *)(iVar11 + -1);
                  iVar6 = iVar6 + -8;
                  iVar11 = iVar11 + -1;
                  iVar9 = iVar9 + -1;
                  fVar2 = fVar2 + (float)((uint)*pbVar1 << (cVar3 - 8U & 0x1f));
                  pfVar10 = local_18;
                } while (iVar9 != 0);
              }
              uVar8 = (undefined2)((uint)iVar6 >> 0x10);
              piVar12 = local_2c;
              if ((0.0 < local_24) && (fVar2 * local_30 < local_24)) {
                (&DAT_00e9a960)[local_34] = 2;
              }
            }
            param_1 = 100.0;
            if (0.01 < local_20) {
              param_1 = 100.0 / local_20;
            }
            if (param_1 < 0.01) {
              param_1 = 0.01;
            }
            param_1 = param_1 * 0.15;
            if (_DAT_004b952c <= 100.0) {
              if (_DAT_004b952c <= 300.0) {
                if (0.15 < param_1) {
                  param_1 = 0.15;
                }
              }
              else if (0.1 < param_1) {
                param_1 = 0.1;
              }
            }
            else if (0.04 < param_1) {
              param_1 = 0.04;
            }
            local_18 = (float *)CONCAT22(local_18._2_2_,(short)DAT_004b9524._3_1_);
            FUN_004285d0(CONCAT22(uVar8,*(undefined2 *)piVar12),1);
            uVar7 = __ftol();
            uVar7 = __ftol(uVar7);
            FUN_0042bb00(CONCAT22(extraout_var,*(undefined2 *)piVar12),uVar7);
            if (0.0 <= *pfVar10) {
              local_1c = __ftol();
              local_2c = (int *)__ftol();
              local_c = __ftol();
              iVar6 = __ftol();
              if ((local_c < 3) && (iVar6 < 3)) {
                FUN_00428800(*(undefined2 *)piVar12,0x4000);
                uVar8 = extraout_var_03;
              }
              else {
                FUN_0042d330(*(undefined2 *)piVar12,local_1c,local_2c);
                FUN_004287e0(CONCAT22(extraout_var_00,*(undefined2 *)piVar12),0x4000);
                uVar8 = extraout_var_04;
              }
            }
            else {
              FUN_004285d0(CONCAT22(extraout_var_01,*(undefined2 *)piVar12),0);
              uVar8 = extraout_var_02;
            }
            FUN_004286f0(CONCAT22(uVar8,*(undefined2 *)piVar12),param_1,param_1);
            iVar6 = FUN_00445690();
            uVar7 = local_18;
            if (iVar6 != 0) {
              uVar7 = __ftol();
            }
            FUN_00428740(*(undefined2 *)piVar12,DAT_004b9524,DAT_004b9524 >> 8 & 0xff,
                         DAT_004b9524 >> 0x10 & 0xff,uVar7);
            *pfVar10 = local_3c;
            pfVar10[1] = local_38;
          }
        }
        local_34 = local_34 + 1;
        pfVar13 = pfVar13 + 3;
        local_2c = piVar12 + 1;
        local_18 = pfVar10 + 2;
      } while (local_34 < DAT_004b9534);
    }
    FUN_00431cd0();
  }
  return;
}



void FUN_0042d330(undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = __ftol();
  uVar1 = __ftol(uVar1);
  FUN_004286c0(param_1,uVar1);
  return;
}



void FUN_0042d380(void)

{
  int *piVar1;
  int iVar2;

  iVar2 = 0;
  piVar1 = (int *)&DAT_00e9a280;
  do {
    if (*piVar1 != -1) {
      FUN_004285d0(*(undefined2 *)piVar1,0);
    }
    (&DAT_00e9a960)[iVar2] = 0;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0xe9a3c0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0042d3c0(undefined4 param_1,undefined4 param_2)

{
  _DAT_004b9528 = param_1;
  _DAT_004b952c = param_2;
  return;
}



void FUN_0042d3e0(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  DAT_004b9524._0_1_ = param_1;
  DAT_004b9524._1_1_ = param_2;
  DAT_004b9524._2_1_ = param_3;
  DAT_004b9524._3_1_ = param_4;
  return;
}



void FUN_0042d410(int param_1)

{
  DAT_004b9534 = 0x50;
  if (param_1 < 0x51) {
    DAT_004b9534 = param_1;
  }
  FUN_0042d380();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0042d430(undefined4 param_1)

{
  _DAT_004b9530 = param_1;
  return;
}



void FUN_0042d440(void)

{
  DAT_004b9520 = 0;
  FUN_0042d380();
  return;
}



void FUN_0042d450(void)

{
  DAT_004b9520 = 1;
  return;
}



void FUN_0042d460(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_00e9a280 + param_1 * 2) = param_2;
  return;
}



void FUN_0042d470(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)&DAT_00e9a960;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)&DAT_00e9a280;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  return;
}



void FUN_0042d490(undefined4 param_1,undefined4 param_2)

{
  if (DAT_004b94c0 != 0) {
    FUN_0042c1a0(param_1);
    FUN_0042c800(param_1);
    FUN_0042cb00(param_1);
    FUN_0042cca0(param_1);
    FUN_0042c510(param_1,param_2);
    return;
  }
  DAT_0050c088 = 0;
  FUN_0042c510(param_1,param_2);
  return;
}



void thunk_FUN_0042be60(void)

{
  char cVar1;
  float fVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iStack_30;
  short *psStack_2c;
  int iStack_28;
  float *pfStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  short *psStack_c;
  undefined auStack_8 [4];
  float fStack_4;

  FUN_00431c40(&iStack_20,&iStack_28,&psStack_2c,&fStack_4,auStack_8);
  psStack_c = (short *)(iStack_28 * DAT_00ec85e8 + (int)psStack_2c);
  pfStack_24 = (float *)0x0;
  do {
    if (-1 < *(int *)((int)&DAT_004b94c8 + (int)pfStack_24)) {
      iVar5 = *(int *)((int)&DAT_00e9a480 + (int)pfStack_24);
      if (iVar5 < -500) {
        *(undefined4 *)((int)&DAT_00e9a3c0 + (int)pfStack_24) = 0x32;
      }
      else {
        iStack_30 = 0;
        iStack_1c = -iVar5 + 0xc;
        iStack_18 = DAT_00ec86c4 + -8 + -iVar5;
        iStack_10 = -*(int *)((int)&DAT_00e9a488 + (int)pfStack_24);
        iStack_14 = iStack_10 + 0xc;
        iStack_10 = DAT_00ec85e8 + -8 + iStack_10;
        psVar3 = (short *)((int)psStack_2c +
                          (iVar5 + -4) * iStack_20 +
                          (*(int *)((int)&DAT_00e9a488 + (int)pfStack_24) + -4) * iStack_28);
        iVar5 = 0;
        do {
          iVar4 = 0;
          do {
            if (((((iVar4 < iStack_1c) || (iStack_18 <= iVar4)) || (iVar5 < iStack_14)) ||
                (iStack_10 <= iVar5)) ||
               (((psStack_2c <= psVar3 && (psVar3 < psStack_c)) &&
                (((iStack_20 == 1 && (*(char *)psVar3 != -1)) ||
                 ((iStack_20 == 2 && (*psVar3 != -1)))))))) {
              iStack_30 = iStack_30 + 1;
            }
            psVar3 = (short *)((int)psVar3 + iStack_20);
            iVar4 = iVar4 + 1;
          } while (iVar4 < 8);
          psVar3 = (short *)((int)psVar3 + iStack_28 + iStack_20 * -8);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
        *(int *)((int)&DAT_00e9a3c0 + (int)pfStack_24) = iStack_30;
      }
    }
    pfStack_24 = (float *)((int)pfStack_24 + 4);
  } while ((int)pfStack_24 < 8);
  switch(iStack_20) {
  case 1:
    fStack_4 = DAT_004b94b0;
    break;
  case 2:
    fStack_4 = DAT_004b94b4;
    break;
  case 3:
    fStack_4 = DAT_004b94bc;
    break;
  case 4:
    fStack_4 = DAT_004b94b8;
  }
  iVar5 = 0;
  do {
    *(undefined4 *)((int)&DAT_00e9a7e0 + iVar5) = 0xc47a0000;
    if (-1 < *(int *)((int)&DAT_00e9a720 + iVar5)) {
      fVar2 = 0.0;
      if (0 < iStack_20) {
        pcVar7 = (char *)((int)psStack_2c +
                         iStack_20 +
                         iStack_20 * *(int *)((int)&DAT_00e9a720 + iVar5) +
                         *(int *)((int)&DAT_00e9a780 + iVar5) * iStack_28);
        iVar4 = iStack_20 * 8;
        iVar6 = iStack_20;
        do {
          cVar1 = (char)iVar4;
          iVar4 = iVar4 + -8;
          psStack_c = (short *)((uint)(byte)pcVar7[-1] << (cVar1 - 8U & 0x1f));
          pcVar7 = pcVar7 + -1;
          iVar6 = iVar6 + -1;
          fVar2 = fVar2 + (float)(int)psStack_c;
        } while (iVar6 != 0);
      }
      *(float *)((int)&DAT_00e9a7e0 + iVar5) = fVar2 * fStack_4;
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x50);
  iVar5 = 0;
  pfStack_24 = (float *)&DAT_00e99d80;
  do {
    if ((&DAT_00e9a6e0)[iVar5] != '\0') {
      iVar4 = (&DAT_00e99ce0)[iVar5];
      *pfStack_24 = -1000.0;
      if (-1 < iVar4) {
        fVar2 = 0.0;
        if (0 < iStack_20) {
          pcVar7 = (char *)((int)psStack_2c +
                           iStack_20 + iStack_20 * iVar4 + (&DAT_00e99c40)[iVar5] * iStack_28);
          iVar4 = iStack_20 * 8;
          iVar6 = iStack_20;
          do {
            cVar1 = (char)iVar4;
            iVar4 = iVar4 + -8;
            psStack_c = (short *)((uint)(byte)pcVar7[-1] << (cVar1 - 8U & 0x1f));
            pcVar7 = pcVar7 + -1;
            iVar6 = iVar6 + -1;
            fVar2 = fVar2 + (float)(int)psStack_c;
          } while (iVar6 != 0);
        }
        *pfStack_24 = fVar2 * fStack_4;
      }
    }
    pfStack_24 = pfStack_24 + 1;
    iVar5 = iVar5 + 1;
  } while ((int)pfStack_24 < 0xe99e20);
  iVar5 = 0;
  if (0 < DAT_0050c088) {
    pfStack_24 = (float *)&DAT_00e9a8e0;
    do {
      iVar4 = (&DAT_00e9a8a0)[iVar5];
      *pfStack_24 = -1000.0;
      if (-1 < iVar4) {
        fVar2 = 0.0;
        if (0 < iStack_20) {
          pcVar7 = (char *)((int)psStack_2c +
                           iStack_20 + iStack_20 * iVar4 + (&DAT_00e9a920)[iVar5] * iStack_28);
          iVar4 = iStack_20 * 8;
          iVar6 = iStack_20;
          do {
            cVar1 = (char)iVar4;
            iVar4 = iVar4 + -8;
            psStack_c = (short *)((uint)(byte)pcVar7[-1] << (cVar1 - 8U & 0x1f));
            pcVar7 = pcVar7 + -1;
            iVar6 = iVar6 + -1;
            fVar2 = fVar2 + (float)(int)psStack_c;
          } while (iVar6 != 0);
        }
        *pfStack_24 = fVar2 * fStack_4;
      }
      iVar5 = iVar5 + 1;
      pfStack_24 = pfStack_24 + 1;
    } while (iVar5 < DAT_0050c088);
  }
  FUN_00431cd0();
  return;
}



void FUN_0042d500(void)

{
  DAT_004b94c0 = 1;
  return;
}



void FUN_0042d510(void)

{
  DAT_004b94c0 = 0;
  return;
}



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



undefined * FUN_0042d600(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return &DAT_0050c098;
  case 1:
    return &DAT_0050c08c;
  case 2:
    return &DAT_0050c090;
  case 3:
    return &DAT_0050c094;
  default:
    return (undefined *)0x0;
  }
}



void FUN_0042d640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)FUN_0042d600(param_1);
  FUN_004a0950(*puVar1,param_2,0);
  FUN_0049ffe0(param_3,param_4,1,*puVar1);
  return;
}



void FUN_0042d680(undefined *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;

  puVar3 = param_1;
  switch(param_1) {
  case (undefined *)0x0:
    puVar3 = PTR_s_data_lev01_out_modelblock_bin_004b9598;
    break;
  case (undefined *)0x1:
    puVar3 = PTR_s_data_lev01_out_spriteblock_bin_004b958c;
    break;
  case (undefined *)0x2:
    puVar3 = PTR_s_data_lev01_out_splineblock_bin_004b9590;
    break;
  case (undefined *)0x3:
    puVar3 = PTR_s_data_lev01_out_textureblock_bin_004b9594;
  }
  piVar1 = (int *)FUN_0042d600(param_1);
  if (*piVar1 == 0) {
    iVar2 = FUN_0049f1e0(puVar3,&DAT_004b5c4c);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return;
}



void FUN_0042d6f0(undefined4 param_1)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)FUN_0042d600(param_1);
  FUN_0049f0f0(*puVar1);
  *puVar1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0042d720(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 local_4;

  iVar1 = 0;
  local_4 = 0;
  if (0 < DAT_004bf91c) {
    puVar2 = &DAT_004bf920;
    do {
      FUN_00445ee0(3,0,0x40,0x80,0x40,0x80,puVar2,&local_4,1,0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 < DAT_004bf91c);
  }
  iVar1 = 0;
  if (0 < DAT_004bf7e4) {
    puVar2 = &DAT_004bf7e8;
    do {
      FUN_00445ee0(3,0,0x40,0x80,0x40,0x80,puVar2,&local_4,1,0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 < DAT_004bf7e4);
  }
  iVar1 = 0;
  if (0 < DAT_004bf84c) {
    puVar2 = &DAT_004bf850;
    do {
      FUN_00445ee0(3,0,0x40,0x80,0x40,0x80,puVar2,&local_4,1,0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 < DAT_004bf84c);
  }
  iVar1 = 0;
  if (0 < DAT_004bf8b4) {
    puVar2 = &DAT_004bf8b8;
    do {
      FUN_00445ee0(3,0,0x40,0x80,0x40,0x80,puVar2,&local_4,1,0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 < DAT_004bf8b4);
  }
  iVar1 = 0;
  if (0 < DAT_004bf984) {
    puVar2 = &DAT_004bf988;
    do {
      FUN_00445ee0(3,0,0x40,0x80,0x40,0x80,puVar2,&local_4,1,0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 < DAT_004bf984);
  }
  DAT_0050c0c0 = 7;
  DAT_00e99720 = &DAT_004bf918;
  _DAT_00e99724 = &DAT_004bf8b0;
  _DAT_00e99728 = &DAT_004bf848;
  _DAT_00e9972c = &DAT_004bf8b0;
  _DAT_00e99730 = &DAT_004bf980;
  _DAT_00e99734 = &DAT_004bf918;
  DAT_00e99738 = &DAT_004bf7e0;
  DAT_0050c0c4 = &DAT_004bf918;
  return;
}



void FUN_0042d8d0(short param_1)

{
  if (DAT_0050c0c0 <= param_1) {
    param_1 = (short)DAT_0050c0c0 + -1;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  DAT_0050c0c4 = (&DAT_00e99720)[param_1];
  return;
}



void FUN_0042d900(undefined4 param_1)

{
  FUN_0042d8d0(param_1);
  return;
}



void FUN_0042d910(undefined2 param_1,undefined2 param_2)

{
  DAT_0050c0b8 = param_1;
  DAT_0050c0ba = param_2;
  return;
}



void FUN_0042d930(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = DAT_0050c0b8;
  *param_2 = DAT_0050c0ba;
  return;
}



void FUN_0042d950(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  DAT_004bfa0c._0_1_ = param_1;
  DAT_004bfa0c._1_1_ = param_2;
  DAT_004bfa0c._2_1_ = param_3;
  DAT_004bfa0c._3_1_ = param_4;
  DAT_00e99764 = 0;
  return;
}



void FUN_0042d990(short param_1,short param_2,short param_3,short param_4,short param_5,
                 short param_6,short param_7,short param_8)

{
  short sVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float local_18;
  float local_14;
  float local_10;

  sVar1 = DAT_0050c0a8;
  local_14 = (float)DAT_00ec86c4 * 0.003125;
  local_18 = (float)DAT_00ec85e8 * 0.004166667;
  if (local_14 < 1.0) {
    local_14 = 1.0;
  }
  if (local_18 < 1.0) {
    local_18 = 1.0;
  }
  if (DAT_0050c0a8 < DAT_0050c0a0) {
    DAT_0050c0a0 = __ftol();
    DAT_0050c09c = __ftol();
    DAT_0050c0a8 = __ftol();
  }
  else {
    if (local_14 * (float)(int)(short)(param_1 - param_3) < (float)(int)DAT_0050c0a0) {
      DAT_0050c0a0 = __ftol();
    }
    if (local_18 * (float)(int)(short)(param_2 - param_4) < (float)(int)DAT_0050c09c) {
      DAT_0050c09c = __ftol();
    }
    if ((float)(int)sVar1 < local_14 * (float)(int)(short)(param_5 + (param_1 - param_3))) {
      DAT_0050c0a8 = __ftol();
    }
    if (local_18 * (float)(int)(short)(param_6 + (param_2 - param_4)) <= (float)(int)DAT_0050c0a4)
    goto LAB_0042dbb4;
  }
  DAT_0050c0a4 = __ftol();
LAB_0042dbb4:
  iVar6 = (int)param_6;
  local_10 = (float)(int)param_7 * 0.015625;
  _param_5 = (float)((int)param_5 + (int)param_7) * 0.015625;
  _param_6 = (float)(int)param_8 * 0.0078125;
  _param_8 = (float)(iVar6 + param_8) * 0.0078125;
  if (DAT_0050c0ac == '\0') {
    local_14 = (float)__ftol();
    _param_3 = __ftol();
    _param_1 = __ftol();
    iVar6 = __ftol();
  }
  else {
    local_14 = (float)__ftol();
    _param_3 = __ftol();
    _param_1 = __ftol();
    iVar6 = __ftol();
  }
  if (DAT_0050c0b0 != '\0') {
    iVar5 = (int)local_14._0_2_;
    if (DAT_00e99758 < iVar5) {
      return;
    }
    iVar4 = (int)param_3;
    if (DAT_00e9975c < iVar4) {
      return;
    }
    iVar7 = (int)param_1;
    if (iVar7 < DAT_00e99750) {
      return;
    }
    iVar8 = (int)(short)iVar6;
    if (iVar8 < DAT_00e99754) {
      return;
    }
    if (iVar5 < DAT_00e99750) {
      local_14 = (float)((int)local_14 + (DAT_00e99750 - iVar5));
      local_10 = (float)(DAT_00e99750 - iVar5) + local_10;
    }
    if (iVar4 < DAT_00e99754) {
      _param_3 = _param_3 + (DAT_00e99754 - iVar4);
      _param_6 = (float)(DAT_00e99754 - iVar4) + _param_6;
    }
    if (DAT_00e99758 < iVar7) {
      _param_1 = _param_1 - (iVar7 - DAT_00e99758);
      _param_5 = _param_5 - (float)(iVar7 - DAT_00e99758);
    }
    if (DAT_00e9975c < iVar8) {
      iVar6 = iVar6 - (iVar8 - DAT_00e9975c);
      _param_8 = _param_8 - (float)(iVar8 - DAT_00e9975c);
    }
  }
  fVar3 = _param_6;
  fVar2 = _param_5;
  if (DAT_0050c0c8 == 0xbf) {
    _param_5 = local_10;
    local_10 = fVar2;
    _param_6 = _param_8;
    _param_8 = fVar3;
  }
  FUN_004329c0(local_14,_param_3,_param_1,iVar6,local_10,_param_6,_param_5,_param_8);
  return;
}



void FUN_0042ddf0(int param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 4)) {
    FUN_00432190(*(undefined4 *)(param_1 + 8 + param_2 * 4),1,1);
  }
  return;
}



void FUN_0042de10(undefined4 param_1,int param_2)

{
  FUN_0042de30(param_1,(&DAT_00e99720)[param_2]);
  return;
}



int FUN_0042de30(int param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int local_8;
  uint local_4;

  iVar3 = param_2;
  local_8 = 0;
  bVar2 = false;
  iVar7 = 0;
  do {
    bVar5 = *(byte *)(iVar7 + param_1);
    if (bVar5 == 0) {
      bVar2 = true;
    }
    if (bVar5 == 0x7e) {
      cVar1 = *(char *)(iVar7 + 1 + param_1);
      iVar7 = iVar7 + 1;
      if (cVar1 == 'n') {
        bVar2 = true;
      }
      else {
        bVar5 = (cVar1 != '~') - 1U & 0x7e;
      }
    }
    if ((bVar5 != 0) && (!bVar2)) {
      param_2 = (uint)bVar5;
      if (bVar5 == 0x5f) {
        bVar5 = 0x20;
        param_2 = 0x20;
      }
      if (((0x60 < bVar5) && (bVar5 < 0x7b)) && (*(byte *)(iVar3 + 0x5b) < 0x61)) {
        bVar5 = bVar5 - 0x20;
        param_2 = (uint)bVar5;
      }
      iVar4 = 0;
      if (((0x96 < bVar5) && (*(int *)(iVar3 + 0x60) != 0)) && ((&DAT_004bf9c2)[param_2] != 0xff)) {
        iVar6 = (uint)(byte)(&DAT_004bf9c2)[param_2] * 2;
        local_4 = (uint)(byte)(&DAT_004bfa10)[iVar6];
        bVar5 = (&DAT_004bfa11)[iVar6];
        param_2 = (uint)bVar5;
        if (bVar5 == 0xff) {
          iVar4 = local_4 * 0x10 + *(int *)(iVar3 + 0x60);
          bVar5 = 0;
          param_2 = 0;
        }
      }
      if (((*(int *)(iVar3 + 0x5c) != 0) && (*(byte *)(iVar3 + 0x5a) <= bVar5)) &&
         (bVar5 <= *(byte *)(iVar3 + 0x5b))) {
        iVar4 = (param_2 - *(byte *)(iVar3 + 0x5a)) * 0x10 + *(int *)(iVar3 + 0x5c);
      }
      if (iVar4 != 0) {
        local_8 = local_8 + *(short *)(iVar4 + 2);
      }
    }
    iVar7 = iVar7 + 1;
  } while (!bVar2);
  return local_8;
}



int FUN_0042df70(int param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  uint local_4;

  iVar3 = param_2;
  local_c = 0;
  local_8 = 0;
  bVar2 = false;
  iVar7 = 0;
  do {
    bVar5 = *(byte *)(iVar7 + param_1);
    if (bVar5 == 0) {
      bVar2 = true;
    }
    if (bVar5 == 0x7e) {
      cVar1 = *(char *)(iVar7 + 1 + param_1);
      iVar7 = iVar7 + 1;
      if (cVar1 == 'n') {
        bVar2 = true;
      }
      else {
        bVar5 = (cVar1 != '~') - 1U & 0x7e;
      }
    }
    if ((bVar5 != 0) && (!bVar2)) {
      param_2 = (uint)bVar5;
      if (bVar5 == 0x5f) {
        bVar5 = 0x20;
        param_2 = 0x20;
      }
      if (((0x60 < bVar5) && (bVar5 < 0x7b)) && (*(byte *)(iVar3 + 0x5b) < 0x61)) {
        bVar5 = bVar5 - 0x20;
        param_2 = (uint)bVar5;
      }
      iVar4 = 0;
      if (((0x96 < bVar5) && (*(int *)(iVar3 + 0x60) != 0)) && ((&DAT_004bf9c2)[param_2] != 0xff)) {
        iVar6 = (uint)(byte)(&DAT_004bf9c2)[param_2] * 2;
        local_4 = (uint)(byte)(&DAT_004bfa10)[iVar6];
        bVar5 = (&DAT_004bfa11)[iVar6];
        param_2 = (uint)bVar5;
        if (bVar5 == 0xff) {
          iVar4 = local_4 * 0x10 + *(int *)(iVar3 + 0x60);
          bVar5 = 0;
          param_2 = 0;
        }
      }
      if (((*(int *)(iVar3 + 0x5c) != 0) && (*(byte *)(iVar3 + 0x5a) <= bVar5)) &&
         (bVar5 <= *(byte *)(iVar3 + 0x5b))) {
        iVar4 = (param_2 - *(byte *)(iVar3 + 0x5a)) * 0x10 + *(int *)(iVar3 + 0x5c);
      }
      if (iVar4 != 0) {
        local_8 = local_8 + *(short *)(iVar4 + 0xe);
        local_c = local_c + 1;
      }
    }
    iVar7 = iVar7 + 1;
  } while (!bVar2);
  if (local_c != 0) {
    return local_8 / local_c;
  }
  return 0;
}



void FUN_0042e0e0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;

  if (param_3 != (int *)0x0) {
    *param_3 = -1;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = -1;
  }
  iVar2 = param_1;
  if (*(int *)(param_2 + 0x5c) != 0) {
    iVar1 = (int)(char)param_1;
    if (((int)(uint)*(byte *)(param_2 + 0x5a) <= iVar1) &&
       (iVar1 <= (int)(uint)*(byte *)(param_2 + 0x5b))) {
      iVar2 = (iVar1 - (uint)*(byte *)(param_2 + 0x5a)) * 0x10 + *(int *)(param_2 + 0x5c);
      param_1 = (int)*(short *)(iVar2 + 0xe);
      iVar2 = (int)*(short *)(iVar2 + 2);
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = param_1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0042e150(char *param_1,int *param_2,short param_3)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined3 uVar12;
  short sVar13;
  undefined2 uVar15;
  int iVar14;
  short sVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  short local_78;
  undefined2 local_70;
  short local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  int local_40;
  uint local_3c;
  short local_24;
  undefined2 local_20;
  short local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  uint local_4;

  uVar6 = _DAT_0050c0b8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_64 = CONCAT22(local_64._2_2_,DAT_0050c0ba);
  local_60 = 0;
  FUN_0042ddf0(param_2,(int)param_3);
  local_40 = 0;
  cVar1 = *param_1;
  local_68 = uVar6;
  iVar10 = local_60;
  uVar17 = DAT_004bfa0c;
  uVar18 = local_4;
  uVar19 = local_4;
  uVar20 = local_4;
  uVar21 = local_4;
  do {
    if ((cVar1 == '\0') || (DAT_0050c0b4 < local_40)) {
      DAT_0050c0bc = (undefined2)local_68;
      DAT_0050c0be = (undefined2)local_64;
      DAT_004bfa0c = uVar17;
      return;
    }
    bVar7 = param_1[iVar10];
    DAT_0050c0c8 = (uint)bVar7;
    DAT_004bfa0c = uVar17;
    local_60 = iVar10;
    if (bVar7 != 0x7e) goto LAB_0042e384;
    bVar7 = param_1[iVar10 + 1];
    local_60 = iVar10 + 1;
    iVar8 = (int)(char)bVar7;
    iVar9 = iVar8 + -0x30;
    uVar15 = (undefined2)((uint)param_1 >> 0x10);
    switch(iVar8) {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      DAT_004bfa0c._3_1_ = (char)(uVar17 >> 0x18);
      sVar13 = (short)DAT_004bfa0c._3_1_;
      bVar7 = 0;
      FUN_0042d950(CONCAT22((short)((uint)iVar9 >> 0x10),
                            (ushort)*(byte *)(iVar8 + 0x4bf9b8 + iVar9 * 2)),
                   *(undefined *)(iVar8 + 0x4bf9b9 + iVar9 * 2),
                   CONCAT22(uVar15,(ushort)*(byte *)(iVar8 + 0x4bf9ba + iVar9 * 2)),sVar13);
      FUN_0044e290(0,0,DAT_004bfa0c,DAT_004bfa0c >> 8 & 0xff,DAT_004bfa0c >> 0x10 & 0xff,
                   DAT_004bfa0c >> 0x18);
      break;
    case 0x62:
      local_40 = local_40 + 1;
    case 0x7e:
      bVar7 = 0;
      break;
    case 99:
      iVar10 = FUN_0042de30(param_1 + iVar10 + 2,DAT_0050c0c4);
      sVar13 = (short)(iVar10 / 2);
      goto LAB_0042e268;
    case 0x6b:
      bVar3 = !bVar3;
      bVar7 = 0;
      break;
    case 0x6e:
      bVar7 = 0;
      DAT_0050c0ba = (undefined2)(_DAT_0050c0b8 >> 0x10);
      _DAT_0050c0b8 = CONCAT22(DAT_0050c0ba,(short)uVar6);
      local_68 = uVar6;
      local_64 = local_64 + CONCAT22(uVar15,*(undefined2 *)(param_2 + 0x13));
      break;
    case 0x6f:
      bVar4 = !bVar4;
      bVar7 = 0;
      break;
    case 0x70:
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar7 = 0;
      break;
    case 0x72:
      sVar13 = FUN_0042de30(param_1 + iVar10 + 2,DAT_0050c0c4);
LAB_0042e268:
      bVar7 = 0;
      _DAT_0050c0b8 = CONCAT22(DAT_0050c0ba,(short)uVar6 - sVar13);
      local_68 = _DAT_0050c0b8;
      break;
    case 0x73:
      bVar5 = !bVar5;
      bVar7 = 0;
      break;
    case 0x74:
      bVar7 = 0x7e;
    }
LAB_0042e384:
    if ((DAT_00e99768 == 0) || (local_40 == DAT_0050c0b4)) {
      local_3c = 0;
      sVar13 = -5;
      if ((0x96 < bVar7) && ((param_2[0x18] != 0 && ((&DAT_004bf9c2)[bVar7] != 0xff)))) {
        iVar10 = (uint)(byte)(&DAT_004bf9c2)[bVar7] * 2;
        if ((&DAT_004bfa10)[iVar10] == 0xff) {
          bVar7 = (&DAT_004bfa11)[iVar10];
        }
        else {
          pcVar11 = (char *)((uint)(byte)(&DAT_004bfa10)[iVar10] * 0x10 + param_2[0x18]);
          local_1c = *(short *)(pcVar11 + 8);
          if (local_1c == -1) {
            sVar13 = -2;
            local_1c = local_6c;
          }
          else {
            sVar13 = (short)*pcVar11;
            uVar20 = (uint)*(ushort *)(pcVar11 + 6);
            uVar21 = (uint)*(ushort *)(pcVar11 + 4);
            uVar19 = (uint)*(ushort *)(pcVar11 + 0xc);
            uVar18 = (uint)*(ushort *)(pcVar11 + 0xe);
            local_70 = *(undefined2 *)(pcVar11 + 10);
            if (*param_2 == 0) {
              local_78 = (short)pcVar11[1];
            }
            else {
              local_78 = 0;
            }
          }
          local_8 = local_64;
          local_4 = local_68;
          if (sVar13 == param_3) {
            uVar12 = (undefined3)((uint)pcVar11 >> 8);
            uVar17 = local_68;
            if (bVar4) {
              FUN_0044e290(0,0,0,0,0,CONCAT31(uVar12,DAT_004bfa0c._3_1_));
              iVar8 = local_64 + -1;
              iVar9 = local_68 - 1;
              FUN_0042d990(iVar9,iVar8,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78);
              iVar14 = local_68 + 1;
              FUN_0042d990(iVar14,local_64 + 1,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,
                           local_78);
              FUN_0042d990(iVar14,iVar8,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78);
              FUN_0042d990(iVar9,local_64 + 1,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78
                          );
              FUN_0042d990(iVar9,local_64,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78);
              FUN_0042d990(iVar14,local_64,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78);
              FUN_0042d990(local_68,iVar8,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78);
            }
            else if (bVar5) {
              FUN_0044e290(0,0,0,0,0,CONCAT31(uVar12,DAT_004bfa0c._3_1_));
              uVar17 = local_68 + 1;
            }
            else {
              if (!bVar3) goto LAB_0042e74b;
              FUN_0044e290(0,0,0,0,0,CONCAT31(uVar12,DAT_004bfa0c._3_1_));
              FUN_0042d990(local_68 - 1,local_64,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,
                           local_78);
              FUN_0042d990(local_68 + 1,local_64,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,
                           local_78);
              FUN_0042d990(local_68,local_64 + -1,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,
                           local_78);
            }
            FUN_0042d990(uVar17,local_64 + 1,uVar20,uVar21,uVar19,uVar18,local_1c,local_70,local_78)
            ;
            FUN_0044e290(0,0,DAT_004bfa0c,DAT_004bfa0c >> 8 & 0xff,DAT_004bfa0c >> 0x10 & 0xff,
                         DAT_004bfa0c >> 0x18);
          }
LAB_0042e74b:
          bVar7 = (&DAT_004bfa11)[iVar10];
          local_18 = uVar18;
          local_14 = uVar19;
          local_10 = uVar21;
          local_c = uVar20;
          local_6c = local_1c;
          local_20 = local_70;
          local_24 = local_78;
          if (bVar7 != 0xff) goto LAB_0042e786;
          local_3c = (uint)*(ushort *)(pcVar11 + 2);
        }
        if (bVar7 == 0xff) {
          bVar7 = 0;
        }
      }
LAB_0042e786:
      if (bVar7 == 0) {
        sVar16 = -2;
      }
      else {
        if (bVar7 == 0x5f) {
          bVar7 = 0x20;
        }
        if (((0x60 < bVar7) && (bVar7 < 0x7b)) && (*(byte *)((int)param_2 + 0x5b) < 0x61)) {
          bVar7 = bVar7 - 0x20;
        }
        if (((param_2[0x17] == 0) || (bVar7 < *(byte *)((int)param_2 + 0x5a))) ||
           (*(byte *)((int)param_2 + 0x5b) < bVar7)) {
          sVar16 = -2;
          local_3c = 0;
        }
        else {
          pcVar11 = (char *)(((uint)bVar7 - (uint)*(byte *)((int)param_2 + 0x5a)) * 0x10 +
                            param_2[0x17]);
          sVar2 = *(short *)(pcVar11 + 8);
          if (sVar2 == -1) {
            sVar16 = -2;
            local_3c = (uint)*(ushort *)(pcVar11 + 2);
          }
          else {
            sVar16 = (short)*pcVar11;
            uVar20 = (uint)*(ushort *)(pcVar11 + 6);
            uVar21 = (uint)*(ushort *)(pcVar11 + 4);
            uVar19 = (uint)*(ushort *)(pcVar11 + 0xc);
            uVar18 = (uint)*(ushort *)(pcVar11 + 0xe);
            local_70 = *(undefined2 *)(pcVar11 + 10);
            local_6c = sVar2;
            if (*param_2 == 0) {
              local_78 = (short)pcVar11[1];
              local_3c = (uint)*(ushort *)(pcVar11 + 2);
            }
            else {
              local_78 = 0;
              local_3c = (uint)*(ushort *)(pcVar11 + 2);
            }
          }
        }
      }
      if ((bVar7 != 0) && (sVar16 == param_3)) {
        uVar17 = local_68;
        if (bVar4) {
          FUN_0044e290(0,0,0,0,0,DAT_004bfa0c._3_1_);
          iVar10 = local_64 + -1;
          iVar8 = local_68 - 1;
          FUN_0042d990(iVar8,iVar10,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          iVar9 = local_68 + 1;
          FUN_0042d990(iVar9,local_64 + 1,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          FUN_0042d990(iVar9,iVar10,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          FUN_0042d990(iVar8,local_64 + 1,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          FUN_0042d990(iVar8,local_64,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          FUN_0042d990(iVar9,local_64,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          FUN_0042d990(local_68,iVar10,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
LAB_0042eadd:
          FUN_0042d990(uVar17,local_64 + 1,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
          FUN_0044e290(0,0,DAT_004bfa0c,DAT_004bfa0c >> 8 & 0xff,DAT_004bfa0c >> 0x10 & 0xff,
                       DAT_004bfa0c >> 0x18);
        }
        else {
          if (bVar5) {
            FUN_0044e290(0,0,0,0,0,DAT_004bfa0c._3_1_);
            uVar17 = local_68 + 1;
            goto LAB_0042eadd;
          }
          if (bVar3) {
            FUN_0044e290(0,0,0,0,0,DAT_004bfa0c._3_1_);
            FUN_0042d990(local_68 - 1,local_64,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,
                         local_78);
            FUN_0042d990(local_68 + 1,local_64,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,
                         local_78);
            FUN_0042d990(local_68,local_64 + -1,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,
                         local_78);
            goto LAB_0042eadd;
          }
        }
        FUN_0042d990(local_68,local_64,uVar20,uVar21,uVar19,uVar18,local_6c,local_70,local_78);
      }
      if (sVar13 == param_3) {
        FUN_0042d990(local_4,local_8,local_c,local_10,local_14,local_18,local_1c,local_20,local_24);
      }
      local_68 = local_68 + local_3c;
    }
    iVar10 = local_60 + 1;
    cVar1 = param_1[iVar10];
    uVar17 = DAT_004bfa0c;
  } while( true );
}



void FUN_0042ec50(char *param_1)

{
  char cVar1;
  bool bVar2;
  uint3 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined3 uVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar8;
  int iVar9;

  FUN_0042d8d0(0);
  bVar2 = false;
  DAT_0050c0a0 = 1000;
  DAT_0050c0a8 = -1000;
  DAT_00e99768 = 0;
  cVar1 = *param_1;
  iVar6 = 0;
  while ((cVar1 != '\0' && (!bVar2))) {
    if ((param_1[iVar6] == '~') && (param_1[iVar6 + 1] == 'b')) {
      bVar2 = true;
      DAT_00e99768 = 1;
    }
    cVar1 = param_1[iVar6 + 1];
    iVar6 = iVar6 + 1;
  }
  uVar7 = 0;
  iVar6 = 0;
  if ((*param_1 == '~') && (param_1[1] == 'f')) {
    uVar7 = 0;
    FUN_0042d8d0((ushort)(short)param_1[2] - 0x30);
    iVar6 = 3;
  }
  DAT_0050c0ac = 0;
  if ((*param_1 == '~') && (param_1[1] == 'F')) {
    DAT_0050c0ac = 1;
    uVar3 = (uint3)uVar7 >> 8;
    uVar7 = 0;
    FUN_0042d8d0(CONCAT22((short)uVar3,(short)param_1[2]) + -0x30);
    iVar6 = 3;
  }
  uVar5 = DAT_0050c0ba;
  uVar4 = DAT_0050c0b8;
  FUN_0044e290(0,0,DAT_004bfa0c,CONCAT31(uVar7,(char)(DAT_004bfa0c >> 8)),
               DAT_004bfa0c >> 0x10 & 0xff,DAT_004bfa0c >> 0x18);
  iVar9 = 0;
  uVar8 = extraout_var;
  if (0 < *(int *)(DAT_0050c0c4 + 4)) {
    do {
      DAT_0050c0b8 = uVar4;
      DAT_0050c0ba = uVar5;
      FUN_0042e150(param_1 + iVar6,DAT_0050c0c4,iVar9);
      iVar9 = iVar9 + 1;
      uVar8 = extraout_var_00;
    } while (iVar9 < *(int *)(DAT_0050c0c4 + 4));
  }
  if ((DAT_0050c0a0 < DAT_0050c0a8) && (DAT_0050c09c < DAT_0050c0a4)) {
    FUN_00484020(CONCAT22((short)((uint)iVar9 >> 0x10),DAT_0050c0a0),DAT_0050c09c,
                 CONCAT22(uVar8,DAT_0050c0a8),DAT_0050c0a4);
  }
  DAT_0050c0b8 = DAT_0050c0bc;
  DAT_0050c0ba = DAT_0050c0be;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0042edc0(char param_1)

{
  int iVar1;
  char *pcVar2;

  FUN_0044e290(0,0,DAT_004bfa0c,DAT_004bfa0c >> 8 & 0xff,DAT_004bfa0c >> 0x10 & 0xff,
               DAT_004bfa0c >> 0x18);
  DAT_00e99764 = 1;
  if (param_1 == '_') {
    param_1 = ' ';
  }
  if ((('`' < param_1) && (param_1 < '{')) && (*(byte *)((int)DAT_0050c0c4 + 0x5b) < 0x61)) {
    param_1 = param_1 + -0x20;
  }
  if (DAT_0050c0c4[0x17] != 0) {
    iVar1 = (int)param_1;
    if ((((int)(uint)*(byte *)((int)DAT_0050c0c4 + 0x5a) <= iVar1) &&
        (iVar1 <= (int)(uint)*(byte *)((int)DAT_0050c0c4 + 0x5b))) &&
       (pcVar2 = (char *)((iVar1 - (uint)*(byte *)((int)DAT_0050c0c4 + 0x5a)) * 0x10 +
                         DAT_0050c0c4[0x17]), *(short *)(pcVar2 + 8) != -1)) {
      _DAT_00e99740 = (int)*(short *)(pcVar2 + 6);
      iVar1 = (int)*pcVar2;
      _DAT_00e99708 = (int)*(short *)(pcVar2 + 4);
      _DAT_00e9970c = (int)*(short *)(pcVar2 + 0xc);
      _DAT_00e99704 = (int)*(short *)(pcVar2 + 0xe);
      _DAT_00e99700 = (int)*(short *)(pcVar2 + 8);
      _DAT_00e996fc = (int)*(short *)(pcVar2 + 10);
      if (*DAT_0050c0c4 == 0) {
        _DAT_00e99760 = (int)pcVar2[1];
      }
      else {
        _DAT_00e99760 = 0;
      }
      goto LAB_0042ee99;
    }
  }
  iVar1 = -2;
LAB_0042ee99:
  if (-1 < iVar1) {
    FUN_0042ddf0(DAT_0050c0c4,iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0042eeb0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined3 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined2 extraout_var_20;
  undefined2 extraout_var_21;
  undefined2 extraout_var_22;
  undefined2 extraout_var_23;
  undefined2 extraout_var_24;
  undefined2 extraout_var_25;
  undefined2 extraout_var_26;
  undefined2 extraout_var_27;
  undefined2 extraout_var_28;
  undefined2 extraout_var_29;
  undefined2 extraout_var_30;
  undefined2 extraout_var_31;
  undefined2 extraout_var_32;
  undefined2 extraout_var_33;
  undefined2 extraout_var_34;
  undefined2 extraout_var_35;

  param_1 = param_1 - (int)_DAT_00e9970c / 2;
  uVar3 = (undefined3)(_DAT_00e99704 - ((int)_DAT_00e99704 >> 0x1f) >> 8);
  param_2 = (int)_DAT_00e99704 / 2 + param_2;
  if (param_3 == 'o') {
    FUN_0044e290(0,0,0,0,0,CONCAT31(uVar3,DAT_004bfa0c._3_1_));
    iVar1 = param_2 + -1;
    iVar2 = param_1 + -1;
    FUN_0042d990(iVar2,iVar1,CONCAT22(extraout_var_11,DAT_00e99740),
                 CONCAT22(extraout_var,DAT_00e99708),CONCAT22(extraout_var_23,DAT_00e9970c),
                 CONCAT22(extraout_var_11,DAT_00e99704),CONCAT22(extraout_var,DAT_00e99700),
                 CONCAT22(extraout_var_23,DAT_00e996fc),CONCAT22(extraout_var_11,DAT_00e99760));
    FUN_0042d990(param_1 + 1,param_2 + 1,CONCAT22(extraout_var_24,DAT_00e99740),
                 CONCAT22(extraout_var_24,DAT_00e99708),CONCAT22(extraout_var_24,DAT_00e9970c),
                 CONCAT22(extraout_var_24,DAT_00e99704),CONCAT22(extraout_var_24,DAT_00e99700),
                 CONCAT22(extraout_var_24,DAT_00e996fc),CONCAT22(extraout_var_24,DAT_00e99760));
    FUN_0042d990(param_1 + 1,iVar1,CONCAT22(extraout_var_00,DAT_00e99740),
                 CONCAT22(extraout_var_25,DAT_00e99708),CONCAT22(extraout_var_12,DAT_00e9970c),
                 CONCAT22(extraout_var_00,DAT_00e99704),CONCAT22(extraout_var_25,DAT_00e99700),
                 CONCAT22(extraout_var_12,DAT_00e996fc),CONCAT22(extraout_var_00,DAT_00e99760));
    FUN_0042d990(iVar2,param_2 + 1,CONCAT22(extraout_var_13,DAT_00e99740),
                 CONCAT22(extraout_var_01,DAT_00e99708),CONCAT22(extraout_var_26,DAT_00e9970c),
                 CONCAT22(extraout_var_13,DAT_00e99704),CONCAT22(extraout_var_01,DAT_00e99700),
                 CONCAT22(extraout_var_26,DAT_00e996fc),CONCAT22(extraout_var_13,DAT_00e99760));
    FUN_0042d990(iVar2,param_2,CONCAT22(extraout_var_27,DAT_00e99740),
                 CONCAT22(extraout_var_14,DAT_00e99708),CONCAT22(extraout_var_02,DAT_00e9970c),
                 CONCAT22(extraout_var_27,DAT_00e99704),CONCAT22(extraout_var_14,DAT_00e99700),
                 CONCAT22(extraout_var_02,DAT_00e996fc),CONCAT22(extraout_var_27,DAT_00e99760));
    FUN_0042d990(param_1 + 1,param_2,CONCAT22(extraout_var_03,DAT_00e99740),
                 CONCAT22(extraout_var_28,DAT_00e99708),CONCAT22(extraout_var_15,DAT_00e9970c),
                 CONCAT22(extraout_var_03,DAT_00e99704),CONCAT22(extraout_var_28,DAT_00e99700),
                 CONCAT22(extraout_var_15,DAT_00e996fc),CONCAT22(extraout_var_03,DAT_00e99760));
    FUN_0042d990(param_1,iVar1,CONCAT22(extraout_var_16,DAT_00e99740),
                 CONCAT22(extraout_var_04,DAT_00e99708),CONCAT22(extraout_var_29,DAT_00e9970c),
                 CONCAT22(extraout_var_16,DAT_00e99704),CONCAT22(extraout_var_04,DAT_00e99700),
                 CONCAT22(extraout_var_29,DAT_00e996fc),CONCAT22(extraout_var_16,DAT_00e99760));
    FUN_0042d990(param_1,param_2 + 1,CONCAT22(extraout_var_30,DAT_00e99740),
                 CONCAT22(extraout_var_17,DAT_00e99708),CONCAT22(extraout_var_05,DAT_00e9970c),
                 CONCAT22(extraout_var_30,DAT_00e99704),CONCAT22(extraout_var_17,DAT_00e99700),
                 CONCAT22(extraout_var_05,DAT_00e996fc),CONCAT22(extraout_var_30,DAT_00e99760));
  }
  else if (param_3 == 's') {
    FUN_0044e290(0,0,0,0,0,CONCAT31(uVar3,DAT_004bfa0c._3_1_));
    FUN_0042d990(param_1 + 1,param_2 + 1,CONCAT22(extraout_var_18,DAT_00e99740),
                 CONCAT22(extraout_var_06,DAT_00e99708),CONCAT22(extraout_var_31,DAT_00e9970c),
                 CONCAT22(extraout_var_18,DAT_00e99704),CONCAT22(extraout_var_06,DAT_00e99700),
                 CONCAT22(extraout_var_31,DAT_00e996fc),CONCAT22(extraout_var_18,DAT_00e99760));
  }
  else {
    if (param_3 != 'f') goto LAB_0042f2f8;
    FUN_0044e290(0,0,0,0,0,DAT_004bfa0c._3_1_);
    FUN_0042d990(param_1 + -1,param_2,CONCAT22(extraout_var_07,DAT_00e99740),
                 CONCAT22(extraout_var_32,DAT_00e99708),CONCAT22(extraout_var_19,DAT_00e9970c),
                 CONCAT22(extraout_var_07,DAT_00e99704),CONCAT22(extraout_var_32,DAT_00e99700),
                 CONCAT22(extraout_var_19,DAT_00e996fc),CONCAT22(extraout_var_07,DAT_00e99760));
    FUN_0042d990(param_1 + 1,param_2,CONCAT22(extraout_var_33,DAT_00e99740),
                 CONCAT22(extraout_var_20,DAT_00e99708),CONCAT22(extraout_var_08,DAT_00e9970c),
                 CONCAT22(extraout_var_33,DAT_00e99704),CONCAT22(extraout_var_20,DAT_00e99700),
                 CONCAT22(extraout_var_08,DAT_00e996fc),CONCAT22(extraout_var_33,DAT_00e99760));
    FUN_0042d990(param_1,param_2 + -1,CONCAT22(extraout_var_21,DAT_00e99740),
                 CONCAT22(extraout_var_09,DAT_00e99708),CONCAT22(extraout_var_34,DAT_00e9970c),
                 CONCAT22(extraout_var_21,DAT_00e99704),CONCAT22(extraout_var_09,DAT_00e99700),
                 CONCAT22(extraout_var_34,DAT_00e996fc),CONCAT22(extraout_var_21,DAT_00e99760));
    FUN_0042d990(param_1,param_2 + 1,CONCAT22(extraout_var_10,DAT_00e99740),
                 CONCAT22(extraout_var_35,DAT_00e99708),CONCAT22(extraout_var_22,DAT_00e9970c),
                 CONCAT22(extraout_var_10,DAT_00e99704),CONCAT22(extraout_var_35,DAT_00e99700),
                 CONCAT22(extraout_var_22,DAT_00e996fc),CONCAT22(extraout_var_10,DAT_00e99760));
  }
  FUN_0044e290(0,0,DAT_004bfa0c,DAT_004bfa0c >> 8 & 0xff,DAT_004bfa0c >> 0x10 & 0xff,
               DAT_004bfa0c >> 0x18);
  DAT_00e99764 = 1;
LAB_0042f2f8:
  if (DAT_00e99764 == 0) {
    FUN_0044e290(0,0,DAT_004bfa0c,DAT_004bfa0c >> 8 & 0xff,DAT_004bfa0c >> 0x10 & 0xff,
                 DAT_004bfa0c >> 0x18);
    DAT_00e99764 = 1;
  }
  FUN_0042d990(param_1,param_2,DAT_00e99740,DAT_00e99708,_DAT_00e9970c & 0xffff,
               _DAT_00e99704 & 0xffff,DAT_00e99700,DAT_00e996fc,DAT_00e99760);
  return;
}

#endif
