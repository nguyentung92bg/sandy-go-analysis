/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$get_Core
Dino_BusSand_App_Meta_BattleRoyaleCore_o* Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$get_Core
   Dino_BusSand_App_Meta_BattleRoyaleCore_o* Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04cb2c50;
  if ((bRam0000000004f9bdde & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cadef0);
    FUN_02132f7c(PTR_DAT_04caf900);
    FUN_02132f7c(PTR_DAT_04cb2c58);
    FUN_02132f7c(PTR_DAT_04cb2c50);
    FUN_02132f7c(PTR_DAT_04cb1d68);
    FUN_02132f7c(PTR_DAT_04cb2c60);
    FUN_02132f7c(PTR_DAT_04cae330);
    bRam0000000004f9bdde = 1;
  }
  lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  puVar2 = PTR_DAT_04cb2c58;
  puVar1 = PTR_DAT_04caa458;
  plVar6 = (long *)(param_1 + 0x18);
  lVar7 = *plVar6;
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) != lVar4)) {
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cadef0);
    Dino_BusSand_App_Meta_BattleRoyaleCore___ctor_221f178(lVar7,lVar4);
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action___ctor_47b5ed0(uVar5,param_1,*(undefined8 *)puVar2,0);
    puVar1 = PTR_DAT_04caf900;
    if (lVar7 == 0) {
LAB_02326460:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined8 *)(lVar7 + 0x28) = uVar5;
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x28),uVar5);
    *plVar6 = lVar7;
    thunk_FUN_02134474(plVar6,lVar7);
    lVar7 = *plVar6;
    if (**(char **)(*(long *)puVar1 + 0xb8) != '\0') {
      uVar3 = System_Nullable_int___get_Value_2bcbbe8
                        (*(char **)(*(long *)puVar1 + 0xb8),*(undefined8 *)PTR_DAT_04cb2c60);
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae330);
      System_Random___ctor_4840cc4(uVar5,uVar3,0);
      if (lVar7 == 0) goto LAB_02326460;
      *(undefined8 *)(lVar7 + 0x18) = uVar5;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x18),uVar5);
      lVar7 = *plVar6;
    }
  }
  return lVar7;
}

