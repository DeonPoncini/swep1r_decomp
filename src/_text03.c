#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_00412650(void)

{
  undefined4 uVar1;

  if (DAT_004d879c != 0) {
    FUN_00412e20();
  }
  FUN_00412e90(0x22,0);
  FUN_00412e90(0x23,0);
  FUN_00412e90(0x32,0);
  FUN_00412e90(0x45,0);
  FUN_00412e90(0x43,0);
  FUN_00412e90(0x42,0);
  FUN_00412e90(0x2c,0);
  FUN_00412e90(0x3f,0);
  FUN_00412e90(0x37,0);
  FUN_00412e90(0x47,0);
  FUN_00412e90(0x3e,0);
  FUN_00412e90(0x3a,0);
  FUN_00412e90(0x39,0);
  FUN_00412e90(0x3d,0);
  FUN_00412e90(0x38,0);
  FUN_00412e90(0x3b,0);
  FUN_00412e90(0x40,0);
  FUN_00412e90(0x35,0);
  FUN_00412e90(0x34,0);
  FUN_00412e90(0x41,0);
  FUN_00412e90(0x3c,0);
  FUN_00412e90(0x33,0);
  FUN_00412e90(0x44,0);
  FUN_00412e90(0x46,0);
  FUN_00412e90(0x36,0);
  FUN_00412e90(0x24,0);
  FUN_00412e90(0x27,0);
  FUN_00412e90(0x26,0);
  FUN_00412e90(0xf,0);
  FUN_00412e90(0,0);
  FUN_00412e90(0xc,0);
  FUN_00412e90(5,0);
  FUN_00412e90(0x12,0);
  FUN_00412e90(0xb,0);
  FUN_00412e90(8,0);
  FUN_00412e90(7,0);
  FUN_00412e90(0x25,0);
  FUN_00412e90(6,0);
  FUN_00412e90(9,0);
  FUN_00412e90(0xd,0);
  FUN_00412e90(3,0);
  FUN_00412e90(2,0);
  FUN_00412e90(0xe,0);
  FUN_00412e90(10,0);
  FUN_00412e90(1,0);
  FUN_00412e90(0x10,0);
  FUN_00412e90(0x11,0);
  FUN_00412e90(4,0);
  FUN_00412e90(1000,s_sq_brdr_b_004b6644);
  FUN_00412e90(0x3e9,s_sq_brdr_bl_004b6638);
  FUN_00412e90(0x3ea,s_sq_brdr_br_004b662c);
  FUN_00412e90(0x3eb,s_sq_brdr_l_004b6620);
  FUN_00412e90(0x3ec,s_sq_brdr_r_004b6614);
  FUN_00412e90(0x3ed,s_sq_brdr_t_004b6608);
  FUN_00412e90(0x3ee,s_sq_brdr_tl_004b65fc);
  FUN_00412e90(0x3ef,s_sq_brdr_tr_004b65f0);
  FUN_00412e90(0x3f2,s_radio_unchecked_004b65e0);
  FUN_00412e90(0x3f3,s_radio_checked_004b65d0);
  FUN_00412e90(0x3f4,s_axis_check_circ_004b65c0);
  FUN_00412e90(0x3f5,s_axis_check_circ_selected_004b65a4);
  FUN_00412e90(0x3f6,s_tiny_box_004b6598);
  FUN_00412e90(0x3f7,s_tiny_box_selected_004b6584);
  FUN_00412e90(0x44c,s_axis_check_center_004b6570);
  FUN_00412e90(0x44d,s_axis_check_end_004b6560);
  FUN_00412e90(0x44e,s_axis_check_strch_004b654c);
  FUN_00412e90(2000,s_window_end_004b6540);
  FUN_00412e90(0x7d1,s_window_strchbars_004b652c);
  FUN_00412e90(0x7d2,s_window_end_selected_004b6518);
  FUN_00412e90(0x7d3,s_window_strchbars_selected_004b64fc);
  FUN_00412e90(0x3f8,s_ok_button_004b64f0);
  FUN_00412e90(0x3f9,s_ok_button_selected_004b64dc);
  FUN_00412e90(0x7d4,s_sml_window_end_004b64cc);
  FUN_00412e90(0x7d5,s_sml_window_strch_004b64b8);
  FUN_00412e90(0x7d6,s_sml_window_end_selected_004b64a0);
  FUN_00412e90(0x7d7,s_sml_window_strch_selected_004b6484);
  FUN_00412e90(0x7d8,s_settings_btn_end_004b6470);
  FUN_00412e90(0x7d9,s_settings_btn_strch_end_004b6458);
  FUN_00412e90(0x7da,s_settings_btn_end2_004b6444);
  FUN_00412e90(0x7dc,s_settings_btn_strch_selected_004b6428);
  FUN_00412e90(0x7db,s_settings_btn_end_selected_004b640c);
  FUN_00412e90(0x7dd,s_settings_btn_end2_selected_004b63f0);
  FUN_00412e90(0x7de,s_settings_btnback_end_004b63d8);
  FUN_00412e90(3000,s_edit_window_corner_004b63c4);
  FUN_00412e90(0xbb9,s_edit_window_vert_004b63b0);
  FUN_00412e90(0xbba,s_edit_window_hor_004b63a0);
  FUN_00412e90(0xbbb,s_edit_window_bar_end_004b638c);
  FUN_00412e90(0xbbc,s_edit_window_bar_strch_004b6374);
  FUN_00412e90(0xbbd,s_edit_window_bar_end_selected_004b6354);
  FUN_00412e90(0xbbe,s_edit_window_bar_strch_selected_004b6334);
  FUN_00412e90(0xc1c,s_sml_edit_box_corner_004b6320);
  FUN_00412e90(0xc1d,s_sml_edit_box_left_004b630c);
  FUN_00412e90(0xc1e,s_sml_edit_box_bottom_004b62f8);
  FUN_00412e90(0xbbf,s_edit_window_selected_end_004b62dc);
  FUN_00412e90(0xbc0,s_edit_window_selected_strch_004b62c0);
  FUN_00412e90(0xbc1,s_editwindow_segmented_004b62a8);
  FUN_00412e90(0xbc2,s_editwindow_segmented_selected_004b6288);
  FUN_00412e90(0xbc3,s_segment_004b6280);
  FUN_00412e90(0xbc4,s_segment_selected_004b626c);
  FUN_00412e90(4000,s_undrline_tab_004b625c);
  FUN_00412e90(0xfa1,s_undrline_mid_strch_004b6248);
  FUN_00412e90(0xfa2,s_undrline_corner_004b6238);
  FUN_00412e90(0xfa3,s_sml_undrline_tab_004b6224);
  FUN_00412e90(0xfa4,s_sml_undrline_strch_004b6210);
  FUN_00412e90(0xfa5,s_sml_undrline_corner_004b61fc);
  FUN_00412e90(5000,s_sliderbar_end_004b61ec);
  FUN_00412e90(0x1389,s_sliderbar_strch_004b61dc);
  FUN_00412e90(0x138a,s_sliderbar_end_selected_004b61c4);
  FUN_00412e90(0x138b,s_sliderbar_strch_selected_004b61a8);
  FUN_00412e90(0x1392,s_vsliderbar_end_004b6198);
  FUN_00412e90(0x1393,s_vsliderbar_strch_004b6184);
  FUN_00412e90(0x1394,s_vsliderbar_end_selected_004b616c);
  FUN_00412e90(0x1395,s_vsliderbar_strch_selected_004b6150);
  FUN_00412e90(0x138c,s_slider_bracket_004b6140);
  FUN_00412e90(0x138d,s_slider_gradient_004b6130);
  FUN_00412e90(0x138e,s_slider_plus_004b6124);
  FUN_00412e90(0x138f,s_slider_minus_004b6114);
  FUN_00412e90(0x1390,s_slider_point_004b6104);
  FUN_00412e90(0x1391,s_slider_point_center_004b60f0);
  FUN_00412e90(6000,s_hline_004b60e8);
  FUN_00412e90(0x1771,s_vline_004b60e0);
  FUN_00412e90(0x1772,s_branch_004b60d8);
  FUN_00412e90(0x3f1,s_background_004b60cc);
  uVar1 = FUN_004114d0(s_data_images_background_tga_004b60b0,0xfa);
  FUN_004282f0(0xfa,uVar1);
  uVar1 = FUN_00446fb0(0x17);
  FUN_004282f0(0xf9,uVar1);
  DAT_004d879c = 1;
  return;
}



void FUN_00412e20(void)

{
  FUN_00417060(PTR_DAT_004b5d74);
  FUN_00417090();
  DAT_004d879c = 0;
  return;
}



void FUN_00412e40(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_004d8160;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (PTR_DAT_004b5d74 != (undefined *)0x0) {
    FUN_00414d00(PTR_DAT_004b5d74);
  }
  PTR_DAT_004b5d74 = (undefined *)0x0;
  FUN_00417090();
  if (DAT_004d87c4 != 0) {
    FUN_0048c050(DAT_004d87c4);
    DAT_004d87c4 = 0;
  }
  return;
}



undefined4 FUN_00412e90(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined local_400 [1024];

  iVar1 = FUN_00417010(param_1);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      FUN_0049eb80(local_400,s__s__s_tga_004b6650,s_data_images_004b665c,param_2);
      FUN_004114d0(local_400,param_1);
      return 1;
    }
    iVar1 = FUN_00446fb0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00416fd0(iVar1,param_1,0);
  }
  return 1;
}



int FUN_00412f20(undefined4 param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_00417010(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00417040();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004282f0(iVar2,iVar1);
  return iVar2;
}



void FUN_00412f60(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;

  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    puVar2 = (uint *)(param_1 + 0x68);
    do {
      uVar1 = *puVar2;
      if ((0xfa < uVar1) && (uVar1 < 400)) {
        FUN_004282f0(CONCAT22((short)(uVar1 >> 0x10),*(undefined2 *)puVar2),0);
        *puVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0xe;
    } while (iVar3 < *(int *)(param_1 + 0x5c));
  }
  return;
}



void FUN_00412fb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6)

{
  int iVar1;
  uint *puVar2;

  if (param_2 == -1) {
    if (0x13 < *(uint *)(param_1 + 0x5c)) {
      return;
    }
    iVar1 = 0;
    puVar2 = (uint *)(param_1 + 0x60);
    do {
      if ((*puVar2 & 0x10000) == 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) + 1;
        param_2 = iVar1;
        break;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0xe;
    } while (iVar1 < 0x14);
  }
  if (param_2 != -1) {
    iVar1 = param_1 + param_2 * 0x38;
    *(undefined4 *)(iVar1 + 100) = param_3;
    *(undefined4 *)(iVar1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + (param_2 + 2) * 0x38) = 0x3f800000;
    *(uint *)(iVar1 + 0x60) = param_6 | 0x10000;
    FUN_00413090(param_1,param_2,0xff,0xff,0xff,0xff);
    FUN_004171a0(param_1,param_2,param_4);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    puVar2 = (uint *)(param_1 + 0x60);
    iVar1 = 0x14;
    do {
      if ((*puVar2 & 0x10000) != 0) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      }
      puVar2 = puVar2 + 0xe;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_004130e0(param_1,param_2,param_5);
  }
  return;
}



