/* IL2CPP: Dino.BusSand.View.PackVehicle$$.ctor
void Dino_BusSand_View_PackVehicle___ctor (Dino_BusSand_View_PackVehicle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PackVehicle$$.ctor
   void Dino_BusSand_View_PackVehicle___ctor (Dino_BusSand_View_PackVehicle_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_View_PackVehicle___ctor_23d85a0(ulong param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  cVar2 = cRam0000000004f9b88b;
  uVar3 = _UNK_00e6a3b8;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x74) = uVar3;
  if (cVar2 == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  uVar3 = **(undefined8 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
  *(undefined8 *)(param_1 + 0x88) = (*(undefined8 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8))[1];
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

