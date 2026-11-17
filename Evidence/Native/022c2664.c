/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$Update
void Dino_BusSand_App_UI_StreakEventPanel__Update (Dino_BusSand_App_UI_StreakEventPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$Update
   void Dino_BusSand_App_UI_StreakEventPanel__Update (Dino_BusSand_App_UI_StreakEventPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakEventPanel__Update_21c2664(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float extraout_s0;
  
  if ((bRam0000000004f9bae5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf220);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bae5 = 1;
  }
  fVar7 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if (*(float *)(param_1 + 0xa4) <= fVar7) {
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      uVar4 = UnityEngine_Time__get_unscaledTime_43cd610(0);
      plVar5 = *(long **)(param_1 + 0x88);
      *(float *)(param_1 + 0xa4) = extraout_s0 + 1.0;
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar3 = *(undefined8 *)PTR_DAT_04ca9c30;
      }
      else {
        lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x38);
        lVar2 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
        if (*(int *)(*(long *)PTR_DAT_04caf220 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caf220);
        }
        uVar3 = Dino_BusSand_App_Countdown__Text_214f5d0((lVar6 - lVar2) / 1000,0);
        uVar4 = uVar3;
      }
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x022c278c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x518))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x520));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar4,uVar3);
    }
  }
  return;
}

