/* IL2CPP: Dino.BusSand.View.VehicleView$$Freed
void Dino_BusSand_View_VehicleView__Freed (Dino_BusSand_View_VehicleView_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$Freed
   void Dino_BusSand_View_VehicleView__Freed (Dino_BusSand_View_VehicleView_o* __this, float delay,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__Freed_23fe168
               (float param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  float fVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000004f9caf6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9caf6 = 1;
  }
  if (((*(int *)(param_4 + 0x2c) == 0) && (*(char *)(param_4 + 0x30) == '\0')) &&
     (*(float *)(param_4 + 0x350) < 0.0)) {
    uVar3 = *(undefined8 *)(param_4 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(param_4 + 0x350) = 0;
      fVar1 = 0.0;
      if (0.0 <= param_1) {
        fVar1 = param_1;
      }
      *(float *)(param_4 + 0x354) = fVar1;
      if (*(long *)(param_4 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar4 = UnityEngine_Transform__get_localScale_43d1b0c(*(long *)(param_4 + 0x68),0);
      *(undefined4 *)(param_4 + 0x358) = uVar4;
      *(undefined4 *)(param_4 + 0x35c) = param_2;
      *(undefined4 *)(param_4 + 0x360) = param_3;
    }
  }
                    /* try { // try from 024fe224 to 025fe253 has its CatchHandler @ 024fe454 */
  return;
}

