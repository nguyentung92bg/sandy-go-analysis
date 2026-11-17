/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$SetPaused
void Dino_BusSand_App_Gameplay_GameplayController__SetPaused (Dino_BusSand_App_Gameplay_GameplayController_o* __this, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$SetPaused
   void Dino_BusSand_App_Gameplay_GameplayController__SetPaused
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, bool on, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dd50(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  
  puVar2 = PTR_DAT_04cb5868;
  if ((bRam0000000004f9c23d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5868);
    bRam0000000004f9c23d = 1;
  }
  uVar6 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9c23e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa000);
    FUN_02132f7c(PTR_DAT_04cb5870);
    FUN_02132f7c(PTR_DAT_04cb5878);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c23e = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)(param_1 + 0xa8);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x20);
    if ((param_2 & 1) == 0) {
      System_Collections_Generic_HashSet_object___Remove_37e5c2c
                (lVar4,uVar6,*(undefined8 *)PTR_DAT_04cb5870);
    }
    else {
      System_Collections_Generic_HashSet_object___Add_37e654c
                (lVar4,uVar6,*(undefined8 *)PTR_DAT_04caa000);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(param_1 + 0xa8) == 0) || (*(long *)(param_1 + 0x38) == 0)) goto LAB_0239df08;
      *(bool *)(*(long *)(param_1 + 0x38) + 0x40) = 0 < *(int *)(*(long *)(param_1 + 0xa8) + 0x20);
    }
    if (iVar1 < 1) {
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_0239df08;
      if (0 < *(int *)(*(long *)(param_1 + 0xa8) + 0x20)) {
        lVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
        if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caba90);
        }
        puVar2 = PTR_DAT_04caba90;
        if ((bRam0000000004f9bd97 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caba90,0);
          bRam0000000004f9bd97 = 1;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_App_Meta_JourneyTracking__Recording_221b330(lVar4);
        if ((uVar5 & 1) != 0) {
          lVar3 = *(long *)puVar2;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar3 = *(long *)puVar2;
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
          Dino_BusSand_App_Meta_Journey_LevelJourney__Flow_229a104(0,lVar4,uVar6,lVar3,0,0,0,0);
        }
        return;
      }
    }
    return;
  }
LAB_0239df08:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

