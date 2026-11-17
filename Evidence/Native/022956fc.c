/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$ShowTips
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__ShowTips (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, int32_t id, UnityEngine_Transform_o* target, UnityEngine_Vector3_o offset, System_String_o* text, bool above, float width, bool force, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$ShowTips
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__ShowTips
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, int32_t id, UnityEngine_Transform_o*
   target, UnityEngine_Vector3_o offset, System_String_o* text, bool above, float width, bool force,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__ShowTips_21956fc
               (float param_1,float param_2,float param_3,float param_4,long param_5,int param_6,
               long param_7,undefined8 param_8,uint param_9,uint param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar14 = param_2;
  fVar15 = param_3;
  if ((bRam0000000004f9b9c3 & 1) == 0) {
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
  puVar2 = PTR_DAT_04ca9ae8;
  if ((*(char *)(param_5 + 0x9c) == '\0') || ((param_10 & 1) != 0)) {
    uVar12 = *(undefined8 *)(param_5 + 0x60);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(param_7,0,0);
      if ((uVar7 & 1) == 0) {
        if ((*(int *)(param_5 + 0x98) == param_6) && ((param_10 & 1) == 0)) {
          if ((bRam0000000004f9b9c5 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            bRam0000000004f9b9c5 = 1;
          }
          puVar2 = PTR_DAT_04ca9ae8;
          if (*(char *)(param_5 + 0x9d) == '\0') {
            if (*(int *)(param_5 + 0x98) != -1) {
              uVar12 = *(undefined8 *)(param_5 + 0x60);
              *(undefined4 *)(param_5 + 0x98) = 0xffffffff;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
              if ((uVar7 & 1) != 0) {
                if ((*(long *)(param_5 + 0x60) == 0) ||
                   (lVar6 = UnityEngine_Component__get_gameObject_43bcde8
                                      (*(long *)(param_5 + 0x60),0), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if ((bRam0000000004fa8360 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
                  bRam0000000004fa8360 = 1;
                }
                if (lVar6 != 0) {
                  lVar10 = *(long *)(lVar6 + 0x10);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
                  }
                  if (pcRam0000000004fa8430 == (code *)0x0) {
                    pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
                  }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa8430)(lVar10,0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
            }
          }
          else {
            *(undefined1 *)(param_5 + 0x9d) = 0;
          }
          return;
        }
        if (*(long *)(param_5 + 0x40) != 0) {
          if ((param_10 & 1) == 0) {
            lVar6 = *(long *)(*(long *)(param_5 + 0x40) + 0x10);
            if (lVar6 == 0) goto LAB_02295c5c;
            if ((*(int *)(lVar6 + 0x48) == 1) &&
               (lVar10 = *(long *)(lVar6 + 0x30),
               lVar6 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0), lVar10 < lVar6)) {
              return;
            }
          }
          if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cad948,0);
          *(int *)(param_5 + 0x98) = param_6;
          if (((*(long *)(param_5 + 0x60) != 0) &&
              (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_5 + 0x60),0),
              lVar6 != 0)) && (UnityEngine_GameObject__SetActive_43c1408(lVar6,1,0), param_7 != 0))
          {
            lVar6 = *(long *)(param_5 + 0x60);
            UnityEngine_Transform__get_position_43d0e48(param_7,0);
            if (lVar6 != 0) {
              UnityEngine_Transform__set_position_43d0f1c(lVar6,0);
              lVar6 = *(long *)(param_5 + 0x60);
              if (lVar6 != 0) {
                fVar13 = (float)UnityEngine_Transform__get_localPosition_43cfce8(lVar6,0);
                UnityEngine_Transform__set_localPosition_43cfda8
                          (param_1 + fVar13,param_2 + fVar14,param_3 + fVar15,lVar6,0);
                if (*(long *)(param_5 + 0x60) != 0) {
                  plVar8 = (long *)UnityEngine_Transform__Find_43d4bec
                                             (*(long *)(param_5 + 0x60),
                                              *(undefined8 *)PTR_DAT_04cae288,0);
                  if (plVar8 == (long *)0x0) {
                    plVar8 = (long *)0x0;
                  }
                  else if (*plVar8 != *(long *)PTR_DAT_04cabdb0) {
                    plVar8 = (long *)0x0;
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar8,0,0);
                  if ((uVar7 & 1) != 0) {
                    if (plVar8 == (long *)0x0) goto LAB_02295c5c;
                    param_4 = param_4 + 60.0;
                    if (param_4 <= 360.0) {
                      param_4 = 360.0;
                    }
                    UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar8,0);
                    UnityEngine_RectTransform__set_sizeDelta_43cfa70(param_4,plVar8,0);
                  }
                  lVar6 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
                  if (lVar6 != 0) {
                    if (*(int *)(lVar6 + 0x18) != 0) {
                      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_04cae2b0;
                      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20));
                      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04cae2c0;
                    /* try { // try from 02295aa0 to 02395b0b has its CatchHandler @ 02295aa0
                       catch() { ... } // from try @ 02295aa0 with catch @ 02295aa0
                       catch() { ... } // from try @ 02295b14 with catch @ 02295aa0
                       catch() { ... } // from try @ 02295b98 with catch @ 02295aa0 */
                        thunk_FUN_02134474((undefined8 *)(lVar6 + 0x28));
                        if (2 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_04cae280;
                          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30));
                          puVar2 = PTR_DAT_04cae298;
                          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                            *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)PTR_DAT_04cae298;
                            thunk_FUN_02134474((undefined8 *)(lVar6 + 0x38));
                            if (4 < *(uint *)(lVar6 + 0x18)) {
                    /* try { // try from 02295b0c to 02395b13 has its CatchHandler @ 02295bd8 */
                              *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_04cae2c8;
                    /* try { // try from 02295b14 to 02395b43 has its CatchHandler @ 02295aa0 */
                              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x40));
                              puVar4 = PTR_DAT_04cae2a0;
                              if (5 < *(uint *)(lVar6 + 0x18)) {
                                *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)PTR_DAT_04cae2a0;
                                thunk_FUN_02134474((undefined8 *)(lVar6 + 0x48));
                                puVar3 = PTR_DAT_04cae290;
                    /* try { // try from 02295b44 to 02395b97 has its CatchHandler @ 02295bdc */
                                if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
                                  uVar7 = 0;
                                  uVar9 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
                                  do {
                                    if (uVar9 <= uVar7) goto LAB_02295c60;
                                    uVar11 = *(undefined8 *)(lVar6 + 0x20 + uVar7 * 8);
                                    lVar10 = *(long *)(param_5 + 0x60);
                                    uVar12 = System_String__Concat_46c82e0
                                                       (*(undefined8 *)puVar3,uVar11,0);
                                    if (lVar10 == 0) goto LAB_02295c5c;
                                    uVar12 = UnityEngine_Transform__Find_43d4bec(lVar10,uVar12,0);
                    /* try { // try from 02295b98 to 02395c0b has its CatchHandler @ 02295aa0 */
                                    puVar1 = (undefined8 *)puVar4;
                                    if ((param_9 & 1) == 0) {
                                      puVar1 = (undefined8 *)puVar2;
                                    }
                                    uVar5 = System_String__op_Equality_46d1108(uVar11,*puVar1,0);
                                    Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8
                                              (uVar12,uVar5 & 1,0);
                                    uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
                                    uVar7 = uVar7 + 1;
                                  } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
                                }
                    /* catch() { ... } // from try @ 02295b0c with catch @ 02295bd8 */
                                if (*(long *)(param_5 + 0x60) != 0) {
                    /* catch() { ... } // from try @ 02295b44 with catch @ 02295bdc */
                                  uVar12 = UnityEngine_Transform__Find_43d4bec
                                                     (*(long *)(param_5 + 0x60),
                                                      *(undefined8 *)PTR_DAT_04cae2b8,0);
                                  Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar12,0,0);
                                  if (*(long *)(param_5 + 0x60) != 0) {
                                    uVar12 = UnityEngine_Transform__Find_43d4bec
                                                       (*(long *)(param_5 + 0x60),
                                                        *(undefined8 *)PTR_DAT_04cae2a8,0);
                                    Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108
                                              (uVar12,param_8,0);
                                    lVar6 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__PopIn_2196040
                                                      (*(undefined8 *)(param_5 + 0x60));
                                    uVar7 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0
                                                      (param_5,0,0);
                                    if ((uVar7 & 1) == 0) {
                                      return;
                                    }
                                    if (lVar6 == 0) {
                                      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
                                      uVar11 = thunk_FUN_0216e89c();
                                      uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
                                      System_NullReferenceException___ctor_483267c(uVar11,uVar12,0);
                                    }
                                    else {
                                      uVar7 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54
                                                        ();
                                      if ((uVar7 & 1) != 0) {
                                        if ((bRam0000000004fa84ef & 1) == 0) {
                                          FUN_02132f7c(PTR_DAT_04cf7890);
                                          bRam0000000004fa84ef = 1;
                                        }
                                        if (param_5 != 0) {
                                          lVar10 = *(long *)(param_5 + 0x10);
                                          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                                      (param_5,0);
                                          }
                                          if (pcRam0000000004fa8560 == (code *)0x0) {
                                            pcRam0000000004fa8560 =
                                                 (code *)FUN_02132f40(&UNK_00e327ec);
                                          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                          (*pcRam0000000004fa8560)(lVar10,lVar6);
                                          return;
                                        }
                    /* WARNING: Subroutine does not return */
                                        FUN_02133224();
                                      }
                                      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                                      uVar11 = thunk_FUN_0216e89c();
                                      uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
                                      System_ArgumentException___ctor_47b660c(uVar11,uVar12,0);
                                    }
                                    uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
                                    FUN_021330e8(uVar11,uVar12);
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

