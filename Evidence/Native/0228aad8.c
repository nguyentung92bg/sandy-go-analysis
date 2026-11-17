/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$get_Core
Dino_BusSand_App_Meta_BattleRoyaleCore_o* Dino_BusSand_App_UI_BattleRoyaleHallButton__get_Core (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$get_Core
   Dino_BusSand_App_Meta_BattleRoyaleCore_o* Dino_BusSand_App_UI_BattleRoyaleHallButton__get_Core
   (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleHallButton__get_Core_218aad8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  lVar4 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_I_2226254(0);
  if (lVar4 == 0) {
    return 0;
  }
  lVar4 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_I_2226254(0);
  puVar1 = PTR_DAT_04cb2c50;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9bdde & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458,0);
    FUN_02132f7c(PTR_DAT_04cadef0);
    FUN_02132f7c(PTR_DAT_04caf900);
    FUN_02132f7c(PTR_DAT_04cb2c58);
    FUN_02132f7c(PTR_DAT_04cb2c50);
    FUN_02132f7c(PTR_DAT_04cb1d68);
    FUN_02132f7c(PTR_DAT_04cb2c60);
    FUN_02132f7c(PTR_DAT_04cae330);
    bRam0000000004f9bdde = 1;
  }
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(lVar4,*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_04cb2c58;
  puVar1 = PTR_DAT_04caa458;
  plVar7 = (long *)(lVar4 + 0x18);
  lVar8 = *plVar7;
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x10) != lVar5)) {
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cadef0);
    Dino_BusSand_App_Meta_BattleRoyaleCore___ctor_221f178(lVar8,lVar5);
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action___ctor_47b5ed0(uVar6,lVar4,*(undefined8 *)puVar2,0);
    puVar1 = PTR_DAT_04caf900;
    if (lVar8 == 0) {
LAB_02326460:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined8 *)(lVar8 + 0x28) = uVar6;
    thunk_FUN_02134474((undefined8 *)(lVar8 + 0x28),uVar6);
    *plVar7 = lVar8;
    thunk_FUN_02134474(plVar7,lVar8);
    lVar8 = *plVar7;
    if (**(char **)(*(long *)puVar1 + 0xb8) != '\0') {
      uVar3 = System_Nullable_int___get_Value_2bcbbe8
                        (*(char **)(*(long *)puVar1 + 0xb8),*(undefined8 *)PTR_DAT_04cb2c60);
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae330);
      System_Random___ctor_4840cc4(uVar6,uVar3,0);
      if (lVar8 == 0) goto LAB_02326460;
      *(undefined8 *)(lVar8 + 0x18) = uVar6;
      thunk_FUN_02134474((undefined8 *)(lVar8 + 0x18),uVar6);
      lVar8 = *plVar7;
    }
  }
  return lVar8;
}

