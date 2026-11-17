/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass23_0$$<Punch>b__0
void Dino_BusSand_App_UI_UiMotion___c__DisplayClass23_0___Punch_b__0 (Dino_BusSand_App_UI_UiMotion___c__DisplayClass23_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass23_0$$<Punch>b__0
   void Dino_BusSand_App_UI_UiMotion___c__DisplayClass23_0___Punch_b__0
   (Dino_BusSand_App_UI_UiMotion___c__DisplayClass23_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_UiMotion___c__DisplayClass23_0___Punch_b__0_229162c
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c1c9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c1c9 = 1;
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
  func_0x049b5320(param_1 * _UNK_00e208fc);
  func_0x049b5300(1.0 - param_1,_UNK_00e205ec);
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