void FUN_00413090(int param_1,int param_2,undefined param_3,undefined param_4,undefined param_5,
                 undefined param_6)

{
  if (((param_1 != 0) && (-1 < param_2)) && (param_2 < 0x14)) {
    param_1 = param_1 + param_2 * 0x38;
    *(undefined *)(param_1 + 0x94) = param_3;
    *(undefined *)(param_1 + 0x95) = param_4;
    *(undefined *)(param_1 + 0x96) = param_5;
    *(undefined *)(param_1 + 0x97) = param_6;
  }
  return;
}



void FUN_004130e0(int param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    *(uint *)(param_1 + 0x60 + param_2 * 0x38) =
         *(uint *)(param_1 + 0x60 + param_2 * 0x38) | 0x20000;
    return;
  }
  *(uint *)(param_1 + 0x60 + param_2 * 0x38) =
       *(uint *)(param_1 + 0x60 + param_2 * 0x38) & 0xfffdffff;
  return;
}



int FUN_00413130(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;

  iVar4 = 0;
  iVar2 = 0;
  local_c = 0;
  iVar3 = 0;
  iVar1 = FUN_00416d90(param_1,param_3,0xffffffff,0,0,0,0,FUN_00415850,param_4);
  if (param_2 != (int *)0x0) {
    local_c = param_2[1];
    iVar2 = *param_2;
    iVar3 = param_2[2];
    iVar4 = param_2[3];
  }
  FUN_00414b40(iVar1,(iVar3 - iVar2) + 1,(iVar4 - local_c) + 1);
  FUN_00414b60(iVar1,iVar2,local_c);
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return iVar1;
}



int FUN_004131c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00416d90(param_1,param_2,param_3,param_4,param_7,param_8,0,&LAB_00415b80,0);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 4;
  uVar2 = FUN_0042df70(param_4,(&DAT_00e99720)[*(int *)(iVar1 + 0x4dc)]);
  uVar2 = FUN_0042de30(param_4,(&DAT_00e99720)[*(int *)(iVar1 + 0x4dc)],uVar2);
  FUN_00414b40(iVar1,uVar2);
  if ((*(uint *)(iVar1 + 0x20) & 0x10000) != 0) {
    param_5 = (*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x2c)) + 0x27f >> 1;
  }
  if ((*(uint *)(iVar1 + 0x20) & 0x20000) != 0) {
    param_6 = (*(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x30)) + 0x1df >> 1;
  }
  FUN_00414b60(iVar1,param_5,param_6);
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 1;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 0x200;
  return iVar1;
}



int FUN_004132a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                uint param_9,undefined4 param_10)

{
  int iVar1;

  iVar1 = FUN_00416d90(param_1,param_2,param_3,param_4,param_9,param_10,0,&LAB_00415ca0,0);
  FUN_00414b40(iVar1,param_7,param_8);
  FUN_00414b60(iVar1,param_5,param_6);
  *(uint *)(iVar1 + 0x4f0) = param_9 & 0xffff0000;
  FUN_00414b80(iVar1,param_4,0x40000);
  FUN_00418cb0(iVar1,0);
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 2;
  return iVar1;
}



int FUN_00413340(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,uint param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00416d90(param_1,param_2,param_3,param_4,param_11,param_12,0,&LAB_00415ed0,0);
  FUN_00414b40(iVar1,param_8,param_9);
  FUN_00414b60(iVar1,param_6,param_7);
  *(uint *)(iVar1 + 0x4f0) = param_11 & 0xffff0000;
  FUN_00418cb0(iVar1,0);
  if ((*(uint *)(iVar1 + 0x4f0) & 0x400000) == 0) {
    uVar2 = 0x20000;
    if ((*(uint *)(iVar1 + 0x4f0) & 0x800000) == 0) {
      FUN_00414ae0(iVar1,0x20000);
      if (*(int *)(iVar1 + 0x4f0) != 0) {
        uVar2 = 0x120000;
      }
    }
  }
  else {
    uVar2 = 0x200000;
  }
  FUN_00414b80(iVar1,param_4,uVar2);
  FUN_00414b30(iVar1,param_10);
  FUN_004157f0(iVar1,param_3);
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 3;
  return iVar1;
}



int FUN_00413430(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,uint param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;

  iVar3 = 0;
  iVar2 = 0;
  local_10 = 0;
  local_c = 0;
  iVar1 = FUN_00416d90(param_1,param_2,param_4,0,param_5,param_6,0,&LAB_00416370,0);
  if (param_3 != (int *)0x0) {
    local_10 = *param_3;
    local_c = param_3[1];
    iVar3 = param_3[2];
    iVar2 = param_3[3];
  }
  FUN_00414b40(iVar1,(iVar3 - local_10) + 1,(iVar2 - local_c) + 1);
  FUN_00414b60(iVar1,local_10,local_c);
  FUN_00419830(iVar1,1,0);
  *(uint *)(iVar1 + 0x52c) = param_5 & 0xffff0000;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 4;
  FUN_00413500(iVar1,0x400);
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 9;
  return iVar1;
}



void FUN_00413500(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x534) = param_2;
  }
  return;
}



int FUN_00413520(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_4;

  iVar3 = 0;
  iVar4 = 0;
  iVar2 = 0;
  local_4 = 0;
  iVar1 = FUN_00416d90(param_1,param_2,param_4,0,param_5,param_6,0,&LAB_00416130,0);
  if (param_3 != (int *)0x0) {
    local_4 = param_3[3];
    iVar4 = *param_3;
    iVar2 = param_3[1];
    iVar3 = param_3[2];
  }
  FUN_00414b40(iVar1,(iVar3 - iVar4) + 1,(local_4 - iVar2) + 1);
  FUN_00414b60(iVar1,iVar4,iVar2);
  FUN_00419830(iVar1,0,0);
  FUN_004197f0(&local_20,0);
  *(int *)(iVar1 + 0x50c) = iVar4 + local_20;
  *(int *)(iVar1 + 0x510) = iVar2 + local_1c;
  *(undefined4 *)(iVar1 + 0x508) = param_5;
  *(undefined4 *)(iVar1 + 0x524) = 5;
  *(int *)(iVar1 + 0x514) = iVar3 - local_18;
  *(int *)(iVar1 + 0x518) = local_4 - local_14;
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 5;
  return iVar1;
}



void FUN_00413610(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    for (iVar2 = *(int *)(iVar1 + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (((byte)*(undefined4 *)(iVar2 + 0x18) & 0xc) == 0xc) {
        FUN_00440550(0x46);
        if (((*(uint *)(iVar1 + 0x508) & 0x100000) == 0) &&
           (((byte)*(undefined4 *)(iVar2 + 0x18) & 3) != 3)) {
          FUN_00412fb0(iVar2,0,0,0,0,0);
          FUN_00412fb0(iVar2,1,0,0,0,0);
          FUN_00412fb0(iVar2,2,0,0,0,0);
        }
        *(uint *)(iVar2 + 0x508) = *(uint *)(iVar2 + 0x508) & 0xfff7ffff;
      }
    }
    if (param_2 != 0) {
      uVar3 = *(uint *)(param_1 + 0x508) | 0x80000;
      goto LAB_004136ce;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x508) & 0xfff7ffff;
LAB_004136ce:
  *(uint *)(param_1 + 0x508) = uVar3;
  FUN_00417ca0(*(undefined4 *)(param_1 + 8));
  return;
}



int FUN_004136f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  if (((param_1 != 0) && (param_2 != 0)) && (iVar2 = *(int *)(param_1 + 0xc), iVar2 != 0)) {
    do {
      if (*(int *)(iVar2 + 0x4d4) != 0) {
        iVar1 = FUN_0049ec50(*(int *)(iVar2 + 0x4d4),param_2);
        if (iVar1 == 0) {
          return iVar2;
        }
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != 0);
    return 0;
  }
  return 0;
}



int FUN_00413740(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == 0) {
      return -1;
    }
    if ((*(uint *)(iVar1 + 0x508) & 0x80000) != 0) break;
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



int FUN_00413770(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0xc);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if (((byte)*(undefined4 *)(iVar1 + 0x18) & 0xc) == 0xc) {
      if (param_2 == 0) {
        return iVar1;
      }
      param_2 = param_2 + -1;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}



int FUN_004137a0(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar1 + 0x508) & 0x80000) != 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}



int FUN_004137d0(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (((byte)*(undefined4 *)(iVar1 + 0x18) & 0xc) == 0xc) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}



void FUN_00413800(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x504) = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    if ((*(uint *)(iVar2 + 0x508) & 0x80000) != 0) {
      *(int *)(param_1 + 0x520) = iVar4;
      uVar3 = FUN_004174e0(*(undefined4 *)(param_1 + 0x51c),*(undefined4 *)(iVar2 + 0x4d4));
      *(undefined4 *)(param_1 + 0x51c) = uVar3;
    }
    if (((byte)*(undefined4 *)(iVar2 + 0x18) & 0xc) == 0xc) {
      FUN_00414d00(iVar2);
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar1;
  }
  return;
}



void FUN_00413870(int param_1)

{
  int iVar1;

  iVar1 = FUN_00413770(param_1,*(undefined4 *)(param_1 + 0x520));
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x51c) == 0) {
      return;
    }
    iVar1 = FUN_004136f0(param_1,*(int *)(param_1 + 0x51c));
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_00413610(iVar1,1);
  return;
}



void FUN_004138b0(int param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  if (param_1 != 0) {
    *(undefined *)(param_1 + 0x4c4) = param_2;
    *(undefined *)(param_1 + 0x4c5) = param_3;
    *(undefined *)(param_1 + 0x4c6) = param_4;
    *(undefined *)(param_1 + 0x4c7) = param_5;
    FUN_00418bc0(param_1);
  }
  return;
}



