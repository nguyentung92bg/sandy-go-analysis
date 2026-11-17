/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$.ctor
void Dino_BusSand_App_Meta_YachtRacingData___ctor (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$.ctor
   void Dino_BusSand_App_Meta_YachtRacingData___ctor (Dino_BusSand_App_Meta_YachtRacingData_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_YachtRacingData___ctor_225436c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar6 = PTR_DAT_04cb3df0;
  puVar5 = PTR_DAT_04cb3de8;
  puVar4 = PTR_DAT_04cb3de0;
  puVar3 = PTR_DAT_04cb3dd8;
  puVar2 = PTR_DAT_04caf748;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9c001 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3de0);
    FUN_02132f7c(PTR_DAT_04cb3de8);
    FUN_02132f7c(PTR_DAT_04caf748);
    FUN_02132f7c(PTR_DAT_04cb3dd8);
    FUN_02132f7c(PTR_DAT_04cb3df0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c001 = 1;
  }
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar7,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar7,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
  uVar7 = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x2c) = 9;
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  thunk_FUN_02134474();
  uVar7 = *(undefined8 *)puVar6;
  *(undefined1 *)(param_1 + 0x80) = 1;
  uVar7 = thunk_FUN_0216e89c(uVar7);
  Dino_BusSand_App_Meta_RacingRobotSave___ctor_225fd24(uVar7,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0xa0),uVar7);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)puVar1;
  thunk_FUN_02134474();
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_1;
  return auVar8;
}

