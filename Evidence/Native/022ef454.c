/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$OnOpen
void Dino_BusSand_App_UI_YachtRacingRewardPanel__OnOpen (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$OnOpen
   void Dino_BusSand_App_UI_YachtRacingRewardPanel__OnOpen
   (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_YachtRacingRewardPanel__OnOpen_21ef454(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04cb1308;
                    /* catch() { ... } // from try @ 022ef410 with catch @ 022ef478 */
  if ((bRam0000000004f9bc10 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022ef4a4 to 023ef553 has its CatchHandler @ 022ef4a4
                       catch() { ... } // from try @ 022ef4a4 with catch @ 022ef4a4
                       catch() { ... } // from try @ 022ef55c with catch @ 022ef4a4 */
    FUN_02132f7c(PTR_DAT_04cb1308);
    FUN_02132f7c(PTR_DAT_04cb1310);
    FUN_02132f7c(PTR_DAT_04cb1318);
    FUN_02132f7c(PTR_DAT_04cb1320);
    FUN_02132f7c(PTR_DAT_04cb10f8);
    FUN_02132f7c(PTR_DAT_04cae4e0);
    FUN_02132f7c(PTR_DAT_04cb1328);
    FUN_02132f7c(PTR_DAT_04cb1330);
    FUN_02132f7c(PTR_DAT_04cb1338);
    bRam0000000004f9bc10 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_022ef544:
    param_2 = (long *)thunk_FUN_0216e89c();
    System_Object___ctor_4870e5c(param_2,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_022ef544;
  }
  puVar3 = PTR_DAT_04cae4e0;
  puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022ef554 to 023ef55b has its CatchHandler @ 022ef5bc */
  if (param_1 != 0) {
                    /* try { // try from 022ef55c to 023ef5e7 has its CatchHandler @ 022ef4a4 */
    *(long *)(param_1 + 0x38) = (long)param_2;
    thunk_FUN_02134474((long *)(param_1 + 0x38),param_2);
    uVar5 = Dino_BusSand_App_UI_YachtRacingUi__get_Core_21f6838(0);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    thunk_FUN_02134474();
    lVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
                    /* catch() { ... } // from try @ 022ef554 with catch @ 022ef5bc */
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (lVar6 == 0) goto LAB_022ef7dc;
      uVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
                    /* try { // try from 022ef5e8 to 023ef697 has its CatchHandler @ 022ef5e8
                       catch() { ... } // from try @ 022ef5e8 with catch @ 022ef5e8
                       catch() { ... } // from try @ 022ef6a0 with catch @ 022ef5e8 */
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)PTR_DAT_04cb1310,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar5,uVar8,0,0,0);
    }
    puVar2 = PTR_DAT_04ca9d18;
    uVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb1338,0);
    lVar9 = *(long *)puVar2;
    lVar6 = *(long *)(lVar9 + 0x38);
    if (lVar6 == 0) {
      FUN_0216b4cc(lVar9);
      lVar6 = *(long *)(lVar9 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0216b470();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar4 = PTR_DAT_04cb1330;
    puVar3 = PTR_DAT_04cb10f8;
    lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                    /* try { // try from 022ef698 to 023ef69f has its CatchHandler @ 022ef700 */
                    /* try { // try from 022ef6a0 to 023ef72b has its CatchHandler @ 022ef5e8 */
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0216b470();
    }
    uVar8 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                      (*(undefined8 *)puVar4,**(undefined8 **)(lVar6 + 0xb8),0);
    Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar5,uVar8,0);
    uVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar3,0);
    lVar9 = *(long *)puVar2;
    lVar6 = *(long *)(lVar9 + 0x38);
    if (lVar6 == 0) {
      FUN_0216b4cc(lVar9);
      lVar6 = *(long *)(lVar9 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
                    /* catch() { ... } // from try @ 022ef698 with catch @ 022ef700 */
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0216b470();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar4 = PTR_DAT_04cb1328;
    puVar3 = PTR_DAT_04cb1320;
    puVar2 = PTR_DAT_04cb1318;
                    /* try { // try from 022ef72c to 023ef7db has its CatchHandler @ 022ef72c
                       catch() { ... } // from try @ 022ef72c with catch @ 022ef72c
                       catch() { ... } // from try @ 022ef7e4 with catch @ 022ef72c */
    lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0216b470();
    }
    uVar8 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                      (*(undefined8 *)puVar4,**(undefined8 **)(lVar6 + 0xb8),0);
    Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar5,uVar8,0);
    uVar5 = Dino_BusSand_App_UI_YachtRacingRewardPanel__InitUI_21ef7e8(param_1);
    uVar5 = Dino_BusSand_App_UI_YachtRacingRewardPanel__PlayLater_21ef9dc
                      (_UNK_00e20334,uVar5,*(undefined8 *)puVar3);
    uVar5 = Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar5,0);
    uVar5 = Dino_BusSand_App_UI_YachtRacingRewardPanel__PlayLater_21ef9dc
                      (_UNK_00e200f8,uVar5,*(undefined8 *)puVar2);
    Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar5,0);
    lVar6 = Dino_BusSand_App_UI_YachtRacingRewardPanel__WaitAnimComplete_21efa58(param_1);
    uVar7 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
    if ((uVar7 & 1) != 0) {
      if (lVar6 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar8 = thunk_FUN_0216e89c();
        uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar8,uVar5,0);
      }
      else {
        uVar7 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar7 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_1 != 0) {
            lVar9 = *(long *)(param_1 + 0x10);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar9,lVar6);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar8 = thunk_FUN_0216e89c();
        uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar8,uVar5,0);
      }
      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar8,uVar5);
    }
    return;
  }
LAB_022ef7dc:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022ef7dc to 023ef7e3 has its CatchHandler @ 022ef844 */
  FUN_02133224();
}