int FUN_004138f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;

  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_004131c0(param_1,param_4,*(undefined4 *)(param_1 + 0x4dc),param_2,0,0,0,1);
    *(undefined4 *)(iVar1 + 0x508) = param_3;
    FUN_00414be0(iVar1,*(undefined *)(param_1 + 0x4c0),*(undefined *)(param_1 + 0x4c1),
                 *(undefined *)(param_1 + 0x4c2),*(undefined *)(param_1 + 0x4c3));
    FUN_00414ca0(iVar1,*(undefined *)(param_1 + 0x4c4),*(undefined *)(param_1 + 0x4c5),
                 *(undefined *)(param_1 + 0x4c6),*(undefined *)(param_1 + 0x4c7));
    FUN_00414c10(iVar1,*(undefined *)(param_1 + 0x4cc),*(undefined *)(param_1 + 0x4cd),
                 *(undefined *)(param_1 + 0x4ce),*(undefined *)(param_1 + 0x4cf));
    FUN_00414c40(iVar1,*(undefined *)(param_1 + 0x4c8),*(undefined *)(param_1 + 0x4c9),
                 *(undefined *)(param_1 + 0x4ca),*(undefined *)(param_1 + 0x4cb));
    FUN_00414c70(iVar1,*(undefined *)(param_1 + 0x4d0),*(undefined *)(param_1 + 0x4d1),
                 *(undefined *)(param_1 + 0x4d2),*(undefined *)(param_1 + 0x4d3));
    FUN_00414cd0(iVar1,0,param_5);
    *(undefined4 *)(iVar1 + 0x18) = 0xc;
    iVar2 = FUN_004137a0(param_1);
    if (iVar2 == 0) {
      FUN_00413610(iVar1,1);
    }
    FUN_00417ca0(param_1);
    return iVar1;
  }
  return 0;
}



int FUN_00413a30(int param_1,int param_2)

{
  int iVar1;

  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0xc;
    FUN_00416890(param_2);
    FUN_00416840(param_1,param_2);
    iVar1 = FUN_004137a0(param_1);
    if (iVar1 == 0) {
      FUN_00413610(param_2,1);
    }
    FUN_00417ca0(param_1);
    return param_2;
  }
  return 0;
}



int FUN_00413a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;

  iVar1 = FUN_00416d90(param_1,param_2,0xffffffff,0,param_6,param_7,0,&LAB_00416690,0);
  FUN_00414b60(iVar1,param_3,param_4);
  *(undefined4 *)(iVar1 + 0x548) = param_5;
  *(undefined4 *)(iVar1 + 0x558) = 10;
  *(undefined4 *)(iVar1 + 0x544) = param_6;
  *(undefined4 *)(iVar1 + 0x18) = 6;
  FUN_00419db0(iVar1,0);
  FUN_00414e60(iVar1,1);
  return iVar1;
}



undefined4 FUN_00413b10(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x55c);
  }
  return 0;
}



void FUN_00413b30(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x55c) = param_2;
    FUN_00419db0(param_1,*(uint *)(param_1 + 0x20) >> 0xc & 1);
  }
  return;
}



void FUN_00413b60(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x54c) = param_2;
    FUN_00419db0(param_1,*(uint *)(param_1 + 0x20) >> 0xc & 1);
  }
  return;
}



int FUN_00413b90(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;

  if (param_3 == (int *)0x0) {
    return 0;
  }
  iVar1 = FUN_00416d90(param_1,param_2,0xffffffff,0,0,param_7,0,FUN_00415850,param_6);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 4;
  FUN_00414b40(iVar1,(param_3[2] - *param_3) + 1,(param_3[3] - param_3[1]) + 1);
  FUN_00414b60(iVar1,*param_3,param_3[1]);
  FUN_00412fb0(iVar1,0,param_4,param_3,1,param_5);
  FUN_00413090(iVar1,0,0xff,0xff,0xff,0xff);
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 7;
  return iVar1;
}



int FUN_00413c50(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,uint param_7,undefined4 param_8,uint param_9,uint param_10)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_18;
  uint local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  int local_4;

  uVar2 = param_9;
  bVar1 = false;
  local_18 = 0;
  local_14 = 0;
  uVar3 = param_10;
  if ((param_10 & 0x80000) != 0) {
    local_14 = param_10 & 0xff;
    uVar3 = 0;
  }
  iVar4 = FUN_00416d90(param_1,param_2,param_3,param_4,param_9,uVar3,0,&LAB_00417940,0);
  uVar3 = *(uint *)(iVar4 + 0x20);
  if ((uVar3 & 0x20000) == 0) {
    if ((uVar3 & 0x10000) == 0) {
      uVar6 = param_7;
      if (((uVar3 & 0x40000) != 0) &&
         (FUN_00417120(0x3f4,&local_18,&param_10), uVar6 = param_7, param_7 < local_18)) {
        uVar6 = param_7 + (local_18 >> 1);
      }
    }
    else {
      FUN_00417120(0x3f3,&local_18,&param_10);
      bVar1 = true;
      uVar6 = param_7 + local_18;
    }
  }
  else {
    FUN_00417120(0xfa3,&local_18,&param_10);
    iVar5 = param_7 + local_18;
    FUN_00417120(0x3f7,&local_18,&param_10);
    bVar1 = true;
    uVar6 = iVar5 + local_18;
  }
  FUN_00414b40(iVar4,uVar6,param_8);
  FUN_00414b60(iVar4,param_5,param_6);
  if (bVar1) {
    local_10 = *(int *)(iVar4 + 0x24);
    local_c = *(undefined4 *)(iVar4 + 0x28);
    local_8 = *(int *)(iVar4 + 0x2c);
    local_4 = *(int *)(iVar4 + 0x30);
    FUN_00412fb0(iVar4,0xffffffff,0x3f1,&local_10,1,0);
    FUN_00413090(iVar4,0,0,0,0,0x82);
  }
  FUN_00414b80(iVar4,param_4,0);
  FUN_00414420(iVar4,uVar2 & 0x20000);
  if ((*(uint *)(iVar4 + 0x20) & 0x20000) != 0) {
    FUN_00417120(0xfa3,&param_9,&param_3);
    FUN_00417120(0xfa4,&param_1,&param_2);
    local_10 = *(int *)(iVar4 + 0x24);
    local_c = *(undefined4 *)(iVar4 + 0x28);
    local_8 = (param_9 - 1) + *(int *)(iVar4 + 0x24);
    local_4 = param_3 + -1 + *(int *)(iVar4 + 0x28);
    FUN_00412fb0(iVar4,0xffffffff,0xfa3,&local_10,1,0);
    local_10 = param_9 + *(int *)(iVar4 + 0x24);
    local_c = *(undefined4 *)(iVar4 + 0x28);
    local_8 = (uVar6 - local_18) + -1 + *(int *)(iVar4 + 0x24);
    local_4 = param_2 + -1 + *(int *)(iVar4 + 0x28);
    FUN_00412fb0(iVar4,0xffffffff,0xfa4,&local_10,1,0);
  }
  FUN_00414e60(iVar4,1);
  *(undefined4 *)(iVar4 + 0x18) = 10;
  if ((*(byte *)(iVar4 + 0x20) & 0x80) == 0) {
    if (DAT_004d7c54 != 0) {
      *(undefined4 *)(iVar4 + 0x53c) = 1;
      if (local_14 == 0) {
        *(uint *)(iVar4 + 0x540) = DAT_004d7c50;
      }
      else {
        *(uint *)(iVar4 + 0x540) = local_14;
      }
      DAT_004d7c50 = DAT_004d7c50 + 1;
    }
    return iVar4;
  }
  if (DAT_004d7c54 != 0) {
    *(undefined4 *)(iVar4 + 0x53c) = 1;
    if (local_14 == 0) {
      local_14 = DAT_004d7c50;
    }
    *(uint *)(iVar4 + 0x540) = local_14;
    DAT_004d7c54 = 0;
    DAT_004d7c50 = 0;
    return iVar4;
  }
  DAT_004d7c50 = 0;
  *(undefined4 *)(iVar4 + 0x53c) = 1;
  if (local_14 == 0) {
    *(uint *)(iVar4 + 0x540) = DAT_004d7c50;
  }
  else {
    *(uint *)(iVar4 + 0x540) = local_14;
  }
  DAT_004d7c54 = DAT_004d7c54 + 1;
  DAT_004d7c50 = DAT_004d7c50 + 1;
  return iVar4;
}



undefined4 FUN_00413fa0(int param_1)

{
  if (*(int *)(param_1 + 0x53c) != 0) {
    return *(undefined4 *)(param_1 + 0x540);
  }
  return 0xffffffff;
}



int FUN_00413fc0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  int local_4;

  local_24 = 0;
  if (param_8 == 0x20000) {
    uVar4 = 4000;
    local_2c = 0xfa1;
    local_28 = 0xfa2;
  }
  else if (param_8 == 0x40000) {
    uVar4 = 0xfa3;
    local_2c = 0xfa4;
    local_28 = 0xfa3;
    local_24 = 0x400000;
  }
  else if (param_8 == 0x80000) {
    uVar4 = 4000;
    local_2c = 0xfa1;
    local_28 = 4000;
    local_24 = 0x400000;
  }
  else {
    uVar4 = 0xfa3;
    local_2c = 0xfa4;
    local_28 = 0xfa5;
  }
  iVar3 = FUN_00416d90(param_1,param_2,param_3,param_4,param_10,param_11,0,FUN_00417be0,0);
  iVar2 = param_6;
  iVar1 = param_5;
  FUN_00414b60(iVar3,param_5,param_6);
  local_c = *(int *)(iVar3 + 0x28);
  local_4 = *(int *)(iVar3 + 0x30);
  FUN_00417120(uVar4,&param_11,&param_3);
  FUN_00417120(local_2c,&param_1,&param_2);
  FUN_00417120(local_28,&param_10,&param_4);
  if ((param_8 == 0x10000) || (param_8 == 0x20000)) {
    local_18 = param_11 + -1 + iVar1;
    local_14 = param_3 + -1 + iVar2;
    local_20 = iVar1;
    local_1c = iVar2;
    FUN_00412fb0(iVar3,0xffffffff,uVar4,&local_20,1,0);
    iVar5 = param_7;
    if (local_1c <= local_c) {
      local_c = local_1c;
    }
    if (local_4 <= local_14) {
      local_4 = local_14;
    }
    local_20 = param_11 + iVar1;
    local_18 = (param_7 - param_10) + -1 + iVar1;
    local_14 = param_2 + -1 + iVar2;
    local_1c = iVar2;
    FUN_00412fb0(iVar3,0xffffffff,local_2c,&local_20,1,0);
    if (local_1c <= local_c) {
      local_c = local_1c;
    }
    if (local_4 <= local_14) {
      local_4 = local_14;
    }
    local_20 = (iVar5 - param_10) + iVar1;
    local_18 = iVar5 + -1 + iVar1;
    local_14 = param_4 + -1 + iVar2;
    local_1c = iVar2;
    FUN_00412fb0(iVar3,0xffffffff,local_28,&local_20,1,local_24);
    if (local_1c <= local_c) {
      local_c = local_1c;
    }
    if (local_4 <= local_14) {
      local_4 = local_14;
    }
    if (param_9 != 0) {
      FUN_00414b60(iVar3,(iVar1 - iVar5) + -2,iVar2 - param_4);
    }
    iVar5 = iVar5 + param_10 + param_11;
  }
  else {
    local_18 = param_11 + -1 + iVar1;
    local_14 = param_3 + -1 + iVar2;
    local_20 = iVar1;
    local_1c = iVar2;
    FUN_00412fb0(iVar3,0xffffffff,uVar4,&local_20,1,0);
    iVar5 = param_7;
    if (local_1c <= local_c) {
      local_c = local_1c;
    }
    if (local_4 <= local_14) {
      local_4 = local_14;
    }
    local_20 = param_11 + iVar1;
    local_1c = iVar2;
    local_18 = param_11 + param_7 + -1 + iVar1;
    local_14 = param_2 + -1 + iVar2;
    FUN_00412fb0(iVar3,0xffffffff,local_2c,&local_20,1,0);
    if (local_1c <= local_c) {
      local_c = local_1c;
    }
    if (local_4 <= local_14) {
      local_4 = local_14;
    }
    local_1c = iVar2;
    local_20 = param_11 + iVar5 + iVar1;
    local_18 = param_10 + param_11 + iVar5 + -1 + iVar1;
    local_14 = param_4 + -1 + iVar2;
    FUN_00412fb0(iVar3,0xffffffff,local_28,&local_20,1,local_24);
    if (local_1c <= local_c) {
      local_c = local_1c;
    }
    if (local_4 <= local_14) {
      local_4 = local_14;
    }
    if (param_9 != 0) {
      FUN_00414b60(iVar3,(iVar1 - iVar5) + -2,iVar2 - param_4);
    }
    iVar5 = iVar5 + param_10 + param_11;
  }
  *(uint *)(iVar3 + 0x20) = *(uint *)(iVar3 + 0x20) | 4;
  FUN_00414b40(iVar3,iVar5,(local_4 - local_c) + 1);
  local_20 = *(int *)(iVar3 + 0x24);
  local_1c = *(undefined4 *)(iVar3 + 0x28);
  local_18 = *(undefined4 *)(iVar3 + 0x2c);
  local_14 = *(undefined4 *)(iVar3 + 0x30);
  uVar4 = FUN_00412fb0(iVar3,0xffffffff,0x3f1,&local_20,1,0);
  FUN_00413090(iVar3,uVar4,0,0,0,0x82);
  FUN_00414e60(iVar3,1);
  *(undefined4 *)(iVar3 + 0x18) = 0xb;
  return iVar3;
}



