/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$OnLevelStart
void Dino_BusSand_App_Meta_YachtRacingFeature__OnLevelStart (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$OnLevelStart
   void Dino_BusSand_App_Meta_YachtRacingFeature__OnLevelStart
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, int32_t level, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingFeature__OnLevelStart_225b370(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04cb2c68;
  if ((bRam0000000004f9c010 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cb2c70);
    FUN_02132f7c(PTR_DAT_04cb2c68);
    FUN_02132f7c(PTR_DAT_04cb4108);
    FUN_02132f7c(PTR_DAT_04cb4110);
    bRam0000000004f9c010 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_BattleYachtSpend__Ensure_2228394(0);
  puVar1 = PTR_DAT_04cb2c70;
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Action_int__long____ctor_35f6f14(uVar7,param_1,*(undefined8 *)PTR_DAT_04cb4108,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_BattleYachtSpend__add_ItemUsed_2227fcc(uVar7,0);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
  System_Action_int____ctor_35ef18c(uVar7,param_1,*(undefined8 *)PTR_DAT_04cb4110,0);
  puVar2 = PTR_DAT_04cb2c68;
  if ((bRam0000000004f9be07 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0,0);
    FUN_02132f7c(PTR_DAT_04cb2c68);
    bRam0000000004f9be07 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04cac7e0;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  do {
    lVar5 = System_Delegate__Combine_4872324(lVar4,uVar7,0);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      uVar8 = *(undefined8 *)puVar1;
      lVar6 = thunk_FUN_0216e7a0(lVar5,uVar8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar5,uVar8);
      }
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = FUN_0216aff4(*(long *)(lVar5 + 0xb8) + 8,lVar6,lVar4);
    bVar3 = lVar5 != lVar4;
    lVar4 = lVar5;
  } while (bVar3);
  return;
}

