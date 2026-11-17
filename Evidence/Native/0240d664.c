/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$CanPressItem
bool Dino_BusSand_App_UI_HudPanel__CanPressItem (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$CanPressItem
   bool Dino_BusSand_App_UI_HudPanel__CanPressItem (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t
   id, const MethodInfo* method); */

bool Dino_BusSand_App_UI_HudPanel__CanPressItem_230d664(long param_1,int param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c529 & 1) == 0) {
                    /* try { // try from 0240d698 to 0250d6c3 has its CatchHandler @ 0240d4f8 */
    FUN_02132f7c(PTR_DAT_04cb8128);
    FUN_02132f7c(PTR_DAT_04cb8130);
    FUN_02132f7c(PTR_DAT_04cb8138);
    FUN_02132f7c(PTR_DAT_04cb8140);
                    /* try { // try from 0240d6c4 to 0250d6c7 has its CatchHandler @ 0240d6d0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240d618 with catch @ 0240d6c8
                       try { // try from 0240d6c8 to 0250d6eb has its CatchHandler @ 0240d4f8 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240d638 with catch @ 0240d6cc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240d6c4 with catch @ 0240d6d0
                        */
    bRam0000000004f9c529 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0240d6ec to 0250d6ef has its CatchHandler @ 0240d708 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0240d6f0 to 0250d70b has its CatchHandler @ 0240d4f8 */
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    return false;
  }
                    /* catch() { ... } // from try @ 0240d6ec with catch @ 0240d708 */
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 0240d70c to 0250d713 has its CatchHandler @ 0240d71c */
                    /* try { // try from 0240d714 to 0250d71f has its CatchHandler @ 0240d4f8 */
    if (*(int *)(*(long *)(param_1 + 0x40) + 0x20) != 2) {
      return false;
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0240d70c with catch @ 0240d71c
                        */
    if (*(int *)(param_1 + 0x48) != 0) {
      return false;
    }
    uVar4 = Dino_BusSand_App_UI_HudPanel__get_BoosterBusy_230d5a4(param_1);
    if ((uVar4 & 1) != 0) {
      return false;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_48,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cb8140);
      puVar1 = PTR_DAT_04cb8130;
      do {
        uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_48,*(undefined8 *)puVar1);
        if ((uVar4 & 1) == 0) {
          bVar2 = false;
          goto LAB_0240d7b0;
        }
        if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      } while (*(int *)(lStack_38 + 0x10) != param_2);
      iVar3 = Dino_BusSand_App_UI_HudPanel__StateOf_230d45c(uVar4,param_2);
      bVar2 = iVar3 != 0;
LAB_0240d7b0:
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_48,*(undefined8 *)PTR_DAT_04cb8128);
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

