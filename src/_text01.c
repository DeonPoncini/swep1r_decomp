#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
undefined * FUN_00407b00(uint param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;

  iVar4 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    puVar3 = param_2;
    if (uVar1 == 0xffffffff) {
      return (undefined *)0x0;
    }
    do {
      if (uVar1 == param_1) {
        return (undefined *)param_2[iVar4 * 2 + 1];
      }
      uVar1 = puVar3[2];
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar1 != 0xffffffff);
    return (undefined *)0x0;
  }
  switch(param_1) {
  case 0xd:
    FUN_0049eb80(&DAT_004d5f38,&DAT_004b3ecc);
    return &DAT_004d5f38;
  default:
    goto switchD_00407b23_caseD_e;
  case 0x1d:
    pcVar5 = s__MONDOTEXT_H_0231_LEFT_CTRL_004b42ac;
    break;
  case 0x29:
    pcVar5 = s__MONDOTEXT_H_0233_TILDE_004b4278;
    break;
  case 0x2a:
    pcVar5 = s__MONDOTEXT_H_0232_LEFT_SHIFT_004b42e4;
    break;
  case 0x38:
    pcVar5 = s__MONDOTEXT_H_0230_LEFT_ALT_004b42c8;
    break;
  case 0x45:
    param_1 = 0xc5;
    goto switchD_00407b23_caseD_e;
  case 0x46:
    pcVar5 = s__MONDOTEXT_H_0543_SCR_LOCK_004b4290;
    break;
  case 0xc5:
    param_1 = 0x45;
switchD_00407b23_caseD_e:
    GetKeyNameTextA(((param_1 & 0x80) << 1 | param_1 & 0x7f) << 0x10,&DAT_004d5f38,0x80);
    return &DAT_004d5f38;
  }
  uVar2 = FUN_00421360(pcVar5);
  FUN_0049eb80(&DAT_004d5f38,uVar2);
  return &DAT_004d5f38;
}



undefined4 FUN_00407cd0(byte *param_1,undefined4 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  undefined **ppuVar4;
  int iVar5;

  iVar5 = 0;
  if (DAT_004b29e8 == -1) {
    return 0;
  }
  ppuVar4 = &PTR_s__MONDOTEXT_H_0014_CAMERA_CYCLE_004b29ec;
  do {
    if (param_3 == 0) {
      uVar2 = FUN_00421470(*ppuVar4);
      uVar2 = FUN_00421360(param_2,uVar2);
      iVar3 = FUN_0049ec50(uVar2);
      if (iVar3 == 0) goto LAB_00407d51;
    }
    if (param_3 == 1) {
      uVar2 = FUN_00421360(*ppuVar4);
      uVar2 = FUN_00421360(param_2,uVar2);
      iVar3 = FUN_0049ec50(uVar2);
      if (iVar3 == 0) {
LAB_00407d51:
        *(int *)(param_1 + 8) = (&DAT_004b29e8)[iVar5 * 3];
        *param_1 = *param_1 | (&DAT_004b29f0)[iVar5 * 0xc];
        return 1;
      }
    }
    ppuVar1 = ppuVar4 + 2;
    ppuVar4 = ppuVar4 + 3;
    iVar5 = iVar5 + 1;
    if (*ppuVar1 == (undefined *)0xffffffff) {
      return 0;
    }
  } while( true );
}



undefined * FUN_00407d90(int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;

  iVar3 = 0;
  if (DAT_004b29e8 == -1) {
    return (undefined *)0x0;
  }
  puVar2 = &DAT_004b29e8;
  iVar1 = DAT_004b29e8;
  while ((iVar1 != param_1 || (*(char *)(puVar2 + 2) != param_2))) {
    iVar1 = puVar2[3];
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + 1;
    if (iVar1 == -1) {
      return (undefined *)0x0;
    }
  }
  return (&PTR_s__MONDOTEXT_H_0014_CAMERA_CYCLE_004b29ec)[iVar3 * 3];
}



void FUN_00407de0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  OLECHAR *pOVar4;
  size_t _MaxCount;
  uint uVar5;
  GUID *rguid;
  char local_300 [256];
  OLECHAR local_200 [128];
  char local_100 [256];

  uVar5 = 0;
  DAT_004d6b3c = 0;
  iVar3 = FUN_0049d2e0(s_JoystickGUID_004b4304,local_100,0x100,&DAT_004d55cc);
  uVar2 = DAT_004d6b3c;
  if ((iVar3 == 0) && (DAT_0050fec8 != 0)) {
    rguid = (GUID *)&DAT_00ec9ea4;
    while( true ) {
      StringFromGUID2(rguid,local_200,0x100);
      _MaxCount = 0;
      pOVar4 = local_200;
      do {
        if (*(char *)pOVar4 != '\0') {
          local_300[_MaxCount] = *(char *)pOVar4;
          _MaxCount = _MaxCount + 1;
        }
        cVar1 = *(char *)pOVar4;
        pOVar4 = (OLECHAR *)((int)pOVar4 + 1);
      } while (cVar1 != '}');
      iVar3 = _strncmp(local_100,local_300,_MaxCount);
      uVar2 = uVar5;
      if (iVar3 == 0) break;
      uVar5 = uVar5 + 1;
      rguid = (GUID *)&rguid[0x27].Data2;
      if (DAT_0050fec8 <= uVar5) {
        return;
      }
    }
  }
  DAT_004d6b3c = uVar2;
  return;
}



undefined4 FUN_00407ea0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (param_1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00485880((DAT_004d6b3c + 8) * 0x20,0);
  }
  if (param_1 == 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00485880(0x200,0);
  }
  if (param_1 == 2) {
    bVar1 = false;
    goto LAB_00407f2d;
  }
  iVar3 = FUN_00485880(0x1c,0);
  if (iVar3 == 0) {
    iVar3 = FUN_00485880(0x9c,0);
    if (iVar3 == 0) {
      iVar3 = FUN_00411720();
      if (iVar3 == 0) {
        iVar3 = FUN_00485880(0x39,0);
        if (iVar3 != 0) goto LAB_00407f28;
      }
      bVar1 = false;
      goto LAB_00407f2d;
    }
  }
LAB_00407f28:
  bVar1 = true;
LAB_00407f2d:
  if (((DAT_004d55d4 == 0) || (param_1 == 0)) || (DAT_004d5e30 <= 0.1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((iVar4 == 0) && (iVar5 == 0)) && ((!bVar1 && (!bVar2)))) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00407f80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00485880(DAT_004d6b3c * 0x20 + 0x101,0);
  }
  if (param_1 == 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00485880(0x201,0);
  }
  if (param_1 == 2) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00485880(1,0);
  }
  iVar1 = __ftol();
  if ((((iVar2 == 0) && (iVar4 == 0)) && (iVar3 == 0)) && (iVar1 == 0)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00408020(int param_1)

{
  int *piVar1;

  piVar1 = &DAT_004b38b8;
  do {
    if (param_1 == *piVar1) {
      return 1;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 < &DAT_004b38f8);
  return 0;
}



undefined4 FUN_00408040(int param_1,int param_2,float param_3,float param_4)

{
  int iVar1;
  float10 fVar2;

  if (param_1 < 0) {
    fVar2 = (float10)param_3;
  }
  else {
    fVar2 = (float10)FUN_004856e0(param_1);
  }
  if (param_2 == 0) {
    if ((float10)0.0 > fVar2) {
      if (-fVar2 <= (float10)param_4) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if ((float10)0.0 <= fVar2) {
      iVar1 = 1;
    }
    else {
      iVar1 = -1;
    }
    if (iVar1 != param_2) {
      return 0;
    }
    if (fVar2 < (float10)0.0) {
      fVar2 = -fVar2;
    }
  }
  if (fVar2 <= (float10)param_4) {
    return 0;
  }
  return 1;
}



void FUN_004080c0(undefined4 param_1,undefined2 param_2,undefined param_3)

{
  uint uVar1;

  if (DAT_004d6b54 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004d5e68);
    if ((byte)DAT_004d5e60 < 0x40) {
      uVar1 = DAT_004d5e60 & 0xff;
      (&DAT_004d6310)[uVar1 * 2] = param_1;
      (&DAT_004d6314)[uVar1 * 4] = param_2;
      (&DAT_004d6316)[uVar1 * 8] = param_3;
      DAT_004d5e60._0_1_ = (byte)DAT_004d5e60 + '\x01';
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004d5e68);
  }
  return;
}



void FUN_00408120(void)

{
  char cVar1;
  ushort uVar2;
  undefined uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;

  iVar5 = 0;
  do {
    uVar3 = FUN_00485880(iVar5,0);
    (&DAT_00ec88e0)[iVar5] = uVar3;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004d5e68);
  DAT_00ec89e0 = (undefined)DAT_004d5e60;
  iVar5 = 0;
  uVar6 = DAT_004d5e60 & 0xff;
  if (uVar6 != 0) {
    pcVar4 = &DAT_004d6316;
    do {
      uVar2 = (&DAT_004d6314)[iVar5 * 4];
      (&DAT_00ec89e4)[iVar5 * 2] = (&DAT_004d6310)[iVar5 * 2];
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 8;
      (&DAT_00ec89e8)[iVar5 * 4] = uVar2 | -(ushort)(cVar1 != '\0') & 0x200;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar6);
  }
  DAT_004d5e60 = DAT_004d5e60 & 0xffffff00;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004d5e68);
  return;
}



undefined4 FUN_004081c0(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_00ec8740;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}



void FUN_004081e0(int param_1)

{
  if (param_1 != 0) {
    DAT_004b4314 = DAT_004b4314 + 1;
    return;
  }
  DAT_004b4314 = DAT_004b4314 + -1;
  return;
}



bool FUN_00408200(void)

{
  return 0 < DAT_004b4314;
}



void FUN_00408210(undefined4 param_1)

{
  DAT_004b4314 = param_1;
  return;
}



void FUN_00408220(void)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;

  if (DAT_004b4314 < 1) {
    FUN_004285d0(0xf9,0);
  }
  else {
    iVar1 = FUN_004082e0(&local_4,&local_8);
    if (iVar1 != 0) {
      FUN_00428660(0xf9,local_4,local_8);
      FUN_004286f0(0xf9,0x3f800000,0x3f800000);
      FUN_00428740(0xf9,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
      FUN_004285d0(0xf9,1);
      FUN_004287e0(0xf9,0x800);
      FUN_004287e0(0xf9,0x10000);
      return;
    }
  }
  return;
}



undefined4 FUN_004082e0(int *param_1,int *param_2)

{
  BOOL BVar1;
  tagPOINT local_8;

  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    *param_1 = 0;
    *param_2 = 0;
    BVar1 = GetCursorPos(&local_8);
    if (BVar1 != 0) {
      if (DAT_00ec86c4 == 0x200) {
        *param_1 = local_8.x + (local_8.x >> 2);
        *param_2 = local_8.y + (local_8.y >> 2);
        return 1;
      }
      *param_1 = local_8.x;
      *param_2 = local_8.y;
      return 1;
    }
  }
  return 0;
}



void FUN_00408360(int param_1,int param_2)

{
  if (DAT_00ec86c4 == 0x200) {
    SetCursorPos((param_1 << 9) / 0x280,(param_2 * DAT_00ec85e8) / 0x1e0);
    return;
  }
  SetCursorPos(param_1,param_2);
  return;
}



void FUN_004083c1(void)

