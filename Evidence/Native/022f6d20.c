/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$PlayFinishFlagAnim
void Dino_BusSand_App_UI_YachtRacingTrackRow__PlayFinishFlagAnim (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$PlayFinishFlagAnim
   void Dino_BusSand_App_UI_YachtRacingTrackRow__PlayFinishFlagAnim
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingTrackRow__PlayFinishFlagAnim_21f6d20(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000004f9bc3c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1760);
    bRam0000000004f9bc3c = 1;
  }
  plVar5 = (long *)(param_1 + 0xd0);
  if (*plVar5 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar5,0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    thunk_FUN_02134474(plVar5,0);
  }
  Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x48),0);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar6 = 0x58;
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x2c) != '\0') {
      lVar6 = 0x50;
    }
    lVar6 = *(long *)(param_1 + lVar6);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar6 != 0) {
      lVar4 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      UnityEngine_Transform__set_localScale_43d1be0
                (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                 *(undefined4 *)(lVar4 + 0x14),lVar6,0);
      puVar1 = PTR_DAT_04cb1760;
      lVar4 = *(long *)PTR_DAT_04cb1760;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar1;
      }
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                (**(undefined4 **)(lVar4 + 0xb8),(*(undefined4 **)(lVar4 + 0xb8))[1],lVar6,0);
      lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
      if (lVar4 != 0) {
        UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
        uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
        if ((uVar2 & 1) != 0) {
          uVar3 = Dino_BusSand_App_UI_YachtRacingTrackRow__FlagDrop_21f6f18(param_1,lVar6);
          uVar3 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar3,0);
          *(undefined8 *)(param_1 + 0xd0) = uVar3;
          if (iRam00000000051c1b10 != 0) {
            FUN_02220bf0(1L << ((ulong)plVar5 >> 0xc & 0x3f),
                         ((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
          }
          return;
        }
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        if ((bRam0000000004fa8a88 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7bc8,0);
          bRam0000000004fa8a88 = 1;
        }
        if (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 != 0) {
            if (pcRam0000000004fa8ad0 == (code *)0x0) {
              pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
            }
            (*pcRam0000000004fa8ad0)(lVar6,&stack0xffffffffffffffe8);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

