/* IL2CPP: Dino.BusSand.View.VehicleView$$MeshName
System_String_o* Dino_BusSand_View_VehicleView__MeshName (int32_t k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$MeshName
   System_String_o* Dino_BusSand_View_VehicleView__MeshName (int32_t k, const MethodInfo* method);
    */

undefined8 Dino_BusSand_View_VehicleView__MeshName_23f44a0(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04cbded0;
  puVar1 = (undefined8 *)PTR_DAT_04cbdec8;
  puVar2 = (undefined8 *)PTR_DAT_04cbdec0;
  if ((bRam0000000004f9cac5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdec8);
    FUN_02132f7c(PTR_DAT_04cbded0);
    FUN_02132f7c(PTR_DAT_04cbdec0);
    bRam0000000004f9cac5 = 1;
  }
  if (param_1 != 1) {
    puVar1 = (undefined8 *)puVar3;
  }
  if (param_1 != 0) {
    puVar2 = puVar1;
  }
  return *puVar2;
}

