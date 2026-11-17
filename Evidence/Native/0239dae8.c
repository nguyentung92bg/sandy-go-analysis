/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$ResetJamClock
void Dino_BusSand_App_Gameplay_GameplayController__ResetJamClock (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$ResetJamClock
   void Dino_BusSand_App_Gameplay_GameplayController__ResetJamClock
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__ResetJamClock_229dae8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  
  if ((bRam0000000004f9c23b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9c23b = 1;
  }
  lVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x80) != '\0')) {
    return;
  }
  Dino_BusSand_Core_StageEngine__ResetJamClock_2426d5c(lVar4,0);
  if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd99 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90,0);
    bRam0000000004f9bd99 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Meta_JourneyTracking__Recording_221b330(lVar4);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x78);
    lVar4 = **(long **)(lVar3 + 0xb8);
    dVar6 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = -0x8000000000000000;
    if (dVar6 * _UNK_00e6a6f0 != INFINITY) {
      lVar3 = (long)(dVar6 * _UNK_00e6a6f0);
    }
    Dino_BusSand_App_Meta_Journey_LevelJourney__Flow_229a104(0,lVar4,uVar5,lVar3,7,0,0,0);
  }
  return;
}

