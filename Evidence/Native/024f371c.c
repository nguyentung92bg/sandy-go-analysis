/* IL2CPP: Dino.BusSand.View.VehicleBatch$$.ctor
void Dino_BusSand_View_VehicleBatch___ctor (Dino_BusSand_View_VehicleBatch_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$.ctor
   void Dino_BusSand_View_VehicleBatch___ctor (Dino_BusSand_View_VehicleBatch_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_View_VehicleBatch___ctor_23f371c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_04cbdea0;
  puVar3 = PTR_DAT_04cbde98;
  puVar2 = PTR_DAT_04cb69a0;
  puVar1 = PTR_DAT_04cb6998;
  if ((bRam0000000004f9cabf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbde98);
    FUN_02132f7c(PTR_DAT_04cb69a0);
    FUN_02132f7c(PTR_DAT_04cb6998);
    FUN_02132f7c(PTR_DAT_04cbdea0);
    bRam0000000004f9cabf = 1;
  }
  uVar5 = FUN_02133068(*(undefined8 *)puVar3,3);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  thunk_FUN_02134474();
  uVar5 = FUN_02133068(*(undefined8 *)puVar4,0x1ff);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_02134474();
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar5);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

