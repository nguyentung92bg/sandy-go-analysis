/* IL2CPP: Dino.BusSand.App.UI.HomeSideArt$$BasePivot
void Dino_BusSand_App_UI_HomeSideArt__BasePivot (UnityEngine_RectTransform_o* rt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeSideArt$$BasePivot
   void Dino_BusSand_App_UI_HomeSideArt__BasePivot (UnityEngine_RectTransform_o* rt, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeSideArt__BasePivot_22e80ec(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_RectTransform__get_pivot_43cfb30(param_1,0);
  UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,param_1,0);
  UnityEngine_RectTransform__get_anchoredPosition_43cf828(param_1,0);
  UnityEngine_RectTransform__get_sizeDelta_43cf9ac(param_1,0);
  UnityEngine_RectTransform__get_sizeDelta_43cf9ac(param_1,0);
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

