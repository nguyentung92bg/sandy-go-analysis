/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$CancelItems
void Dino_BusSand_App_Gameplay_GameplayController__CancelItems (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$CancelItems
   void Dino_BusSand_App_Gameplay_GameplayController__CancelItems
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__CancelItems_229f630(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f9c249 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9c249 = 1;
  }
  puVar2 = PTR_DAT_04caba90;
  if (*(int *)(param_1 + 0x60) != 0) {
    uVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    uVar1 = *(undefined4 *)(param_1 + 0x60);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(uVar3,uVar1,2,0xffffffffffffffff,0);
  }
  Dino_BusSand_App_Gameplay_GameplayController__ClearHandlers_229d4e4(param_1);
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

