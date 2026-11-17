/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$.ctor
void Dino_BusSand_App_Meta_ClimbTowerFeature___ctor (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$.ctor
   void Dino_BusSand_App_Meta_ClimbTowerFeature___ctor (Dino_BusSand_App_Meta_ClimbTowerFeature_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_ClimbTowerFeature___ctor_222d658(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cb2ec0;
  puVar1 = PTR_DAT_04caec70;
  if ((bRam0000000004f9be4a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb2ec0);
    bRam0000000004f9be4a = 1;
  }
  uVar3 = *(undefined8 *)puVar1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  uVar3 = FUN_02133068(uVar3,0);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_02134474();
  uVar3 = FUN_02133068(*(undefined8 *)puVar1,0);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  thunk_FUN_02134474();
  uVar3 = FUN_02133068(*(undefined8 *)puVar1,0);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  thunk_FUN_02134474();
  uVar3 = FUN_02133068(*(undefined8 *)puVar1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  thunk_FUN_02134474();
  uVar3 = FUN_02133068(*(undefined8 *)puVar1,0);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  thunk_FUN_02134474();
  uVar3 = *(undefined8 *)puVar2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

