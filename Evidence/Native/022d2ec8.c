/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$OnOpen
void Dino_BusSand_App_UI_PassportPanel__OnOpen (Dino_BusSand_App_UI_PassportPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$OnOpen
   void Dino_BusSand_App_UI_PassportPanel__OnOpen (Dino_BusSand_App_UI_PassportPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__OnOpen_21d2ec8(long param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar4 = PTR_DAT_04cb0550;
  if ((bRam0000000004f9bb4c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caefb0);
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0550);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cb0560);
    FUN_02132f7c(PTR_DAT_04cb04f8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb0568);
    FUN_02132f7c(PTR_DAT_04cadb88);
    FUN_02132f7c(PTR_DAT_04cb0570);
    FUN_02132f7c(PTR_DAT_04cb0578);
    bRam0000000004f9bb4c = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_022d2fd4:
    param_2 = (long *)thunk_FUN_0216e89c();
    System_Object___ctor_4870e5c(param_2,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
    goto LAB_022d2fd4;
  }
  puVar4 = PTR_DAT_04caef48;
  if (param_1 == 0) goto LAB_022d3328;
  plVar15 = (long *)(param_1 + 0x38);
  *plVar15 = (long)param_2;
  thunk_FUN_02134474(plVar15,param_2);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
  plVar16 = (long *)(param_1 + 0x40);
  *plVar16 = lVar8;
  thunk_FUN_02134474(plVar16,lVar8);
  puVar3 = PTR_DAT_04cb04f8;
  if (*plVar16 != 0) {
    **(long **)(*(long *)PTR_DAT_04cb04f8 + 0xb8) = param_1;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),param_1);
    if (*(long *)(param_1 + 0x40) == 0) {
LAB_022d3328:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar7 = Dino_BusSand_App_Meta_PassportFeature__get_State_224602c(*(long *)(param_1 + 0x40),0);
    if (iVar7 == 0) {
      if (*plVar16 == 0) goto LAB_022d3328;
      Dino_BusSand_App_Meta_PassportFeature__StartPassport_2249b48(*plVar16,0);
    }
    puVar6 = PTR_DAT_04cb0570;
    puVar5 = PTR_DAT_04cb0568;
    puVar3 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022d3084 to 023d30df has its CatchHandler @ 022d2ba4 */
                    /* catch() { ... } // from try @ 022d2bfc with catch @ 022d3098 */
                    /* catch() { ... } // from try @ 022d2ea0 with catch @ 022d309c */
                    /* catch() { ... } // from try @ 022d2d24 with catch @ 022d30a0 */
                    /* catch() { ... } // from try @ 022d2c80 with catch @ 022d30a4
                       catch() { ... } // from try @ 022d2dc4 with catch @ 022d30a4 */
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cb0578,0,0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar6,0,0);
    lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe4) == 0) {
                    /* try { // try from 022d30e8 to 023d313f has its CatchHandler @ 022d30e8
                       catch() { ... } // from try @ 022d30e8 with catch @ 022d30e8
                       catch() { ... } // from try @ 022d35c8 with catch @ 022d30e8 */
      thunk_FUN_0218fdac(lVar12);
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
    lVar12 = 0;
    if ((uVar9 & 1) != 0) {
      if (lVar8 == 0) goto LAB_022d3328;
      lVar12 = UnityEngine_Component__GetComponent_object__26f97e8
                         (lVar8,*(undefined8 *)PTR_DAT_04caefb0);
    }
    plVar17 = (long *)(param_1 + 0x58);
    *plVar17 = lVar12;
    thunk_FUN_02134474(plVar17);
    lVar8 = *plVar17;
                    /* try { // try from 022d3140 to 023d3153 has its CatchHandler @ 022d35dc */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
    if ((uVar9 & 1) == 0) {
      plVar17 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                  (param_1,*(undefined8 *)PTR_DAT_04cadb88,0);
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)0x0;
      }
      else if (*plVar17 != *(long *)PTR_DAT_04cabdb0) {
        plVar17 = (long *)0x0;
      }
    }
    else {
      if (*plVar17 == 0) goto LAB_022d3328;
      plVar17 = *(long **)(*plVar17 + 0x20);
    }
                    /* try { // try from 022d31c4 to 023d320b has its CatchHandler @ 022d35e8 */
    *(long **)(param_1 + 0x50) = plVar17;
    thunk_FUN_02134474();
    Dino_BusSand_App_UI_PassportPanel__FitScroll_21d3334(param_1);
    Dino_BusSand_App_UI_PassportPanel__BuildList_21d355c(param_1);
    Dino_BusSand_App_UI_PassportPanel__BindButtons_21d3aec(param_1);
    Dino_BusSand_App_UI_PassportPanel__RefreshAll_21d42e8(param_1);
    puVar3 = PTR_DAT_04cb01b0;
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cb01b0), lVar8 == 0))
    goto LAB_022d3328;
    if (*(char *)(lVar8 + 100) != '\0') {
      if ((*plVar16 == 0) ||
         (lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                            (*plVar16,*(undefined8 *)puVar3), lVar8 == 0)) goto LAB_022d3328;
      lVar12 = *plVar16;
      *(undefined1 *)(lVar8 + 100) = 0;
      if (lVar12 == 0) goto LAB_022d3328;
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                (lVar12,*(undefined8 *)PTR_DAT_04cb0558);
      uVar10 = Dino_BusSand_App_UI_PassportPanel__UnlockEffect_21d436c(param_1);
      Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar10,0);
    }
    if (*plVar15 == 0) goto LAB_022d3328;
                    /* try { // try from 022d3268 to 023d32db has its CatchHandler @ 022d35e4 */
    if (*(char *)(*plVar15 + 0x18) == '\0') {
      if (*plVar16 == 0) goto LAB_022d3328;
      iVar7 = Dino_BusSand_App_Meta_PassportFeature__get_PendingKeys_2246980(*plVar16,0);
      if (iVar7 < 1) {
        Dino_BusSand_App_UI_PassportPanel__ScrollToCurrent_21d44b0(param_1);
        goto LAB_022d32ac;
      }
      uVar10 = Dino_BusSand_App_UI_PassportPanel__AppendKeys_21d4444(param_1);
    }
    else {
      uVar10 = Dino_BusSand_App_UI_PassportPanel__Guide_21d43d8(param_1);
    }
    Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar10,0);
