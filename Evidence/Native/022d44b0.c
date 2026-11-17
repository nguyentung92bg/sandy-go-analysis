/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$ScrollToCurrent
void Dino_BusSand_App_UI_PassportPanel__ScrollToCurrent (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$ScrollToCurrent
   void Dino_BusSand_App_UI_PassportPanel__ScrollToCurrent (Dino_BusSand_App_UI_PassportPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__ScrollToCurrent_21d44b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  
                    /* try { // try from 022d44b4 to 023d4513 has its CatchHandler @ 022d43f8 */
  iVar4 = Dino_BusSand_App_UI_PassportPanel__get_LastUnlocked_21d5284();
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_022d4540;
  uVar5 = Dino_BusSand_App_Meta_PassportFeature__IsReachBonusBank_2246e10
                    (*(long *)(param_1 + 0x40),0);
  if (iVar4 < 1) {
    if (*(long *)(param_1 + 0x40) == 0) {
LAB_022d4540:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar4 = Dino_BusSand_App_Meta_PassportFeature__get_PendingKeys_2246980
                      (*(long *)(param_1 + 0x40),0);
    lVar9 = *(long *)(param_1 + 0x40);
    if (lVar9 == 0) goto LAB_022d4540;
                    /* try { // try from 022d4514 to 023d452b has its CatchHandler @ 022d466c */
    uVar6 = Dino_BusSand_App_Meta_PassportFeature__get_CurrentStageIndex_22468d0(lVar9,0);
    iVar7 = Dino_BusSand_App_Meta_PassportFeature__StageKeyCost_2246a60(lVar9,uVar6,0);
                    /* try { // try from 022d452c to 023d455b has its CatchHandler @ 022d43f8 */
    uVar5 = (uint)(iVar7 <= iVar4);
  }
  else {
    uVar5 = iVar4 + (uVar5 & 1) + 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb52 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caead0);
    FUN_02132f7c(PTR_DAT_04caea30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9bb52 = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
  if ((uVar8 & 1) == 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
    if ((uVar8 & 1) == 0) {
      lVar9 = Dino_BusSand_App_UI_PassportPanel__Layout_21d4ecc(param_1);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) == 0) {
          return;
        }
        uVar2 = *(int *)(lVar9 + 0x18) - 1;
        uVar1 = uVar5;
        if ((int)uVar2 <= (int)uVar5) {
          uVar1 = uVar2;
        }
        uVar2 = 0;
        if (-1 < (int)uVar5) {
          uVar2 = uVar1;
        }
        UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
        if (*(long *)(param_1 + 0x58) != 0) {
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x40);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
          lVar10 = *(long *)(param_1 + 0x58);
          if ((uVar8 & 1) == 0) {
            if ((lVar10 == 0) ||
               (plVar11 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar10,0),
               plVar11 == (long *)0x0)) goto LAB_022d55c8;
            if (*plVar11 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4();
            }
          }
          else if ((lVar10 == 0) || (plVar11 = *(long **)(lVar10 + 0x40), plVar11 == (long *)0x0))
          goto LAB_022d55c8;
          UnityEngine_RectTransform__get_rect_43cf450(plVar11,0);
          System_Collections_Generic_List_float___get_Item_3ac25c4
                    (lVar9,uVar2,*(undefined8 *)PTR_DAT_04caea30);
          if (*(long *)(param_1 + 0x50) != 0) {
            UnityEngine_RectTransform__get_sizeDelta_43cf9ac(*(long *)(param_1 + 0x50),0);
            lVar9 = *(long *)(param_1 + 0x50);
            if (lVar9 != 0) {
              UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar9,0);
              if ((bRam0000000004fa8a88 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf7bc8,0);
                bRam0000000004fa8a88 = 1;
              }
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar9 = *(long *)(lVar9 + 0x10);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
              }
              if (pcRam0000000004fa8ad0 == (code *)0x0) {
                pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
              }
              (*pcRam0000000004fa8ad0)(lVar9,&stack0xffffffffffffffe8);
              return;
            }
          }
        }
      }
LAB_022d55c8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

