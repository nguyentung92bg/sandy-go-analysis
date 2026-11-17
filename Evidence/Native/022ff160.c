/* IL2CPP: Dino.BusSand.App.UI.UIManager$$HandleBack
Dino_BusSand_App_UI_UIPanel_o* Dino_BusSand_App_UI_UIManager__HandleBack (Dino_BusSand_App_UI_UIManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$HandleBack
   Dino_BusSand_App_UI_UIPanel_o* Dino_BusSand_App_UI_UIManager__HandleBack
   (Dino_BusSand_App_UI_UIManager_o* __this, const MethodInfo* method); */

long * Dino_BusSand_App_UI_UIManager__HandleBack_21ff160(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  
                    /* try { // try from 022ff160 to 023ff163 has its CatchHandler @ 022ff4d4 */
  puVar1 = PTR_DAT_04cabb00;
                    /* try { // try from 022ff16c to 023ff173 has its CatchHandler @ 022ff4b0 */
                    /* try { // try from 022ff178 to 023ff1b7 has its CatchHandler @ 022ff528 */
  if ((bRam0000000004f9bc7e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b78);
    FUN_02132f7c(PTR_DAT_04cb1b80);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cac518);
    bRam0000000004f9bc7e = 1;
  }
                    /* try { // try from 022ff1c0 to 023ff1c7 has its CatchHandler @ 022ff514 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022ff1d0 to 023ff1e3 has its CatchHandler @ 022ff4b8 */
  uVar2 = Dino_BusSand_App_UI_ScreenFade__get_Busy_2289848(0);
  if ((uVar2 & 1) == 0) {
    if (cRam0000000004f9bcfc == '\0') {
                    /* try { // try from 022ff1ec to 023ff1f3 has its CatchHandler @ 022ff4ac */
      FUN_02132f7c(PTR_DAT_04cb1b88);
      cRam0000000004f9bcfc = '\x01';
    }
                    /* try { // try from 022ff204 to 023ff23b has its CatchHandler @ 022ff53c */
    if ((**(char **)(*(long *)PTR_DAT_04cb1b88 + 0xb8) == '\0') &&
       (uVar2 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                          (param_1,*(undefined8 *)PTR_DAT_04cac518), puVar1 = PTR_DAT_04cb1b80,
       (uVar2 & 1) == 0)) {
      if (*(long *)(param_1 + 0x38) == 0) {
LAB_022ff2c4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022ff2c4 to 023ff2cb has its CatchHandler @ 022ff474 */
        FUN_02133224();
      }
      iVar4 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
      if (-1 < iVar4 + -1) {
        do {
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_022ff2c4;
          iVar4 = iVar4 + -1;
          plVar3 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                                     (*(long *)(param_1 + 0x38),iVar4,*(undefined8 *)puVar1);
                    /* try { // try from 022ff260 to 023ff267 has its CatchHandler @ 022ff478 */
          if (plVar3 == (long *)0x0) goto LAB_022ff2c4;
          if ((((*(char *)((long)plVar3 + 0x2c) == '\0') && ((int)plVar3[5] != 0)) &&
              ((int)plVar3[5] != 5)) &&
             (uVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0)),
             (uVar2 & 1) != 0)) {
            Dino_BusSand_App_UI_UIManagerEvents__RaiseBack_21ff2c8(plVar3);
            return plVar3;
                    /* try { // try from 022ff2a8 to 023ff2bb has its CatchHandler @ 022ff4a4 */
          }
        } while (0 < iVar4);
      }
    }
  }
  return (long *)0x0;
}

