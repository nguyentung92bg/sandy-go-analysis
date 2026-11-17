/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$OnEnded
void Dino_BusSand_App_Gameplay_GameplayController__OnEnded (Dino_BusSand_App_Gameplay_GameplayController_o* __this, bool cleared, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$OnEnded
   void Dino_BusSand_App_Gameplay_GameplayController__OnEnded
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, bool cleared, const MethodInfo* method);
    */

void Dino_BusSand_App_Gameplay_GameplayController__OnEnded_229db8c(long param_1,ulong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  
  if ((bRam0000000004f9c23c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9c23c = 1;
  }
  if ((*(uint *)(param_1 + 0x20) & 0xfffffffe) != 2) {
    return;
  }
  if ((param_2 & 1) != 0) {
    iVar6 = 4;
Dino_BusSand_App_Gameplay_GameplayController__SetState_229d580:
    if (*(int *)(param_1 + 0x20) != iVar6) {
      *(int *)(param_1 + 0x20) = iVar6;
      if (iVar6 != 2) {
        Dino_BusSand_App_Gameplay_GameplayController__ClearHandlers_229d4e4(param_1);
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      lVar7 = *(long *)(param_1 + 0x70);
      if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0239d5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),iVar6,*(undefined8 *)(lVar7 + 0x28));
        return;
      }
    }
    return;
  }
  lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x84) != 0) {
      lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
      if (lVar7 == 0) goto LAB_0239dd24;
      if (*(int *)(lVar7 + 0x84) != 2) {
        lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
        if (lVar7 == 0) goto LAB_0239dd24;
        if (*(int *)(lVar7 + 0x84) != 3) {
          iVar6 = 5;
          goto Dino_BusSand_App_Gameplay_GameplayController__SetState_229d580;
        }
      }
    }
    uVar5 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caba90);
    }
    Dino_BusSand_App_Meta_JourneyTracking__ReviveOffer_221cc08(uVar5,0);
    uVar5 = Dino_BusSand_App_Gameplay_GameplayController__get_FailType_229bf88(param_1);
    lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    if (lVar7 != 0) {
      uVar2 = Dino_BusSand_Core_StageEngine__get_SandLeftPermille_2426db8(lVar7,0);
      lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
      if (lVar7 != 0) {
        cVar1 = *(char *)(lVar7 + 0xf4);
        uVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_CarsLeft_229b210(param_1);
        uVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_CarsRoad_229b2c8(param_1);
        if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac498);
        }
        Dino_BusSand_App_Meta_GameTracking__ReviveScreen_2213bec
                  (uVar5,uVar2,cVar1 != '\0',uVar3,uVar4,0);
        iVar6 = 3;
        goto Dino_BusSand_App_Gameplay_GameplayController__SetState_229d580;
      }
    }
  }
LAB_0239dd24:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

