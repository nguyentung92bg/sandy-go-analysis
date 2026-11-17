/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$FadeGroup
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_GuidePanel__FadeGroup (Dino_BusSand_App_UI_GuidePanel_o* __this, float from, float to, float dur, int32_t ease, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$FadeGroup
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_GuidePanel__FadeGroup
   (Dino_BusSand_App_UI_GuidePanel_o* __this, float from, float to, float dur, int32_t ease, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_GuidePanel__FadeGroup_22cd648
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb6b10;
  if ((bRam0000000004f9c38b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6b10);
    bRam0000000004f9c38b = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_4);
  *(undefined4 *)(lVar2 + 0x30) = param_2;
  *(undefined4 *)(lVar2 + 0x34) = param_1;
  *(undefined4 *)(lVar2 + 0x20) = param_3;
  *(undefined4 *)(lVar2 + 0x38) = param_5;
  return lVar2;
}

