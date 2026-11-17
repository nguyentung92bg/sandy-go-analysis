/* IL2CPP: Dino.BusSand.App.UI.EventKit$$Bar
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_EventKit__Bar (UnityEngine_Transform_o* parent, System_String_o* name, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos, UnityEngine_Color_o fill, TMPro_TextMeshProUGUI_o** label, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.EventKit$$Bar
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_EventKit__Bar (UnityEngine_Transform_o* parent,
   System_String_o* name, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos, UnityEngine_Color_o
   fill, TMPro_TextMeshProUGUI_o** label, const MethodInfo* method); */

long Dino_BusSand_App_UI_EventKit__Bar_21be228
               (float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
               ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 *param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9bad2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf5e8);
    FUN_02132f7c(PTR_DAT_04cafaf0);
    FUN_02132f7c(PTR_DAT_04cad4c8);
    FUN_02132f7c(PTR_DAT_04caf3c8);
    FUN_02132f7c(PTR_DAT_04cafaf8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bad2 = 1;
  }
  puVar2 = PTR_DAT_04cafaf8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 022be30c to 023be30f has its CatchHandler @ 022be394 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022be310 to 023be37b has its CatchHandler @ 022be15c */
  plVar5 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                             (param_1,param_2,param_3,param_4,0x3f800000,param_9,param_10,
                              *(undefined8 *)puVar2,1,0);
  puVar1 = PTR_DAT_04caf3c8;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x2a8))
              (_UNK_00e208e8,_UNK_00e1ff68,_UNK_00e205f8,_UNK_00e206e4,plVar5,
               *(undefined8 *)(*plVar5 + 0x2b0));
                    /* try { // try from 022be37c to 023be37f has its CatchHandler @ 022be380 */
                    /* catch() { ... } // from try @ 022be37c with catch @ 022be380
                       try { // try from 022be380 to 023be3a7 has its CatchHandler @ 022be15c */
    uVar6 = UnityEngine_Component__get_transform_43bcd18(plVar5,0);
                    /* catch() { ... } // from try @ 022be30c with catch @ 022be394 */
    lVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                      (param_1 + -8.0,param_2 + -8.0,0,0,uVar6,*(undefined8 *)puVar1,0,0,0);
    puVar1 = PTR_DAT_04cafaf0;
    if (lVar7 != 0) {
      UnityEngine_RectTransform__set_pivot_43cfbf4(0,0x3f000000,lVar7,0);
      UnityEngine_RectTransform__set_anchorMax_43cf768(0,0x3f000000,lVar7,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f000000,lVar7,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0x40800000,0,lVar7,0);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      plVar8 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                 (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                                  (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],0,0,
                                  0x3f800000,lVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar2,1,0);
      puVar4 = PTR_DAT_04caf5e8;
      puVar3 = PTR_DAT_04cad4c8;
      puVar2 = PTR_DAT_04cac878;
      puVar1 = PTR_DAT_04ca9c30;
      if (plVar8 != (long *)0x0) {
        uVar6 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar8,0);
        Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0,0,0,0,uVar6,0);
        (**(code **)(*plVar8 + 0x2a8))
                  (param_5,param_6,param_7,param_8,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        uVar6 = UnityEngine_Component__get_transform_43bcd18(plVar5,0);
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        System_Nullable_Color____ctor_2bc9090
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_a8,*(undefined8 *)puVar2);
        uStack_b8 = uStack_a0;
        uStack_c0 = uStack_a8;
        uStack_b0 = uStack_98;
        uVar6 = Dino_BusSand_App_UI_UiKit__Text_2282314
                          (param_2 * _UNK_00e1fdd0,param_1,param_2,0,0x40000000,uVar6,
                           *(undefined8 *)puVar4,*(undefined8 *)puVar1,*(undefined8 *)puVar3,
                           &uStack_c0,0x202,0);
        *param_11 = uVar6;
        thunk_FUN_02134474(param_11,uVar6);
        return lVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

