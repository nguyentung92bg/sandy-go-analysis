/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$OnTopRewardClicked
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnTopRewardClicked (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02295a24) */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$OnTopRewardClicked
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnTopRewardClicked
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnTopRewardClicked_2195550(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  
  puVar2 = PTR_DAT_04ca9d18;
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9b9c1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cae140);
    FUN_02132f7c(PTR_DAT_04caddc8);
    FUN_02132f7c(PTR_DAT_04cade08);
    bRam0000000004f9b9c1 = 1;
  }
  plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar1,1);
  lVar10 = *(long *)puVar2;
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cade08;
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  lVar8 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                    (*(undefined8 *)puVar1,**(undefined8 **)(lVar8 + 0xb8),0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar8 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar10 == 0)) {
    uVar5 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar5,0);
  }
  puVar2 = PTR_DAT_04cae140;
  puVar1 = PTR_DAT_04caddc8;
  if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar4[4] = lVar8;
  thunk_FUN_02134474(plVar4 + 4,lVar8);
  uVar5 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060(*(undefined8 *)puVar1,plVar4,0);
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
  fVar15 = 0.0;
  fVar7 = -300.0;
  if ((bRam0000000004f9b9c3 & 1) == 0) {
    fVar15 = 0.0;
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cae280);
    FUN_02132f7c(PTR_DAT_04cae288);
    FUN_02132f7c(PTR_DAT_04cae290);
    FUN_02132f7c(PTR_DAT_04cae298);
    FUN_02132f7c(PTR_DAT_04cae2a0);
    FUN_02132f7c(PTR_DAT_04cae2a8);
    FUN_02132f7c(PTR_DAT_04cae2b0);
    FUN_02132f7c(PTR_DAT_04cae2b8);
    FUN_02132f7c(PTR_DAT_04cae2c0);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cae2c8);
    bRam0000000004f9b9c3 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_1 + 0x9c) == '\0') {
    uVar13 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
      if ((uVar6 & 1) == 0) {
        if (*(int *)(param_1 + 0x98) == 9999) {
          if ((bRam0000000004f9b9c5 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            bRam0000000004f9b9c5 = 1;
          }
          puVar1 = PTR_DAT_04ca9ae8;
          if (*(char *)(param_1 + 0x9d) == '\0') {
            if (*(int *)(param_1 + 0x98) != -1) {
              uVar5 = *(undefined8 *)(param_1 + 0x60);
              *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
              if ((uVar6 & 1) != 0) {
                if ((*(long *)(param_1 + 0x60) == 0) ||
                   (lVar8 = UnityEngine_Component__get_gameObject_43bcde8
                                      (*(long *)(param_1 + 0x60),0), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if ((bRam0000000004fa8360 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
                  bRam0000000004fa8360 = 1;
                }
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar10 = *(long *)(lVar8 + 0x10);
                if (lVar10 != 0) {
                  if (pcRam0000000004fa8430 == (code *)0x0) {
                    pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
                  }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa8430)(lVar10,0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar8,0);
              }
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x9d) = 0;
          }
          return;
        }
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar10 != 0)) {
          if ((*(int *)(lVar10 + 0x48) == 1) &&
             (lVar12 = *(long *)(lVar10 + 0x30),
             lVar10 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0), lVar12 < lVar10)) {
            return;
          }
          if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cad948,0);
          *(undefined4 *)(param_1 + 0x98) = 9999;
          if (((*(long *)(param_1 + 0x60) != 0) &&
              (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x60),0),
              lVar10 != 0)) && (UnityEngine_GameObject__SetActive_43c1408(lVar10,1,0), lVar8 != 0))
          {
            lVar10 = *(long *)(param_1 + 0x60);
            UnityEngine_Transform__get_position_43d0e48(lVar8,0);
            if (lVar10 != 0) {
              UnityEngine_Transform__set_position_43d0f1c(lVar10,0);
              lVar8 = *(long *)(param_1 + 0x60);
              if (lVar8 != 0) {
                fVar14 = (float)UnityEngine_Transform__get_localPosition_43cfce8(lVar8,0);
                UnityEngine_Transform__set_localPosition_43cfda8
                          (fVar14 + 0.0,fVar7 + -300.0,fVar15 + 0.0,lVar8,0);
                if (*(long *)(param_1 + 0x60) != 0) {
                  plVar4 = (long *)UnityEngine_Transform__Find_43d4bec
                                             (*(long *)(param_1 + 0x60),
                                              *(undefined8 *)PTR_DAT_04cae288,0);
                  if (plVar4 == (long *)0x0) {
                    plVar4 = (long *)0x0;
                  }
                  else if (*plVar4 != *(long *)PTR_DAT_04cabdb0) {
                    plVar4 = (long *)0x0;
                  }
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(plVar4,0,0);
                  if ((uVar6 & 1) != 0) {
                    if (plVar4 == (long *)0x0) goto LAB_02295c5c;
                    UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar4,0);
                    UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44570000,plVar4,0);
                  }
                  lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
                  if (lVar8 != 0) {
                    if (*(int *)(lVar8 + 0x18) != 0) {
                      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_04cae2b0;
                      thunk_FUN_02134474((undefined8 *)(lVar8 + 0x20));
                      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                        *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)PTR_DAT_04cae2c0;
                        thunk_FUN_02134474((undefined8 *)(lVar8 + 0x28));
                        if (2 < *(uint *)(lVar8 + 0x18)) {
                          *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_04cae280;
                          thunk_FUN_02134474((undefined8 *)(lVar8 + 0x30));
                          puVar1 = PTR_DAT_04cae298;
                          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
                            *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)PTR_DAT_04cae298;
                            thunk_FUN_02134474((undefined8 *)(lVar8 + 0x38));
                            if (4 < *(uint *)(lVar8 + 0x18)) {
                              *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_04cae2c8;
                              thunk_FUN_02134474((undefined8 *)(lVar8 + 0x40));
                              if (5 < *(uint *)(lVar8 + 0x18)) {
                                *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)PTR_DAT_04cae2a0;
                                thunk_FUN_02134474((undefined8 *)(lVar8 + 0x48));
                                puVar2 = PTR_DAT_04cae290;
                                if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                                  uVar6 = 0;
                                  uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                                  do {
                                    if (uVar9 <= uVar6) goto LAB_02295c60;
                                    uVar11 = *(undefined8 *)(lVar8 + 0x20 + uVar6 * 8);
                                    lVar10 = *(long *)(param_1 + 0x60);
                                    uVar13 = System_String__Concat_46c82e0
                                                       (*(undefined8 *)puVar2,uVar11,0);
                                    if (lVar10 == 0) goto LAB_02295c5c;
                                    uVar13 = UnityEngine_Transform__Find_43d4bec(lVar10,uVar13,0);
                                    uVar3 = System_String__op_Equality_46d1108
                                                      (uVar11,*(undefined8 *)puVar1,0);
                                    Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8
                                              (uVar13,uVar3 & 1,0);
                                    uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                                    uVar6 = uVar6 + 1;
                                  } while ((long)uVar6 < (long)(int)*(uint *)(lVar8 + 0x18));
                                }
                                if (*(long *)(param_1 + 0x60) != 0) {
                                  uVar13 = UnityEngine_Transform__Find_43d4bec
                                                     (*(long *)(param_1 + 0x60),
                                                      *(undefined8 *)PTR_DAT_04cae2b8,0);
                                  Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar13,0,0);
                                  if (*(long *)(param_1 + 0x60) != 0) {
                                    uVar13 = UnityEngine_Transform__Find_43d4bec
                                                       (*(long *)(param_1 + 0x60),
                                                        *(undefined8 *)PTR_DAT_04cae2a8,0);
                                    Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108
                                              (uVar13,uVar5,0);
                                    lVar8 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__PopIn_2196040
                                                      (*(undefined8 *)(param_1 + 0x60));
                                    uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0
                                                      (param_1,0,0);
                                    if ((uVar6 & 1) == 0) {
                                      return;
                                    }
                                    if (lVar8 == 0) {
                                      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
                                      uVar13 = thunk_FUN_0216e89c();
                                      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
                                      System_NullReferenceException___ctor_483267c(uVar13,uVar5,0);
                                    }
                                    else {
                                      uVar6 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54
                                                        ();
                                      if ((uVar6 & 1) != 0) {
                                        if ((bRam0000000004fa84ef & 1) == 0) {
                                          FUN_02132f7c(PTR_DAT_04cf7890);
                                          bRam0000000004fa84ef = 1;
                                        }
                                        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02133224();
                                        }
                                        lVar10 = *(long *)(param_1 + 0x10);
                                        if (lVar10 != 0) {
                                          if (pcRam0000000004fa8560 == (code *)0x0) {
                                            pcRam0000000004fa8560 =
                                                 (code *)FUN_02132f40(&UNK_00e327ec);
                                          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                          (*pcRam0000000004fa8560)(lVar10,lVar8);
                                          return;
                                        }
                    /* WARNING: Subroutine does not return */
                                        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                                  (param_1,0);
                                      }
                                      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                                      uVar13 = thunk_FUN_0216e89c();
                                      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
                                      System_ArgumentException___ctor_47b660c(uVar13,uVar5,0);
                                    }
                                    uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
                                    FUN_021330e8(uVar13,uVar5);
                                  }
                                }
                                goto LAB_02295c5c;
                              }
                            }
                          }
                        }
                      }
                    }
LAB_02295c60:
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                }
              }
            }
          }
        }
LAB_02295c5c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  return;
}

