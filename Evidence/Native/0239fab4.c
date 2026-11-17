/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$ForceFail
void Dino_BusSand_App_Gameplay_GameplayController__ForceFail (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$ForceFail
   void Dino_BusSand_App_Gameplay_GameplayController__ForceFail
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__ForceFail_229fab4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000004f9c24f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9c24f = 1;
  }
  puVar1 = PTR_DAT_04caba90;
  if (*(int *)(param_1 + 0x20) == 2) {
    uVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    Dino_BusSand_App_Meta_JourneyTracking__MarkForced_221cf50(uVar2,0);
    if (*(int *)(param_1 + 0x20) != 3) {
      *(undefined4 *)(param_1 + 0x20) = 3;
      Dino_BusSand_App_Gameplay_GameplayController__ClearHandlers_229d4e4(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
      lVar3 = *(long *)(param_1 + 0x70);
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0239d5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),3,*(undefined8 *)(lVar3 + 0x28));
        return;
      }
    }
    return;
  }
  return;
}

