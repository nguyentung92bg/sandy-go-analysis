/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$get_Model
Dino_BusSand_App_Meta_WeeklyCupModel_o* Dino_BusSand_App_Meta_WeeklyCupFeature__get_Model (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$get_Model
   Dino_BusSand_App_Meta_WeeklyCupModel_o* Dino_BusSand_App_Meta_WeeklyCupFeature__get_Model
   (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_WeeklyCupFeature__get_Model_222fec0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  if ((bRam0000000004f9be6b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf838);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb30a8);
    bRam0000000004f9be6b = 1;
  }
  puVar2 = PTR_DAT_04caf838;
  puVar1 = PTR_DAT_04cabaf8;
  plVar8 = (long *)(param_1 + 0x18);
  if ((*plVar8 == 0) ||
     (lVar9 = *(long *)(*plVar8 + 0x10),
     lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                       (param_1,*(undefined8 *)PTR_DAT_04caf838), lVar9 != lVar5)) {
    puVar3 = PTR_DAT_04cb30a8;
    uVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar2);
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    Dino_BusSand_App_Meta_WeeklyCupModel___ctor_2230008(uVar7,uVar6);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    thunk_FUN_02134474(plVar8,uVar7);
  }
  lVar5 = *plVar8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar1;
  }
  iVar4 = 0;
  if (*(long *)(*(long *)(lVar9 + 0xb8) + 0x10) != 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar4 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    iVar4 = iVar4 + -1;
  }
  if (lVar5 != 0) {
    lVar9 = *plVar8;
    *(int *)(lVar5 + 0x18) = iVar4;
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

