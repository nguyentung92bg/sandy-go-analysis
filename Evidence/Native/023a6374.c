/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$ShowFeedbackStep
void Dino_BusSand_App_UI_CommentPopPanel__ShowFeedbackStep (Dino_BusSand_App_UI_CommentPopPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$ShowFeedbackStep
   void Dino_BusSand_App_UI_CommentPopPanel__ShowFeedbackStep
   (Dino_BusSand_App_UI_CommentPopPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommentPopPanel__ShowFeedbackStep_22a6374(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  
  if ((bRam0000000004f9c285 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb5cb0);
    FUN_02132f7c(PTR_DAT_04cb5cb8);
    FUN_02132f7c(PTR_DAT_04cb5cc0);
    FUN_02132f7c(PTR_DAT_04cb5cc8);
    FUN_02132f7c(PTR_DAT_04cb5cd0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb5cd8);
    FUN_02132f7c(PTR_DAT_04cb5ce0);
    FUN_02132f7c(PTR_DAT_04cb5ce8);
    FUN_02132f7c(PTR_DAT_04cb5cf0);
    FUN_02132f7c(PTR_DAT_04cb5cf8);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c285 = 1;
  }
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  *(undefined1 *)(param_1 + 0x45) = 1;
  puVar14 = PTR_DAT_04cb5cf8;
  puVar13 = PTR_DAT_04cb5cf0;
  puVar12 = PTR_DAT_04cb5ce8;
  puVar11 = PTR_DAT_04cb5ce0;
  puVar10 = PTR_DAT_04cb5cd8;
  puVar9 = PTR_DAT_04cb5cc0;
  puVar8 = PTR_DAT_04cb5cb8;
  puVar7 = PTR_DAT_04cad4c0;
  puVar6 = PTR_DAT_04cad330;
  puVar5 = PTR_DAT_04ca9d18;
  if (*(long *)(param_1 + 0x38) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_b8,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cb5cd0);
    lStack_90 = lStack_a8;
    puStack_98 = puStack_b0;
    uStack_a0 = uStack_b8;
    uStack_b8 = 0;
    puStack_b0 = &uStack_a0;
    while (uVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_a0,*(undefined8 *)puVar9), (uVar15 & 1) != 0) {
      if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar16 = UnityEngine_Component__get_gameObject_43bcde8(lStack_90,0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_GameObject__SetActive_43c1408(lVar16,0,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_a0,*(undefined8 *)puVar8);
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar16 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x50),0),
       lVar16 != 0)) {
      UnityEngine_GameObject__SetActive_43c1408(lVar16,0,0);
      lVar19 = *(long *)puVar5;
      plVar18 = *(long **)(param_1 + 0x60);
      lVar16 = *(long *)(lVar19 + 0x38);
      if (lVar16 == 0) {
        FUN_0216b4cc(lVar19);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      lVar16 = *(long *)(lVar16 + 0x10);
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_0216b470();
      }
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar16 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_0216b470();
      }
      uVar20 = **(undefined8 **)(lVar16 + 0xb8);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar6);
      }
      uVar20 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                         (*(undefined8 *)puVar11,*(undefined8 *)puVar14,uVar20,0);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x518))(plVar18,uVar20,*(undefined8 *)(*plVar18 + 0x520));
        if (*(long *)(param_1 + 0x60) != 0) {
          uVar20 = TMPro_TMP_Text__get_transform_42cd604(*(long *)(param_1 + 0x60),0);
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar7);
          }
          uVar4 = _UNK_00e207cc;
          uVar3 = _UNK_00e205f8;
          Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e205f8,_UNK_00e207cc,uVar20,0,0,0);
          if (*(long *)(param_1 + 0x48) != 0) {
            lVar16 = Dino_BusSand_App_UI_CommentPopPanel__FeedbackBox_22a68ac
                               (0x443e0000,0x434e0000,0x43d40000,
                                *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x28));
            plVar18 = (long *)(param_1 + 0x68);
            *plVar18 = lVar16;
            thunk_FUN_02134474(plVar18,lVar16);
            if (*plVar18 != 0) {
              uVar20 = UnityEngine_Component__get_transform_43bcd18(*plVar18,0);
              uVar2 = _UNK_00e205ec;
              uVar1 = _UNK_00e20180;
              Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                        (_UNK_00e20844,_UNK_00e20180,uVar4,_UNK_00e205ec,uVar20,0,0,0);
              if (*(long *)(param_1 + 0x48) != 0) {
                lVar19 = *(long *)puVar5;
                uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x28);
                lVar16 = *(long *)(lVar19 + 0x38);
                if (lVar16 == 0) {
                  FUN_0216b4cc(lVar19);
                  lVar16 = *(long *)(lVar19 + 0x38);
                }
                lVar16 = *(long *)(lVar16 + 0x10);
                if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_0216b470();
                }
                if (*(int *)(lVar16 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                lVar16 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
                if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_0216b470();
                }
                uVar17 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                                   (*(undefined8 *)puVar12,*(undefined8 *)puVar13,
                                    **(undefined8 **)(lVar16 + 0xb8),0);
                lVar16 = Dino_BusSand_App_UI_KitParts__Button_2306a4c
                                   (0x44030000,_UNK_00e202d0,0,0x42940000,0x436c0000,uVar20,
                                    *(undefined8 *)puVar10,0,uVar17,0,0);
                plVar18 = (long *)(param_1 + 0x58);
                *plVar18 = lVar16;
                thunk_FUN_02134474(plVar18,lVar16);
                Dino_BusSand_App_UI_UiMotion__Appear_228e0dc(uVar3,uVar1,uVar4,uVar2,*plVar18,0,0,0)
                ;
                if (*plVar18 != 0) {
                  uVar20 = UnityEngine_Component__get_gameObject_43bcde8(*plVar18,0);
                  uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                  System_Action___ctor_47b5ed0(uVar17,param_1,*(undefined8 *)PTR_DAT_04cb5cb0,0);
                  Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                            (uVar20,uVar17,1,*(undefined8 *)PTR_DAT_04cad948,0);
                  return;
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

