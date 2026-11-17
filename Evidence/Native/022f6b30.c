/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$OnForwardComplete
void Dino_BusSand_App_UI_YachtRacingTrackRow__OnForwardComplete (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, bool finish, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$OnForwardComplete
   void Dino_BusSand_App_UI_YachtRacingTrackRow__OnForwardComplete
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, bool finish, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingTrackRow__OnForwardComplete_21f6b30(long param_1,ulong param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x68);
    uVar4 = System_Int32__ToString_482d750(*(long *)(param_1 + 0x20) + 0x14,0);
    Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar8,uVar4);
    if (*(long *)(param_1 + 0x20) != 0) {
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8
                (*(undefined8 *)(param_1 + 0x80),*(int *)(*(long *)(param_1 + 0x20) + 0x28) == 1);
      if ((param_2 & 1) == 0) {
        Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f6568(*(undefined8 *)(param_1 + 0xa8),1);
        plVar6 = (long *)(param_1 + 0xd8);
        if (*plVar6 != 0) {
          UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar6,0);
        }
        uVar4 = Dino_BusSand_App_UI_YachtRacingTrackRow__FadeMoveEff_21f6bf8(param_1);
        uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar4,0);
        *(undefined8 *)(param_1 + 0xd8) = uVar4;
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)plVar6 >> 0xc & 0x3f),
                       ((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f6568(*(undefined8 *)(param_1 + 0xa8),0);
      puVar1 = PTR_DAT_04ca9ae8;
      lVar5 = *(long *)(param_1 + 0xb0);
      if ((bRam0000000004f9bc51 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9bc51 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar5,0);
        if ((uVar2 & 1) != 0) {
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar5 != 0) {
            lVar7 = *(long *)(lVar5 + 0x10);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
            }
            if (pcRam0000000004fa8430 == (code *)0x0) {
              pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
            }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8430)(lVar7,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

