/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$Place
void Dino_BusSand_App_UI_WinStreakPanel__Place (UnityEngine_RectTransform_o* rt, float x, float y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$Place
   void Dino_BusSand_App_UI_WinStreakPanel__Place (UnityEngine_RectTransform_o* rt, float x, float
   y, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakPanel__Place_2337b50(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,param_1,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,param_1,0);
  if ((bRam0000000004fa8a88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7bc8,0);
    bRam0000000004fa8a88 = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      if (pcRam0000000004fa8ad0 == (code *)0x0) {
        pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
      }
      (*pcRam0000000004fa8ad0)(lVar1,&stack0xffffffffffffffe8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

