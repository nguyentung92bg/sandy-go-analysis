/* IL2CPP: Dino.BusSand.View.VehicleView$$SetPercent
void Dino_BusSand_View_VehicleView__SetPercent (Dino_BusSand_View_VehicleView_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$SetPercent
   void Dino_BusSand_View_VehicleView__SetPercent (Dino_BusSand_View_VehicleView_o* __this, float k,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__SetPercent_23fbeb4(float param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  uint uStack_34;
  
  if ((bRam0000000004f9caea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd610);
    bRam0000000004f9caea = 1;
  }
  fVar6 = _UNK_00e20a7c;
  uStack_34 = 0;
  if (cRam0000000004f9b9dd == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b9dd = '\x01';
  }
  fVar6 = param_1 * 100.0 + fVar6;
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = (uint)fVar6;
  if (99 < (int)uVar3) {
    uVar3 = 100;
  }
  uVar1 = 0;
  if ((float)(int)fVar6 != INFINITY) {
    uVar1 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  }
  if (uVar1 != *(uint *)(param_2 + 0xa0)) {
    uVar4 = *(undefined8 *)(param_2 + 0x90);
    uStack_34 = uVar1;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      plVar5 = *(long **)(param_2 + 0x90);
      *(uint *)(param_2 + 0xa0) = uVar1;
      uVar4 = System_Int32__ToString_482d750(&uStack_34,0);
      uVar4 = System_String__Concat_46c82e0(uVar4,*(undefined8 *)PTR_DAT_04cbd610,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      (**(code **)(*plVar5 + 0x518))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x520));
    }
  }
  return;
}

