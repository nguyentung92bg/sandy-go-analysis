/* IL2CPP: Dino.BusSand.App.UI.PassportPanel.<Guide>d__57$$MoveNext
bool Dino_BusSand_App_UI_PassportPanel__Guide_d__57__MoveNext (Dino_BusSand_App_UI_PassportPanel__Guide_d__57_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel.<Guide>d__57$$MoveNext
   bool Dino_BusSand_App_UI_PassportPanel__Guide_d__57__MoveNext
   (Dino_BusSand_App_UI_PassportPanel__Guide_d__57_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_PassportPanel__Guide_d__57__MoveNext_21d96e8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = param_1;
  if ((bRam0000000004f9bb73 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cb08e8);
    lVar2 = FUN_02132f7c(PTR_DAT_04cb08f0);
    bRam0000000004f9bb73 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
                    /* try { // try from 022d9734 to 023d9753 has its CatchHandler @ 022d97e4 */
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 != 0) {
      Dino_BusSand_App_UI_PassportPanel__Tip_21d7284(lVar2,*(undefined8 *)PTR_DAT_04cb08f0);
      if (*(long *)(lVar4 + 0x40) != 0) {
        Dino_BusSand_App_Meta_PassportFeature__CommitPendingKeys_224785c(*(long *)(lVar4 + 0x40),0);
        Dino_BusSand_App_UI_PassportPanel__BlockInput_21d87cc(lVar4,0);
        if (*(char *)(lVar4 + 0x48) == '\0') {
          Dino_BusSand_App_UI_PassportPanel__RefreshAll_21d42e8(lVar4);
          return 0;
        }
        return 0;
      }
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* try { // try from 022d97b4 to 023d97f7 has its CatchHandler @ 022d95b8 */
    if (lVar4 != 0) {
      Dino_BusSand_App_UI_PassportPanel__Tip_21d7284(lVar2,*(undefined8 *)PTR_DAT_04cb08e8);
                    /* catch() { ... } // from try @ 022d97a0 with catch @ 022d97cc */
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 022d9734 with catch @ 022d97e4 */
      uVar3 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(0x40200000,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
                    /* try { // try from 022d9808 to 023d9983 has its CatchHandler @ 022d9808
                       catch() { ... } // from try @ 022d9808 with catch @ 022d9808
                       catch() { ... } // from try @ 022d99a4 with catch @ 022d9808
                       catch() { ... } // from try @ 022d9a04 with catch @ 022d9808 */
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 != 0) {
                    /* try { // try from 022d9754 to 023d979f has its CatchHandler @ 022d95b8 */
      Dino_BusSand_App_UI_PassportPanel__BlockInput_21d87cc(lVar4,1);
      Dino_BusSand_App_UI_PassportPanel__ScrollTo_21d53d0(lVar4,0);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(0x3f000000,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
                    /* try { // try from 022d97a0 to 023d97b3 has its CatchHandler @ 022d97cc */
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

