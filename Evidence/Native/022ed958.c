/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnTipsClick
void Dino_BusSand_App_UI_YachtRacingPanel__OnTipsClick (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnTipsClick
   void Dino_BusSand_App_UI_YachtRacingPanel__OnTipsClick (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__OnTipsClick_21ed958(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 022ed4ac with catch @ 022ed958 */
                    /* catch() { ... } // from try @ 022ed484 with catch @ 022ed960 */
  if ((bRam0000000004f9bc4a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    FUN_02132f7c(PTR_DAT_04cb1818);
    FUN_02132f7c(PTR_DAT_04cb1820);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb1828);
    bRam0000000004f9bc4a = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = Dino_BusSand_App_UI_YachtRacingUi__Once_21f7ef4(0);
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  puVar2 = PTR_DAT_04cb1828;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(*(undefined8 *)puVar2,0);
    if ((uVar4 & 1) != 0) {
      if (lVar6 == 0) goto LAB_022f8580;
      uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar6,*(undefined8 *)PTR_DAT_04cb1818);
      if ((uVar4 & 1) == 0) {
        uVar5 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar6,*(undefined8 *)puVar2,2,lVar3,*(undefined8 *)PTR_DAT_04cb1820);
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar6);
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (lVar3 == 0) goto LAB_022f8580;
        goto LAB_022f8514;
      }
    }
  }
  if (lVar3 != 0) {
LAB_022f8514:
                    /* WARNING: Could not recover jumptable at 0x022f852c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
LAB_022f8580:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

