/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$NeedleLoop
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_WinPanel__NeedleLoop (Dino_BusSand_App_UI_WinPanel_o* __this, float total, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$NeedleLoop
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_WinPanel__NeedleLoop
   (Dino_BusSand_App_UI_WinPanel_o* __this, float total, const MethodInfo* method); */

long Dino_BusSand_App_UI_WinPanel__NeedleLoop_23135dc(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb8360;
  if ((bRam0000000004f9c556 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8360);
    bRam0000000004f9c556 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
  *(undefined4 *)(lVar2 + 0x28) = param_1;
  return lVar2;
}

