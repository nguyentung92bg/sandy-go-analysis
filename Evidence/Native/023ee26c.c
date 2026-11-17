/* IL2CPP: Dino.BusSand.App.UI.HomePanel.<>c__DisplayClass48_0$$<PlayWinStreakPlus>b__2
void Dino_BusSand_App_UI_HomePanel___c__DisplayClass48_0___PlayWinStreakPlus_b__2 (Dino_BusSand_App_UI_HomePanel___c__DisplayClass48_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePanel.<>c__DisplayClass48_0$$<PlayWinStreakPlus>b__2
   void Dino_BusSand_App_UI_HomePanel___c__DisplayClass48_0___PlayWinStreakPlus_b__2
   (Dino_BusSand_App_UI_HomePanel___c__DisplayClass48_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_HomePanel___c__DisplayClass48_0___PlayWinStreakPlus_b__2_22ee26c
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c445 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c445 = 1;
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x90);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar3 + 0x90);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004fa8a8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7bc8,0);
    bRam0000000004fa8a8a = 1;
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 != 0) {
      if (pcRam0000000004fa8ae0 == (code *)0x0) {
        pcRam0000000004fa8ae0 = (code *)FUN_02132f40(&UNK_00e51f73);
      }
      (*pcRam0000000004fa8ae0)(lVar3,&stack0xffffffffffffffe8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

