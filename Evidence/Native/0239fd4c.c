/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$<Awake>b__96_2
void Dino_BusSand_App_Gameplay_GameplayController___Awake_b__96_2 (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t id, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$<Awake>b__96_2
   void Dino_BusSand_App_Gameplay_GameplayController___Awake_b__96_2
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t id,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController___Awake_b__96_2_229fd4c
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined4 auStack_44 [3];
  
  puVar3 = PTR_DAT_04caba90;
  if ((bRam0000000004f9c253 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9c253 = 1;
  }
  lVar9 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  puVar3 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90,param_2,param_3,0);
    bRam0000000004f9bd92 = 1;
  }
  lVar5 = *(long *)puVar3;
  auStack_44[0] = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = *(long *)(lVar5 + 0xb8);
  uVar1 = *(undefined4 *)(lVar5 + 0x20);
  cVar2 = *(char *)(lVar5 + 0x38);
  *(undefined4 *)(lVar5 + 0x20) = 0;
  *(undefined1 *)(lVar5 + 0x38) = 0;
  uVar6 = Dino_BusSand_App_Meta_JourneyTracking__Recording_221b330(lVar9);
  if (((uVar6 & 1) == 0) ||
     (iVar4 = Dino_BusSand_App_Meta_Journey_JourneyReplay__Outcome_2297ff0(param_3,auStack_44,0),
     iVar4 < 0)) {
    return;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar10 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
  lVar5 = -0x8000000000000000;
  if (dVar10 * _UNK_00e6a6f0 != INFINITY) {
    lVar5 = (long)(dVar10 * _UNK_00e6a6f0);
  }
  if (cVar2 != '\0') {
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
    }
    if ((lVar9 == 0) || (**(long **)(lVar7 + 0xb8) == 0)) goto LAB_0231bf30;
    Dino_BusSand_App_Meta_Journey_LevelJourney__Flow_229a104
              (0,**(long **)(lVar7 + 0xb8),*(undefined8 *)(lVar9 + 0x78),lVar5,5,0,0,0);
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  if (lVar9 != 0) {
    lVar8 = **(long **)(lVar7 + 0xb8);
    if (lVar8 != 0) {
      Dino_BusSand_App_Meta_Journey_LevelJourney__Tap_2299c08
                (lVar8,*(undefined8 *)(lVar9 + 0x78),lVar5,param_2,iVar4,auStack_44[0],
                 (*(long **)(lVar7 + 0xb8))[3],uVar1,0);
      return;
    }
  }
LAB_0231bf30:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

