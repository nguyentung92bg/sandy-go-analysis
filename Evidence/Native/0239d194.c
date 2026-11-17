/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$LoadLevel
void Dino_BusSand_App_Gameplay_GameplayController__LoadLevel (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t displayLevel, Dino_BusSand_App_Levels_LevelData_o* overrideData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$LoadLevel
   void Dino_BusSand_App_Gameplay_GameplayController__LoadLevel
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t displayLevel,
   Dino_BusSand_App_Levels_LevelData_o* overrideData, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__LoadLevel_229d194
               (long param_1,undefined4 param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c236 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cb5858);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cacb18);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c236 = 1;
  }
  UnityEngine_MonoBehaviour__StopAllCoroutines_43c4224(param_1,0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  Dino_BusSand_App_Gameplay_GameplayController__ClearHandlers_229d4e4(param_1);
  UnityEngine_Time__set_timeScale_43cd6d8(0x3f800000,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_04cabaf8;
  lVar3 = **(long **)(lVar3 + 0xb8);
  if (lVar3 != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar4 == 0) goto LAB_0239d4e0;
    Dino_BusSand_GameAudio__SetSound_238544c(lVar3,*(undefined1 *)(lVar4 + 0x58),0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_04cab238;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    uVar1 = *(undefined1 *)(lVar3 + 0x5a);
    lVar3 = *(long *)PTR_DAT_04cab238;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    puVar9 = *(undefined1 **)(lVar3 + 0xb8);
    *(undefined4 *)(param_1 + 0x28) = param_2;
    *puVar9 = uVar1;
    if (param_3 == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cacb18 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      param_3 = Dino_BusSand_App_Levels_LevelDatabase__ForDisplayLevel_229b034(param_2);
    }
    plVar10 = (long *)(param_1 + 0x30);
    *plVar10 = param_3;
    thunk_FUN_02134474(plVar10,param_3);
    Dino_BusSand_App_Gameplay_GameplayController__SetState_229d580(param_1,1);
    if (*plVar10 != 0) {
      uVar5 = Dino_BusSand_Core_LevelTweaks__Apply_2410fe4(*(undefined8 *)(*plVar10 + 0x20),0);
      Dino_BusSand_App_Gameplay_GameplayController__ReserveHudSpace_229d5e4();
      if (*(long *)(param_1 + 0x38) != 0) {
        Dino_BusSand_View_GameView__Clear_239c7a8(*(long *)(param_1 + 0x38),0);
        puVar2 = PTR_DAT_04caba90;
        if (*(long *)(param_1 + 0x38) != 0) {
          Dino_BusSand_View_GameView__Load_239b194(*(long *)(param_1 + 0x38),uVar5,0,0);
          uVar5 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          Dino_BusSand_App_Meta_JourneyTracking__WrapInbound_221ba70(uVar5,0);
          if (*(long *)(param_1 + 0x38) != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x1b0) = 0;
            lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
            if (lVar3 == 0) {
              uVar8 = 0;
            }
            else {
              lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
              if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) goto LAB_0239d4e0;
              uVar8 = *(undefined4 *)(*(long *)(lVar3 + 0x18) + 0x70);
            }
            *(undefined4 *)(param_1 + 0x48) = 0;
            *(undefined4 *)(param_1 + 0x4c) = uVar8;
            *(undefined4 *)(param_1 + 0x44) = 0;
            if (*(long *)(param_1 + 0xa8) != 0) {
              System_Collections_Generic_HashSet_object___Clear_37e59fc
                        (*(long *)(param_1 + 0xa8),*(undefined8 *)PTR_DAT_04cb5858);
              if (*(long *)(param_1 + 0x38) != 0) {
                *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x40) = 0;
                Dino_BusSand_App_Gameplay_GameplayController__RefreshCounters_229d6bc(param_1,1);
                lVar3 = *(long *)(param_1 + 0x78);
                if (lVar3 != 0) {
                  (**(code **)(lVar3 + 0x18))
                            (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
                }
                lVar3 = Dino_BusSand_App_Gameplay_GameplayController__StartWhenIntroDone_229d838
                                  (param_1);
                if (lVar3 == 0) {
                  thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
                  uVar7 = thunk_FUN_0216e89c();
                  uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
                  System_NullReferenceException___ctor_483267c(uVar7,uVar5,0);
                }
                else {
                  uVar6 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
                  if ((uVar6 & 1) != 0) {
                    if ((bRam0000000004fa84ef & 1) == 0) {
                      FUN_02132f7c(PTR_DAT_04cf7890);
                      bRam0000000004fa84ef = 1;
                    }
                    if (param_1 != 0) {
                      lVar4 = *(long *)(param_1 + 0x10);
                      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                  (param_1,0);
                      }
                      if (pcRam0000000004fa8560 == (code *)0x0) {
                        pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                      }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam0000000004fa8560)(lVar4,lVar3);
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                  uVar7 = thunk_FUN_0216e89c();
                  uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
                  System_ArgumentException___ctor_47b660c(uVar7,uVar5,0);
                }
                uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar7,uVar5);
              }
            }
          }
        }
      }
    }
  }
LAB_0239d4e0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

