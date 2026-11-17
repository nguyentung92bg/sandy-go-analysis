/* IL2CPP: Dino.BusSand.App.UI.KitToggle$$Build
Dino_BusSand_App_UI_KitToggle_o* Dino_BusSand_App_UI_KitToggle__Build (UnityEngine_Transform_o* parent, System_String_o* name, UnityEngine_Vector2_o pos, System_Func_bool__o* get, System_Action_o* onClick, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitToggle$$Build
   Dino_BusSand_App_UI_KitToggle_o* Dino_BusSand_App_UI_KitToggle__Build (UnityEngine_Transform_o*
   parent, System_String_o* name, UnityEngine_Vector2_o pos, System_Func_bool__o* get,
   System_Action_o* onClick, const MethodInfo* method); */

long Dino_BusSand_App_UI_KitToggle__Build_22870a4
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long *plVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar2 = PTR_DAT_04cb4fb0;
  if ((bRam0000000004f9c163 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb4fb8);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cb4fc0);
    FUN_02132f7c(PTR_DAT_04cb4fb0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf370);
    FUN_02132f7c(PTR_DAT_04cb4fc8);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cb4fd0);
    FUN_02132f7c(PTR_DAT_04cb4fd8);
    FUN_02132f7c(PTR_DAT_04cb4fe0);
    FUN_02132f7c(PTR_DAT_04cb4fe8);
    FUN_02132f7c(PTR_DAT_04cafcf0);
    FUN_02132f7c(PTR_DAT_04cb4ff0);
    FUN_02132f7c(PTR_DAT_04cb4ff8);
    bRam0000000004f9c163 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar7,0);
  puVar2 = PTR_DAT_04cad330;
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = param_6;
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x10),param_6);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar16 = _UNK_00e209b0;
    lVar8 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                      (_UNK_00e209b0,0x42d80000,param_1,param_2,param_3,param_4,0,0);
    Dino_BusSand_App_UI_UiKit__HitArea_228277c();
    if ((lVar8 != 0) && (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar9 != 0)
       ) {
      lVar9 = UnityEngine_GameObject__AddComponent_object__275a54c
                        (lVar9,*(undefined8 *)PTR_DAT_04cb4fb8);
      plVar14 = (long *)(lVar7 + 0x18);
      *plVar14 = lVar9;
      thunk_FUN_02134474(plVar14,lVar9);
      puVar5 = PTR_DAT_04cb4fe0;
      puVar2 = PTR_DAT_04caf370;
      if (*plVar14 != 0) {
        puVar10 = (undefined8 *)(*plVar14 + 0x40);
        *puVar10 = param_5;
        thunk_FUN_02134474(puVar10,param_5);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        puVar6 = PTR_DAT_04cb4ff0;
        puVar4 = PTR_DAT_04cb4fe8;
        puVar3 = PTR_DAT_04cacfc0;
        uVar1 = _UNK_00e20460;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                  (uVar16,0x42d80000,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                   (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],_UNK_00e20460,lVar8,
                   *(undefined8 *)puVar2,*(undefined8 *)puVar5,&uStack_88);
        lVar9 = *plVar14;
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        uVar16 = *puVar13;
        uVar17 = puVar13[1];
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uVar11 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                           (uVar16,uVar17,uVar16,uVar17,uVar1,lVar8,*(undefined8 *)puVar4,
                            *(undefined8 *)puVar6,&uStack_a0);
        Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0x41800000,0x41800000,0x41800000,0x41800000);
        puVar5 = PTR_DAT_04cb4fd8;
        puVar2 = PTR_DAT_04cb4fd0;
        if (lVar9 != 0) {
          puVar10 = (undefined8 *)(lVar9 + 0x28);
          *puVar10 = uVar11;
          thunk_FUN_02134474(puVar10,uVar11);
          lVar9 = *plVar14;
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
          uVar16 = *puVar13;
          uVar17 = puVar13[1];
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          uVar11 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                             (uVar16,uVar17,uVar16,uVar17,uVar1,lVar8,*(undefined8 *)puVar5,
                              *(undefined8 *)puVar2,&uStack_b8);
          Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0x41800000,0x41800000,0x41800000,0x41800000);
          puVar4 = PTR_DAT_04cb4e20;
          puVar3 = PTR_DAT_04cafcf0;
          puVar2 = PTR_DAT_04cac878;
          if (lVar9 != 0) {
            puVar10 = (undefined8 *)(lVar9 + 0x20);
            *puVar10 = uVar11;
            thunk_FUN_02134474(puVar10,uVar11);
            lVar9 = *plVar14;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            System_Nullable_Color____ctor_2bc9090
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_d0,*(undefined8 *)puVar2)
            ;
            uStack_e0 = uStack_c0;
            uStack_e8 = uStack_c8;
            uStack_f0 = uStack_d0;
            uVar11 = Dino_BusSand_App_UI_UiKit__Text_2282314
                               (0x42680000,0x43020000,0x42980000,0,0,lVar8,*(undefined8 *)puVar4,
                                *(undefined8 *)puVar5,*(undefined8 *)puVar3,&uStack_f0,0x202);
            puVar5 = PTR_DAT_04cb4ff8;
            puVar2 = PTR_DAT_04cb4fc8;
            if (lVar9 != 0) {
              puVar10 = (undefined8 *)(lVar9 + 0x38);
              *puVar10 = uVar11;
              thunk_FUN_02134474(puVar10,uVar11);
              lVar15 = *plVar14;
              lVar9 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                (0x42a40000,0x42a40000,0,0,0x3f800000,lVar8,*(undefined8 *)puVar2,
                                 *(undefined8 *)puVar5,0);
              if ((lVar9 != 0) &&
                 (uVar11 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar9,0),
                 puVar5 = PTR_DAT_04cb4fc0, puVar2 = PTR_DAT_04caa458, lVar15 != 0)) {
                puVar10 = (undefined8 *)(lVar15 + 0x30);
                *puVar10 = uVar11;
                thunk_FUN_02134474(puVar10,uVar11);
                uVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
                uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                System_Action___ctor_47b5ed0(uVar12,lVar7,*(undefined8 *)puVar5,0);
                Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar11,uVar12,1,0,0);
                if (*(long *)(lVar7 + 0x18) != 0) {
                  Dino_BusSand_App_UI_KitToggle__Refresh_22875b8(*(long *)(lVar7 + 0x18),0);
                    /* try { // try from 02387588 to 0248771f has its CatchHandler @ 02387588
                       catch() { ... } // from try @ 02387588 with catch @ 02387588
                       catch() { ... } // from try @ 02387724 with catch @ 02387588
                       catch() { ... } // from try @ 02387770 with catch @ 02387588
                       catch() { ... } // from try @ 023877cc with catch @ 02387588 */
                  return *plVar14;
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

