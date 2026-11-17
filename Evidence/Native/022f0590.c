/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<>c__DisplayClass21_0$$<FadeItem>b__0
void Dino_BusSand_App_UI_YachtRacingRewardPanel___c__DisplayClass21_0___FadeItem_b__0 (Dino_BusSand_App_UI_YachtRacingRewardPanel___c__DisplayClass21_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<>c__DisplayClass21_0$$<FadeItem>b__0
   void Dino_BusSand_App_UI_YachtRacingRewardPanel___c__DisplayClass21_0___FadeItem_b__0
   (Dino_BusSand_App_UI_YachtRacingRewardPanel___c__DisplayClass21_0_o* __this, float k, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingRewardPanel___c__DisplayClass21_0___FadeItem_b__0_21f0590
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc1d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc1d = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 022f04cc with catch @ 022f063c */
    return;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fVar8 = *(float *)(param_2 + 0x18);
                    /* try { // try from 022f0608 to 023f060f has its CatchHandler @ 022f06cc */
                    /* catch() { ... } // from try @ 022f054c with catch @ 022f0610
                       try { // try from 022f0610 to 023f06e7 has its CatchHandler @ 022f03d4 */
  fVar6 = 1.0;
  if (param_1 <= 1.0) {
    fVar6 = param_1;
  }
  fVar7 = 0.0;
  if (0.0 <= param_1) {
    fVar7 = fVar6;
  }
  if ((bRam0000000004fac320 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04d09bf8,0);
    bRam0000000004fac320 = 1;
  }
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
    }
    if (pcRam0000000004fac330 == (code *)0x0) {
      pcRam0000000004fac330 = (code *)FUN_02132f40(&UNK_00e648e1);
    }
                    /* WARNING: Could not recover jumptable at 0x0477adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fac330)(fVar8 + fVar7 * (0.0 - fVar8),lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

