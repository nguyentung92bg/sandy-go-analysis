/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$BuildList
void Dino_BusSand_App_UI_StreakRatePanel__BuildList (Dino_BusSand_App_UI_StreakRatePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$BuildList
   void Dino_BusSand_App_UI_StreakRatePanel__BuildList (Dino_BusSand_App_UI_StreakRatePanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakRatePanel__BuildList_21e404c(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  float fVar23;
  undefined1 auVar24 [16];
  uint uStack_64;
  
  if ((bRam0000000004f9bbc2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad530);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb0d78);
    FUN_02132f7c(PTR_DAT_04cae0c8);
    FUN_02132f7c(PTR_DAT_04cae0d0);
    FUN_02132f7c(PTR_DAT_04cae0d8);
    FUN_02132f7c(PTR_DAT_04cae138);
                    /* catch() { ... } // from try @ 022e3fc0 with catch @ 022e40e4 */
    FUN_02132f7c(PTR_DAT_04cae0f8);
    FUN_02132f7c(PTR_DAT_04caf070);
    bRam0000000004f9bbc2 = 1;
  }
  uStack_64 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar10 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008
                       (*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar11 = Dino_BusSand_App_Meta_StreakRateFeature__NeedScores_224bf28
                         (*(long *)(param_1 + 0x38),lVar10,0);
      puVar9 = PTR_DAT_04cae138;
      puVar8 = PTR_DAT_04cae0f8;
      puVar7 = PTR_DAT_04cae0c8;
      puVar6 = PTR_DAT_04cabdb0;
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar12 = Dino_BusSand_App_Meta_StreakRateFeature__RewardIds_224bf94
                           (*(long *)(param_1 + 0x38),lVar10,0);
        plVar13 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar9,0)
        ;
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x0;
        }
        else if (*plVar13 != *(long *)puVar6) {
          plVar13 = (long *)0x0;
        }
        lVar14 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0
                           (param_1,*(undefined8 *)puVar8,*(undefined8 *)puVar7);
        plVar22 = (long *)(param_1 + 0x60);
        *plVar22 = lVar14;
        thunk_FUN_02134474(plVar22,lVar14);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar15 = UnityEngine_Object__op_Inequality_43c8dec(plVar13,0,0);
        plVar16 = (long *)0x0;
        if ((uVar15 & 1) != 0) {
          if (plVar13 == (long *)0x0) goto LAB_022e4670;
          plVar16 = (long *)UnityEngine_Transform__get_parent_43d0d70(plVar13,0);
          if (plVar16 == (long *)0x0) {
            plVar16 = (long *)0x0;
          }
          else if (*plVar16 != *(long *)puVar6) {
            plVar16 = (long *)0x0;
          }
        }
        plVar20 = (long *)(param_1 + 0x50);
        *plVar20 = (long)plVar16;
        thunk_FUN_02134474(plVar20);
        uVar21 = *(undefined8 *)(param_1 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar15 = UnityEngine_Object__op_Inequality_43c8dec(uVar21,0,0);
        uVar21 = 0;
        if ((uVar15 & 1) != 0) {
          if (*plVar22 == 0) goto LAB_022e4670;
          uVar21 = *(undefined8 *)(*plVar22 + 0x40);
        }
        *(undefined8 *)(param_1 + 0x58) = uVar21;
        thunk_FUN_02134474();
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar15 = UnityEngine_Object__op_Equality_43c6f30(plVar13,0,0);
        if ((uVar15 & 1) == 0) {
          lVar14 = *plVar20;
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar15 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
          if ((uVar15 & 1) == 0) {
            if (*plVar20 != 0) {
              UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0,*plVar20,0);
              if (*plVar20 != 0) {
                UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0,*plVar20,0);
                if (((*plVar20 != 0) &&
                    (UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,*plVar20,0),
                    fVar5 = _UNK_00e20030, lVar11 != 0)) && (*plVar20 != 0)) {
                  iVar1 = *(int *)(lVar11 + 0x18);
                  fVar23 = (float)iVar1 * _UNK_00e20030 + -9.0;
                  fVar4 = 0.0;
                  if (0.0 <= fVar23) {
                    fVar4 = fVar23;
                  }
                  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0,fVar4,*plVar20,0);
                  lVar14 = *plVar20;
                  if (cRam0000000004f9b948 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cacfc0);
                    cRam0000000004f9b948 = '\x01';
                  }
                  if (lVar14 != 0) {
                    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],lVar14,0);
                    lVar14 = *plVar22;
                    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
                    if ((uVar15 & 1) == 0) {
LAB_022e442c:
                      puVar7 = PTR_DAT_04caf070;
                      puVar6 = PTR_DAT_04cad530;
                      uStack_64 = 0;
                      if (iVar1 < 1) {
                        return;
                      }
                      do {
                        plVar22 = plVar13;
                        if (uStack_64 != 0) {
                          if (plVar13 == (long *)0x0) goto LAB_022e4670;
                          uVar21 = UnityEngine_Component__get_gameObject_43bcde8(plVar13,0);
                    /* try { // try from 022e446c to 023e4477 has its CatchHandler @ 022e4728 */
                          lVar14 = *plVar20;
                          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
                          }
                          lVar14 = UnityEngine_Object__Instantiate_object__2805310
                                             (uVar21,lVar14,0,*(undefined8 *)PTR_DAT_04cad390);
                    /* try { // try from 022e44a4 to 023e44bb has its CatchHandler @ 022e473c */
                          if (lVar14 == 0) goto LAB_022e4670;
                          plVar22 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar14,0);
                          if ((plVar22 != (long *)0x0) && (*plVar22 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
                            FUN_021335a4(plVar22);
                          }
                        }
                        uVar21 = System_Int32__ToString_482d750(&uStack_64,0);
                    /* try { // try from 022e44e8 to 023e4517 has its CatchHandler @ 022e4738 */
                        uVar21 = System_String__Concat_46c82e0(*(undefined8 *)puVar7,uVar21,0);
                        if (plVar22 == (long *)0x0) goto LAB_022e4670;
                        UnityEngine_Object__set_name_43c72ec(plVar22,uVar21,0);
                        UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,plVar22,0);
                        UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,plVar22,0);
                        UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,plVar22,0);
                    /* try { // try from 022e4544 to 023e4557 has its CatchHandler @ 022e4720 */
                        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                  (0,(float)(int)uStack_64 * fVar5,plVar22,0);
                        lVar14 = UnityEngine_Component__get_gameObject_43bcde8(plVar22,0);
                        if (lVar14 == 0) goto LAB_022e4670;
                        UnityEngine_GameObject__SetActive_43c1408(lVar14,1,0);
                        lVar14 = *(long *)(param_1 + 0x68);
                        if (lVar14 == 0) goto LAB_022e4670;
                        lVar17 = *(long *)(lVar14 + 0x10);
                        lVar19 = *(long *)puVar6;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        if (lVar17 == 0) goto LAB_022e4670;
                        uVar2 = *(uint *)(lVar14 + 0x18);
                        if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                          puVar18 = (undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
                          *puVar18 = plVar22;
                          auVar24 = thunk_FUN_02134474(puVar18,plVar22);
                        }
                        else {
                          auVar24 = System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                              (lVar14,plVar22,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
                          ;
                        }
                        if (lVar10 == 0) goto LAB_022e4670;
                        iVar3 = (uint)((int)*(uint *)(lVar10 + 0x48) <= (int)uStack_64) << 1;
                        if (uStack_64 == *(uint *)(lVar10 + 0x48)) {
                          iVar3 = 1;
                        }
                        if (*(uint *)(lVar11 + 0x18) <= uStack_64) {
LAB_022e4674:
                    /* WARNING: Subroutine does not return */
                          FUN_0213322c(auVar24._0_8_,auVar24._8_8_,iVar3);
                        }
                        if (lVar12 == 0) goto LAB_022e4670;
                        if (((int)uStack_64 < (int)*(uint *)(lVar12 + 0x18)) &&
                           (*(uint *)(lVar12 + 0x18) <= uStack_64)) goto LAB_022e4674;
                        Dino_BusSand_App_UI_StreakRatePanel__SetItem_21e4990(param_1,plVar22);
                    /* try { // try from 022e463c to 023e468f has its CatchHandler @ 022e4738 */
                        uStack_64 = uStack_64 + 1;
                        if (iVar1 <= (int)uStack_64) {
                          return;
                        }
                      } while( true );
                    }
                    if (*plVar22 != 0) {
                      lVar14 = *(long *)(*plVar22 + 0x68);
                      uVar21 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae0d0);
                      UnityEngine_Events_UnityAction_Vector2____ctor_303b9ac
                                (uVar21,param_1,*(undefined8 *)PTR_DAT_04cb0d78,0);
                      if (lVar14 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e4690 with catch @ 022e4420
                       catch(type#1 @ 00000000) { ... } // from try @ 022e4708 with catch @ 022e4420
                       catch(type#1 @ 00000000) { ... } // from try @ 022e475c with catch @ 022e4420
                        */
                        UnityEngine_Events_UnityEvent_Vector2___AddListener_303dee8
                                  (lVar14,uVar21,*(undefined8 *)PTR_DAT_04cae0d8);
                        goto LAB_022e442c;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_022e4670;
          }
        }
        return;
      }
    }
  }
LAB_022e4670:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

