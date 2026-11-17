/* IL2CPP: Dino.BusSand.App.SimulatedAds$$ShowRewarded
void Dino_BusSand_App_SimulatedAds__ShowRewarded (Dino_BusSand_App_SimulatedAds_o* __this, System_String_o* slot, System_Action_bool__string__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SimulatedAds$$ShowRewarded
   void Dino_BusSand_App_SimulatedAds__ShowRewarded (Dino_BusSand_App_SimulatedAds_o* __this,
   System_String_o* slot, System_Action_bool__string__o* done, const MethodInfo* method); */

void Dino_BusSand_App_SimulatedAds__ShowRewarded_21754a8
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_04cacf48;
  if ((bRam0000000004f9b8d1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cacf40);
    FUN_02132f7c(PTR_DAT_04cacf50);
    FUN_02132f7c(PTR_DAT_04cacf48);
    FUN_02132f7c(PTR_DAT_04cabb28);
    FUN_02132f7c(PTR_DAT_04cacf58);
    FUN_02132f7c(PTR_DAT_04cacf60);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    bRam0000000004f9b8d1 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  if (lVar2 == 0) {
LAB_022756c8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar9 = (long *)(lVar2 + 0x10);
  *plVar9 = param_3;
  thunk_FUN_02134474(plVar9,param_3);
  uVar3 = Dino_BusSand_App_SimulatedAds__RewardedReady_2175438();
  puVar1 = PTR_DAT_04caba50;
  if ((uVar3 & 1) == 0) {
    lVar2 = *plVar9;
    if (lVar2 == 0) {
      return;
    }
    uVar6 = 0;
                    /* catch() { ... } // from try @ 02275600 with catch @ 022755bc */
    puVar7 = (undefined8 *)PTR_DAT_04cacf58;
  }
  else {
    if (**(char **)(*(long *)PTR_DAT_04cacf40 + 0xb8) == '\0') {
                    /* try { // try from 022755f4 to 023755ff has its CatchHandler @ 022756a4 */
                    /* try { // try from 02275600 to 023756c3 has its CatchHandler @ 022755bc */
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
      uVar6 = System_String__Concat_46d2b84
                        (*(undefined8 *)PTR_DAT_04cacf60,param_2,*(undefined8 *)PTR_DAT_04cab2b8,0);
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cacf50,0);
                    /* catch() { ... } // from try @ 022755f4 with catch @ 022756a4 */
      lVar2 = Dino_BusSand_App_SimulatedAds__FakeAd_2175748(uVar6,uVar5);
      if (lVar4 != 0) {
        if (lVar2 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar5 = thunk_FUN_0216e89c();
          uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar5,uVar6,0);
        }
        else {
          uVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar3 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar8 = *(long *)(lVar4 + 0x10);
            if (lVar8 != 0) {
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar8,lVar2);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar5 = thunk_FUN_0216e89c();
          uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar5,uVar6,0);
        }
        uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar5,uVar6);
      }
      goto LAB_022756c8;
    }
    Dino_BusSand_App_SimulatedAds__Shown_21756d4();
    lVar2 = *plVar9;
    if (lVar2 == 0) {
      return;
    }
    uVar6 = 1;
    puVar7 = (undefined8 *)PTR_DAT_04cabb28;
  }
                    /* WARNING: Could not recover jumptable at 0x022755dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x18))
            (*(undefined8 *)(lVar2 + 0x40),uVar6,*puVar7,*(undefined8 *)(lVar2 + 0x28));
  return;
}

