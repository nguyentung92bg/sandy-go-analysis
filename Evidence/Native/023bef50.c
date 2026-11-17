/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$ShowIfNeeded
void Dino_BusSand_App_UI_ContinueBottomPanel__ShowIfNeeded (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$ShowIfNeeded
   void Dino_BusSand_App_UI_ContinueBottomPanel__ShowIfNeeded (const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPanel__ShowIfNeeded_22bef50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000004f9c327 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb65b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb65c0);
    FUN_02132f7c(PTR_DAT_04cb65c8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb65d0);
    bRam0000000004f9c327 = 1;
  }
  uVar3 = Dino_BusSand_App_UI_EndOfLevelRules__NeedShowContinueBottom_22bf1c4();
  if ((uVar3 & 1) != 0) {
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar1 = PTR_DAT_04ca9ae8;
    lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04cb65d0;
      uVar3 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(*(undefined8 *)PTR_DAT_04cb65d0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar4 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                          (lVar7,*(undefined8 *)PTR_DAT_04cb65c0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
        if ((uVar3 & 1) == 0) {
          uVar5 = *(undefined8 *)puVar2;
          uVar6 = *(undefined8 *)PTR_DAT_04cb65c8;
          *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04cb65b8 + 0xb8) + 8) = 0;
          Dino_BusSand_App_UI_UIManager__Open_object__2945314(lVar7,uVar5,2,0,uVar6);
        }
        else {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_App_UI_ContinueBottomPanel__BringToFront_22bf208(lVar4);
        }
      }
    }
  }
  return;
}

