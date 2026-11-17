/* IL2CPP: Dino.BusSand.App.UI.RewardPopup$$RewardIcon
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_RewardPopup__RewardIcon (UnityEngine_Transform_o* parent, System_Collections_Generic_KeyValuePair_int__long__o r, float size, TMPro_TextMeshProUGUI_o** amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RewardPopup$$RewardIcon
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_RewardPopup__RewardIcon
   (UnityEngine_Transform_o* parent, System_Collections_Generic_KeyValuePair_int__long__o r, float
   size, TMPro_TextMeshProUGUI_o** amount, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_RewardPopup__RewardIcon_2325430
          (float param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  int iStack_44;
  
  puVar1 = PTR_DAT_04cb8ca0;
  puVar2 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c5dc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04cb8ca0);
    FUN_02132f7c(PTR_DAT_04cafbf0);
    FUN_02132f7c(PTR_DAT_04caf460);
    FUN_02132f7c(PTR_DAT_04cb82d8);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    bRam0000000004f9c5dc = 1;
  }
  puVar3 = PTR_DAT_04cae5d0;
  uStack_68 = 0;
  iStack_44 = param_3;
  uVar4 = System_Int32__ToString_482d750(&iStack_44,0);
  uVar4 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar4,0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar4 = Dino_BusSand_App_UI_UiKit__Node_22818c4(param_1,param_1 + 60.0,0,0,param_2,uVar4,0,0,0);
  lVar7 = Dino_BusSand_App_UI_UiKit__Img_228203c
                    (param_1,param_1,0,0x41f00000,0x3f800000,uVar4,*(undefined8 *)puVar3,0,0,0);
  if (param_3 == 0x3e9) {
    lVar5 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)PTR_DAT_04cb82d8,0);
  }
  else {
    lVar5 = Dino_BusSand_App_UI_KitParts__ItemIcon_23100d0(param_3,0);
    if (lVar5 == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8,0);
      }
      lVar5 = Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8(param_3,0,0);
    }
  }
  puVar3 = PTR_DAT_04cafbf0;
  puVar1 = PTR_DAT_04cac878;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224(lVar5,lVar5);
  }
  UnityEngine_UI_Image__set_sprite_44a7258(lVar7,lVar5,0);
  UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar7,1,0);
  uVar8 = *(undefined8 *)puVar3;
  uStack_68 = param_4;
  uVar6 = System_Int64__ToString_482e7e4(&uStack_68,0);
  if (param_3 != 0x3e9) {
    uVar6 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar6,0);
  }
  puVar3 = PTR_DAT_04caf460;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  System_Nullable_Color____ctor_2bc9090
            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_80,*(undefined8 *)puVar1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_90 = uStack_70;
  uStack_98 = uStack_78;
  uStack_a0 = uStack_80;
  uVar6 = Dino_BusSand_App_UI_UiKit__Text_2282314
                    (0x42800000,param_1 + 60.0,0x42a00000,0,param_1 * -0.5 + 10.0,uVar4,uVar8,uVar6,
                     *(undefined8 *)puVar3,&uStack_a0,0x202,0);
  *param_5 = uVar6;
  thunk_FUN_02134474(param_5,uVar6);
  return uVar4;
}

