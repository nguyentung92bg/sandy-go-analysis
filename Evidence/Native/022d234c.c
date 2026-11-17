/* IL2CPP: Dino.BusSand.App.UI.PassportGetPanel.<Opening>d__5$$MoveNext
bool Dino_BusSand_App_UI_PassportGetPanel__Opening_d__5__MoveNext (Dino_BusSand_App_UI_PassportGetPanel__Opening_d__5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportGetPanel.<Opening>d__5$$MoveNext
   bool Dino_BusSand_App_UI_PassportGetPanel__Opening_d__5__MoveNext
   (Dino_BusSand_App_UI_PassportGetPanel__Opening_d__5_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_PassportGetPanel__Opening_d__5__MoveNext_21d234c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000004f9bb46 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cb0508);
    FUN_02132f7c(PTR_DAT_04cb0510);
    FUN_02132f7c(PTR_DAT_04cb0428);
    bRam0000000004f9bb46 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
                    /* catch() { ... } // from try @ 022d22f4 with catch @ 022d24f8 */
                    /* catch() { ... } // from try @ 022d208c with catch @ 022d24fc */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* catch() { ... } // from try @ 022d1fe0 with catch @ 022d2500
                       catch() { ... } // from try @ 022d2128 with catch @ 022d2500 */
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x40) != 0) {
        return 0;
      }
      *(undefined4 *)(lVar2 + 0x40) = 1;
      return 0;
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 != 0) {
      uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar2,*(undefined8 *)PTR_DAT_04cb0428,0);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      uVar4 = Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar3,*(undefined8 *)PTR_DAT_04cb0508,0);
      if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb0510,0);
      uVar3 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(uVar4,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
                    /* try { // try from 022d24e0 to 023d253b has its CatchHandler @ 022d1ee4 */
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
                    /* catch() { ... } // from try @ 022d1f70 with catch @ 022d24f4 */
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 != 0) {
      uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar2,*(undefined8 *)PTR_DAT_04cb0428,0);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      Dino_BusSand_App_UI_GiftPackUi__Sample_21adb38(uVar3,*(undefined8 *)PTR_DAT_04cb0508,0,0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

