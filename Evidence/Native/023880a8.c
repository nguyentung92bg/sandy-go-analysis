/* IL2CPP: Dino.BusSand.App.UI.KitBoosterButton$$Build
Dino_BusSand_App_UI_KitBoosterButton_o* Dino_BusSand_App_UI_KitBoosterButton__Build (UnityEngine_Transform_o* parent, System_String_o* name, System_String_o* iconKey, UnityEngine_Vector2_o pos, float size, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitBoosterButton$$Build
   Dino_BusSand_App_UI_KitBoosterButton_o* Dino_BusSand_App_UI_KitBoosterButton__Build
   (UnityEngine_Transform_o* parent, System_String_o* name, System_String_o* iconKey,
   UnityEngine_Vector2_o pos, float size, const MethodInfo* method); */

long Dino_BusSand_App_UI_KitBoosterButton__Build_22880a8
               (undefined4 param_1,undefined4 param_2,float param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  
  puVar2 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c169 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb5030);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb5038);
    FUN_02132f7c(PTR_DAT_04cb5040);
    FUN_02132f7c(PTR_DAT_04caf380);
    FUN_02132f7c(PTR_DAT_04cb5048);
    FUN_02132f7c(PTR_DAT_04caf568);
    FUN_02132f7c(PTR_DAT_04cb5050);
    FUN_02132f7c(PTR_DAT_04cb5058);
    FUN_02132f7c(PTR_DAT_04cb5060);
    FUN_02132f7c(PTR_DAT_04cb5068);
    FUN_02132f7c(PTR_DAT_04cb5070);
    FUN_02132f7c(PTR_DAT_04cb5078);
    FUN_02132f7c(PTR_DAT_04cb5080);
    FUN_02132f7c(PTR_DAT_04cb5088);
    FUN_02132f7c(PTR_DAT_04caf590);
    FUN_02132f7c(PTR_DAT_04cb5090);
    FUN_02132f7c(PTR_DAT_04caced0);
    FUN_02132f7c(PTR_DAT_04cb5098);
    FUN_02132f7c(PTR_DAT_04cb50a0);
    FUN_02132f7c(PTR_DAT_04cafc38);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb50a8);
    FUN_02132f7c(PTR_DAT_04cb50b0);
    bRam0000000004f9c169 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                    (param_3,param_3,param_1,param_2,param_4,param_5,0,0);
  Dino_BusSand_App_UI_UiKit__HitArea_228277c();
  if ((lVar7 != 0) &&
     (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), puVar1 = PTR_DAT_04cb5090,
     puVar2 = PTR_DAT_04caf380, lVar8 != 0)) {
    lVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar8,*(undefined8 *)PTR_DAT_04cb5030);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar3 = PTR_DAT_04cacfc0;
    lVar9 = Dino_BusSand_App_UI_UiKit__Img_228203c
                      (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],0,0,0x3f800000,lVar7,
                       *(undefined8 *)puVar2,*(undefined8 *)puVar1,1);
    puVar5 = PTR_DAT_04cb5080;
    puVar1 = PTR_DAT_04cb5038;
    puVar2 = PTR_DAT_04caf568;
    if (lVar9 != 0) {
      UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar9,0);
      Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0,0xc0e00000,0,0);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      plVar10 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                  (**(undefined4 **)(*(long *)puVar3 + 0xb8),
                                   (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],0,0,0x3f800000,
                                   lVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar2,1);
      Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar5);
      if (plVar10 != (long *)0x0) {
        fVar16 = param_3 / 212.0;
        (**(code **)(*plVar10 + 0x2a8))(plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
        uVar11 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar10,0);
        fVar17 = fVar16 * 18.0;
        Dino_BusSand_App_UI_UiKit__Stretch_2281f58(fVar17,fVar17,fVar17,fVar17);
        puVar5 = PTR_DAT_04cb5070;
        puVar1 = PTR_DAT_04cb5068;
        puVar2 = PTR_DAT_04cb5050;
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x28) = uVar11;
          thunk_FUN_02134474((undefined8 *)(lVar8 + 0x28),uVar11);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          puVar6 = PTR_DAT_04cb5088;
          puVar4 = PTR_DAT_04caf590;
          uVar14 = **(undefined4 **)(*(long *)puVar3 + 0xb8);
          uVar15 = (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1];
          uStack_a8 = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          uVar11 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                             (uVar14,uVar15,uVar14,uVar15,fVar16,lVar7,*(undefined8 *)puVar1,
                              *(undefined8 *)puVar5,&uStack_a8);
          puVar13 = (undefined8 *)(lVar8 + 0x20);
          *puVar13 = uVar11;
          thunk_FUN_02134474(puVar13,uVar11);
          Dino_BusSand_App_UI_UiKit__Stretch_2281f58(fVar17,fVar17,fVar17,fVar17,*puVar13);
          uVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                             (fVar16 * 140.0,fVar16 * 140.0,0,fVar16 * 4.0,0x3f800000,lVar7,
                              *(undefined8 *)puVar2,param_6,0);
          *(undefined8 *)(lVar8 + 0x30) = uVar11;
          thunk_FUN_02134474();
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
                    /* try { // try from 02388508 to 02488a83 has its CatchHandler @ 02388508
                       catch() { ... } // from try @ 02388508 with catch @ 02388508
                       catch() { ... } // from try @ 02388ab4 with catch @ 02388508
                       catch() { ... } // from try @ 02388af0 with catch @ 02388508
                       catch() { ... } // from try @ 02388b4c with catch @ 02388508 */
          uVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                             (**(undefined4 **)(*(long *)puVar3 + 0xb8),
                              (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],0,fVar16 * 14.0,
                              fVar16 * _UNK_00e20464,lVar7,*(undefined8 *)puVar6,
                              *(undefined8 *)puVar4,0);
          *(undefined8 *)(lVar8 + 0x38) = uVar11;
          thunk_FUN_02134474();
          puVar2 = PTR_DAT_04cac878;
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          System_Nullable_Color____ctor_2bc9090
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_c0,
                     *(undefined8 *)PTR_DAT_04cac878);
          uStack_d8 = uStack_b8;
          uStack_e0 = uStack_c0;
          uStack_d0 = uStack_b0;
          uVar11 = Dino_BusSand_App_UI_UiKit__Text_2282314
                             (fVar16 * 40.0,fVar16 * 180.0,fVar16 * 50.0,0,fVar16 * -62.0,lVar7,
                              *(undefined8 *)PTR_DAT_04cb50a0,*(undefined8 *)PTR_DAT_04ca9c30,
                              *(undefined8 *)PTR_DAT_04cb5048,&uStack_e0,0x202);
          *(undefined8 *)(lVar8 + 0x60) = uVar11;
          thunk_FUN_02134474();
          fVar17 = param_3 * _UNK_00e20324;
          fVar18 = param_3 * _UNK_00e202cc;
          lVar9 = Dino_BusSand_App_UI_UiKit__Badge_22888cc
                            (fVar17,fVar18,fVar16 * 78.0,lVar7,*(undefined8 *)PTR_DAT_04cb50b0,0);
          plVar10 = (long *)(lVar8 + 0x58);
          *plVar10 = lVar9;
          thunk_FUN_02134474(plVar10,lVar9);
          if (((*plVar10 != 0) &&
              (lVar9 = TMPro_TMP_Text__get_transform_42cd604(*plVar10,0), lVar9 != 0)) &&
             (lVar9 = UnityEngine_Transform__get_parent_43d0d70(lVar9,0), puVar1 = PTR_DAT_04cb5058,
             lVar9 != 0)) {
            uVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
            *(undefined8 *)(lVar8 + 0x40) = uVar11;
            thunk_FUN_02134474();
            Dino_BusSand_App_UI_UiKit__Badge_22888cc
                      (fVar17,fVar18,fVar16 * 78.0,lVar7,*(undefined8 *)puVar1,1);
            lVar9 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)puVar1,0);
            puVar5 = PTR_DAT_04cb5078;
            puVar3 = PTR_DAT_04cb5060;
            puVar1 = PTR_DAT_04cb5040;
            if (lVar9 != 0) {
              uVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
              *(undefined8 *)(lVar8 + 0x48) = uVar11;
              thunk_FUN_02134474();
              plVar10 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                          (fVar16 * 130.0,fVar16 * 54.0,0,param_3 * _UNK_00e20468,
                                           fVar16 * _UNK_00e20094,lVar7,*(undefined8 *)puVar3,
                                           *(undefined8 *)puVar5,1);
              Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar1);
              puVar1 = PTR_DAT_04ca9d18;
              if (plVar10 != (long *)0x0) {
                (**(code **)(*plVar10 + 0x2a8))(plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
                uVar11 = UnityEngine_Component__get_transform_43bcd18(plVar10,0);
                lVar9 = *(long *)puVar1;
                lVar7 = *(long *)(lVar9 + 0x38);
                if (lVar7 == 0) {
                  FUN_0216b4cc(lVar9);
                  lVar7 = *(long *)(lVar9 + 0x38);
                }
                lVar7 = *(long *)(lVar7 + 0x10);
                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_0216b470();
                }
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                puVar4 = PTR_DAT_04cb50a8;
                puVar5 = PTR_DAT_04cb5098;
                puVar3 = PTR_DAT_04cafc38;
                puVar1 = PTR_DAT_04caced0;
                lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_0216b470();
                }
                uVar12 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                                   (*(undefined8 *)puVar5,*(undefined8 *)puVar1,
                                    **(undefined8 **)(lVar7 + 0xb8));
                uStack_f8 = 0;
                uStack_f0 = 0;
                uStack_e8 = 0;
                System_Nullable_Color____ctor_2bc9090
                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_f8,
                           *(undefined8 *)puVar2);
                uStack_100 = uStack_e8;
                uStack_108 = uStack_f0;
                uStack_110 = uStack_f8;
                Dino_BusSand_App_UI_UiKit__Text_2282314
                          (fVar16 * 38.0,fVar16 * 120.0,fVar16 * 50.0,0,0,uVar11,
                           *(undefined8 *)puVar4,uVar12,*(undefined8 *)puVar3,&uStack_110,0x202);
                uVar11 = UnityEngine_Component__get_gameObject_43bcde8(plVar10,0);
                *(undefined8 *)(lVar8 + 0x50) = uVar11;
                thunk_FUN_02134474();
                return lVar8;
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

