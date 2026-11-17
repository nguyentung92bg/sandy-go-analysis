/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<>c__DisplayClass40_0$$<ShowGuide>b__1
void Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass40_0___ShowGuide_b__1 (Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass40_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<>c__DisplayClass40_0$$<ShowGuide>b__1
   void Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass40_0___ShowGuide_b__1
   (Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass40_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass40_0___ShowGuide_b__1_21c3018
               (undefined4 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9baf1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9baf1 = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 022c3064 to 023c3103 has its CatchHandler @ 022c2f68 */
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + 0x18);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
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
    (*pcRam0000000004fac330)(param_1,lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

