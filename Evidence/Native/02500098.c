/* IL2CPP: Dino.BusSand.View.VehicleView$$RestoreShadow
void Dino_BusSand_View_VehicleView__RestoreShadow (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$RestoreShadow
   void Dino_BusSand_View_VehicleView__RestoreShadow (Dino_BusSand_View_VehicleView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_VehicleView__RestoreShadow_2400098(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [12];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if ((bRam0000000004f9cafe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa138);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9cafe = 1;
  }
  if (*(char *)(param_1 + 0xe1) == '\0') {
    if (*(char *)(param_1 + 0xb8) == '\0') {
      if (((*(long *)(param_1 + 0x48) == 0) ||
          (lVar2 = UnityEngine_Component__GetComponent_object__26f97e8
                             (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04caa138), lVar2 == 0
          )) || (lVar2 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar2,0), lVar2 == 0))
      goto LAB_025001e4;
      UnityEngine_Mesh__get_bounds_438fac4(auStack_38,lVar2,0);
    }
    else {
      Dino_BusSand_View_VehicleView__get_ModelBounds_23f8314(auStack_38,param_1);
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      UnityEngine_Transform__set_localScale_43d1be0
                ((fStack_2c + fStack_2c) * 1.25 * *(float *)(param_1 + 0xb0),0x3f800000,
                 (fStack_24 + fStack_24) * _UNK_00e2045c * *(float *)(param_1 + 0xb0),
                 *(long *)(param_1 + 0x78),0);
      return;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar2 != 0) {
      fStack_28 = *(float *)(param_1 + 0xb0);
      fStack_2c = fStack_28 * *(float *)(param_1 + 0x38c);
      fStack_24 = *(float *)(param_1 + 0x394) * fStack_28;
      fStack_28 = fStack_28 * *(float *)(param_1 + 0x390);
      if ((bRam0000000004fa8b3e & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7a00,0);
        bRam0000000004fa8b3e = 1;
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
      if (pcRam0000000004fa8bf0 == (code *)0x0) {
        pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
      }
      (*pcRam0000000004fa8bf0)(lVar2,&fStack_2c);
      return;
    }
  }
LAB_025001e4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

