/* IL2CPP: Dino.BusSand.App.UI.RevealPanel$$BuildStage
void Dino_BusSand_App_UI_RevealPanel__BuildStage (Dino_BusSand_App_UI_RevealPanel_o* __this, System_String_o* title, System_String_o* subtitle, System_String_o* titleImage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.RevealPanel$$BuildStage
   void Dino_BusSand_App_UI_RevealPanel__BuildStage (Dino_BusSand_App_UI_RevealPanel_o* __this,
   System_String_o* title, System_String_o* subtitle, System_String_o* titleImage, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_RevealPanel__BuildStage_2331f98
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar1 = PTR_DAT_04cb9148;
  puVar2 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c626 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb1b08);
    FUN_02132f7c(PTR_DAT_04caf408);
    FUN_02132f7c(PTR_DAT_04caf418);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb9150);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb9158);
    FUN_02132f7c(PTR_DAT_04cb9160);
    FUN_02132f7c(PTR_DAT_04cb9148);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04caf260);
    FUN_02132f7c(PTR_DAT_04cb7618);
    FUN_02132f7c(PTR_DAT_04cb9168);
    FUN_02132f7c(PTR_DAT_04cad4c8);
    FUN_02132f7c(PTR_DAT_04cb9170);
    FUN_02132f7c(PTR_DAT_04cadc30);
    FUN_02132f7c(PTR_DAT_04cb3640);
    FUN_02132f7c(PTR_DAT_04cb9178);
    FUN_02132f7c(PTR_DAT_04cb8e20);
    bRam0000000004f9c626 = 1;
  }
  puVar3 = PTR_DAT_04cadc30;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar7,0);
  uVar17 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = uVar17;
  uVar8 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  lVar9 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar8,*(undefined8 *)puVar3,0);
  if ((lVar9 == 0) || (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0), lVar10 == 0)
     ) goto LAB_02432900;
  UnityEngine_GameObject__AddComponent_object__275a54c(lVar10,*(undefined8 *)PTR_DAT_04cb1b08);
  lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
  if ((lVar10 == 0) ||
     (lVar10 = UnityEngine_GameObject__AddComponent_object__275a54c
                         (lVar10,*(undefined8 *)PTR_DAT_04cacf98), lVar7 == 0)) goto LAB_02432900;
  plVar15 = (long *)(lVar7 + 0x10);
  *plVar15 = lVar10;
  thunk_FUN_02134474(plVar15,lVar10);
  plVar11 = (long *)*plVar15;
  if (plVar11 == (long *)0x0) goto LAB_02432900;
  (**(code **)(*plVar11 + 0x2a8))
            (_UNK_00e20844,_UNK_00e20844,_UNK_00e20174,0,plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
  puVar4 = PTR_DAT_04cb9158;
  puVar3 = PTR_DAT_04cac208;
  puVar1 = PTR_DAT_04cac1e8;
  plVar15 = (long *)*plVar15;
  if (plVar15 == (long *)0x0) goto LAB_02432900;
  (**(code **)(*plVar15 + 0x2c8))(plVar15,1,*(undefined8 *)(*plVar15 + 0x2d0));
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Action_float____ctor_35f1448(uVar8,lVar7,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e20aec,uVar8,0);
  if ((lVar10 == 0) ||
     (lVar10 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar10,1,0), puVar4 = PTR_DAT_04cb3640,
     puVar3 = PTR_DAT_04cad4c8, puVar1 = PTR_DAT_04cac878, lVar10 == 0)) goto LAB_02432900;
  Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar10,param_1,0);
  uVar8 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  uVar8 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                    (0x44870000,_UNK_00e20028,0,0,uVar8,*(undefined8 *)puVar4,0,0,0);
  puVar16 = (undefined8 *)(param_1 + 0x38);
  *puVar16 = uVar8;
  thunk_FUN_02134474(puVar16,uVar8);
  uVar12 = System_String__IsNullOrEmpty_46d2084(param_4,0);
  if ((uVar12 & 1) == 0) {
    uVar8 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(param_4,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar12 & 1) == 0) goto LAB_024323cc;
    uVar8 = *puVar16;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar10 = Dino_BusSand_App_UI_UiKit__Img_228203c
                       (0,0,0,0,0x3f800000,uVar8,*(undefined8 *)puVar3,param_4,0,0);
    Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
              (_UNK_00e202f0,0,lVar10,*(undefined8 *)PTR_DAT_04caf408);
    if (lVar10 == 0) goto LAB_02432900;
    uVar8 = UnityEngine_Component__get_transform_43bcd18(lVar10,0);
  }
  else {
LAB_024323cc:
    puVar4 = PTR_DAT_04cb7618;
    uVar8 = *puVar16;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_78,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_80 = uStack_68;
    uStack_88 = uStack_70;
    uStack_90 = uStack_78;
    lVar10 = Dino_BusSand_App_UI_UiKit__Text_2282314
                       (0x43160000,0x44610000,0x43340000,0,0,uVar8,*(undefined8 *)puVar3,param_2,
                        *(undefined8 *)puVar4,&uStack_90,0x202,0);
    Dino_BusSand_App_UI_UiKit__GoldGradient_228baa0(lVar10,*(undefined8 *)puVar4,0);
    if (lVar10 == 0) goto LAB_02432900;
    TMPro_TMP_Text__set_characterSpacing_42cc65c(0x41100000,lVar10,0);
    Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
              (0x43c30000,0,lVar10,*(undefined8 *)PTR_DAT_04caf418);
    uVar8 = TMPro_TMP_Text__get_transform_42cd604(lVar10,0);
  }
  if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
  }
  Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
            (_UNK_00e2043c,_UNK_00e2098c,_UNK_00e20324,_UNK_00e1feac,uVar8,0,0,0);
  puVar3 = PTR_DAT_04caf260;
  uVar12 = System_String__IsNullOrEmpty_46d2084(param_3,0);
  if ((uVar12 & 1) == 0) {
    uVar8 = *puVar16;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_78,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_a0 = uStack_68;
    uStack_a8 = uStack_70;
    uStack_b0 = uStack_78;
    lVar10 = Dino_BusSand_App_UI_UiKit__Text_2282314
                       (0x42780000,0x44610000,0x42a00000,0,0,uVar8,*(undefined8 *)PTR_DAT_04cb9170,
                        param_3,*(undefined8 *)puVar3,&uStack_b0,0x202,0);
    Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
              (0x44030000,0,lVar10,*(undefined8 *)PTR_DAT_04caf418);
    if (lVar10 == 0) goto LAB_02432900;
    uVar8 = TMPro_TMP_Text__get_transform_42cd604(lVar10,0);
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
    }
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (_UNK_00e208cc,_UNK_00e20094,_UNK_00e207cc,0x40000000,uVar8,0,0,0);
  }
  uVar8 = *puVar16;
  lVar13 = *(long *)PTR_DAT_04ca9d18;
  lVar10 = *(long *)(lVar13 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar13);
    lVar10 = *(long *)(lVar13 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  puVar6 = PTR_DAT_04cb9178;
  puVar5 = PTR_DAT_04cb9168;
  puVar4 = PTR_DAT_04cb8e20;
  uVar14 = **(undefined8 **)(lVar10 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar14 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                     (*(undefined8 *)puVar6,*(undefined8 *)puVar5,uVar14,0);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  System_Nullable_Color____ctor_2bc9090
            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_78,*(undefined8 *)puVar1);
  uStack_c0 = uStack_68;
  uStack_c8 = uStack_70;
  uStack_d0 = uStack_78;
  lVar10 = Dino_BusSand_App_UI_UiKit__Text_2282314
                     (0x428c0000,0x443e0000,0x42b40000,0,0,uVar8,*(undefined8 *)puVar4,uVar14,
                      *(undefined8 *)puVar3,&uStack_d0,0x202,0);
  plVar11 = (long *)(lVar7 + 0x18);
  *plVar11 = lVar10;
  thunk_FUN_02134474(plVar11,lVar10);
  Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
            (_UNK_00e206b0,0,*plVar11,*(undefined8 *)PTR_DAT_04caf418);
  if (*plVar11 != 0) {
    uVar8 = UnityEngine_Component__get_gameObject_43bcde8(*plVar11,0);
    puVar2 = PTR_DAT_04cac1e8;
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
    }
    lVar10 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar8,0);
    puVar3 = PTR_DAT_04cb9160;
    puVar1 = PTR_DAT_04caa458;
    if (lVar10 != 0) {
      UnityEngine_CanvasGroup__set_alpha_467ad3c(0,lVar10,0);
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Action___ctor_47b5ed0(uVar8,lVar7,*(undefined8 *)puVar3,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e20094,uVar8,0);
      if ((lVar7 != 0) &&
         (lVar7 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar7,1,0), puVar2 = PTR_DAT_04cb9150,
         lVar7 != 0)) {
        Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar7,param_1,0);
        uVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
        uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
        System_Action___ctor_47b5ed0(uVar14,param_1,*(undefined8 *)puVar2,0);
        Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar8,uVar14,0,0,0);
        if (*(long *)(param_1 + 0x38) != 0) {
          uVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x38),0);
          uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          System_Action___ctor_47b5ed0(uVar14,param_1,*(undefined8 *)puVar2,0);
          Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar8,uVar14,0,0,0);
          Dino_BusSand_App_UI_UiKit__HitArea_228277c(*(undefined8 *)(param_1 + 0x38),0);
          return;
        }
      }
    }
  }
LAB_02432900:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

