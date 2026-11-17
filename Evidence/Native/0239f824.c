/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$TryCompleteRevive
bool Dino_BusSand_App_Gameplay_GameplayController__TryCompleteRevive (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t buses, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$TryCompleteRevive
   bool Dino_BusSand_App_Gameplay_GameplayController__TryCompleteRevive
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t buses, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_Gameplay_GameplayController__TryCompleteRevive_229f824(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((bRam0000000004f9c24d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9c24d = 1;
  }
  if ((*(int *)(param_1 + 0x20) != 3) ||
     (lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1), lVar3 == 0)
     ) {
    return 0;
  }
  lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if (lVar3 != 0) {
    fVar5 = 0.0;
    iVar1 = *(int *)(lVar3 + 0x84);
    if (iVar1 == 3) {
      if (*(int *)(*(long *)PTR_DAT_04cac868 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar2 = Dino_BusSand_App_Meta_Monetization__get_RescueReviveSeconds_2266cdc(0);
      fVar5 = (float)iVar2;
    }
    if (2 < param_2) {
      param_2 = 3;
    }
    if (param_2 < 2) {
      param_2 = 1;
    }
    uVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caba90);
    }
    Dino_BusSand_App_Meta_JourneyTracking__Revive_221cd9c(fVar5,uVar4,param_2,0);
    lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    if (iVar1 == 3) {
      if (lVar3 == 0) goto LAB_0239f9c0;
      uVar4 = Dino_BusSand_Core_StageEngine__AddRescueTime_24293a0(fVar5,lVar3,0);
    }
    else {
      if (lVar3 == 0) goto LAB_0239f9c0;
      uVar4 = Dino_BusSand_Core_StageEngine__ResumeByFillingRoadBus_2429894(lVar3,param_2,6,0);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      Dino_BusSand_View_GameView__ResumeAfterRevive_23a9620(*(long *)(param_1 + 0x38),0);
      if (*(long *)(param_1 + 0x38) != 0) {
        Dino_BusSand_View_GameView__Handle_23a1cb8(*(long *)(param_1 + 0x38),uVar4,0);
        if (*(int *)(param_1 + 0x20) != 2) {
          lVar3 = *(long *)(param_1 + 0x70);
          *(undefined4 *)(param_1 + 0x20) = 2;
          if (lVar3 != 0) {
            (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),2,*(undefined8 *)(lVar3 + 0x28));
          }
        }
        return 1;
      }
    }
  }
LAB_0239f9c0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

