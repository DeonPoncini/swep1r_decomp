#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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

