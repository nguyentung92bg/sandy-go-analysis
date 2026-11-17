/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton.<ProgressAnim>d__41$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingHallButton__ProgressAnim_d__41__MoveNext (Dino_BusSand_App_UI_YachtRacingHallButton__ProgressAnim_d__41_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton.<ProgressAnim>d__41$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingHallButton__ProgressAnim_d__41__MoveNext
   (Dino_BusSand_App_UI_YachtRacingHallButton__ProgressAnim_d__41_o* __this, const MethodInfo*
   method); */

undefined4
Dino_BusSand_App_UI_YachtRacingHallButton__ProgressAnim_d__41__MoveNext_21ea39c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  int iStack_48;
  undefined4 uStack_44;
  
  if ((bRam0000000004f9bbf0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cb0fc0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022ea3e8 to 023ea3ef has its CatchHandler @ 022ea44c */
                    /* try { // try from 022ea3f0 to 023ea47b has its CatchHandler @ 022ea350 */
    FUN_02132f7c(PTR_DAT_04cb0fc8);
    FUN_02132f7c(PTR_DAT_04cb0fd0);
    FUN_02132f7c(PTR_DAT_04cb0fd8);
    FUN_02132f7c(PTR_DAT_04cb0fe0);
    FUN_02132f7c(PTR_DAT_04cb0fe8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cb0ff0);
    FUN_02132f7c(PTR_DAT_04cb0ff8);
                    /* catch() { ... } // from try @ 022ea3e8 with catch @ 022ea44c */
    FUN_02132f7c(PTR_DAT_04cb1000);
    FUN_02132f7c(PTR_DAT_04cabd10);
    bRam0000000004f9bbf0 = 1;
  }
  puVar2 = PTR_DAT_04cb0fe8;
  puVar1 = PTR_DAT_04caca88;
  iVar3 = *(int *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x20);
  iStack_48 = 0;
                    /* try { // try from 022ea47c to 023ea513 has its CatchHandler @ 022ea47c
                       catch() { ... } // from try @ 022ea47c with catch @ 022ea47c
                       catch() { ... } // from try @ 022ea51c with catch @ 022ea47c */
  if (iVar3 < 4) {
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
        System_Object___ctor_4870e5c(lVar8,0);
        plVar12 = (long *)(param_1 + 0x28);
        *plVar12 = lVar8;
        thunk_FUN_02134474(plVar12,lVar8);
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x28) != 0)) {
          iVar3 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4
                            (*(long *)(lVar10 + 0x28),0);
          if (iVar3 != 6) {
                    /* try { // try from 022ea76c to 023ea773 has its CatchHandler @ 022ea7d0 */
            uVar6 = *(undefined8 *)(lVar10 + 0x78);
                    /* try { // try from 022ea774 to 023ea7ff has its CatchHandler @ 022ea6d4 */
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
            if ((uVar5 & 1) == 0) {
              *(undefined1 *)(lVar10 + 0x8c) = 1;
              if (*(long *)(lVar10 + 0x28) != 0) {
                uVar4 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentWinCount_225546c
                                  (*(long *)(lVar10 + 0x28),0);
                lVar8 = *(long *)(lVar10 + 0x28);
                *(undefined4 *)(param_1 + 0x30) = uVar4;
                if (lVar8 != 0) {
                  uVar4 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc
                                    (lVar8,0xffffffff,0);
                    /* catch() { ... } // from try @ 022ea76c with catch @ 022ea7d0 */
                  lVar8 = *(long *)(lVar10 + 0x28);
                  *(undefined4 *)(param_1 + 0x34) = uVar4;
                  if (lVar8 != 0) {
                    uStack_44 = Dino_BusSand_App_Meta_YachtRacingCore__get_PlayerRanking_22554a8
                                          (lVar8,0);
                    uVar7 = *(undefined8 *)(lVar10 + 0x68);
                    uVar6 = System_Int32__ToString_482d750(&uStack_44,0);
                    /* try { // try from 022ea800 to 023ea897 has its CatchHandler @ 022ea800
                       catch() { ... } // from try @ 022ea800 with catch @ 022ea800
                       catch() { ... } // from try @ 022ea8a0 with catch @ 022ea800 */
                    Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar7,uVar6,0);
                    uVar11 = *(undefined8 *)(lVar10 + 0x80);
                    iStack_48 = *(int *)(param_1 + 0x30) + -1;
                    uVar6 = System_Int32__ToString_482d750(&iStack_48,0);
                    uVar7 = System_Int32__ToString_482d750((undefined4 *)(param_1 + 0x34),0);
                    uVar6 = System_String__Concat_46d2b84
                                      (uVar6,*(undefined8 *)PTR_DAT_04cabd10,uVar7,0);
                    Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,uVar6,0);
                    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8
                              (*(undefined8 *)(lVar10 + 0x70),0,0);
                    if ((*(long *)(lVar10 + 0x78) != 0) &&
                       (lVar8 = UnityEngine_Component__get_gameObject_43bcde8
                                          (*(long *)(lVar10 + 0x78),0), lVar8 != 0)) {
                      UnityEngine_GameObject__SetActive_43c1408(lVar8,1,0);
                    /* try { // try from 022ea898 to 023ea89f has its CatchHandler @ 022ea8fc */
                      if (*(long *)(lVar10 + 0x78) != 0) {
                    /* try { // try from 022ea8a0 to 023ea92b has its CatchHandler @ 022ea800 */
                        UnityEngine_RectTransform__set_pivot_43cfbf4
                                  (0,0x3f000000,*(long *)(lVar10 + 0x78),0);
                        if (*(long *)(lVar10 + 0x78) != 0) {
                          UnityEngine_Transform__set_localScale_43d1be0
                                    (0,0x3f800000,0x3f800000,*(long *)(lVar10 + 0x78),0);
                          if (*plVar12 != 0) {
                            *(undefined8 *)(*plVar12 + 0x10) = *(undefined8 *)(lVar10 + 0x78);
                            thunk_FUN_02134474();
                            if (*plVar12 != 0) {
                              *(undefined8 *)(*plVar12 + 0x18) = *(undefined8 *)(lVar10 + 0x80);
                              thunk_FUN_02134474();
                    /* catch() { ... } // from try @ 022ea898 with catch @ 022ea8fc */
                              uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
                              UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0
                                        (_UNK_00e20328,uVar6,0);
                              *(undefined8 *)(param_1 + 0x18) = uVar6;
                              thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
                              *(undefined4 *)(param_1 + 0x10) = 1;
                              return 1;
                    /* try { // try from 022ea92c to 023ea9c3 has its CatchHandler @ 022ea92c
                       catch() { ... } // from try @ 022ea92c with catch @ 022ea92c
                       catch() { ... } // from try @ 022ea9cc with catch @ 022ea92c */
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_022eab4c;
            }
          }
          return 0;
        }
      }
      else {
        if (iVar3 != 1) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar10 != 0) {
          uVar5 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(lVar10);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0fc0);
          System_Func_float__float____ctor_37a4838(uVar6,0,*(undefined8 *)PTR_DAT_04cb0ff8,0);
          uVar11 = *(undefined8 *)(param_1 + 0x28);
          uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
          System_Action_float____ctor_35f1448(uVar7,uVar11,*(undefined8 *)PTR_DAT_04cb0fc8,0);
                    /* try { // try from 022ea514 to 023ea51b has its CatchHandler @ 022ea578 */
                    /* try { // try from 022ea51c to 023ea5a7 has its CatchHandler @ 022ea47c */
          uVar6 = Dino_BusSand_App_UI_YachtRacingUi__Tween_21f746c(_UNK_00e20590,uVar6,uVar7,0);
          *(undefined8 *)(param_1 + 0x18) = uVar6;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
          uVar4 = 2;
LAB_022eab1c:
          *(undefined4 *)(param_1 + 0x10) = uVar4;
          return 1;
        }
      }
    }
    else {
      if (iVar3 == 2) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 022eaa58 to 023eaaef has its CatchHandler @ 022eaa58
                       catch() { ... } // from try @ 022eaa58 with catch @ 022eaa58
                       catch() { ... } // from try @ 022eaaf8 with catch @ 022eaa58 */
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f000000,uVar6,0);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
        uVar4 = 3;
LAB_022eaa74:
        *(undefined4 *)(param_1 + 0x10) = uVar4;
        return 1;
      }
      if (iVar3 != 3) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* try { // try from 022ea5a8 to 023ea63f has its CatchHandler @ 022ea5a8
                       catch() { ... } // from try @ 022ea5a8 with catch @ 022ea5a8
                       catch() { ... } // from try @ 022ea648 with catch @ 022ea5a8 */
      if (lVar10 != 0) {
        uVar5 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(lVar10);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x38) = 0x3e19999a;
        puVar1 = PTR_DAT_04cb0fc0;
        if (*(long *)(param_1 + 0x28) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20) = 0x3fa66666;
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          System_Func_float__float____ctor_37a4838(uVar6,0,*(undefined8 *)PTR_DAT_04cb1000,0);
          uVar11 = *(undefined8 *)(param_1 + 0x28);
          uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
          System_Action_float____ctor_35f1448(uVar7,uVar11,*(undefined8 *)PTR_DAT_04cb0fd0,0);
                    /* try { // try from 022ea640 to 023ea647 has its CatchHandler @ 022ea6a4 */
                    /* try { // try from 022ea648 to 023ea6d3 has its CatchHandler @ 022ea5a8 */
          uVar6 = Dino_BusSand_App_UI_YachtRacingUi__Tween_21f746c(_UNK_00e20328,uVar6,uVar7,0);
          *(undefined8 *)(param_1 + 0x18) = uVar6;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
          uVar4 = 4;
          goto LAB_022eab1c;
        }
      }
    }
  }
  else if (iVar3 < 6) {
    if (iVar3 != 4) {
      if (iVar3 != 5) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f000000,uVar6,0);
                    /* catch() { ... } // from try @ 022ea514 with catch @ 022ea578 */
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
      uVar4 = 6;
      goto LAB_022eaa74;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 != 0) {
      uVar5 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(lVar10);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(lVar10 + 0x70),1,0);
      uVar11 = *(undefined8 *)(lVar10 + 0x80);
      uVar6 = System_Int32__ToString_482d750(param_1 + 0x30,0);
      uVar7 = System_Int32__ToString_482d750(param_1 + 0x34,0);
      uVar6 = System_String__Concat_46d2b84(uVar6,*(undefined8 *)PTR_DAT_04cabd10,uVar7,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,uVar6,0);
      uVar4 = *(undefined4 *)(param_1 + 0x38);
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0fc0);
                    /* try { // try from 022ea9c4 to 023ea9cb has its CatchHandler @ 022eaa28 */
                    /* try { // try from 022ea9cc to 023eaa57 has its CatchHandler @ 022ea92c */
      System_Func_float__float____ctor_37a4838(uVar6,0,*(undefined8 *)PTR_DAT_04cb0ff8,0);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
      System_Action_float____ctor_35f1448(uVar7,uVar11,*(undefined8 *)PTR_DAT_04cb0fd8,0);
      uVar6 = Dino_BusSand_App_UI_YachtRacingUi__Tween_21f746c(uVar4,uVar6,uVar7,0);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
                    /* catch() { ... } // from try @ 022ea9c4 with catch @ 022eaa28 */
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
      *(undefined4 *)(param_1 + 0x10) = 5;
      return 1;
    }
  }
  else if (iVar3 == 6) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 != 0) {
      uVar5 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(lVar10);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0fc0);
      System_Func_float__float____ctor_37a4838(uVar6,0,*(undefined8 *)PTR_DAT_04cb0ff0,0);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
      System_Action_float____ctor_35f1448(uVar7,uVar11,*(undefined8 *)PTR_DAT_04cb0fe0,0);
                    /* try { // try from 022eaaf0 to 023eaaf7 has its CatchHandler @ 022eab54 */
                    /* try { // try from 022eaaf8 to 023eab83 has its CatchHandler @ 022eaa58 */
      uVar6 = Dino_BusSand_App_UI_YachtRacingUi__Tween_21f746c(_UNK_00e207cc,uVar6,uVar7,0);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
      uVar4 = 7;
      goto LAB_022eab1c;
    }
  }
  else {
    if (iVar3 != 7) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 != 0) {
      uVar5 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(lVar10);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      if ((*(long *)(lVar10 + 0x78) != 0) &&
         (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar10 + 0x78),0),
         lVar8 != 0)) {
                    /* catch() { ... } // from try @ 022ea640 with catch @ 022ea6a4 */
        UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
        lVar8 = *(long *)(lVar10 + 0x78);
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        if (lVar8 != 0) {
                    /* try { // try from 022ea6d4 to 023ea76b has its CatchHandler @ 022ea6d4
                       catch() { ... } // from try @ 022ea6d4 with catch @ 022ea6d4
                       catch() { ... } // from try @ 022ea774 with catch @ 022ea6d4 */
          lVar9 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
          UnityEngine_Transform__set_localScale_43d1be0
                    (*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                     *(undefined4 *)(lVar9 + 0x14),lVar8,0);
          *(undefined1 *)(lVar10 + 0x8c) = 0;
          if (*(char *)(lVar10 + 0x8d) == '\0') {
            return 0;
          }
          *(undefined1 *)(lVar10 + 0x8d) = 0;
          Dino_BusSand_App_UI_YachtRacingHallButton__RefreshState_21e91ec(lVar10);
          return 0;
        }
      }
    }
  }
LAB_022eab4c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

