/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$OpenClose
bool Dino_BusSand_App_UI_PassportUi__OpenClose (System_Action_o* onClose, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$OpenClose
   bool Dino_BusSand_App_UI_PassportUi__OpenClose (System_Action_o* onClose, const MethodInfo*
   method); */

uint Dino_BusSand_App_UI_PassportUi__OpenClose_21db1f0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
                    /* try { // try from 022db1f0 to 023db203 has its CatchHandler @ 022db21c */
                    /* try { // try from 022db204 to 023db247 has its CatchHandler @ 022db008 */
  if ((bRam0000000004f9bb80 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb09d0);
                    /* catch() { ... } // from try @ 022db1f0 with catch @ 022db21c */
    FUN_02132f7c(PTR_DAT_04cb09d8);
    bRam0000000004f9bb80 = 1;
  }
  lVar3 = Dino_BusSand_App_UI_PassportUi__get_F_21daeb0();
  if (lVar3 != 0) {
    lVar3 = Dino_BusSand_App_UI_PassportUi__get_F_21daeb0();
                    /* catch() { ... } // from try @ 022db184 with catch @ 022db234 */
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_Meta_PassportFeature__CommitPendingKeys_224785c(lVar3,0);
  }
                    /* try { // try from 022db258 to 023db3b7 has its CatchHandler @ 022db258
                       catch() { ... } // from try @ 022db258 with catch @ 022db258
                       catch() { ... } // from try @ 022db3d8 with catch @ 022db258
                       catch() { ... } // from try @ 022db438 with catch @ 022db258 */
  uVar4 = *(undefined8 *)PTR_DAT_04cb09d8;
  lVar3 = *(long *)PTR_DAT_04cb09d0;
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab490);
    if (*(long *)(lVar3 + 0x38) == 0) {
      FUN_0216b4cc(lVar3);
    }
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar5 & 1) == 0) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar6,**(undefined8 **)(lVar3 + 0x38));
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(uVar4,0);
      if ((uVar5 & 1) != 0) {
        uVar4 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar6,uVar4,2,param_1,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 8));
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
        uVar2 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar4,0);
        return (uVar2 ^ 0xffffffff) & 1;
      }
    }
  }
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  }
  return 0;
}

