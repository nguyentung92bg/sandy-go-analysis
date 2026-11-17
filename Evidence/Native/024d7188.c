/* IL2CPP: Dino.BusSand.View.PackVehicle$$set_BodyMaterial
void Dino_BusSand_View_PackVehicle__set_BodyMaterial (Dino_BusSand_View_PackVehicle_o* __this, UnityEngine_Material_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackVehicle$$set_BodyMaterial
   void Dino_BusSand_View_PackVehicle__set_BodyMaterial (Dino_BusSand_View_PackVehicle_o* __this,
   UnityEngine_Material_o* value, const MethodInfo* method); */

void Dino_BusSand_View_PackVehicle__set_BodyMaterial_23d7188(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca2a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca2a = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004fa68bc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf67a0,param_2,0);
    FUN_02132f7c(PTR_DAT_04cf6618);
    bRam0000000004fa68bc = 1;
  }
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
    }
    if (*(long *)(*(long *)PTR_DAT_04cf6618 + 0x38) == 0) {
      FUN_0216b4cc();
    }
    uVar5 = 0;
    if (param_2 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x10);
    }
    if (pcRam0000000004fa68f0 == (code *)0x0) {
      pcRam0000000004fa68f0 = (code *)FUN_02132f40(&UNK_00e421fa);
    }
                    /* WARNING: Could not recover jumptable at 0x044733d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa68f0)(lVar4,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

