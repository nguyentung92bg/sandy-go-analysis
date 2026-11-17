/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSave$$.ctor
void Dino_BusSand_App_Meta_RacingRobotSave___ctor (Dino_BusSand_App_Meta_RacingRobotSave_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSave$$.ctor
   void Dino_BusSand_App_Meta_RacingRobotSave___ctor (Dino_BusSand_App_Meta_RacingRobotSave_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_RacingRobotSave___ctor_225fd24(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_04caeb10;
  puVar3 = PTR_DAT_04caeb08;
  puVar2 = PTR_DAT_04cad6e8;
  puVar1 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9c036 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caeb10);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caeb08);
    bRam0000000004f9c036 = 1;
  }
  uVar5 = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x10) = 1;
  uVar5 = thunk_FUN_0216e89c(uVar5);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_float____ctor_3ac202c(uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x40),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

