/* IL2CPP: Dino.BusSand.App.UI.KitPop$$TakeTaps
void Dino_BusSand_App_UI_KitPop__TakeTaps (Dino_BusSand_App_UI_KitPop_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPop$$TakeTaps
   void Dino_BusSand_App_UI_KitPop__TakeTaps (Dino_BusSand_App_UI_KitPop_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitPop__TakeTaps_228dc8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x48) = 1;
  if (lVar1 != 0) {
    if ((bRam0000000004fac324 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04d09bf8,1,0);
      bRam0000000004fac324 = 1;
    }
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar1,0);
      }
      if (pcRam0000000004fac350 == (code *)0x0) {
        pcRam0000000004fac350 = (code *)FUN_02132f40(&UNK_00e22703);
      }
                    /* WARNING: Could not recover jumptable at 0x0477b0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fac350)(lVar2,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

