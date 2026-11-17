/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<>c__DisplayClass19_0$$<RunGuide>b__0
void Dino_BusSand_App_UI_PassportUi___c__DisplayClass19_0___RunGuide_b__0 (Dino_BusSand_App_UI_PassportUi___c__DisplayClass19_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<>c__DisplayClass19_0$$<RunGuide>b__0
   void Dino_BusSand_App_UI_PassportUi___c__DisplayClass19_0___RunGuide_b__0
   (Dino_BusSand_App_UI_PassportUi___c__DisplayClass19_0_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_UI_PassportUi___c__DisplayClass19_0___RunGuide_b__0_21dcd98(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
                    /* try { // try from 022dcda0 to 023dcda7 has its CatchHandler @ 022dcea4 */
  if ((bRam0000000004f9bb91 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb0a90);
    bRam0000000004f9bb91 = 1;
  }
                    /* try { // try from 022dcdd8 to 023dce07 has its CatchHandler @ 022dcea0 */
  Dino_BusSand_App_Meta_SystemOpen__MarkGuided_224333c(6,0);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_App_Meta_PassportFeature__SetPassportCommand_2249c54(*(long *)(param_1 + 0x10),1,0);
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 == 0) {
                    /* try { // try from 022dce08 to 023dcec3 has its CatchHandler @ 022dc890 */
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar7,param_1,*(undefined8 *)PTR_DAT_04cb0a90,0);
    *(long *)(param_1 + 0x20) = lVar7;
    thunk_FUN_02134474((long *)(param_1 + 0x20),lVar7);
  }
  puVar2 = PTR_DAT_04cb0808;
  puVar1 = PTR_DAT_04cb0800;
  if ((bRam0000000004f9bb7c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0808);
    FUN_02132f7c(PTR_DAT_04cb0800);
    bRam0000000004f9bb7c = 1;
  }
  uVar4 = *(undefined8 *)puVar1;
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
  lVar8 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if ((uVar5 & 1) == 0) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar8,**(undefined8 **)(lVar6 + 0x38));
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(uVar4,0);
      if ((uVar5 & 1) != 0) {
        uVar4 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar8,uVar4,2,lVar7,*(undefined8 *)(*(long *)(lVar6 + 0x38) + 8));
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
        uVar3 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar4,0);
        return (uVar3 ^ 0xffffffff) & 1;
      }
    }
  }
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
  }
  return 0;
}

