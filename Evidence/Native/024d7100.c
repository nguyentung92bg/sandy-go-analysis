/* IL2CPP: Dino.BusSand.View.PackVehicle$$get_BodyMaterial
UnityEngine_Material_o* Dino_BusSand_View_PackVehicle__get_BodyMaterial (Dino_BusSand_View_PackVehicle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackVehicle$$get_BodyMaterial
   UnityEngine_Material_o* Dino_BusSand_View_PackVehicle__get_BodyMaterial
   (Dino_BusSand_View_PackVehicle_o* __this, const MethodInfo* method); */

long Dino_BusSand_View_PackVehicle__get_BodyMaterial_23d7100(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca29 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca29 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004fa68bb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf67a0,0);
    FUN_02132f7c(PTR_DAT_04cf6288);
    bRam0000000004fa68bb = 1;
  }
  puVar1 = PTR_DAT_04cf6288;
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
    }
    if (pcRam0000000004fa68e8 == (code *)0x0) {
      pcRam0000000004fa68e8 = (code *)FUN_02132f40(&UNK_00e3da0e);
    }
    uVar2 = (*pcRam0000000004fa68e8)(lVar6);
    lVar3 = *(long *)puVar1;
    if (*(long *)(lVar3 + 0x38) == 0) {
      FUN_0216b4cc(lVar3);
    }
    if (uVar2 != 0) {
      if (cRam0000000004f9d849 == '\0') {
        FUN_02132f7c(&DAT_04ddbd40);
        cRam0000000004f9d849 = '\x01';
      }
      if ((uVar2 & 1) == 0) {
        plVar4 = (long *)System_IntPtr__op_Explicit_487833c();
        lVar6 = *plVar4;
      }
      else {
        lVar6 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar2,0);
      }
      lVar3 = **(long **)(lVar3 + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0216b470(lVar3);
      }
      if (lVar6 != 0) {
        lVar5 = thunk_FUN_0216e7a0(lVar6,lVar3);
        if (lVar5 != 0) {
          return lVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar6,lVar3);
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

