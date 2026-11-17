/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$GoldenStreakNodes
void Dino_BusSand_App_Meta_GameTracking__GoldenStreakNodes (Dino_BusSand_App_Meta_StreakRateSlot_o* s, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$GoldenStreakNodes
   void Dino_BusSand_App_Meta_GameTracking__GoldenStreakNodes
   (Dino_BusSand_App_Meta_StreakRateSlot_o* s, int32_t count, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__GoldenStreakNodes_221a8d8(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9bd7d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa530);
    FUN_02132f7c(PTR_DAT_04cb27e0);
    FUN_02132f7c(PTR_DAT_04cb27c8);
    FUN_02132f7c(PTR_DAT_04cb27c0);
    FUN_02132f7c(PTR_DAT_04cb27d0);
    bRam0000000004f9bd7d = 1;
  }
  puVar7 = PTR_DAT_04cb27e0;
  puVar6 = PTR_DAT_04cb27d0;
  puVar5 = PTR_DAT_04cb27c8;
  puVar4 = PTR_DAT_04cb27c0;
  puVar3 = PTR_DAT_04cac498;
  puVar2 = PTR_DAT_04caa530;
  uStack_68 = 0;
  if ((param_1 != 0) && (0 < param_2)) {
    iVar9 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x48);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar9 = iVar9 + 1;
      uVar8 = Dino_BusSand_App_Meta_GameTracking__StreakId_221a5dc(param_1);
      System_Nullable_int____ctor_2bcbbd0(&uStack_68,iVar9 + iVar1,*(undefined8 *)puVar2);
      Dino_BusSand_App_Meta_GameTracking__LiveOpsTrack_2219cd0
                (*(undefined8 *)puVar4,*(undefined8 *)puVar7,uVar8,1,0,0,0,uStack_68,0);
      uVar8 = Dino_BusSand_App_Meta_GameTracking__StreakId_221a5dc(param_1);
      System_Nullable_int____ctor_2bcbbd0(&uStack_68,iVar9 + iVar1,*(undefined8 *)puVar2);
      Dino_BusSand_App_Meta_GameTracking__LiveOpsTrack_2219cd0
                (*(undefined8 *)puVar5,*(undefined8 *)puVar7,uVar8,1,0,0,0,uStack_68,
                 *(undefined8 *)puVar6);
    } while (param_2 != iVar9);
  }
  return;
}

