/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$Place
void Dino_BusSand_App_UI_CommonGetPanel__Place (UnityEngine_RectTransform_o* rt, int32_t index, int32_t count, float gridW, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$Place
   void Dino_BusSand_App_UI_CommonGetPanel__Place (UnityEngine_RectTransform_o* rt, int32_t index,
   int32_t count, float gridW, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonGetPanel__Place_22ae748(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0,0x3f800000,param_1,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f800000,param_1,0);
  UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f000000,param_1,0);
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x43910000,0x436c0000,param_1,0);
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

