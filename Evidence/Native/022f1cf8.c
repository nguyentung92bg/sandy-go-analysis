/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<WaitAnimComplete>d__16$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingRewardPanel__WaitAnimComplete_d__16__MoveNext (Dino_BusSand_App_UI_YachtRacingRewardPanel__WaitAnimComplete_d__16_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<WaitAnimComplete>d__16$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingRewardPanel__WaitAnimComplete_d__16__MoveNext
   (Dino_BusSand_App_UI_YachtRacingRewardPanel__WaitAnimComplete_d__16_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_App_UI_YachtRacingRewardPanel__WaitAnimComplete_d__16__MoveNext_21f1cf8
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f9bc23 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9bc23 = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
                    /* try { // try from 022f1d28 to 023f1d2b has its CatchHandler @ 022f1d40 */
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f800000,uVar5,0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar5);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f1d28 with catch @ 022f1d40
                        */
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x38), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar4 = (long *)(lVar3 + 0x10);
    lVar3 = *plVar4;
    *plVar4 = 0;
    thunk_FUN_02134474(plVar4,0);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
                    /* try { // try from 022f1d70 to 023f1f1b has its CatchHandler @ 022f1d70
                       catch() { ... } // from try @ 022f1d70 with catch @ 022f1d70
                       catch() { ... } // from try @ 022f1f20 with catch @ 022f1d70
                       catch() { ... } // from try @ 022f1f4c with catch @ 022f1d70 */
    }
  }
  return iVar1 == 0;
}

