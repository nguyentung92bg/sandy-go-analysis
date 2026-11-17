/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$HookSpend
void Dino_BusSand_App_Meta_BattleRoyaleFeature__HookSpend (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$HookSpend
   void Dino_BusSand_App_Meta_BattleRoyaleFeature__HookSpend
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleFeature__HookSpend_2226488(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04cb2c68;
  if ((bRam0000000004f9bddf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cb2c70);
    FUN_02132f7c(PTR_DAT_04cb2c78);
    FUN_02132f7c(PTR_DAT_04cb2c80);
    FUN_02132f7c(PTR_DAT_04cb2c68);
    bRam0000000004f9bddf = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_BattleYachtSpend__Ensure_2228394(0);
  puVar1 = PTR_DAT_04cb2c70;
  if (*(char *)(param_1 + 0x21) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x21) = 1;
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Action_int__long____ctor_35f6f14(uVar4,param_1,*(undefined8 *)PTR_DAT_04cb2c78,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_BattleYachtSpend__add_ItemUsed_2227fcc(uVar4,0);
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
  System_Action_int____ctor_35ef18c(uVar4,param_1,*(undefined8 *)PTR_DAT_04cb2c80,0);
  puVar2 = PTR_DAT_04cb2c68;
  if ((bRam0000000004f9be07 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0,0);
    FUN_02132f7c(PTR_DAT_04cb2c68);
    bRam0000000004f9be07 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04cac7e0;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  do {
    lVar6 = System_Delegate__Combine_4872324(lVar5,uVar4,0);
    if (lVar6 == 0) {
      lVar7 = 0;
    }
    else {
      uVar8 = *(undefined8 *)puVar1;
      lVar7 = thunk_FUN_0216e7a0(lVar6,uVar8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar6,uVar8);
      }
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = FUN_0216aff4(*(long *)(lVar6 + 0xb8) + 8,lVar7,lVar5);
    bVar3 = lVar6 != lVar5;
    lVar5 = lVar6;
  } while (bVar3);
  return;
}

