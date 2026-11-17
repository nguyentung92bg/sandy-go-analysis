/* IL2CPP: Dino.BusSand.View.GarageView$$Spend
void Dino_BusSand_View_GarageView__Spend (Dino_BusSand_View_GarageView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024b0c68) */
/* IL2CPP: Dino.BusSand.View.GarageView$$Spend
   void Dino_BusSand_View_GarageView__Spend (Dino_BusSand_View_GarageView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GarageView__Spend_23b18e8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (*(float *)(param_1 + 0x48) < 0.0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c96f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c96f = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      Dino_BusSand_View_GarageView__BuildSignCount_23b15b0(param_1);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0x30);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar2,*(undefined8 *)PTR_DAT_04ca9c30);
    }
    (**(code **)(*plVar3 + 0x518))
              (plVar3,*(undefined8 *)PTR_DAT_04ca9c30,*(undefined8 *)(*plVar3 + 0x520));
  }
  return;
}

