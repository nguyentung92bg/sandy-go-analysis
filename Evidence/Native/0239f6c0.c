/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$AddRoadSlot
void Dino_BusSand_App_Gameplay_GameplayController__AddRoadSlot (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$AddRoadSlot
   void Dino_BusSand_App_Gameplay_GameplayController__AddRoadSlot
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__AddRoadSlot_229f6c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000004f9c24b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9c24b = 1;
  }
  lVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  puVar1 = PTR_DAT_04caba90;
  if (lVar2 != 0) {
    uVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(uVar3,0x2711,0,0xffffffffffffffff,0);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    if ((lVar2 == 0) ||
       (uVar3 = Dino_BusSand_Core_StageEngine__ExpandRoadCapacity_2429170(lVar2,0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_View_GameView__Handle_23a1cb8(lVar4,uVar3,0);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return;
}

