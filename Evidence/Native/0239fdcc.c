/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$<Awake>b__96_3
void Dino_BusSand_App_Gameplay_GameplayController___Awake_b__96_3 (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$<Awake>b__96_3
   void Dino_BusSand_App_Gameplay_GameplayController___Awake_b__96_3
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t id, const MethodInfo* method);
    */

void Dino_BusSand_App_Gameplay_GameplayController___Awake_b__96_3_229fdcc
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  double dVar7;
  
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9c254 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9c254 = 1;
  }
  lVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd95 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90,param_2,0);
    bRam0000000004f9bd95 = 1;
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
    plVar5 = *(long **)(lVar3 + 0xb8);
    if ((int)plVar5[5] == param_2) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
        plVar5 = *(long **)(lVar3 + 0xb8);
      }
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(*plVar5 + 0x4c) == *(int *)((long)plVar5 + 0x2c)) {
        return;
      }
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x78);
    lVar4 = **(long **)(lVar3 + 0xb8);
    dVar7 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = -0x8000000000000000;
    if (dVar7 * _UNK_00e6a6f0 != INFINITY) {
      lVar3 = (long)(dVar7 * _UNK_00e6a6f0);
    }
    Dino_BusSand_App_Meta_Journey_LevelJourney__Flow_229a104
              (0,lVar4,uVar6,lVar3,2,(long)param_2,0,0);
    plVar5 = *(long **)(*(long *)puVar1 + 0xb8);
    *(int *)(plVar5 + 5) = param_2;
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined4 *)((long)plVar5 + 0x2c) = *(undefined4 *)(*plVar5 + 0x4c);
  }
  return;
}

