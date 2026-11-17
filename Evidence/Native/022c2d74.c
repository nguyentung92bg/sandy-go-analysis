/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<>c__DisplayClass32_0$$<GrowGreen>b__0
void Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass32_0___GrowGreen_b__0 (Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass32_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<>c__DisplayClass32_0$$<GrowGreen>b__0
   void Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass32_0___GrowGreen_b__0
   (Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass32_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass32_0___GrowGreen_b__0_21c2d74
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f9baee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9baee = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
                    /* catch() { ... } // from try @ 022c2ca4 with catch @ 022c2de0 */
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x60), lVar2 != 0)) {
      if ((bRam0000000004fa8a8a & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7bc8,0);
        bRam0000000004fa8a8a = 1;
      }
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 != 0) {
          if (pcRam0000000004fa8ae0 == (code *)0x0) {
            pcRam0000000004fa8ae0 = (code *)FUN_02132f40(&UNK_00e51f73);
          }
          (*pcRam0000000004fa8ae0)(lVar2,&stack0xffffffffffffffe8);
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

