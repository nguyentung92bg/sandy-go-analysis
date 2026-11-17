/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$RefreshGoldenTime
void Dino_BusSand_App_UI_ContinueBottomPanel__RefreshGoldenTime (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$RefreshGoldenTime
   void Dino_BusSand_App_UI_ContinueBottomPanel__RefreshGoldenTime
   (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPanel__RefreshGoldenTime_22c1760(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04caec48;
  if ((bRam0000000004f9c331 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb66f8);
    FUN_02132f7c(PTR_DAT_04cab390);
    bRam0000000004f9c331 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc
                      (lVar3,*(undefined4 *)(param_1 + 0x58),0);
  }
  plVar6 = (long *)(param_1 + 0x50);
  lVar8 = *plVar6;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  lVar8 = 0;
  if ((uVar4 & 1) != 0) {
    if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = UnityEngine_Transform__Find_43d4bec(*plVar6,*(undefined8 *)PTR_DAT_04cb66f8,0);
  }
  if (lVar3 < 1) {
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(lVar8,*(undefined8 *)PTR_DAT_04cab390,0);
    Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(*plVar6,0,0);
    *plVar6 = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar6 >> 0xc & 0x3f),
                   ((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  lVar7 = *plVar6;
  if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar7,1,0);
  uVar5 = Dino_BusSand_App_Countdown__Text_214f5d0(lVar3,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba6b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48,uVar5,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba6b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if ((uVar4 & 1) == 0) {
    if ((lVar8 == 0) ||
       (lVar3 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar8,1,*(undefined8 *)PTR_DAT_04cada48), lVar3 == 0)) {
LAB_022a95f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar6 = *(long **)(lVar3 + 0x20 + lVar8 * 8);
        if (plVar6 == (long *)0x0) goto LAB_022a95f0;
        (**(code **)(*plVar6 + 0x518))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x520));
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
  }
  return;
}

