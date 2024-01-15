#include "prototype.h"


undefined4 FUN_0041f0e0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0x78;
  local_c = 0x5a;
  local_8 = 0x207;
  local_4 = 0x185;
  iVar1 = FUN_00413130(0,&local_10,0x186ab,&LAB_0041f330);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0402__sJoin_A_Game_004b6968,400,0x28,0,0);
  FUN_004131c0(iVar1,0,6,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0399__sEnter_your_n_004b68f4,0xdc,0x78,0,0);
  uVar2 = FUN_004131c0(iVar1,0,6,uVar2);
  local_10 = 0;
  local_c = 0x91;
  local_8 = 299;
  local_4 = 0xb8;
  uVar3 = FUN_00413430(iVar1,0x186af,&local_10,0,0,0);
  FUN_00411440(uVar3,1,0);
  FUN_00413500(uVar3,0x10);
  FUN_00411390(uVar2,uVar3,1);
  FUN_00420a90(uVar3);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0401__sEnter_a_pass_004b68a4,0xdc,200,0,0);
  uVar2 = FUN_004131c0(iVar1,0,6,uVar2);
  local_10 = 0;
  local_c = 0xe1;
  local_8 = 299;
  local_4 = 0x108;
  uVar3 = FUN_00413430(iVar1,0x186b1,&local_10,0,0,0);
  FUN_00411440(uVar3,1,0);
  FUN_00413500(uVar3,0x10);
  FUN_00411390(uVar2,uVar3,1);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0403__sChoose_a_gam_004b693c,0xdc,0x118,0,0);
  uVar2 = FUN_004131c0(iVar1,0,6,uVar2);
  local_10 = 0;
  local_c = 0x131;
  local_8 = 299;
  local_4 = 0x1a8;
  uVar3 = FUN_00413520(iVar1,0x186b2,&local_10,0,0,0);
  FUN_00411440(uVar3,1,0);
  FUN_00411390(uVar2,uVar3,1);
  FUN_00411170(iVar1,3,0,0x1a4,2);
  uVar2 = FUN_00411210(iVar1,0x208,0x17c);
  FUN_004114b0(uVar2);
  return 1;
}

