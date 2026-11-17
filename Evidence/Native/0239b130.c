/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_I
Dino_BusSand_App_Gameplay_GameplayController_o* Dino_BusSand_App_Gameplay_GameplayController__get_I (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_I
   Dino_BusSand_App_Gameplay_GameplayController_o*
   Dino_BusSand_App_Gameplay_GameplayController__get_I (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Gameplay_GameplayController__get_I_229b130(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac868;
  if ((bRam0000000004f9c21f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac868);
    bRam0000000004f9c21f = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}