void FUN_00414420(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  int local_4;

  uVar3 = param_2;
  iVar2 = param_1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if ((param_2 == 0) || (FUN_00418b70(param_1), uVar3 == 0)) {
      uVar4 = *(uint *)(iVar2 + 0x20) & 0xfffdffff;
    }
    else {
      uVar4 = *(uint *)(iVar2 + 0x20) | 0x20000;
    }
    *(uint *)(iVar2 + 0x20) = uVar4;
    if ((uVar4 & 0x40000) == 0) {
      if ((uVar4 & 0x10000) == 0) {
        iVar5 = (uVar3 != 0) + 0x3f6;
      }
      else {
        iVar5 = (uVar3 != 0) + 0x3f2;
      }
    }
    else {
      iVar5 = (uVar3 != 0) + 0x3f4;
    }
    FUN_00417120(iVar5,&param_1,&param_2);
    if ((iVar5 == 0x3f7) || (iVar5 == 0x3f6)) {
      local_10 = (*(int *)(iVar2 + 0x2c) - param_1) + -3;
      local_8 = *(int *)(iVar2 + 0x2c) + -3;
    }
    else {
      local_10 = *(int *)(iVar2 + 0x24) + 3;
      local_8 = *(int *)(iVar2 + 0x24) + 2 + param_1;
    }
    local_c = *(int *)(iVar2 + 0x28) +
              (((*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x28)) - param_2) + 1 >> 1);
    local_4 = local_c + -1 + param_2;
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar6 = FUN_00413b90(iVar2,0,&local_10,iVar5,0,0,0);
      *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) | 0x400;
    }
    FUN_00412fb0(*(undefined4 *)(iVar2 + 0xc),0,iVar5,&local_10,1,0);
    if (uVar3 != (uVar1 & 0x20000)) {
      FUN_004151a0(*(undefined4 *)(iVar2 + 8),5000,*(undefined4 *)(iVar2 + 0x1c),uVar3);
    }
  }
  return;
}



void FUN_00414590(int param_1)

{
  FUN_00414420(param_1,~*(uint *)(param_1 + 0x20) >> 0x11 & 1);
  return;
}



undefined4
FUN_004145b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;

  DAT_004b5d7c = 0;
  DAT_004d87ac = 0xffffffff;
  FUN_00414e60(param_1,0);
  iVar1 = FUN_004146c0(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&LAB_00417f50);
  DAT_004d87b4 = iVar1;
  if (*(int *)(iVar1 + 0xc) != 0) {
    iVar2 = FUN_0041b3c0(*(int *)(iVar1 + 0xc));
    if (((byte)*(undefined4 *)(iVar2 + 0x18) & 5) == 5) {
      iVar2 = *(int *)(iVar2 + 4);
    }
    FUN_00414f10(iVar2,1);
  }
  DAT_004d87b8 = param_1;
  if (param_9 != 0) {
    DAT_004d87b0 = 1;
    while (DAT_004b5d7c == 0) {
      thunk_FUN_00423cb0();
    }
    DAT_004d87b0 = 0;
    FUN_00414d00(iVar1);
    DAT_004d87b4 = 0;
    FUN_00414e60(param_1,1);
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar1 = FUN_0041b3c0(*(int *)(param_1 + 0xc));
      if (((byte)*(undefined4 *)(iVar1 + 0x18) & 5) == 5) {
        iVar1 = *(int *)(iVar1 + 4);
      }
      FUN_00414f10(iVar1,1);
    }
    DAT_004d87b8 = 0;
  }
  return DAT_004d87ac;
}



int FUN_004146c0(undefined4 param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                int param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  int local_4;

  iVar1 = FUN_00416d90(param_1,0,0,0,0,0,0,&LAB_00416820,param_9);
  FUN_004176f0(&local_40,param_4,6);
  iVar6 = local_34 - local_3c;
  iVar7 = (local_38 - local_40) + 1;
  iVar8 = 0;
  if (-1 < iVar7) {
    iVar8 = iVar7;
  }
  FUN_00417740(&local_30,param_5,0);
  local_2c = local_24 - local_2c;
  iVar7 = (local_28 - local_30) + 1;
  if (iVar8 <= iVar7) {
    iVar8 = iVar7;
  }
  iVar2 = FUN_004177b0(&local_20,param_6,param_7,param_8,0);
  iVar6 = iVar6 + local_2c + 4 + (local_1c * 0x7fffffff + local_14) * 2;
  iVar7 = (local_18 - local_20) + 1;
  if (iVar8 <= iVar7) {
    iVar8 = iVar7;
  }
  FUN_00414b40(iVar1,iVar8,iVar6);
  if (param_2 == -1) {
    param_2 = (*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x2c)) + 0x27f >> 1;
  }
  if (param_3 == -1) {
    param_3 = (*(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x30)) + 0x1df >> 1;
  }
  FUN_00414b60(iVar1,param_2,param_3);
  local_10 = 0x280U - iVar8 >> 1;
  local_c = 0x1e0U - iVar6 >> 1;
  local_8 = iVar8 + -1 + local_10;
  local_4 = iVar6 + -1 + local_c;
  FUN_00412fb0(iVar1,0xffffffff,0x3f1,&local_10,1,0);
  FUN_00413090(iVar1,0,0,0,0,0x82);
  FUN_00417900(&local_40,
               (((local_40 - local_38) + *(int *)(iVar1 + 0x2c)) - *(int *)(iVar1 + 0x24) >> 1) +
               *(int *)(iVar1 + 0x24),*(int *)(iVar1 + 0x28) + local_3c);
  FUN_00417900(&local_30,
               (((local_30 - local_28) + *(int *)(iVar1 + 0x2c)) - *(int *)(iVar1 + 0x24) >> 1) +
               *(int *)(iVar1 + 0x24),local_34);
  FUN_00417900(&local_20,
               (((local_20 - local_18) + *(int *)(iVar1 + 0x2c)) - *(int *)(iVar1 + 0x24) >> 1) +
               *(int *)(iVar1 + 0x24),local_24);
  FUN_004131c0(iVar1,0,6,param_4,local_40 + 10,local_3c + 10,0,0);
  uVar3 = FUN_00413520(iVar1,0,&local_30,0,0x100000,0);
  FUN_00417fe0(uVar3,param_5,1);
  iVar6 = 0;
  iVar7 = local_1c + 10;
  iVar8 = local_20 + 10;
  param_4 = 0;
  if (param_6 != 0) {
    iVar4 = FUN_0042de30(param_6,DAT_00e99720);
    param_4 = iVar4 * 3;
  }
  if (param_7 != 0) {
    iVar4 = FUN_0042de30(param_7,DAT_00e99720);
    if (param_4 <= (uint)(iVar4 * 3)) {
      param_4 = iVar4 * 3;
    }
  }
  if (param_8 != 0) {
    iVar4 = FUN_0042de30(param_8,DAT_00e99720);
    if (param_4 <= (uint)(iVar4 * 3)) {
      param_4 = iVar4 * 3;
    }
  }
  if (param_4 < 0x97) {
    param_4 = 0x96;
  }
  if (param_6 != 0) {
    iVar4 = FUN_0042df70(param_6,DAT_00e99720);
    iVar6 = 1;
    FUN_004132a0(iVar1,0,0,param_6,iVar8,iVar7,param_4,iVar4 * 3,0x100000,0);
    if (param_8 == 0) {
      iVar8 = local_20 + 0x1e + iVar2;
    }
    else {
      iVar7 = local_1c + 0x14 + iVar4 * 3;
    }
  }
  iVar4 = iVar6;
  if (param_7 != 0) {
    iVar5 = FUN_0042df70(param_7,DAT_00e99720);
    iVar4 = iVar6 + 1;
    FUN_004132a0(iVar1,iVar6,0,param_7,iVar8,iVar7,param_4,iVar5 * 3,0x100000,0);
    iVar8 = iVar8 + 0x14 + iVar2;
  }
  if (param_8 != 0) {
    iVar6 = FUN_0042df70(param_8,DAT_00e99720);
    FUN_004132a0(iVar1,iVar4,0,param_8,iVar8,iVar7,param_4,iVar6 * 3,0x100000,0);
  }
  FUN_00414e60(iVar1,1);
  return iVar1;
}



