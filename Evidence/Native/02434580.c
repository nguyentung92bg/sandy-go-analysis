/* IL2CPP: Dino.BusSand.App.UI.WinStreakIntroPanel$$Update
void Dino_BusSand_App_UI_WinStreakIntroPanel__Update (Dino_BusSand_App_UI_WinStreakIntroPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinStreakIntroPanel$$Update
   void Dino_BusSand_App_UI_WinStreakIntroPanel__Update (Dino_BusSand_App_UI_WinStreakIntroPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakIntroPanel__Update_2334580(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02434590 to 025345b7 has its CatchHandler @ 02434a0c */
  if ((bRam0000000004f9c637 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c637 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  if (((uVar2 & 1) == 0) &&
     (fVar5 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0),
     *(float *)(param_1 + 0x40) <= fVar5)) {
    fVar5 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    plVar4 = *(long **)(param_1 + 0x38);
    *(float *)(param_1 + 0x40) = fVar5 + 1.0;
    uVar3 = Dino_BusSand_App_Meta_WinStreak__get_SecondsLeft_2293368(0);
                    /* try { // try from 0243461c to 02534623 has its CatchHandler @ 024349c4 */
    uVar3 = Dino_BusSand_App_Meta_WinStreak__TimeText_2293594(uVar3,0);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02434644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x518))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x520));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 024345f4 to 0253461b has its CatchHandler @ 024349d4 */
  return;
}

