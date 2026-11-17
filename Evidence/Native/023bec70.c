/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$Tween
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_ContinueBottomPager__Tween (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, float target, float d, int32_t page, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$Tween
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_ContinueBottomPager__Tween
   (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, float target, float d, int32_t page, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_ContinueBottomPager__Tween_22bec70
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb65a8;
  if ((bRam0000000004f9c325 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb65a8);
    bRam0000000004f9c325 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_3);
  *(undefined4 *)(lVar2 + 0x28) = param_2;
  *(undefined4 *)(lVar2 + 0x2c) = param_1;
  *(undefined4 *)(lVar2 + 0x30) = param_4;
  return lVar2;
}

