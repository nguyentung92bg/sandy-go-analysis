/* IL2CPP: Dino.BusSand.App.UI.PassportClosePanel$$Done
void Dino_BusSand_App_UI_PassportClosePanel__Done (Dino_BusSand_App_UI_PassportClosePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportClosePanel$$Done
   void Dino_BusSand_App_UI_PassportClosePanel__Done (Dino_BusSand_App_UI_PassportClosePanel_o*
   __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_PassportClosePanel__Done_21ce300(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = param_1;
  if ((bRam0000000004f9bb2c & 1) == 0) {
    uVar4 = FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bb2c = 1;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    plVar5 = (long *)(param_1 + 0x38);
    lVar8 = *plVar5;
    *(undefined1 *)(param_1 + 0x40) = 1;
    *plVar5 = 0;
    thunk_FUN_02134474(plVar5,0);
    if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
    uVar4 = Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if ((lVar6 != 0) &&
       (uVar4 = Dino_BusSand_App_Meta_PassportFeature__HaveAnyClaimableReward_22472e4(lVar6,0),
       puVar2 = PTR_DAT_04cb02c8, puVar1 = PTR_DAT_04cb02c0, (uVar4 & 1) != 0)) {
      if ((bRam0000000004f9bb7e & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb02c8);
        FUN_02132f7c(PTR_DAT_04cb02c0);
        bRam0000000004f9bb7e = 1;
      }
      uVar7 = *(undefined8 *)puVar1;
      lVar6 = *(long *)puVar2;
      if (*(long *)(lVar6 + 0x38) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cab490);
        if (*(long *)(lVar6 + 0x38) == 0) {
          FUN_0216b4cc(lVar6);
        }
      }
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      puVar1 = PTR_DAT_04ca9ae8;
      lVar9 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
      if ((uVar4 & 1) == 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                          (lVar9,**(undefined8 **)(lVar6 + 0x38));
        if ((uVar4 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(uVar7,0);
          if ((uVar4 & 1) != 0) {
            uVar7 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                              (lVar9,uVar7,2,lVar8,*(undefined8 *)(*(long *)(lVar6 + 0x38) + 8));
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            puVar1 = PTR_DAT_04ca9ae8;
            if ((bRam0000000004fa8638 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
              bRam0000000004fa8638 = 1;
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar3 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar7,0);
            return (ulong)((uVar3 ^ 0xffffffff) & 1);
          }
        }
      }
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      }
      return 0;
    }
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022ce3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      return uVar4;
    }
  }
  return uVar4;
}

