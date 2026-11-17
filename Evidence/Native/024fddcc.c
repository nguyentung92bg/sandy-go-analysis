/* IL2CPP: Dino.BusSand.View.VehicleView$$Flash
void Dino_BusSand_View_VehicleView__Flash (Dino_BusSand_View_VehicleView_o* __this, float amount, UnityEngine_Color_o tint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$Flash
   void Dino_BusSand_View_VehicleView__Flash (Dino_BusSand_View_VehicleView_o* __this, float amount,
   UnityEngine_Color_o tint, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__Flash_23fddcc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000004f9caf4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9caf4 = 1;
  }
  if ((*(char *)(param_6 + 0xe1) != '\0') && (*(long *)(param_6 + 0x120) != 0)) {
    uVar2 = *(undefined8 *)(param_6 + 0xe8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Equality_43c6f30(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(param_6 + 0x33c) = param_1;
      *(undefined4 *)(param_6 + 0x338) = 0;
      *(undefined4 *)(param_6 + 0x340) = param_2;
      *(undefined4 *)(param_6 + 0x344) = param_3;
      *(undefined4 *)(param_6 + 0x348) = param_4;
      *(undefined4 *)(param_6 + 0x34c) = param_5;
    }
  }
  return;
}

