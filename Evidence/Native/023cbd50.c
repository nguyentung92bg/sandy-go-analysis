/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$TipAppear
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_GuidePanel__TipAppear (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_Transform_o* root, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$TipAppear
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_GuidePanel__TipAppear
   (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_Transform_o* root, const MethodInfo*
   method); */

long Dino_BusSand_App_UI_GuidePanel__TipAppear_22cbd50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb6a90;
  if ((bRam0000000004f9c37b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a90);
    bRam0000000004f9c37b = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
  return lVar2;
}

