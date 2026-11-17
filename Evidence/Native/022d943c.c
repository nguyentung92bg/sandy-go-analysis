/* IL2CPP: Dino.BusSand.App.UI.PassportPanel.<Countdown>d__40$$MoveNext
bool Dino_BusSand_App_UI_PassportPanel__Countdown_d__40__MoveNext (Dino_BusSand_App_UI_PassportPanel__Countdown_d__40_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel.<Countdown>d__40$$MoveNext
   bool Dino_BusSand_App_UI_PassportPanel__Countdown_d__40__MoveNext
   (Dino_BusSand_App_UI_PassportPanel__Countdown_d__40_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_PassportPanel__Countdown_d__40__MoveNext_21d943c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000004f9bb72 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04cade40);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    FUN_02132f7c(PTR_DAT_04cb08d0);
    FUN_02132f7c(PTR_DAT_04cade18);
    FUN_02132f7c(PTR_DAT_04cb08d8);
    bRam0000000004f9bb72 = 1;
  }
  if (1 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x48) != '\0') {
      return 0;
    }
                    /* try { // try from 022d9508 to 023d950f has its CatchHandler @ 022d958c */
    if (((*(long *)(lVar3 + 0x40) != 0) &&
        (lVar1 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                           (*(long *)(lVar3 + 0x40),*(undefined8 *)PTR_DAT_04cb01b0), lVar1 != 0))
       && (*(long *)(lVar3 + 0x40) != 0)) {
      lVar4 = *(long *)(lVar1 + 0x58);
      lVar1 = Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184
                        (*(long *)(lVar3 + 0x40),0);
      Dino_BusSand_App_UI_UIPanel__Show_21f4018
                (lVar3,*(undefined8 *)PTR_DAT_04cade18,0 < lVar1 && 0 < lVar4,0);
                    /* try { // try from 022d9574 to 023d9577 has its CatchHandler @ 022d9578 */
      Dino_BusSand_App_UI_UIPanel__Show_21f4018
                (lVar3,*(undefined8 *)PTR_DAT_04cb08d0,lVar1 < 1 && 0 < lVar4,0);
                    /* catch() { ... } // from try @ 022d9420 with catch @ 022d9578
                       catch() { ... } // from try @ 022d9574 with catch @ 022d9578
                       try { // try from 022d9578 to 023d95a7 has its CatchHandler @ 022d9398 */
      if ((lVar4 < 1) || (lVar1 < 1)) {
        if (0 < lVar4) {
          lVar4 = *(long *)PTR_DAT_04ca9d18;
          lVar1 = *(long *)(lVar4 + 0x38);
          if (lVar1 == 0) {
            FUN_0216b4cc(lVar4);
            lVar1 = *(long *)(lVar4 + 0x38);
          }
          lVar1 = *(long *)(lVar1 + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0216b470();
          }
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar1 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0216b470();
          }
          Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
                    (lVar3,*(undefined8 *)PTR_DAT_04cb08d8,*(undefined8 *)PTR_DAT_04cadcc8,
                     **(undefined8 **)(lVar1 + 0xb8),0);
        }
      }
      else {
                    /* catch() { ... } // from try @ 022d9508 with catch @ 022d958c */
        if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = Dino_BusSand_App_UI_GiftPackUi__ActivityCountdown_21ad88c(lVar1,0);
                    /* try { // try from 022d95b8 to 023d9733 has its CatchHandler @ 022d95b8
                       catch() { ... } // from try @ 022d95b8 with catch @ 022d95b8
                       catch() { ... } // from try @ 022d9754 with catch @ 022d95b8
                       catch() { ... } // from try @ 022d97b4 with catch @ 022d95b8 */
        Dino_BusSand_App_UI_UIPanel__Txt_2200924(lVar3,*(undefined8 *)PTR_DAT_04cade40,uVar2,0);
      }
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(0x3f000000,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar2);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

