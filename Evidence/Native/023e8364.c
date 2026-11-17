/* IL2CPP: Dino.BusSand.App.UI.HomeSideButton$$Build
Dino_BusSand_App_UI_HomeSideButton_o* Dino_BusSand_App_UI_HomeSideButton__Build (Dino_BusSand_App_UI_UIPanel_o* panel, Dino_BusSand_App_UI_HomeEntry_o* e, float y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeSideButton$$Build
   Dino_BusSand_App_UI_HomeSideButton_o* Dino_BusSand_App_UI_HomeSideButton__Build
   (Dino_BusSand_App_UI_UIPanel_o* panel, Dino_BusSand_App_UI_HomeEntry_o* e, float y, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_HomeSideButton__Build_22e8364(undefined4 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar3 = PTR_DAT_04cb7440;
  if ((bRam0000000004f9c435 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb7448);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cb4e90);
    FUN_02132f7c(PTR_DAT_04cb7450);
    FUN_02132f7c(PTR_DAT_04cb7440);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04caf560);
    FUN_02132f7c(PTR_DAT_04cb7458);
    FUN_02132f7c(PTR_DAT_04cad450);
    FUN_02132f7c(PTR_DAT_04caf2c0);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04caf300);
    FUN_02132f7c(PTR_DAT_04caf3d0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c435 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar7,0);
  if (lVar7 != 0) {
    plVar16 = (long *)(lVar7 + 0x10);
    *plVar16 = param_3;
    thunk_FUN_02134474(plVar16,param_3);
    puVar3 = PTR_DAT_04cb7460;
    lVar14 = *plVar16;
    if (lVar14 != 0) {
      if (*(long *)(lVar14 + 0x48) != 0) {
        if ((bRam0000000004f9c436 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caa458);
          FUN_02132f7c(PTR_DAT_04cb7448);
          FUN_02132f7c(PTR_DAT_04cb7468);
          FUN_02132f7c(PTR_DAT_04cb7460);
          FUN_02132f7c(PTR_DAT_04ca9c30);
          FUN_02132f7c(PTR_DAT_04cad948);
          bRam0000000004f9c436 = 1;
        }
        lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Object___ctor_4870e5c(lVar7,0);
        if (lVar7 != 0) {
          plVar16 = (long *)(lVar7 + 0x10);
          *plVar16 = lVar14;
          thunk_FUN_02134474(plVar16,lVar14);
          if (param_2 != 0) {
            uVar11 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
            puVar3 = PTR_DAT_04ca9c30;
            lVar14 = *plVar16;
            if (lVar14 != 0) {
              uVar21 = *(undefined4 *)(lVar14 + 0x60);
              uVar22 = *(undefined4 *)(lVar14 + 100);
              uVar13 = *(undefined8 *)(lVar14 + 0x48);
              uVar1 = *(undefined8 *)(lVar14 + 0x50);
              uVar18 = *(undefined8 *)(lVar14 + 0x10);
              cVar2 = *(char *)(lVar14 + 0x18);
              uVar17 = *(undefined8 *)(lVar14 + 0x20);
              uVar23 = *(undefined4 *)(lVar14 + 0x68);
              lVar15 = *(long *)(lVar14 + 0x30);
              uVar19 = *(undefined8 *)(lVar14 + 0x58);
              if (lVar15 == 0) {
                lVar15 = *(long *)PTR_DAT_04ca9c30;
              }
              else {
                lVar12 = (**(code **)(lVar15 + 0x18))
                                   (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x28));
                lVar14 = *plVar16;
                lVar15 = *(long *)puVar3;
                if (lVar12 != 0) {
                  lVar15 = lVar12;
                }
                if (lVar14 == 0) goto LAB_023e8bf8;
              }
              uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)(lVar14 + 0x6c));
              lVar14 = Dino_BusSand_App_UI_HomeSideArt__Build_22e7c00
                                 (param_1,uVar21,uVar22,uVar23,
                                  (float)*(int *)(lVar14 + 0x1c) * _UNK_00e2010c,uVar11,uVar18,
                                  cVar2 != '\0',uVar13,uVar17,uVar1,uVar19,lVar15);
              if ((((lVar14 != 0) && (*(long *)(lVar14 + 0x10) != 0)) &&
                  (lVar15 = UnityEngine_Component__get_gameObject_43bcde8
                                      (*(long *)(lVar14 + 0x10),0), lVar15 != 0)) &&
                 (lVar15 = UnityEngine_GameObject__AddComponent_object__275a54c
                                     (lVar15,*(undefined8 *)PTR_DAT_04cb7448), lVar15 != 0)) {
                *(long *)(lVar15 + 0x20) = *plVar16;
                thunk_FUN_02134474();
                *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(lVar14 + 0x38);
                thunk_FUN_02134474();
                if (*plVar16 != 0) {
                  if (*(char *)(*plVar16 + 0x70) != '\0') {
                    Dino_BusSand_App_UI_HomeSideArt__AddSale_22e8194(lVar14);
                  }
                  Dino_BusSand_App_UI_HomeSideButton__AddDot_22e8bfc
                            (0x428e0000,0x429c0000,lVar15,*(undefined8 *)(lVar14 + 0x18));
                  puVar5 = PTR_DAT_04cb7468;
                  puVar4 = PTR_DAT_04cad948;
                  puVar3 = PTR_DAT_04caa458;
                  if (*(long *)(lVar14 + 0x10) != 0) {
                    uVar11 = UnityEngine_Component__get_gameObject_43bcde8
                                       (*(long *)(lVar14 + 0x10),0);
                    uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    System_Action___ctor_47b5ed0(uVar13,lVar7,*(undefined8 *)puVar5,0);
                    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                              (uVar11,uVar13,1,*(undefined8 *)puVar4,0);
                    return lVar15;
                  }
                }
              }
            }
          }
        }
LAB_023e8bf8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (param_2 != 0) {
        uVar11 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
        lVar14 = *plVar16;
        if (lVar14 != 0) {
          uVar13 = *(undefined8 *)(lVar14 + 0x10);
          bVar6 = *(char *)(lVar14 + 0x18) == '\0';
          uVar21 = 0;
          if (!bVar6) {
            uVar21 = 0x3f800000;
          }
          uVar22 = *(undefined4 *)(&UNK_00e69c10 + (ulong)bVar6 * 4);
          System_Nullable_Vector2____ctor_2bd0a48
                    (uVar21,&stack0xffffffffffffff88,*(undefined8 *)PTR_DAT_04cb4e90);
          puVar3 = PTR_DAT_04cad330;
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar14 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                             (0x434c0000,_UNK_00e20480,uVar22,param_1,uVar11,uVar13,0,0,0);
          Dino_BusSand_App_UI_UiKit__HitArea_228277c(lVar14,0);
          lVar15 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                             (0x43700000,0x43870000,0,0,lVar14,*(undefined8 *)PTR_DAT_04cad450,0,0,0
                             );
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          if (((lVar15 != 0) &&
              (uVar11 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc),
              fVar20 = (float)((ulong)uVar11 >> 0x20) * 0.85,
              UnityEngine_Transform__set_localScale_43d1be0
                        (CONCAT44(fVar20,(float)uVar11 * 0.85),fVar20,
                         *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14) *
                         _UNK_00e20180,lVar15,0), lVar14 != 0)) &&
             ((lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0), lVar12 != 0 &&
              (lVar12 = UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar12,*(undefined8 *)PTR_DAT_04cb7448), lVar12 != 0)))) {
            *(long *)(lVar12 + 0x20) = *plVar16;
            thunk_FUN_02134474();
            plVar8 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                       (0x437a0000,0x437a0000,0,0x41d00000,0x3f800000,lVar15,
                                        *(undefined8 *)PTR_DAT_04caf300,
                                        *(undefined8 *)PTR_DAT_04caf2c0,0,0);
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x2a8))
                        (0x3f800000,_UNK_00e20830,_UNK_00e20094,_UNK_00e208e8,plVar8,
                         *(undefined8 *)(*plVar8 + 0x2b0));
              if ((*plVar16 != 0) &&
                 (lVar9 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                    (0x43520000,0x43520000,0,0x41f00000,0x3f800000,lVar15,
                                     *(undefined8 *)PTR_DAT_04cae5d0,
                                     *(undefined8 *)(*plVar16 + 0x20),0,0), lVar9 != 0)) {
                UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar9,1,0);
                if (*plVar16 != 0) {
                  if (*(long *)(*plVar16 + 0x30) == 0) {
LAB_023e8888:
                    Dino_BusSand_App_UI_HomeSideButton__AddDot_22e8bfc
                              (0x42900000,0x42d80000,lVar12,lVar15);
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_UI_UiKit__Breathe_2289058(_UNK_00e20af8,_UNK_00e20170,lVar14,0)
                    ;
                    uVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
                    uVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    System_Action___ctor_47b5ed0(uVar13,lVar7,*(undefined8 *)PTR_DAT_04cb7450,0);
                    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                              (uVar11,uVar13,1,*(undefined8 *)PTR_DAT_04cad948,0);
                    return lVar12;
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  lVar9 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                    (0x43560000,0x42ac0000,0,0xc2bc0000,_UNK_00e208e0,lVar15,
                                     *(undefined8 *)PTR_DAT_04caf560,*(undefined8 *)PTR_DAT_04cb7458
                                     ,1,0);
                  if (lVar9 != 0) {
                    uVar11 = UnityEngine_Component__get_transform_43bcd18(lVar9,0);
                    if ((*plVar16 != 0) && (lVar9 = *(long *)(*plVar16 + 0x30), lVar9 != 0)) {
                      lVar10 = (**(code **)(lVar9 + 0x18))
                                         (*(undefined8 *)(lVar9 + 0x40),
                                          *(undefined8 *)(lVar9 + 0x28));
                      uVar13 = *(undefined8 *)PTR_DAT_04cb4e20;
                      lVar9 = *(long *)PTR_DAT_04ca9c30;
                      if (lVar10 != 0) {
                        lVar9 = lVar10;
                      }
                      System_Nullable_Color____ctor_2bc9090
                                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                                 &stack0xffffffffffffff88,*(undefined8 *)PTR_DAT_04cac878);
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uStack_88 = 0;
                      uStack_90 = 0;
                      uVar11 = Dino_BusSand_App_UI_UiKit__Text_2282314
                                         (0x42380000,0x43480000,0x42840000,0,0x40000000,uVar11,
                                          uVar13,lVar9,*(undefined8 *)PTR_DAT_04caf3d0,&uStack_90,
                                          0x202,0);
                      *(undefined8 *)(lVar12 + 0x28) = uVar11;
                      thunk_FUN_02134474();
                      goto LAB_023e8888;
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