void FUN_00414ab0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;

  uVar1 = FUN_004174e0(*(undefined4 *)(param_1 + 0x4f8),param_2);
  *(undefined4 *)(param_1 + 0x4f8) = uVar1;
  *(undefined4 *)(param_1 + 0x4fc) = param_3;
  return;
}



void FUN_00414ae0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4fc) = param_2;
  return;
}



char * FUN_00414af0(int param_1,char *param_2,int param_3)

{
  if ((param_2 != (char *)0x0) && (*(char **)(param_1 + 0x4f8) != (char *)0x0)) {
    _strncpy(param_2,*(char **)(param_1 + 0x4f8),param_3 - 1);
    param_2[param_3 + -1] = '\0';
    return param_2;
  }
  return *(char **)(param_1 + 0x4f8);
}



void FUN_00414b30(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4f4) = param_2;
  return;
}



void FUN_00414b40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004151a0(param_1,0xc,param_2,param_3);
  return;
}



void FUN_00414b60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004151a0(param_1,0xb,param_2,param_3);
  return;
}



void FUN_00414b80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004151a0(param_1,10,param_2,param_3);
  return;
}



char * FUN_00414ba0(int param_1,char *param_2,int param_3)

{
  if ((param_2 != (char *)0x0) && (*(char **)(param_1 + 0x4d4) != (char *)0x0)) {
    _strncpy(param_2,*(char **)(param_1 + 0x4d4),param_3 - 1);
    param_2[param_3 + -1] = '\0';
    return param_2;
  }
  return *(char **)(param_1 + 0x4d4);
}



void FUN_00414be0(int param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  *(undefined *)(param_1 + 0x4c0) = param_2;
  *(undefined *)(param_1 + 0x4c1) = param_3;
  *(undefined *)(param_1 + 0x4c2) = param_4;
  *(undefined *)(param_1 + 0x4c3) = param_5;
  return;
}



void FUN_00414c10(int param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  *(undefined *)(param_1 + 0x4cc) = param_2;
  *(undefined *)(param_1 + 0x4cd) = param_3;
  *(undefined *)(param_1 + 0x4ce) = param_4;
  *(undefined *)(param_1 + 0x4cf) = param_5;
  return;
}



void FUN_00414c40(int param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  *(undefined *)(param_1 + 0x4c8) = param_2;
  *(undefined *)(param_1 + 0x4c9) = param_3;
  *(undefined *)(param_1 + 0x4ca) = param_4;
  *(undefined *)(param_1 + 0x4cb) = param_5;
  return;
}



void FUN_00414c70(int param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  *(undefined *)(param_1 + 0x4d0) = param_2;
  *(undefined *)(param_1 + 0x4d1) = param_3;
  *(undefined *)(param_1 + 0x4d2) = param_4;
  *(undefined *)(param_1 + 0x4d3) = param_5;
  return;
}



void FUN_00414ca0(int param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  *(undefined *)(param_1 + 0x4c4) = param_2;
  *(undefined *)(param_1 + 0x4c5) = param_3;
  *(undefined *)(param_1 + 0x4c6) = param_4;
  *(undefined *)(param_1 + 0x4c7) = param_5;
  return;
}



undefined4 FUN_00414cd0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;

  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x44) + param_2 * 4);
  *(undefined4 *)(*(int *)(param_1 + 0x44) + param_2 * 4) = param_3;
  return uVar1;
}



undefined4 FUN_00414cf0(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x44) + param_2 * 4);
}



void FUN_00414d00(undefined *param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    FUN_00414d00(iVar2);
    iVar2 = iVar1;
  }
  if (param_1 != PTR_DAT_004b5d74) {
    FUN_004151a0(param_1,0x10,0,0);
    FUN_00417060(param_1);
    FUN_00416890(param_1);
    FUN_0049f200(param_1);
  }
  return;
}



int FUN_00414d60(int param_1,int param_2)

{
  int iVar1;

  if (*(int *)(param_1 + 0x18) != param_2) {
    if (((*(int *)(param_1 + 0xc) != 0) &&
        (iVar1 = FUN_00414d60(*(int *)(param_1 + 0xc),param_2), iVar1 != 0)) &&
       (*(int *)(iVar1 + 0x18) == param_2)) {
      return iVar1;
    }
    param_1 = 0;
  }
  return param_1;
}



undefined * FUN_00414d90(undefined *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;

  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_DAT_004b5d74;
  }
  if (*(int *)(param_1 + 0x1c) != param_2) {
    puVar2 = *(undefined **)(param_1 + 0xc);
    if (puVar2 != (undefined *)0x0) {
      do {
        if (*(int *)(puVar2 + 0x18) != 0xc) {
          if ((*(int *)(puVar2 + 0xc) != 0) &&
             (puVar1 = (undefined *)FUN_00414d90(puVar2,param_2), puVar1 != (undefined *)0x0)) {
            return puVar1;
          }
          if (*(int *)(puVar2 + 0x1c) == param_2) {
            return puVar2;
          }
        }
        puVar2 = *(undefined **)(puVar2 + 4);
        if (puVar2 == (undefined *)0x0) {
          return (undefined *)0x0;
        }
      } while( true );
    }
    param_1 = (undefined *)0x0;
  }
  return param_1;
}



void FUN_00414df0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    for (param_1 = (undefined4 *)*param_1; param_1 != (undefined4 *)0x0;
        param_1 = (undefined4 *)*param_1) {
    }
    return;
  }
  return;
}



void FUN_00414e10(int param_1)

{
  int iVar1;

  if (param_1 != 0) {
    for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    }
    return;
  }
  return;
}



void FUN_00414e30(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x800;
      return;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffff7ff;
  }
  return;
}



void FUN_00414e60(undefined4 param_1,undefined4 param_2)

{
  FUN_004151a0(param_1,0xe,param_2,0);
  return;
}



undefined4 FUN_00414e80(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  do {
    if ((*(byte *)(param_1 + 0x20) & 0x40) == 0) {
      return 0;
    }
    param_1 = *(int *)(param_1 + 8);
  } while (param_1 != 0);
  return 1;
}



void FUN_00414eb0(int param_1)

{
  if (DAT_004d878c != 0) {
    *(uint *)(DAT_004d878c + 0x20) = *(uint *)(DAT_004d878c + 0x20) & 0xffffffef;
  }
  FUN_004151a0(DAT_004d878c,1,0,0);
  DAT_004d878c = param_1;
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x10;
  }
  FUN_004151a0(param_1,1,1,0);
  return;
}



void FUN_00414f00(undefined4 param_1)

{
  DAT_004d8790 = param_1;
  return;
}



void FUN_00414f10(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_0041b380(param_1);
  if (iVar1 != 0) {
    FUN_00414f70(param_1);
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_00408360(((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + 1) / 2 +
                 *(int *)(param_1 + 0x24),
                 ((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28)) + 1) / 2 +
                 *(int *)(param_1 + 0x28));
  }
  return;
}



void FUN_00414f70(int param_1)

{
  if ((param_1 == 0) ||
     ((*(int *)(param_1 + 0x18) != 0 && ((*(uint *)(param_1 + 0x20) & 0x100) == 0)))) {
    if (DAT_004d8794 != 0) {
      *(uint *)(DAT_004d8794 + 0x20) = *(uint *)(DAT_004d8794 + 0x20) & 0xffffffdf;
    }
    FUN_004151a0(DAT_004d8794,0xd,0,0);
    DAT_004d8794 = param_1;
    if (param_1 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x20;
    }
    FUN_004151a0(DAT_004d8794,0xd,1,0);
  }
  return;
}



undefined4 FUN_00414fe0(void)

{
  return DAT_004d878c;
}



undefined4 FUN_00414ff0(void)

{
  return DAT_004d8790;
}



undefined4 FUN_00415000(void)

{
  return DAT_004d8794;
}



void FUN_00415010(void)

{
  FUN_00414f00(0);
  return;
}



void FUN_00415020(undefined *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  if (DAT_004d87a0 != 0) {
    FUN_00412630();
  }
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_DAT_004b5d74;
  }
  iVar3 = 0;
  for (puVar1 = param_1; puVar1 != (undefined *)0x0; puVar1 = *(undefined **)(puVar1 + 4)) {
    if (((*(uint *)(puVar1 + 0x20) & 0x40) != 0) && ((*(uint *)(puVar1 + 0x20) & 1) != 0)) {
      iVar3 = iVar3 + 1;
    }
  }
  uVar4 = 0;
  for (puVar1 = param_1; puVar1 != (undefined *)0x0; puVar1 = *(undefined **)(puVar1 + 4)) {
    if ((puVar1[0x20] & 0x40) != 0) {
      uVar2 = FUN_00416930(puVar1);
      uVar4 = uVar4 | uVar2;
      FUN_004151f0(puVar1);
      FUN_004151a0(puVar1,9,0,0);
    }
  }
  if (((uVar4 == 0) && (iVar3 != 0)) && (*(int *)(param_1 + 8) != 0)) {
    FUN_004151a0(*(int *)(param_1 + 8),0x48,0,0);
  }
  for (; param_1 != (undefined *)0x0; param_1 = *(undefined **)(param_1 + 4)) {
    if (((param_1[0x20] & 0x40) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
      FUN_00415020(*(int *)(param_1 + 0xc));
    }
  }
  return;
}



undefined * FUN_004150e0(undefined *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  if (param_1 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  do {
    if (((param_1[0x20] & 0x40) != 0) && (*(int *)(param_1 + 0x18) != 8)) {
      if ((*(int *)(param_1 + 0xc) != 0) &&
         (puVar1 = (undefined *)FUN_004150e0(*(int *)(param_1 + 0xc),param_2,param_3),
         puVar1 != (undefined *)0x0)) {
        return puVar1;
      }
      if ((*(uint *)(param_1 + 0x20) & 0x400) == 0) {
        local_10 = *(undefined4 *)(param_1 + 0x24);
        local_c = *(undefined4 *)(param_1 + 0x28);
        local_8 = *(undefined4 *)(param_1 + 0x2c);
        local_4 = *(undefined4 *)(param_1 + 0x30);
        FUN_00417f00(&local_10,param_1 + 0x4e0);
        if ((param_1 != PTR_DAT_004b5d74) &&
           (iVar2 = FUN_004172c0(&local_10,param_2,param_3), iVar2 != 0)) {
          return param_1;
        }
      }
    }
    param_1 = *(undefined **)(param_1 + 4);
    if (param_1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
  } while( true );
}



int FUN_004151a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;

  if (param_1 != 0) {
    if ((*(code **)(param_1 + 0x14) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_1 + 0x14))(param_1,param_2,param_3,param_4), iVar1 != 0)) {
      return iVar1;
    }
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x10))(param_1,param_2,param_3,param_4);
      return iVar1;
    }
  }
  return 0;
}



