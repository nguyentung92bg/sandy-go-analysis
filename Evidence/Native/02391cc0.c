/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass28_0$$<SlideIn>b__1
void Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0___SlideIn_b__1 (Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0_o* __this, UnityEngine_Vector2_o p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass28_0$$<SlideIn>b__1
   void Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0___SlideIn_b__1
   (Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0_o* __this, UnityEngine_Vector2_o p, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0___SlideIn_b__1_2291cc0
               (float param_1,float param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fStack_18;
  float fStack_14;
  
  if ((bRam0000000004f9c1cf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c1cf = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)(param_3 + 0x10);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(float *)(lVar3 + 0x20) = param_1;
    *(float *)(lVar3 + 0x24) = param_2;
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(param_3 + 0x18);
    if (lVar3 != 0) {
      fStack_14 = param_2 + *(float *)(param_3 + 0x24);
      fStack_18 = param_1 + *(float *)(param_3 + 0x20);
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
          (*pcRam0000000004fa8ad0)(lVar3,&fStack_18);
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

