/* IL2CPP: Dino.BusSand.App.UI.HomePanel.<>c__DisplayClass48_0$$<PlayWinStreakPlus>b__0
void Dino_BusSand_App_UI_HomePanel___c__DisplayClass48_0___PlayWinStreakPlus_b__0 (Dino_BusSand_App_UI_HomePanel___c__DisplayClass48_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel.<>c__DisplayClass48_0$$<PlayWinStreakPlus>b__0
   void Dino_BusSand_App_UI_HomePanel___c__DisplayClass48_0___PlayWinStreakPlus_b__0
   (Dino_BusSand_App_UI_HomePanel___c__DisplayClass48_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_HomePanel___c__DisplayClass48_0___PlayWinStreakPlus_b__0_22ee098
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c457 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c457 = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar5 = *(long *)(param_2 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar6 = (float)Dino_BusSand_App_UI_UiMotion__OutCubic_2287f20(param_1,0);
  if (lVar5 != 0) {
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (0x42f30000,fVar6 * 90.0 + -414.0,lVar5,0);
    lVar5 = *(long *)(param_2 + 0x18);
    fVar6 = 1.0;
    if (_UNK_00e20994 <= param_1) {
      fVar6 = (param_1 + _UNK_00e204e4) / _UNK_00e20864 + 1.0;
    }
    if (lVar5 != 0) {
      if ((bRam0000000004fac320 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04d09bf8,0);
        bRam0000000004fac320 = 1;
      }
      if (lVar5 != 0) {
        lVar3 = *(long *)(lVar5 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
        }
        if (pcRam0000000004fac330 == (code *)0x0) {
          pcRam0000000004fac330 = (code *)FUN_02132f40(&UNK_00e648e1);
        }
                    /* WARNING: Could not recover jumptable at 0x0477adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fac330)(fVar6,lVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