void FUN_004151f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar3;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 uVar4;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  int iVar5;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined2 uVar6;
  undefined2 extraout_var_20;
  int iVar7;
  int *piVar8;

  if (((DAT_004d879c != 0) && ((*(byte *)(param_1 + 0x20) & 0x40) != 0)) &&
     (iVar7 = 0, 0 < *(int *)(param_1 + 0x5c))) {
    piVar8 = (int *)(param_1 + 100);
    do {
      if ((*piVar8 != 0) && (piVar8[1] == 0)) {
        iVar1 = FUN_00412f20(*piVar8);
        piVar8[1] = iVar1;
      }
      uVar2 = FUN_00417010(*piVar8);
      FUN_004282f0(CONCAT22(extraout_var_03,*(undefined2 *)(piVar8 + 1)),uVar2);
      FUN_00428660(CONCAT22(extraout_var_04,*(undefined2 *)(piVar8 + 1)),
                   *(short *)(piVar8 + 10) + *(short *)(piVar8 + 4),
                   *(short *)(piVar8 + 0xb) + *(short *)(piVar8 + 5));
      uVar3 = (undefined2)((uint)piVar8[-1] >> 0x10);
      uVar4 = extraout_var_05;
      uVar6 = extraout_var_12;
      if ((piVar8[-1] & 0x80000U) != 0) {
        iVar1 = ((*(int *)(param_1 + 0x30) - piVar8[7]) + piVar8[5]) - *(int *)(param_1 + 0x28);
        FUN_00428660(CONCAT22((short)((uint)*(int *)(param_1 + 0x28) >> 0x10),
                              *(undefined2 *)(piVar8 + 1)),
                     CONCAT22((short)((uint)piVar8[5] >> 0x10),*(undefined2 *)(param_1 + 0x24)),
                     CONCAT22((short)(iVar1 >> 0x11),
                              (short)(iVar1 >> 1) + *(short *)(param_1 + 0x28)));
        uVar3 = extraout_var;
        uVar4 = extraout_var_06;
        uVar6 = extraout_var_13;
      }
      if ((piVar8[-1] & 0x40000U) != 0) {
        iVar1 = ((*(int *)(param_1 + 0x2c) - piVar8[6]) + piVar8[4]) - *(int *)(param_1 + 0x24);
        FUN_00428660(CONCAT22((short)((uint)piVar8[4] >> 0x10),*(undefined2 *)(piVar8 + 1)),
                     CONCAT22((short)(iVar1 >> 0x11),
                              (short)(iVar1 >> 1) + *(short *)(param_1 + 0x24)),
                     CONCAT22(uVar6,*(undefined2 *)(param_1 + 0x28)));
        uVar3 = extraout_var_00;
        uVar4 = extraout_var_07;
        uVar6 = extraout_var_14;
      }
      if ((piVar8[-1] & 0x100000U) != 0) {
        iVar5 = ((*(int *)(param_1 + 0x30) - piVar8[7]) + piVar8[5]) - *(int *)(param_1 + 0x28);
        iVar1 = ((*(int *)(param_1 + 0x2c) - piVar8[6]) + piVar8[4]) - *(int *)(param_1 + 0x24);
        FUN_00428660(CONCAT22((short)((uint)piVar8[4] >> 0x10),*(undefined2 *)(piVar8 + 1)),
                     CONCAT22((short)(iVar1 >> 0x11),
                              (short)(iVar1 >> 1) + *(short *)(param_1 + 0x24)),
                     CONCAT22((short)(iVar5 >> 0x11),
                              (short)(iVar5 >> 1) + *(short *)(param_1 + 0x28)));
        uVar3 = extraout_var_01;
        uVar4 = extraout_var_08;
        uVar6 = extraout_var_15;
      }
      if ((piVar8[-1] & 0x200000U) != 0) {
        FUN_004287e0(CONCAT22(uVar6,*(undefined2 *)(piVar8 + 1)),8);
        uVar3 = extraout_var_02;
        uVar4 = extraout_var_09;
        uVar6 = extraout_var_16;
      }
      if ((piVar8[-1] & 0x400000U) != 0) {
        FUN_004287e0(CONCAT22(uVar3,*(undefined2 *)(piVar8 + 1)),4);
        uVar4 = extraout_var_10;
        uVar6 = extraout_var_17;
      }
      if ((piVar8[-1] & 0x800000U) != 0) {
        FUN_004287e0(CONCAT22(uVar4,*(undefined2 *)(piVar8 + 1)),0x8000);
        uVar6 = extraout_var_18;
      }
      if ((piVar8[-1] & 0x1000000U) != 0) {
        FUN_004287e0(CONCAT22(uVar6,*(undefined2 *)(piVar8 + 1)),0x800);
        uVar6 = extraout_var_19;
      }
      FUN_004286f0(CONCAT22(uVar6,*(undefined2 *)(piVar8 + 1)),piVar8[2],piVar8[3]);
      iVar1 = 100;
      if ((*(uint *)(param_1 + 0x20) & 0x100) == 0) {
        iVar1 = (int)*(char *)((int)piVar8 + 0x33);
      }
      FUN_00428740(CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(piVar8 + 1)),
                   *(undefined *)(piVar8 + 0xc),*(undefined *)((int)piVar8 + 0x31),
                   CONCAT31((int3)((uint)iVar1 >> 8),*(undefined *)((int)piVar8 + 0x32)),iVar1);
      FUN_004285d0(CONCAT22(extraout_var_11,*(undefined2 *)(piVar8 + 1)),1);
      FUN_004287e0(CONCAT22(extraout_var_20,*(undefined2 *)(piVar8 + 1)),0x10000);
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 0xe;
    } while (iVar7 < *(int *)(param_1 + 0x5c));
  }
  return;
}



void FUN_00415400(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;

  FUN_004180c0();
  FUN_004502f0();
  if ((PTR_DAT_004b5d74 != (undefined *)0x0) && (iVar2 = FUN_00414e80(PTR_DAT_004b5d74), iVar2 != 0)
     ) {
    FUN_00415020(PTR_DAT_004b5d74);
    FUN_004184d0();
    if (DAT_004d87a8 != 0) {
      DAT_004d8be8 = 1;
      return;
    }
    if (DAT_004d8be8 != 0) {
      FUN_00414f10(DAT_004d8798,1);
      DAT_004d8be8 = 0;
    }
    iVar2 = FUN_00408200();
    if (iVar2 != 0) {
      FUN_004083d0();
      uVar1 = DAT_00ec8754;
      uVar4 = DAT_00ec874c;
      if ((DAT_004d8bd0 & 8) != 0) {
        DAT_004d8bd0 = DAT_004d8bd0 & 0xf7;
        return;
      }
      iVar2 = FUN_004150e0(PTR_DAT_004b5d74,DAT_00ec874c,DAT_00ec8754);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x20) & 0x100) != 0)) {
        return;
      }
      iVar3 = FUN_00414fe0();
      if ((iVar2 != iVar3) && (FUN_00414eb0(iVar2), DAT_004d87c8 == 0)) {
        FUN_00414f70(iVar2);
      }
      iVar3 = FUN_00414ff0();
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      if ((DAT_00ec8740 & 0x80000000) != 0) {
        FUN_00412630();
        FUN_004151a0(iVar2,6,uVar4,uVar1);
      }
      if ((DAT_00ec8740 & 0x10000000) != 0) {
        if ((DAT_00ec8740 & 2) != 0) {
          FUN_004151a0(iVar2,(~(byte)DAT_00ec8744 & 2 | 4) >> 1,uVar4,uVar1);
        }
        if ((DAT_00ec8740 & 4) != 0) {
          FUN_004151a0(iVar2,(~DAT_00ec8744 & 4 | 0x10) >> 2,uVar4,uVar1);
        }
        if (DAT_004d87c8 == 0) {
          uVar5 = DAT_00ec8740 & 0xe0000000;
          if (DAT_004d6b40 != 0) {
            uVar4 = FUN_00411810(0x12,uVar5,0);
            FUN_004151a0(uVar4);
          }
          if (DAT_004d6b44 != 0) {
            if ((DAT_004d8bd0 & 1) == 0) {
              if (((*(int *)(DAT_0050c454 + 8) == 9) && (*(int *)(DAT_0050c454 + 0x10) == -1)) ||
                 (*(int *)(DAT_0050c454 + 8) == 1)) {
                iVar3 = DAT_004d87b4;
                if (DAT_004d87b4 == 0) {
                  iVar3 = FUN_00411810();
                }
                FUN_004151a0(iVar3,0x13,uVar5,0);
              }
            }
            else {
              DAT_004d8bd0 = DAT_004d8bd0 & 0xfe;
            }
          }
        }
        if (((DAT_004d6b40 != 0) && (iVar2 != 0)) && ((*(byte *)(iVar2 + 0x20) & 8) == 0)) {
          FUN_004151a0(iVar2,0x49,1,*(undefined4 *)(iVar2 + 0x1c));
        }
      }
      if ((DAT_00ec8740 & 0x20000000) != 0) {
        FUN_00412630();
        FUN_00416bd0();
      }
    }
    FUN_0041b690();
  }
  return;
}



void FUN_00415640(undefined4 param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_00414e80(PTR_DAT_004b5d74);
  if (iVar1 != 0) {
    FUN_00412630();
    if (DAT_004d8794 != 0) {
      FUN_004151a0(DAT_004d8794,8 - (uint)(param_2 != 0),param_1,0);
      return;
    }
    if (param_2 == 0) {
      FUN_0041b420(param_1);
    }
  }
  return;
}



void FUN_004156a0(uint param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;

  if ((DAT_004d8bd8 != 0) && (param_1 != 0)) {
    DAT_004d87a8 = 1;
    FUN_004151a0(param_1,0x48,1,0);
    iVar3 = *(int *)(param_1 + 0xc);
    if (param_2 == -1) {
      param_1 = FUN_004816b0();
      param_2 = __ftol();
    }
    if (param_2 == 1) {
      iVar1 = 0;
      for (puVar2 = (undefined4 *)FUN_00414e10(iVar3); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        if ((puVar2[8] & 0x200) == 0) {
          FUN_004151a0(puVar2,0x48,1,1);
          puVar2[0x13] = puVar2[10];
          puVar2[0x12] = puVar2[9];
          FUN_00416f50(puVar2,puVar2[9],(puVar2[10] - puVar2[0xc]) + -1);
          puVar2[0x14] = iVar1;
          iVar1 = iVar1 + 0xfa;
          puVar2[8] = puVar2[8] | 1;
        }
      }
    }
    else if (iVar3 != 0) {
      do {
        if ((*(uint *)(iVar3 + 0x20) & 0x200) == 0) {
          FUN_004151a0(iVar3,0x48,1,1);
          uVar4 = *(undefined4 *)(iVar3 + 0x28);
          *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x24);
          *(undefined4 *)(iVar3 + 0x4c) = uVar4;
          if (param_1 == 0) {
            uVar4 = *(undefined4 *)(iVar3 + 0x4c);
            iVar1 = 0x280;
          }
          else {
            iVar1 = (*(int *)(iVar3 + 0x24) - *(int *)(iVar3 + 0x2c)) + -1;
          }
          FUN_00416f50(iVar3,iVar1,uVar4);
          *(uint *)(iVar3 + 0x20) = *(uint *)(iVar3 + 0x20) | 1;
        }
        iVar3 = *(int *)(iVar3 + 4);
        param_1 = (uint)(param_1 == 0);
      } while (iVar3 != 0);
      return;
    }
  }
  return;
}



