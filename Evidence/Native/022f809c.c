/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$CanOpenStart
bool Dino_BusSand_App_UI_YachtRacingUi__CanOpenStart (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$CanOpenStart
   bool Dino_BusSand_App_UI_YachtRacingUi__CanOpenStart (const MethodInfo* method); */

bool Dino_BusSand_App_UI_YachtRacingUi__CanOpenStart_21f809c(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000004f9bc47 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb17f8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb1800);
    bRam0000000004f9bc47 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar5 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  lVar3 = Dino_BusSand_App_Meta_YachtRacingFeature__get_I_225aad4(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
  if (((uVar4 & 1) != 0) && (lVar3 != 0)) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(*(undefined8 *)PTR_DAT_04cb1800,0);
    if ((uVar4 & 1) != 0) {
      if (lVar5 != 0) {
        uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                          (lVar5,*(undefined8 *)PTR_DAT_04cb17f8);
        if ((uVar4 & 1) != 0) {
          return false;
        }
        lVar3 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(lVar3,0);
        if (lVar3 != 0) {
          iVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4(lVar3,0);
          return iVar2 == 2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return false;
}

