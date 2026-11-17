/* IL2CPP: Dino.BusSand.View.GameView.<Spotlight>d__241$$System.IDisposable.Dispose
void Dino_BusSand_View_GameView__Spotlight_d__241__System_IDisposable_Dispose (Dino_BusSand_View_GameView__Spotlight_d__241_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView.<Spotlight>d__241$$System.IDisposable.Dispose
   void Dino_BusSand_View_GameView__Spotlight_d__241__System_IDisposable_Dispose
   (Dino_BusSand_View_GameView__Spotlight_d__241_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_GameView__Spotlight_d__241__System_IDisposable_Dispose_23af0c8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((*(int *)(param_1 + 0x10) != 1) && (*(int *)(param_1 + 0x10) != -3)) {
    return;
  }
  if ((bRam0000000004f9c96a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c96a = 1;
  }
  lVar2 = *(long *)puVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Object__Destroy_43c8114(uVar3,0);
  UnityEngine_Object__Destroy_43c8114(*(undefined8 *)(param_1 + 0x50),0);
  puVar1 = PTR_DAT_04ca9ae8;
  lVar2 = *(long *)(param_1 + 0x38);
  uVar3 = 0;
  if ((bRam0000000004fa8603 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa8603 = 1;
    uVar3 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar3 = extraout_x1_00;
  }
  puVar1 = PTR_DAT_04cf6418;
  if ((bRam0000000004fa8602 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf6418,uVar3);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004fa8602 = 1;
  }
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_0216b4cc();
  }
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (pcRam0000000004fa8680 == (code *)0x0) {
    pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
  }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa8680)(0,uVar3);
  return;
}

