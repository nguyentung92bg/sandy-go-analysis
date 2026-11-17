/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$ScrollToProgress
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__ScrollToProgress (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$ScrollToProgress
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__ScrollToProgress
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__ScrollToProgress_21b0470(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  
  if ((bRam0000000004f9ba87 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caefb0);
    FUN_02132f7c(PTR_DAT_04caf048);
    FUN_02132f7c(PTR_DAT_04caf0a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caf030);
    bRam0000000004f9ba87 = 1;
  }
  puVar3 = PTR_DAT_04caf0a8;
  puVar2 = PTR_DAT_04caf030;
  puVar1 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 != 0) {
    iVar7 = 0;
    while (iVar7 < *(int *)(lVar6 + 0x18)) {
      if (((*(long *)(param_1 + 0x40) == 0) ||
          (lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc
                             (*(long *)(param_1 + 0x40),0), lVar6 == 0)) ||
         (*(long *)(param_1 + 0x48) == 0)) goto LAB_022b0558;
      System_Collections_Generic_List_GiftPackFeature_GoldenStage___get_Item_3b3abc4
                (*(long *)(param_1 + 0x48),iVar7,*(undefined8 *)puVar3);
      lVar6 = *(long *)(param_1 + 0x48);
      iVar7 = iVar7 + 1;
      if (lVar6 == 0) goto LAB_022b0558;
    }
    uVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    lVar6 = 0;
    if ((uVar5 & 1) != 0) {
      lVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
      if (lVar6 == 0) goto LAB_022b0558;
      lVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                        (lVar6,*(undefined8 *)PTR_DAT_04caefb0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (lVar6 != 0) {
      uVar4 = *(undefined8 *)(lVar6 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        return;
      }
      UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
      uVar4 = *(undefined8 *)(lVar6 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar6 + 0x40) == 0) goto LAB_022b0558;
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(lVar6 + 0x40),0);
      }
      if ((*(long *)(param_1 + 0x48) != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) {
        UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar6,0);
        if ((bRam0000000004fa8a88 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7bc8,0);
          bRam0000000004fa8a88 = 1;
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
        if (pcRam0000000004fa8ad0 == (code *)0x0) {
          pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
        }
        (*pcRam0000000004fa8ad0)(lVar6,&stack0xffffffffffffffe8);
        return;
      }
    }
  }
LAB_022b0558:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