undefined4 FUN_004157d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = *(undefined4 *)(param_1 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4dc) = param_2;
  return uVar1;
}



undefined4 FUN_004157f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = *(undefined4 *)(param_1 + 0x500);
  *(undefined4 *)(param_1 + 0x500) = param_2;
  return uVar1;
}



void FUN_00415810(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4e0) = param_2;
    *(undefined4 *)(param_1 + 0x4e4) = param_3;
    *(undefined4 *)(param_1 + 0x4e8) = param_4;
    *(undefined4 *)(param_1 + 0x4ec) = param_5;
  }
  return;
}



undefined4 FUN_00415850(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;

  uVar1 = DAT_004d8798;
  switch(param_2) {
  case 2:
    FUN_00414f70(param_1);
    FUN_00414f00(param_1);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
    return 0;
  case 3:
    FUN_00415010();
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffd;
    uVar1 = DAT_004d8798;
    break;
  case 7:
    FUN_00414f00(param_1);
    uVar1 = DAT_004d8798;
    if (((param_3 == 9) || ((0x24 < param_3 && (param_3 < 0x29)))) && (DAT_004d87c8 == 0)) {
      FUN_00416a40(param_1,param_3);
      return 0;
    }
    break;
  case 8:
    FUN_00415010();
    return 0;
  case 9:
    if ((*(uint *)(param_1 + 0x20) & 0x800) != 0) {
      FUN_00419140(param_1);
      return 0;
    }
    break;
  case 10:
    uVar1 = FUN_004174e0(*(undefined4 *)(param_1 + 0x4d4),param_3);
    *(undefined4 *)(param_1 + 0x4d4) = uVar1;
    uVar1 = DAT_004d8798;
    if (param_4 != -1) {
      *(int *)(param_1 + 0x4d8) = param_4;
      return 0;
    }
    break;
  case 0xb:
    FUN_00416f50(param_1,param_3,param_4);
    return 0;
  case 0xc:
    FUN_00416f20(param_1,param_3,param_4);
    return 0;
  case 0xd:
    if (param_3 == 0) {
      FUN_004151a0(param_1,0x49,0,*(undefined4 *)(param_1 + 0x1c));
      return 0;
    }
    break;
  case 0xe:
    if (param_3 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x40;
      return 0;
    }
    FUN_004168f0(param_1);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffbf;
    FUN_00417060(param_1);
    return 0;
  case 0x10:
    uVar1 = FUN_004174e0(*(undefined4 *)(param_1 + 0x4d4),0);
    *(undefined4 *)(param_1 + 0x4d4) = uVar1;
    uVar1 = FUN_004174e0(*(undefined4 *)(param_1 + 0x51c),0);
    *(undefined4 *)(param_1 + 0x51c) = uVar1;
    return 0;
  case 0x11:
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffcc;
    return 0;
  case 0x13:
    if (DAT_004d8be4 == 0) {
      FUN_004118b0(0);
      return 0;
    }
    break;
  case 0x46:
    FUN_00414e60(param_1,1);
    if (param_3 != 0) {
      FUN_004156a0(param_1,0xffffffff);
    }
    DAT_004d8798 = FUN_00414d90(param_1,2);
    if (DAT_004d8798 != 0) {
      FUN_00414f10(DAT_004d8798,1);
      return 0;
    }
    DAT_004d8798 = *(int *)(param_1 + 0xc);
    uVar1 = 0;
    if (DAT_004d8798 != 0) {
      FUN_00414f10(DAT_004d8798,1);
      return 0;
    }
    break;
  case 0x47:
    FUN_00414e60((&DAT_004d8110)[param_3],0);
    (&DAT_004d8110)[param_3] = 0;
    return 0;
  case 0x49:
    if (param_3 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 8;
      FUN_004081e0(0);
      return 0;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffff7;
    FUN_004081e0(1);
    return 0;
  }
  DAT_004d8798 = uVar1;
  return 0;
}



void FUN_00416840(undefined *param_1,int *param_2)

{
  int iVar1;
  int iVar2;

  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_DAT_004b5d74;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = (int)param_1;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    *(int **)(param_1 + 0xc) = param_2;
    return;
  }
  for (iVar2 = *(int *)(iVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    iVar1 = iVar2;
  }
  *(int **)(iVar1 + 4) = param_2;
  *param_2 = iVar1;
  return;
}



void FUN_00416890(int *param_1)

{
  FUN_004168f0(param_1);
  if (param_1 == *(int **)(param_1[2] + 0xc)) {
    *(int *)(param_1[2] + 0xc) = param_1[1];
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
  }
  else {
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



void FUN_004168f0(int param_1)

{
  int iVar1;

  iVar1 = FUN_00414fe0();
  if (param_1 == iVar1) {
    FUN_00414eb0(0);
  }
  iVar1 = FUN_00414ff0();
  if (param_1 == iVar1) {
    FUN_00414f00(0);
  }
  iVar1 = FUN_00415000();
  if (param_1 == iVar1) {
    FUN_00414f70(0);
  }
  return;
}



undefined4 FUN_00416930(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (DAT_004b5d84 == 0xffffffff) {
    DAT_004b5d84 = timeGetTime();
  }
  DVar2 = timeGetTime();
  DAT_004d87a8 = 0;
  if ((*(uint *)(param_1 + 0x20) & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x50);
    if (uVar1 != 0) {
      uVar3 = DVar2 - DAT_004b5d84;
      if (uVar1 < DVar2 - DAT_004b5d84) {
        uVar3 = uVar1;
      }
      *(uint *)(param_1 + 0x50) = uVar1 - uVar3;
      return DAT_004d87a8;
    }
    iVar4 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x48);
    iVar6 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x4c);
    if ((iVar4 == 0) && (iVar6 == 0)) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
      FUN_004151a0(param_1,0x48,0,1);
      return DAT_004d87a8;
    }
    DAT_004d87a8 = 1;
    iVar5 = iVar4;
    if (iVar4 != 0) {
      iVar5 = iVar4 / 10;
      if (iVar4 / 10 == 0) {
        iVar5 = ((-1 < iVar4) - 1 & 0xfffffffe) + 1;
      }
    }
    iVar4 = iVar6;
    if (iVar6 != 0) {
      iVar4 = iVar6 / 10;
      if (iVar6 / 10 == 0) {
        iVar4 = ((-1 < iVar6) - 1 & 0xfffffffe) + 1;
      }
    }
    FUN_00414b60(param_1,*(int *)(param_1 + 0x24) - iVar5,*(int *)(param_1 + 0x28) - iVar4);
  }
  return DAT_004d87a8;
}



void FUN_00416a40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  if (param_2 == 9) {
    iVar4 = 0;
    iVar2 = param_1;
    do {
      iVar1 = *(int *)(iVar2 + 4);
      if (iVar1 == 0) {
        iVar1 = FUN_00414df0(iVar2);
      }
      if ((*(byte *)(iVar1 + 0x20) & 4) == 0) {
        iVar4 = iVar1;
      }
      iVar2 = FUN_00414e80(iVar1);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      if ((*(uint *)(iVar1 + 0x20) & 0x100) != 0) {
        iVar4 = 0;
      }
      if (iVar1 == param_1) {
        iVar4 = iVar1;
      }
      iVar2 = iVar1;
    } while (iVar4 == 0);
    goto LAB_00416b93;
  }
  if ((((param_2 != 0x25) && (param_2 != 0x27)) && (param_2 != 0x26)) &&
     (iVar4 = param_1, param_2 != 0x28)) goto LAB_00416b93;
  iVar4 = FUN_0041b380(param_1);
  if (iVar4 == 0) {
    return;
  }
  if ((param_2 == 0x27) || (param_2 == 0x28)) {
    iVar4 = FUN_0041b3c0(param_1);
    if (iVar4 == 0) {
      if (((byte)*(undefined4 *)(param_1 + 0x18) & 0xc) == 0xc) {
        iVar4 = *(int *)(param_1 + 8);
      }
      else {
        iVar4 = FUN_00414df0(param_1);
        iVar2 = FUN_0041b380(iVar4);
        if (iVar2 != 0) goto LAB_00416b7a;
      }
LAB_00416b70:
      iVar4 = FUN_0041b3c0(iVar4);
    }
  }
  else {
    if ((param_2 != 0x25) && (iVar4 = 0, param_2 != 0x26)) goto LAB_00416b93;
    iVar4 = FUN_0041b3f0(param_1);
    if (iVar4 == 0) {
      if (((byte)*(undefined4 *)(param_1 + 0x18) & 0xc) == 0xc) {
        iVar4 = FUN_0041b3f0(*(undefined4 *)(param_1 + 8));
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 8);
          goto LAB_00416b70;
        }
      }
      else {
        iVar4 = FUN_00414e10(param_1);
        iVar2 = FUN_0041b380(iVar4);
        if (iVar2 == 0) {
          iVar4 = FUN_0041b3f0(iVar4);
        }
      }
    }
  }
LAB_00416b7a:
  if ((((byte)*(undefined4 *)(iVar4 + 0x18) & 5) == 5) && (*(int *)(iVar4 + 0xc) != 0)) {
    iVar4 = *(int *)(iVar4 + 0xc);
  }
LAB_00416b93:
  if ((iVar4 != 0) && (FUN_00414f10(iVar4,1), ((byte)*(undefined4 *)(iVar4 + 0x18) & 0xc) == 0xc)) {
    uVar3 = FUN_004136f0(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x4d4),1);
    FUN_00413610(uVar3);
  }
  return;
}



void FUN_00416bd0(void)

{
  int local_8;
  int local_4;

  local_8 = DAT_00ec875c;
  local_4 = DAT_00ec8764;
  FUN_00416cc0(DAT_00ec875c,DAT_00ec8764,&local_8,&local_4);
  if (local_8 != DAT_004d79f4) {
    if ((local_8 < 0) && (DAT_004d79f4 < 0)) {
      FUN_00416d70(0x25,local_8 == -2);
    }
    if (((local_8 != DAT_004d79f4) && (0 < local_8)) && (0 < DAT_004d79f4)) {
      FUN_00416d70(0x27,local_8 == 1);
    }
  }
  if (local_4 != DAT_004d7c58) {
    if ((local_4 < 0) && (DAT_004d7c58 < 0)) {
      FUN_00416d70(0x26,local_4 == -2);
    }
    if (((local_4 != DAT_004d7c58) && (0 < local_4)) && (0 < DAT_004d7c58)) {
      FUN_00416d70(0x28,local_4 == 1);
    }
  }
  DAT_004d79f4 = local_8;
  DAT_004d7c58 = local_4;
  return;
}



