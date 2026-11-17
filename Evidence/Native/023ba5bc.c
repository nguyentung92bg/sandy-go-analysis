/* IL2CPP: Dino.BusSand.App.UI.StoreSucPanel$$OnSure
void Dino_BusSand_App_UI_StoreSucPanel__OnSure (Dino_BusSand_App_UI_StoreSucPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StoreSucPanel$$OnSure
   void Dino_BusSand_App_UI_StoreSucPanel__OnSure (Dino_BusSand_App_UI_StoreSucPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_StoreSucPanel__OnSure_22ba5bc
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
                    /* try { // try from 023ba5cc to 024ba5cf has its CatchHandler @ 023ba60c */
                    /* try { // try from 023ba5d0 to 024ba5d3 has its CatchHandler @ 023ba604 */
  if (*(char *)(param_4 + 0x40) == '\0') {
                    /* catch() { ... } // from try @ 023ba320 with catch @ 023ba5e8 */
                    /* catch() { ... } // from try @ 023ba308 with catch @ 023ba5ec */
                    /* catch() { ... } // from try @ 023ba5dc with catch @ 023ba5f0 */
                    /* catch() { ... } // from try @ 023ba5d8 with catch @ 023ba5f4 */
    *(undefined1 *)(param_4 + 0x40) = 1;
                    /* catch() { ... } // from try @ 023ba330 with catch @ 023ba5f8 */
    plVar1 = (long *)(param_4 + 0x38);
    lVar3 = *plVar1;
                    /* catch() { ... } // from try @ 023ba3ac with catch @ 023ba5fc */
    *plVar1 = 0;
                    /* catch() { ... } // from try @ 023ba5d4 with catch @ 023ba600 */
    thunk_FUN_02134474(plVar1,0);
                    /* catch() { ... } // from try @ 023ba5d0 with catch @ 023ba604 */
                    /* catch() { ... } // from try @ 023ba304 with catch @ 023ba608 */
                    /* catch() { ... } // from try @ 023ba5cc with catch @ 023ba60c */
    lVar2 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
                    /* catch() { ... } // from try @ 023ba21c with catch @ 023ba610 */
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* catch() { ... } // from try @ 023ba26c with catch @ 023ba614 */
                    /* catch() { ... } // from try @ 023ba344 with catch @ 023ba618 */
    uVar4 = UnityEngine_Transform__get_position_43d0e48(lVar2,0);
                    /* catch() { ... } // from try @ 023ba240 with catch @ 023ba61c */
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_4,0);
    if (lVar3 != 0) {
                    /* try { // try from 023ba638 to 024ba63b has its CatchHandler @ 023ba65c */
                    /* try { // try from 023ba63c to 024ba65f has its CatchHandler @ 023b9f60 */
                    /* catch() { ... } // from try @ 023ba638 with catch @ 023ba65c */
                    /* WARNING: Could not recover jumptable at 0x023ba660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 023ba660 to 024ba667 has its CatchHandler @ 023ba670 */
      (**(code **)(lVar3 + 0x18))
                (uVar4,param_2,param_3,*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
                    /* try { // try from 023ba5d4 to 024ba5d7 has its CatchHandler @ 023ba600 */
                    /* try { // try from 023ba5d8 to 024ba5db has its CatchHandler @ 023ba5f4 */
                    /* try { // try from 023ba5dc to 024ba5df has its CatchHandler @ 023ba5f0 */
                    /* try { // try from 023ba5e0 to 024ba637 has its CatchHandler @ 023b9f60 */
                    /* catch() { ... } // from try @ 023ba2dc with catch @ 023ba5e4 */
  return;
}

