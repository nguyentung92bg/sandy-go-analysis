/* IL2CPP: Dino.BusSand.View.GameView$$ResumeAfterRevive
void Dino_BusSand_View_GameView__ResumeAfterRevive (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$ResumeAfterRevive
   void Dino_BusSand_View_GameView__ResumeAfterRevive (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__ResumeAfterRevive_23a9620(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar3 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c940 & 1) == 0) {
                    /* try { // try from 024a964c to 025a964f has its CatchHandler @ 024aaa30 */
    FUN_02132f7c(PTR_DAT_04cad568);
                    /* try { // try from 024a9650 to 025a9657 has its CatchHandler @ 024aaabc */
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c940 = 1;
  }
                    /* try { // try from 024a9678 to 025a967f has its CatchHandler @ 024aaab0 */
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x14d) = 0;
  Dino_BusSand_View_GameView__RefreshCounter_239e460(param_1);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_04cab238;
  if (**(long **)(lVar4 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__Revived_23840a8(**(long **)(lVar4 + 0xb8),0);
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Haptics__Play_2388ed8(2);
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x270);
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 024a9738 to 025a973f has its CatchHandler @ 024aabe4 */
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) != 0) {
        lVar4 = *(long *)(param_1 + 0xb8);
        Dino_BusSand_View_WorldView__get_CounterWorld_240ac64(*(long *)(param_1 + 0xa0),0);
        if (lVar4 != 0) {
          uStack_38 = 0;
          uStack_30 = 0;
          uStack_28 = 0;
          Dino_BusSand_View_Fx__Stars_2392818(lVar4,0xe,&uStack_38);
          goto LAB_024a97b8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_024a97b8:
                    /* try { // try from 024a97bc to 025a97bf has its CatchHandler @ 024aab38 */
  lVar4 = Dino_BusSand_View_GameView__ReliefRipple_23a4bd0(param_1);
                    /* try { // try from 024a97c0 to 025a97cb has its CatchHandler @ 024aab98 */
  if (lVar4 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar6 = thunk_FUN_0216e89c();
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar6,uVar7,0);
  }
  else {
    uVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar5 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *(long *)(param_1 + 0x10);
      if (lVar8 != 0) {
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar8,lVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar6 = thunk_FUN_0216e89c();
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar6,uVar7,0);
  }
  uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar6,uVar7);
}

