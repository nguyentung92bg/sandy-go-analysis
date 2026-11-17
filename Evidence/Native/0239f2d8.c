/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$NotPossible
int32_t Dino_BusSand_App_Gameplay_GameplayController__NotPossible (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$NotPossible
   int32_t Dino_BusSand_App_Gameplay_GameplayController__NotPossible
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t id, const MethodInfo* method);
    */

undefined8
Dino_BusSand_App_Gameplay_GameplayController__NotPossible_229f2d8
          (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9c247 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9c247 = 1;
  }
  uVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(uVar2,param_2,4,0xffffffffffffffff,0);
  return 2;
}

