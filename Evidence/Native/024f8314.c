/* IL2CPP: Dino.BusSand.View.VehicleView$$get_ModelBounds
UnityEngine_Bounds_o Dino_BusSand_View_VehicleView__get_ModelBounds (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$get_ModelBounds
   UnityEngine_Bounds_o Dino_BusSand_View_VehicleView__get_ModelBounds
   (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__get_ModelBounds_23f8314(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9cace & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa138);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9cace = 1;
  }
  if (*(char *)(param_2 + 0xe0) == '\0') {
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
    if ((uVar1 & 1) != 0) goto LAB_024f838c;
    if ((*(long *)(param_2 + 0x48) == 0) ||
       (lVar2 = UnityEngine_Component__GetComponent_object__26f97e8
                          (*(long *)(param_2 + 0x48),*(undefined8 *)PTR_DAT_04caa138), lVar2 == 0))
    goto LAB_024f83f0;
    lVar2 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar2,0);
  }
  else {
LAB_024f838c:
    if (*(long *)(param_2 + 0xc0) == 0) goto LAB_024f83f0;
    lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 0x18);
  }
  if (lVar2 != 0) {
    UnityEngine_Mesh__get_bounds_438fac4(&uStack_38,lVar2,0);
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    return;
  }
LAB_024f83f0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

