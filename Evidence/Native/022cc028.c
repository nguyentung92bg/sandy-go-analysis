/* IL2CPP: Dino.BusSand.App.UI.BonusBankOpenPanel$$OnTap
void Dino_BusSand_App_UI_BonusBankOpenPanel__OnTap (Dino_BusSand_App_UI_BonusBankOpenPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BonusBankOpenPanel$$OnTap
   void Dino_BusSand_App_UI_BonusBankOpenPanel__OnTap (Dino_BusSand_App_UI_BonusBankOpenPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BonusBankOpenPanel__OnTap_21cc028(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
                    /* try { // try from 022cc028 to 023cc037 has its CatchHandler @ 022cc110 */
  if (*(int *)(param_1 + 0x48) == 2) {
    *(undefined4 *)(param_1 + 0x48) = 3;
                    /* try { // try from 022cc060 to 023cc06f has its CatchHandler @ 022cc124 */
    lVar1 = Dino_BusSand_App_UI_BonusBankOpenPanel__Finish_21cc0ec(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x48) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x48) = 1;
    lVar1 = Dino_BusSand_App_UI_BonusBankOpenPanel__Claim_21cc080(param_1);
  }
  uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
                    /* try { // try from 022cc070 to 023cc08f has its CatchHandler @ 022cc10c */
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

