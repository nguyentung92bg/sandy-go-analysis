/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$OpenMain
bool Dino_BusSand_App_UI_PassportUi__OpenMain (System_Action_o* onClose, bool firstGuide, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$OpenMain
   bool Dino_BusSand_App_UI_PassportUi__OpenMain (System_Action_o* onClose, bool firstGuide, const
   MethodInfo* method); */

uint Dino_BusSand_App_UI_PassportUi__OpenMain_21daf00(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  puVar1 = PTR_DAT_04cb09a0;
  if ((bRam0000000004f9bb7a & 1) == 0) {
                    /* try { // try from 022daf34 to 023daf53 has its CatchHandler @ 022dafe4 */
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0550);
                    /* try { // try from 022daf54 to 023daf9f has its CatchHandler @ 022dadb8 */
    FUN_02132f7c(PTR_DAT_04cb09a8);
    FUN_02132f7c(PTR_DAT_04cb09a0);
    FUN_02132f7c(PTR_DAT_04cb09b0);
    FUN_02132f7c(PTR_DAT_04cb09b8);
    FUN_02132f7c(PTR_DAT_04cb09c0);
    FUN_02132f7c(PTR_DAT_04cb09c8);
    bRam0000000004f9bb7a = 1;
  }
                    /* try { // try from 022dafa0 to 023dafb3 has its CatchHandler @ 022dafcc */
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar6,0);
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022dafb4 to 023daff7 has its CatchHandler @ 022dadb8 */
  if (lVar6 != 0) {
    plVar10 = (long *)(lVar6 + 0x18);
    *plVar10 = param_1;
                    /* catch() { ... } // from try @ 022dafa0 with catch @ 022dafcc */
    thunk_FUN_02134474(plVar10,param_1);
    Dino_BusSand_App_UI_PassportUi__Install_21dad80();
    if (cRam0000000004f9b94d == '\0') {
                    /* catch() { ... } // from try @ 022daf34 with catch @ 022dafe4 */
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
                    /* try { // try from 022db008 to 023db183 has its CatchHandler @ 022db008
                       catch() { ... } // from try @ 022db008 with catch @ 022db008
                       catch() { ... } // from try @ 022db1a4 with catch @ 022db008
                       catch() { ... } // from try @ 022db204 with catch @ 022db008 */
    lVar11 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    lVar7 = Dino_BusSand_App_UI_PassportUi__get_F_21daeb0();
    plVar12 = (long *)(lVar6 + 0x10);
    *plVar12 = lVar7;
    thunk_FUN_02134474(plVar12,lVar7);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
    if (((uVar8 & 1) != 0) || (*plVar12 == 0)) {
LAB_022db0c0:
      lVar6 = *plVar10;
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      }
      return 0;
    }
    Dino_BusSand_App_Meta_PassportFeature__SetForceCloseOpen_22491e8(*plVar12,1,0);
    if (lVar11 == 0) goto LAB_022db1e4;
    uVar8 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar11,*(undefined8 *)PTR_DAT_04cb09b8);
    if ((uVar8 & 1) != 0) goto LAB_022db0c0;
    if (*plVar12 == 0) goto LAB_022db1e4;
    iVar4 = Dino_BusSand_App_Meta_PassportFeature__get_State_224602c(*plVar12,0);
    if (iVar4 == 1) {
      if (*plVar12 == 0) goto LAB_022db1e4;
      lVar7 = Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184(*plVar12,0);
      if (lVar7 < 1) {
        uVar8 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                          (lVar11,*(undefined8 *)PTR_DAT_04cb09b0);
        if ((uVar8 & 1) != 0) goto LAB_022db0c0;
                    /* try { // try from 022db1a4 to 023db1ef has its CatchHandler @ 022db008 */
        lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(lVar7,lVar6,*(undefined8 *)PTR_DAT_04cb09a8,0);
        if ((bRam0000000004f9bb80 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb09d0);
          FUN_02132f7c(PTR_DAT_04cb09d8);
          bRam0000000004f9bb80 = 1;
        }
        lVar6 = Dino_BusSand_App_UI_PassportUi__get_F_21daeb0();
        if (lVar6 != 0) {
          lVar6 = Dino_BusSand_App_UI_PassportUi__get_F_21daeb0();
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_App_Meta_PassportFeature__CommitPendingKeys_224785c(lVar6,0);
        }
        uVar9 = *(undefined8 *)PTR_DAT_04cb09d8;
        lVar6 = *(long *)PTR_DAT_04cb09d0;
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
        lVar11 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
        if ((uVar8 & 1) != 0) {
LAB_029078b0:
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
            ;
          }
          return 0;
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar8 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                          (lVar11,**(undefined8 **)(lVar6 + 0x38));
        if ((uVar8 & 1) != 0) goto LAB_029078b0;
        if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(uVar9,0);
        if ((uVar8 & 1) == 0) goto LAB_029078b0;
        uVar9 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar11,uVar9,2,lVar7,*(undefined8 *)(*(long *)(lVar6 + 0x38) + 8));
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        goto UnityEngine_Object__op_Inequality_43c8dec;
      }
    }
    if (*plVar12 != 0) {
      iVar4 = Dino_BusSand_App_Meta_PassportFeature__get_State_224602c(*plVar12,0);
      if (iVar4 == 2) goto LAB_022db0c0;
      lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0550);
      System_Object___ctor_4870e5c(lVar6,0);
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x10) = *plVar10;
        thunk_FUN_02134474();
        puVar3 = PTR_DAT_04cb09c8;
        puVar2 = PTR_DAT_04cb09c0;
        *(byte *)(lVar6 + 0x18) = param_2 & 1;
        uVar9 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar11,*(undefined8 *)puVar3,2,lVar6,*(undefined8 *)puVar2);
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar6);
        }
UnityEngine_Object__op_Inequality_43c8dec:
        puVar1 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004fa8638 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
          bRam0000000004fa8638 = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar9,0);
        return (uVar5 ^ 0xffffffff) & 1;
      }
    }
  }
LAB_022db1e4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

