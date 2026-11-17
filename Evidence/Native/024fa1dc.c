/* IL2CPP: Dino.BusSand.View.VehicleView$$get_LightPaint
bool Dino_BusSand_View_VehicleView__get_LightPaint (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$get_LightPaint
   bool Dino_BusSand_View_VehicleView__get_LightPaint (Dino_BusSand_View_VehicleView_o* __this,
   const MethodInfo* method); */

bool Dino_BusSand_View_VehicleView__get_LightPaint_23fa1dc
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  float fVar3;
  
  puVar2 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9cad9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    bRam0000000004f9cad9 = 1;
  }
  uVar1 = *(undefined1 *)(param_4 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar3 = (float)Dino_BusSand_View_MaterialLibrary__BodyColor_23b95d0(uVar1,0);
  return _UNK_00e1fdd0 < param_3 * _UNK_00e20a34 + fVar3 * _UNK_00e207cc + param_2 * _UNK_00e202a8;
}

