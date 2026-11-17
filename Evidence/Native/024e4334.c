/* IL2CPP: Dino.BusSand.View.RoadLoopConfig$$.ctor
void Dino_BusSand_View_RoadLoopConfig___ctor (Dino_BusSand_View_RoadLoopConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.RoadLoopConfig$$.ctor
   void Dino_BusSand_View_RoadLoopConfig___ctor (Dino_BusSand_View_RoadLoopConfig_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_RoadLoopConfig___ctor_23e4334(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = _UNK_00e6ab08;
  uVar1 = _UNK_00e6ab00;
  *(undefined4 *)(param_1 + 0x28) = 0x3fb33333;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = 0x3f19999a00000002;
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa8588 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa8588 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Object___ctor_43c663c(param_1,0);
  if (pcRam0000000004fa8590 == (code *)0x0) {
    pcRam0000000004fa8590 = (code *)FUN_02132f40(&UNK_00e3b9b1);
  }
                    /* WARNING: Could not recover jumptable at 0x044c4b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa8590)(param_1);
  return;
}

