/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$<OnClickBg>b__50_0
void Dino_BusSand_App_UI_YachtRacingPanel___OnClickBg_b__50_0 (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$<OnClickBg>b__50_0
   void Dino_BusSand_App_UI_YachtRacingPanel___OnClickBg_b__50_0
   (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel___OnClickBg_b__50_0_21ee2d8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022ee2ec to 023ee39b has its CatchHandler @ 022ee2ec
                       catch() { ... } // from try @ 022ee2ec with catch @ 022ee2ec
                       catch() { ... } // from try @ 022ee3a4 with catch @ 022ee2ec */
  if ((bRam0000000004f9bc08 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc08 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x2c) != '\0')) {
    return;
  }
  lVar3 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004fa8360 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
    bRam0000000004fa8360 = 1;
  }
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
    }
    if (pcRam0000000004fa8430 == (code *)0x0) {
      pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
    }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa8430)(lVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

