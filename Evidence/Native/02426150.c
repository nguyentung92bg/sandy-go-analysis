/* IL2CPP: Dino.BusSand.App.UI.ChestPanel$$OnOpen
void Dino_BusSand_App_UI_ChestPanel__OnOpen (Dino_BusSand_App_UI_ChestPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ChestPanel$$OnOpen
   void Dino_BusSand_App_UI_ChestPanel__OnOpen (Dino_BusSand_App_UI_ChestPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_ChestPanel__OnOpen_2326150(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  int iStack_64;
  
  puVar2 = PTR_DAT_04cb8ce8;
  if ((bRam0000000004f9c5e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf408);
    FUN_02132f7c(PTR_DAT_04caf420);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb8cf0);
    FUN_02132f7c(PTR_DAT_04cb8cf8);
    FUN_02132f7c(PTR_DAT_04cb8d00);
    FUN_02132f7c(PTR_DAT_04cb8d08);
    FUN_02132f7c(PTR_DAT_04cb8ce8);
    FUN_02132f7c(PTR_DAT_04cb8d10);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb8d18);
    FUN_02132f7c(PTR_DAT_04cb8d20);
    FUN_02132f7c(PTR_DAT_04cb21c8);
    FUN_02132f7c(PTR_DAT_04cb8d28);
    FUN_02132f7c(PTR_DAT_04cb8d30);
    FUN_02132f7c(PTR_DAT_04cb8348);
    FUN_02132f7c(PTR_DAT_04cb8d38);
    FUN_02132f7c(PTR_DAT_04caf330);
    FUN_02132f7c(PTR_DAT_04cad4f0);
    FUN_02132f7c(PTR_DAT_04cb8d40);
    bRam0000000004f9c5e5 = 1;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar8,0);
  puVar2 = PTR_DAT_04ca9d18;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x10) = param_1;
    thunk_FUN_02134474((long *)(lVar8 + 0x10),param_1);
    lVar12 = *(long *)puVar2;
    lVar11 = *(long *)(lVar12 + 0x38);
    if (lVar11 == 0) {
      FUN_0216b4cc(lVar12);
      lVar11 = *(long *)(lVar12 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0216b470();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar3 = PTR_DAT_04cad330;
    lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0216b470();
    }
    puVar4 = PTR_DAT_04cb8d40;
    puVar1 = PTR_DAT_04cb8d30;
    lVar12 = *(long *)puVar3;
    uVar13 = **(undefined8 **)(lVar11 + 0xb8);
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar12);
    }
    uVar13 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                       (*(undefined8 *)puVar4,*(undefined8 *)puVar1,uVar13,0);
    Dino_BusSand_App_UI_KitPopup__PanelAndRow_2280b64(0x442f0000,0x418c0000,0);
    uVar18 = Dino_BusSand_App_UI_KitPopup__Height_2280b34(0);
    uVar13 = Dino_BusSand_App_UI_KitPopup__Build_2280d18
                       (0x44750000,uVar18,_UNK_00e204d4,param_1,uVar13,0,0,0);
    puVar14 = (undefined8 *)(lVar8 + 0x28);
    *puVar14 = uVar13;
    thunk_FUN_02134474(puVar14,uVar13);
    lVar11 = Dino_BusSand_App_UI_KitParts__RewardBox_230ff1c
                       (0x442f0000,0x438c0000,0x441b0000,*puVar14,0);
    plVar15 = (long *)(lVar8 + 0x18);
    *plVar15 = lVar11;
    thunk_FUN_02134474(plVar15,lVar11);
    if (*plVar15 != 0) {
      plVar9 = (long *)UnityEngine_Transform__Find_43d4bec
                                 (*plVar15,*(undefined8 *)PTR_DAT_04cb8d18,0);
      if (plVar9 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
      else {
        lVar11 = *(long *)PTR_DAT_04cabdb0;
        if ((*plVar9 != lVar11) || (*(long **)(param_1 + 0x60) = plVar9, *plVar9 != lVar11)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar9);
        }
      }
      puVar1 = PTR_DAT_04ca9ae8;
      plVar16 = (long *)(param_1 + 0x60);
      thunk_FUN_02134474(plVar16,plVar9);
      lVar11 = *plVar16;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar1 = PTR_DAT_04cad4c0;
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
      if ((uVar10 & 1) != 0) {
        if (*plVar16 == 0) goto LAB_02426aec;
        uVar13 = UnityEngine_Component__get_gameObject_43bcde8(*plVar16,0);
        lVar11 = *(long *)puVar1;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar11);
        }
        lVar11 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar13,0);
        if (lVar11 == 0) goto LAB_02426aec;
        UnityEngine_CanvasGroup__set_alpha_467ad3c(0,lVar11,0);
      }
      puVar4 = PTR_DAT_04caf420;
      uVar13 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
      uVar13 = Dino_BusSand_App_UI_KitTopBar__Build_2283ff0(0xc3000000c3000000,uVar13,0,0,0,0,1,0,0)
      ;
      *(undefined8 *)(param_1 + 0x38) = uVar13;
      thunk_FUN_02134474();
      lVar17 = *(long *)puVar2;
      lVar12 = *plVar15;
      lVar11 = *(long *)(lVar17 + 0x38);
      if (lVar11 == 0) {
        FUN_0216b4cc(lVar17);
        lVar11 = *(long *)(lVar17 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0216b470();
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar11 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0216b470();
      }
      puVar7 = PTR_DAT_04cb8d38;
      puVar6 = PTR_DAT_04cb8d20;
      puVar5 = PTR_DAT_04cb8348;
      puVar4 = PTR_DAT_04caf330;
      puVar2 = PTR_DAT_04cad4f0;
      lVar17 = *(long *)puVar3;
      uVar13 = **(undefined8 **)(lVar11 + 0xb8);
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar17);
      }
      uVar13 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                         (*(undefined8 *)puVar6,*(undefined8 *)puVar7,uVar13,0);
      Dino_BusSand_App_UI_KitParts__BrownText_23101ac
                (0x42600000,0x44340000,0x42980000,0x428c0000,lVar12,*(undefined8 *)puVar2,uVar13,0);
      lVar11 = *plVar15;
      Dino_BusSand_App_UI_ChestPanel__ChestSize_2326b08(*(undefined8 *)puVar5);
      fVar19 = 0.0;
      lVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                         (lVar11,*(undefined8 *)puVar4,*(undefined8 *)puVar5,0,0);
      plVar15 = (long *)(param_1 + 0x58);
      *plVar15 = lVar11;
      thunk_FUN_02134474(plVar15,lVar11);
      if ((*plVar15 != 0) &&
         (lVar11 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar15,0),
         puVar2 = PTR_DAT_04caf408, lVar11 != 0)) {
        UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,lVar11,0);
        Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                  (_UNK_00e20354,0,*plVar15,*(undefined8 *)puVar2);
        if (*plVar15 != 0) {
          lVar11 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar15,0);
          if (((*plVar15 != 0) &&
              (lVar12 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar15,0), lVar12 != 0))
             && (UnityEngine_RectTransform__get_rect_43cf450(lVar12,0), lVar11 != 0)) {
            uVar20 = 0;
            fVar19 = fVar19 * 0.5;
            uVar18 = UnityEngine_Transform__TransformPoint_43d3c44(0,lVar11,0);
            *(undefined4 *)(param_1 + 0x70) = uVar18;
            *(float *)(param_1 + 0x74) = fVar19;
            *(undefined4 *)(param_1 + 0x78) = uVar20;
            uVar13 = Dino_BusSand_App_Meta_Monetization__get_WinChestRewards_2267e00(0);
            *(undefined8 *)(lVar8 + 0x20) = uVar13;
            thunk_FUN_02134474();
            puVar2 = PTR_DAT_04cb8d10;
            if (*(long *)(param_1 + 0x58) != 0) {
              uVar13 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x58),0);
              lVar11 = *(long *)puVar1;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar11);
              }
              uVar18 = _UNK_00e207cc;
              Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                        (_UNK_00e201f4,_UNK_00e207cc,_UNK_00e2098c,_UNK_00e2032c,uVar13,0,0,0);
              lVar11 = *(long *)puVar2;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar11 = *(long *)puVar2;
              }
              puVar1 = PTR_DAT_04cac1e8;
              puVar3 = PTR_DAT_04caa458;
              puVar14 = *(undefined8 **)(lVar11 + 0xb8);
              lVar12 = puVar14[1];
              if (lVar12 == 0) {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  puVar14 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
                }
                uVar13 = *puVar14;
                lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                System_Action___ctor_47b5ed0(lVar12,uVar13,*(undefined8 *)PTR_DAT_04cb8cf0,0);
                plVar15 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                *plVar15 = lVar12;
                thunk_FUN_02134474(plVar15,lVar12);
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar11 = Dino_BusSand_App_Tween__Delayed_2161264(uVar18,lVar12,0);
              if ((lVar11 != 0) &&
                 (lVar11 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar11,1,0),
                 puVar2 = PTR_DAT_04cb8cf8, lVar11 != 0)) {
                Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar11,param_1,0);
                uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                System_Action___ctor_47b5ed0(uVar13,lVar8,*(undefined8 *)puVar2,0);
                lVar11 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e20094,uVar13,0);
                if ((lVar11 != 0) &&
                   (lVar11 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar11,1,0),
                   puVar2 = PTR_DAT_04cb8d00, lVar11 != 0)) {
                  Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar11,param_1,0);
                  uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                  System_Action___ctor_47b5ed0(uVar13,lVar8,*(undefined8 *)puVar2,0);
                  lVar11 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e208d8,uVar13,0);
                  if ((lVar11 != 0) &&
                     (lVar11 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar11,1,0),
                     puVar2 = PTR_DAT_04cb8d08, lVar11 != 0)) {
                    Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar11,param_1,0);
                    uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    System_Action___ctor_47b5ed0(uVar13,lVar8,*(undefined8 *)puVar2,0);
                    lVar8 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e201a0,uVar13,0);
                    if ((lVar8 != 0) &&
                       (lVar8 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar8,1,0),
                       puVar2 = PTR_DAT_04ca9c20, lVar8 != 0)) {
                      Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar8,param_1,0);
                      plVar15 = (long *)FUN_02133068(*(undefined8 *)puVar2,2);
                      puVar2 = PTR_DAT_04cb21c8;
                      if (plVar15 != (long *)0x0) {
                        if ((*(long *)PTR_DAT_04cb21c8 != 0) &&
                           (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb21c8,
                                                       *(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0
                           )) {
LAB_02426af4:
                          uVar13 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                          FUN_021330e8(uVar13,0);
                        }
                        puVar3 = PTR_DAT_04cabaf8;
                        if ((int)plVar15[3] != 0) {
                          plVar15[4] = *(long *)puVar2;
                          thunk_FUN_02134474();
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          if (cRam0000000004f9b894 == '\0') {
                            FUN_02132f7c(PTR_DAT_04cabaf8);
                            cRam0000000004f9b894 = '\x01';
                          }
                          lVar8 = *(long *)puVar3;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar8 = *(long *)puVar3;
                          }
                          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
                          if (lVar8 == 0) goto LAB_02426aec;
                          iStack_64 = *(int *)(lVar8 + 0x17c) + 1;
                          lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_64);
                          if ((lVar8 != 0) &&
                             (lVar11 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar15 + 0x40)),
                             lVar11 == 0)) goto LAB_02426af4;
                          puVar3 = PTR_DAT_04cb8d28;
                          puVar2 = PTR_DAT_04cac5c0;
                          if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
                            plVar15[5] = lVar8;
                            thunk_FUN_02134474(plVar15 + 5,lVar8);
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar3,plVar15,0)
                            ;
                            return;
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_0213322c();
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
LAB_02426aec:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

