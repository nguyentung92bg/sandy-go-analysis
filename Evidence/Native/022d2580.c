/* IL2CPP: Dino.BusSand.App.UI.PassportGetPanel.<PlayBC>d__6$$MoveNext
bool Dino_BusSand_App_UI_PassportGetPanel__PlayBC_d__6__MoveNext (Dino_BusSand_App_UI_PassportGetPanel__PlayBC_d__6_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportGetPanel.<PlayBC>d__6$$MoveNext
   bool Dino_BusSand_App_UI_PassportGetPanel__PlayBC_d__6__MoveNext
   (Dino_BusSand_App_UI_PassportGetPanel__PlayBC_d__6_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_PassportGetPanel__PlayBC_d__6__MoveNext_21d2580(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000004f9bb47 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cb0520);
    FUN_02132f7c(PTR_DAT_04cb0428);
                    /* try { // try from 022d25d0 to 023d25e3 has its CatchHandler @ 022d2b54 */
    FUN_02132f7c(PTR_DAT_04cb04e0);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bb47 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_022d2784;
    if (*(int *)(lVar4 + 0x40) == 2) {
      *(undefined4 *)(lVar4 + 0x40) = 3;
      return 0;
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_022d2784;
    if (*(int *)(lVar4 + 0x40) == 2) {
      uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar4,*(undefined8 *)PTR_DAT_04cb0428,0);
                    /* try { // try from 022d26ec to 023d275f has its CatchHandler @ 022d2b5c */
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar3,*(undefined8 *)PTR_DAT_04cb04e0,0);
      uVar3 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
  }
  else if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar2 = PTR_DAT_04cab1e8;
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x40) = 2;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 022d2640 to 023d2687 has its CatchHandler @ 022d2b60 */
      Dino_BusSand_App_Audio__Play_214da60(0x3e800000,*(undefined8 *)PTR_DAT_04cad948,0);
      uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar4,*(undefined8 *)PTR_DAT_04cb0428,0);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar3,*(undefined8 *)PTR_DAT_04cb0520,0);
      uVar3 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
LAB_022d2784:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

