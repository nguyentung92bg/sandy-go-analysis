/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$Pill
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitTopBar__Pill (UnityEngine_RectTransform_o* root, System_String_o* name, float iconX, Dino_BusSand_App_UI_KitTopBar_PillGeo_o geo, System_String_o* iconKey, TMPro_TextMeshProUGUI_o** text, UnityEngine_UI_Image_o** icon, System_Action_o* onClick, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$Pill
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitTopBar__Pill (UnityEngine_RectTransform_o*
   root, System_String_o* name, float iconX, Dino_BusSand_App_UI_KitTopBar_PillGeo_o geo,
   System_String_o* iconKey, TMPro_TextMeshProUGUI_o** text, UnityEngine_UI_Image_o** icon,
   System_Action_o* onClick, const MethodInfo* method); */

long Dino_BusSand_App_UI_KitTopBar__Pill_2284730
               (float param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
               undefined8 param_5,undefined8 *param_6,undefined8 *param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  puVar2 = PTR_DAT_04cb4e90;
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c15a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf420);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cb4e90);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf378);
    FUN_02132f7c(PTR_DAT_04cb4ed0);
    FUN_02132f7c(PTR_DAT_04cad480);
    FUN_02132f7c(PTR_DAT_04caf390);
    FUN_02132f7c(PTR_DAT_04cada10);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04cb4ec8);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9c15a = 1;
  }
  puVar4 = PTR_DAT_04caf420;
  fVar11 = (float)param_4[1];
  uStack_88 = 0;
  uStack_90 = 0;
  fVar13 = (fVar11 + -60.0) * 0.5;
  System_Nullable_Vector2____ctor_2bd0a48(0,0x3f000000,&uStack_90,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar6 = PTR_DAT_04caf390;
  puVar5 = PTR_DAT_04caf378;
  puVar3 = PTR_DAT_04cada10;
  puVar2 = PTR_DAT_04cad480;
  puVar1 = PTR_DAT_04cac878;
  lVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                    (fVar11 + 60.0,0x42f00000,fVar13 + param_1,0,param_2,param_3,uStack_90,uStack_88
                    );
  Dino_BusSand_App_UI_UiKit__HitArea_228277c();
  fVar11 = (float)param_4[1];
  uVar12 = param_4[2];
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cae5d0;
  Dino_BusSand_App_UI_UiKit__Img_228203c
            (fVar11,_UNK_00e20110,fVar11 * 0.5 - fVar13,uVar12,_UNK_00e2045c,lVar7,
             *(undefined8 *)puVar6,*(undefined8 *)puVar2,1);
  Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar5);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  System_Nullable_Color____ctor_2bc9090(&uStack_a8,*(undefined8 *)puVar1);
  uStack_b0 = uStack_98;
  uStack_b8 = uStack_a0;
  uStack_c0 = uStack_a8;
  uVar8 = Dino_BusSand_App_UI_UiKit__Text_2282314
                    (0x42580000,0x43340000,0x42840000,(float)param_4[3] - fVar13,0,lVar7,
                     *(undefined8 *)puVar3,*(undefined8 *)PTR_DAT_04cab288,
                     *(undefined8 *)PTR_DAT_04cad4a8,&uStack_c0,0x202);
  *param_6 = uVar8;
  thunk_FUN_02134474(param_6,uVar8);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar3 = PTR_DAT_04cb4ed0;
  puVar2 = PTR_DAT_04cb4ec8;
  puVar1 = PTR_DAT_04cacfc0;
  uVar8 = Dino_BusSand_App_UI_UiKit__Img_228203c
                    (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                     (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],0.0 - fVar13,*param_4,
                     0x3f800000,lVar7,*(undefined8 *)puVar4,param_5,0);
  *param_7 = uVar8;
  thunk_FUN_02134474(param_7,uVar8);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  plVar9 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                             (**(undefined4 **)(*(long *)puVar1 + 0xb8),
                              (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],
                              (float)param_4[4] - fVar13,param_4[5],0x3f800000,lVar7,
                              *(undefined8 *)puVar2,*(undefined8 *)puVar3,0);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x2c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
    puVar1 = PTR_DAT_04cad948;
    if (param_8 == 0) {
      lVar10 = UnityEngine_Component__get_gameObject_43bcde8(plVar9,0);
      if (lVar10 == 0) goto LAB_02384b30;
      UnityEngine_GameObject__SetActive_43c1408(lVar10,0,0);
    }
    else {
      if (lVar7 == 0) goto LAB_02384b30;
      uVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar8,param_8,1,*(undefined8 *)puVar1,0);
    }
    return lVar7;
  }
LAB_02384b30:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

