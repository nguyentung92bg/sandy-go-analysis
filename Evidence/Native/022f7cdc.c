/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$OpenRace
void Dino_BusSand_App_UI_YachtRacingUi__OpenRace (bool special, bool isGuide, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$OpenRace
   void Dino_BusSand_App_UI_YachtRacingUi__OpenRace (bool special, bool isGuide, System_Action_o*
   done, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingUi__OpenRace_21f7cdc
               (byte param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((bRam0000000004f9bc46 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1018);
    FUN_02132f7c(PTR_DAT_04cb17d0);
    FUN_02132f7c(PTR_DAT_04cb17d8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb17e0);
    bRam0000000004f9bc46 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = Dino_BusSand_App_UI_YachtRacingUi__Once_21f7ef4(param_3);
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if (((uVar4 & 1) == 0) &&
     (lVar5 = Dino_BusSand_App_Meta_YachtRacingFeature__get_I_225aad4(0), lVar5 != 0)) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cb17e0;
    uVar4 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(*(undefined8 *)PTR_DAT_04cb17e0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar7 == 0) goto LAB_022f7edc;
      uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar7,*(undefined8 *)PTR_DAT_04cb17d0);
      if ((uVar4 & 1) == 0) {
        uVar8 = *(undefined8 *)puVar2;
        lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1018);
        Dino_BusSand_App_UI_YachtRacingPanel_Param___ctor_21eb1d0(lVar5,0);
        if (lVar5 == 0) goto LAB_022f7edc;
        *(byte *)(lVar5 + 0x10) = param_1 & 1;
        *(byte *)(lVar5 + 0x11) = param_2 & 1;
        uVar6 = 2;
        if ((param_1 & 1) != 0) {
          uVar6 = 3;
        }
        *(long *)(lVar5 + 0x18) = lVar3;
        thunk_FUN_02134474(2,(long *)(lVar5 + 0x18),lVar3);
        uVar8 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar7,uVar8,uVar6,lVar5,*(undefined8 *)PTR_DAT_04cb17d8);
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar7);
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
      }
    }
  }
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f7e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
LAB_022f7edc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

