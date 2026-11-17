/* IL2CPP: Dino.BusSand.View.GarageView$$SetCount
void Dino_BusSand_View_GarageView__SetCount (Dino_BusSand_View_GarageView_o* __this, int32_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GarageView$$SetCount
   void Dino_BusSand_View_GarageView__SetCount (Dino_BusSand_View_GarageView_o* __this, int32_t n,
   const MethodInfo* method); */

void Dino_BusSand_View_GarageView__SetCount_23b0b90(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  int iStack_24;
  
  puVar1 = PTR_DAT_04ca9ae8;
  iStack_24 = param_2;
  if ((bRam0000000004f9c96f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c96f = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      Dino_BusSand_View_GarageView__BuildSignCount_23b15b0(param_1);
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x30);
    if (param_2 < 1) {
      uVar3 = *(ulong *)PTR_DAT_04ca9c30;
    }
    else {
      uVar3 = System_Int32__ToString_482d750(&iStack_24,0);
      uVar2 = uVar3;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar2,uVar3);
    }
    (**(code **)(*plVar4 + 0x518))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x520));
  }
  return;
}

