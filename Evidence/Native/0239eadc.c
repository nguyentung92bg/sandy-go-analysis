/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$BotStep
bool Dino_BusSand_App_Gameplay_GameplayController__BotStep (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$BotStep
   bool Dino_BusSand_App_Gameplay_GameplayController__BotStep
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Gameplay_GameplayController__BotStep_229eadc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f9c245 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9c245 = 1;
  }
  if (*(int *)(param_1 + 0x20) == 2) {
    lVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    iVar1 = Dino_BusSand_Core_SimBot__BestTap_241b8b8(uVar3,0);
    if (-1 < iVar1) {
      if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_JourneyTracking__NextTapIsAuto_221bf34(0);
      if (*(long *)(param_1 + 0x38) != 0) {
        Dino_BusSand_View_GameView__TapVehicle_23a151c(*(long *)(param_1 + 0x38),iVar1,0);
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

