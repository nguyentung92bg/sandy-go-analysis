/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotConfig$$Load
Dino_BusSand_App_Meta_RacingRobotConfig_o* Dino_BusSand_App_Meta_RacingRobotConfig__Load (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotConfig$$Load
   Dino_BusSand_App_Meta_RacingRobotConfig_o* Dino_BusSand_App_Meta_RacingRobotConfig__Load (int32_t
   id, const MethodInfo* method); */

long Dino_BusSand_App_Meta_RacingRobotConfig__Load_225cfe8(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c021 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb4238);
    bRam0000000004f9c021 = 1;
  }
  puVar2 = PTR_DAT_04cb4238;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,param_1,0);
  if ((bRam0000000004f9c020 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4210);
    FUN_02132f7c(PTR_DAT_04cb4218);
    FUN_02132f7c(PTR_DAT_04cb4220);
    FUN_02132f7c(PTR_DAT_04cb4228);
    FUN_02132f7c(PTR_DAT_04cb4230);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9c020 = 1;
  }
  puVar1 = PTR_DAT_04cac1c8;
  if (lVar8 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4210);
    Dino_BusSand_App_Meta_RacingRobotConfig___ctor_225cf70();
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar8,*(undefined8 *)puVar1,0);
    uVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar7,0,0);
    puVar4 = PTR_DAT_04cb4230;
    puVar3 = PTR_DAT_04cb4228;
    puVar2 = PTR_DAT_04cb4218;
    puVar1 = PTR_DAT_04ca9c30;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar7 = *(undefined8 *)PTR_DAT_04cb4220;
    *(undefined4 *)(lVar6 + 0x10) = uVar5;
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar8,uVar7,0);
    uVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar7,0,0);
    uVar7 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar6 + 0x14) = uVar5;
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar8,uVar7,0);
    uVar7 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar7,*(undefined8 *)puVar1,0);
    *(undefined8 *)(lVar6 + 0x18) = uVar7;
    thunk_FUN_02134474();
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar8,*(undefined8 *)puVar3,0);
    uVar7 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar7,*(undefined8 *)puVar1,0);
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    thunk_FUN_02134474();
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar8,*(undefined8 *)puVar4,0);
    uVar7 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar7,*(undefined8 *)puVar1,0);
    *(undefined8 *)(lVar6 + 0x28) = uVar7;
    thunk_FUN_02134474();
  }
  return lVar6;
}

