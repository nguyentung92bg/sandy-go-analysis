/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow.<>c__DisplayClass49_0$$<FlagDrop>b__0
void Dino_BusSand_App_UI_YachtRacingTrackRow___c__DisplayClass49_0___FlagDrop_b__0 (Dino_BusSand_App_UI_YachtRacingTrackRow___c__DisplayClass49_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow.<>c__DisplayClass49_0$$<FlagDrop>b__0
   void Dino_BusSand_App_UI_YachtRacingTrackRow___c__DisplayClass49_0___FlagDrop_b__0
   (Dino_BusSand_App_UI_YachtRacingTrackRow___c__DisplayClass49_0_o* __this, float k, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingTrackRow___c__DisplayClass49_0___FlagDrop_b__0_21f71c4
               (undefined4 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc40 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc40 = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(param_2 + 0x10);
    if (lVar4 != 0) {
      UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar4,0);
      if (*(long *)(param_2 + 0x20) != 0) {
        UnityEngine_AnimationCurve__Evaluate_43514d8(param_1,*(long *)(param_2 + 0x20),0);
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
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

