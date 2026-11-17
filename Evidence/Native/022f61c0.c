/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$InitYachtPos
void Dino_BusSand_App_UI_YachtRacingTrackRow__InitYachtPos (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$InitYachtPos
   void Dino_BusSand_App_UI_YachtRacingTrackRow__InitYachtPos
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingTrackRow__InitYachtPos_21f61c0(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((bRam0000000004f9bc37 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc37 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  if (*(char *)(param_1 + 0x34) != '\0') {
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(uVar8,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8
                (*(undefined8 *)(param_1 + 0x50),*(undefined1 *)(*(long *)(param_1 + 0x20) + 0x2c));
      if (*(long *)(param_1 + 0x20) != 0) {
        Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8
                  (*(undefined8 *)(param_1 + 0x58),
                   *(char *)(*(long *)(param_1 + 0x20) + 0x2c) == '\0');
        puVar1 = PTR_DAT_04ca9ae8;
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_022f630c;
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
        if ((lVar7 == 0) ||
           (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar6 == 0)) {
LAB_022f61bc:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        bVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar6,0);
        if ((bool)(bVar3 & 1) == bVar2) {
          return;
        }
        lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
        if (lVar7 == 0) goto LAB_022f61bc;
        goto UnityEngine_GameObject__SetActive_43c1408;
      }
    }
LAB_022f630c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x48);
    if (lVar7 == 0) goto LAB_022f630c;
    auVar9 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar7,0);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_022f630c;
    fVar10 = (float)*(int *)(*(long *)(param_1 + 0x20) + 0x18) / (float)*(int *)(param_1 + 0x28);
    fVar12 = 1.0;
    if (fVar10 <= 1.0) {
      fVar12 = fVar10;
    }
    fVar11 = 0.0;
    if (0.0 <= fVar10) {
      fVar11 = fVar12;
    }
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (auVar9,*(float *)(param_1 + 0x30) * fVar11 + 472.0,lVar7,0);
  }
  Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f6568(*(undefined8 *)(param_1 + 0xa8),1);
  puVar1 = PTR_DAT_04ca9ae8;
  lVar7 = *(long *)(param_1 + 0xb0);
  if ((bRam0000000004f9bc51 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc51 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar7,0);
    bVar2 = false;
    if ((uVar4 & 1) != 0) {
UnityEngine_GameObject__SetActive_43c1408:
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,bVar2,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = *(long *)(lVar7 + 0x10);
      if (lVar6 != 0) {
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar6,bVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
    }
  }
  return;
}

