/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$RefreshStop
void Dino_BusSand_App_UI_WinStreakPanel__RefreshStop (Dino_BusSand_App_UI_WinStreakPanel_o* __this, Dino_BusSand_App_UI_WinStreakPanel_Stop_o* st, bool animate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0238e2b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$RefreshStop
   void Dino_BusSand_App_UI_WinStreakPanel__RefreshStop (Dino_BusSand_App_UI_WinStreakPanel_o*
   __this, Dino_BusSand_App_UI_WinStreakPanel_Stop_o* st, bool animate, const MethodInfo* method);
    */

undefined8 *
Dino_BusSand_App_UI_WinStreakPanel__RefreshStop_2338440
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,float param_4,
          long param_5,long param_6,ulong param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  
  puVar3 = PTR_DAT_04cb93b0;
  if ((bRam0000000004f9c646 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb50d8);
    FUN_02132f7c(PTR_DAT_04cb50e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb93b8);
    FUN_02132f7c(PTR_DAT_04cb93b0);
                    /* try { // try from 024384d8 to 025384df has its CatchHandler @ 02438558 */
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
                    /* try { // try from 024384ec to 02538503 has its CatchHandler @ 02438554 */
    FUN_02132f7c(PTR_DAT_04caf570);
    FUN_02132f7c(PTR_DAT_04cb93a0);
                    /* try { // try from 02438504 to 02538533 has its CatchHandler @ 02438164 */
    FUN_02132f7c(PTR_DAT_04caf588);
    FUN_02132f7c(PTR_DAT_04caf5a0);
    FUN_02132f7c(PTR_DAT_04cb93c0);
    FUN_02132f7c(PTR_DAT_04cb93c8);
                    /* try { // try from 02438534 to 02538537 has its CatchHandler @ 024385a8 */
                    /* try { // try from 02438538 to 0253853b has its CatchHandler @ 02438550 */
    FUN_02132f7c(PTR_DAT_04ca9c30);
                    /* try { // try from 0243853c to 0253853f has its CatchHandler @ 0243854c */
                    /* try { // try from 02438540 to 02538573 has its CatchHandler @ 02438164 */
                    /* catch() { ... } // from try @ 02438398 with catch @ 02438544 */
    FUN_02132f7c(PTR_DAT_04cb93d0);
                    /* catch() { ... } // from try @ 0243833c with catch @ 02438548 */
                    /* catch() { ... } // from try @ 0243853c with catch @ 0243854c */
                    /* catch() { ... } // from try @ 02438538 with catch @ 02438550 */
    FUN_02132f7c(PTR_DAT_04cad948);
                    /* catch() { ... } // from try @ 024384ec with catch @ 02438554 */
                    /* catch() { ... } // from try @ 024384d8 with catch @ 02438558 */
    bRam0000000004f9c646 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar6,0);
  if (lVar6 != 0) {
                    /* try { // try from 02438574 to 02538577 has its CatchHandler @ 02438598 */
                    /* try { // try from 02438578 to 0253859b has its CatchHandler @ 02438164 */
    *(long *)(lVar6 + 0x10) = param_5;
    thunk_FUN_02134474((long *)(lVar6 + 0x10),param_5);
    plVar14 = (long *)(lVar6 + 0x18);
    *plVar14 = param_6;
    thunk_FUN_02134474(plVar14,param_6);
                    /* catch() { ... } // from try @ 02438574 with catch @ 02438598 */
                    /* try { // try from 0243859c to 025385a3 has its CatchHandler @ 02438600 */
    lVar7 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
                    /* try { // try from 024385a4 to 025385c7 has its CatchHandler @ 02438164 */
                    /* catch() { ... } // from try @ 02438534 with catch @ 024385a8 */
                    /* catch() { ... } // from try @ 02438308 with catch @ 024385ac */
    if (((lVar7 != 0) && (*plVar14 != 0)) && (lVar8 = *(long *)(*plVar14 + 0x10), lVar8 != 0)) {
      if (*(int *)(lVar7 + 0x18) < *(int *)(lVar8 + 0x14)) {
                    /* try { // try from 024385c8 to 025385cb has its CatchHandler @ 024385ec */
        bVar5 = false;
                    /* try { // try from 024385cc to 025385ef has its CatchHandler @ 02438164 */
      }
      else {
        bVar5 = (float)*(int *)(lVar8 + 0x14) <= *(float *)(param_5 + 0xb0);
      }
      uVar9 = Dino_BusSand_App_Meta_WinStreak__Claimed_2294568(lVar8,0);
                    /* catch() { ... } // from try @ 024385c8 with catch @ 024385ec */
      if (*plVar14 != 0) {
                    /* try { // try from 024385f0 to 025385f7 has its CatchHandler @ 02438600 */
                    /* try { // try from 024385f8 to 02538603 has its CatchHandler @ 02438164 */
                    /* catch() { ... } // from try @ 0243859c with catch @ 02438600
                       catch() { ... } // from try @ 024385f0 with catch @ 02438600 */
        lVar7 = *(long *)(*plVar14 + 0x18);
        puVar12 = (undefined8 *)PTR_DAT_04cb93a0;
        if (bVar5) {
          puVar12 = (undefined8 *)PTR_DAT_04cb93c0;
        }
        uVar10 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*puVar12,0);
        if (lVar7 != 0) {
          UnityEngine_UI_Image__set_sprite_44a7258(lVar7,uVar10,0);
          puVar4 = PTR_DAT_04cb93d0;
          puVar12 = (undefined8 *)PTR_DAT_04cb93c8;
          puVar3 = PTR_DAT_04ca9c30;
          lVar7 = *plVar14;
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
            lVar8 = *(long *)(lVar7 + 0x20);
            uVar10 = System_Int32__ToString_482d750(*(long *)(lVar7 + 0x10) + 0x18,0);
            if ((uVar9 & 1) == 0) {
              puVar12 = (undefined8 *)puVar3;
            }
            uVar10 = System_String__Concat_46d2b84(*(undefined8 *)puVar4,uVar10,*puVar12,0);
            uVar10 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(uVar10,0);
            if (lVar8 != 0) {
              UnityEngine_UI_Image__set_sprite_44a7258(lVar8,uVar10,0);
              puVar3 = PTR_DAT_04ca9ae8;
              if ((*plVar14 != 0) && (lVar7 = *(long *)(*plVar14 + 0x20), lVar7 != 0)) {
                uVar10 = *(undefined8 *)(lVar7 + 0xd8);
                if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
                if ((uVar11 & 1) == 0) {
                  param_3 = 0x43770000;
                  param_4 = 197.0;
                }
                else {
                  if (((*plVar14 == 0) || (lVar7 = *(long *)(*plVar14 + 0x20), lVar7 == 0)) ||
                     (lVar7 = *(long *)(lVar7 + 0xd8), lVar7 == 0)) goto LAB_02438bb8;
                  UnityEngine_Sprite__get_rect_434ee28(lVar7,0);
                }
                if (((*plVar14 != 0) && (lVar7 = *(long *)(*plVar14 + 0x20), lVar7 != 0)) &&
                   (lVar7 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar7,0), lVar7 != 0))
                {
                  UnityEngine_RectTransform__set_sizeDelta_43cfa70(param_3,param_4,lVar7,0);
                  if (((*plVar14 != 0) && (lVar7 = *(long *)(*plVar14 + 0x20), lVar7 != 0)) &&
                     (lVar7 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar7,0), lVar7 != 0
                     )) {
                    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                              (0,(param_4 + -197.0) * 0.5,lVar7,0);
                    if ((*plVar14 != 0) && (lVar7 = *(long *)(*plVar14 + 0x28), lVar7 != 0)) {
                      uVar10 = UnityEngine_Component__GetComponent_object__26f97e8
                                         (lVar7,*(undefined8 *)PTR_DAT_04cb50d8);
                      lVar7 = *(long *)puVar3;
                      if (bVar5 && (uVar9 & 1) == 0) {
                        if (*(int *)(lVar7 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(lVar7);
                        }
                        uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
                        if ((uVar9 & 1) != 0) {
                          if ((((*plVar14 == 0) || (lVar7 = *(long *)(*plVar14 + 0x28), lVar7 == 0))
                              || (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0),
                                 lVar7 == 0)) ||
                             (lVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                                                (lVar7,*(undefined8 *)PTR_DAT_04cb50e8), lVar7 == 0)
                             ) goto LAB_02438bb8;
                          *(undefined8 *)(lVar7 + 0x20) = _UNK_00e6a168;
                        }
                        if (*plVar14 != 0) {
                          uVar10 = *(undefined8 *)(*plVar14 + 0x30);
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          puVar12 = (undefined8 *)
                                    UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
                          if (((ulong)puVar12 & 1) == 0) {
                            return puVar12;
                          }
                          lVar7 = *plVar14;
                          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
                            uVar15 = *(undefined8 *)(param_5 + 0x40);
                            uVar10 = System_Int32__ToString_482d750
                                               (*(long *)(lVar7 + 0x10) + 0x10,0);
                            uVar10 = System_String__Concat_46c82e0
                                               (*(undefined8 *)PTR_DAT_04caf588,uVar10,0);
                            lVar16 = *(long *)PTR_DAT_04ca9d18;
                            lVar8 = *(long *)(lVar16 + 0x38);
                            if (lVar8 == 0) {
                              FUN_0216b4cc(lVar16);
                              lVar8 = *(long *)(lVar16 + 0x38);
                            }
                            lVar8 = *(long *)(lVar8 + 0x10);
                            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                              lVar8 = FUN_0216b470();
                            }
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            lVar8 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
                            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                              lVar8 = FUN_0216b470();
                            }
                            uVar17 = **(undefined8 **)(lVar8 + 0xb8);
                            if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
                            }
                            uVar17 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                                               (*(undefined8 *)PTR_DAT_04caf5a0,
                                                *(undefined8 *)PTR_DAT_04caf570,uVar17,0);
                            uVar10 = Dino_BusSand_App_UI_KitParts__Button_2306a4c
                                               (0x43520000,0,0,0x42480000,0x42dc0000,uVar15,uVar10,0
                                                ,uVar17,0,0);
                            *(undefined8 *)(lVar7 + 0x30) = uVar10;
                            thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30),uVar10);
                            lVar7 = *plVar14;
                            if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
                              uVar10 = *(undefined8 *)(lVar7 + 0x30);
                              fVar20 = (float)Dino_BusSand_App_UI_WinStreakPanel__FloorY_2337bac
                                                        ((float)*(int *)(*(long *)(lVar7 + 0x10) +
                                                                        0x14));
                              Dino_BusSand_App_UI_WinStreakPanel__Place_2337b50
                                        (0xc2cf0000,fVar20 + -47.5,uVar10);
                              if ((*plVar14 != 0) &&
                                 (lVar7 = *(long *)(*plVar14 + 0x30), lVar7 != 0)) {
                    /* try { // try from 02438aa4 to 02538c6b has its CatchHandler @ 02438aa4
                       catch() { ... } // from try @ 02438aa4 with catch @ 02438aa4
                       catch() { ... } // from try @ 02438ce4 with catch @ 02438aa4
                       catch() { ... } // from try @ 02438d58 with catch @ 02438aa4
                       catch() { ... } // from try @ 02438db8 with catch @ 02438aa4
                       catch() { ... } // from try @ 02438ddc with catch @ 02438aa4
                       catch() { ... } // from try @ 02438e38 with catch @ 02438aa4 */
                                uVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
                                uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                                System_Action___ctor_47b5ed0
                                          (uVar15,lVar6,*(undefined8 *)PTR_DAT_04cb93b8,0);
                                Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                                          (uVar10,uVar15,1,*(undefined8 *)PTR_DAT_04cad948,0);
                                if (*(long *)(lVar6 + 0x18) != 0) {
                                  puVar12 = (undefined8 *)
                                            Dino_BusSand_App_UI_UiKit__Breathe_2289058
                                                      (_UNK_00e20af8,_UNK_00e20170,
                                                       *(undefined8 *)
                                                        (*(long *)(lVar6 + 0x18) + 0x30),0);
                                  if ((param_7 & 1) == 0) {
                                    return puVar12;
                                  }
                                  if (*plVar14 != 0) {
                                    lVar6 = *(long *)(*plVar14 + 0x30);
                                    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac();
                                    }
                                    puVar3 = PTR_DAT_04cb5270;
                                    uVar2 = _UNK_00e2098c;
                                    uVar1 = _UNK_00e20590;
                                    fVar20 = _UNK_00e20328;
                                    uVar19 = _UNK_00e20184;
                                    uVar21 = _UNK_00e2098c;
                                    uVar13 = _UNK_00e20590;
                                    if ((bRam0000000004f9c1c1 & 1) == 0) {
                                      FUN_02132f7c(PTR_DAT_04cac7b0,0,0,0);
                                      FUN_02132f7c(PTR_DAT_04cac208);
                                      FUN_02132f7c(PTR_DAT_04caa458);
                                      FUN_02132f7c(PTR_DAT_04cb5278);
                                      FUN_02132f7c(PTR_DAT_04cad7b8);
                                      FUN_02132f7c(PTR_DAT_04cb4e78);
                                      FUN_02132f7c(PTR_DAT_04cb4e80);
                                      FUN_02132f7c(PTR_DAT_04ca9ae8);
                                      FUN_02132f7c(PTR_DAT_04cac1e8);
                                      FUN_02132f7c(PTR_DAT_04cb5280);
                                      FUN_02132f7c(PTR_DAT_04cb5288);
                                      FUN_02132f7c(PTR_DAT_04cb5290);
                                      FUN_02132f7c(PTR_DAT_04cb5298);
                                      FUN_02132f7c(PTR_DAT_04cb5270);
                                      FUN_02132f7c(PTR_DAT_04cad4c0);
                                      FUN_02132f7c(PTR_DAT_04cabdb8);
                                      bRam0000000004f9c1c1 = 1;
                                    }
                                    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                                    System_Object___ctor_4870e5c(lVar7,0);
                                    puVar3 = PTR_DAT_04ca9ae8;
                                    if (lVar7 != 0) {
                                      plVar14 = (long *)(lVar7 + 0x18);
                                      *plVar14 = lVar6;
                                      thunk_FUN_02134474(plVar14,lVar6);
                                      lVar6 = *(long *)puVar3;
                                      lVar8 = *plVar14;
                                      *(undefined4 *)(lVar7 + 0x20) = uVar2;
                                      *(undefined4 *)(lVar7 + 0x30) = uVar19;
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_0218fdac();
                                      }
                                      uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
                                      puVar3 = PTR_DAT_04cad7b8;
                                      if ((uVar9 & 1) != 0) {
                                        return (undefined8 *)0x0;
                                      }
                                      lVar6 = *plVar14;
                                      if (*(int *)(*(long *)PTR_DAT_04cad7b8 + 0xe4) == 0) {
                                        thunk_FUN_0218fdac();
                                      }
                                      auVar22 = Dino_BusSand_App_UI_KitAdopt__OwnerScale_227e1c0
                                                          (lVar6);
                                      if ((auVar22._0_8_ & 0xff) == 0) {
                                        if (*plVar14 == 0) goto LAB_0238e51c;
                                        uVar19 = UnityEngine_Transform__get_localScale_43d1b0c
                                                           (*plVar14,0);
                                      }
                                      else {
                                        uVar13 = auVar22._12_4_;
                                        uVar21 = auVar22._8_4_;
                                        uVar19 = auVar22._4_4_;
                                      }
                                      *(undefined4 *)(lVar7 + 0x24) = uVar19;
                                      *(undefined4 *)(lVar7 + 0x28) = uVar21;
                                      *(undefined4 *)(lVar7 + 0x2c) = uVar13;
                                      if (*(long *)(lVar7 + 0x18) != 0) {
                                        uVar10 = UnityEngine_Component__get_gameObject_43bcde8
                                                           (*(long *)(lVar7 + 0x18),0);
                                        puVar4 = PTR_DAT_04cad4c0;
                                        if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
                                          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
                                        }
                                        uVar10 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar10)
                                        ;
                                        *(undefined8 *)(lVar7 + 0x38) = uVar10;
                                        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x38),uVar10);
                                        uVar10 = *(undefined8 *)(lVar7 + 0x18);
                                        if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                                          thunk_FUN_0218fdac();
                                        }
                                        Dino_BusSand_App_Tween__KillAll_2161a90(uVar10,0);
                                        if (*plVar14 != 0) {
                                          fVar18 = *(float *)(lVar7 + 0x20);
                                          UnityEngine_Transform__set_localScale_43d1be0
                                                    (fVar18 * *(float *)(lVar7 + 0x24),
                                                     fVar18 * *(float *)(lVar7 + 0x28),
                                                     *(float *)(lVar7 + 0x2c) * fVar18,*plVar14,0);
                                          if (*(long *)(lVar7 + 0x38) != 0) {
                                            UnityEngine_CanvasGroup__set_alpha_467ad3c
                                                      (0,*(long *)(lVar7 + 0x38),0);
                                            lVar6 = *plVar14;
                                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                              thunk_FUN_0218fdac();
                                            }
                                            uVar9 = Dino_BusSand_App_UI_KitAdopt__Edited_227dd34
                                                              (lVar6);
                                            if ((uVar9 & 1) == 0) {
                                              lVar6 = 0;
                                            }
                                            else {
                                              lVar6 = FUN_02133068(*(undefined8 *)PTR_DAT_04cabdb8,1
                                                                  );
                                              if (lVar6 == 0) goto LAB_0238e51c;
                                              if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_0213322c();
                                              }
                                              uVar21 = *(undefined4 *)(lVar7 + 0x2c);
                                              *(undefined8 *)(lVar6 + 0x20) =
                                                   *(undefined8 *)(lVar7 + 0x24);
                                              *(undefined4 *)(lVar6 + 0x28) = uVar21;
                                            }
                                            plVar14 = (long *)(lVar7 + 0x10);
                                            *plVar14 = lVar6;
                                            thunk_FUN_02134474(plVar14);
                                            if (*plVar14 != 0) {
                                              uVar17 = *(undefined8 *)(lVar7 + 0x18);
                                              uVar10 = thunk_FUN_0216e89c(*(undefined8 *)
                                                                           PTR_DAT_04cb5278);
                                              System_Func_Vector3____ctor_379f5bc
                                                        (uVar10,lVar7,
                                                         *(undefined8 *)PTR_DAT_04cb5280,0);
                                              uVar15 = thunk_FUN_0216e89c(*(undefined8 *)
                                                                           PTR_DAT_04cac7b0);
                                              System_Action_Vector3____ctor_35f2828
                                                        (uVar15,lVar7,
                                                         *(undefined8 *)PTR_DAT_04cb5288,0);
                                              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                thunk_FUN_0218fdac();
                                              }
                                              Dino_BusSand_App_UI_KitAdopt__RestScale_227de60
                                                        (uVar17,uVar10,uVar15);
                                            }
                                            uVar10 = thunk_FUN_0216e89c(*(undefined8 *)
                                                                         PTR_DAT_04cac208);
                                            System_Action_float____ctor_35f1448
                                                      (uVar10,lVar7,*(undefined8 *)PTR_DAT_04cb5290,
                                                       0);
                                            uVar17 = *(undefined8 *)(lVar7 + 0x18);
                                            uVar15 = thunk_FUN_0216e89c(*(undefined8 *)
                                                                         PTR_DAT_04caa458);
                                            System_Action___ctor_47b5ed0
                                                      (uVar15,lVar7,*(undefined8 *)PTR_DAT_04cb5298,
                                                       0);
                                            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                              thunk_FUN_0218fdac();
                                            }
                                            puVar3 = PTR_DAT_04cac1e8;
                                            if ((bRam0000000004f9c1bd & 1) == 0) {
                                              FUN_02132f7c(PTR_DAT_04caa210);
                                              FUN_02132f7c(PTR_DAT_04cb4ce0);
                                              FUN_02132f7c(PTR_DAT_04cac1e8);
                                              bRam0000000004f9c1bd = 1;
                                            }
                                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                              thunk_FUN_0218fdac();
                                            }
                                            lVar6 = Dino_BusSand_App_Tween__Value_2160f64
                                                              (uVar1,uVar10,0);
                                            if (((lVar6 != 0) &&
                                                (lVar6 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8
                                                                   (lVar6,1,0), lVar6 != 0)) &&
                                               (lVar6 = Dino_BusSand_App_Tween__SetOwner_2160ec0
                                                                  (lVar6,uVar17,0), lVar6 != 0)) {
                                              puVar12 = (undefined8 *)
                                                        Dino_BusSand_App_Tween__OnDone_2160edc
                                                                  (lVar6,uVar15,0);
                                              if (0.0 < fVar20) {
                                                if (puVar12 == (undefined8 *)0x0) goto LAB_02390cdc;
                                                Dino_BusSand_App_Tween__SetDelay_2160ea8
                                                          (fVar20,puVar12,0);
                                              }
                                              if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
                                                thunk_FUN_0218fdac();
                                              }
                                              uVar9 = UnityEngine_Application__get_isPlaying_4351eec
                                                                (0);
                                              puVar3 = PTR_DAT_04cb4ce0;
                                              if ((uVar9 & 1) != 0) {
                                                lVar6 = *(long *)PTR_DAT_04cb4ce0;
                                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                                  thunk_FUN_0218fdac();
                                                  lVar6 = *(long *)puVar3;
                                                }
                                                if (*(char *)(*(long *)(lVar6 + 0xb8) + 1) == '\0')
                                                {
                                                  return puVar12;
                                                }
                                              }
                                              if (puVar12 != (undefined8 *)0x0) {
                                                Dino_BusSand_App_Tween__Kill_2160f04(puVar12,1,0);
                                                return puVar12;
                                              }
                                            }
