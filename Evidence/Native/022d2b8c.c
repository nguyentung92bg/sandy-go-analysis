/* IL2CPP: Dino.BusSand.App.UI.PassportOpenPanel.<Tick>d__3$$MoveNext
bool Dino_BusSand_App_UI_PassportOpenPanel__Tick_d__3__MoveNext (Dino_BusSand_App_UI_PassportOpenPanel__Tick_d__3_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportOpenPanel.<Tick>d__3$$MoveNext
   bool Dino_BusSand_App_UI_PassportOpenPanel__Tick_d__3__MoveNext
   (Dino_BusSand_App_UI_PassportOpenPanel__Tick_d__3_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_PassportOpenPanel__Tick_d__3__MoveNext_21d2b8c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 022d2ba4 to 023d2bfb has its CatchHandler @ 022d2ba4
                       catch() { ... } // from try @ 022d2ba4 with catch @ 022d2ba4
                       catch() { ... } // from try @ 022d3084 with catch @ 022d2ba4 */
  if ((bRam0000000004f9bb4a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cade40);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    bRam0000000004f9bb4a = 1;
  }
  puVar1 = PTR_DAT_04caef48;
                    /* try { // try from 022d2bfc to 023d2c0f has its CatchHandler @ 022d3098 */
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_02134474();
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(lVar5 + 0x40) != '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184
                      (*(long *)(param_1 + 0x28),0);
                    /* try { // try from 022d2c80 to 023d2cc7 has its CatchHandler @ 022d30a4 */
    uVar2 = *(undefined8 *)PTR_DAT_04cade40;
    if (lVar3 < 1) {
      lVar6 = *(long *)PTR_DAT_04ca9d18;
      lVar3 = *(long *)(lVar6 + 0x38);
      if (lVar3 == 0) {
        FUN_0216b4cc(lVar6);
        lVar3 = *(long *)(lVar6 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0216b470();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0216b470();
      }
                    /* try { // try from 022d2d24 to 023d2d97 has its CatchHandler @ 022d30a0 */
      uVar4 = **(undefined8 **)(lVar3 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
      }
      uVar4 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cadcc8,uVar4,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_UI_GiftPackUi__ActivityCountdown_21ad88c(lVar3,0);
    }
    Dino_BusSand_App_UI_UIPanel__Txt_2200924(lVar5,uVar2,uVar4,0);
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(0x3f000000,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar2);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  return 0;
}

