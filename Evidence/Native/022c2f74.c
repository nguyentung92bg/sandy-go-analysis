/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<>c__DisplayClass40_0$$<ShowGuide>b__0
void Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass40_0___ShowGuide_b__0 (Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass40_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<>c__DisplayClass40_0$$<ShowGuide>b__0
   void Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass40_0___ShowGuide_b__0
   (Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass40_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass40_0___ShowGuide_b__0_21c2f74
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000004f9baf0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9baf0 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (((*(long *)(param_1 + 0x10) != 0) &&
        (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x68), lVar2 != 0)) &&
       (lVar2 = UnityEngine_Component__get_gameObject_43bcde8(lVar2,0), lVar2 != 0)) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar2 != 0) {
        lVar4 = *(long *)(lVar2 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar2,0);
        }
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar4,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

