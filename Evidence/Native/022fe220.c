/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Layer
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UIManager__Layer (Dino_BusSand_App_UI_UIManager_o* __this, int32_t l, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Layer
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UIManager__Layer
   (Dino_BusSand_App_UI_UIManager_o* __this, int32_t l, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UIManager__Layer_21fe220(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (param_2 < *(uint *)(lVar1 + 0x18)) {
    return *(undefined8 *)(lVar1 + (long)(int)param_2 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

