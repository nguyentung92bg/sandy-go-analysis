/* IL2CPP: Dino.BusSand.View.SandBoardView$$OnDestroy
void Dino_BusSand_View_SandBoardView__OnDestroy (Dino_BusSand_View_SandBoardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SandBoardView$$OnDestroy
   void Dino_BusSand_View_SandBoardView__OnDestroy (Dino_BusSand_View_SandBoardView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_SandBoardView__OnDestroy_23e6960(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca84 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbda58);
    bRam0000000004f9ca84 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar4,0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar4,0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar4,0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cbda58;
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar4,0);
  }
  uVar4 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,param_1,0);
  if ((uVar3 & 1) != 0) {
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0xc & 0x3f),
                   (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

