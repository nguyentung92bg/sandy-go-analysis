/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$HeadStart
System_Collections_IEnumerator_o* Dino_BusSand_App_Gameplay_GameplayController__HeadStart (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$HeadStart
   System_Collections_IEnumerator_o* Dino_BusSand_App_Gameplay_GameplayController__HeadStart
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t n, const MethodInfo* method); */

long Dino_BusSand_App_Gameplay_GameplayController__HeadStart_229f780
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb58e0;
  if ((bRam0000000004f9c24c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb58e0);
    bRam0000000004f9c24c = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined4 *)(lVar2 + 0x28) = param_2;
  return lVar2;
}