LAB_02390cdc:
                    /* WARNING: Subroutine does not return */
                                            FUN_02133224();
                                          }
                                        }
                                      }
                                    }
LAB_0238e51c:
                    /* WARNING: Subroutine does not return */
                                    FUN_02133224();
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (*(int *)(lVar7 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(lVar7);
                        }
                        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
                        if ((uVar9 & 1) != 0) {
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          UnityEngine_Object__Destroy_43c8114(uVar10,0);
                        }
                        if (*plVar14 != 0) {
                          uVar10 = *(undefined8 *)(*plVar14 + 0x30);
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          puVar12 = (undefined8 *)
                                    UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
                          if (((ulong)puVar12 & 1) == 0) {
                            return puVar12;
                          }
                          if ((*plVar14 != 0) && (lVar6 = *(long *)(*plVar14 + 0x30), lVar6 != 0)) {
                            uVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)puVar3);
                            }
                            UnityEngine_Object__Destroy_43c8114(uVar10,0);
                            if (*plVar14 != 0) {
                              puVar12 = (undefined8 *)(*plVar14 + 0x30);
                              *puVar12 = 0;
                              if (iRam00000000051c1b10 != 0) {
                                puVar12 = (undefined8 *)
                                          FUN_02220bf0(1L << ((ulong)puVar12 >> 0xc & 0x3f),
                                                       ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 +
                                                       0x4ff5ae8);
                              }
                              return puVar12;
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
LAB_02438bb8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

