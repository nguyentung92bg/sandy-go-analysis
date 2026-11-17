/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$HomecomingRoutine
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_HomeAtelier__HomecomingRoutine (Dino_BusSand_App_UI_HomeAtelier_o* __this, int32_t won, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$HomecomingRoutine
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_HomeAtelier__HomecomingRoutine
   (Dino_BusSand_App_UI_HomeAtelier_o* __this, int32_t won, const MethodInfo* method); */

long Dino_BusSand_App_UI_HomeAtelier__HomecomingRoutine_22d913c
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb6fe8;
  if ((bRam0000000004f9c3dc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6fe8);
    bRam0000000004f9c3dc = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined4 *)(lVar2 + 0x28) = param_2;
  return lVar2;
}

