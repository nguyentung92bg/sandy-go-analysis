/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<FadeItem>d__21$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingRewardPanel__FadeItem_d__21__MoveNext (Dino_BusSand_App_UI_YachtRacingRewardPanel__FadeItem_d__21_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<FadeItem>d__21$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingRewardPanel__FadeItem_d__21__MoveNext
   (Dino_BusSand_App_UI_YachtRacingRewardPanel__FadeItem_d__21_o* __this, const MethodInfo* method);
    */

ulong Dino_BusSand_App_UI_YachtRacingRewardPanel__FadeItem_d__21__MoveNext_21f0f38(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  if ((bRam0000000004f9bc1f & 1) == 0) {
                    /* try { // try from 022f0f58 to 023f0f63 has its CatchHandler @ 022f0fa4 */
    FUN_02132f7c(PTR_DAT_04cac208);
                    /* try { // try from 022f0f64 to 023f0fb7 has its CatchHandler @ 022f0f20 */
    FUN_02132f7c(PTR_DAT_04cadf40);
    FUN_02132f7c(PTR_DAT_04cb0fc0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1448);
    FUN_02132f7c(PTR_DAT_04cb1450);
                    /* catch() { ... } // from try @ 022f0f58 with catch @ 022f0fa4 */
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cb1458);
                    /* try { // try from 022f0fb8 to 023f1083 has its CatchHandler @ 022f0fb8
                       catch() { ... } // from try @ 022f0fb8 with catch @ 022f0fb8
                       catch() { ... } // from try @ 022f1174 with catch @ 022f0fb8 */
    bRam0000000004f9bc1f = 1;
  }
  puVar2 = PTR_DAT_04cb1450;
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = 0;
  if (iVar1 == 2) {
    uVar11 = 0xffffffff;
                    /* try { // try from 022f1128 to 023f112f has its CatchHandler @ 022f11ac */
LAB_022f11d4:
    *(undefined4 *)(param_1 + 0x10) = uVar11;
    return uVar3;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 022f1108 to 023f110f has its CatchHandler @ 022f11a8 */
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      lVar4 = *(long *)(param_1 + 0x28);
      if (lVar4 != 0) {
        uVar3 = 0;
        if (*(long *)(lVar4 + 0x10) != 0) {
          uVar11 = UnityEngine_CanvasGroup__get_alpha_467ac88(*(long *)(lVar4 + 0x10),0);
          puVar2 = PTR_DAT_04cb0fc0;
          *(undefined4 *)(lVar4 + 0x18) = uVar11;
          uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 022f116c to 023f1173 has its CatchHandler @ 022f1190 */
          System_Func_float__float____ctor_37a4838(uVar8,0,*(undefined8 *)PTR_DAT_04cb1458,0);
                    /* try { // try from 022f1174 to 023f11e3 has its CatchHandler @ 022f0fb8 */
          uVar10 = *(undefined8 *)(param_1 + 0x28);
          uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
                    /* catch() { ... } // from try @ 022f116c with catch @ 022f1190 */
          System_Action_float____ctor_35f1448(uVar5,uVar10,*(undefined8 *)PTR_DAT_04cb1448,0);
                    /* catch() { ... } // from try @ 022f1108 with catch @ 022f11a8 */
                    /* catch() { ... } // from try @ 022f1128 with catch @ 022f11ac */
          uVar8 = Dino_BusSand_App_UI_YachtRacingUi__Tween_21f746c(_UNK_00e207cc,uVar8,uVar5,0);
          *(undefined8 *)(param_1 + 0x18) = uVar8;
          thunk_FUN_02134474();
          uVar3 = 1;
                    /* catch() { ... } // from try @ 022f1084 with catch @ 022f11d0 */
          uVar11 = 2;
          goto LAB_022f11d4;
        }
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Object___ctor_4870e5c(lVar4,0);
    plVar7 = (long *)(param_1 + 0x28);
    *plVar7 = lVar4;
    thunk_FUN_02134474(plVar7,lVar4);
    puVar2 = PTR_DAT_04ca9ae8;
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    uVar6 = 0;
    if ((uVar3 & 1) != 0) {
      uVar3 = 0;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_022f11e8;
      uVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                        (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cadf40);
      uVar6 = uVar3;
    }
    if (lVar4 != 0) {
      puVar9 = (ulong *)(lVar4 + 0x10);
      *puVar9 = uVar6;
      uVar3 = thunk_FUN_02134474(puVar9);
      if (*plVar7 != 0) {
        uVar8 = *(undefined8 *)(*plVar7 + 0x10);
                    /* try { // try from 022f1084 to 023f108b has its CatchHandler @ 022f11d0 */
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
        uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f800000,uVar8,0);
        *(undefined8 *)(param_1 + 0x18) = uVar8;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar8);
        uVar11 = 1;
        uVar3 = 1;
        goto LAB_022f11d4;
      }
    }
  }
LAB_022f11e8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar3);
}

