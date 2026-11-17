/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$RefreshGoldMedal
void Dino_BusSand_App_UI_YachtRacingTrackRow__RefreshGoldMedal (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$RefreshGoldMedal
   void Dino_BusSand_App_UI_YachtRacingTrackRow__RefreshGoldMedal
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingTrackRow__RefreshGoldMedal_21f67b0(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((uVar5 & 1) != 0) {
    plVar8 = (long *)(param_1 + 0xe0);
    if (*plVar8 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar8,0);
    }
    uVar6 = Dino_BusSand_App_UI_YachtRacingTrackRow__GoldMedalLater_21f6c8c(param_1);
    uVar6 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar6,0);
    *(undefined8 *)(param_1 + 0xe0) = uVar6;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar8 >> 0xc & 0x3f),
                   ((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = *(long *)(param_1 + 0x80);
  bVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x28) == 1;
  if ((bRam0000000004f9bc50 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc50 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((lVar7 != 0) && (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar4 != 0))
  {
    bVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar4,0);
    if ((bool)(bVar3 & 1) == bVar2) {
      return;
    }
    lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
    if (lVar7 != 0) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,bVar2,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar4 = *(long *)(lVar7 + 0x10);
      if (lVar4 != 0) {
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar4,bVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

