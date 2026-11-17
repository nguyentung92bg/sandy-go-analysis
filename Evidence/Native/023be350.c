/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$OnEndDrag
void Dino_BusSand_App_UI_ContinueBottomPager__OnEndDrag (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$OnEndDrag
   void Dino_BusSand_App_UI_ContinueBottomPager__OnEndDrag
   (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, UnityEngine_EventSystems_PointerEventData_o*
   e, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPager__OnEndDrag_22be350(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c322 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c322 = 1;
  }
  lVar4 = *(long *)puVar1;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    fVar7 = (float)UnityEngine_UI_ScrollRect__get_horizontalNormalizedPosition_469048c
                             (*(long *)(param_1 + 0x38),0);
    lVar4 = *(long *)(param_1 + 0x38);
    fVar8 = 1.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7;
    }
    fVar9 = 0.0;
    if (0.0 <= fVar7) {
      fVar9 = fVar8;
    }
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0xb8) = **(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
      iVar2 = Dino_BusSand_App_UI_ContinueBottomPager__get_PageCount_22bdf80(param_1);
      if (iVar2 < 2) {
        uVar3 = 0;
      }
      else {
        uVar3 = Dino_BusSand_App_UI_EndOfLevelRules__PageAfterRelease_22be490
                          (fVar9,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x24));
      }
      Dino_BusSand_App_UI_ContinueBottomPager__GoToPage_22be6b8(0xbf800000,param_1,uVar3,1);
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x023be478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

