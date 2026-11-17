/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature.<>c__DisplayClass27_0$$<OnLost>b__0
void Dino_BusSand_App_Meta_YachtRacingFeature___c__DisplayClass27_0___OnLost_b__0 (Dino_BusSand_App_Meta_YachtRacingFeature___c__DisplayClass27_0_o* __this, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature.<>c__DisplayClass27_0$$<OnLost>b__0
   void Dino_BusSand_App_Meta_YachtRacingFeature___c__DisplayClass27_0___OnLost_b__0
   (Dino_BusSand_App_Meta_YachtRacingFeature___c__DisplayClass27_0_o* __this, System_Action_o* done,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingFeature___c__DisplayClass27_0___OnLost_b__0_225c850
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_App_Meta_YachtRacingCore__PrepareSpecialLose_2258ee8(*(long *)(param_1 + 0x10),0);
  if ((bRam0000000004f9bc46 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0,param_2,0);
    FUN_02132f7c(PTR_DAT_04cb1018);
    FUN_02132f7c(PTR_DAT_04cb17d0);
    FUN_02132f7c(PTR_DAT_04cb17d8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb17e0);
    bRam0000000004f9bc46 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = Dino_BusSand_App_UI_YachtRacingUi__Once_21f7ef4(param_2);
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if (((uVar4 & 1) == 0) &&
     (lVar5 = Dino_BusSand_App_Meta_YachtRacingFeature__get_I_225aad4(0), lVar5 != 0)) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cb17e0;
    uVar4 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(*(undefined8 *)PTR_DAT_04cb17e0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar6 == 0) goto LAB_022f7edc;
      uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar6,*(undefined8 *)PTR_DAT_04cb17d0);
      if ((uVar4 & 1) == 0) {
        uVar7 = *(undefined8 *)puVar2;
        lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1018);
        Dino_BusSand_App_UI_YachtRacingPanel_Param___ctor_21eb1d0(lVar5,0);
        if (lVar5 == 0) goto LAB_022f7edc;
        *(undefined1 *)(lVar5 + 0x10) = 1;
        *(undefined1 *)(lVar5 + 0x11) = 0;
        *(long *)(lVar5 + 0x18) = lVar3;
        thunk_FUN_02134474(2,(long *)(lVar5 + 0x18),lVar3);
        uVar7 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar6,uVar7,3,lVar5,*(undefined8 *)PTR_DAT_04cb17d8);
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar6);
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
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

