/* IL2CPP: Dino.BusSand.View.PackVehicle$$get_SandLocal
UnityEngine_Vector3_o Dino_BusSand_View_PackVehicle__get_SandLocal (Dino_BusSand_View_PackVehicle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackVehicle$$get_SandLocal
   UnityEngine_Vector3_o Dino_BusSand_View_PackVehicle__get_SandLocal
   (Dino_BusSand_View_PackVehicle_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_PackVehicle__get_SandLocal_23d8410(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca30 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca30 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    uVar4 = *(undefined8 *)PTR_DAT_04caa208;
  }
  else {
    lVar3 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (UnityEngine_Transform__get_position_43d0e48(*(long *)(param_1 + 0x40),0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__InverseTransformPoint_43d3ffc(lVar3,0);
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    NEON_fmov(0x3e800000,4);
    uVar4 = *(undefined8 *)PTR_DAT_04caa208;
  }
  return;
}

