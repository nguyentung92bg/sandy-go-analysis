/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<LoseAnimation>d__76$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__LoseAnimation_d__76__MoveNext (Dino_BusSand_App_UI_BattleRoyaleScenePanel__LoseAnimation_d__76_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<LoseAnimation>d__76$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__LoseAnimation_d__76__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel__LoseAnimation_d__76_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_BattleRoyaleScenePanel__LoseAnimation_d__76__MoveNext_2197d6c
          (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  if ((bRam0000000004f9b9d6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadef0);
    FUN_02132f7c(PTR_DAT_04cad688);
    FUN_02132f7c(PTR_DAT_04cad698);
    FUN_02132f7c(PTR_DAT_04cad6a8);
    FUN_02132f7c(PTR_DAT_04cad6d0);
    FUN_02132f7c(PTR_DAT_04cadf80);
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04cadf88);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae360);
    bRam0000000004f9b9d6 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  if (*(int *)(param_4 + 0x10) != 0) {
    return 0;
  }
  lVar18 = *(long *)(param_4 + 0x20);
  *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  if ((lVar18 != 0) && (*(long *)(lVar18 + 0x40) != 0)) {
    iVar10 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                       (*(long *)(lVar18 + 0x40),0);
    if (*(long *)(lVar18 + 0x40) != 0) {
      iVar11 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc
                         (*(long *)(lVar18 + 0x40),0);
      puVar9 = PTR_DAT_04cadf88;
      puVar8 = PTR_DAT_04cadef0;
      puVar7 = PTR_DAT_04cad7c8;
      fVar6 = _UNK_00e2099c;
      uVar5 = _UNK_00e20844;
      fVar4 = _UNK_00e20840;
      fVar3 = _UNK_00e207cc;
      fVar2 = _UNK_00e20328;
      lVar17 = *(long *)(lVar18 + 0x80);
      if (lVar17 != 0) {
        iVar21 = 0;
        lVar19 = 0;
        iVar20 = 0;
        fVar28 = 0.0;
        fVar27 = 0.5;
        iVar11 = iVar11 + -1;
        do {
          if (*(int *)(lVar17 + 0x18) <= iVar20) {
            uVar15 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__MenFall_219653c(fVar27,lVar18);
            UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar18,uVar15,0);
            fVar2 = _UNK_00e20170;
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar27 = fVar27 + fVar2;
            uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar19,0,0);
            if ((uVar13 & 1) != 0) {
              uVar15 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__FallRoutine_21966e8
                                 (fVar27,uVar13,lVar19);
              UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar18,uVar15,0);
              plVar16 = *(long **)(lVar18 + 0xa0);
              if (plVar16 == (long *)0x0) break;
              dVar24 = (double)(**(code **)(*plVar16 + 0x1b8))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
              fVar27 = fVar27 + (float)dVar24 * fVar4 + _UNK_00e20448;
            }
            if (*(long *)(lVar18 + 0x90) != 0) {
              System_Collections_Generic_List_object___GetEnumerator_3a825f0
                        (&uStack_d8,*(long *)(lVar18 + 0x90),*(undefined8 *)PTR_DAT_04cad6d0);
              puVar7 = PTR_DAT_04cad698;
              fVar2 = _UNK_00e20448;
              uStack_b8 = puStack_d0;
              uStack_c0 = uStack_d8;
              lStack_b0 = lStack_c8;
              puStack_d0 = &uStack_c0;
              uStack_d8 = 0;
              while( true ) {
                uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                   (&uStack_c0,*(undefined8 *)puVar7);
                lVar17 = lStack_b0;
                if ((uVar13 & 1) == 0) {
                  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                            (&uStack_c0,*(undefined8 *)PTR_DAT_04cad688);
                  return 0;
                }
                if (lStack_b0 == 0) break;
                lVar19 = UnityEngine_Component__get_gameObject_43bcde8(lStack_b0,0);
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar13 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar19,0);
                if ((uVar13 & 1) != 0) {
                  uVar15 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__FallRoutine_21966e8
                                     (fVar27,uVar13,lVar17);
                  UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar18,uVar15,0);
                  plVar16 = *(long **)(lVar18 + 0xa0);
                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  dVar24 = (double)(**(code **)(*plVar16 + 0x1b8))
                                             (plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
                  fVar27 = fVar27 + (float)dVar24 * fVar4 + fVar2;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            break;
          }
          lVar17 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar17,iVar20,*(undefined8 *)puVar7);
          if ((lVar17 == 0) ||
             (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar17,0), lVar12 == 0)) break;
          uVar13 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar12,0);
          fVar25 = param_2;
          fVar22 = param_3;
          if ((uVar13 & 1) != 0) {
            fVar22 = (float)Dino_BusSand_App_UI_BattleRoyaleScenePanel__JumpTarget_219631c
                                      (lVar18,lVar17,iVar10 == iVar11);
            lVar12 = *(long *)(lVar18 + 0x88);
            fVar25 = 0.0;
            if (iVar21 != 0) {
              fVar25 = fVar22 - fVar28;
            }
            fVar26 = fVar25;
            if (iVar10 != iVar11) {
              fVar26 = fVar22;
            }
            if (iVar10 != iVar11 || iVar21 != 0) {
              fVar22 = fVar28;
            }
            fVar28 = fVar22;
            if (lVar12 == 0) break;
            if (iVar20 < *(int *)(lVar12 + 0x18)) {
              fVar22 = param_3;
              lVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (lVar12,iVar20,*(undefined8 *)puVar9);
              if (lVar14 == 0) break;
              lVar12 = *(long *)puVar8;
              iVar1 = *(int *)(lVar14 + 0x10);
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar12 = *(long *)puVar8;
              }
              if (iVar1 == **(int **)(lVar12 + 0xb8)) {
                uVar15 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__PlaySfx_2196498
                                   (fVar27 + fVar3,*(undefined8 *)PTR_DAT_04cae360);
                UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar18,uVar15,0);
                iVar21 = iVar21 + 1;
                lVar19 = lVar17;
                goto LAB_02298064;
              }
            }
            uVar15 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__Jump_21965e0
                               (fVar27,fVar26,param_2,param_3,lVar12,lVar17);
            UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar18,uVar15,0);
            if (iVar21 == 0) {
              plVar16 = *(long **)(lVar18 + 0xa0);
              if (plVar16 == (long *)0x0) break;
              dVar24 = (double)(**(code **)(*plVar16 + 0x1b8))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
              fVar23 = (float)dVar24 + 0.0;
              fVar25 = fVar26;
              fVar22 = param_2;
            }
            else {
              fVar22 = (float)iVar21 * fVar6 + fVar2;
              fVar25 = fVar4;
              if (fVar4 <= fVar22) {
                fVar25 = fVar22;
              }
              fVar22 = fVar6;
              fVar23 = (float)Dino_BusSand_App_UI_BattleRoyaleScenePanel__Rand_2196448(uVar5,lVar18)
              ;
            }
            fVar27 = fVar27 + fVar23;
            iVar21 = iVar21 + 1;
          }
LAB_02298064:
          lVar17 = *(long *)(lVar18 + 0x80);
          iVar20 = iVar20 + 1;
          param_2 = fVar25;
          param_3 = fVar22;
        } while (lVar17 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

