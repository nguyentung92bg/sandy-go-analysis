/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$get_Core
Dino_BusSand_App_Meta_YachtRacingCore_o* Dino_BusSand_App_Meta_YachtRacingFeature__get_Core (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$get_Core
   Dino_BusSand_App_Meta_YachtRacingCore_o* Dino_BusSand_App_Meta_YachtRacingFeature__get_Core
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04cb40e8;
  if ((bRam0000000004f9c00e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
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
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  puVar2 = PTR_DAT_04cb40f0;
  puVar1 = PTR_DAT_04caa458;
  plVar7 = (long *)(param_1 + 0x18);
  lVar8 = *plVar7;
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x10) != lVar5)) {
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb40f8);
    Dino_BusSand_App_Meta_YachtRacingCore___ctor_2254148(lVar8,lVar5,0);
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action___ctor_47b5ed0(uVar6,param_1,*(undefined8 *)puVar2,0);
    puVar3 = PTR_DAT_04cb4100;
    puVar2 = PTR_DAT_04cb3db8;
    puVar1 = PTR_DAT_04caf920;
    if (lVar8 == 0) {
LAB_0235ad38:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined8 *)(lVar8 + 0x28) = uVar6;
    thunk_FUN_02134474((undefined8 *)(lVar8 + 0x28),uVar6);
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Func_float____ctor_379e3bc(uVar6,0,*(undefined8 *)puVar3,0);
    *(undefined8 *)(lVar8 + 0x40) = uVar6;
    thunk_FUN_02134474((undefined8 *)(lVar8 + 0x40),uVar6);
    *plVar7 = lVar8;
    thunk_FUN_02134474(plVar7,lVar8);
    lVar8 = *plVar7;
    if (**(char **)(*(long *)puVar1 + 0xb8) != '\0') {
      uVar4 = System_Nullable_int___get_Value_2bcbbe8
                        (*(char **)(*(long *)puVar1 + 0xb8),*(undefined8 *)PTR_DAT_04cb2c60);
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae330);
      System_Random___ctor_4840cc4(uVar6,uVar4,0);
      if (lVar8 == 0) goto LAB_0235ad38;
      *(undefined8 *)(lVar8 + 0x18) = uVar6;
      thunk_FUN_02134474((undefined8 *)(lVar8 + 0x18),uVar6);
      lVar8 = *plVar7;
    }
  }
  return lVar8;
}

