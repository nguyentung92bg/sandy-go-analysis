/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$OnOpen
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnOpen (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$OnOpen
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnOpen
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnOpen_2191884(long param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  
  puVar3 = PTR_DAT_04cae098;
                    /* try { // try from 022918a8 to 023918b7 has its CatchHandler @ 022918f4 */
  if ((bRam0000000004f9b9ab & 1) == 0) {
                    /* try { // try from 022918b8 to 0239190f has its CatchHandler @ 02291824 */
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cae0a0);
    FUN_02132f7c(PTR_DAT_04cae0a8);
    FUN_02132f7c(PTR_DAT_04cae0b0);
                    /* catch() { ... } // from try @ 022918a8 with catch @ 022918f4 */
    FUN_02132f7c(PTR_DAT_04cae0b8);
    FUN_02132f7c(PTR_DAT_04cae0c0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae098);
    FUN_02132f7c(PTR_DAT_04cae0c8);
    FUN_02132f7c(PTR_DAT_04cae0d0);
    FUN_02132f7c(PTR_DAT_04cae0d8);
    FUN_02132f7c(PTR_DAT_04cae0e0);
    FUN_02132f7c(PTR_DAT_04cae0e8);
    FUN_02132f7c(PTR_DAT_04cae0f0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 022919bc with catch @ 0229196c
                       catch(type#1 @ 049bb748) { ... } // from try @ 022919f0 with catch @ 0229196c
                       catch(type#1 @ 049bb748) { ... } // from try @ 02291a04 with catch @ 0229196c
                        */
    FUN_02132f7c(PTR_DAT_04cae0f8);
    FUN_02132f7c(PTR_DAT_04cae100);
    FUN_02132f7c(PTR_DAT_04cae108);
    FUN_02132f7c(PTR_DAT_04cae110);
    FUN_02132f7c(PTR_DAT_04cad948);
                    /* try { // try from 022919a8 to 023919bb has its CatchHandler @ 022919cc */
    FUN_02132f7c(PTR_DAT_04cae118);
    bRam0000000004f9b9ab = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_022919e4:
    param_2 = (long *)thunk_FUN_0216e89c();
                    /* try { // try from 022919e8 to 023919ef has its CatchHandler @ 022919fc */
                    /* try { // try from 022919f0 to 023919ff has its CatchHandler @ 0229196c */
    System_Object___ctor_4870e5c(param_2,0);
  }
  else {
                    /* try { // try from 022919bc to 023919e7 has its CatchHandler @ 0229196c */
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 022919a8 with catch @ 022919cc
                        */
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_022919e4;
  }
  puVar4 = PTR_DAT_04cae118;
  puVar3 = PTR_DAT_04ca9d18;
  if (param_1 == 0) {
LAB_02291ee8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 022919e8 with catch @ 022919fc
                        */
                    /* try { // try from 02291a00 to 02391a03 has its CatchHandler @ 02291a0c */
                    /* try { // try from 02291a04 to 02391a0f has its CatchHandler @ 0229196c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02291a00 with catch @ 02291a0c
                        */
  *(long *)(param_1 + 0x38) = (long)param_2;
  thunk_FUN_02134474((long *)(param_1 + 0x38),param_2);
  uVar7 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0);
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  thunk_FUN_02134474();
  uVar7 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  uVar7 = Dino_BusSand_App_UI_BattleRoyaleUi__Resolve_219c760(uVar7,*(undefined8 *)puVar4,0);
  lVar15 = *(long *)puVar3;
  lVar10 = *(long *)(lVar15 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar15);
    lVar10 = *(long *)(lVar15 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar6 = PTR_DAT_04cae110;
  puVar5 = PTR_DAT_04cae0f8;
  puVar4 = PTR_DAT_04cae0e8;
  puVar3 = PTR_DAT_04cae0c8;
  lVar10 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  uVar8 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                    (*(undefined8 *)puVar4,**(undefined8 **)(lVar10 + 0xb8),0);
  Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar7,uVar8,0);
  lVar10 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0
                     (param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar3);
  plVar14 = (long *)(param_1 + 0x48);
  *plVar14 = lVar10;
  thunk_FUN_02134474(plVar14,lVar10);
  lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
  plVar16 = (long *)(param_1 + 0x60);
  *plVar16 = lVar10;
  thunk_FUN_02134474(plVar16,lVar10);
  Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(*plVar16,0,0);
  puVar4 = PTR_DAT_04cae100;
  puVar3 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_1 + 0x40) != 0) {
    Dino_BusSand_App_UI_BattleRoyaleScenePanel__Build_2191ef4(param_1);
    Dino_BusSand_App_UI_BattleRoyaleScenePanel__Refresh_2192c24(param_1);
    lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    if ((uVar9 & 1) != 0) {
      if (lVar10 == 0) goto LAB_02291ee8;
      uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
                    /* try { // try from 02291bb4 to 02391f7b has its CatchHandler @ 02291bb4
                       catch() { ... } // from try @ 02291bb4 with catch @ 02291bb4
                       catch() { ... } // from try @ 02291f90 with catch @ 02291bb4 */
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)PTR_DAT_04cae0b0,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar7,uVar8,0,*(undefined8 *)PTR_DAT_04cad948,0);
    }
    lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cae108,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    if ((uVar9 & 1) != 0) {
      if (lVar10 == 0) goto LAB_02291ee8;
      uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)PTR_DAT_04cae0b8,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar7,uVar8,0,*(undefined8 *)PTR_DAT_04cad948,0);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    lVar10 = 0;
    if ((uVar9 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_02291ee8;
      lVar10 = UnityEngine_Transform__Find_43d4bec
                         (*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_04cae0f0,0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    if ((uVar9 & 1) != 0) {
      if (lVar10 == 0) goto LAB_02291ee8;
      uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)PTR_DAT_04cae0c0,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar7,uVar8,0,*(undefined8 *)PTR_DAT_04cad948,0);
    }
    lVar10 = *plVar16;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    lVar10 = 0;
    if ((uVar9 & 1) != 0) {
      if (*plVar16 == 0) goto LAB_02291ee8;
      lVar10 = UnityEngine_Transform__Find_43d4bec(*plVar16,*(undefined8 *)PTR_DAT_04cae0e0,0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    if ((uVar9 & 1) != 0) {
      if (lVar10 == 0) goto LAB_02291ee8;
      uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)PTR_DAT_04cae0a8,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar7,uVar8,0,0,0);
    }
    lVar10 = *plVar14;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    if ((uVar9 & 1) != 0) {
      if (*plVar14 != 0) {
        lVar10 = *(long *)(*plVar14 + 0x68);
        uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae0d0);
        UnityEngine_Events_UnityAction_Vector2____ctor_303b9ac
                  (uVar7,param_1,*(undefined8 *)PTR_DAT_04cae0a0,0);
        if (lVar10 != 0) {
          uVar7 = UnityEngine_Events_UnityEvent_Vector2___GetDelegate_303e0b8
                            (uVar7,*(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)PTR_DAT_04cae0d8 + 0x20) + 0xc0) +
                                    0x10));
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 != 0) {
            if ((bRam0000000004fa8d9c & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7d70);
              bRam0000000004fa8d9c = 1;
            }
            lVar15 = *(long *)(lVar10 + 0x18);
            if (lVar15 != 0) {
              lVar11 = *(long *)(lVar15 + 0x10);
              lVar13 = *(long *)PTR_DAT_04cf7d70;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar2 = *(uint *)(lVar15 + 0x18);
                if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                  puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                  *puVar12 = uVar7;
                  thunk_FUN_02134474(puVar12,uVar7);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar15,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
                *(undefined1 *)(lVar10 + 0x28) = 1;
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224(0,uVar7,0);
        }
      }
      goto LAB_02291ee8;
    }
  }
  return;
}

