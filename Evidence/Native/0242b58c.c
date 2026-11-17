/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$RewardImage
UnityEngine_UI_Image_o* Dino_BusSand_App_UI_DailyGiftPanel__RewardImage (UnityEngine_RectTransform_o* node, System_Collections_Generic_KeyValuePair_int__long__o r, float scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$RewardImage
   UnityEngine_UI_Image_o* Dino_BusSand_App_UI_DailyGiftPanel__RewardImage
   (UnityEngine_RectTransform_o* node, System_Collections_Generic_KeyValuePair_int__long__o r, float
   scale, const MethodInfo* method); */

long Dino_BusSand_App_UI_DailyGiftPanel__RewardImage_232b58c
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5
               ,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int iStack_44;
  
  if ((bRam0000000004f9c5fc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf218);
    FUN_02132f7c(PTR_DAT_04cb8f28);
    bRam0000000004f9c5fc = 1;
  }
  puVar2 = PTR_DAT_04cb8f28;
  puVar1 = PTR_DAT_04ca9ae8;
  iStack_44 = 0;
  if (param_6 == 0x3e9) {
    lVar3 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)PTR_DAT_04caf218,0);
  }
  else {
    lVar3 = Dino_BusSand_App_UI_KitParts__ItemIcon_23100d0(param_6,0);
    if (lVar3 == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8(param_6,0,0);
    }
  }
  iStack_44 = param_6;
  uVar4 = System_Int32__ToString_482d750(&iStack_44,0);
  uVar4 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar5 & 1) == 0) {
    param_4 = 120.0;
    param_3 = 120.0;
  }
  else {
    if (lVar3 == 0) goto LAB_0242b778;
    UnityEngine_Sprite__get_rect_434ee28(lVar3,0);
    param_3 = param_3 * param_1;
    param_4 = param_4 * param_1;
  }
  if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_UI_UiKit__Img_228203c(param_3,param_4,0,0,0x3f800000,param_5,uVar4,0,0,0)
  ;
  if (lVar6 != 0) {
    UnityEngine_UI_Image__set_sprite_44a7258(lVar6,lVar3,0);
    UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar6,1,0);
    return lVar6;
  }
LAB_0242b778:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

