/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$TowerBusMilestone
void Dino_BusSand_App_Meta_GameTracking__TowerBusMilestone (int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$TowerBusMilestone
   void Dino_BusSand_App_Meta_GameTracking__TowerBusMilestone (int32_t index, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_GameTracking__TowerBusMilestone_221a324(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd77 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa530);
    FUN_02132f7c(PTR_DAT_04cb27c0);
    FUN_02132f7c(PTR_DAT_04cb27b0);
    bRam0000000004f9bd77 = 1;
  }
  puVar4 = PTR_DAT_04cb27c0;
  puVar3 = PTR_DAT_04cb27b0;
  puVar1 = PTR_DAT_04caa530;
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_App_Meta_GameTracking__get_TowerId_2219fc0();
  uVar5 = Dino_BusSand_App_Meta_GameTracking__get_TowerAttempt_221a058();
  System_Nullable_int____ctor_2bcbbd0(&uStack_38,param_1 + 1,*(undefined8 *)puVar1);
  Dino_BusSand_App_Meta_GameTracking__LiveOpsTrack_2219cd0
            (*(undefined8 *)puVar4,*(undefined8 *)puVar3,uVar6,uVar5,0,0,0,uStack_38,0);
  return;
}

