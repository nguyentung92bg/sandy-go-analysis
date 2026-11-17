/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass28_0$$<SlideIn>b__3
void Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0___SlideIn_b__3 (Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass28_0$$<SlideIn>b__3
   void Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0___SlideIn_b__3
   (Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0___SlideIn_b__3_2291f14(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c1d1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c1d1 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
      puVar1 = (undefined4 *)(param_1 + 0x28);
      puVar2 = (undefined4 *)(param_1 + 0x2c);
    }
    else {
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      puVar1 = (undefined4 *)(lVar5 + 0x20);
      puVar2 = (undefined4 *)(lVar5 + 0x24);
    }
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_02391ffc;
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (*puVar1,*puVar2,*(long *)(param_1 + 0x18),0);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    if ((bRam0000000004fac320 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04d09bf8,0);
      bRam0000000004fac320 = 1;
    }
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
      }
      if (pcRam0000000004fac330 == (code *)0x0) {
        pcRam0000000004fac330 = (code *)FUN_02132f40(&UNK_00e648e1);
      }
                    /* WARNING: Could not recover jumptable at 0x0477adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fac330)(0x3f800000,lVar6);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02391ffc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

