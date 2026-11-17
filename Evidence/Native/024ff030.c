/* IL2CPP: Dino.BusSand.View.VehicleView$$get_WidthWorld
float Dino_BusSand_View_VehicleView__get_WidthWorld (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$get_WidthWorld
   float Dino_BusSand_View_VehicleView__get_WidthWorld (Dino_BusSand_View_VehicleView_o* __this,
   const MethodInfo* method); */

float Dino_BusSand_View_VehicleView__get_WidthWorld_23ff030(long param_1)

{
  undefined4 uVar1;
  double dVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9cafb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    bRam0000000004f9cafb = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar2 = (double)Dino_BusSand_Core_BusGeometry__WidthCells_242be4c(uVar1,0);
  return (*(float *)(param_1 + 0xb0) * (float)dVar2) / *(float *)(param_1 + 0xbc);
}