void FUN_00416cc0(float param_1,float param_2,undefined4 *param_3,undefined4 *param_4)

{
  if ((param_3 != (undefined4 *)0x0) && (param_4 != (undefined4 *)0x0)) {
    if (0.0 <= param_1) {
      if (param_1 <= 0.5) {
        *param_3 = 2;
      }
      else {
        *param_3 = 1;
      }
    }
    else if (-0.5 <= param_1) {
      *param_3 = 0xffffffff;
    }
    else {
      *param_3 = 0xfffffffe;
    }
    if (param_2 < 0.0) {
      if (param_2 < -0.5) {
        *param_4 = 0xfffffffe;
        return;
      }
      *param_4 = 0xffffffff;
      return;
    }
    if (0.5 < param_2) {
      *param_4 = 1;
      return;
    }
    *param_4 = 2;
  }
  return;
}



void FUN_00416d70(undefined4 param_1,undefined4 param_2)

{
  FUN_00415640(param_1,param_2);
  return;
}



undefined4 *
FUN_00416d90(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,int param_7,code *param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;

  uVar3 = (param_7 + param_6) * 4 + 0x15c0;
  puVar1 = (undefined4 *)FUN_0049f270(uVar3);
  puVar5 = puVar1;
  for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  if (param_8 == (code *)0x0) {
    param_8 = FUN_00415850;
  }
  uVar2 = FUN_004174e0(puVar1[0x135],param_4);
  puVar1[0x135] = uVar2;
  puVar1[7] = param_2;
  puVar1[8] = param_5;
  puVar1[0x10] = param_6;
  puVar1[0xf] = param_7;
  puVar1[0x11] = puVar1 + param_7 + 0x15c;
  puVar1[4] = param_8;
  puVar1[5] = param_9;
  puVar1[0x137] = 0;
  FUN_00415810(puVar1,0,0,0x27f,0x1df);
  FUN_00414be0(puVar1,0xb7,0xf5,0xff,0xff);
  FUN_00414ca0(puVar1,0xb7,0xf5,0xff,0xff);
  FUN_00414c10(puVar1,0xb7,0xf5,0xff,0xff);
  FUN_00414c40(puVar1,0xff,0xff,0xff,0xff);
  FUN_00414c70(puVar1,0xff,0xff,0xff,0xff);
  FUN_00414b80(puVar1,param_4,0);
  if (param_3 == -1) {
    param_3 = 0;
  }
  FUN_004157d0(puVar1,param_3);
  FUN_00416840(param_1,puVar1);
  FUN_004151a0(puVar1,0xf,0,0);
  return puVar1;
}



void FUN_00416f20(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x34) = param_2;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x24) + -1 + param_2;
  *(int *)(param_1 + 0x38) = param_3;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x28) + -1 + param_3;
  return;
}



void FUN_00416f50(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  iVar2 = param_2 - *(int *)(param_1 + 0x24);
  iVar3 = param_3 - *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + param_2;
  *(int *)(param_1 + 0x24) = param_2;
  uVar4 = 0;
  *(int *)(param_1 + 0x30) = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28)) + param_3;
  *(int *)(param_1 + 0x28) = param_3;
  if (*(int *)(param_1 + 0x5c) != 0) {
    piVar1 = (int *)(param_1 + 0x7c);
    do {
      piVar1[-2] = piVar1[-2] + iVar2;
      *piVar1 = *piVar1 + iVar2;
      piVar1[-1] = piVar1[-1] + iVar3;
      uVar4 = uVar4 + 1;
      piVar1[1] = piVar1[1] + iVar3;
      piVar1 = piVar1 + 0xe;
    } while (uVar4 < *(uint *)(param_1 + 0x5c));
  }
  return;
}



void FUN_00416fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;

  iVar2 = 0;
  piVar1 = &DAT_004d7c68;
  do {
    if (*piVar1 == 0) {
      (&DAT_004d7c68)[iVar2 * 2] = param_1;
      (&DAT_004d7c6c)[iVar2 * 2] = param_2;
      (&DAT_004d79f8)[iVar2] = param_3;
      return;
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x4d8110);
  return;
}



undefined4 FUN_00417010(int param_1)

{
  int *piVar1;
  int iVar2;

  iVar2 = 0;
  piVar1 = &DAT_004d7c6c;
  do {
    if (*piVar1 == param_1) {
      return (&DAT_004d7c68)[iVar2 * 2];
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x4d8114);
  return 0;
}



int FUN_00417040(void)

{
  int iVar1;
  int *piVar2;

  iVar1 = 0xfb;
  piVar2 = &DAT_00e9d9dc;
  do {
    if (*piVar2 == 0) {
      return iVar1;
    }
    piVar2 = piVar2 + 8;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0xe9ec5c);
  return 0;
}



void FUN_00417060(int param_1)

{
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + 0xc) != 0) {
        FUN_00417060(*(int *)(param_1 + 0xc));
      }
      FUN_00412f60(param_1);
      param_1 = *(int *)(param_1 + 4);
    } while (param_1 != 0);
  }
  return;
}



void FUN_00417090(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *local_4;

  local_4 = &DAT_004d79f8;
  piVar2 = &DAT_004d7c68;
  do {
    if ((*local_4 != 0) && (iVar1 = *piVar2, iVar1 != 0)) {
      uVar4 = 0;
      if (*(short *)(iVar1 + 0xc) != 0) {
        puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x10) + 4);
        do {
          FUN_0048eac0(*puVar3);
          puVar3 = puVar3 + 2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)(int)*(short *)(iVar1 + 0xc));
      }
      FUN_0049f200(*(undefined4 *)(iVar1 + 0x10));
      FUN_0049f200(iVar1);
    }
    *piVar2 = 0;
    piVar2[1] = 0;
    *local_4 = 0;
    piVar2 = piVar2 + 2;
    local_4 = local_4 + 1;
  } while ((int)piVar2 < 0x4d8110);
  return;
}



void FUN_00417120(undefined4 param_1,int *param_2,int *param_3)

{
  short *psVar1;

  psVar1 = (short *)FUN_00417010(param_1);
  if (psVar1 != (short *)0x0) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)*psVar1;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = (int)psVar1[1];
    }
  }
  return;
}



void FUN_00417150(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;

  if (param_2 != (undefined4 *)0x0) {
    piVar1 = param_2 + 3;
    piVar2 = param_2 + 2;
    param_2[1] = 0;
    *param_2 = 0;
    *piVar1 = 0;
    *piVar2 = 0;
    FUN_00417120(param_1,piVar2,piVar1);
    *piVar2 = *piVar2 + -1;
    *piVar1 = *piVar1 + -1;
  }
  return;
}



void FUN_004171a0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar5 = param_2;
  iVar4 = param_1;
  if (param_1 != 0) {
    iVar1 = param_1 + param_2 * 0x38;
    FUN_00417120(*(undefined4 *)(param_1 + 100 + param_2 * 0x38),&param_1,&param_2);
    *(int *)(iVar1 + 0x84) = param_1;
    *(int *)(iVar1 + 0x88) = param_2;
    if (param_3 != (int *)0x0) {
      iVar2 = param_3[3];
      iVar3 = param_3[1];
      *(float *)(iVar1 + 0x6c) = (float)((param_3[2] - *param_3) + 1) / (float)param_1;
      *(float *)(iVar4 + (iVar5 + 2) * 0x38) = (float)((iVar2 - iVar3) + 1) / (float)param_2;
      *(int *)(iVar1 + 0x74) = *param_3;
      *(int *)(iVar1 + 0x78) = param_3[1];
      *(int *)(iVar1 + 0x7c) = param_3[2];
      *(int *)(iVar1 + 0x80) = param_3[3];
      return;
    }
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar4 + 0x28);
    *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar4 + 0x2c);
    *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar4 + 0x30);
    *(int *)(iVar1 + 0x7c) = param_1 + -1 + *(int *)(iVar4 + 0x24);
    *(int *)(iVar1 + 0x80) = *(int *)(iVar4 + 0x28) + -1 + param_2;
  }
  return;
}



void FUN_004172a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004172c0(param_1 + 0x24,param_2,param_3);
  return;
}



undefined4 FUN_004172c0(int *param_1,int param_2,int param_3)

{
  if ((((*param_1 <= param_2) && (param_2 <= param_1[2])) && (param_1[1] <= param_3)) &&
     (param_3 <= param_1[3])) {
    return 1;
  }
  return 0;
}



void FUN_004172f0(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  uint uVar4;
  undefined uVar5;
  undefined3 uVar6;

  uVar4 = *(uint *)(param_1 + 0x20);
  uVar6 = (undefined3)(uVar4 >> 8);
  if ((uVar4 & 2) == 0) {
    if ((uVar4 & 0x20) != 0) {
      FUN_00414be0(param_1,*(undefined *)(param_1 + 0x4d0),
                   CONCAT31(uVar6,*(undefined *)(param_1 + 0x4d1)),*(undefined *)(param_1 + 0x4d2),
                   *(undefined *)(param_1 + 0x4d3));
      FUN_00418cb0(param_1,1);
      return;
    }
    if ((uVar4 & 0x10) != 0) {
      FUN_00414be0(param_1,*(undefined *)(param_1 + 0x4c8),*(undefined *)(param_1 + 0x4c9),
                   CONCAT31(uVar6,*(undefined *)(param_1 + 0x4ca)),*(undefined *)(param_1 + 0x4cb));
      FUN_00418cb0(param_1,1);
      return;
    }
    uVar1 = *(undefined *)(param_1 + 0x4c7);
    uVar2 = *(undefined *)(param_1 + 0x4c6);
    uVar3 = *(undefined *)(param_1 + 0x4c5);
    uVar5 = *(undefined *)(param_1 + 0x4c4);
  }
  else {
    uVar1 = *(undefined *)(param_1 + 0x4cf);
    uVar2 = *(undefined *)(param_1 + 0x4ce);
    uVar3 = *(undefined *)(param_1 + 0x4cd);
    uVar5 = *(undefined *)(param_1 + 0x4cc);
  }
  FUN_00414be0(param_1,CONCAT31(uVar6,uVar5),uVar3,uVar2,CONCAT31(uVar6,uVar1));
  FUN_00418cb0(param_1,0);
  return;
}
#endif
