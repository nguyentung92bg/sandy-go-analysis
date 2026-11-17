/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$PlayClaimAnim
void Dino_BusSand_App_UI_YachtRacingPanel__PlayClaimAnim (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$PlayClaimAnim
   void Dino_BusSand_App_UI_YachtRacingPanel__PlayClaimAnim (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__PlayClaimAnim_21ed964(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 022ed500 with catch @ 022ed970
                       catch() { ... } // from try @ 022ed518 with catch @ 022ed970
                       catch() { ... } // from try @ 022ed53c with catch @ 022ed970
                       catch() { ... } // from try @ 022ed564 with catch @ 022ed970
                       catch() { ... } // from try @ 022ed588 with catch @ 022ed970
                       catch() { ... } // from try @ 022ed5f0 with catch @ 022ed970
                       catch() { ... } // from try @ 022ed6b8 with catch @ 022ed970
                       catch() { ... } // from try @ 022ed6dc with catch @ 022ed970
                       catch() { ... } // from try @ 022ed700 with catch @ 022ed970
                       catch() { ... } // from try @ 022ed724 with catch @ 022ed970
                       catch() { ... } // from try @ 022ed74c with catch @ 022ed970
                       catch() { ... } // from try @ 022ed770 with catch @ 022ed970
                       catch() { ... } // from try @ 022ed7cc with catch @ 022ed970
                       catch() { ... } // from try @ 022ed824 with catch @ 022ed970
                       catch() { ... } // from try @ 022ed858 with catch @ 022ed970
                       catch() { ... } // from try @ 022ed88c with catch @ 022ed970 */
  if ((*(char *)(param_1 + 0x91) != '\0') || (*(char *)(param_1 + 0x2c) != '\0')) {
    return;
  }
                    /* try { // try from 022ed988 to 023ed98b has its CatchHandler @ 022ed9dc */
  if (*(long *)(param_1 + 0x58) != 0) {
                    /* try { // try from 022ed98c to 023ed9df has its CatchHandler @ 022ed3f0 */
    Dino_BusSand_App_UI_YachtRacingRewardTips__Hide_21ed9b4();
  }
  *(undefined1 *)(param_1 + 0x91) = 1;
  lVar1 = Dino_BusSand_App_UI_YachtRacingPanel__ClaimAnim_21eda68(param_1);
  uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    if (lVar1 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar3 = thunk_FUN_0216e89c();
      uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar3,uVar4,0);
    }
    else {
      uVar2 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar2 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (param_1 != 0) {
          lVar5 = *(long *)(param_1 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
          }
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8560)(lVar5,lVar1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar3 = thunk_FUN_0216e89c();
      uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar3,uVar4,0);
    }
    uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar3,uVar4);
  }
  return;
}

