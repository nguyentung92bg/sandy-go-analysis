/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton.<>c__DisplayClass41_0$$<ProgressAnim>b__1
void Dino_BusSand_App_UI_YachtRacingHallButton___c__DisplayClass41_0___ProgressAnim_b__1 (Dino_BusSand_App_UI_YachtRacingHallButton___c__DisplayClass41_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton.<>c__DisplayClass41_0$$<ProgressAnim>b__1
   void Dino_BusSand_App_UI_YachtRacingHallButton___c__DisplayClass41_0___ProgressAnim_b__1
   (Dino_BusSand_App_UI_YachtRacingHallButton___c__DisplayClass41_0_o* __this, float k, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingHallButton___c__DisplayClass41_0___ProgressAnim_b__1_21e9f8c
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 022e9f38 with catch @ 022e9f9c */
  if ((bRam0000000004f9bbec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bbec = 1;
  }
                    /* try { // try from 022e9fcc to 023ea063 has its CatchHandler @ 022e9fcc
                       catch() { ... } // from try @ 022e9fcc with catch @ 022e9fcc
                       catch() { ... } // from try @ 022ea06c with catch @ 022e9fcc */
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 022ea06c to 023ea0f7 has its CatchHandler @ 022e9fcc */
    return;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (cRam0000000004f9b65e == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65e = '\x01';
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004fa8b3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b3e = 1;
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      if (pcRam0000000004fa8bf0 == (code *)0x0) {
        pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
      }
      (*pcRam0000000004fa8bf0)(lVar4,&stack0xffffffffffffffd4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

