/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$FadeTagUnderTopBar
void Dino_BusSand_App_UI_HudPanel__FadeTagUnderTopBar (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$FadeTagUnderTopBar
   void Dino_BusSand_App_UI_HudPanel__FadeTagUnderTopBar (Dino_BusSand_App_UI_HudPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__FadeTagUnderTopBar_230b07c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
                    /* try { // try from 0240b090 to 0250b093 has its CatchHandler @ 0240b0b4 */
                    /* try { // try from 0240b094 to 0250b0b7 has its CatchHandler @ 0240aea0 */
  if ((bRam0000000004f9c514 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf420);
                    /* catch() { ... } // from try @ 0240b090 with catch @ 0240b0b4 */
                    /* try { // try from 0240b0b8 to 0250b0bf has its CatchHandler @ 0240b0c8 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0240b0c0 to 0250b0cb has its CatchHandler @ 0240aea0 */
    bRam0000000004f9c514 = 1;
  }
  puVar3 = PTR_DAT_04caf420;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0240b0b8 with catch @ 0240b0c8
                        */
  if (*(long *)(param_1 + 0xe0) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caf420 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c1d2 == '\0') {
    FUN_02132f7c(PTR_DAT_04caf420);
    cRam0000000004f9c1d2 = '\x01';
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  iVar1 = **(int **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar6 & 1) == 0) {
LAB_0240b1f0:
    bVar4 = false;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 == 0) goto LAB_0240b4d8;
    if (*(int *)(lVar5 + 0x20) == 4) {
LAB_0240b16c:
      bVar4 = true;
    }
    else {
      uVar8 = *(undefined8 *)(lVar5 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
      if ((uVar6 & 1) != 0) {
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x38), lVar5 == 0)) goto LAB_0240b4d8;
        uVar6 = Dino_BusSand_View_GameView__get_FinalePlaying_23a9c88(lVar5,0);
        if ((uVar6 & 1) != 0) goto LAB_0240b16c;
      }
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0240b4d8;
      lVar5 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                        (*(long *)(param_1 + 0x40),0);
      if (lVar5 == 0) goto LAB_0240b1f0;
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (lVar5 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                            (*(long *)(param_1 + 0x40),0), lVar5 == 0)) goto LAB_0240b4d8;
      bVar4 = *(char *)(lVar5 + 0x81) != '\0';
    }
  }
  if (0 < iVar1) {
    bVar4 = true;
  }
  fVar15 = *(float *)(param_1 + 0xf0);
  fVar12 = 0.0;
  if (!bVar4) {
    fVar12 = 1.0;
  }
  if (cRam0000000004f9c305 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb5bf8);
    cRam0000000004f9c305 = '\x01';
  }
  puVar3 = PTR_DAT_04cb5bf8;
  fVar11 = _UNK_00e20900;
  fVar10 = ABS(fVar15);
  if (fVar10 <= fVar12) {
    fVar10 = fVar12;
  }
  fVar14 = **(float **)(*(long *)PTR_DAT_04cb5bf8 + 0xb8) * 8.0;
  fVar16 = fVar10 * _UNK_00e20900;
  if (fVar10 * _UNK_00e20900 <= fVar14) {
    fVar16 = fVar14;
  }
  if (fVar16 <= ABS(fVar12 - fVar15)) {
    fVar16 = *(float *)(param_1 + 0xf0);
    fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    lVar5 = *(long *)(param_1 + 0xe0);
    fVar10 = fVar10 / _UNK_00e20328;
    fVar15 = -fVar10;
    if (0.0 <= fVar12 - fVar16) {
      fVar15 = fVar10;
    }
    fVar15 = fVar16 + fVar15;
    if (ABS(fVar12 - fVar16) <= fVar10) {
      fVar15 = fVar12;
    }
    *(float *)(param_1 + 0xf0) = fVar15;
    if (lVar5 == 0) goto LAB_0240b4d8;
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar6 = 0;
      uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar9 = *(long *)(lVar5 + 0x20 + uVar6 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
        if ((uVar7 & 1) != 0) {
          if (lVar9 == 0) goto LAB_0240b4d8;
          UnityEngine_CanvasGroup__set_alpha_467ad3c(*(undefined4 *)(param_1 + 0xf0),lVar9,0);
        }
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0xe8);
  fVar12 = 0.0;
  if (iVar1 < 1) {
    fVar12 = 1.0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    fVar15 = (float)UnityEngine_CanvasGroup__get_alpha_467ac88(*(long *)(param_1 + 0xe8),0);
    if (cRam0000000004f9c305 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb5bf8);
      cRam0000000004f9c305 = '\x01';
    }
    fVar16 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
    fVar10 = ABS(fVar15);
    if (ABS(fVar15) <= fVar12) {
      fVar10 = fVar12;
    }
    fVar14 = fVar10 * fVar11;
    if (fVar10 * fVar11 <= fVar16) {
      fVar14 = fVar16;
    }
    if (ABS(fVar12 - fVar15) < fVar14) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0xe8);
    if (lVar5 != 0) {
      fVar11 = (float)UnityEngine_CanvasGroup__get_alpha_467ac88(lVar5,0);
      fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      fVar10 = fVar10 / _UNK_00e20328;
      fVar15 = -fVar10;
      if (0.0 <= fVar12 - fVar11) {
        fVar15 = fVar10;
      }
      fVar15 = fVar11 + fVar15;
      if (ABS(fVar12 - fVar11) <= fVar10) {
        fVar15 = fVar12;
      }
      UnityEngine_CanvasGroup__set_alpha_467ad3c(fVar15,lVar5,0);
      lVar5 = *(long *)(param_1 + 0xe8);
      if (lVar5 != 0) {
        fVar12 = (float)UnityEngine_CanvasGroup__get_alpha_467ac88(lVar5,0);
        UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar5,0.5 < fVar12,0);
        uVar8 = *(undefined8 *)(param_1 + 0x108);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
        if ((uVar6 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0xe8) != 0) {
          lVar5 = *(long *)(param_1 + 0x108);
          uVar13 = UnityEngine_CanvasGroup__get_alpha_467ac88(*(long *)(param_1 + 0xe8),0);
          if (lVar5 != 0) {
            if ((bRam0000000004fac320 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04d09bf8,0);
              bRam0000000004fac320 = 1;
            }
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar9 = *(long *)(lVar5 + 0x10);
            if (lVar9 != 0) {
              if (pcRam0000000004fac330 == (code *)0x0) {
                pcRam0000000004fac330 = (code *)FUN_02132f40(&UNK_00e648e1);
              }
                    /* WARNING: Could not recover jumptable at 0x0477adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fac330)(uVar13,lVar9);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
          }
        }
      }
    }
  }
LAB_0240b4d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

