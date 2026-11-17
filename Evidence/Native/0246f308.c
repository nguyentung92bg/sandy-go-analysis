/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$Show
void Dino_BusSand_Cheat_CheatUiHider__Show (UnityEngine_CanvasGroup_o* g, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$Show
   void Dino_BusSand_Cheat_CheatUiHider__Show (UnityEngine_CanvasGroup_o* g, const MethodInfo*
   method); */

void Dino_BusSand_Cheat_CheatUiHider__Show_236f308(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c7be & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7be = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_CanvasGroup__set_alpha_467ad3c(0x3f800000,param_1,0);
  UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(param_1,1,0);
  if ((bRam0000000004fac322 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04d09bf8,1,0);
    bRam0000000004fac322 = 1;
  }
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
    if (pcRam0000000004fac340 == (code *)0x0) {
      pcRam0000000004fac340 = (code *)FUN_02132f40(&UNK_00e3313a);
    }
                    /* WARNING: Could not recover jumptable at 0x0477af3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fac340)(lVar3,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

