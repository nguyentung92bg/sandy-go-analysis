/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass26_0$$<Appear>b__1
void Dino_BusSand_App_UI_UiMotion___c__DisplayClass26_0___Appear_b__1 (Dino_BusSand_App_UI_UiMotion___c__DisplayClass26_0_o* __this, UnityEngine_Vector3_o s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass26_0$$<Appear>b__1
   void Dino_BusSand_App_UI_UiMotion___c__DisplayClass26_0___Appear_b__1
   (Dino_BusSand_App_UI_UiMotion___c__DisplayClass26_0_o* __this, UnityEngine_Vector3_o s, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UiMotion___c__DisplayClass26_0___Appear_b__1_2291908
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9c1cc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c1cc = 1;
  }
  lVar3 = *(long *)(param_4 + 0x10);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined4 *)(lVar3 + 0x20) = param_1;
    puVar1 = PTR_DAT_04ca9ae8;
    *(undefined4 *)(lVar3 + 0x24) = param_2;
    *(undefined4 *)(lVar3 + 0x28) = param_3;
    uVar4 = *(undefined8 *)(param_4 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(param_4 + 0x18);
    if (lVar3 != 0) {
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

