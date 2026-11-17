/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$GoldenStreakImpression
void Dino_BusSand_App_Meta_GameTracking__GoldenStreakImpression (System_String_o* screen, System_String_o* viewFrom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$GoldenStreakImpression
   void Dino_BusSand_App_Meta_GameTracking__GoldenStreakImpression (System_String_o* screen,
   System_String_o* viewFrom, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__GoldenStreakImpression_221a688
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd7b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa530);
    FUN_02132f7c(PTR_DAT_04cb27e0);
    FUN_02132f7c(PTR_DAT_04cb27a8);
    bRam0000000004f9bd7b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Meta_GameTracking__get_Streak_221a54c();
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(lVar6,0);
  }
  puVar4 = PTR_DAT_04cb27e0;
  puVar3 = PTR_DAT_04cb27a8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04caa530;
  uVar8 = Dino_BusSand_App_Meta_GameTracking__StreakId_221a5dc(lVar7);
  uVar9 = *(undefined8 *)puVar4;
  uVar10 = *(undefined8 *)puVar3;
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = Dino_BusSand_App_Meta_StreakRateFeature__get_IsOpen_224c000(lVar6,0);
    uVar5 = uVar5 & 1;
  }
  uStack_58 = 0;
  System_Nullable_int____ctor_2bcbbd0(&uStack_58,uVar5,*(undefined8 *)puVar1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GameTracking__LiveOpsTrack_2219cd0
            (uVar10,uVar9,uVar8,lVar7 != 0,param_1,param_2,uStack_58,0,0);
  return;
}

