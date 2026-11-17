/* IL2CPP: Dino.BusSand.View.MechanicLayer$$get_FxU
float Dino_BusSand_View_MechanicLayer__get_FxU (Dino_BusSand_View_MechanicLayer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$get_FxU
   float Dino_BusSand_View_MechanicLayer__get_FxU (Dino_BusSand_View_MechanicLayer_o* __this, const
   MethodInfo* method); */

float Dino_BusSand_View_MechanicLayer__get_FxU_23bec9c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c9bc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9bc = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  fVar4 = 1.0;
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0x3f800000);
    }
    fVar5 = *(float *)(*(long *)(param_1 + 0x38) + 0x58);
    if (_UNK_00e20948 < fVar5) {
      fVar4 = *(float *)(param_1 + 0x50) / fVar5;
    }
  }
  return fVar4;
}

