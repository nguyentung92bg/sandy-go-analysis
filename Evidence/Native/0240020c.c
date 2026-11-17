/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$ShowPanel
Dino_BusSand_App_UI_PlayerSettingPanel_o* Dino_BusSand_App_UI_PlayerSettingPanel__ShowPanel (Dino_BusSand_App_UI_PlayerSettingPanel_OpenInfo_o* info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$ShowPanel
   Dino_BusSand_App_UI_PlayerSettingPanel_o* Dino_BusSand_App_UI_PlayerSettingPanel__ShowPanel
   (Dino_BusSand_App_UI_PlayerSettingPanel_OpenInfo_o* info, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_PlayerSettingPanel__ShowPanel_230020c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f9c4d4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7bc0);
    FUN_02132f7c(PTR_DAT_04cb7bc8);
    FUN_02132f7c(PTR_DAT_04cb7bd0);
    bRam0000000004f9c4d4 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar2 = PTR_DAT_04cad1b0;
  uVar5 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (param_1 == 0) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    uVar5 = 0;
joined_r0x024003c0:
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    }
    return uVar5;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
                    /* catch() { ... } // from try @ 0240031c with catch @ 024002fc
                       catch() { ... } // from try @ 02400354 with catch @ 024002fc
                       catch() { ... } // from try @ 024003b0 with catch @ 024002fc */
  if (lVar4 != 0) {
    uVar5 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                      (lVar4,*(undefined8 *)PTR_DAT_04cb7bc0);
                    /* try { // try from 02400318 to 0250031b has its CatchHandler @ 02400324 */
                    /* try { // try from 0240031c to 0250033b has its CatchHandler @ 024002fc */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02400318 with catch @ 02400324
                        */
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      return uVar5;
    }
                    /* try { // try from 0240033c to 02500353 has its CatchHandler @ 024003a8 */
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
                    /* try { // try from 02400354 to 02500397 has its CatchHandler @ 024002fc */
      cRam0000000004f9b94d = '\x01';
    }
    lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar4 != 0) {
      uVar5 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar4,*(undefined8 *)PTR_DAT_04cb7bd0,2,param_1,
                         *(undefined8 *)PTR_DAT_04cb7bc8);
                    /* try { // try from 02400398 to 025003a7 has its CatchHandler @ 024003a8 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
                    /* catch() { ... } // from try @ 0240033c with catch @ 024003a8
                       catch() { ... } // from try @ 02400398 with catch @ 024003a8 */
                    /* try { // try from 024003ac to 025003af has its CatchHandler @ 024003b8 */
                    /* try { // try from 024003b0 to 025003bb has its CatchHandler @ 024002fc */
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      if (param_1 == 0) {
        return uVar5;
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024003ac with catch @ 024003b8
                        */
      if ((uVar3 & 1) == 0) {
        return uVar5;
      }
                    /* try { // try from 024003bc to 025005af has its CatchHandler @ 024003bc
                       catch() { ... } // from try @ 024003bc with catch @ 024003bc
                       catch() { ... } // from try @ 02400690 with catch @ 024003bc
                       catch() { ... } // from try @ 02400744 with catch @ 024003bc
                       catch() { ... } // from try @ 0240077c with catch @ 024003bc
                       catch() { ... } // from try @ 024007c8 with catch @ 024003bc */
      lVar4 = *(long *)(param_1 + 0x10);
      goto joined_r0x024003c0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

