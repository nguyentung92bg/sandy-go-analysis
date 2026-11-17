/* IL2CPP: Dino.BusSand.App.SimulatedAds$$ShowInterstitial
void Dino_BusSand_App_SimulatedAds__ShowInterstitial (Dino_BusSand_App_SimulatedAds_o* __this, System_String_o* slot, System_Action_bool__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SimulatedAds$$ShowInterstitial
   void Dino_BusSand_App_SimulatedAds__ShowInterstitial (Dino_BusSand_App_SimulatedAds_o* __this,
   System_String_o* slot, System_Action_bool__o* done, const MethodInfo* method); */

void Dino_BusSand_App_SimulatedAds__ShowInterstitial_21757d0
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_04cacf70;
  if ((bRam0000000004f9b8d3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cacf40);
    FUN_02132f7c(PTR_DAT_04cacf78);
    FUN_02132f7c(PTR_DAT_04cacf70);
                    /* catch() { ... } // from try @ 0227587c with catch @ 02275834 */
    FUN_02132f7c(PTR_DAT_04cacf80);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    bRam0000000004f9b8d3 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar3,0);
  puVar2 = PTR_DAT_04cacf40;
  if (lVar3 != 0) {
                    /* try { // try from 02275870 to 0237587b has its CatchHandler @ 0227589c */
                    /* try { // try from 0227587c to 023758c7 has its CatchHandler @ 02275834 */
    plVar9 = (long *)(lVar3 + 0x10);
    *plVar9 = param_3;
    thunk_FUN_02134474(plVar9,param_3);
    puVar1 = PTR_DAT_04caba50;
    if (**(char **)(*(long *)puVar2 + 0xb8) != '\0') {
      lVar3 = *plVar9;
                    /* catch() { ... } // from try @ 02275870 with catch @ 0227589c */
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022758bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),1,*(undefined8 *)(lVar3 + 0x28));
        return;
      }
      return;
    }
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
    uVar5 = System_String__Concat_46d2b84
                      (*(undefined8 *)PTR_DAT_04cacf80,param_2,*(undefined8 *)PTR_DAT_04cab2b8,0);
                    /* catch() { ... } // from try @ 02275a50 with catch @ 0227594c */
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cacf78,0);
    lVar3 = Dino_BusSand_App_SimulatedAds__FakeAd_2175748(uVar5,uVar6);
    if (lVar4 != 0) {
      if (lVar3 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar6 = thunk_FUN_0216e89c();
        uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar6,uVar5,0);
      }
      else {
        uVar7 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar7 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (lVar4 != 0) {
            lVar8 = *(long *)(lVar4 + 0x10);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar8,lVar3);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar6 = thunk_FUN_0216e89c();
        uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar6,uVar5,0);
      }
      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar6,uVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

