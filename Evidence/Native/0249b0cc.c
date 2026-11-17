/* IL2CPP: Dino.BusSand.View.GameView$$CheckEndSuction
void Dino_BusSand_View_GameView__CheckEndSuction (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$CheckEndSuction
   void Dino_BusSand_View_GameView__CheckEndSuction (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__CheckEndSuction_239b0cc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000004f9c909 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c909 = 1;
  }
  puVar1 = PTR_DAT_04cb2870;
  if (*(char *)(param_1 + 0x168) == '\0') {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_0249b190:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(*(long *)(param_1 + 0x20) + 0xf4) != '\0') {
      *(undefined1 *)(param_1 + 0x168) = 1;
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
      }
      if ((*(char *)(*(long *)(lVar2 + 0xb8) + 0x10) != '\0') && (*(long *)(param_1 + 0x160) != 0))
      {
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar2 == 0)) goto LAB_0249b190;
        Dino_BusSand_View_EndSuctionCue__Play_2395ed0
                  (*(long *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x16c),
                   *(undefined4 *)(lVar2 + 0x3c));
      }
      lVar2 = *(long *)(param_1 + 0x158);
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0249b18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
    }
  }
  return;
}

