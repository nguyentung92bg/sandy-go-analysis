/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$get_Core
Dino_BusSand_App_Meta_YachtRacingCore_o* Dino_BusSand_App_UI_YachtRacingUi__get_Core (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$get_Core
   Dino_BusSand_App_Meta_YachtRacingCore_o* Dino_BusSand_App_UI_YachtRacingUi__get_Core (const
   MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingUi__get_Core_21f6838(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  lVar5 = Dino_BusSand_App_Meta_YachtRacingFeature__get_I_225aad4(0);
  puVar1 = PTR_DAT_04cb40e8;
  if (lVar5 == 0) {
    return 0;
  }
  if ((bRam0000000004f9c00e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458,0);
    FUN_02132f7c(PTR_DAT_04cb3db8);
    FUN_02132f7c(PTR_DAT_04cb40f0);
    FUN_02132f7c(PTR_DAT_04cb40e8);
    FUN_02132f7c(PTR_DAT_04cb1d68);
    FUN_02132f7c(PTR_DAT_04cb2c60);
    FUN_02132f7c(PTR_DAT_04cae330);
    FUN_02132f7c(PTR_DAT_04cb40f8);
    FUN_02132f7c(PTR_DAT_04cb4100);
    FUN_02132f7c(PTR_DAT_04caf920);
    bRam0000000004f9c00e = 1;
  }
  lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(lVar5,*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_04cb40f0;
  puVar1 = PTR_DAT_04caa458;
  plVar8 = (long *)(lVar5 + 0x18);
  lVar9 = *plVar8;
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) != lVar6)) {
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb40f8);
    Dino_BusSand_App_Meta_YachtRacingCore___ctor_2254148(lVar9,lVar6,0);
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action___ctor_47b5ed0(uVar7,lVar5,*(undefined8 *)puVar2,0);
    puVar3 = PTR_DAT_04cb4100;
    puVar2 = PTR_DAT_04cb3db8;
    puVar1 = PTR_DAT_04caf920;
    if (lVar9 == 0) {
LAB_0235ad38:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined8 *)(lVar9 + 0x28) = uVar7;
    thunk_FUN_02134474((undefined8 *)(lVar9 + 0x28),uVar7);
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Func_float____ctor_379e3bc(uVar7,0,*(undefined8 *)puVar3,0);
    *(undefined8 *)(lVar9 + 0x40) = uVar7;
    thunk_FUN_02134474((undefined8 *)(lVar9 + 0x40),uVar7);
    *plVar8 = lVar9;
    thunk_FUN_02134474(plVar8,lVar9);
    lVar9 = *plVar8;
    if (**(char **)(*(long *)puVar1 + 0xb8) != '\0') {
      uVar4 = System_Nullable_int___get_Value_2bcbbe8
                        (*(char **)(*(long *)puVar1 + 0xb8),*(undefined8 *)PTR_DAT_04cb2c60);
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae330);
      System_Random___ctor_4840cc4(uVar7,uVar4,0);
      if (lVar9 == 0) goto LAB_0235ad38;
      *(undefined8 *)(lVar9 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x18),uVar7);
      lVar9 = *plVar8;
    }
  }
  return lVar9;
}

