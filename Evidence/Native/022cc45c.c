/* IL2CPP: Dino.BusSand.App.UI.BonusBankOpenPanel.<Finish>d__9$$MoveNext
bool Dino_BusSand_App_UI_BonusBankOpenPanel__Finish_d__9__MoveNext (Dino_BusSand_App_UI_BonusBankOpenPanel__Finish_d__9_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BonusBankOpenPanel.<Finish>d__9$$MoveNext
   bool Dino_BusSand_App_UI_BonusBankOpenPanel__Finish_d__9__MoveNext
   (Dino_BusSand_App_UI_BonusBankOpenPanel__Finish_d__9_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_BonusBankOpenPanel__Finish_d__9__MoveNext_21cc45c(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 022cc464 to 023cc46b has its CatchHandler @ 022cc488 */
                    /* try { // try from 022cc46c to 023cc48b has its CatchHandler @ 022cc388 */
  if ((bRam0000000004f9bb20 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    bRam0000000004f9bb20 = 1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc464 with catch @ 022cc488
                        */
  iVar1 = *(int *)(param_1 + 0x10);
                    /* try { // try from 022cc48c to 023cc48f has its CatchHandler @ 022cc498 */
  lVar5 = *(long *)(param_1 + 0x20);
                    /* try { // try from 022cc490 to 023cc49b has its CatchHandler @ 022cc388 */
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) {
LAB_022cc548:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 022cc4f0 to 023cc51b has its CatchHandler @ 022cc540 */
    Dino_BusSand_App_UI_BonusBankOpenPanel__SetState_21cbf28(lVar5,2);
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(0x3f800000,0);
                    /* try { // try from 022cc51c to 023cc563 has its CatchHandler @ 022cc49c */
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc48c with catch @ 022cc498
                        */
    if (iVar1 == 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc51c with catch @ 022cc49c
                       catch(type#1 @ 00000000) { ... } // from try @ 022cc56c with catch @ 022cc49c
                       catch(type#1 @ 00000000) { ... } // from try @ 022cc57c with catch @ 022cc49c
                        */
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 == 0) goto LAB_022cc548;
      plVar2 = (long *)(lVar5 + 0x38);
      lVar4 = *plVar2;
      *plVar2 = 0;
      thunk_FUN_02134474(plVar2,0);
                    /* try { // try from 022cc4c0 to 023cc4cb has its CatchHandler @ 022cc550 */
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar5,0);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc4f0 with catch @ 022cc540
                        */
  return iVar1 == 0;
}