{
  FUN_00409cf1();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004083d0(void)

{
  byte bVar1;
  int local_8;
  int local_4;

  DAT_00ec8740 = 0;
  if ((DAT_004d6b40 == 0) || (DAT_004d6b6c != 0 && DAT_004d6b48 != 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  DAT_00ec8744 = -(uint)bVar1 & 2 | -(uint)((short)DAT_004d6b44 != 0) & 4;
  if (DAT_00ec8744 != DAT_00ec8748) {
    DAT_00ec8740 = 0x10000000;
    if (((DAT_00ec8744 ^ DAT_00ec8748) & 2) != 0) {
      DAT_00ec8740 = 0x10000002;
    }
    if (((DAT_00ec8744 ^ DAT_00ec8748) & 4) != 0) {
      DAT_00ec8740 = DAT_00ec8740 | 4;
    }
  }
  DAT_00ec8748 = DAT_00ec8744;
  FUN_004082e0(&local_8,&local_4);
  DAT_00ec874c = local_8;
  DAT_00ec8754 = local_4;
  if ((local_8 != DAT_00ec8750) || (local_4 != DAT_00ec8758)) {
    DAT_00ec8740 = DAT_00ec8740 | 0x80000001;
  }
  DAT_00ec8750 = local_8;
  DAT_00ec8764 = DAT_00ec87c4;
  DAT_00ec8758 = local_4;
  DAT_00ec875c = DAT_00ec87c0;
  if ((DAT_00ec87c0 != _DAT_00ec8760) || (DAT_00ec87c4 != _DAT_00ec8768)) {
    DAT_00ec8740 = DAT_00ec8740 | 0x20000001;
  }
  _DAT_00ec8760 = DAT_00ec87c0;
  _DAT_00ec8768 = DAT_00ec87c4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00408510(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_004d6be4;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004d6be4 = 0x7c;
  _DAT_004d6be8 = 7;
  _DAT_004d6bf0 = 8;
  _DAT_004d6bec = 8;
  _DAT_004d6c4c = 0x800;
  iVar1 = (**(code **)(*DAT_0052e638 + 0x18))(DAT_0052e638,&DAT_004d6be4,&DAT_004d6be0,0);
  if (iVar1 != 0) {
    DAT_004b4758 = 1;
    return;
  }
  DAT_004d6b74 = __ftol();
  DAT_004d6b70 = DAT_00ec8cb0 - (DAT_00ec8cb0 >> 3);
  puVar2 = (undefined4 *)&stack0xffffff8c;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004d6bd8 = 10;
  DAT_004d6bdc = DAT_004d6b74;
  (**(code **)(*DAT_004d6be0 + 0x14))(DAT_004d6be0,0,0,0,0x1000400,&stack0xffffff8c);
  _DAT_00ec86d4 = 0;
  _DAT_00ec86d0 = 0;
  DAT_004b4758 = 0;
  _DAT_00ec86d8 = 8;
  _DAT_00ec86dc = 8;
  return;
}



void FUN_00408620(void)

{
  if (DAT_004b4758 == 0) {
    (**(code **)(*DAT_004d6be0 + 8))(DAT_004d6be0);
  }
  return;
}



void FUN_00408640(void)

{
  int *piVar1;
  undefined4 ***pppuStack_70;
  int iStack_6c;
  undefined *puStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 ***pppuStack_58;
  int iStack_54;
  undefined *puStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  int **ppiStack_40;
  int iStack_3c;
  undefined *puStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 **ppuStack_28;
  int iStack_24;
  undefined *puStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 **local_10;
  int local_c;
  int local_8;
  int local_4;

  if (DAT_004b4758 == 0) {
    local_8 = DAT_004d6bdc + (int)DAT_004d6b74;
    uStack_18 = 0;
    iStack_1c = 0x1000000;
    local_10 = DAT_004d6b74;
    local_c = DAT_004d6b70;
    puStack_20 = &DAT_00ec86d0;
    local_4 = DAT_004d6b70 + 1;
    iStack_24 = DAT_004d6be0;
    ppuStack_28 = &local_10;
    piStack_2c = DAT_00ec8d00;
    uStack_30 = 0x408698;
    (**(code **)(*DAT_00ec8d00 + 0x14))();
    iStack_1c = DAT_004d6b70 + DAT_004d6bd8;
    uStack_30 = 0;
    iStack_34 = 0x1000000;
    iStack_24 = iStack_1c + -1;
    puStack_20 = (undefined *)(DAT_004d6bdc + (int)DAT_004d6b74);
    puStack_38 = &DAT_00ec86d0;
    iStack_3c = DAT_004d6be0;
    ppiStack_40 = (int **)&ppuStack_28;
    ppuStack_28 = DAT_004d6b74;
    piStack_44 = DAT_00ec8d00;
    uStack_48 = 0x4086e9;
    (**(code **)(*DAT_00ec8d00 + 0x14))();
    ppiStack_40 = DAT_004d6b74;
    puStack_38 = (undefined *)((int)DAT_004d6b74 + 1);
    uStack_48 = 0;
    iStack_34 = DAT_004d6bd8 + DAT_004d6b70;
    iStack_4c = 0x1000000;
    puStack_50 = &DAT_00ec86d0;
    iStack_54 = DAT_004d6be0;
    pppuStack_58 = &ppiStack_40;
    iStack_3c = DAT_004d6b70;
    piStack_5c = DAT_00ec8d00;
    uStack_60 = 0x40872f;
    (**(code **)(*DAT_00ec8d00 + 0x14))();
    puStack_50 = (undefined *)((int)DAT_004d6b74 + DAT_004d6bdc);
    uStack_60 = 0;
    pppuStack_58 = (undefined4 ***)((int)puStack_50 + -1);
    iStack_4c = DAT_004d6bd8 + DAT_004d6b70;
    iStack_64 = 0x1000000;
    iStack_54 = DAT_004d6b70;
    puStack_68 = &DAT_00ec86d0;
    iStack_6c = DAT_004d6be0;
    pppuStack_70 = &pppuStack_58;
    (**(code **)(*DAT_00ec8d00 + 0x14))(DAT_00ec8d00);
    piVar1 = piStack_5c;
    if (100 < (int)piStack_5c) {
      piVar1 = (int *)0x64;
    }
    if ((int)piVar1 < 0) {
      piVar1 = (int *)0x0;
    }
    pppuStack_70 = (undefined4 ***)DAT_004d6b74;
    puStack_68 = (undefined *)(((int)piVar1 * DAT_004d6bdc) / 100 + (int)DAT_004d6b74);
    iStack_64 = DAT_004d6bd8 + DAT_004d6b70;
    iStack_6c = DAT_004d6b70;
    (**(code **)(*DAT_00ec8d00 + 0x14))
              (DAT_00ec8d00,&pppuStack_70,DAT_004d6be0,&DAT_00ec86d0,0x1000000,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00408800(void)

{
  _DAT_004d6c64 = 0;
  FUN_00408640(0);
  return;
}



void FUN_00408820(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  iVar1 = DAT_004b4330;
  puVar3 = &DAT_004b4320;
  puVar4 = &DAT_00ec86a0;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((iVar1 == 0) || (DAT_00ec86b0 = 1, DAT_004b431c == 0)) {
    DAT_00ec86b0 = 0;
  }
  if ((DAT_00ec86b4 == 0) || (DAT_00ec86b4 = 1, DAT_004b431c == 0)) {
    DAT_00ec86b4 = 0;
  }
  return;
}



undefined4 FUN_00408880(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined local_140 [32];
  undefined local_120 [32];
  undefined local_100 [256];

  FUN_0049eb80(local_100,s__s_s__s_004b4830,s___data_config__004b252c,param_1,s_video_cfg_004b4838);
  iVar1 = FUN_004877d0(local_100);
  if (iVar1 == 0) {
    FUN_00487960();
    return 0xffffffff;
  }
  FUN_0049eb80(local_120,s_VIDEO_004b4828);
  iVar1 = FUN_004879f0(s___________s_SETTINGS_004b4810,local_120);
  if (iVar1 == 0) {
    puVar2 = &DAT_004b480c;
    if (DAT_00ec86a0 == 0) {
      puVar2 = &DAT_004b4808;
    }
    FUN_0049eb80(local_140,s_REFLECTIONS__s_004b47f8,puVar2);
    iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
    if (iVar1 == 0) {
      puVar2 = &DAT_004b480c;
      if (DAT_00ec86a4 == 0) {
        puVar2 = &DAT_004b4808;
      }
      FUN_0049eb80(local_140,s_ZEFFECTS__s_004b47ec,puVar2);
      iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
      if (iVar1 == 0) {
        puVar2 = &DAT_004b480c;
        if (DAT_00ec86a8 == 0) {
          puVar2 = &DAT_004b4808;
        }
        FUN_0049eb80(local_140,s_DYNAMIC_LIGHTING__s_004b47d8,puVar2);
        iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
        if (iVar1 == 0) {
          puVar2 = &DAT_004b480c;
          if (DAT_00ec86ac == 0) {
            puVar2 = &DAT_004b4808;
          }
          FUN_0049eb80(local_140,s_VSYNC__s_004b47cc,puVar2);
          iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
          if (iVar1 == 0) {
            puVar2 = &DAT_004b480c;
            if (DAT_00ec86b0 == 0) {
              puVar2 = &DAT_004b4808;
            }
            FUN_0049eb80(local_140,s_LENSFLARE__s_004b47bc,puVar2);
            iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
            if (iVar1 == 0) {
              puVar2 = &DAT_004b480c;
              if (DAT_00ec86b4 == 0) {
                puVar2 = &DAT_004b4808;
              }
              FUN_0049eb80(local_140,s_ENGINEEXHAUST__s_004b47a8,puVar2);
              iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
              if (iVar1 == 0) {
                FUN_0049eb80(local_140,s_TEXTURE_RES__i_004b4798,DAT_00ec86b8);
                iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                if (iVar1 == 0) {
                  FUN_0049eb80(local_140,s_MODEL_DETAIL__i_004b4788,DAT_00ec86bc);
                  iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                  if (iVar1 == 0) {
                    FUN_0049eb80(local_140,s__DRAWDISTANCE__i_004b4777 + 1,DAT_00ec86c0);
                    iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                    if (iVar1 == 0) {
                      iVar1 = FUN_004879a0(s__end__004b3cd8);
                      if (iVar1 == 0) {
                        FUN_00487960();
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00487960();
  return 0;
}



undefined4 FUN_00408b60(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  undefined local_100 [256];

  FUN_0049eb80(local_100,s__s_s__s_004b4830,s___data_config__004b252c,param_1,s_video_cfg_004b4838);
  iVar2 = FUN_004877b0(local_100);
  if (iVar2 == 0) {
    FUN_00487900();
    return 0xffffffff;
  }
  iVar2 = FUN_00487ae0();
  if (iVar2 != 0) {
    do {
      pbVar4 = &DAT_004b3e7c;
      pbVar3 = DAT_00ec8e84;
      do {
        bVar1 = *pbVar3;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00408bef:
          iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_00408bf4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00408bef;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_00408bf4:
      if (iVar2 == 0) break;
      iVar2 = FUN_0049ec50(DAT_00ec8e84,s_VIDEO_004b4828);
      if (iVar2 == 0) {
        iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_REFLECTIONS_004b48b4);
        if (iVar2 == 0) {
          iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
          DAT_00ec86a0 = (uint)(iVar2 == 0);
        }
        else {
          iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_ZEFFECTS_004b48a8);
          if (iVar2 == 0) {
            iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
            DAT_00ec86a4 = (uint)(iVar2 == 0);
          }
          else {
            iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_DYNAMIC_LIGHTING_004b4894);
            if (iVar2 == 0) {
              iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
              DAT_00ec86a8 = (uint)(iVar2 == 0);
            }
            else {
              iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_VSYNC_004b488c);
              if (iVar2 == 0) {
                iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                DAT_00ec86ac = (uint)(iVar2 == 0);
              }
              else {
                iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_LENSFLARE_004b4880);
                if (iVar2 == 0) {
                  iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                  DAT_00ec86b0 = (uint)(iVar2 == 0);
                }
                else {
                  iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_ENGINEEXHAUST_004b4870);
                  if (iVar2 == 0) {
                    iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                    DAT_00ec86b4 = (uint)(iVar2 == 0);
                  }
                  else {
                    iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_TEXTURE_RES_004b4864);
                    if (iVar2 == 0) {
                      DAT_00ec86b8 = FUN_0049f0e0(DAT_00ec8e90);
                    }
                    else {
                      iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_MODEL_DETAIL_004b4854);
                      if (iVar2 == 0) {
                        DAT_00ec86bc = FUN_0049f0e0(DAT_00ec8e90);
                      }
                      else {
                        iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_DRAWDISTANCE_004b4844);
                        if (iVar2 != 0) {
                          FUN_00487900();
                          return 0;
                        }
                        DAT_00ec86c0 = FUN_0049f0e0(DAT_00ec8e90);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar2 = FUN_00487ae0();
      if (iVar2 == 0) {
        FUN_00487900();
        return 1;
      }
    } while( true );
  }
  FUN_00487900();
  return 1;
}



void FUN_00408e40(undefined4 param_1)

{
  (**(code **)(DAT_00ecc420 + 0x20))(param_1);
  return;
}



undefined4 FUN_00408e60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;

  iVar1 = FUN_00445b60(param_1);
  puVar2 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(8);
  uVar3 = (**(code **)(DAT_00ecc420 + 0x20))(param_2);
  *puVar2 = uVar3;
  puVar2[1] = (&DAT_00ec8700)[iVar1];
  (&DAT_00ec8700)[iVar1] = puVar2;
  return *puVar2;
}



void FUN_00408eb0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar5 = DAT_0050c6b0;
  if (DAT_0050c6b0 != 0) {
    *(int *)(DAT_0050c6b0 + 0x44) = *(int *)(DAT_0050c6b0 + 0x44) - (&DAT_00ec8660)[param_1];
    iVar5 = DAT_0050c6b0;
    (&DAT_00ec8660)[param_1] = 0;
  }
  iVar3 = DAT_004d6c6c;
  iVar4 = DAT_004d6c6c - (&DAT_00ec85c0)[param_1];
  DAT_004d6c6c = iVar4;
  (&DAT_00ec85c0)[param_1] = 0;
  if (iVar5 != 0) {
    *(int *)(iVar5 + 0x6c) = iVar4;
  }
  for (; iVar4 < iVar3; iVar4 = iVar4 + 1) {
    FUN_0048eac0(*(undefined4 *)(DAT_004d6c68 + iVar4 * 4));
    *(undefined4 *)(DAT_004d6c68 + iVar4 * 4) = 0;
  }
  puVar2 = (undefined4 *)(&DAT_00ec8700)[param_1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[1];
    (**(code **)(DAT_00ecc420 + 0x24))(*puVar2);
    (**(code **)(DAT_00ecc420 + 0x24))(puVar2);
    puVar2 = puVar1;
  }
  (&DAT_00ec8700)[param_1] = 0;
  return;
}



void FUN_00408f70(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = DAT_004d6c68;
  *(undefined4 *)(param_1 + 0x6c) = DAT_004d6c6c;
  return;
}



void FUN_00408f90(void)

{
  DAT_004d6c6c = DAT_004d6c6c + -1;
  (&DAT_00ec85c0)[DAT_004d6c70] = (&DAT_00ec85c0)[DAT_004d6c70] + -1;
  return;
}



void FUN_00408fb0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;

  if (param_2 != 0) {
    iVar1 = DAT_004d6c68;
    iVar3 = DAT_004d6c6c;
    if (DAT_004d6c68 == 0) {
      iVar1 = FUN_00408e60(param_1,0x2000);
      iVar3 = 0;
      DAT_004d6c6c = 0;
      puVar4 = &DAT_00ec85c0;
      DAT_004d6c68 = iVar1;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    if (iVar3 < 0x7ff) {
      *(int *)(iVar1 + iVar3 * 4) = param_2;
      DAT_004d6c6c = DAT_004d6c6c + 1;
      DAT_004d6c70 = FUN_00445b60(param_1);
      (&DAT_00ec85c0)[DAT_004d6c70] = (&DAT_00ec85c0)[DAT_004d6c70] + 1;
    }
  }
  return;
}



int FUN_00409040(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_e4;
  undefined4 local_e0 [56];

  if (DAT_004d6c60 == 0) {
    DAT_004d6c60 = FUN_0048e680(s___data_default_mat_004b48cc);
    local_e4 = local_e0;
    puVar1 = (undefined4 *)FUN_00408e60(param_1,0x200);
    FUN_0049eb80(DAT_004d6c60,s_Rovermatic_004b48c0);
    *(undefined4 *)(DAT_004d6c60 + 10) = 0x3f800000;
    *(undefined4 *)(DAT_004d6c60 + 0xe) = 0x3f800000;
    *(undefined4 *)(DAT_004d6c60 + 0x44) = 1;
    *(undefined4 *)(DAT_004d6c60 + 0x48) = 0x10;
    *(undefined4 *)(DAT_004d6c60 + 0x4c) = 5;
    *(undefined4 *)(DAT_004d6c60 + 0x50) = 6;
    *(undefined4 *)(DAT_004d6c60 + 0x54) = 5;
    *(undefined4 *)(DAT_004d6c60 + 0x70) = 0;
    *(undefined4 *)(DAT_004d6c60 + 0x58) = 0xb;
    *(undefined4 *)(DAT_004d6c60 + 0x5c) = 5;
    *(undefined4 *)(DAT_004d6c60 + 0x60) = 0;
    *(undefined4 *)(DAT_004d6c60 + 0x74) = 0;
    *(undefined4 *)(DAT_004d6c60 + 100) = 3;
    *(undefined4 *)(DAT_004d6c60 + 0x68) = 2;
    *(undefined4 *)(DAT_004d6c60 + 0x6c) = 3;
    *(undefined4 *)(DAT_004d6c60 + 0x78) = 0;
    *(undefined4 *)(DAT_004d6c60 + 0x7c) = 0;
    *(undefined4 *)(DAT_004d6c60 + 0x88) = 1;
    *(undefined4 *)(DAT_004d6c60 + 0x8c) = 0;
    *local_e4 = 0;
    local_e4[1] = 0;
    local_e4[2] = 0;
    local_e4[3] = 0x10;
    local_e4[4] = 0x10;
    local_e4[5] = 0x200;
    local_e4[6] = 0x20;
    local_e4[7] = 0x10;
    puVar3 = (undefined4 *)(DAT_004d6c60 + 0x44);
    puVar4 = local_e4 + 8;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_e4[0x16] = puVar1;
    local_e4[0x17] = 0;
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
    }
    FUN_0048aa40(*(undefined4 *)(DAT_004d6c60 + 0x90));
    FUN_0048a5e0(*(undefined4 *)(DAT_004d6c60 + 0x90),&local_e4,1,
                 *(undefined4 *)(DAT_004d6c60 + 0x7c));
  }
  return DAT_004d6c60;
}



int FUN_00409230(undefined4 param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = FUN_00445b60(param_1);
  *(int *)(DAT_0050c6b0 + 0x44) = *(int *)(DAT_0050c6b0 + 0x44) + 1;
  iVar1 = (&DAT_00ec8660)[iVar2];
  (&DAT_00ec8660)[iVar2] = iVar1 + 1;
  return *(int *)(&DAT_004b4760 + iVar2 * 4) + iVar1 + 1;
}



void FUN_00409270(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_00ec8660;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(DAT_0050c6b0 + 0x44) = 0;
  return;
}



void FUN_00409290(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int local_8;
  uint local_4;

  local_4 = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    puVar6 = (uint *)(*(int *)(param_1 + 0x6c) + 0x10);
    uVar4 = param_1;
    do {
      uVar3 = *puVar6;
      uVar5 = 0;
      if (0 < (int)uVar3) {
        do {
          local_8 = uVar5 - 1;
          if (local_8 < 0) {
            local_8 = uVar3 - 1;
          }
          uVar1 = uVar5 + 1;
          uVar4 = uVar1 % uVar3;
          uVar3 = puVar6[1];
          iVar2 = *(int *)(param_1 + 0x4c);
          iVar2 = FUN_0048ed20(iVar2 + *(int *)(uVar3 + uVar5 * 4) * 0xc,
                               iVar2 + *(int *)(uVar3 + uVar4 * 4) * 0xc,
                               iVar2 + *(int *)(uVar3 + local_8 * 4) * 0xc);
        } while ((iVar2 != 0) && (uVar3 = *puVar6, uVar5 = uVar1, (int)uVar1 < (int)uVar3));
      }
      if ((int)uVar5 < (int)*puVar6) {
        uVar3 = puVar6[1];
        iVar2 = *(int *)(param_1 + 0x4c);
        FUN_0048eb60(puVar6 + 0xb,iVar2 + *(int *)(uVar3 + uVar5 * 4) * 0xc,
                     iVar2 + *(int *)(uVar3 + uVar4 * 4) * 0xc,
                     iVar2 + *(int *)(uVar3 + local_8 * 4) * 0xc);
      }
      puVar6 = puVar6 + 0x12;
      local_4 = local_4 + 1;
    } while (local_4 < *(uint *)(param_1 + 0x7c));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00409380(short param_1)

{
  int iVar1;
  float fVar2;

  if (1.0 <= (float)(int)param_1 * _DAT_004b4774) {
    DAT_00ec8578 = *(float *)(*(int *)(DAT_00df7f2c + 0x48) + 8);
  }
  else {
    DAT_00ec8578 = *(float *)(*(int *)(DAT_00df7f2c + 0x48) + 4) /
                   (1.0 - (float)(int)param_1 * _DAT_004b4774);
  }
  iVar1 = *(int *)(DAT_00df7f2c + 0x48);
  if (*(float *)(iVar1 + 8) <= DAT_00ec8578) {
    FUN_0048fab0(0);
    return;
  }
  fVar2 = *(float *)(iVar1 + 8) - DAT_00ec8578;
  _DAT_00ec8574 = 1.0 / fVar2;
  DAT_00ec857c = DAT_00ec8578 - fVar2 * -0.7;
  iVar1 = *(int *)(DAT_00df7f2c + 0x48);
  if (DAT_00ec8578 < *(float *)(iVar1 + 4)) {
    DAT_00ec8578 = *(float *)(iVar1 + 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00409450(short param_1,short param_2,short param_3,short param_4)

{
  DAT_00ec8564 = (float)(int)param_1 * 0.003921569;
  DAT_00ec8568 = (float)(int)param_2 * 0.003921569;
  DAT_00ec856c = (float)(int)param_3 * 0.003921569;
  _DAT_00ec8570 = (float)(int)param_4 * 0.003921569;
  FUN_0048b340(DAT_00ec8564,DAT_00ec8568,DAT_00ec856c,DAT_00ec8578,DAT_00ec857c);
  return;
}



void FUN_004094e0(int param_1)

{
  if (param_1 == 0) {
    FUN_0048fab0(0);
    return;
  }
  FUN_0048fab0(DAT_004d79d8);
  return;
}



void FUN_00409510(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;

  iVar2 = 0x270;
  puVar3 = &DAT_004b4348 + param_1 * 4;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined4 *)(DAT_00ec85ec + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x27c);
  iVar2 = 0x18;
  puVar3 = &DAT_004b4418 + param_1 * 4;
  do {
    uVar1 = *puVar3;
    iVar2 = iVar2 + 4;
    puVar3 = puVar3 + 1;
    *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x70) + -4 + iVar2) = uVar1;
  } while (iVar2 < 0x28);
  *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x70) + 8) = 1;
  FUN_004903a0(DAT_00df7f2c,&DAT_004b4688 + param_1 * 4);
  if (1 < param_2) {
    iVar2 = 0x27c;
    puVar3 = (undefined4 *)(&DAT_004b44e8 + param_1 * 0x10);
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      *(undefined4 *)(DAT_00ec85ec + iVar2) = uVar1;
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x288);
    iVar2 = 0x18;
    puVar3 = (undefined4 *)(&DAT_004b45b8 + param_1 * 0x10);
    do {
      uVar1 = *puVar3;
      iVar2 = iVar2 + 4;
      puVar3 = puVar3 + 1;
      *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x74) + -4 + iVar2) = uVar1;
    } while (iVar2 < 0x28);
    *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x74) + 8) = 1;
    return;
  }
  *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x74) + 8) = 0;
  return;
}



void FUN_00409600(int param_1,short param_2,short param_3,short param_4,short param_5,short param_6,
                 short param_7,short param_8,short param_9,short param_10)

{
  int iVar1;

  iVar1 = param_1 * 0x10;
  (&DAT_004b4348)[param_1 * 4] = (float)(int)param_8;
  (&DAT_004b434c)[param_1 * 4] = (float)(int)param_9;
  *(float *)(&DAT_004b4350 + iVar1) = (float)(int)param_10;
  (&DAT_004b4418)[param_1 * 4] = (float)(int)param_5 * 0.003921569;
  (&DAT_004b4688)[param_1 * 4] = (float)(int)param_2 * 0.003921569;
  (&DAT_004b441c)[param_1 * 4] = (float)(int)param_6 * 0.003921569;
  (&DAT_004b468c)[param_1 * 4] = (float)(int)param_3 * 0.003921569;
  *(float *)(&DAT_004b4420 + iVar1) = (float)(int)param_7 * 0.003921569;
  *(undefined4 *)(&DAT_004b4424 + iVar1) = 0x3f800000;
  *(float *)(&DAT_004b4690 + iVar1) = (float)(int)param_4 * 0.003921569;
  *(undefined4 *)(&DAT_004b4694 + iVar1) = 0x3f800000;
  return;
}



void FUN_00409700(short param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;

  iVar1 = 0;
  iVar3 = param_1 * 0x10;
  puVar2 = &DAT_004b4688 + param_1 * 4;
  do {
    *(undefined4 *)((int)&DAT_004b4348 + iVar1 + iVar3) =
         *(undefined4 *)((int)&DAT_004b4348 + iVar1);
    *(undefined4 *)((int)&DAT_004b4418 + iVar1 + iVar3) =
         *(undefined4 *)((int)&DAT_004b4418 + iVar1);
    *puVar2 = *(undefined4 *)((int)&DAT_004b4688 + iVar1);
    iVar1 = iVar1 + 4;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0xc);
  return;
}



void FUN_00409750(int param_1,short param_2,short param_3,short param_4,short param_5,short param_6,
                 short param_7)

{
  param_1 = param_1 * 0x10;
  *(float *)(&DAT_004b44e8 + param_1) = (float)(int)param_5;
  *(float *)(&DAT_004b44ec + param_1) = (float)(int)param_6;
  *(float *)(&DAT_004b44f0 + param_1) = (float)(int)param_7;
  *(float *)(&DAT_004b45b8 + param_1) = (float)(int)param_2 * 0.003921569;
  *(float *)(&DAT_004b45bc + param_1) = (float)(int)param_3 * 0.003921569;
  *(float *)(&DAT_004b45c0 + param_1) = (float)(int)param_4 * 0.003921569;
  *(undefined4 *)(&DAT_004b45c4 + param_1) = 0x3f800000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00409800(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50 [20];

  FUN_00489ab0();
  FUN_00408640(0x1a);
  FUN_00489cd0(DAT_00e229a8,DAT_00e229aa,DAT_00e229ac,0);
  FUN_00408640(0x1c);
  DAT_00ec86c4 = DAT_00ec8e10;
  DAT_00ec85e8 = DAT_00ec8e0c;
  DAT_00ec86e0 = FUN_00490a50(0,&DAT_00ec8da0,0,0,DAT_00ec8e10,DAT_00ec8e0c);
  FUN_00490a30(*(undefined4 *)(param_1 + 0x20));
  FUN_00490a40(*(undefined4 *)(param_1 + 0x24));
  FUN_00490a20(1);
  FUN_00408640(0x1d);
  DAT_00ec85ec = FUN_0048fad0(0x42960000,0,0x3da3d70a,0x41700000,0x3f800000);
  FUN_0048fc50(DAT_00ec85ec,DAT_00ec86e0);
  FUN_00408640(0x1e);
  FUN_0048fc70(DAT_00ec85ec);
  puVar3 = &DAT_004af880;
  puVar4 = &DAT_00ec8580;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_00ec8550 = 0xc47a0000;
  _DAT_00ec8554 = 0xc4fa0000;
  _DAT_00ec8558 = 0x45fa0000;
  _DAT_00ec8730 = 0;
  _DAT_00ec8734 = 0;
  _DAT_00ec8738 = 0;
  FUN_00490060(&DAT_00ec8580);
  FUN_00408640(0x20);
  iVar2 = FUN_00489d90(local_50);
  if (iVar2 != 0) {
    return 0;
  }
  FUN_0048fd10(DAT_00ec85ec,local_50[0]);
  FUN_004903d0(DAT_00ec85ec,0x3ecccccd,0x3f4ccccd);
  FUN_00408640(0x22);
  FUN_0048fc50(DAT_00ec85ec,DAT_00ec86e0);
  FUN_004904f0(DAT_00ec85ec);
  FUN_00490510(&DAT_004d6b78);
  FUN_00490510(&DAT_004d6ba8);
  _DAT_004d6b7c = 0;
  _DAT_004d6bac = 0;
  _DAT_004d6b90 = 0x3f800000;
  _DAT_004d6bc0 = 0x3f800000;
  _DAT_004d6b98 = 0;
  _DAT_004d6b94 = 0;
  _DAT_004d6bc8 = 0;
  _DAT_004d6bc4 = 0;
  local_78 = 0;
  local_6c = 0;
  local_74 = 0x42c80000;
  local_68 = 0x42c80000;
  local_70 = 0xc1a00000;
  local_64 = 0xc1a00000;
  FUN_00408640(0x24);
  FUN_00490450(DAT_00ec85ec,&DAT_004d6b78,&local_78);
  FUN_00490450(DAT_00ec85ec,&DAT_004d6ba8,&local_6c);
  local_60 = 0;
  local_5c = 0;
  local_58 = 0x3f000000;
  local_54 = 0x3f800000;
  FUN_004903a0(DAT_00ec85ec,&local_60);
  uVar1 = FUN_00408640(0x26);
  DAT_004b4318 = 1;
  return uVar1;
}



void FUN_00409af0(void)

{
  FUN_00490b50(DAT_00ec86e0);
  FUN_0048fc10(DAT_00ec85ec);
  return;
}



bool FUN_00409b10(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined local_50 [4];
  undefined4 local_4c [19];

  iVar1 = FUN_00408b60(s_current_004b2640);
  if (iVar1 < 0) {
    FUN_00408820();
    FUN_00408880(s_current_004b2640);
  }
  if (*param_1 != 0) {
    DAT_0050b5c8 = 0;
  }
  iVar1 = FUN_00487d20();
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_00487e00(param_1[4]);
  if (iVar1 == 0) {
    return true;
  }
  DAT_004b7a34 = param_1[4];
  iVar1 = FUN_00487f00(param_1[5],*param_1 == 0);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_00489d90(local_50);
  if (iVar1 != 0) {
    return true;
  }
  puVar3 = local_4c;
  puVar4 = &DAT_00ec8600;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_004238a0();
  if (iVar1 == 0) {
    FUN_0049ce60(DAT_00ec8600,DAT_00ec8604);
  }
  iVar1 = FUN_00489dc0();
  if (iVar1 == 0) {
    MessageBoxA((HWND)0x0,s_Direct3D_Failure_No_3D_Hardware_F_004b4900,s_Racer_Error_004b4928,0);
    FUN_0049eb80(s_Unknown_error_004b75f8,s_ERROR__No_3D_Hardware_Found___s_004b48e0,&DAT_00ecbc20);
    return true;
  }
  puVar3 = &DAT_00ec8700;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_7c = 1;
  local_80 = 1;
  local_84 = 1;
  uVar2 = FUN_0048ad50(&local_84);
  iVar1 = FUN_0048ad10(uVar2,&local_84);
  if ((iVar1 == 0) || (local_84 == 0)) {
    FUN_00487e80();
    FUN_00489e40();
    FUN_00487da0();
  }
  else {
    iVar1 = FUN_00489ec0(param_1[6]);
    if (iVar1 != 0) {
      DAT_004d79d8 = FUN_0048a140();
      DAT_004b431c = FUN_0048a1a0();
      if (DAT_004b431c == 0) {
        DAT_00ec86b0 = 0;
        DAT_00ec86b4 = 0;
      }
      iVar1 = FUN_004909b0();
      return iVar1 == 0;
    }
  }
  return true;
}



void FUN_00409cf1(void)

{
  LPCRITICAL_SECTION unaff_retaddr;

  EnterCriticalSection(unaff_retaddr);
  FUN_0040b731();
  return;
}



void FUN_00409d00(void)

{
  int iVar1;

  iVar1 = 9;
  do {
    FUN_00408eb0(iVar1);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  if (DAT_0050c6b0 != 0) {
    *(undefined4 *)(DAT_0050c6b0 + 0x44) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 0x6c) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 0x68) = 0;
    FUN_0048ee40(DAT_0050c6b0);
  }
  FUN_00490bf0(DAT_0050c6b4);
  FUN_00490a00();
  FUN_0048a1c0();
  FUN_00488030();
  FUN_00487e80();
  FUN_00489e40();
  FUN_00487da0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00409d70(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  char local_2e;

  if ((_DAT_004b4b08 & 0xff) == param_1) {
    return 1;
  }
  if (8 < (int)param_1) {
    return 0;
  }
  if (DAT_004b4b08 < 9) {
    FUN_00403f00(&DAT_004d6d58);
  }
  puVar2 = &DAT_004d6c78;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_004d6ce8;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if ((int)param_1 < 0) {
    _DAT_004b4b08 = CONCAT31(DAT_004b4b08_1,9);
    return 1;
  }
  FUN_00403e10(&DAT_004d6d58);
  if (DAT_004d55d4 == 0) {
    local_40._0_1_ = s___data_bundle_fcr_004b4ca8[0];
    local_40._1_1_ = s___data_bundle_fcr_004b4ca8[1];
    local_40._2_1_ = s___data_bundle_fcr_004b4ca8[2];
    local_40._3_1_ = s___data_bundle_fcr_004b4ca8[3];
    local_3c._0_1_ = s___data_bundle_fcr_004b4ca8[4];
    local_3c._1_1_ = s___data_bundle_fcr_004b4ca8[5];
    local_3c._2_1_ = s___data_bundle_fcr_004b4ca8[6];
    local_3c._3_1_ = s___data_bundle_fcr_004b4ca8[7];
    local_38._0_1_ = s___data_bundle_fcr_004b4ca8[8];
    local_38._1_1_ = s___data_bundle_fcr_004b4ca8[9];
    local_38._2_1_ = s___data_bundle_fcr_004b4ca8[10];
    local_38._3_1_ = s___data_bundle_fcr_004b4ca8[11];
    local_34._0_1_ = s___data_bundle_fcr_004b4ca8[12];
    local_34._1_1_ = s___data_bundle_fcr_004b4ca8[13];
    local_34._2_1_ = s___data_bundle_fcr_004b4ca8[14];
    local_34._3_1_ = s___data_bundle_fcr_004b4ca8[15];
    local_30._0_1_ = s___data_bundle_fcr_004b4ca8[16];
    local_30._1_1_ = s___data_bundle_fcr_004b4ca8[17];
  }
  else {
    local_40._0_1_ = s___data_bundle2_fcr_004b4cbc[0];
    local_40._1_1_ = s___data_bundle2_fcr_004b4cbc[1];
    local_40._2_1_ = s___data_bundle2_fcr_004b4cbc[2];
    local_40._3_1_ = s___data_bundle2_fcr_004b4cbc[3];
    local_3c._0_1_ = s___data_bundle2_fcr_004b4cbc[4];
    local_3c._1_1_ = s___data_bundle2_fcr_004b4cbc[5];
    local_3c._2_1_ = s___data_bundle2_fcr_004b4cbc[6];
    local_3c._3_1_ = s___data_bundle2_fcr_004b4cbc[7];
    local_38._0_1_ = s___data_bundle2_fcr_004b4cbc[8];
    local_38._1_1_ = s___data_bundle2_fcr_004b4cbc[9];
    local_38._2_1_ = s___data_bundle2_fcr_004b4cbc[10];
    local_38._3_1_ = s___data_bundle2_fcr_004b4cbc[11];
    local_34._0_1_ = s___data_bundle2_fcr_004b4cbc[12];
    local_34._1_1_ = s___data_bundle2_fcr_004b4cbc[13];
    local_34._2_1_ = s___data_bundle2_fcr_004b4cbc[14];
    local_34._3_1_ = s___data_bundle2_fcr_004b4cbc[15];
    local_30._0_1_ = s___data_bundle2_fcr_004b4cbc[16];
    local_30._1_1_ = s___data_bundle2_fcr_004b4cbc[17];
    local_2e = s___data_bundle2_fcr_004b4cbc[18];
  }
  iVar1 = FUN_00403f30(&DAT_004d6d58,&local_40,&DAT_004b49b0,&PTR_s_GForce_004b4940);
  if (iVar1 < 0) {
    return 0;
  }
  iVar1 = FUN_00403fd0(&DAT_004d6d58);
  if (iVar1 < 0) {
    (**(code **)(DAT_00ecc420 + 0x10))(s_BIZARRO_ALERT__cifr_LoadAllEffec_004b4c64);
    return 0;
  }
  _DAT_004b4b08 = CONCAT31(DAT_004b4b08_1,(char)param_1);
  DAT_004d765c = 1;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00409ee0(float param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  iVar5 = (int)param_1;
  iVar2 = FUN_0040a160(param_1);
  param_1 = DAT_004b493c;
  puVar1 = &DAT_004d6da0 + iVar2 * 0x174;
  if (DAT_004b2910 != 0) {
    if ((((float)(&DAT_00ec8400)[iVar5 * 3] < 0.0) ||
        (*(float *)(&DAT_00ec8404 + iVar5 * 0xc) < 0.0)) ||
       (*(float *)(&DAT_00ec8408 + iVar5 * 0xc) < 0.0)) {
      if (iVar5 != 0) {
        return 1;
      }
      if (_DAT_00ec84cc < 0.0) {
        return 1;
      }
      if (DAT_00ec84d0 < 0.0) {
        return 1;
      }
      if (_DAT_00ec84d4 < 0.0) {
        return 1;
      }
      iVar5 = 0x11;
    }
    iVar2 = FUN_0040a240(iVar5,0);
    if (((&DAT_004d6ce8)[iVar5] != 0) && (iVar3 = FUN_00404280(puVar1), iVar3 == 0)) {
      FUN_00404230(puVar1);
      (&DAT_004d6ce8)[iVar5] = 0;
      (&DAT_004d6c78)[iVar5] = 0;
    }
    if (iVar2 == 0) {
      return 0;
    }
    if (0.0 < *(float *)(&DAT_00ec8404 + iVar5 * 0xc)) {
      param_1 = param_1 * *(float *)(&DAT_00ec8404 + iVar5 * 0xc);
    }
    if ((-1 < param_2) || (param_1 < 1.0)) {
      uVar4 = __ftol(0);
      FUN_00404400(puVar1,uVar4);
    }
    if (-1 < param_3) {
      FUN_00404330(puVar1,param_3,1);
    }
    if (-1 < param_4) {
      FUN_004044e0(puVar1,param_4,0);
    }
    iVar2 = FUN_004041c0(puVar1,0);
    if (iVar2 < 0) {
      return 0;
    }
    (&DAT_004d6ce8)[iVar5] = 1;
  }
  return 1;
}



undefined4 FUN_0040a0b0(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0040a160(param_1);
  if ((&DAT_004d6ce8)[param_1] != 0) {
    (&DAT_004d6ce8)[param_1] = 0;
  }
  if ((&DAT_004d6da0 + iVar1 * 0x174 != (undefined *)0x0) &&
     (*(int *)(&DAT_004d6da4 + iVar1 * 0x174) != 0)) {
    iVar2 = FUN_0040a190(iVar1,param_1);
    if (iVar2 == 0) {
      FUN_00404230(&DAT_004d6da0 + iVar1 * 0x174);
      return 1;
    }
  }
  return 0;
}



void FUN_0040a120(int param_1)

{
  undefined4 *puVar1;

  puVar1 = &DAT_004d6ef4;
  do {
    FUN_0040a0b0(*puVar1);
    puVar1 = puVar1 + 0x5d;
  } while ((int)puVar1 < 0x4d77ac);
  if (param_1 != 0) {
    FUN_00409ee0(0x11,0xffffffff,0xffffffff,0xffffffff,0);
  }
  return;
}



int FUN_0040a160(uint param_1)

{
  int iVar1;
  uint *puVar2;

  iVar1 = 0;
  puVar2 = &DAT_004d6f10;
  do {
    if (param_1 <= *puVar2) break;
    puVar2 = puVar2 + 0x5d;
    iVar1 = iVar1 + 1;
  } while ((int)puVar2 < 0x4d77c8);
  if (5 < iVar1) {
    iVar1 = -1;
  }
  return iVar1;
}



int FUN_0040a190(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;

  if (param_1 < 0) {
    return -1;
  }
  uVar2 = (&DAT_004d6ef4)[param_1 * 0x5d];
  if ((int)uVar2 < 0) {
    return 2;
  }
  if (uVar2 == param_2) {
    return 0;
  }
  pbVar5 = (&PTR_s_GForce_004b4940)[param_2];
  pbVar3 = &DAT_004d6ef8 + param_1 * 0x174;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_0040a20d:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0040a212;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_0040a20d;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0040a212:
  if (iVar4 == 0) {
    return 1;
  }
  if (uVar2 < param_2) {
    return 3;
  }
  if (param_2 < uVar2) {
    iVar4 = 4;
  }
  return iVar4;
}



undefined4 FUN_0040a240(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;

  iVar2 = FUN_0040a160(param_1);
  iVar3 = FUN_0040a190(iVar2,param_1);
  if (iVar3 < 0) {
    return 0;
  }
  if (((3 < iVar3) && (param_2 == 0)) &&
     (iVar4 = FUN_00404280(&DAT_004d6da0 + iVar2 * 0x174), iVar4 != 0)) {
    return 0;
  }
  (&DAT_004d6ce8)[(&DAT_004d6ef4)[iVar2 * 0x5d]] = 0;
  (&DAT_004d6c78)[(&DAT_004d6ef4)[iVar2 * 0x5d]] = 0;
  (&DAT_004d6ef4)[iVar2 * 0x5d] = param_1;
  (&DAT_004d6c78)[param_1] = 0;
  if (1 < iVar3) {
    uVar5 = 0xffffffff;
    pcVar8 = (&PTR_s_GForce_004b4940)[param_1];
    do {
      pcVar9 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar7 = (undefined4 *)(pcVar9 + -uVar5);
    puVar10 = (undefined4 *)(&DAT_004d6ef8 + iVar2 * 0x174);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined *)puVar10 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = FUN_004040a0(&DAT_004d6da0 + iVar2 * 0x174,(&PTR_s_GForce_004b4940)[param_1],
                         DAT_004d6d98);
    if (iVar2 == 0) {
      return 0;
    }
    (&DAT_004d6ce8)[param_1] = 0;
  }
  return 1;
}



int FUN_0040a330(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined local_d;
  int local_c;
  int local_8;
  uint local_4;

  iVar2 = FUN_0040a160(param_1);
  local_c = 0;
  if (((((-1 < iVar2) && (iVar4 = iVar2 * 0x174, (&DAT_004d6ef4)[iVar2 * 0x5d] == param_1)) &&
       (local_8 = param_1 * 0xc, 0.0 <= (float)(&DAT_00ec8400)[param_1 * 3])) &&
      ((0.0 <= *(float *)(&DAT_00ec8404 + local_8) && (0.0 <= *(float *)(&DAT_00ec8408 + local_8))))
      ) && (puVar1 = &DAT_004d6da0 + iVar4, *(int *)(&DAT_004d6da4 + iVar4) != 0)) {
    iVar2 = FUN_00404280(puVar1);
    if (iVar2 == 0) {
      local_c = 1;
    }
    if ((local_c == 0) && ((&DAT_004d6c78)[param_1] == param_2)) {
      return 1;
    }
    iVar2 = FUN_00404670(puVar1,&local_d);
    if (iVar2 != 0) {
      uVar6 = *(uint *)(&DAT_004d6dd4 + iVar4);
      local_4 = uVar6;
      puVar3 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(uVar6);
      puVar7 = *(undefined4 **)(&DAT_004d6ef0 + iVar4);
      puVar8 = puVar3;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)puVar8 = *(undefined *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      iVar4 = __ftol();
      iVar2 = local_c;
      puVar3[1] = iVar4;
      puVar3[2] = iVar4;
      if (DAT_004d55d4 == 0) {
        iVar4 = ((int)puVar3[7] / iVar4) * param_2;
        puVar3[7] = iVar4;
        puVar3[8] = iVar4;
      }
      (&DAT_004d6c78)[param_1] = param_2;
      iVar4 = FUN_00404590(puVar1,local_4,puVar3,local_c);
      (**(code **)(DAT_00ecc420 + 0x24))(puVar3);
      if ((iVar4 != 0) && (iVar2 != 0)) {
        (&DAT_004d6ce8)[param_1] = 1;
      }
      return iVar4;
    }
  }
  return 0;
}



int FUN_0040a500(int param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined local_9;
  int local_8;
  undefined *local_4;

  iVar3 = FUN_0040a160(param_1);
  local_8 = 0;
  if ((((-1 < iVar3) && (iVar5 = iVar3 * 0x174, (&DAT_004d6ef4)[iVar3 * 0x5d] == param_1)) &&
      (0.0 <= (float)(&DAT_00ec8400)[param_1 * 3])) &&
     ((0.0 <= *(float *)(&DAT_00ec8404 + param_1 * 0xc) &&
      (0.0 <= *(float *)(&DAT_00ec8408 + param_1 * 0xc))))) {
    puVar1 = &DAT_004d6da0 + iVar5;
    if (*(int *)(&DAT_004d6da4 + iVar5) != 0) {
      local_4 = puVar1;
      iVar3 = FUN_00404280(puVar1);
      if (iVar3 == 0) {
        local_8 = 1;
      }
      if ((local_8 == 0) && ((&DAT_004d6c78)[param_1] == param_2)) {
        return 1;
      }
      iVar3 = FUN_00404670(puVar1,&local_9);
      if (iVar3 != 0) {
        uVar2 = *(uint *)(&DAT_004d6dd4 + iVar5);
        puVar4 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(uVar2);
        iVar3 = local_8;
        puVar7 = *(undefined4 **)(&DAT_004d6ef0 + iVar5);
        puVar8 = puVar4;
        for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined *)puVar8 = *(undefined *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        puVar4[3] = param_2;
        (&DAT_004d6c78)[param_1] = param_2;
        iVar5 = FUN_00404590(local_4,uVar2,puVar4,local_8);
        (**(code **)(DAT_00ecc420 + 0x24))(puVar4);
        if ((iVar5 != 0) && (iVar3 != 0)) {
          (&DAT_004d6ce8)[param_1] = 1;
        }
        return iVar5;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040a680(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_00ec8400;
  for (iVar1 = 0x54; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (DAT_00ec83e0 == 0) {
    DAT_004b493c = 0xbf800000;
  }
  else if (DAT_00ec83e0 == 1) {
    DAT_004b493c = 0x3f19999a;
  }
  else {
    DAT_004b493c = 0x3f4ccccd;
    if (DAT_00ec83e0 != 2) {
      DAT_004b493c = 0x3f800000;
    }
  }
  if (DAT_00ec83e4 == 0) {
    DAT_00ec84d0 = 0xbf800000;
  }
  else if (DAT_00ec83e4 == 1) {
    DAT_00ec84d0 = 0x3f19999a;
  }
  else {
    DAT_00ec84d0 = 0x3f4ccccd;
    if (DAT_00ec83e4 != 2) {
      DAT_00ec84d0 = 0x3f800000;
    }
  }
  _DAT_00ec8404 = 0xbf800000;
  if (DAT_00ec83f8 != 0) {
    _DAT_00ec8404 = 0x3f800000;
  }
  _DAT_00ec8518 = 0xbf800000;
  if (DAT_00ec83fc != 0) {
    _DAT_00ec8518 = 0x3f800000;
  }
  if (DAT_00ec83e8 == 0) {
    _DAT_00ec84e8 = 0xbf800000;
  }
  else if (DAT_00ec83e8 == 1) {
    _DAT_00ec84e8 = 0x3f19999a;
  }
  else {
    _DAT_00ec84e8 = 0x3f4ccccd;
    if (DAT_00ec83e8 != 2) {
      _DAT_00ec84e8 = 0x3f800000;
    }
  }
  if (DAT_00ec83e8 == 0) {
    _DAT_00ec84f4 = 0xbf800000;
  }
  else if (DAT_00ec83e8 == 1) {
    _DAT_00ec84f4 = 0x3f19999a;
  }
  else {
    _DAT_00ec84f4 = 0x3f4ccccd;
    if (DAT_00ec83e8 != 2) {
      _DAT_00ec84f4 = 0x3f800000;
    }
  }
  if (DAT_00ec83f4 == 0) {
    _DAT_00ec8434 = 0xbf800000;
  }
  else if (DAT_00ec83f4 == 1) {
    _DAT_00ec8434 = 0x3f19999a;
  }
  else {
    _DAT_00ec8434 = 0x3f4ccccd;
    if (DAT_00ec83f4 != 2) {
      _DAT_00ec8434 = 0x3f800000;
    }
  }
  if (DAT_00ec83f4 == 0) {
    _DAT_00ec8440 = 0xbf800000;
  }
  else if (DAT_00ec83f4 == 1) {
    _DAT_00ec8440 = 0x3f19999a;
  }
  else {
    _DAT_00ec8440 = 0x3f4ccccd;
    if (DAT_00ec83f4 != 2) {
      _DAT_00ec8440 = 0x3f800000;
    }
  }
  if (DAT_00ec83f4 == 0) {
    _DAT_00ec8458 = 0xbf800000;
  }
  else if (DAT_00ec83f4 == 1) {
    _DAT_00ec8458 = 0x3f19999a;
  }
  else {
    _DAT_00ec8458 = 0x3f4ccccd;
    if (DAT_00ec83f4 != 2) {
      _DAT_00ec8458 = 0x3f800000;
    }
  }
  if (DAT_00ec83f4 == 0) {
    _DAT_00ec8464 = 0xbf800000;
  }
  else if (DAT_00ec83f4 == 1) {
    _DAT_00ec8464 = 0x3f19999a;
  }
  else {
    _DAT_00ec8464 = 0x3f4ccccd;
    if (DAT_00ec83f4 != 2) {
      _DAT_00ec8464 = 0x3f800000;
    }
  }
  if (DAT_00ec83f4 == 0) {
    _DAT_00ec847c = 0xbf800000;
  }
  else if (DAT_00ec83f4 == 1) {
    _DAT_00ec847c = 0x3f19999a;
  }
  else {
    _DAT_00ec847c = 0x3f4ccccd;
    if (DAT_00ec83f4 != 2) {
      _DAT_00ec847c = 0x3f800000;
    }
  }
  if (DAT_00ec83f4 == 0) {
    _DAT_00ec8488 = 0xbf800000;
  }
  else if (DAT_00ec83f4 == 1) {
    _DAT_00ec8488 = 0x3f19999a;
  }
  else {
    _DAT_00ec8488 = 0x3f4ccccd;
    if (DAT_00ec83f4 != 2) {
      _DAT_00ec8488 = 0x3f800000;
    }
  }
  if (DAT_00ec83f4 == 0) {
    _DAT_00ec841c = 0xbf800000;
  }
  else if (DAT_00ec83f4 == 1) {
    _DAT_00ec841c = 0x3f19999a;
  }
  else {
    _DAT_00ec841c = 0x3f4ccccd;
    if (DAT_00ec83f4 != 2) {
      _DAT_00ec841c = 0x3f800000;
    }
  }
  if (DAT_00ec83f4 == 0) {
    _DAT_00ec844c = 0xbf800000;
  }
  else if (DAT_00ec83f4 == 1) {
    _DAT_00ec844c = 0x3f19999a;
  }
  else {
    _DAT_00ec844c = 0x3f4ccccd;
    if (DAT_00ec83f4 != 2) {
      _DAT_00ec844c = 0x3f800000;
    }
  }
  if (DAT_00ec83f0 == 0) {
    _DAT_00ec8470 = 0xbf800000;
  }
  else if (DAT_00ec83f0 == 1) {
    _DAT_00ec8470 = 0x3f19999a;
  }
  else {
    _DAT_00ec8470 = 0x3f4ccccd;
    if (DAT_00ec83f0 != 2) {
      _DAT_00ec8470 = 0x3f800000;
    }
  }
  if (DAT_00ec83ec == 0) {
    _DAT_00ec850c = 0xbf800000;
  }
  else if (DAT_00ec83ec == 1) {
    _DAT_00ec850c = 0x3f19999a;
  }
  else {
    _DAT_00ec850c = 0x3f4ccccd;
    if (DAT_00ec83ec != 2) {
      _DAT_00ec850c = 0x3f800000;
    }
  }
  if (DAT_00ec83ec == 0) {
    _DAT_00ec8548 = 0xbf800000;
  }
  else if (DAT_00ec83ec == 1) {
    _DAT_00ec8548 = 0x3f19999a;
  }
  else {
    _DAT_00ec8548 = 0x3f4ccccd;
    if (DAT_00ec83ec != 2) {
      _DAT_00ec8548 = 0x3f800000;
    }
  }
  if (DAT_00ec83ec == 0) {
    _DAT_00ec8410 = 0xbf800000;
  }
  else if (DAT_00ec83ec == 1) {
    _DAT_00ec8410 = 0x3f19999a;
  }
  else {
    _DAT_00ec8410 = 0x3f4ccccd;
    if (DAT_00ec83ec != 2) {
      _DAT_00ec8410 = 0x3f800000;
    }
  }
  if (DAT_00ec83ec == 0) {
    _DAT_00ec8500 = 0xbf800000;
  }
  else if (DAT_00ec83ec == 1) {
    _DAT_00ec8500 = 0x3f19999a;
  }
  else {
    _DAT_00ec8500 = 0x3f4ccccd;
    if (DAT_00ec83ec != 2) {
      _DAT_00ec8500 = 0x3f800000;
    }
  }
  if (DAT_00ec83ec == 0) {
    _DAT_00ec853c = 0xbf800000;
  }
  else if (DAT_00ec83ec == 1) {
    _DAT_00ec853c = 0x3f19999a;
  }
  else {
    _DAT_00ec853c = 0x3f4ccccd;
    if (DAT_00ec83ec != 2) {
      _DAT_00ec853c = 0x3f800000;
    }
  }
  _DAT_00ec84a0 = 0x3f800000;
  _DAT_00ec8494 = 0x3f800000;
  _DAT_00ec8428 = 0x3f800000;
  _DAT_00ec84dc = 0x3f800000;
  _DAT_00ec8524 = 0x3f800000;
  _DAT_00ec8530 = 0x3f800000;
  _DAT_00ec84ac = 0x3f800000;
  _DAT_00ec84b8 = 0x3f800000;
  _DAT_00ec84c4 = 0x3f800000;
  return;
}



void FUN_0040ab60(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  puVar2 = &DAT_004b4ae8;
  puVar3 = &DAT_00ec83e0;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0040a680();
  return;
}



undefined4 FUN_0040ab80(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined local_140 [32];
  undefined local_120 [32];
  undefined local_100 [256];

  FUN_0049eb80(local_100,s__s_s__s_004b4830,s___data_config__004b252c,param_1,s_force_cfg_004b4d64);
  iVar1 = FUN_004877d0(local_100);
  if (iVar1 == 0) {
    FUN_00487960();
    return 0xffffffff;
  }
  FUN_0049eb80(local_120,s_FORCEFEEDBACK_004b4d54);
  iVar1 = FUN_004879f0(s___________s_SETTINGS_004b4810,local_120);
  if (iVar1 == 0) {
    FUN_0049eb80(local_140,s_STRENGTH__i_004b4d48,DAT_00ec83e0);
    iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
    if (iVar1 == 0) {
      FUN_0049eb80(local_140,s_AUTOCENTER__i_004b4d38,DAT_00ec83e4);
      iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
      if (iVar1 == 0) {
        FUN_0049eb80(local_140,s_COLLISIONS__i_004b4d28,DAT_00ec83e8);
        iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
        if (iVar1 == 0) {
          FUN_0049eb80(local_140,s_DAMAGE__i_004b4d1c,DAT_00ec83ec);
          iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
          if (iVar1 == 0) {
            FUN_0049eb80(local_140,s_TERRAIN__i_004b4d10,DAT_00ec83f0);
            iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
            if (iVar1 == 0) {
              FUN_0049eb80(local_140,s_PODACTIONS__i_004b4d00,DAT_00ec83f4);
              iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
              if (iVar1 == 0) {
                puVar2 = &DAT_004b480c;
                if (DAT_00ec83f8 == 0) {
                  puVar2 = &DAT_004b4808;
                }
                FUN_0049eb80(local_140,s_GFORCES__s_004b4cf4,puVar2);
                iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                if (iVar1 == 0) {
                  puVar2 = &DAT_004b480c;
                  if (DAT_00ec83fc == 0) {
                    puVar2 = &DAT_004b4808;
                  }
                  FUN_0049eb80(local_140,s_ENGINERUMBLE__s_004b4ce4,puVar2);
                  iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                  if (iVar1 == 0) {
                    pcVar3 = &DAT_004b3e04;
                    if (DAT_004b2910 == 0) {
                      pcVar3 = s_FALSE_004b4cdc;
                    }
                    FUN_0049eb80(local_140,s_ENABLED__s_004b4cd0,pcVar3);
                    iVar1 = FUN_004879f0(s___28s__28s_004b3d10,local_120,local_140);
                    if (iVar1 == 0) {
                      iVar1 = FUN_004879a0(s__end__004b3cd8);
                      if (iVar1 == 0) {
                        FUN_00487960();
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00487960();
  return 0;
}



undefined4 FUN_0040ae40(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  undefined local_100 [256];

  FUN_0049eb80(local_100,s__s_s__s_004b4830,s___data_config__004b252c,param_1,s_force_cfg_004b4d64);
  iVar2 = FUN_004877b0(local_100);
  if (iVar2 == 0) {
    FUN_00487900();
    return 0xffffffff;
  }
  iVar2 = FUN_00487ae0();
  while (iVar2 != 0) {
    pbVar4 = &DAT_004b3e7c;
    pbVar3 = DAT_00ec8e84;
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_0040aed4:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_0040aed9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_0040aed4;
      pbVar3 = pbVar3 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_0040aed9:
    if (iVar2 == 0) break;
    iVar2 = FUN_0049ec50(DAT_00ec8e84,s_FORCEFEEDBACK_004b4d54);
    if (iVar2 == 0) {
      iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_STRENGTH_004b4dbc);
      if (iVar2 == 0) {
        DAT_00ec83e0 = FUN_0049f0e0(DAT_00ec8e90);
      }
      else {
        iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_AUTOCENTER_004b4db0);
        if (iVar2 == 0) {
          DAT_00ec83e4 = FUN_0049f0e0(DAT_00ec8e90);
        }
        else {
          iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_COLLISIONS_004b4da4);
          if (iVar2 == 0) {
            DAT_00ec83e8 = FUN_0049f0e0(DAT_00ec8e90);
          }
          else {
            iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_DAMAGE_004b4d9c);
            if (iVar2 == 0) {
              DAT_00ec83ec = FUN_0049f0e0(DAT_00ec8e90);
            }
            else {
              iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_TERRAIN_004b4d94);
              if (iVar2 == 0) {
                DAT_00ec83f0 = FUN_0049f0e0(DAT_00ec8e90);
              }
              else {
                iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_PODACTIONS_004b4d88);
                if (iVar2 == 0) {
                  DAT_00ec83f4 = FUN_0049f0e0(DAT_00ec8e90);
                }
                else {
                  iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_GFORCES_004b4d80);
                  if (iVar2 == 0) {
                    iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                    DAT_00ec83f8 = (uint)(iVar2 == 0);
                  }
                  else {
                    iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_ENGINERUMBLE_004b4d70);
                    if (iVar2 == 0) {
                      iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b480c);
                      DAT_00ec83fc = (uint)(iVar2 == 0);
                    }
                    else {
                      iVar2 = FUN_0049ec50(DAT_00ec8e8c,s_ENABLED_004b3e0c);
                      if (iVar2 != 0) {
                        FUN_00487900();
                        return 0;
                      }
                      if ((DAT_004b4938 != 0) && (DAT_004b2914 != 0)) {
                        iVar2 = FUN_0049ec50(DAT_00ec8e90,&DAT_004b3e04);
                        DAT_004b2910 = 1;
                        if (iVar2 == 0) goto LAB_0040b0d6;
                      }
                      DAT_004b2910 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_0040b0d6:
    iVar2 = FUN_00487ae0();
  }
  FUN_00487900();
  FUN_0040a680();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040b110(int param_1)

{
  DAT_004d78a8 = param_1;
  DAT_004d78a4 = *(undefined4 *)(param_1 + 0x1e70);
  _DAT_004d7898 = *(undefined4 *)(param_1 + 0x7c);
  _DAT_004d7770 = 0;
  _DAT_004d7660 = 0x45cb2000;
  _DAT_004d7780 = 0xc77fff00;
  return;
}



void FUN_0040b150(undefined4 param_1,undefined4 param_2)

{
  if ((((DAT_004b2910 != 0) && (DAT_004d78a4 != 0)) && (*(int *)(DAT_004d78a4 + 0x84) != 0)) &&
     (((DAT_004d78a8 != 0 && (DAT_004d789c != 0)) &&
      ((*(uint *)(DAT_004d78a8 + 0x60) & 0x5000) == 0)))) {
    FUN_0040b1c0(param_1,param_2);
    FUN_0040b3d0(param_1,param_2);
    FUN_0040b5e0(param_1,param_2);
  }
  return;
}



void FUN_0040b1c0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 uVar7;
  uint local_10;
  int local_c;

  iVar3 = DAT_004d78a8;
  local_10 = 0;
  local_c = 0;
  if ((*(uint *)(DAT_004d78a8 + 100) & 0x4000) != 0) {
    FUN_00409ee0(0x16,0xffffffff,0xffffffff,0xffffffff,0);
    FUN_00409ee0(9,0xffffffff,0xffffffff,0xffffffff,0);
    return;
  }
  if (1.0 <= *(float *)(DAT_004d78a8 + 0x244)) {
    FUN_0040a500(0x17,8000);
    DAT_004d78b0 = 0;
    iVar3 = DAT_004d78a8;
  }
  else {
    iVar2 = __ftol();
    iVar4 = iVar2 - DAT_004b4dcc;
    if (iVar4 < 0) {
      iVar4 = DAT_004b4dcc - iVar2;
    }
    if (19999 < iVar4) {
      FUN_0040a500(0x17,iVar2);
      iVar3 = DAT_004d78a8;
      DAT_004b4dcc = iVar2;
    }
    DAT_004d78b0 = 1;
  }
  iVar2 = 0;
  if ((*(byte *)(iVar3 + 100) & 1) == 0) {
    FUN_0040a0b0(9);
  }
  else {
    FUN_00409ee0(9,0xffffffff,0xffffffff,0xffffffff,0);
  }
  if ((*(uint *)(DAT_004d78a8 + 100) & 0x200) == 0) {
    FUN_0040a0b0(0xd);
    if ((((*(int *)(DAT_004d78a8 + 0x140) == 0) || (*(float *)(DAT_004d78a8 + 0x1a0) <= 50.0)) ||
        (iVar3 = FUN_004318b0(*(int *)(DAT_004d78a8 + 0x140)), iVar3 == 0)) ||
       ((*(byte *)(iVar3 + 0x2c) & 0x20) == 0)) goto LAB_0040b32d;
    uVar7 = 0xc;
  }
  else {
    uVar7 = 0xd;
  }
  FUN_00409ee0(uVar7,0xffffffff,0xffffffff,0xffffffff,0);
LAB_0040b32d:
  uVar5 = 0;
  fVar1 = -1.0;
  pfVar6 = (float *)(DAT_004d78a8 + 0x288);
  do {
    if (fVar1 < *pfVar6) {
      fVar1 = *pfVar6;
      local_10 = local_10 | (uint)pfVar6[6];
      if (uVar5 < 3) {
        local_c = local_c + 1;
      }
      else {
        iVar2 = iVar2 + 1;
      }
    }
    uVar5 = uVar5 + 1;
    pfVar6 = pfVar6 + 1;
  } while ((int)uVar5 < 6);
  if ((local_10 & 8) != 0) {
    FUN_00409ee0(0x1a,0xffffffff,(uint)(local_c < iVar2) * 0xb4 + 0x5a,0xffffffff,0);
    return;
  }
  FUN_0040a0b0(0x1a);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040b3d0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;

  fVar1 = *(float *)(DAT_004d78a8 + 0x1a0) / _DAT_004d7898;
  if ((((_DAT_004d7780 == -65535.0) || (DAT_004d78ac == 0)) || (DAT_004d78a0 != 0)) &&
     (iVar3 = FUN_00409ee0(0,0xffffffff,0xffffffff,0xffffffff,0), iVar3 != 0)) {
    DAT_004d78ac = 1;
    DAT_004d78a0 = 0;
  }
  fVar2 = _DAT_004d78b4 - fVar1;
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  _DAT_004b4dd0 = (uint)(0.1 < fVar2);
  if (_DAT_004b4dd0 == 0) {
    if (DAT_004d78b8 == 0) {
      if ((_DAT_004d7898 <= fVar1) || (fVar1 == _DAT_004d7770)) {
        _DAT_004b4dd0 = 1;
        DAT_004d78b8 = _DAT_004b4dd0;
      }
      else {
        _DAT_004b4dd0 = 0;
        DAT_004d78b8 = _DAT_004b4dd0;
      }
    }
  }
  else {
    DAT_004d78b8 = 0;
  }
  fVar2 = _DAT_004d78b4;
  if (_DAT_004b4dd0 != 0) {
    __ftol();
    iVar3 = __ftol();
    if ((*(uint *)(DAT_004d78a8 + 0x60) & 0x800000) == 0) {
      if (500.0 <= (float)iVar3) {
        iVar4 = DAT_004d78c0 - iVar3;
        if (iVar4 < 0) {
          iVar4 = iVar3 - DAT_004d78c0;
        }
        if (iVar4 < 500) {
          iVar3 = DAT_004d78c0;
        }
      }
      else {
        iVar3 = 500;
      }
    }
    else {
      iVar3 = 0x251c;
    }
    FUN_0040a330(0,iVar3);
    fVar2 = fVar1;
    DAT_004d78c0 = iVar3;
    if (DAT_004d78b0 == 0) {
      iVar3 = __ftol();
      iVar4 = DAT_004d78bc - iVar3;
      if (iVar4 < 0) {
        iVar4 = iVar3 - DAT_004d78bc;
      }
      if (iVar4 < 10) {
        iVar3 = DAT_004d78bc;
      }
      DAT_004d78bc = iVar3;
      FUN_00409ee0(0x17,DAT_004d78bc,0xffffffff,0xffffffff,0);
    }
  }
  _DAT_004d78b4 = fVar2;
  _DAT_004d7780 = fVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040b5e0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;

  if ((*(uint *)(DAT_004d78a8 + 100) & 0x2000) == 0) {
    uVar2 = *(uint *)(DAT_004d78a8 + 0x60) & 0x800000;
    if ((uVar2 == 0) || (DAT_004d78c8 != 0)) {
      if ((uVar2 == 0) && (DAT_004d78c8 != 0)) {
        FUN_00409ee0(8,0xffffffff,0xffffffff,0xffffffff,0);
        DAT_004d78c8 = 0;
      }
    }
    else {
      FUN_00409ee0(7,0xffffffff,0xffffffff,0xffffffff,0);
      DAT_004d78c8 = 1;
    }
  }
  else {
    FUN_00409ee0(6,0xffffffff,0xffffffff,0xffffffff,0);
  }
  if (((*(uint *)(DAT_004d78a8 + 100) & 8) == 0) || (_DAT_00ec8854 == 0.0)) {
    iVar1 = FUN_0040a0b0(2);
    if (iVar1 != 0) {
      DAT_004d78ac = 0;
    }
  }
  else if ((*(uint *)(DAT_004d78a8 + 100) & 0x200) == 0) {
    FUN_00409ee0(2,0xffffffff,0xffffffff,0xffffffff,0);
  }
  iVar1 = DAT_004d78a8;
  if (*(float *)(DAT_004d78a8 + 0x208) != 0.0) {
    if (_DAT_004d78c4 != 0.0) {
      uVar2 = __ftol();
      uVar3 = __ftol();
      if (-1 < (int)(uVar2 ^ uVar3)) goto LAB_0040b71c;
    }
    if (0.0 <= *(float *)(iVar1 + 0x208)) {
      uVar4 = 0x10e;
    }
    else {
      uVar4 = 0x5a;
    }
    FUN_00409ee0(10,0xffffffff,uVar4,0xffffffff,0);
  }
LAB_0040b71c:
  _DAT_004d78c4 = (float)*(undefined4 *)(DAT_004d78a8 + 0x208);
  return;
}



void FUN_0040b731(void)

{
  FUN_00422c0d();
  return;
}



void FUN_0040b740(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined local_40 [64];

  FUN_0040c670(param_1,param_2,0x27,0,10,0,1);
  FUN_0040c670(param_1,param_2,0x29,1,10,0,1);
  FUN_0040c670(param_1,param_2,0x2b,2,10,0,1);
  FUN_0040c670(param_1,param_2,0x2d,3,10,0,1);
  FUN_0040c670(param_1,param_2,0x2f,4,10,0,1);
  FUN_0040c670(param_1,param_2,0x31,5,10,0,1);
  FUN_0040c670(param_1,param_2,0x33,6,10,0,1);
  FUN_0040c670(param_1,param_2,0x35,7,10,0,1);
  FUN_0040c670(param_1,param_2,0x37,8,10,0,1);
  FUN_0040c670(param_1,param_2,0x39,9,10,0,1);
  if ((param_1 == 0) && (DAT_004d55d4 != 0)) {
    FUN_0040c670(0,param_2,0x40,3,9,0x20,1);
    FUN_0040c670(0,param_2,0x43,3,9,0x10,1);
  }
  if (param_1 == 2) {
    FUN_0040c670(2,param_2,0x40,3,9,0x20,1);
    FUN_0040c670(2,param_2,0x46,2,9,0x20,1);
    FUN_0040c670(2,param_2,0x49,2,9,0x10,1);
    FUN_0040c670(2,param_2,0x43,3,9,0x10,1);
    FUN_0040c670(2,param_2,0x41,3,9,0x20,2);
    FUN_0040c670(2,param_2,0x47,2,9,0x20,2);
    FUN_0040c670(2,param_2,0x4a,2,9,0x10,2);
    FUN_0040c670(2,param_2,0x44,3,9,0x10,2);
    FUN_0040c670(2,param_2,0x42,3,9,0x20,3);
    FUN_0040c670(2,param_2,0x48,2,9,0x20,3);
    FUN_0040c670(2,param_2,0x4b,2,9,0x10,3);
    FUN_0040c670(2,param_2,0x45,3,9,0x10,3);
    FUN_0040c670(2,param_2,0x28,0,10,0,2);
    FUN_0040c670(2,param_2,0x2a,1,10,0,2);
    FUN_0040c670(2,param_2,0x2c,2,10,0,2);
    FUN_0040c670(2,param_2,0x2e,3,10,0,2);
    FUN_0040c670(2,param_2,0x30,4,10,0,2);
    FUN_0040c670(2,param_2,0x32,5,10,0,2);
    FUN_0040c670(2,param_2,0x34,6,10,0,2);
    FUN_0040c670(2,param_2,0x36,7,10,0,2);
    FUN_0040c670(2,param_2,0x38,8,10,0,2);
    FUN_0040c670(2,param_2,0x3a,9,10,0,2);
  }
  else {
    FUN_0040c670(param_1,param_2,0x3d,0,5,0,1);
    FUN_0040c670(param_1,param_2,0x3e,2,5,0,1);
    FUN_0040c670(param_1,param_2,0x3f,3,5,0,1);
    FUN_0040c670(param_1,param_2,0x3c,6,6,0,1);
    FUN_0040c670(param_1,param_2,0x3b,2,6,0,1);
    puVar3 = &DAT_00ec8880;
    if (param_1 != 0) {
      puVar3 = &DAT_00ec8790;
    }
    uVar1 = FUN_00414d90(param_2,0x55);
    FUN_00414420(uVar1,*puVar3);
    uVar1 = FUN_00414d90(param_2,0x56);
    FUN_00414420(uVar1,puVar3[1]);
    iVar2 = FUN_00414d90(param_2,0x57);
    if (iVar2 != 0) {
      FUN_00414420(iVar2,puVar3[2]);
    }
    if (param_1 == 0) {
      iVar2 = FUN_00414d90(param_2,0x4d);
      if (iVar2 != 0) {
        FUN_00419db0(iVar2,*(uint *)(iVar2 + 0x20) & 0x1000);
      }
      iVar2 = FUN_00414d90(param_2,0x4e);
      if (iVar2 != 0) {
        FUN_00419db0(iVar2,*(uint *)(iVar2 + 0x20) & 0x1000);
      }
      uVar1 = FUN_00414d90(param_2,0x54);
      FUN_00414420(uVar1,DAT_004b2944);
      uVar1 = DAT_00ec87a0;
      uVar4 = DAT_00ec879c;
    }
    else {
      iVar2 = FUN_00414d90(param_2,0x4e);
      if (iVar2 != 0) {
        FUN_00419db0(iVar2,*(uint *)(iVar2 + 0x20) & 0x1000);
      }
      uVar1 = FUN_00414d90(param_2,0x54);
      FUN_00414420(uVar1,DAT_004d6b38);
      uVar1 = DAT_00ec878c;
      uVar4 = DAT_00ec8770;
    }
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0238_Detected___i_A_004b4e58,uVar1,uVar4);
    FUN_0049eb80(local_40,uVar1);
    iVar2 = FUN_00414d90(param_2,0x58);
    if (iVar2 != 0) {
      FUN_00414b80(iVar2,local_40,0);
      return;
    }
  }
  return;
}



void FUN_0040bbf0(undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = FUN_00414d90(param_1,0x62);
  FUN_00414420(uVar1,DAT_00ec86a0);
  uVar1 = FUN_00414d90(param_1,0x273b);
  FUN_00414420(uVar1,DAT_00ec86b0);
  uVar1 = FUN_00414d90(param_1,0x273c);
  FUN_00414420(uVar1,DAT_00ec86b4);
  uVar1 = FUN_00414d90(param_1,0x67);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec86bc);
  FUN_00414420(uVar1,1);
  return;
}



void FUN_0040bc80(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  char *pcVar7;
  undefined local_40 [64];

  uVar1 = FUN_00414d90(param_1,0x2741);
  FUN_00414420(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x2744);
  FUN_00414420(uVar1,DAT_004b6d14);
  uVar1 = FUN_00414d90(param_1,0x2742);
  FUN_00414420(uVar1,DAT_0050d550);
  uVar1 = FUN_00414d90(param_1,0x2743);
  FUN_00414420(uVar1,DAT_004b6d18);
  uVar1 = FUN_00414d90(param_1,0x2746);
  FUN_00414420(uVar1,DAT_004b6d28);
  uVar1 = FUN_00414d90(param_1,0x2747);
  FUN_00414420(uVar1,DAT_004eb45c);
  if (DAT_004eb458 == 0) {
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0243_NO_SOUND_CARD_D_004b4e88);
    FUN_0049eb80(local_40,uVar1);
  }
  else {
    uVar2 = FUN_00485340();
    if (DAT_0050d55c == 0) {
      puVar6 = &DAT_004b3b2c;
    }
    else {
      if ((uVar2 & 8) == 0) {
        pcVar7 = s__MONDOTEXT_H_0242___DIRECTSOUND__004b4f04;
      }
      else {
        pcVar7 = s__MONDOTEXT_H_0241___A3D__004b4f28;
      }
      puVar6 = (undefined2 *)FUN_00421360(pcVar7);
    }
    if (DAT_0050d55c == 0) {
      puVar3 = (undefined1 *)FUN_00421360(s__MONDOTEXT_H_0240_NO_004b4eec);
    }
    else {
      puVar3 = &DAT_004d55cc;
    }
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0239__sHardware_acc_004b4eb4,puVar3,puVar6);
    FUN_0049eb80(local_40,uVar1);
  }
  iVar4 = FUN_00414d90(param_1,0x58);
  if (iVar4 != 0) {
    FUN_00414b80(iVar4,local_40,*(undefined4 *)(iVar4 + 0x4d8));
    FUN_00414be0(iVar4,0xff,0xff,0,200);
    FUN_00418cb0(iVar4,1);
    FUN_004130e0(iVar4,0,DAT_004eb458 == 0);
  }
  uVar1 = FUN_00414d90(param_1,0x273e);
  FUN_00413b60(uVar1,((uint)DAT_00e364a5 * 100) / 0xff);
  uVar1 = FUN_00414d90(param_1,0x273f);
  FUN_00413b60(uVar1,((uint)DAT_00e364a6 * 100) / 0xff);
  uVar1 = FUN_00414d90(param_1,0x2740);
  uVar5 = __ftol();
  FUN_00413b60(uVar1,uVar5);
  uVar5 = __ftol();
  FUN_00413b30(uVar1,uVar5);
  uVar1 = FUN_00414d90(param_1,0x2743);
  if ((DAT_004b6d20 == 0) || (uVar5 = DAT_0050d550, DAT_004eb458 == 0)) {
    uVar5 = 0;
  }
  FUN_00414e60(uVar1,uVar5);
  uVar1 = FUN_00414d90(param_1,0x2740);
  if ((DAT_004b6d20 == 0) || (uVar5 = DAT_0050d550, DAT_004eb458 == 0)) {
    uVar5 = 0;
  }
  FUN_00414e60(uVar1,uVar5);
  uVar1 = FUN_00414d90(param_1,0x2712);
  if ((DAT_004b6d20 == 0) || (uVar5 = DAT_0050d550, DAT_004eb458 == 0)) {
    uVar5 = 0;
  }
  FUN_00414e60(uVar1,uVar5);
  uVar1 = FUN_00414d90(param_1,0x2742);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x2744);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x273e);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x273f);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,10000);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x2711);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x2746);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x2747);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  return;
}
#endif
