/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$TowerBusImpression
void Dino_BusSand_App_Meta_GameTracking__TowerBusImpression (System_String_o* screen, System_String_o* viewFrom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$TowerBusImpression
   void Dino_BusSand_App_Meta_GameTracking__TowerBusImpression (System_String_o* screen,
   System_String_o* viewFrom, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__TowerBusImpression_221a0a0
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd75 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa530);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb27a8);
    FUN_02132f7c(PTR_DAT_04cb27b0);
    bRam0000000004f9bd75 = 1;
  }
  puVar1 = PTR_DAT_04cabaf8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = Dino_BusSand_App_Meta_GameTracking__get_TowerId_2219fc0();
  uVar5 = Dino_BusSand_App_Meta_GameTracking__get_TowerAttempt_221a058();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  puVar4 = PTR_DAT_04cb27b0;
  puVar3 = PTR_DAT_04cb27a8;
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04caa530;
  uVar11 = *(undefined8 *)puVar4;
  uVar12 = *(undefined8 *)puVar3;
  if (*(long *)(*(long *)(lVar9 + 0xb8) + 0x10) == 0) {
    bVar10 = false;
  }
  else {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar6 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    iVar7 = Dino_BusSand_App_Meta_WinStreak__get_UnlockLevel_2292964(0);
    bVar10 = iVar7 <= iVar6;
  }
  uStack_58 = 0;
  System_Nullable_int____ctor_2bcbbd0(&uStack_58,bVar10,*(undefined8 *)puVar1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GameTracking__LiveOpsTrack_2219cd0
            (uVar12,uVar11,uVar8,uVar5,param_1,param_2,uStack_58,0,0);
  return;
}

