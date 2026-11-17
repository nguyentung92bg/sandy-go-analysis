/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<>c__DisplayClass20_0$$<MoveItem>b__0
void Dino_BusSand_App_UI_YachtRacingRewardPanel___c__DisplayClass20_0___MoveItem_b__0 (Dino_BusSand_App_UI_YachtRacingRewardPanel___c__DisplayClass20_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<>c__DisplayClass20_0$$<MoveItem>b__0
   void Dino_BusSand_App_UI_YachtRacingRewardPanel___c__DisplayClass20_0___MoveItem_b__0
   (Dino_BusSand_App_UI_YachtRacingRewardPanel___c__DisplayClass20_0_o* __this, float k, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingRewardPanel___c__DisplayClass20_0___MoveItem_b__0_21f0480
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc1c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc1c = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 022f04cc to 023f04d3 has its CatchHandler @ 022f063c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022f04d4 to 023f054b has its CatchHandler @ 022f03d4 */
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        UnityEngine_Transform__get_position_43d0e48(*(long *)(param_1 + 0x18),0);
        if (lVar4 != 0) {
          if ((bRam0000000004fa8b31 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7a00,0);
            bRam0000000004fa8b31 = 1;
          }
          if (lVar4 != 0) {
            lVar4 = *(long *)(lVar4 + 0x10);
            if (lVar4 != 0) {
              if (pcRam0000000004fa8b88 == (code *)0x0) {
                pcRam0000000004fa8b88 = (code *)FUN_02132f40(&UNK_00e68510);
              }
              (*pcRam0000000004fa8b88)(lVar4,&stack0xffffffffffffffd4);
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

