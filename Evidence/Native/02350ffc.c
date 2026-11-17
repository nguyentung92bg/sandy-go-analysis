/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$.ctor
void Dino_BusSand_App_Meta_StreakRateFeature___ctor (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$.ctor
   void Dino_BusSand_App_Meta_StreakRateFeature___ctor (Dino_BusSand_App_Meta_StreakRateFeature_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_StreakRateFeature___ctor_2250ffc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_04cb3c70;
  puVar3 = PTR_DAT_04cb2ed8;
  puVar2 = PTR_DAT_04cb2ed0;
  puVar1 = PTR_DAT_04caec70;
  if ((bRam0000000004f9bfc8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb2ed8);
    FUN_02132f7c(PTR_DAT_04cb2ed0);
    FUN_02132f7c(PTR_DAT_04cb3c70);
    bRam0000000004f9bfc8 = 1;
  }
  uVar5 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x18) = _UNK_00e69b40;
  uVar5 = FUN_02133068(uVar5,0);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  thunk_FUN_02134474();
  uVar5 = FUN_02133068(*(undefined8 *)puVar1,0);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_02134474();
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar5);
  uVar5 = *(undefined8 *)puVar4;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

