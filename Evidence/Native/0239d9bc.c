/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$UpdateJamHold
void Dino_BusSand_App_Gameplay_GameplayController__UpdateJamHold (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$UpdateJamHold
   void Dino_BusSand_App_Gameplay_GameplayController__UpdateJamHold
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__UpdateJamHold_229d9bc(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  
  if ((bRam0000000004f9c23a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c23a = 1;
  }
  lVar5 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if (lVar5 == 0) {
    return;
  }
  if ((*(char *)(lVar5 + 0x80) == '\0') && (*(int *)(param_1 + 0x20) == 2)) {
    if ((*(char *)(param_1 + 0xa4) != '\0') || (*(int *)(param_1 + 0x60) != 0)) {
      bVar2 = 1;
      goto LAB_0239da78;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      bVar2 = Dino_BusSand_View_GameView__get_BoosterBusy_23a92f0(*(long *)(param_1 + 0x38),0);
      goto LAB_0239da78;
    }
  }
  bVar2 = 0;
LAB_0239da78:
  if ((lVar5 == 0) || (bVar2 = bVar2 & 1, *(byte *)(param_1 + 0xa5) == bVar2)) {
    return;
  }
  *(byte *)(param_1 + 0xa5) = bVar2;
  if (bVar2 == 0) {
    Dino_BusSand_Core_StageEngine__ResumeJamClock_2426d38(lVar5,0);
  }
  else {
    Dino_BusSand_Core_StageEngine__PauseJamClock_2426d28();
  }
  if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd98 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90,bVar2,0);
    bRam0000000004f9bd98 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_JourneyTracking__Recording_221b330(lVar5);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = *(undefined8 *)(lVar5 + 0x78);
    lVar5 = **(long **)(lVar4 + 0xb8);
    dVar7 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = -0x8000000000000000;
    if (dVar7 * _UNK_00e6a6f0 != INFINITY) {
      lVar4 = (long)(dVar7 * _UNK_00e6a6f0);
    }
    Dino_BusSand_App_Meta_Journey_LevelJourney__Flow_229a104(0,lVar5,uVar6,lVar4,6,bVar2,0,0);
  }
  return;
}

