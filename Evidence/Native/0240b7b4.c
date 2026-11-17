/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$get_RescueRect
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_HudPanel__get_RescueRect (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$get_RescueRect
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_HudPanel__get_RescueRect
   (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HudPanel__get_RescueRect_230b7b4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0240b7bc to 0250b7c3 has its CatchHandler @ 0240b810 */
  if ((bRam0000000004f9c517 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c517 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0240b7fc to 0250b7ff has its CatchHandler @ 0240b814 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240b790 with catch @ 0240b800
                       try { // try from 0240b800 to 0250b833 has its CatchHandler @ 0240b5ec */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240b794 with catch @ 0240b804
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240b708 with catch @ 0240b808
                        */
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240b6dc with catch @ 0240b80c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240b6b4 with catch @ 0240b810
                       catch(type#1 @ 049bb748) { ... } // from try @ 0240b7bc with catch @ 0240b810
                        */
  uVar4 = 0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240b6c4 with catch @ 0240b814
                       catch(type#1 @ 049bb748) { ... } // from try @ 0240b7fc with catch @ 0240b814
                        */
  if ((uVar2 & 1) != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240b734 with catch @ 0240b818
                        */
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x80),0),
       lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar3,0);
                    /* try { // try from 0240b834 to 0250b837 has its CatchHandler @ 0240b854 */
                    /* try { // try from 0240b838 to 0250b857 has its CatchHandler @ 0240b5ec */
    uVar4 = 0;
    if ((uVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x80);
    }
  }
  return uVar4;
}

