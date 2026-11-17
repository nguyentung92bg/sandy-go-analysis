/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$ScrollTo
void Dino_BusSand_App_UI_PassportPanel__ScrollTo (Dino_BusSand_App_UI_PassportPanel_o* __this, int32_t listIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$ScrollTo
   void Dino_BusSand_App_UI_PassportPanel__ScrollTo (Dino_BusSand_App_UI_PassportPanel_o* __this,
   int32_t listIndex, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__ScrollTo_21d53d0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb52 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caead0);
    FUN_02132f7c(PTR_DAT_04caea30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9bb52 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = Dino_BusSand_App_UI_PassportPanel__Layout_21d4ecc(param_1);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) {
          return;
        }
        iVar2 = *(int *)(lVar5 + 0x18) + -1;
        iVar1 = param_2;
        if (iVar2 <= param_2) {
          iVar1 = iVar2;
        }
        iVar2 = 0;
        if (-1 < param_2) {
          iVar2 = iVar1;
        }
        UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
        if (*(long *)(param_1 + 0x58) != 0) {
          uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x40);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
          lVar6 = *(long *)(param_1 + 0x58);
          if ((uVar4 & 1) == 0) {
            if ((lVar6 == 0) ||
               (plVar7 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar6,0),
               plVar7 == (long *)0x0)) goto LAB_022d55c8;
            if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4();
            }
          }
          else if ((lVar6 == 0) || (plVar7 = *(long **)(lVar6 + 0x40), plVar7 == (long *)0x0))
          goto LAB_022d55c8;
          UnityEngine_RectTransform__get_rect_43cf450(plVar7,0);
          System_Collections_Generic_List_float___get_Item_3ac25c4
                    (lVar5,iVar2,*(undefined8 *)PTR_DAT_04caea30);
          if (*(long *)(param_1 + 0x50) != 0) {
            UnityEngine_RectTransform__get_sizeDelta_43cf9ac(*(long *)(param_1 + 0x50),0);
            lVar5 = *(long *)(param_1 + 0x50);
            if (lVar5 != 0) {
                    /* try { // try from 022d557c to 023d570f has its CatchHandler @ 022d5778 */
              UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar5,0);
              if ((bRam0000000004fa8a88 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf7bc8,0);
                bRam0000000004fa8a88 = 1;
              }
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar5 = *(long *)(lVar5 + 0x10);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
              }
              if (pcRam0000000004fa8ad0 == (code *)0x0) {
                pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
              }
              (*pcRam0000000004fa8ad0)(lVar5,&stack0xffffffffffffffe8);
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

