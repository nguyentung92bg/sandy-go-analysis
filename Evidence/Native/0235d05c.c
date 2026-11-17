/* IL2CPP: Dino.BusSand.App.Meta.RacingStageConfig$$Load
Dino_BusSand_App_Meta_RacingStageConfig_o* Dino_BusSand_App_Meta_RacingStageConfig__Load (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingStageConfig$$Load
   Dino_BusSand_App_Meta_RacingStageConfig_o* Dino_BusSand_App_Meta_RacingStageConfig__Load (int32_t
   id, const MethodInfo* method); */

long Dino_BusSand_App_Meta_RacingStageConfig__Load_225d05c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c023 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4240);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb4248);
    FUN_02132f7c(PTR_DAT_04cb4250);
    FUN_02132f7c(PTR_DAT_04cb4258);
    FUN_02132f7c(PTR_DAT_04cb4260);
    FUN_02132f7c(PTR_DAT_04cb4268);
    FUN_02132f7c(PTR_DAT_04cb4270);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9c023 = 1;
  }
  puVar2 = PTR_DAT_04cb4250;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,param_1,0);
  puVar1 = PTR_DAT_04cac1c8;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4240);
    System_Object___ctor_4870e5c(lVar7,0);
    uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,*(undefined8 *)puVar1,0);
    uVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar8,0,0);
    puVar4 = PTR_DAT_04cb4270;
    puVar3 = PTR_DAT_04cb4268;
    puVar2 = PTR_DAT_04cb4260;
    puVar1 = PTR_DAT_04cb4248;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = *(undefined8 *)PTR_DAT_04cb4258;
    *(undefined4 *)(lVar7 + 0x10) = uVar5;
    uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,uVar8,0);
    uVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar8,0,0);
    uVar8 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar7 + 0x14) = uVar5;
    uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,uVar8,0);
    uVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar8,0,0);
    uVar8 = *(undefined8 *)puVar1;
    *(undefined4 *)(lVar7 + 0x18) = uVar5;
    uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,uVar8,0);
    uVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar8,0,0);
    uVar8 = *(undefined8 *)puVar3;
    *(undefined4 *)(lVar7 + 0x1c) = uVar5;
    uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,uVar8,0);
    uVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar8,0,0);
    uVar8 = *(undefined8 *)puVar4;
    *(undefined4 *)(lVar7 + 0x20) = uVar5;
    uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,uVar8,0);
    uVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar8,0,0);
    *(undefined4 *)(lVar7 + 0x24) = uVar5;
  }
  return lVar7;
}

