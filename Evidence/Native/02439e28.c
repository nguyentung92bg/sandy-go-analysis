/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$Update
void Dino_BusSand_App_UI_WinStreakPanel__Update (Dino_BusSand_App_UI_WinStreakPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$Update
   void Dino_BusSand_App_UI_WinStreakPanel__Update (Dino_BusSand_App_UI_WinStreakPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakPanel__Update_2339e28(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c652 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c652 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  if (((uVar2 & 1) == 0) &&
     (fVar5 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0),
     *(float *)(param_1 + 0xb8) <= fVar5)) {
    fVar5 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    plVar4 = *(long **)(param_1 + 0x90);
    *(float *)(param_1 + 0xb8) = fVar5 + 1.0;
    uVar3 = Dino_BusSand_App_Meta_WinStreak__get_RunSecondsLeft_2293404(0);
    uVar3 = Dino_BusSand_App_Meta_WinStreak__TimeText_2293594(uVar3,0);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02439eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x518))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x520));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

