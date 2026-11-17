/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$Finish
void Dino_BusSand_App_UI_YachtRacingRewardPanel__Finish (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$Finish
   void Dino_BusSand_App_UI_YachtRacingRewardPanel__Finish
   (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingRewardPanel__Finish_21f02b0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000004f9bc1a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc1a = 1;
  }
  if (*(char *)(param_1 + 0x6a) == '\0') {
    *(undefined1 *)(param_1 + 0x6a) = 1;
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
    lVar3 = *plVar1;
    *plVar1 = 0;
    thunk_FUN_02134474(plVar1,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
                    /* try { // try from 022f0340 to 023f0347 has its CatchHandler @ 022f03a8 */
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 0x2c) == '\0')) {
                    /* try { // try from 022f0348 to 023f03d3 has its CatchHandler @ 022f0290 */
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    }
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f0368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  return;
}

