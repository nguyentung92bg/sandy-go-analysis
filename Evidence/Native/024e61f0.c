/* IL2CPP: Dino.BusSand.View.SandBoardView$$SetSweep
void Dino_BusSand_View_SandBoardView__SetSweep (Dino_BusSand_View_SandBoardView_o* __this, float position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SandBoardView$$SetSweep
   void Dino_BusSand_View_SandBoardView__SetSweep (Dino_BusSand_View_SandBoardView_o* __this, float
   position, const MethodInfo* method); */

void Dino_BusSand_View_SandBoardView__SetSweep_23e61f0(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca81 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbda60);
    bRam0000000004f9ca81 = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if (((uVar3 & 1) == 0) || (*(char *)(param_2 + 0x50) == '\0')) {
    return;
  }
  lVar4 = *(long *)(param_2 + 0x38);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar2 = UnityEngine_Shader__PropertyToID_4372cb4
                    (*(undefined8 *)PTR_DAT_04cbda60,*(undefined8 *)PTR_DAT_04cbda60,0);
  if ((bRam0000000004fa6d88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf6620);
    FUN_02132f7c(PTR_DAT_04cab588);
    bRam0000000004fa6d88 = 1;
  }
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (pcRam0000000004fa6f68 == (code *)0x0) {
      pcRam0000000004fa6f68 = (code *)FUN_02132f40(&UNK_00e40218);
    }
                    /* WARNING: Could not recover jumptable at 0x0447fb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa6f68)(param_1,lVar6,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

