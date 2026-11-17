/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$BuildStop
void Dino_BusSand_App_UI_WinStreakPanel__BuildStop (Dino_BusSand_App_UI_WinStreakPanel_o* __this, Dino_BusSand_App_Meta_WinStreakCheckpoint_o* cp, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$BuildStop
   void Dino_BusSand_App_UI_WinStreakPanel__BuildStop (Dino_BusSand_App_UI_WinStreakPanel_o* __this,
   Dino_BusSand_App_Meta_WinStreakCheckpoint_o* cp, int32_t i, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakPanel__BuildStop_2337de8
               (long param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_04cb9378;
  uStack_54 = param_3;
  if ((bRam0000000004f9c640 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb7e90);
    FUN_02132f7c(PTR_DAT_04cb9380);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cb9388);
    FUN_02132f7c(PTR_DAT_04cb9390);
    FUN_02132f7c(PTR_DAT_04cb9378);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cafaf0);
    FUN_02132f7c(PTR_DAT_04cad4c8);
    FUN_02132f7c(PTR_DAT_04cb9398);
    FUN_02132f7c(PTR_DAT_04cb93a0);
    FUN_02132f7c(PTR_DAT_04cafeb0);
    FUN_02132f7c(PTR_DAT_04caf330);
    FUN_02132f7c(PTR_DAT_04cafcb0);
    FUN_02132f7c(PTR_DAT_04cb93a8);
    bRam0000000004f9c640 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_1;
    thunk_FUN_02134474((long *)(lVar6 + 0x10),param_1);
    puVar2 = PTR_DAT_04cb9388;
    if (param_2 != 0) {
      fVar15 = (float)Dino_BusSand_App_UI_WinStreakPanel__FloorY_2337bac
                                ((float)*(int *)(param_2 + 0x14));
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(lVar7,0);
      puVar4 = PTR_DAT_04cb93a8;
      puVar3 = PTR_DAT_04cb9398;
      puVar2 = PTR_DAT_04cad330;
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = param_2;
        thunk_FUN_02134474((long *)(lVar7 + 0x10),param_2);
        plVar12 = (long *)(lVar6 + 0x18);
        *plVar12 = lVar7;
        thunk_FUN_02134474(plVar12,lVar7);
        uVar13 = *(undefined8 *)(param_1 + 0x40);
        uVar8 = System_Int32__ToString_482d750(&uStack_54,0);
        uVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uVar8,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        plVar9 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                   (0x44030000,0x43220000,0,0,0x3f800000,uVar13,uVar8,
                                    *(undefined8 *)puVar3,0,0);
        puVar3 = PTR_DAT_04cb93a0;
        puVar2 = PTR_DAT_04cafcb0;
        if (plVar9 != (long *)0x0) {
          UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar9,0);
          Dino_BusSand_App_UI_WinStreakPanel__Place_2337b50(0xc3370000,fVar15 + -47.5);
          (**(code **)(*plVar9 + 0x2c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
          lVar7 = *plVar12;
          uVar13 = *(undefined8 *)(param_1 + 0x40);
          uVar8 = System_Int32__ToString_482d750(&uStack_54,0);
          uVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar8,0);
          uVar8 = Dino_BusSand_App_UI_UiKit__Img_228203c
                            (0x431f0000,0x431d0000,0,0,0x3f800000,uVar13,uVar8,*(undefined8 *)puVar3
                             ,0,0);
          if (lVar7 != 0) {
            puVar14 = (undefined8 *)(lVar7 + 0x18);
            *puVar14 = uVar8;
            thunk_FUN_02134474(puVar14,uVar8);
            if ((*plVar12 != 0) && (lVar7 = *(long *)(*plVar12 + 0x18), lVar7 != 0)) {
              UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar7,0);
              Dino_BusSand_App_UI_WinStreakPanel__Place_2337b50(0xc3dc0000,fVar15);
              if ((*plVar12 != 0) && (plVar9 = *(long **)(*plVar12 + 0x18), plVar9 != (long *)0x0))
              {
                (**(code **)(*plVar9 + 0x2c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
                puVar5 = PTR_DAT_04cafeb0;
                puVar4 = PTR_DAT_04caf330;
                puVar3 = PTR_DAT_04cad4c8;
                puVar2 = PTR_DAT_04cac878;
                lVar7 = *plVar12;
                if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
                  uVar8 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14
                                    (*(long *)(lVar7 + 0x18),0);
                  uVar13 = System_Int32__ToString_482d750((int *)(param_2 + 0x14),0);
                    /* try { // try from 02438164 to 02538307 has its CatchHandler @ 02438164
                       catch() { ... } // from try @ 02438164 with catch @ 02438164
                       catch() { ... } // from try @ 024383a8 with catch @ 02438164
                       catch() { ... } // from try @ 02438504 with catch @ 02438164
                       catch() { ... } // from try @ 02438540 with catch @ 02438164
                       catch() { ... } // from try @ 02438578 with catch @ 02438164
                       catch() { ... } // from try @ 024385a4 with catch @ 02438164
                       catch() { ... } // from try @ 024385cc with catch @ 02438164
                       catch() { ... } // from try @ 024385f8 with catch @ 02438164 */
                  uStack_88 = 0;
                  uStack_80 = 0;
                  uStack_78 = 0;
                  System_Nullable_Color____ctor_2bc9090
                            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_88,
                             *(undefined8 *)puVar2);
                  uStack_90 = uStack_78;
                  uStack_98 = uStack_80;
                  uStack_a0 = uStack_88;
                  uVar8 = Dino_BusSand_App_UI_UiKit__Text_2282314
                                    (0x42700000,0x430c0000,0x42a00000,0,0xc0800000,uVar8,
                                     *(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar3,&uStack_a0,
                                     0x202,0);
                  *(undefined8 *)(lVar7 + 0x38) = uVar8;
                  thunk_FUN_02134474((undefined8 *)(lVar7 + 0x38),uVar8);
                  lVar7 = *plVar12;
                  uVar13 = *(undefined8 *)(param_1 + 0x40);
                  uVar8 = System_Int32__ToString_482d750(&uStack_54,0);
                  uVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uVar8,0);
                  uVar8 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                    (0x43770000,0x43450000,0,0,uVar13,uVar8,0,0,0);
                  if (lVar7 != 0) {
                    puVar14 = (undefined8 *)(lVar7 + 0x28);
                    *puVar14 = uVar8;
                    thunk_FUN_02134474(puVar14,uVar8);
                    if (*plVar12 != 0) {
                      Dino_BusSand_App_UI_WinStreakPanel__Place_2337b50
                                (0xc2cf0000,fVar15 + -47.5 + 81.0 + 98.0 + -6.0,
                                 *(undefined8 *)(*plVar12 + 0x28));
                      lVar7 = *plVar12;
                      if (lVar7 != 0) {
                        uVar8 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                          (0x43770000,0x43450000,0,0,0x3f800000,
                                           *(undefined8 *)(lVar7 + 0x28),
                                           *(undefined8 *)PTR_DAT_04cafaf0,0,0,0);
                        *(undefined8 *)(lVar7 + 0x20) = uVar8;
                        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x20),uVar8);
                        if ((*plVar12 != 0) && (lVar7 = *(long *)(*plVar12 + 0x20), lVar7 != 0)) {
                          UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar7,1,0);
                          if ((*plVar12 != 0) &&
                             (plVar9 = (long *)Dino_BusSand_App_UI_UiKit__HitArea_228277c
                                                         (*(undefined8 *)(*plVar12 + 0x28),0),
                             plVar9 != (long *)0x0)) {
                    /* try { // try from 02438308 to 0253830f has its CatchHandler @ 024385ac */
                            (**(code **)(*plVar9 + 0x2c8))
                                      (plVar9,1,*(undefined8 *)(*plVar9 + 0x2d0));
                            if (((*plVar12 != 0) && (lVar7 = *(long *)(*plVar12 + 0x28), lVar7 != 0)
                                ) && (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0)
                                     , puVar3 = PTR_DAT_04cb9390, puVar2 = PTR_DAT_04caa458,
                                     lVar7 != 0)) {
                    /* try { // try from 0243833c to 02538343 has its CatchHandler @ 02438548 */
                              lVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                                                (lVar7,*(undefined8 *)PTR_DAT_04cb7e90);
                              uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                              System_Action___ctor_47b5ed0(uVar8,lVar6,*(undefined8 *)puVar3,0);
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x20) = uVar8;
                                thunk_FUN_02134474((undefined8 *)(lVar7 + 0x20),uVar8);
                                lVar6 = *(long *)(param_1 + 0xa8);
                                if (lVar6 != 0) {
                    /* try { // try from 02438398 to 025383a7 has its CatchHandler @ 02438544 */
                                  lVar10 = *(long *)(lVar6 + 0x10);
                    /* try { // try from 024383a8 to 025384d7 has its CatchHandler @ 02438164 */
                                  lVar7 = *plVar12;
                                  lVar11 = *(long *)PTR_DAT_04cb9380;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar10 != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar9 = lVar7;
                                      thunk_FUN_02134474(plVar9);
                                    }
                                    else {
                                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                (lVar6,lVar7,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70
                                                  ));
                                    }
                                    Dino_BusSand_App_UI_WinStreakPanel__RefreshStop_2338440
                                              (param_1,*plVar12,0);
                                    return;
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

