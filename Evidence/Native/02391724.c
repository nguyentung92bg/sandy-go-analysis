/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass25_0$$<Shake>b__0
void Dino_BusSand_App_UI_UiMotion___c__DisplayClass25_0___Shake_b__0 (Dino_BusSand_App_UI_UiMotion___c__DisplayClass25_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass25_0$$<Shake>b__0
   void Dino_BusSand_App_UI_UiMotion___c__DisplayClass25_0___Shake_b__0
   (Dino_BusSand_App_UI_UiMotion___c__DisplayClass25_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_UiMotion___c__DisplayClass25_0___Shake_b__0_2291724
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c1ca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c1ca = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  func_0x049b5320(param_1 * _UNK_00e2082c * 7.0);
  if ((bRam0000000004fa8a88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7bc8,0);
    bRam0000000004fa8a88 = 1;
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      if (pcRam0000000004fa8ad0 == (code *)0x0) {
        pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
      }
      (*pcRam0000000004fa8ad0)(lVar4,&stack0xffffffffffffffe8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

