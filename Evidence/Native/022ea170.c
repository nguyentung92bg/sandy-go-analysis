/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton.<>c__DisplayClass41_0$$<ProgressAnim>b__3
void Dino_BusSand_App_UI_YachtRacingHallButton___c__DisplayClass41_0___ProgressAnim_b__3 (Dino_BusSand_App_UI_YachtRacingHallButton___c__DisplayClass41_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton.<>c__DisplayClass41_0$$<ProgressAnim>b__3
   void Dino_BusSand_App_UI_YachtRacingHallButton___c__DisplayClass41_0___ProgressAnim_b__3
   (Dino_BusSand_App_UI_YachtRacingHallButton___c__DisplayClass41_0_o* __this, float k, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingHallButton___c__DisplayClass41_0___ProgressAnim_b__3_21ea170
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022ea190 to 023ea197 has its CatchHandler @ 022ea1f4 */
  if ((bRam0000000004f9bbee & 1) == 0) {
                    /* try { // try from 022ea198 to 023ea223 has its CatchHandler @ 022ea0f8 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bbee = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004fa8b3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b3e = 1;
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 != 0) {
      if (pcRam0000000004fa8bf0 == (code *)0x0) {
        pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
      }
      (*pcRam0000000004fa8bf0)(lVar3,&stack0xffffffffffffffd4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

