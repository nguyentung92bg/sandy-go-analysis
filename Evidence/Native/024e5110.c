/* IL2CPP: Dino.BusSand.View.SandBoardView$$ApplyStyle
void Dino_BusSand_View_SandBoardView__ApplyStyle (Dino_BusSand_View_SandBoardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.SandBoardView$$ApplyStyle
   void Dino_BusSand_View_SandBoardView__ApplyStyle (Dino_BusSand_View_SandBoardView_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_View_SandBoardView__ApplyStyle_23e5110(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca7b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc988);
    bRam0000000004f9ca7b = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  uVar1 = _UNK_00e1ffc4;
  if (((uVar4 & 1) != 0) || (*(char *)(param_1 + 0x50) == '\0')) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar3 = UnityEngine_Shader__PropertyToID_4372cb4
                    (*(undefined8 *)PTR_DAT_04cbc988,*(undefined8 *)PTR_DAT_04cbc988,0);
  if ((bRam0000000004fa6d88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf6620);
    FUN_02132f7c(PTR_DAT_04cab588);
    bRam0000000004fa6d88 = 1;
  }
  if (lVar5 != 0) {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (pcRam0000000004fa6f68 == (code *)0x0) {
      pcRam0000000004fa6f68 = (code *)FUN_02132f40(&UNK_00e40218);
    }
                    /* WARNING: Could not recover jumptable at 0x0447fb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa6f68)(uVar1,lVar7,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

