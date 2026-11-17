/* IL2CPP: Dino.BusSand.Core.BusGeometry$$WidthCells
double Dino_BusSand_Core_BusGeometry__WidthCells (int32_t k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.BusGeometry$$WidthCells
   double Dino_BusSand_Core_BusGeometry__WidthCells (int32_t k, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_Core_BusGeometry__WidthCells_242be4c(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9cbc8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    bRam0000000004f9cbc8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar3 = 0x6f25;
  if (param_1 != 1) {
    iVar3 = 0x6d79;
  }
  iVar1 = 0x7424;
  if (param_1 != 0) {
    iVar1 = iVar3;
  }
  auVar4._0_8_ = (double)iVar1 / _UNK_00e69e08;
  auVar4._8_8_ = 0;
  return auVar4;
}

