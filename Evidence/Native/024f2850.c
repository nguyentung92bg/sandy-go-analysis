/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchPaint
UnityEngine_Vector4_o Dino_BusSand_View_VehicleView__get_BatchPaint (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchPaint
   UnityEngine_Vector4_o Dino_BusSand_View_VehicleView__get_BatchPaint
   (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_View_VehicleView__get_BatchPaint_23f2850(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9cb02 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9cb02 = 1;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x154);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x68) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0),
       lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_GameObject__get_activeSelf_43c14cc(lVar3,0);
  }
  return uVar5;
}