LAB_022d32ac:
    puVar3 = PTR_DAT_04cb0560;
    uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar10,param_1,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_PassportFeature__add_Changed_22441d4(uVar10,0);
    lVar8 = Dino_BusSand_App_UI_PassportPanel__Countdown_21d4544(param_1);
    uVar9 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
                    /* try { // try from 022d3308 to 023d3357 has its CatchHandler @ 022d35e8 */
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (lVar8 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar11 = thunk_FUN_0216e89c();
      uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar11,uVar10,0);
    }
    else {
      uVar9 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar9 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar12 = *(long *)(param_1 + 0x10);
        if (lVar12 != 0) {
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8560)(lVar12,lVar8);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar11 = thunk_FUN_0216e89c();
      uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar11,uVar10,0);
    }
    uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar11,uVar10);
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    *(undefined1 *)(param_1 + 0x48) = 1;
    if ((*(char *)(param_1 + 0x49) != '\0') && (*(long *)(param_1 + 0x40) != 0)) {
      Dino_BusSand_App_Meta_PassportFeature__CommitPendingKeys_224785c(*(long *)(param_1 + 0x40),0);
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_022d2ec4;
      Dino_BusSand_App_Meta_PassportFeature__SetPendingKeysCommitDirty_22478ec
                (*(long *)(param_1 + 0x40),0,0);
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    }
    else {
      plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x10);
      lVar8 = *plVar15;
      *plVar15 = 0;
      thunk_FUN_02134474(plVar15,0);
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      }
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar9 = Dino_BusSand_App_Meta_PassportFeature__get_HasRedPoint_22490c0
                          (*(long *)(param_1 + 0x40),0), puVar4 = PTR_DAT_04cb01b0, (uVar9 & 1) != 0
       )) {
      plVar15 = *(long **)(param_1 + 0x40);
      if (plVar15 != (long *)0x0) {
        if ((bRam0000000004f9bf7b & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb0558,0);
          FUN_02132f7c(PTR_DAT_04cb01b0);
          bRam0000000004f9bf7b = 1;
        }
        lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (plVar15,*(undefined8 *)puVar4);
        puVar4 = PTR_DAT_04cb0558;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(undefined1 *)(lVar8 + 0x78) = 0;
        lVar8 = *(long *)puVar4;
        if ((bRam0000000004f9d943 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cac668);
          bRam0000000004f9d943 = 1;
        }
        puVar4 = PTR_DAT_04cac668;
        if (plVar15[2] == 0) {
          return;
        }
        uVar10 = (**(code **)(*plVar15 + 0x208))(plVar15,*(undefined8 *)(*plVar15 + 0x210));
        lVar12 = plVar15[2];
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar4);
        }
        puVar4 = PTR_DAT_04cabaf8;
        if ((bRam0000000004f9d81f & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cc4908,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x20));
          FUN_02132f7c(PTR_DAT_04cc4910);
          FUN_02132f7c(PTR_DAT_04cc4918);
          FUN_02132f7c(PTR_DAT_04cc4930);
          FUN_02132f7c(PTR_DAT_04cc4920);
          FUN_02132f7c(PTR_DAT_04cb4790);
          FUN_02132f7c(PTR_DAT_04cb4798);
          FUN_02132f7c(PTR_DAT_04cabaf8);
          FUN_02132f7c(PTR_DAT_04cc4938);
          bRam0000000004f9d81f = 1;
        }
        uStack_60 = 0;
        puStack_58 = (undefined8 *)0x0;
        lStack_50 = 0;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar8 = *(long *)puVar4;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar4;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
        if (lVar8 != 0) {
          if (*(long *)(lVar8 + 0x130) == 0) {
            uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
            System_Collections_Generic_List_object____ctor_3a8138c
                      (uVar11,*(undefined8 *)PTR_DAT_04cb4790);
            *(undefined8 *)(lVar8 + 0x130) = uVar11;
            thunk_FUN_02134474(lVar8 + 0x130,uVar11);
          }
          uVar11 = UnityEngine_JsonUtility__ToJson_44323ac(lVar12,0);
          puVar3 = PTR_DAT_04cc4910;
          if (*(long *)(lVar8 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_78,*(long *)(lVar8 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
          lStack_50 = lStack_68;
          puStack_58 = puStack_70;
          uStack_60 = uStack_78;
          uStack_78 = 0;
          puStack_70 = &uStack_60;
          do {
            uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_60,*(undefined8 *)puVar3);
            lVar12 = lStack_50;
            if ((uVar9 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
              lVar12 = *(long *)(lVar8 + 0x130);
              lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
              Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar8,0);
              if (lVar8 != 0) {
                *(undefined8 *)(lVar8 + 0x10) = uVar10;
                thunk_FUN_02134474((undefined8 *)(lVar8 + 0x10),uVar10);
                *(undefined8 *)(lVar8 + 0x18) = uVar11;
                thunk_FUN_02134474((undefined8 *)(lVar8 + 0x18),uVar11);
                if (lVar12 != 0) {
                  lVar13 = *(long *)(lVar12 + 0x10);
                  lVar14 = *(long *)PTR_DAT_04cc4930;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar2 = *(uint *)(lVar12 + 0x18);
                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                      plVar15 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar15 = lVar8;
                      thunk_FUN_02134474(plVar15,lVar8);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar12,lVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
                    return;
                  }
                }
              }
              goto LAB_028ef87c;
            }
            if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar9 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar10,0);
          } while ((uVar9 & 1) == 0);
          *(undefined8 *)(lVar12 + 0x18) = uVar11;
          thunk_FUN_02134474((undefined8 *)(lVar12 + 0x18),uVar11);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
        }
        return;
      }
LAB_022d2ec4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

