/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<PrePropStep>d__15$$MoveNext
bool Dino_BusSand_App_UI_LevelEnterFlow__PrePropStep_d__15__MoveNext (Dino_BusSand_App_UI_LevelEnterFlow__PrePropStep_d__15_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<PrePropStep>d__15$$MoveNext
   bool Dino_BusSand_App_UI_LevelEnterFlow__PrePropStep_d__15__MoveNext
   (Dino_BusSand_App_UI_LevelEnterFlow__PrePropStep_d__15_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_LevelEnterFlow__PrePropStep_d__15__MoveNext_21846e4(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  
                    /* try { // try from 022846e4 to 023846eb has its CatchHandler @ 02284794 */
  if ((bRam0000000004f9b94f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* try { // try from 02284714 to 02384757 has its CatchHandler @ 02284790 */
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cacb20);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cad868);
                    /* try { // try from 02284758 to 023847a7 has its CatchHandler @ 022846bc */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad870);
    FUN_02132f7c(PTR_DAT_04cad878);
    FUN_02132f7c(PTR_DAT_04cad880);
    bRam0000000004f9b94f = 1;
  }
  puVar3 = PTR_DAT_04cad878;
                    /* catch() { ... } // from try @ 02284714 with catch @ 02284790 */
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
                    /* catch() { ... } // from try @ 022846e4 with catch @ 02284794 */
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* try { // try from 022847a8 to 023847d3 has its CatchHandler @ 022847a8
                       catch() { ... } // from try @ 022847a8 with catch @ 022847a8
                       catch() { ... } // from try @ 022847d8 with catch @ 022847a8
                       catch() { ... } // from try @ 0228484c with catch @ 022847a8 */
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    Dino_BusSand_App_UI_LevelEnterFlow___c__DisplayClass15_0___ctor_233e174(lVar7,0);
    plVar10 = (long *)(param_1 + 0x30);
    *plVar10 = lVar7;
    thunk_FUN_02134474(plVar10,lVar7);
    puVar3 = PTR_DAT_04cacb20;
                    /* try { // try from 022847d4 to 023847d7 has its CatchHandler @ 022848dc */
                    /* try { // try from 022847d8 to 0238483f has its CatchHandler @ 022847a8 */
    lVar7 = *(long *)PTR_DAT_04cacb20;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
    }
    puVar4 = PTR_DAT_04cad860;
    if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_02284bb8;
    uVar5 = System_Collections_Generic_List_int___Contains_3a2c3ec
                      (**(long **)(lVar7 + 0xb8),0x3eb,*(undefined8 *)PTR_DAT_04cad860);
    if (**(long **)(*(long *)puVar3 + 0xb8) == 0) goto LAB_02284bb8;
    uVar6 = System_Collections_Generic_List_int___Contains_3a2c3ec
                      (**(long **)(*(long *)puVar3 + 0xb8),0x2711,*(undefined8 *)puVar4);
    if (((uVar5 | uVar6) & 1) == 0) {
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
                    /* try { // try from 02284b08 to 02384b4b has its CatchHandler @ 02284b08
                       catch() { ... } // from try @ 02284b08 with catch @ 02284b08
                       catch() { ... } // from try @ 02284ba4 with catch @ 02284b08 */
      lVar7 = **(long **)(lVar7 + 0xb8);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        return 0;
      }
      goto LAB_02284bb8;
    }
                    /* try { // try from 02284840 to 0238484b has its CatchHandler @ 022848d0 */
    uVar12 = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 0228484c to 023848ef has its CatchHandler @ 022847a8 */
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_02284bb8;
      Dino_BusSand_App_UI_UIPanel__Show_21f4018
                (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cad880,1,0);
    }
    if (*plVar10 == 0) goto LAB_02284bb8;
    *(undefined4 *)(*plVar10 + 0x10) = 0;
    if ((uVar5 & 1) != 0) {
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_02284bb8;
      System_Collections_Generic_List_int___Remove_3a2d540
                (**(long **)(lVar7 + 0xb8),0x3eb,*(undefined8 *)PTR_DAT_04cad868);
                    /* catch() { ... } // from try @ 02284840 with catch @ 022848d0 */
      uVar8 = Dino_BusSand_App_UI_LevelEnterFlow__UseProp_233db60(0x3eb,0);
                    /* catch() { ... } // from try @ 022847d4 with catch @ 022848dc */
      if ((uVar8 & 1) != 0) {
        lVar7 = *plVar10;
        if (lVar7 == 0) goto LAB_02284bb8;
        lVar11 = *(long *)(param_1 + 0x28);
                    /* try { // try from 022848f0 to 02384917 has its CatchHandler @ 022848f0
                       catch() { ... } // from try @ 022848f0 with catch @ 022848f0
                       catch() { ... } // from try @ 02284944 with catch @ 022848f0
                       catch() { ... } // from try @ 022849fc with catch @ 022848f0
                       catch() { ... } // from try @ 02284a2c with catch @ 022848f0
                       catch() { ... } // from try @ 02284a58 with catch @ 022848f0 */
        *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
        if (lVar11 == 0) goto LAB_02284bb8;
        uVar12 = Dino_BusSand_App_Gameplay_GameplayController__HeadStart_229f780(lVar11,3,0);
                    /* try { // try from 02284918 to 02384933 has its CatchHandler @ 02284a04 */
        lVar7 = *plVar10;
        uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 02284940 to 02384943 has its CatchHandler @ 022849b0 */
        System_Action___ctor_47b5ed0(uVar9,lVar7,*(undefined8 *)PTR_DAT_04cad870,0);
                    /* try { // try from 02284944 to 023849cb has its CatchHandler @ 022848f0 */
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = Dino_BusSand_App_UI_LevelEnterFlow__RunThen_233dec0(uVar12,uVar9,0);
        UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar11,uVar12,0);
      }
    }
    if ((uVar6 & 1) != 0) {
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_02284bb8;
      System_Collections_Generic_List_int___Remove_3a2d540
                (**(long **)(lVar7 + 0xb8),0x2711,*(undefined8 *)PTR_DAT_04cad868);
                    /* catch(type#2 @ 049bb748, type#1 @ 04ca20c8) { ... } // from try @ 02284940
                       with catch @ 022849b0 */
      uVar8 = Dino_BusSand_App_UI_LevelEnterFlow__UseProp_233db60(0x2711,0);
      if ((uVar8 & 1) != 0) {
        lVar7 = *plVar10;
        if (lVar7 == 0) goto LAB_02284bb8;
        lVar11 = *(long *)(param_1 + 0x28);
                    /* try { // try from 022849cc to 023849db has its CatchHandler @ 022849f0 */
        *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
        if (lVar11 == 0) goto LAB_02284bb8;
                    /* try { // try from 022849dc to 023849df has its CatchHandler @ 022849e4 */
        Dino_BusSand_App_Gameplay_GameplayController__AddRoadSlot_229f6c0(lVar11,0);
        puVar4 = PTR_DAT_04cad568;
                    /* catch(type#1 @ 04ca20c8) { ... } // from try @ 022849dc with catch @ 022849e4
                        */
                    /* catch(type#1 @ 04ca20c8) { ... } // from try @ 022849cc with catch @ 022849f0
                        */
        if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 022849f8 to 023849fb has its CatchHandler @ 02284a60 */
                    /* try { // try from 022849fc to 02384a23 has its CatchHandler @ 022848f0 */
        if (cRam0000000004f9b94e == '\0') {
                    /* catch(type#1 @ 04ca20c8) { ... } // from try @ 02284918 with catch @ 02284a04
                        */
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* try { // try from 02284a24 to 02384a2b has its CatchHandler @ 02284a50 */
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar4;
        }
                    /* try { // try from 02284a2c to 02384a53 has its CatchHandler @ 022848f0 */
        if (**(long **)(lVar7 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Sparkle_2382d28(**(long **)(lVar7 + 0xb8),0);
        }
        lVar7 = *plVar10;
        if (lVar7 == 0) goto LAB_02284bb8;
                    /* catch() { ... } // from try @ 02284a24 with catch @ 02284a50 */
        *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      }
    }
                    /* try { // try from 02284a54 to 02384a57 has its CatchHandler @ 02284a60 */
    lVar7 = *(long *)puVar3;
                    /* try { // try from 02284a58 to 02384a63 has its CatchHandler @ 022848f0 */
    if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* catch(type#3 @ 00000000) { ... } // from try @ 022849f8 with catch @ 02284a60
                       catch(type#3 @ 00000000) { ... } // from try @ 02284a54 with catch @ 02284a60
                        */
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    if (lVar7 == 0) goto LAB_02284bb8;
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  }
  puVar3 = PTR_DAT_04cacb20;
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_02284bb8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = *(long *)PTR_DAT_04cacb20;
  if (0 < *(int *)(*(long *)(param_1 + 0x30) + 0x10)) {
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = Dino_BusSand_App_UI_LevelEnterFlow__Alive_233d020(uVar12,uVar1,0);
    if ((uVar8 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    lVar7 = *(long *)puVar3;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  if (iVar2 == *(int *)(*(long *)(lVar7 + 0xb8) + 0xc)) {
                    /* try { // try from 02284b4c to 02384b53 has its CatchHandler @ 02284ba8 */
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
    if ((uVar8 & 1) != 0) {
                    /* try { // try from 02284b80 to 02384ba3 has its CatchHandler @ 02284ba4 */
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_02284bb8;
      Dino_BusSand_App_UI_UIPanel__Show_21f4018
                (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cad880,0,0);
    }
  }
                    /* catch() { ... } // from try @ 02284b80 with catch @ 02284ba4
                       try { // try from 02284ba4 to 02384bbb has its CatchHandler @ 02284b08 */
                    /* catch() { ... } // from try @ 02284b4c with catch @ 02284ba8 */
  return 0;
}

