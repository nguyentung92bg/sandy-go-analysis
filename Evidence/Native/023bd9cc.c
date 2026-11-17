/* IL2CPP: Dino.BusSand.App.UI.TipsToast.<>c__DisplayClass6_0$$<Leave>b__0
void Dino_BusSand_App_UI_TipsToast___c__DisplayClass6_0___Leave_b__0 (Dino_BusSand_App_UI_TipsToast___c__DisplayClass6_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TipsToast.<>c__DisplayClass6_0$$<Leave>b__0
   void Dino_BusSand_App_UI_TipsToast___c__DisplayClass6_0___Leave_b__0
   (Dino_BusSand_App_UI_TipsToast___c__DisplayClass6_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_TipsToast___c__DisplayClass6_0___Leave_b__0_22bd9cc
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c318 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c318 = 1;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(char *)(param_3 + 0x18) == '\0') {
    *(undefined1 *)(param_3 + 0x18) = 1;
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_023bdb00;
    uVar5 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(param_3 + 0x28),0);
    *(undefined4 *)(param_3 + 0x1c) = uVar5;
    *(undefined4 *)(param_3 + 0x20) = param_2;
  }
  lVar4 = *(long *)(param_3 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar6 = (float)Dino_BusSand_App_UI_UiMotion__InQuad_228fdd0(param_1,0);
  if (lVar4 != 0) {
    UnityEngine_CanvasGroup__set_alpha_467ad3c(1.0 - fVar6,lVar4,0);
    lVar4 = *(long *)(param_3 + 0x28);
    Dino_BusSand_App_UI_UiMotion__OutQuad_228a4fc(param_1,0);
    if (lVar4 != 0) {
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
  }
LAB_023bdb00:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

