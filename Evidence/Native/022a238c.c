/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$OnBoxClick
void Dino_BusSand_App_UI_ClimbTowerItemView__OnBoxClick (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022a2be4) */
/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$OnBoxClick
   void Dino_BusSand_App_UI_ClimbTowerItemView__OnBoxClick
   (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerItemView__OnBoxClick_21a238c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uStack_58;
  
  puVar4 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba23 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cae880);
    FUN_02132f7c(PTR_DAT_04cae888);
    FUN_02132f7c(PTR_DAT_04cae890);
    FUN_02132f7c(PTR_DAT_04cae898);
    bRam0000000004f9ba23 = 1;
  }
  uVar16 = *(undefined8 *)(param_4 + 0x20);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
  if ((uVar10 & 1) == 0) {
    lVar11 = *(long *)(param_4 + 0x20);
    if (lVar11 == 0) goto LAB_022a26cc;
    if (*(char *)(lVar11 + 0x2c) == '\0') {
      iVar1 = *(int *)(param_4 + 0x3c);
      bVar2 = *(byte *)(param_4 + 0x40) ^ 1;
      *(byte *)(param_4 + 0x40) = bVar2;
      puVar6 = PTR_DAT_04cae8f0;
      if (iVar1 == 2) {
        if (bVar2 == 0) {
          if ((bRam0000000004f9ba41 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cae8d0);
            FUN_02132f7c(PTR_DAT_04cae8d8);
            FUN_02132f7c(PTR_DAT_04cae8e0);
            FUN_02132f7c(PTR_DAT_04cae8e8);
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            FUN_02132f7c(PTR_DAT_04cae8f0);
            bRam0000000004f9ba41 = 1;
          }
          puVar7 = PTR_DAT_04cae8f0;
          puVar5 = PTR_DAT_04cae8d8;
          puVar6 = PTR_DAT_04cae8d0;
          puVar4 = PTR_DAT_04ca9ae8;
          uStack_58 = 0;
          if (*(long *)(lVar11 + 0x90) != 0) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_58,*(long *)(lVar11 + 0x90),*(undefined8 *)PTR_DAT_04cae8e8);
            do {
              uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                 (&uStack_58,*(undefined8 *)puVar5);
              if ((uVar10 & 1) == 0) {
                System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                          (&uStack_58,*(undefined8 *)puVar6);
                Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar11,*(undefined8 *)puVar7,0,0);
                return;
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar10 = UnityEngine_Object__op_Inequality_43c8dec(0,param_4,0);
            } while ((uVar10 & 1) == 0);
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        plVar15 = *(long **)(param_4 + 0x48);
        if (plVar15 == (long *)0x0) {
          plVar15 = (long *)0x0;
        }
        else if (*plVar15 != *(long *)PTR_DAT_04cabdb0) {
          plVar15 = (long *)0x0;
        }
        if ((bRam0000000004f9ba42 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cabda8);
          FUN_02132f7c(PTR_DAT_04cabdb0);
          FUN_02132f7c(PTR_DAT_04cae8f0);
          bRam0000000004f9ba42 = 1;
        }
        puVar5 = PTR_DAT_04cabdb0;
        puVar4 = PTR_DAT_04ca9ae8;
        uStack_58 = 0;
        plVar12 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar11,*(undefined8 *)puVar6,0);
        if (plVar12 == (long *)0x0) {
          plVar12 = (long *)0x0;
        }
        else if (*plVar12 != *(long *)puVar5) {
          plVar12 = (long *)0x0;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Object__op_Equality_43c6f30(plVar12,0,0);
        if ((uVar10 & 1) == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Equality_43c6f30(plVar15,0,0);
          if ((uVar10 & 1) == 0) {
            Dino_BusSand_App_UI_ClimbTowerPanel__HideAllItemTips_21a2ae4(lVar11,0);
            if (plVar12 == (long *)0x0) {
LAB_022a337c:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            plVar13 = (long *)UnityEngine_Transform__get_parent_43d0d70(plVar12,0);
            if (plVar13 == (long *)0x0) {
              plVar13 = (long *)0x0;
            }
            else if (*plVar13 != *(long *)puVar5) {
              plVar13 = (long *)0x0;
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = UnityEngine_Object__op_Equality_43c6f30(plVar13,0,0);
            if ((uVar10 & 1) == 0) {
              if (cRam0000000004f9b94d == '\0') {
                FUN_02132f7c(PTR_DAT_04cad1b0);
                cRam0000000004f9b94d = '\x01';
              }
              puVar6 = PTR_DAT_04cad1b0;
              uVar16 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
              uVar16 = 0;
              if ((uVar10 & 1) != 0) {
                if (cRam0000000004f9b94d == '\0') {
                  FUN_02132f7c(PTR_DAT_04cad1b0);
                  cRam0000000004f9b94d = '\x01';
                }
                if (**(long **)(*(long *)puVar6 + 0xb8) == 0) goto LAB_022a337c;
                uVar16 = *(undefined8 *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x20);
              }
              if (plVar15 == (long *)0x0) goto LAB_022a337c;
              uVar18 = UnityEngine_Transform__get_position_43d0e48(plVar15,0);
              if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894
                        (uVar18,param_2,param_3,uVar16,0);
              uVar16 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_467e798
                                 (plVar13,uVar16,&uStack_58,0);
              uVar16 = Dino_BusSand_App_UI_ClimbTowerPanel__TipsAnim_21a6620
                                 (0,uStack_58._4_4_ + 150.0,0,uStack_58._4_4_ + 150.0 + 150.0,uVar16
                                  ,plVar12);
              Dino_BusSand_App_UI_UIPanel__Run_2200f98(lVar11,uVar16,0);
            }
          }
        }
        return;
      }
      if (iVar1 == 1) {
        Dino_BusSand_App_UI_ClimbTowerPanel__HideAllItemTips_21a2ae4(lVar11,0);
        if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae880,0);
        if (*(long *)(param_4 + 0x20) != 0) {
          Dino_BusSand_App_UI_ClimbTowerPanel__OnClaim_21a2c98(*(long *)(param_4 + 0x20),param_4);
          puVar6 = PTR_DAT_04cae898;
          uVar16 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c
                             (param_4,*(undefined8 *)PTR_DAT_04cae898);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
          lVar11 = 0;
          if ((uVar10 & 1) != 0) {
            lVar11 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c
                               (param_4,*(undefined8 *)puVar6);
            if (lVar11 == 0) goto LAB_022a26cc;
            lVar11 = UnityEngine_Component__GetComponent_object__26f97e8
                               (lVar11,*(undefined8 *)PTR_DAT_04cada30);
          }
          if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar6 = PTR_DAT_04cae890;
          Dino_BusSand_App_UI_CommerceUi__Play_22a8904(lVar11,*(undefined8 *)PTR_DAT_04cae890,0);
          uVar16 = UnityEngine_Component__GetComponent_object__26f97e8
                             (param_4,*(undefined8 *)PTR_DAT_04cada30);
          Dino_BusSand_App_UI_CommerceUi__Play_22a8904(uVar16,*(undefined8 *)PTR_DAT_04cae888,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
          fVar17 = 0.5;
          if ((uVar10 & 1) != 0) {
            if (lVar11 == 0) goto LAB_022a26cc;
            uVar16 = UnityEngine_Animation__get_Item_4334ee8(lVar11,*(undefined8 *)puVar6,0);
            uVar10 = UnityEngine_TrackedReference__op_Inequality_43c6a68(uVar16,0,0);
            fVar17 = 0.5;
            if ((uVar10 & 1) != 0) {
              lVar11 = UnityEngine_Animation__get_Item_4334ee8(lVar11,*(undefined8 *)puVar6,0);
              if (lVar11 == 0) goto LAB_022a26cc;
              fVar17 = (float)UnityEngine_AnimationState__get_length_4337218(lVar11,0);
            }
          }
          fVar3 = 0.5;
          if (0.5 <= fVar17) {
            fVar3 = fVar17;
          }
          lVar11 = Dino_BusSand_App_UI_ClimbTowerItemView__AfterClaim_21a3074(fVar3,param_4);
          if (lVar11 == 0) {
            thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
            uVar14 = thunk_FUN_0216e89c();
            uVar16 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
            System_NullReferenceException___ctor_483267c(uVar14,uVar16,0);
          }
          else {
            uVar10 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
            if ((uVar10 & 1) != 0) {
              if ((bRam0000000004fa84ef & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf7890);
                bRam0000000004fa84ef = 1;
              }
              if (param_4 != 0) {
                lVar9 = *(long *)(param_4 + 0x10);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_4,0);
                }
                if (pcRam0000000004fa8560 == (code *)0x0) {
                  pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000004fa8560)(lVar9,lVar11);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            thunk_FUN_021985a8(PTR_DAT_04caa3a8);
            uVar14 = thunk_FUN_0216e89c();
            uVar16 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
            System_ArgumentException___ctor_47b660c(uVar14,uVar16,0);
          }
          uVar16 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar14,uVar16);
        }
      }
      else {
        if (iVar1 != 0) {
          return;
        }
        Dino_BusSand_App_UI_ClimbTowerItemView__BuildRewardBubble_21a26d0(param_4);
        if (*(long *)(param_4 + 0x20) != 0) {
          Dino_BusSand_App_UI_ClimbTowerPanel__HideAllItemTips_21a2ae4
                    (*(long *)(param_4 + 0x20),param_4);
          puVar4 = PTR_DAT_04ca9ae8;
          lVar11 = *(long *)(param_4 + 0x68);
          bVar2 = *(byte *)(param_4 + 0x40);
          if ((bRam0000000004f9ba28 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            bRam0000000004f9ba28 = 1;
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
          if ((uVar10 & 1) == 0) {
            return;
          }
          if ((lVar11 != 0) &&
             (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0), lVar9 != 0)) {
            bVar8 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar9,0);
            if ((bVar8 & 1) == (bVar2 & 1)) {
              return;
            }
            lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
            if (lVar11 != 0) {
              bVar2 = bVar2 & 1;
              if ((bRam0000000004fa8360 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf5bd0,bVar2,0);
                bRam0000000004fa8360 = 1;
              }
              if (lVar11 != 0) {
                lVar9 = *(long *)(lVar11 + 0x10);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar11,0);
                }
                if (pcRam0000000004fa8430 == (code *)0x0) {
                  pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
                }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000004fa8430)(lVar9,bVar2);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
LAB_022a26cc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

