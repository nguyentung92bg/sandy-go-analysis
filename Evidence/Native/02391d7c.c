/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass28_0$$<SlideIn>b__2
void Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0___SlideIn_b__2 (Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass28_0$$<SlideIn>b__2
   void Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0___SlideIn_b__2
   (Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_UiMotion___c__DisplayClass28_0___SlideIn_b__2_2291d7c
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c1d0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1d0 = 1;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(param_2 + 0x18);
  if (lVar3 == 0) {
    pfVar4 = (float *)(param_2 + 0x28);
    pfVar5 = (float *)(param_2 + 0x2c);
  }
  else {
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    pfVar4 = (float *)(lVar3 + 0x20);
    pfVar5 = (float *)(lVar3 + 0x24);
  }
  fVar12 = *(float *)(param_2 + 0x20);
  fVar13 = *(float *)(param_2 + 0x24);
  fVar10 = *pfVar4;
  fVar11 = *pfVar5;
  if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (lVar6 != 0) {
    fVar8 = 1.0;
    if (param_1 <= 1.0) {
      fVar8 = param_1;
    }
    fVar9 = 1.0;
    if (0.0 <= param_1) {
      fVar9 = 1.0 - fVar8;
    }
    fVar8 = fVar9 * fVar9 * fVar9 + -1.0 + 1.0;
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (fVar10 + fVar8 * fVar12,fVar11 + fVar8 * fVar13,lVar6,0);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(param_2 + 0x30);
    if (lVar3 != 0) {
      param_1 = param_1 * 3.0;
      fVar10 = 1.0;
      if (param_1 <= 1.0) {
        fVar10 = param_1;
      }
      fVar11 = 0.0;
      if (0.0 <= param_1) {
        fVar11 = fVar10;
      }
      if ((bRam0000000004fac320 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04d09bf8,0);
        bRam0000000004fac320 = 1;
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = *(long *)(lVar3 + 0x10);
      if (lVar6 != 0) {
        if (pcRam0000000004fac330 == (code *)0x0) {
          pcRam0000000004fac330 = (code *)FUN_02132f40(&UNK_00e648e1);
        }
                    /* WARNING: Could not recover jumptable at 0x0477adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fac330)(fVar11,lVar6);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

