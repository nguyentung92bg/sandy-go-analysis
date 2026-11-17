/* IL2CPP: Dino.BusSand.App.UI.PassportFinishGetPanel.<Sequence>d__12$$MoveNext
bool Dino_BusSand_App_UI_PassportFinishGetPanel__Sequence_d__12__MoveNext (Dino_BusSand_App_UI_PassportFinishGetPanel__Sequence_d__12_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportFinishGetPanel.<Sequence>d__12$$MoveNext
   bool Dino_BusSand_App_UI_PassportFinishGetPanel__Sequence_d__12__MoveNext
   (Dino_BusSand_App_UI_PassportFinishGetPanel__Sequence_d__12_o* __this, const MethodInfo* method);
    */

undefined8
Dino_BusSand_App_UI_PassportFinishGetPanel__Sequence_d__12__MoveNext_21d1068(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if ((bRam0000000004f9bb3d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad698);
    FUN_02132f7c(PTR_DAT_04cad6a8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cad6d0);
    FUN_02132f7c(PTR_DAT_04cb0450);
    FUN_02132f7c(PTR_DAT_04caef68);
    FUN_02132f7c(PTR_DAT_04cb0458);
    FUN_02132f7c(PTR_DAT_04cb03c8);
    FUN_02132f7c(PTR_DAT_04caef88);
    bRam0000000004f9bb3d = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  uVar3 = 0;
  plStack_30 = &lStack_28;
  lStack_38 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(0);
      }
      uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar5,*(undefined8 *)PTR_DAT_04caef68,0);
                    /* try { // try from 022d1320 to 023d1367 has its CatchHandler @ 022d1840 */
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar3,*(undefined8 *)PTR_DAT_04cb0450,0);
      uVar3 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(_UNK_00e208ec,0);
      *(undefined8 *)(lStack_28 + 0x18) = uVar3;
      thunk_FUN_02134474();
      uVar3 = 1;
      *(undefined4 *)(lStack_28 + 0x10) = 1;
      goto LAB_022d13c8;
    }
    if (iVar1 != 1) goto LAB_022d13c8;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0x3eb33333;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    if (*(long *)(lVar5 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_68,*(long *)(lVar5 + 0x48),*(undefined8 *)PTR_DAT_04cad6d0);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    uStack_40 = uStack_58;
    *(undefined8 *)(lStack_28 + 0x38) = uStack_60;
    *(undefined8 *)(lStack_28 + 0x30) = uStack_68;
    *(undefined8 *)(lStack_28 + 0x40) = uStack_58;
    thunk_FUN_02134474(lStack_28 + 0x30,0);
    param_1 = lStack_28;
LAB_022d11b8:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
                    /* try { // try from 022d11c0 to 023d121b has its CatchHandler @ 022d0bc4 */
    uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (param_1 + 0x30,*(undefined8 *)PTR_DAT_04cad698);
    puVar2 = PTR_DAT_04caec68;
                    /* catch() { ... } // from try @ 022d0c50 with catch @ 022d11d4 */
                    /* catch() { ... } // from try @ 022d0fd4 with catch @ 022d11d8 */
                    /* catch() { ... } // from try @ 022d0d6c with catch @ 022d11dc */
    if ((uVar4 & 1) == 0) {
      Dino_BusSand_App_UI_PassportFinishGetPanel__Sequence_d__12____m__Finally1_21d1498();
      puVar2 = PTR_DAT_04caec68;
      *(undefined8 *)(lStack_28 + 0x38) = 0;
      *(undefined8 *)(lStack_28 + 0x40) = 0;
      uVar7 = *(undefined4 *)(lStack_28 + 0x28);
      lVar5 = *(long *)puVar2;
      *(undefined8 *)(lStack_28 + 0x30) = 0;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(uVar7,0);
      *(undefined8 *)(lStack_28 + 0x18) = uVar3;
      thunk_FUN_02134474();
      uVar7 = 3;
    }
    else {
                    /* catch() { ... } // from try @ 022d0cc0 with catch @ 022d11e0
                       catch() { ... } // from try @ 022d0e08 with catch @ 022d11e0 */
      uVar3 = *(undefined8 *)(lStack_28 + 0x40);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      fVar6 = (float)Dino_BusSand_App_UI_GiftPackUi__Play_21ada68
                               (uVar3,*(undefined8 *)PTR_DAT_04cb03c8,0);
      if (0.0 < fVar6) {
                    /* try { // try from 022d1224 to 023d12af has its CatchHandler @ 022d1224
                       catch() { ... } // from try @ 022d1224 with catch @ 022d1224
                       catch() { ... } // from try @ 022d1820 with catch @ 022d1224 */
        *(float *)(lStack_28 + 0x28) = fVar6;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(_UNK_00e20754,0);
      *(undefined8 *)(lStack_28 + 0x18) = uVar3;
      thunk_FUN_02134474();
      uVar7 = 2;
    }
  }
  else {
    if (iVar1 == 2) goto LAB_022d11b8;
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224(0);
        }
        uVar3 = 0;
        *(undefined1 *)(lVar5 + 0x40) = 0;
      }
      goto LAB_022d13c8;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar5,*(undefined8 *)PTR_DAT_04caef88,0);
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022d12b0 to 023d12c3 has its CatchHandler @ 022d1834 */
    Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar3,*(undefined8 *)PTR_DAT_04cb0458,0);
    uVar3 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(_UNK_00e206e8,0);
    *(undefined8 *)(lStack_28 + 0x18) = uVar3;
    thunk_FUN_02134474();
    uVar7 = 4;
  }
  *(undefined4 *)(lStack_28 + 0x10) = uVar7;
  uVar3 = 1;
LAB_022d13c8:
  lVar5 = lStack_38;
                    /* try { // try from 022d13cc to 023d143f has its CatchHandler @ 022d183c */
  if (lStack_38 == 0) {
    return uVar3;
  }
  FUN_01e785a4(&plStack_30);
                    /* WARNING: Subroutine does not return */
  FUN_0213321c(lVar5);
}

