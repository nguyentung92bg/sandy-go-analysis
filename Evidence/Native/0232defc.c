/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeData$$.ctor
void Dino_BusSand_App_Meta_DailyChallengeData___ctor (Dino_BusSand_App_Meta_DailyChallengeData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeData$$.ctor
   void Dino_BusSand_App_Meta_DailyChallengeData___ctor (Dino_BusSand_App_Meta_DailyChallengeData_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_DailyChallengeData___ctor_222defc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cad6e8;
  puVar1 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9be4e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    bRam0000000004f9be4e = 1;
  }
  uVar3 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  uVar3 = thunk_FUN_0216e89c(uVar3);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar3);
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

