/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$Parallax
void Dino_BusSand_App_UI_WinStreakPanel__Parallax (Dino_BusSand_App_UI_WinStreakPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$Parallax
   void Dino_BusSand_App_UI_WinStreakPanel__Parallax (Dino_BusSand_App_UI_WinStreakPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakPanel__Parallax_2338cbc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
                    /* try { // try from 02438cbc to 02538cc7 has its CatchHandler @ 02438cfc */
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c645 & 1) == 0) {
                    /* try { // try from 02438ce0 to 02538ce3 has its CatchHandler @ 02438dfc */
                    /* try { // try from 02438ce4 to 02538d13 has its CatchHandler @ 02438aa4 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c645 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
                    /* catch() { ... } // from try @ 02438cbc with catch @ 02438cfc */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02438ca4 with catch @ 02438d00 */
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
                    /* try { // try from 02438d14 to 02538d17 has its CatchHandler @ 02438dcc */
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 02438d50 to 02538d57 has its CatchHandler @ 02438de4 */
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar3 = *(long *)(param_1 + 0x48);
                    /* try { // try from 02438d58 to 02538da7 has its CatchHandler @ 02438aa4 */
        UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(param_1 + 0x40),0);
        if (lVar3 != 0) {
          if ((bRam0000000004fa8a88 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7bc8,0);
            bRam0000000004fa8a88 = 1;
          }
          if (lVar3 != 0) {
            lVar3 = *(long *)(lVar3 + 0x10);
            if (lVar3 != 0) {
              if (pcRam0000000004fa8ad0 == (code *)0x0) {
                pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
              }
              (*pcRam0000000004fa8ad0)(lVar3,&stack0xffffffffffffffe8);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

