/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Pour
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_HomeAtelier__Pour (Dino_BusSand_App_UI_HomeAtelier_o* __this, Dino_BusSand_App_UI_HomeAtelier_Sheet_o* s, UnityEngine_Color_o main, UnityEngine_Color_o shade, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Pour
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_HomeAtelier__Pour
   (Dino_BusSand_App_UI_HomeAtelier_o* __this, Dino_BusSand_App_UI_HomeAtelier_Sheet_o* s,
   UnityEngine_Color_o main, UnityEngine_Color_o shade, const MethodInfo* method); */

long Dino_BusSand_App_UI_HomeAtelier__Pour_22d91e0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb6ff0;
  if ((bRam0000000004f9c3dd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6ff0);
    bRam0000000004f9c3dd = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_9;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_9);
  *(undefined8 *)(lVar2 + 0x28) = param_10;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_10);
  *(undefined4 *)(lVar2 + 0x30) = param_1;
  *(undefined4 *)(lVar2 + 0x34) = param_2;
  *(undefined4 *)(lVar2 + 0x38) = param_3;
  *(undefined4 *)(lVar2 + 0x3c) = param_4;
  *(undefined4 *)(lVar2 + 0x40) = param_5;
  *(undefined4 *)(lVar2 + 0x44) = param_6;
  *(undefined4 *)(lVar2 + 0x48) = param_7;
  *(undefined4 *)(lVar2 + 0x4c) = param_8;
  return lVar2;
}

