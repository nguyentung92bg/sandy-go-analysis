/* IL2CPP: Dino.BusSand.App.UI.RevealPanel$$Prize
UnityEngine_UI_Image_o* Dino_BusSand_App_UI_RevealPanel__Prize (Dino_BusSand_App_UI_RevealPanel_o* __this, UnityEngine_Sprite_o* icon, UnityEngine_Vector2_o centre, float size, System_String_o* count, float countFont, float delay, bool rays, bool countBelow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.RevealPanel$$Prize
   UnityEngine_UI_Image_o* Dino_BusSand_App_UI_RevealPanel__Prize
   (Dino_BusSand_App_UI_RevealPanel_o* __this, UnityEngine_Sprite_o* icon, UnityEngine_Vector2_o
   centre, float size, System_String_o* count, float countFont, float delay, bool rays, bool
   countBelow, const MethodInfo* method); */

long Dino_BusSand_App_UI_RevealPanel__Prize_233290c
               (float param_1,float param_2,float param_3,float param_4,float param_5,long param_6,
               long param_7,undefined8 param_8,ulong param_9,ulong param_10)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  
  puVar3 = PTR_DAT_04cb9180;
  if ((bRam0000000004f9c627 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caf408);
    FUN_02132f7c(PTR_DAT_04caf410);
    FUN_02132f7c(PTR_DAT_04caf418);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb8f98);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb9188);
    FUN_02132f7c(PTR_DAT_04cb9180);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04caf260);
    FUN_02132f7c(PTR_DAT_04cb6238);
    FUN_02132f7c(PTR_DAT_04caf780);
    bRam0000000004f9c627 = 1;
  }
  puVar7 = PTR_DAT_04cad4c0;
  puVar6 = PTR_DAT_04cad330;
  puVar5 = PTR_DAT_04cac878;
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar9,0);
  puVar3 = PTR_DAT_04cb8f98;
  if ((param_9 & 1) != 0) {
    uVar13 = *(undefined8 *)(param_6 + 0x38);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    lVar10 = *(long *)puVar3;
    uVar16 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar17 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
    }
    puVar3 = PTR_DAT_04caf410;
    puVar12 = *(undefined4 **)(lVar10 + 0xb8);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    System_Nullable_Color____ctor_2bc9090
              (*puVar12,puVar12[1],puVar12[2],puVar12[3],&uStack_b8,*(undefined8 *)puVar5);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_c8 = uStack_b0;
    uStack_d0 = uStack_b8;
    uStack_c0 = uStack_a8;
    lVar10 = Dino_BusSand_App_UI_UiKit__Rays_228ce00
                       (param_3 * _UNK_00e2032c,uVar16,uVar17,_UNK_00e208e8,0x41900000,uVar13,
                        &uStack_d0,0);
    Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
              (param_2,param_1 + -540.0,lVar10,*(undefined8 *)puVar3);
    if (lVar10 == 0) goto LAB_02433000;
    UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar10,0);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (param_5,_UNK_00e20390,_UNK_00e2098c,_UNK_00e20178,lVar10,0,0,0);
  }
  puVar3 = PTR_DAT_04caf780;
  uVar13 = *(undefined8 *)(param_6 + 0x38);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = Dino_BusSand_App_UI_UiKit__Img_228203c
                     (param_3,param_3,0,0,0x3f800000,uVar13,*(undefined8 *)puVar3,0,0,0);
  puVar3 = PTR_DAT_04caf408;
  if (lVar10 != 0) {
    UnityEngine_UI_Image__set_sprite_44a7258(lVar10,param_7,0);
    UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar10,1,0);
    param_1 = param_1 + -540.0;
    Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
              (param_2,param_1,lVar10,*(undefined8 *)puVar3);
    uVar13 = UnityEngine_Component__get_transform_43bcd18(lVar10,0);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar7);
    }
    fVar2 = _UNK_00e207cc;
    fVar18 = _UNK_00e203f4;
    fVar15 = _UNK_00e1feac;
    fVar14 = _UNK_00e203f4;
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc(param_5 + _UNK_00e205f8,_UNK_00e207cc,uVar13,0,0,0)
    ;
    iVar1 = *(int *)(param_6 + 0x48);
    *(int *)(param_6 + 0x48) = iVar1 + 1;
    puVar8 = PTR_DAT_04cb9188;
    puVar4 = PTR_DAT_04cac1e8;
    puVar3 = PTR_DAT_04caa458;
    if (lVar9 != 0) {
      *(int *)(lVar9 + 0x10) = iVar1;
      uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Action___ctor_47b5ed0(uVar13,lVar9,*(undefined8 *)puVar8,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = Dino_BusSand_App_Tween__Delayed_2161264(param_5 + _UNK_00e201f4,uVar13,0);
      if ((lVar9 != 0) &&
         (lVar9 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar9,1,0), lVar9 != 0)) {
        Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar9,param_6,0);
        uVar11 = System_String__IsNullOrEmpty_46d2084(param_8,0);
        if (((uVar11 & 1) == 0) && ((param_10 & 1) != 0)) {
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar11 = UnityEngine_Object__op_Inequality_43c8dec(param_7,0,0);
          if ((uVar11 & 1) != 0) {
            if (param_7 == 0) goto LAB_02433000;
            UnityEngine_Sprite__get_rect_434ee28(param_7,0);
            fVar18 = fVar14;
            UnityEngine_Sprite__get_rect_434ee28(param_7,0);
            if (fVar15 < fVar14) {
              UnityEngine_Sprite__get_rect_434ee28(param_7,0);
              UnityEngine_Sprite__get_rect_434ee28(param_7,0);
              param_3 = (fVar15 * param_3) / fVar18;
            }
          }
          uVar13 = *(undefined8 *)(param_6 + 0x38);
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          System_Nullable_Color____ctor_2bc9090
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_b8,*(undefined8 *)puVar5);
          fVar18 = param_4 * _UNK_00e20178;
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uStack_e8 = uStack_b0;
          uStack_f0 = uStack_b8;
          uStack_e0 = uStack_a8;
          lVar9 = Dino_BusSand_App_UI_UiKit__Text_2282314
                            (param_4,param_4 * 6.0,fVar18,0,0,uVar13,*(undefined8 *)PTR_DAT_04cb6238
                             ,param_8,*(undefined8 *)PTR_DAT_04caf260,&uStack_f0,0x202,0);
          uVar13 = *(undefined8 *)PTR_DAT_04caf418;
          param_2 = param_4 * _UNK_00e208e8 + param_2 + param_3 * 0.5;
        }
        else {
          uVar11 = System_String__IsNullOrEmpty_46d2084(param_8,0);
          if ((uVar11 & 1) != 0) {
            return lVar10;
          }
          uVar13 = *(undefined8 *)(param_6 + 0x38);
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          System_Nullable_Color____ctor_2bc9090
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_b8,*(undefined8 *)puVar5);
          fVar15 = param_4 * _UNK_00e20178;
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uStack_108 = uStack_b0;
          uStack_110 = uStack_b8;
          uStack_100 = uStack_a8;
          lVar9 = Dino_BusSand_App_UI_UiKit__Text_2282314
                            (param_4,param_4 * 4.0,fVar15,0,0,uVar13,*(undefined8 *)PTR_DAT_04cb6238
                             ,param_8,*(undefined8 *)PTR_DAT_04caf260,&uStack_110,0x1001,0);
                    /* try { // try from 02432f58 to 0253308f has its CatchHandler @ 02432f58
                       catch() { ... } // from try @ 02432f58 with catch @ 02432f58
                       catch() { ... } // from try @ 024330a4 with catch @ 02432f58
                       catch() { ... } // from try @ 02433320 with catch @ 02432f58
                       catch() { ... } // from try @ 02433350 with catch @ 02432f58
                       catch() { ... } // from try @ 024333b0 with catch @ 02432f58
                       catch() { ... } // from try @ 024333c8 with catch @ 02432f58
                       catch() { ... } // from try @ 02433400 with catch @ 02432f58
                       catch() { ... } // from try @ 02433434 with catch @ 02432f58
                       catch() { ... } // from try @ 02433494 with catch @ 02432f58 */
          uVar13 = *(undefined8 *)PTR_DAT_04caf418;
          param_2 = param_2 + param_3 * fVar18;
          param_1 = param_1 + param_3 * _UNK_00e20aec + param_4 + param_4;
        }
        Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c(param_2,param_1,lVar9,uVar13);
        if (lVar9 != 0) {
          uVar13 = TMPro_TMP_Text__get_transform_42cd604(lVar9,0);
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar7);
          }
          Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                    (param_5 + fVar2,_UNK_00e2098c,_UNK_00e208d0,_UNK_00e20184,uVar13,0,0,0);
          return lVar10;
        }
      }
    }
  }
LAB_02433000:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

