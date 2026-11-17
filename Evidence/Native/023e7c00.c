/* IL2CPP: Dino.BusSand.App.UI.HomeSideArt$$Build
Dino_BusSand_App_UI_HomeSideArt_Parts_o* Dino_BusSand_App_UI_HomeSideArt__Build (UnityEngine_Transform_o* parent, System_String_o* name, bool right, float y, System_String_o* disc, System_String_o* icon, float iconScale, UnityEngine_Vector2_o iconOffset, System_String_o* plate, System_String_o* preset, System_String_o* label, int32_t idle, float phase, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeSideArt$$Build
   Dino_BusSand_App_UI_HomeSideArt_Parts_o* Dino_BusSand_App_UI_HomeSideArt__Build
   (UnityEngine_Transform_o* parent, System_String_o* name, bool right, float y, System_String_o*
   disc, System_String_o* icon, float iconScale, UnityEngine_Vector2_o iconOffset, System_String_o*
   plate, System_String_o* preset, System_String_o* label, int32_t idle, float phase, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_HomeSideArt__Build_22e7c00
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined4 param_14)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  
  puVar4 = PTR_DAT_04cb7418;
  puVar3 = PTR_DAT_04cb4e90;
  puVar2 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c433 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cb4e90);
    FUN_02132f7c(PTR_DAT_04cb7418);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cad450);
    FUN_02132f7c(PTR_DAT_04cad4d8);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04cb7420);
    bRam0000000004f9c433 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Object___ctor_4870e5c(lVar6,0);
  bVar5 = (param_8 & 1) == 0;
  uVar9 = 0xc2f30000;
  uStack_a8 = 0;
  uVar1 = 0x3f800000;
  if (bVar5) {
    uVar1 = 0;
  }
  uStack_b0 = 0;
  if (bVar5) {
    uVar9 = 0x42f30000;
  }
  System_Nullable_Vector2____ctor_2bd0a48(uVar1,&uStack_b0,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar1 = _UNK_00e20190;
  uVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                    (_UNK_00e20190,0x437f0000,uVar9,param_1,param_6,param_7,uStack_b0,uStack_a8,0);
  puVar3 = PTR_DAT_04cb7420;
  puVar2 = PTR_DAT_04cad450;
  if (lVar6 != 0) {
    puVar12 = (undefined8 *)(lVar6 + 0x10);
    *puVar12 = uVar7;
    thunk_FUN_02134474(puVar12,uVar7);
    Dino_BusSand_App_UI_UiKit__HitArea_228277c(*puVar12,0);
    uVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                      (uVar1,0x437f0000,0,0,*puVar12,*(undefined8 *)puVar2,0,0,0);
    puVar12 = (undefined8 *)(lVar6 + 0x18);
    *puVar12 = uVar7;
    thunk_FUN_02134474(puVar12,uVar7);
    lVar8 = Dino_BusSand_App_UI_UiKit__Img_228203c
                      (0,0,0,0,0x3f800000,*puVar12,*(undefined8 *)puVar3,param_9,0,0);
    plVar11 = (long *)(lVar6 + 0x20);
    *plVar11 = lVar8;
    thunk_FUN_02134474(plVar11,lVar8);
    puVar2 = PTR_DAT_04cae5d0;
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x2c8))(plVar11,0,*(undefined8 *)(*plVar11 + 0x2d0));
      uVar7 = *puVar12;
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      puVar3 = PTR_DAT_04cacfc0;
      lVar8 = Dino_BusSand_App_UI_UiKit__Img_228203c
                        (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                         (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],param_3,param_4,
                         param_2,uVar7,*(undefined8 *)puVar2,param_10,0,0);
      plVar10 = (long *)(lVar6 + 0x28);
      *plVar10 = lVar8;
      thunk_FUN_02134474(plVar10,lVar8);
      plVar11 = (long *)*plVar10;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x2c8))(plVar11,0,*(undefined8 *)(*plVar11 + 0x2d0));
        puVar2 = PTR_DAT_04cad4d8;
        if (*plVar10 != 0) {
          UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar10,0);
          Dino_BusSand_App_UI_HomeSideArt__BasePivot_22e80ec();
          Dino_BusSand_App_UI_KitIdle__Add_2180de0(param_5,*plVar10,param_14,0);
          uVar7 = *puVar12;
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          lVar8 = Dino_BusSand_App_UI_UiKit__Img_228203c
                            (**(undefined4 **)(*(long *)puVar3 + 0xb8),
                             (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],0,0xc2a30000,0x3f800000,
                             uVar7,*(undefined8 *)puVar2,param_11,0,0);
          plVar10 = (long *)(lVar6 + 0x30);
          *plVar10 = lVar8;
          thunk_FUN_02134474(plVar10,lVar8);
          plVar11 = (long *)*plVar10;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x2c8))(plVar11,0,*(undefined8 *)(*plVar11 + 0x2d0));
            puVar3 = PTR_DAT_04cb4e20;
            puVar2 = PTR_DAT_04cac878;
            if (*plVar10 != 0) {
              uVar7 = UnityEngine_Component__get_transform_43bcd18(*plVar10,0);
              uStack_c8 = 0;
              uStack_c0 = 0;
              uStack_b8 = 0;
              System_Nullable_Color____ctor_2bc9090
                        (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_c8,
                         *(undefined8 *)puVar2);
              uStack_d0 = uStack_b8;
              uStack_d8 = uStack_c0;
              uStack_e0 = uStack_c8;
              lVar8 = Dino_BusSand_App_UI_UiKit__Text_2282314
                                (0x41d80000,0x4300000043000000,0x42400000,0,0x3f800000,uVar7,
                                 *(undefined8 *)puVar3,param_13,param_12,&uStack_e0,0x202,0);
              plVar11 = (long *)(lVar6 + 0x38);
              *plVar11 = lVar8;
              thunk_FUN_02134474(plVar11,lVar8);
              if (*plVar11 != 0) {
                TMPro_TMP_Text__set_enableAutoSizing_42cc454(*plVar11,1,0);
                if (*plVar11 != 0) {
                  TMPro_TMP_Text__set_textWrappingMode_42cc8a8(*plVar11,1,0);
                  if (*plVar11 != 0) {
                    TMPro_TMP_Text__set_lineSpacing_42cc758(0xc1a00000,*plVar11,0);
                    if (*plVar11 != 0) {
                      TMPro_TMP_Text__set_fontSizeMin_42cc4a4(0x41400000,*plVar11,0);
                      if (*plVar11 != 0) {
                        TMPro_TMP_Text__set_fontSizeMax_42cc4f0(0x41d80000,*plVar11,0);
                        return lVar6;
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
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

