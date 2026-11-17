/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$RunStartPopup
System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_BattleRoyaleFeature__RunStartPopup (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$RunStartPopup
   System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_BattleRoyaleFeature__RunStartPopup
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleFeature__RunStartPopup_2226b90(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb2ce0;
  if ((bRam0000000004f9bde3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2ce0);
                    /* try { // try from 02326bc0 to 02426bc3 has its CatchHandler @ 02326be8 */
    bRam0000000004f9bde3 = 1;
  }
                    /* try { // try from 02326bc4 to 02426bc7 has its CatchHandler @ 02326be0 */
                    /* try { // try from 02326bc8 to 02426bcb has its CatchHandler @ 02326bdc */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 02326bcc to 02426c0b has its CatchHandler @ 02326910 */
  System_Object___ctor_4870e5c(lVar2,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02326ae4 with catch @ 02326bd8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02326bc8 with catch @ 02326bdc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02326bc4 with catch @ 02326be0
                        */
  *(undefined4 *)(lVar2 + 0x10) = 0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02326af0 with catch @ 02326be4
                        */
  *(undefined8 *)(lVar2 + 0x20) = param_1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02326bc0 with catch @ 02326be8
                        */
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02326aa8 with catch @ 02326bec
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02326a44 with catch @ 02326bf0
                        */
  return lVar2;
}

