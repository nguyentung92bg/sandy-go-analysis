/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$ScrollToIndex
void Dino_BusSand_App_UI_StreakRatePanel__ScrollToIndex (Dino_BusSand_App_UI_StreakRatePanel_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$ScrollToIndex
   void Dino_BusSand_App_UI_StreakRatePanel__ScrollToIndex (Dino_BusSand_App_UI_StreakRatePanel_o*
   __this, int32_t index, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakRatePanel__ScrollToIndex_21e46ec(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022e46f4 to 023e46f7 has its CatchHandler @ 022e473c */
                    /* try { // try from 022e46f8 to 023e4703 has its CatchHandler @ 022e470c */
                    /* try { // try from 022e4704 to 023e4707 has its CatchHandler @ 022e4708 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e4704 with catch @ 022e4708
                       try { // try from 022e4708 to 023e4757 has its CatchHandler @ 022e4420 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e46f8 with catch @ 022e470c
                        */
  if ((bRam0000000004f9bbc8 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e4544 with catch @ 022e4720
                        */
    FUN_02132f7c(PTR_DAT_04cad508);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e46c8 with catch @ 022e4724
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e446c with catch @ 022e4728
                        */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bbc8 = 1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e44e8 with catch @ 022e4738
                       catch(type#1 @ 00000000) { ... } // from try @ 022e463c with catch @ 022e4738
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e44a4 with catch @ 022e473c
                       catch(type#1 @ 00000000) { ... } // from try @ 022e46f4 with catch @ 022e473c
                        */
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022e4758 to 023e475b has its CatchHandler @ 022e4764 */
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
                    /* try { // try from 022e475c to 023e4767 has its CatchHandler @ 022e4420 */
  if ((uVar2 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e4758 with catch @ 022e4764
                        */
                    /* try { // try from 022e4768 to 023e4857 has its CatchHandler @ 022e4768
                       catch() { ... } // from try @ 022e4768 with catch @ 022e4768
                       catch() { ... } // from try @ 022e5824 with catch @ 022e4768
                       catch() { ... } // from try @ 022e5b40 with catch @ 022e4768 */
    return;
  }
  UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
  if ((*(long *)(param_1 + 0x68) == 0) || (lVar4 = *(long *)(param_1 + 0x50), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar4,0);
  Dino_BusSand_App_UI_StreakRatePanel__get_MinY_21e5394(param_1);
  if ((bRam0000000004fa8a88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7bc8,0);
    bRam0000000004fa8a88 = 1;
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      if (pcRam0000000004fa8ad0 == (code *)0x0) {
        pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
      }
      (*pcRam0000000004fa8ad0)(lVar4,&stack0xffffffffffffffe8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

