/* IL2CPP: Dino.BusSand.App.UI.PlayOnOffer$$Frame
void Dino_BusSand_App_UI_PlayOnOffer__Frame (UnityEngine_RectTransform_o* box, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PlayOnOffer$$Frame
   void Dino_BusSand_App_UI_PlayOnOffer__Frame (UnityEngine_RectTransform_o* box, const MethodInfo*
   method); */

ulong Dino_BusSand_App_UI_PlayOnOffer__Frame_2331ae8
                (undefined1 param_1 [16],undefined4 param_2,float param_3,undefined4 param_4,
                undefined8 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  
  puVar3 = PTR_DAT_04cb9128;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c624 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb9130);
    FUN_02132f7c(PTR_DAT_04cb9138);
    FUN_02132f7c(PTR_DAT_04cb77d8);
    FUN_02132f7c(PTR_DAT_04cb9140);
    FUN_02132f7c(PTR_DAT_04cb77f0);
    FUN_02132f7c(PTR_DAT_04cb9128);
    bRam0000000004f9c624 = 1;
  }
  lVar4 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  puVar3 = PTR_DAT_04cb9130;
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  uVar9 = **(undefined8 **)(*(long *)PTR_DAT_04cb9130 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
    if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
       (uVar9 = UnityEngine_Sprite__get_texture_434efd8(**(long **)(*(long *)puVar3 + 0xb8),0),
       lVar4 == 0)) goto LAB_02431e94;
    uVar7 = UnityEngine_Sprite__get_texture_434efd8(lVar4,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,uVar7,0);
    if ((uVar5 & 1) == 0) goto LAB_02431e18;
  }
  else if (lVar4 == 0) goto LAB_02431e94;
  fVar11 = (float)UnityEngine_Sprite__get_rect_434ee28(lVar4,0);
  uVar9 = UnityEngine_Sprite__get_texture_434efd8(lVar4,0);
  uVar12 = UnityEngine_Sprite__get_pixelsPerUnit_434f3ec(lVar4,0);
  uVar9 = UnityEngine_Sprite__Create_4351088
                    (fVar11,param_2,0x43660000,param_4,0x3f000000,0x3f000000,uVar12,uVar9,0,0,0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar9;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar9);
  uVar9 = UnityEngine_Sprite__get_texture_434efd8(lVar4,0);
  uVar12 = UnityEngine_Sprite__get_pixelsPerUnit_434f3ec(lVar4,0);
  uVar9 = UnityEngine_Sprite__Create_4351088
                    (fVar11 + 230.0,param_2,param_3 + -230.0,param_4,0x3f000000,0x3f000000,uVar12,
                     uVar9,0,0,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar8 = uVar9;
  thunk_FUN_02134474(puVar8,uVar9);
  lVar10 = **(long **)(*(long *)puVar3 + 0xb8);
  uVar9 = UnityEngine_Object__get_name_43c71a4(lVar4,0);
  uVar9 = System_String__Concat_46c82e0(uVar9,*(undefined8 *)PTR_DAT_04cb77d8,0);
  if (lVar10 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar10,uVar9,0);
    lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    uVar9 = UnityEngine_Object__get_name_43c71a4(lVar4,0);
    uVar9 = System_String__Concat_46c82e0(uVar9,*(undefined8 *)PTR_DAT_04cb77f0,0);
    if (lVar10 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar10,uVar9,0);
LAB_02431e18:
      Dino_BusSand_App_UI_PlayOnOffer__Piece_2331e98
                (_UNK_00e20790,_UNK_00e209dc,param_5,*(undefined8 *)PTR_DAT_04cb9140,
                 **(undefined8 **)(*(long *)puVar3 + 0xb8));
      puVar2 = PTR_DAT_04cad330;
      uVar1 = _UNK_00e205bc;
      uVar12 = _UNK_00e204fc;
      uVar9 = *(undefined8 *)PTR_DAT_04cb9138;
      uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      if ((bRam0000000004f9c625 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caf408);
        FUN_02132f7c(PTR_DAT_04cad330);
        bRam0000000004f9c625 = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_UI_UiKit__Img_228203c
                        (uVar12,_UNK_00e200c4,0,0,0x3f800000,param_5,uVar9,0,0,0);
      puVar2 = PTR_DAT_04caf408;
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_UI_Image__set_sprite_44a7258(uVar5,uVar7,0);
      UnityEngine_UI_Image__set_type_44afa58(uVar5,1,0);
      UnityEngine_UI_Image__set_preserveAspect_44afae0(uVar5,0,0);
      fVar11 = _UNK_00e20a30;
      if ((bRam0000000004f9d81c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabdb0,*(undefined8 *)puVar2);
        bRam0000000004f9d81c = 1;
      }
      if ((uVar5 != 0) &&
         (plVar6 = (long *)UnityEngine_Component__get_transform_43bcd18(uVar5,0),
         plVar6 != (long *)0x0)) {
        if (*plVar6 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar6);
        }
        UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,plVar6,0);
        UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,plVar6,0);
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(uVar1,-fVar11,plVar6,0);
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_02431e94:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

